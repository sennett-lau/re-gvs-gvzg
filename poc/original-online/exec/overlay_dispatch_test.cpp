// Link with the actual prepared dispatch.cpp. Only memory and the two tiny
// translated-unit callbacks are fixtures; image selection is the real runtime.
#include "overlay_registry.hpp"
#include "ps2/system.hpp"
#include <array>
#include <cassert>
#include <cstring>

namespace ps2 {
alignas(16) std::uint8_t g_ram[kRamSize]{};
alignas(16) std::uint8_t g_spr[kScratchpadSize]{};
Options g_options;
std::string reason;
void halt(const std::string& why) { reason = why; }
std::uint32_t slow_ld32(std::uint32_t) { throw std::runtime_error("Unexpected I/O read"); }
}
namespace {
constexpr std::uint32_t base = 0x0117F000, offset = 0x707C0, target = base + offset;
const std::uint32_t old_checks[] = {offset, 0x0847BDF8, offset + 4, 0x0000382D};
const std::uint32_t new_checks[] = {offset, 0x0847BDF8, offset + 4, 0x0000382D, offset + 16, 0x0847BDF8};
const std::uint32_t other_checks[] = {offset, 0x0200982D, offset + 4, 0x2A021160};
const std::uint16_t entries[] = {1, 0, 0, 0};
void newer(ps2::Cpu& cpu, std::uint32_t entry, std::uint32_t) { assert(entry == 1); cpu.r[2].w[0] = 42; cpu.pc = cpu.r[31].w[0]; }
void sibling(ps2::Cpu& cpu, std::uint32_t entry, std::uint32_t) { assert(entry == 1); cpu.r[2].w[0] = 24; cpu.pc = cpu.r[31].w[0]; }
const ps2::UnitInfo new_units[] = {{offset, 16, newer, entries}};
const ps2::UnitInfo other_units[] = {{offset, 16, sibling, entries}};
const ps2::ModuleInfo expected{"target", base, 0xA1000, old_checks, 2, new_units, 1};
const ps2::ModuleInfo replacement{"target", base, 0xA1000, new_checks, 3, new_units, 1};
const ps2::ModuleInfo other{"same-base-other-image", base, 0xA1000, other_checks, 2, other_units, 1};
const std::array modules{expected, other};
void put(std::uint32_t where, std::uint32_t word) { std::memcpy(ps2::g_ram + where, &word, 4); }
}
namespace original_exec {
const ps2::ModuleInfo* overlay_modules(const ps2::ModuleInfo* source, std::uint32_t count) {
    static std::vector<ps2::ModuleInfo> registry;
    registry = replace_overlay_registry(source, count, expected, replacement);
    return registry.data();
}
}
int main() {
    const std::uint16_t empty[] = {0};
    const ps2::UnitInfo main[] = {{0x00100000, 4, newer, empty}};
    ps2::register_units(main, 1);
    const auto call = [] {
        ps2::register_modules(modules.data(), modules.size()); // Fresh machine registry.
        ps2::Cpu cpu{}; cpu.pc = target; cpu.r[31].w[0] = 0x003610FC; ps2::reason.clear();
        std::array<std::uint8_t, 64> before; std::memcpy(before.data(), ps2::g_ram + target, before.size());
        ps2::dispatch(cpu, 0, 0);
        assert(!std::memcmp(before.data(), ps2::g_ram + target, before.size()));
        return cpu;
    };
    put(target, 0x0847BDF8); put(target + 4, 0x0000382D); put(target + 16, 0x0847BDF8);
    auto cpu = call(); assert(ps2::reason.empty() && cpu.r[2].w[0] == 42 && cpu.pc == 0x003610FC);
    put(target + 16, 0x0847BDF9); // One newly translated word differs: reject the image.
    cpu = call(); assert(ps2::reason.find("missing code") != std::string::npos && cpu.r[2].w[0] == 0);
    put(target, 0x0200982D); put(target + 4, 0x2A021160);
    cpu = call(); assert(ps2::reason.empty() && cpu.r[2].w[0] == 24); // Preserve sibling selection.
    put(target, 0); put(target + 4, 0);
    cpu = call(); assert(ps2::reason.find("missing code") != std::string::npos && cpu.r[2].w[0] == 0);
}
