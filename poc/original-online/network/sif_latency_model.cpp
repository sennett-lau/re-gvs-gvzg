// B34 starvation model for the SIF latency candidate. It links the vendor EE
// kernel.cpp with host stubs and drives three threads shaped like the browser
// top page (core.elf static RE):
//  - main (priority 24): wake the task thread, WaitSema on the task-slot
//    semaphore, then spin to the next vblank; every 64th frame one synchronous
//    SIF RPC (WaitSema until the reply interrupt);
//  - task (priority 25): one step of work with N synchronous RPCs, then
//    SignalSema(slot) + SleepThread;
//  - worker (priority 63): always ready, like the woken libhttp worker.
// An RPC reply arrives after the server cost plus a configurable transport
// latency and is delivered with iSignalSema, as the SIF0 interrupt handler does.
// Output: the worker's share of EE time per latency.
#include "kernel.hpp"
#include "hw.hpp"
#include "iop/sif.hpp"
#include "ps2/memory.hpp"
#include "ps2/system.hpp"

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>

namespace ps2 {
alignas(16) std::uint8_t g_ram[kRamSize]{}, g_spr[kScratchpadSize]{};
Cpu g_cpu{};
Options g_options;
bool g_watch_on = false;
std::uint32_t g_watch_base = 0, g_watch_end = 0;
std::uint64_t g_clock = 0;
std::string g_halt;
std::uint64_t now() { return g_clock; }
std::uint64_t hblank_cycles() { return 1; }
void set_budget(Cpu &c, std::int64_t cycles) { c.budget = static_cast<std::int32_t>(cycles); }
void request_iop_sync() {}
void schedule(int, std::uint64_t, std::function<void()>) {}
void halt(const std::string &reason) { g_halt = reason; }
bool halted() { return !g_halt.empty(); }
bool has_code(std::uint32_t) { return false; }
void dispatch(Cpu &, std::uint32_t, std::uint32_t) {}
void watch_hit(std::uint32_t, std::uint32_t, const char *) {}
std::uint8_t slow_ld8(std::uint32_t) { return 0; }
std::uint32_t slow_ld32(std::uint32_t) { return 0; }
void slow_st8(std::uint32_t, std::uint8_t) {}
void slow_st32(std::uint32_t, std::uint32_t) {}
void slow_st64(std::uint32_t, std::uint64_t) {}
void save_context(const Cpu &c, ThreadContext &t) {
    std::memcpy(t.r, c.r, sizeof t.r); t.hi = c.hi; t.lo = c.lo; t.sa = c.sa; t.pc = c.pc & ~kUnwind;
    std::memcpy(t.f, c.f, sizeof t.f); t.facc = c.facc; t.fcr31 = c.fcr31;
}
void load_context(Cpu &c, const ThreadContext &t) {
    std::memcpy(c.r, t.r, sizeof t.r); c.hi = t.hi; c.lo = t.lo; c.sa = t.sa; c.pc = t.pc;
    std::memcpy(c.f, t.f, sizeof t.f); c.facc = t.facc; c.fcr31 = t.fcr31;
}
namespace hw {
std::uint32_t intc_pending() { return 0; }
std::uint32_t dmac_pending() { return 0; }
void intc_ack(unsigned) {}
void dmac_ack(unsigned) {}
bool intc_set_mask(unsigned, bool) { return false; }
bool dmac_set_mask(unsigned, bool) { return false; }
void gs_set_crt(std::uint32_t, std::uint32_t, std::uint32_t) {}
void gs_set_imr(std::uint64_t) {}
std::uint64_t gs_imr() { return 0; }
std::uint64_t gs_csr() { return 0; }
}
namespace sif {
void packet_processed() {}
std::uint32_t get_reg(std::uint32_t) { return 0; }
void set_reg(std::uint32_t, std::uint32_t) {}
std::uint32_t set_dma(std::uint32_t, std::uint32_t) { return 0; }
int dma_stat(std::uint32_t) { return 0; }
}
}

