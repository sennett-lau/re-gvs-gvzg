// Native test for the opt-in SIF delivery latency candidate (B34). It links one
// runtime/src/iop/sif.cpp, vendor or prepared by sif_latency_prepare.py, with
// stubs for everything else, and drives real EE->IOP commands through
// sif::set_dma. Build with -DEXPECT_LATENCY_US=0 for the vendor file or with the
// prepared latency; run_sif_latency_tests.py builds and runs every variant.
#include "ps2/disc.hpp"
#include "ps2/memory.hpp"
#include "ps2/state.hpp"
#include "ps2/system.hpp"
#include "hw.hpp"
#include "iop/iop.hpp"
#include "iop/io.hpp"
#include "iop/kernel.hpp"
#include "iop/sif.hpp"

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <optional>
#include <vector>

#ifndef EXPECT_LATENCY_US
#error "define EXPECT_LATENCY_US"
#endif

namespace {
[[noreturn]] void unexpected(const char *what) {
    std::fprintf(stderr, "unexpected call: %s\n", what);
    std::abort();
}
struct Raise { unsigned channel; std::uint64_t at; };
struct Scheduled { int id; std::uint64_t at; std::function<void()> action; };
std::uint64_t g_now = 0;
std::vector<Raise> g_raises;
std::vector<Scheduled> g_scheduled;
}

namespace ps2 {
Options g_options;
alignas(64) std::uint8_t g_ram[kRamSize];
std::uint64_t now() { return g_now; }
void schedule(int event, std::uint64_t at, std::function<void()> action) {
    std::erase_if(g_scheduled, [&](const Scheduled &s) { return s.id == event; });
    g_scheduled.push_back({event, at, std::move(action)});
}
void watch_span(std::uint32_t, std::uint32_t, const char *) {}
namespace hw { void dmac_raise(unsigned channel) { g_raises.push_back({channel, g_now}); } }
namespace disc {
std::optional<Entry> find(const std::string &) { unexpected("disc::find"); }
bool read(std::uint32_t, std::uint32_t, void *) { unexpected("disc::read"); }
}
namespace iop {
alignas(64) std::uint8_t g_ram[kRamSize];
std::uint32_t read32(std::uint32_t a) { return ram32(a); }
void write32(std::uint32_t a, std::uint32_t v) { set_ram32(a, v); }
std::uint32_t register_hle(const std::string &, std::uint32_t, HleFunction) { unexpected("register_hle"); }
std::int32_t load_module(const std::string &, const std::string &, std::function<void(int, int)>) { unexpected("load_module"); }
std::int32_t load_module_buffer(const std::vector<std::uint8_t> &, const std::string &, const std::string &, std::function<void(int, int)>) {
    unexpected("load_module_buffer");
}
namespace io {
int open(const std::string &, std::uint32_t) { unexpected("io::open"); }
int close(int) { unexpected("io::close"); }
int read(int, std::uint8_t *, std::uint32_t) { unexpected("io::read"); }
std::int64_t seek(int, std::int64_t, int) { unexpected("io::seek"); }
bool stat(const std::string &, std::uint32_t &, std::uint32_t &) { unexpected("io::stat"); }
}
namespace kernel {
bool g_trace_modules = false;
std::uint64_t now() { return g_now / 8; }
Thread *current() { return nullptr; }
Thread *thread(int) { return nullptr; }
void block(Cpu &, WaitKind, int) { unexpected("block"); }
void wake(Thread &, std::uint32_t) { unexpected("wake"); }
void reschedule() {}
std::uint32_t call_guest(std::uint32_t, std::uint32_t, std::uint32_t, std::uint32_t, std::uint32_t) { unexpected("call_guest"); }
std::uint32_t alloc(std::uint32_t, int, std::uint32_t) { unexpected("alloc"); }
void free(std::uint32_t) { unexpected("free"); }
std::uint32_t free_total() { unexpected("free_total"); }
std::uint32_t free_max() { unexpected("free_max"); }
std::uint32_t hle_stub(const HleFunction &) { unexpected("hle_stub"); }
void register_hle_library(const std::string &, std::uint32_t) { unexpected("register_hle_library"); }
void register_job(std::uint32_t, JobHandler) { unexpected("register_job"); }
void schedule(std::uint64_t, const Job &) { unexpected("iop schedule"); }
void install_cdvdfsv() { unexpected("install_cdvdfsv"); }
void trace_hle(const char *, const char *, const Cpu &) {}
}
}
}

