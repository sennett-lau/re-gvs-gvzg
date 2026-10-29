// Actual prepared runtime dispatcher, synthetic image bytes/unit callbacks.
#include "code_variant.hpp"
#include <array>
#include <cassert>

namespace ps2 {
alignas(16) std::uint8_t g_ram[kRamSize]{}, g_spr[kScratchpadSize]{};
Options g_options;
std::string reason;
void halt(const std::string& value) { reason = value; }
std::uint32_t slow_ld32(std::uint32_t) { assert(false); return 0; }
void original_exec_flush_cache();
}
namespace {
constexpr std::uint32_t base = 0x0117F000, begin = 0x01181C84, end = begin + 16, marker = begin - 0x14;
const std::uint32_t encrypted[] = {0x11111111, 0x22222222, 0x33333333, 0x44444444};
const std::uint32_t decoded[] = {0xAAAAAAAA, 0xBBBBBBBB, 0xCCCCCCCC, 0xDDDDDDDD};
const std::uint32_t identity[] = {0x100, 0xF00DFACE}, other_identity[] = {0x100, 0xF00DFACF};
const std::uint32_t inline_identity[] = {base + 0x100, 0xF00DFACE};
const std::uint16_t variant_entries[] = {1, 2, 0, 0}, original_entries[] = {1, 2, 3, 4}, end_entries[] = {1};
unsigned originals = 0, variants = 0, continuations = 0;
bool request_yield = false;
void original_label(ps2::Cpu& c, std::uint32_t, std::uint32_t depth) {
    ++originals; assert(originals < 3);
    const auto state = original_exec::guard_protected(c, c.pc);
    if (state == original_exec::CodeState::invalid) return;
    if (state == original_exec::CodeState::decoded) { ps2::dispatch(c, 0, depth); return; }
    assert(false); // Never run an encrypted translation of protected code.
}
void continuation(ps2::Cpu& c, std::uint32_t, std::uint32_t) {
    ++continuations; c.r[2].w[0] = 42; c.pc = c.r[31].w[0];
}
void decoded_unit(ps2::Cpu& c, std::uint32_t entry, std::uint32_t depth) {
    assert(entry == 1 || entry == 2); ++variants; assert(variants < 3);
    if (!original_exec::guard_decoded(c, c.pc)) return;
    if (request_yield) { c.pc = (begin + 4) | ps2::kUnwind; return; }
    c.pc = end; ps2::dispatch(c, 0, depth);
}
void sibling(ps2::Cpu& c, std::uint32_t, std::uint32_t) { c.r[2].w[0] = 24; c.pc = c.r[31].w[0]; }
const ps2::UnitInfo variant_units[] = {{begin, 16, decoded_unit, variant_entries}};
const ps2::UnitInfo original_units[] = {{begin - base, 16, original_label, original_entries}, {end - base, 4, continuation, end_entries}};
const ps2::UnitInfo sibling_units[] = {{begin - base, 16, sibling, original_entries}};
const ps2::ModuleInfo modules[] = {
    {"0117F000_MWO_E775154D", base, 0xA1000, identity, 1, original_units, 2},
    {"0117F000_MWO_D4AF0758", base, 0xA1000, other_identity, 1, sibling_units, 1}};
const original_exec::ProtectedRange ranges[] = {{begin, end, marker, encrypted, decoded, variant_units},
    {begin + 0x100, begin + 0x100, begin + 0xEC, {}, {}, {}}}; // Original marker-only range.
void put(std::uint32_t address, std::uint32_t word) { std::memcpy(ps2::g_ram + address, &word, 4); }
ps2::Cpu fresh(bool encoded = false) {
    std::memset(ps2::g_ram + base, 0, 0x4000);
    put(base + 0x100, identity[1]); put(marker, encoded ? 0 : marker);
    std::memcpy(ps2::g_ram + begin, encoded ? encrypted : decoded, sizeof decoded);
    ps2::register_modules(modules, 2); ps2::reason.clear();
    originals = variants = continuations = 0; request_yield = false;
    ps2::Cpu c{}; c.pc = begin; c.r[31].w[0] = 0x003610FC; return c;
}
void run(ps2::Cpu& c) {
    std::array<std::uint8_t, 0x4000> before; std::memcpy(before.data(), ps2::g_ram + base, before.size());
    ps2::dispatch(c, 0, 0);
    assert(!std::memcmp(before.data(), ps2::g_ram + base, before.size()));
}
}
namespace original_exec {
std::span<const ProtectedRange> protected_ranges() { return ranges; }
std::span<const std::uint32_t> protected_identity_checks() { return inline_identity; }
const ps2::ModuleInfo* overlay_modules(const ps2::ModuleInfo* source, std::uint32_t count) { assert(count == 2); return source; }
}
int main() {
    const std::uint16_t empty[] = {0}; const ps2::UnitInfo main[] = {{0x100000, 4, sibling, empty}};
    ps2::register_units(main, 1);
    auto c = fresh(); assert(ps2::has_code(begin) && ps2::has_code(begin + 4) && !ps2::has_code(begin + 8));
    run(c); assert(ps2::reason.empty() && variants == 1 && originals == 0 && continuations == 1 && c.r[2].w[0] == 42);
    c = fresh(); original_label(c, 1, 0); // Inline label must route through the real dispatcher exactly once.
    assert(ps2::reason.empty() && originals == 1 && variants == 1 && continuations == 1);
    c = fresh(); ps2::g_ram[end - 1] ^= 1; run(c);
    assert(!ps2::reason.empty() && !variants && !originals); // Last word, including literals, is guarded.
    c = fresh(); c.pc = begin + 8; run(c);
    assert(ps2::reason == "No verified entry in original decoded block" && !variants && !originals);
    c = fresh(); request_yield = true; run(c); assert(c.pc == ((begin + 4) | ps2::kUnwind));
    std::memcpy(ps2::g_ram + begin, encrypted, sizeof encrypted); put(marker, 0);
    c.pc &= ~ps2::kUnwind; request_yield = false; ps2::reason.clear();
    assert(!ps2::has_code(c.pc)); run(c);
    assert(ps2::reason == "Original protected code is encrypted at execution entry" && variants == 1 && originals == 0);
    c = fresh(); run(c); put(base + 0x100, 0); c.pc = begin; ps2::reason.clear(); run(c);
    assert(ps2::reason.find("missing code") != std::string::npos && variants == 1); // Changed immutable word after cache install.
    c = fresh(); put(base + 0x100, 0); decoded_unit(c, 2, 0); // Inline return/loop re-entry without dispatcher.
    assert(!ps2::reason.empty() && continuations == 0 && c.r[2].w[0] == 0 && (c.pc & ps2::kUnwind));
    c = fresh(); put(marker, 123); run(c); assert(!ps2::reason.empty() && !variants);
    c = fresh(); put(begin + 0xEC, begin + 0xEC); assert(original_exec::protected_markers_valid());
    put(begin + 0xEC, 1); assert(!original_exec::protected_markers_valid());
    c = fresh(); run(c); ps2::original_exec_flush_cache(); c.pc = begin; run(c);
    assert(ps2::reason.empty() && variants == 2 && continuations == 2);
    c = fresh(); put(base + 0x100, other_identity[1]); run(c);
    assert(ps2::reason.empty() && c.r[2].w[0] == 24 && !variants && !originals);
}