namespace {
using namespace ps2;
constexpr std::uint32_t kMain = 0x00100000u, kTask = 0x00200000u, kWorker = 0x00300000u, kParams = 0x00080000u;
constexpr std::uint64_t kFrame = 294912000u / 60u, kUs = 295u;
int slot = -1, rpc_main = -1, rpc_task = -1, task = -1, worker = -1;
std::uint64_t worker_cycles = 0, frame = 0, next_vblank = kFrame;
std::uint64_t main_due = 0, task_due = 0, latency = 0, server = 0, task_work = 0;
unsigned task_rpcs = 0, task_left = 0;

void syscall(Cpu &c, std::uint32_t number, std::uint32_t continuation, std::uint32_t a0 = 0, std::uint32_t a1 = 0) {
    c.r[3].w[0] = number; c.r[4].w[0] = a0; c.r[5].w[0] = a1;
    c.pc = continuation;
    kernel::handle_syscall(c, continuation - 4);
}
int sema(Cpu &c, std::uint32_t init) {
    std::uint32_t s[6] = {0, 1, init, 0, 0, 0};
    std::memcpy(g_ram + kParams, s, sizeof s);
    syscall(c, 0x40, c.pc, kParams);
    return c.r[2].sw[0];
}
int thread(Cpu &c, std::uint32_t entry, std::uint32_t stack, std::uint32_t priority) {
    std::uint32_t params[9] = {0, entry, stack, 0x1000, 0, priority, 0, 0, 0};
    std::memcpy(g_ram + kParams, params, sizeof params);
    syscall(c, 0x20, c.pc, kParams);
    return c.r[2].sw[0];
}
// Interrupt-side reply: iSignalSema without changing the interrupted context.
void reply(Cpu &c, int id) {
    Cpu saved = c;
    c.r[3].w[0] = 0x43; c.r[4].w[0] = static_cast<std::uint32_t>(id);
    kernel::handle_syscall(c, c.pc - 4);
    c = saved;
}
// One step of the current thread; each step advances the EE clock.
void step(Cpu &c) {
    switch (c.pc) {
    case kMain: syscall(c, 0x33, kMain + 4, static_cast<std::uint32_t>(task)); g_clock += 200; break;      // WakeupThread(task)
    case kMain + 4: syscall(c, 0x44, kMain + 8, static_cast<std::uint32_t>(slot)); break;                  // WaitSema(slot)
    case kMain + 8:
        if (frame % 64 == 0) { main_due = g_clock + server + latency; syscall(c, 0x44, kMain + 12, static_cast<std::uint32_t>(rpc_main)); }
        else c.pc = kMain + 12;
        break;
    case kMain + 12:                                                                                          // spin to the next vblank
        if (g_clock < next_vblank) g_clock = std::min(next_vblank, g_clock + 20 * kUs);
        else { ++frame; next_vblank += kFrame; c.pc = kMain; }
        break;
    case kTask: g_clock += task_work; task_left = task_rpcs; c.pc = kTask + 4; break;                         // one game step
    case kTask + 4:
        if (task_left) { --task_left; task_due = g_clock + server + latency; syscall(c, 0x44, kTask + 4, static_cast<std::uint32_t>(rpc_task)); }
        else c.pc = kTask + 8;
        break;
    case kTask + 8: syscall(c, 0x42, kTask + 12, static_cast<std::uint32_t>(slot)); break;                    // SignalSema(slot)
    case kTask + 12: syscall(c, 0x32, kTask); break;                                                          // SleepThread
    case kWorker: g_clock += 5 * kUs; worker_cycles += 5 * kUs; break;                                        // always runnable
    default: std::fprintf(stderr, "unexpected pc 0x%08X\n", c.pc); std::exit(3);
    }
}
}

// Usage: b34_model <latency_us> <server_us> <task_rpcs> <task_work_us> <frames>
int main(int argc, char **argv) {
    if (argc != 6) return 2;
    latency = std::strtoull(argv[1], nullptr, 10) * kUs; server = std::strtoull(argv[2], nullptr, 10) * kUs;
    task_rpcs = static_cast<unsigned>(std::atoi(argv[3])); task_work = std::strtoull(argv[4], nullptr, 10) * kUs;
    const std::uint64_t frames = std::strtoull(argv[5], nullptr, 10);
    Cpu &c = g_cpu;
    kernel::reset();
    kernel::start_main_thread(kMain, 0, 0, 0);
    syscall(c, 0x29, kMain, 0, 24);   // ChangeThreadPriority(self, 24)
    slot = sema(c, 0); rpc_main = sema(c, 0); rpc_task = sema(c, 0);
    task = thread(c, kTask + 12, 0x01000000u, 25);   // starts at its SleepThread
    worker = thread(c, kWorker, 0x01010000u, 63);
    syscall(c, 0x22, kMain, static_cast<std::uint32_t>(task));
    syscall(c, 0x22, kMain, static_cast<std::uint32_t>(worker));
    c.pc = kMain;
    const std::uint64_t end = frames * kFrame;
    while (g_clock < end && !halted()) {
        if (main_due && g_clock >= main_due) { main_due = 0; reply(c, rpc_main); }
        if (task_due && g_clock >= task_due) { task_due = 0; reply(c, rpc_task); }
        c.pc &= ~kUnwind;
        kernel::service(c);
        c.pc &= ~kUnwind;
        if (c.pc == kIdle) { g_clock += kUs; continue; }
        step(c);
    }
    std::printf("{\"latency_us\":%s,\"server_us\":%s,\"task_rpcs\":%u,\"task_work_us\":%s,\"frames\":%llu,"
                "\"worker_ms_per_s\":%.3f,\"halt\":\"%s\"}\n", argv[1], argv[2], task_rpcs, argv[4],
                static_cast<unsigned long long>(frame), worker_cycles / 294912.0 / (g_clock / 294912000.0), g_halt.c_str());
}
