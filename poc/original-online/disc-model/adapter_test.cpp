// Actual adapter.inc with scheduler/memory/disc mocks. The test runner changes
// only its preloaded ELF pathname to a temporary synthetic reference file.
// This is not an original IOP execution or physical scheduling/timing proof.
#include "fixture.hpp"
#include <cassert>
#include <cstdio>
#include <map>
#include <memory>

using namespace disc_model_test;
struct Cpu { std::uint32_t r[32]{}; };
enum {kWait = 4, kWaitSuspend = 12, kWaitHle = 10, kJobDiscModel = 99};
struct Thread { int id = 1, status = 1, wait = 0, wait_id = 0; unsigned result = 999; } caller, sync_caller;
struct Job { unsigned kind, a; };
struct { bool busy = false; unsigned error = 77, callback = 123; } g_cd;
static Fixture fixture;
static bool interrupt = false, has_thread = true, use_sync = false;
static unsigned callbacks = 0, wakes = 0;
static std::uint64_t tick = 0;
static std::vector<std::pair<std::uint64_t,Job>> jobs;
static std::vector<std::pair<unsigned,unsigned>> writes;
static std::string halt_reason;
static std::function<void()> on_callback;
namespace ps2 { void halt(const char* why) { halt_reason = why; } }
unsigned phys(unsigned a) { return a & 0x1FFFFFFF; }
unsigned arg(const Cpu& c, int i) { return c.r[4+i]; }
void write8(unsigned a, std::uint8_t v) { writes.emplace_back(a,v); }
Thread* current() { return use_sync ? &sync_caller : has_thread ? &caller : nullptr; }
Thread* thread(int id) { return id == sync_caller.id ? &sync_caller : has_thread && id == caller.id ? &caller : nullptr; }
bool in_interrupt() { return interrupt; }
std::uint64_t now() { return tick; }
std::uint64_t usec_to_cycles(std::uint64_t n) { return n; }
std::uint64_t read_cycles(unsigned n) { return 400 + n*250; }
void block(Cpu&, int wait, int id) { current()->status = kWait; current()->wait = wait; current()->wait_id = id; }
void schedule(std::uint64_t at, Job job) { jobs.emplace_back(at, job); }
void wake(Thread& t, unsigned result) { ++wakes; t.result = result; t.wait = 0; t.status = 2; }
void reschedule() {}
void call_guest(unsigned address, unsigned reason) { assert(address == 123 && reason == 1); ++callbacks; if (on_callback) on_callback(); }
namespace disc {
std::uint64_t model_media_epoch() { return fixture.epoch; }
std::uint64_t model_media_bytes() { return fixture.media.size(); }
bool model_ready(std::uint64_t at, std::size_t size) { return fixture.input().ready(at,size); }
bool model_read_exact(std::uint64_t at, std::uint8_t* out, std::size_t size) { return fixture.input().read(at,out,size); }
}
#include "adapter-fixture.inc"

static void reset() {
    fixture = Fixture();
    fixture.cnf("BOOT2 = cdrom0:\\SLPS_254.19;1\n");
    record(fixture.media.data()+fixture.elf_record, "SLPS_254.19;1", 80, unsigned(fixture.reference.size()));
    auto* file = std::fopen("reference.elf", "wb"); assert(file);
    assert(std::fwrite(fixture.reference.data(),1,fixture.reference.size(),file) == fixture.reference.size());
    assert(std::fclose(file) == 0);
    caller = {}; sync_caller = {}; sync_caller.id = 2; use_sync = false;
    g_cd.busy = false; g_cd.error = 77; g_disc_model = {};
    tick = 0; jobs.clear(); writes.clear(); halt_reason.clear(); interrupt = false; has_thread = true;
    callbacks = wakes = 0;
    on_callback = {};
}
static void pump() {
    for (unsigned limit = 0; !jobs.empty() && limit < 31000; ++limit) {
        const auto next = jobs.front(); jobs.erase(jobs.begin()); tick = next.first; disc_model_poll(next.second);
    }
    assert(jobs.empty());
}
static Cpu begin(unsigned out = 101) { Cpu c; c.r[4] = out; disc_model_begin(c); return c; }
int main() {
    reset(); begin();
    assert(g_cd.busy && g_cd.error == 0 && caller.status == kWait && writes.size() == 5);
    for (unsigned i=0;i<5;++i) assert(writes[i].first == 105-i && writes[i].second == 0);
    pump(); assert(wakes == 1 && caller.result == 1 && writes.size() == 15 && callbacks == 1 && !g_cd.busy);
    // Reject a continuation after ReleaseWaitThread or reuse of the same ID
    // in a different wait; no late output or wake of that other operation.
    for (int mode : {0,1,2}) {
        reset(); begin();
        if (mode == 0) caller.status = 2;
        if (mode == 1) ++caller.wait_id;
        if (mode == 2) has_thread = false;
        pump(); assert(wakes == 0 && writes.size() == 5 && !g_cd.busy && !callbacks);
    }
    reset(); begin(); const auto old = jobs.front().second; jobs.clear();
    g_disc_model = {}; g_cd.busy = false; caller = {}; begin();
    disc_model_poll(old); assert(writes.size() == 10 && wakes == 0);
    pump(); assert(wakes == 1 && caller.result == 1);
    reset(); begin(); ++fixture.epoch; pump(); assert(caller.result == 0 && writes.size() == 5);
    reset(); fixture.available = false; begin(); pump();
    assert(caller.result == 0 && writes.size() == 5 && tick >= 30'000'000 && callbacks == 0);
    reset(); fixture.short_read = true; begin(); pump(); assert(caller.result == 0 && writes.size() == 5 && !callbacks);
    reset(); fixture.media[80*2048+500] ^= 1; begin(); pump(); assert(caller.result == 0 && writes.size() == 5 && callbacks == 1);
    for (bool released : {false, true}) {
        reset(); begin(); use_sync = true; Cpu c; assert(disc_model_sync(c)); use_sync = false;
        if (released) ++sync_caller.wait_id; // Same thread now waits for a different operation.
        pump(); assert(wakes == (released ? 1u : 2u) && caller.result == 1);
        assert(sync_caller.result == (released ? 999u : 0u));
    }
    for (bool reset_in_callback : {false, true}) {
        reset(); begin();
        on_callback = [reset_in_callback] {
            if (reset_in_callback) { g_disc_model = {}; g_cd.busy = false; caller = {}; }
            else caller.status = 2;
        };
        pump(); assert(wakes == 0 && writes.size() == 5 && callbacks == 1 && !g_cd.busy);
    }
    reset(); begin(); interrupt = true; Cpu sync; assert(disc_model_sync(sync));
    assert(!halt_reason.empty() && g_disc_model.sync_waiters.empty());
    for (unsigned out : {0x007FFFFCu, 0x1F8003FCu, 0x1F801000u, 0xFFFFFFFCu}) {
        reset(); begin(out); assert(!halt_reason.empty() && writes.empty() && jobs.empty());
    }
    for (unsigned out : {0x001FFFFFu, 0x80000001u, 0x1F8003FBu}) {
        reset(); begin(out); pump(); assert(halt_reason.empty() && caller.result == 1);
    }
    for (int mode : {0,1,2,3}) {
        reset(); if (mode == 0) g_cd.busy = true; if (mode == 1) interrupt = true;
        if (mode == 2) has_thread = false; if (mode == 3) fixture.epoch = 0;
        begin(); assert(writes.size() == 5 && jobs.empty() && !wakes);
    }
    std::puts("adapter: scheduling, completion, cancellation, reset, timeout and output-span cases passed");
}
