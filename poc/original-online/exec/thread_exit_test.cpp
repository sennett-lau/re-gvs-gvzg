// Links a copied EE kernel.cpp with host stubs and drives its real syscalls and
// service/reschedule path. Two equal-priority threads mirror the observed
// libhttp worker/supervisor shape: the worker signals a semaphore and returns.
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
constexpr std::uint32_t kMain = 0x00100000u, kMainAfterSleep = 0x00100100u;
constexpr std::uint32_t kWorker = 0x00200000u, kSupervisor = 0x00300000u, kReturner = 0x00400000u;
constexpr std::uint32_t kParams = 0x00080000u, kStatus = 0x00080100u;
std::string mode;
int semaphore = -1, worker = -1, supervisor = -1;
int seen_worker_status = 0, terminate_result = 99, delete_result = 99;
bool worker_returned = false, supervisor_acquired = false, main_resumed = false;
unsigned idles = 0, returners = 0;

// A syscall instruction: the continuation PC is stored before the kernel may switch.
void syscall(Cpu &c, std::uint32_t number, std::uint32_t continuation, std::uint32_t a0 = 0, std::uint32_t a1 = 0) {
    c.r[3].w[0] = number; c.r[4].w[0] = a0; c.r[5].w[0] = a1;
    c.pc = continuation;
    kernel::handle_syscall(c, continuation - 4);
}

int create_thread(Cpu &c, std::uint32_t entry, std::uint32_t stack, std::uint32_t priority = 0x3F) {
    std::uint32_t params[9] = {0, entry, stack, 0x1000, 0, priority, 0, 0, 0};
    std::memcpy(g_ram + kParams, params, sizeof params);
    syscall(c, 0x20, c.pc, kParams);
    return c.r[2].sw[0];
}

int status(Cpu &c, int id) {
    const std::uint32_t pc = c.pc;
    syscall(c, 0x30, pc, static_cast<std::uint32_t>(id), kStatus);
    c.pc = pc;
    return c.r[2].sw[0];
}

// One guest step for whichever thread is current; mirrors dispatch returning to run().
void step(Cpu &c) {
    const bool equal = mode == "equal";
    switch (c.pc) {
    case kWorker: syscall(c, 0x42, kWorker + 4, static_cast<std::uint32_t>(semaphore)); break;  // SignalSema
    case kWorker + 4: worker_returned = true; c.pc = c.r[31].w[0]; break;                         // jr ra
    case kSupervisor: syscall(c, 0x44, kSupervisor + 4, static_cast<std::uint32_t>(semaphore)); break;  // WaitSema
    case kSupervisor + 4:
        supervisor_acquired = true; seen_worker_status = status(c, worker);
        if (equal) syscall(c, 0x25, kSupervisor + 8, static_cast<std::uint32_t>(worker));          // TerminateThread
        else c.pc = kSupervisor + 12;
        break;
    case kSupervisor + 8: terminate_result = c.r[2].sw[0]; syscall(c, 0x21, kSupervisor + 12, static_cast<std::uint32_t>(worker)); break;  // DeleteThread
    case kSupervisor + 12:
        if (equal) delete_result = c.r[2].sw[0];
        syscall(c, 0x33, kSupervisor + 16, 1);                                                      // WakeupThread(main)
        break;
    case kSupervisor + 16: syscall(c, 0x23, kSupervisor + 20); break;                              // ExitThread
    case kReturner: ++returners; c.pc = c.r[31].w[0]; break;                                        // returns at once
    case kMainAfterSleep: main_resumed = true; syscall(c, 0x32, kMainAfterSleep); break;           // sleep again
    default: std::fprintf(stderr, "unexpected pc 0x%08X\n", c.pc); std::exit(3);
    }
}
}

// Modes: equal (libhttp shape), higher (supervisor preempts the worker before
// its return), many (70 returning threads exercise the record bound).
int main(int argc, char **argv) {
    mode = argc > 1 ? argv[1] : "equal";
    Cpu &c = g_cpu;
    kernel::reset();
    kernel::start_main_thread(kMain, 0, 0, 0);
    std::vector<int> returning;
    if (mode == "many") {
        for (unsigned i = 0; i < 70; ++i) returning.push_back(create_thread(c, kReturner, 0x01000000u + i * 0x2000u));
        for (const int id : returning) syscall(c, 0x22, kMain, static_cast<std::uint32_t>(id));
    } else {
        std::uint32_t sema[6] = {0, 1, 0, 0, 0, 0};
        std::memcpy(g_ram + kParams, sema, sizeof sema);
        syscall(c, 0x40, kMain, kParams);
        semaphore = c.r[2].sw[0];
        worker = create_thread(c, kWorker, 0x01000000u);
        supervisor = create_thread(c, kSupervisor, 0x01010000u, mode == "higher" ? 0x20 : 0x3F);
        syscall(c, 0x22, kMain, static_cast<std::uint32_t>(worker));
        syscall(c, 0x22, kMain, static_cast<std::uint32_t>(supervisor));
    }
    syscall(c, 0x32, kMainAfterSleep);  // SleepThread: a lower-priority thread becomes current.
    for (unsigned i = 0; i < 400 && !halted(); ++i) {
        c.pc &= ~kUnwind;
        kernel::service(c);
        c.pc &= ~kUnwind;
        if (c.pc == kIdle) { ++idles; g_clock += 1000; continue; }
        step(c);
    }
    unsigned dormant = 0;
    for (const int id : returning) dormant += status(c, id) == 16;
    const int worker_status = worker < 0 ? 0 : status(c, worker);
    std::printf("{\"mode\":\"%s\",\"semaphore\":%d,\"worker\":%d,\"supervisor\":%d,\"worker_returned\":%s,\"supervisor_acquired\":%s,"
                "\"main_resumed\":%s,\"seen_worker_status\":%d,\"terminate_result\":%d,\"delete_result\":%d,\"worker_status\":%d,"
                "\"returners\":%u,\"dormant\":%u,\"current\":%d,\"idles\":%u,\"halt\":\"%s\"}\n",
                mode.c_str(), semaphore, worker, supervisor, worker_returned ? "true" : "false", supervisor_acquired ? "true" : "false",
                main_resumed ? "true" : "false", seen_worker_status, terminate_result, delete_result, worker_status,
                returners, dormant, kernel::current_thread(), idles, g_halt.c_str());
    // With every thread asleep or dormant this is the ordinary idle state.
    for (unsigned i = 0; i < 4; ++i) { c.pc &= ~kUnwind; kernel::service(c); }
    std::printf("{\"final_current\":%d,\"final_pc\":%u}\n", kernel::current_thread(), c.pc & ~kUnwind);
}