namespace {
constexpr std::uint32_t kRecv = 0x00100000u, kPacket = 0x00200000u, kDescriptor = 0x00300000u;
constexpr std::uint32_t kServer = 0x01234567u, kClient = 0x00C22C20u;
constexpr std::uint64_t kLatency = ps2::kEeClock * EXPECT_LATENCY_US / 1000000u;
int g_failures = 0;

void check(bool ok, const char *what) {
    std::printf("%s %s\n", ok ? "ok  " : "FAIL", what);
    if (!ok) ++g_failures;
}

void put(std::uint32_t a, std::uint32_t v) { std::memcpy(ps2::g_ram + a, &v, 4); }
std::uint32_t get(std::uint32_t a) {
    std::uint32_t v;
    std::memcpy(&v, ps2::g_ram + a, 4);
    return v;
}

// One EE->IOP command packet through the SIF DMA path, as sceSifSetDma does.
void command(const std::vector<std::uint32_t> &words) {
    for (std::size_t i = 0; i < words.size(); ++i) put(kPacket + 4 * i, words[i]);
    put(kDescriptor, kPacket);
    put(kDescriptor + 4, 0x0001E000u);
    put(kDescriptor + 8, static_cast<std::uint32_t>(words.size() * 4));
    put(kDescriptor + 12, 0);
    ps2::sif::set_dma(kDescriptor, 1);
}

void call(std::uint32_t record) {
    command({56, 0, 0x8000000Au, 0, record, 0x00400000u, 7, kClient, 1, 0, 0x00500000u, 0, 0, kServer ^ 0xACACACACu});
}

void run_due() {
    std::vector<Scheduled> due;
    std::erase_if(g_scheduled, [&](Scheduled &s) {
        if (s.at > g_now) return false;
        due.push_back(std::move(s));
        return true;
    });
    for (auto &s : due) s.action();
}

bool delivered(std::size_t raises, std::uint32_t record) {
    return g_raises.size() == raises && g_raises.back().channel == 5 && get(kRecv + 8) == 0x80000008u && get(kRecv + 16) == record &&
           get(kRecv + 28) == kClient && get(kRecv + 32) == 0x8000000Au;
}
}

int main() {
    ps2::sif::reset();
    command({20, 0, 0x80000002u, 0, kRecv});
    int invoked = 0;
    ps2::sif::register_hle_server(kServer, [&](std::uint32_t, std::uint32_t, std::uint32_t, std::uint32_t, std::uint32_t) {
        ++invoked;
        return true;
    });

    // 1. A blocking call: the HLE server replies inside the command.
    const std::uint64_t t0 = 1000000;
    g_now = t0;
    call(1);
    check(invoked == 1, "server ran inside the EE command");
    if (kLatency == 0) {
        check(delivered(1, 1) && g_raises[0].at == t0, "vendor: reply in EE RAM and DMAC 5 raised at the call time");
    } else {
        check(g_raises.empty(), "latency: no reply at the call time");
        check(g_scheduled.size() == 1 && g_scheduled[0].id == ps2::hw::kEventIop && g_scheduled[0].at == t0 + kLatency,
              "latency: retry scheduled on kEventIop at call time + latency");
        g_now = t0 + kLatency - 1;
        ps2::sif::pump();
        check(g_raises.empty(), "latency: sync_iop pump one cycle early delivers nothing");
        g_now = t0 + kLatency;
        run_due();
        check(delivered(1, 1) && g_raises[0].at == t0 + kLatency, "latency: reply in EE RAM and DMAC 5 raised exactly at due time");
    }

    ps2::sif::packet_processed();  // the EE's SIF0 handler has taken reply 1

    // 2. Order and back-pressure: a second reply waits for the EE to process the first.
    const std::uint64_t t1 = t0 + 10 * kLatency + 5000;
    g_now = t1;
    call(2);
    g_now = t1 + 10;
    call(3);
    g_now = t1 + kLatency;
    run_due();
    ps2::sif::pump();
    check(delivered(2, 2), "reply 2 delivered first; reply 3 waits for packet_processed");

    // 3. Save state while reply 3 is queued; the format must not change.
    ps2::state::Writer writer;
    ps2::sif::state(writer);
    std::printf("state_bytes %zu\n", writer.out.size());
    unsigned long long digest = 1469598103934665603ull;
    for (std::uint8_t b : writer.out) digest = (digest ^ b) * 1099511628211ull;
    std::printf("state_fnv1a64 %016llx\n", digest);

    g_now = t1 + 10 + kLatency / 2;
    ps2::sif::packet_processed();
    if (kLatency == 0) check(delivered(3, 3), "vendor: reply 3 delivered when the EE processed reply 2");
    else {
        check(g_raises.size() == 2, "latency: reply 3 not yet due when the EE processed reply 2");
        g_now = t1 + 10 + kLatency;
        run_due();
        check(delivered(3, 3) && g_raises[2].at == t1 + 10 + kLatency, "latency: reply 3 delivered at its own due time");
    }

    // 4. Load that state: reply 3 is queued again and due at once.
    ps2::state::Reader reader(writer.out.data(), writer.out.size());
    ps2::sif::state(reader);
    g_scheduled.clear();
    g_raises.resize(2);
    put(kRecv + 16, 0);
    g_now = t1 + 11;
    ps2::sif::packet_processed();
    check(delivered(3, 3) && g_raises[2].at == t1 + 11, "after load: queued reply 3 delivered at once");

    // 5. reset() drops queued packets and their delivery times together.
    g_now += 1000;
    call(4);
    call(5);
    ps2::sif::reset();
    command({20, 0, 0x80000002u, 0, kRecv});
    g_now += 10 * kLatency + 1;
    run_due();
    ps2::sif::pump();
    const std::size_t before = g_raises.size();
    call(6);
    g_now += kLatency;
    run_due();
    ps2::sif::pump();
    check(g_raises.size() == before + 1 && get(kRecv + 16) == 6,
          "after reset: no stale packet; a new reply is delivered alone");

    std::printf("%s latency_us=%d cycles=%llu failures=%d\n", g_failures ? "FAILED" : "PASSED", EXPECT_LATENCY_US,
                static_cast<unsigned long long>(kLatency), g_failures);
    return g_failures ? 1 : 0;
}
