#pragma once
#include "code_guard.hpp"
#include <algorithm>

namespace original_exec {
struct ProtectedRange {
    std::uint32_t begin, end, marker;
    std::span<const std::uint32_t> encrypted, decoded;
    std::span<const ps2::UnitInfo> units;
    const char* decoded_sha256 = nullptr;
    const char* prior_evidence = nullptr;
};
std::span<const ProtectedRange> protected_ranges(); // Private, verified exporter output.
std::span<const std::uint32_t> protected_identity_checks();
enum class CodeState { outside, encrypted, decoded, invalid };

inline bool protected_markers_valid() {
    for (const auto& range : protected_ranges()) {
        if ((range.marker & 3u) || range.marker > ps2::kRamSize - 4) return false;
        std::uint32_t marker; std::memcpy(&marker, ps2::g_ram + range.marker, 4);
        if (marker && marker != range.marker) return false;
    }
    return true;
}

inline const ProtectedRange* protected_range(std::uint32_t pc) {
    const auto ranges = protected_ranges();
    const auto it = std::upper_bound(ranges.begin(), ranges.end(), pc,
        [](std::uint32_t address, const ProtectedRange& range) { return address < range.begin; });
    if (it == ranges.begin()) return nullptr;
    const auto& range = *std::prev(it);
    return pc < range.end ? &range : nullptr;
}
inline bool range_words_match(const ProtectedRange& range, std::span<const std::uint32_t> words) {
    if ((range.begin & 3u) || range.end <= range.begin || range.end > ps2::kRamSize ||
        words.size() * 4 != range.end - range.begin) return false;
    return std::memcmp(ps2::g_ram + range.begin, words.data(), words.size_bytes()) == 0;
}
inline CodeState range_state(const ProtectedRange& range) {
    if ((range.marker & 3u) || range.marker > ps2::kRamSize - 4) return CodeState::invalid;
    std::uint32_t marker; std::memcpy(&marker, ps2::g_ram + range.marker, 4);
    if (marker == 0 && range_words_match(range, range.encrypted)) return CodeState::encrypted;
    if (marker == range.marker && range_words_match(range, range.decoded)) return CodeState::decoded;
    return CodeState::invalid;
}
inline CodeState guard_protected(ps2::Cpu& cpu, std::uint32_t pc) {
    // Dispatch verifies the complete immutable image. Inline branches and
    // call returns also retain bounded immutable anchors plus the exact
    // instructions of the current block/range; they never rely on its name.
    if (!guard_block(cpu, pc, protected_identity_checks())) return CodeState::invalid;
    const auto* range = protected_range(pc);
    if (!range) return CodeState::outside;
    const auto state = range_state(*range);
    if (state == CodeState::decoded) return state;
    std::fprintf(stderr, "[original-exec-variant] mismatch pc=%08X range=%08X..%08X ra=%08X\n",
                 pc, range->begin, range->end, cpu.r[31].w[0]);
    ps2::halt(state == CodeState::encrypted ? "Original protected code is encrypted at execution entry" :
              "Original protected code or marker differs from verified states");
    cpu.pc = pc | ps2::kUnwind;
    return CodeState::invalid;
}
inline bool guard_decoded(ps2::Cpu& cpu, std::uint32_t pc) {
    const auto state = guard_protected(cpu, pc);
    if (state == CodeState::decoded) return true;
    if (state != CodeState::invalid) {
        ps2::halt("Original decoded translation is no longer in memory");
        cpu.pc = pc | ps2::kUnwind;
    }
    return false;
}
inline bool dnas_module(const ps2::ModuleInfo* module) {
    return module && module->name && !std::strcmp(module->name, "0117F000_MWO_E775154D") &&
           module->fixed_base == 0x0117F000 && module->size == 0xA1000;
}
inline const ps2::UnitInfo* variant_unit(const ProtectedRange& range, std::uint32_t pc) {
    for (const auto& unit : range.units)
        if (pc >= unit.base && pc - unit.base < unit.size) return &unit;
    return nullptr;
}
inline bool has_variant_code(std::uint32_t pc, const ps2::ModuleInfo* module) {
    if (!dnas_module(module) || (pc & 3u)) return false;
    const auto* range = protected_range(pc);
    if (!range || range_state(*range) != CodeState::decoded) return false;
    const auto* unit = variant_unit(*range, pc);
    return unit && unit->entries[(pc - unit->base) / 4] != 0;
}
inline bool dispatch_variant(ps2::Cpu& cpu, std::uint32_t pc, std::uint32_t depth, const ps2::ModuleInfo* module) {
    if (!dnas_module(module) || !protected_range(pc)) return false;
    const auto state = guard_protected(cpu, pc);
    if (state == CodeState::invalid) return true;
    if (state != CodeState::decoded) return false;
    const auto* range = protected_range(pc);
    const auto* unit = variant_unit(*range, pc);
    const auto entry = !(pc & 3u) && unit ? unit->entries[(pc - unit->base) / 4] : 0;
    if (!entry) {
        ps2::halt("No verified entry in original decoded block"); cpu.pc = pc | ps2::kUnwind; return true;
    }
    static std::uint64_t recorded = 0;
    const auto index = static_cast<unsigned>(range - protected_ranges().data());
    if (index >= 64) { ps2::halt("Protected range registry exceeds observation bound"); cpu.pc = pc | ps2::kUnwind; return true; }
    if (!(recorded & (1ull << index))) {
        recorded |= 1ull << index;
        std::fprintf(stderr, "[original-exec-variant] first_match pc=%08X range=%08X..%08X entry=%u marker=%08X matched_sha256=%s prior=%s words=",
                     pc, range->begin, range->end, entry, range->marker,
                     range->decoded_sha256 ? range->decoded_sha256 : "unrecorded", range->prior_evidence ? range->prior_evidence : "unrecorded");
        for (auto address = range->begin; address < range->end; address += 4) {
            std::uint32_t word; std::memcpy(&word, ps2::g_ram + address, 4);
            std::fprintf(stderr, "%s%08X", address == range->begin ? "" : ",", word);
        }
        std::fputc('\n', stderr);
    }
    unit->function(cpu, entry, depth);
    return true;
}
}
