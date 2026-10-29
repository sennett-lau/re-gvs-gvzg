#include "code_guard.hpp"
#include <array>
#include <cassert>

namespace ps2 {
alignas(16) std::uint8_t g_ram[kRamSize]{};
std::string reason;
void halt(const std::string& value) { reason = value; }
}
int main() {
    ps2::Cpu cpu{}; cpu.r[31].w[0] = 0x1181D58;
    const std::uint32_t checks[] = {0x100, 0x11223344, 0x104, 0x55667788};
    std::memcpy(ps2::g_ram + 0x100, checks + 1, 4);
    std::memcpy(ps2::g_ram + 0x104, checks + 3, 4);
    assert(original_exec::guard_block(cpu, 0x100, checks) && ps2::reason.empty());
    ps2::g_ram[0x107] ^= 1; // Change the final guarded byte, not only entry word.
    std::array<std::uint8_t, 64> before; std::memcpy(before.data(), ps2::g_ram + 0x100, before.size());
    assert(!original_exec::guard_block(cpu, 0x100, checks));
    assert(cpu.pc == (0x100 | ps2::kUnwind) && ps2::reason == "Original code changed before translated block execution");
    assert(!std::memcmp(before.data(), ps2::g_ram + 0x100, before.size()));
    cpu.r[4].w[0] = 0x100;
    const auto observation = original_exec::observe_before(cpu, 0x1181D50);
    assert(observation.active && observation.address == 0x100);
    original_exec::observe_words(cpu, observation, "after");
    assert(!std::memcmp(before.data(), ps2::g_ram + 0x100, before.size()));
    const std::uint32_t bad[] = {ps2::kRamSize - 3, 0};
    assert(!original_exec::guard_block(cpu, 0x100, bad));
    assert(!original_exec::guard_block(cpu, 0x100, {}));
    cpu.r[4].w[0] = ps2::kRamSize - 32;
    assert(!original_exec::observe_before(cpu, 0x1181D50).active);
}
