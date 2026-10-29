// Link only the unchanged recompiler's private output for the live-observed
// first block. Synthetic RAM tests do not establish game/network progression.
#include "units.hpp"
#include <array>
#include <cassert>
#include <cstring>

namespace ps2 {
alignas(16) std::uint8_t g_ram[kRamSize]{}, g_spr[kScratchpadSize]{};
bool g_watch_on = false, yield_requested = false;
std::uint32_t g_watch_base = 0, g_watch_end = 0, dispatch_count = 0, preempt_count = 0;
void watch_hit(std::uint32_t, std::uint32_t, const char*) { assert(false); }
std::uint8_t slow_ld8(std::uint32_t) { assert(false); return 0; }
void slow_st8(std::uint32_t, std::uint8_t) { assert(false); }
void bad_entry(Cpu&, std::uint32_t) { assert(false); }
bool preempt(Cpu&) { ++preempt_count; return yield_requested; }
void dispatch(Cpu& c, std::uint32_t, std::uint32_t) {
    assert(c.pc == 0x01181CA4); ++dispatch_count;
}
}

int main() {
    using namespace ps2;
    const std::array<std::uint8_t, 8> source{0x80, 0x01, 0xFF, 0x7F, 0x00, 0x32, 0x64, 0xAA};
    auto setup = [&] {
        std::memset(g_ram, 0xA5, 0x400);
        std::memcpy(g_ram + 0x100, source.data(), source.size());
        Cpu c{}; c.pc = 0x01181C84; c.r[16].w[0] = 0x100; c.r[17].w[0] = 0x200; c.budget = 100;
        for (int i = 2; i <= 5; ++i) c.r[i].d[1] = 0x123456789ABCDEF0ull;
        dispatch_count = preempt_count = 0; yield_requested = false;
        return c;
    };
    auto verify_copy = [&](const Cpu& c) {
        assert(!std::memcmp(g_ram + 0x200, source.data(), source.size()));
        assert(g_ram[0x1FF] == 0xA5 && g_ram[0x208] == 0xA5);
        assert(c.r[5].d[0] == 8 && c.r[2].d[0] == 0 && c.r[4].d[0] == 0x207 && c.r[3].d[0] == 0xAA);
        for (int i = 2; i <= 5; ++i) assert(c.r[i].d[1] == 0x123456789ABCDEF0ull);
        assert(dispatch_count == 1 && c.pc == 0x01181CA4);
    };
    auto c = setup();
    gen::exec_variant_01181C84_unit_0000(c, 1, 0);
    verify_copy(c); assert(c.budget == 43 && preempt_count == 0);

    c = setup(); c.budget = 0; yield_requested = true;
    gen::exec_variant_01181C84_unit_0000(c, 1, 0);
    assert(c.pc == (0x01181C88 | kUnwind) && c.r[5].d[0] == 1 && c.budget == -8);
    assert(g_ram[0x200] == source[0] && g_ram[0x201] == 0xA5 && dispatch_count == 0 && preempt_count == 1);
    c.pc &= ~kUnwind; c.budget = 100; yield_requested = false;
    gen::exec_variant_01181C84_unit_0000(c, 2, 0);
    verify_copy(c); assert(c.budget == 51); // Resume after the already-executed delay slot.

    c = setup(); c.r[17].w[0] = 0x101;
    gen::exec_variant_01181C84_unit_0000(c, 1, 0);
    for (unsigned i = 0; i <= 8; ++i) assert(g_ram[0x100 + i] == source[0]);
    assert(g_ram[0x109] == 0xA5 && c.budget == 43); // Original forward overlap behavior.
}
