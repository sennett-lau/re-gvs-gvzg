#pragma once
#include "code_guard.hpp"
#include <algorithm>
#include <array>
#include <utility>

namespace original_exec {
struct ProtectedRange {
    std::uint32_t begin, end, marker;
    std::span<const std::uint32_t> encrypted, decoded;
    std::span<const ps2::UnitInfo> units;
    const char* decoded_sha256 = nullptr;
    const char* prior_evidence = nullptr;
};
std::span<const ProtectedRange> protected_ranges(); // Private, verified exporter output.
struct InlineDataRange { std::uint32_t begin, end; };
std::span<const InlineDataRange> protected_inline_data();
std::span<const std::uint32_t> protected_identity_checks();
std::span<const std::uint32_t> excluded_nontext_checks();
std::pair<std::uint32_t, std::uint32_t> protected_text_bounds();
enum class CodeState { outside, encrypted, decoded, invalid };

inline bool original_text_address(std::uint32_t address) {
    const auto [begin, end] = protected_text_bounds();
    return !(address & 3u) && begin < end && end <= ps2::kRamSize &&
           address >= begin && address < end;
}
inline bool protected_marker_address(std::uint32_t address) {
    if (address > ps2::kRamSize - 0x14) return false;
    const auto ranges = protected_ranges();
    const auto at = std::lower_bound(ranges.begin(), ranges.end(), address + 0x14,
        [](const ProtectedRange& range, std::uint32_t begin) { return range.begin < begin; });
    return at != ranges.end() && at->marker == address;
}
inline bool inline_data_address(std::uint32_t address) {
    const auto ranges = protected_inline_data();
    const auto after = std::upper_bound(ranges.begin(), ranges.end(), address,
        [](std::uint32_t pc, const InlineDataRange& range) { return pc < range.begin; });
    return after != ranges.begin() && address < std::prev(after)->end;
}
inline bool original_entry_address(std::uint32_t address) {
    return original_text_address(address) && !protected_marker_address(address) && !inline_data_address(address);
}
inline bool guard_text(ps2::Cpu& cpu, std::uint32_t pc) {
    if (original_entry_address(pc)) return true;
    const bool marker = protected_marker_address(pc), data = inline_data_address(pc);
    std::fprintf(stderr, "[original-exec-identity] %s_execution pc=%08X ra=%08X\n", marker ? "marker" : data ? "inline-data" : "nontext", pc, cpu.r[31].w[0]);
    ps2::halt(marker ? "Original overlay marker is data, not an execution entry" :
              data ? "Original inline transform data at execution entry" :
              "Original overlay execution outside declared text");
    cpu.pc = pc | ps2::kUnwind;
    return false;
}
inline bool guard_original_block(ps2::Cpu& cpu, std::uint32_t pc, std::span<const std::uint32_t> checks) {
    for (std::size_t i = 0; i < checks.size(); i += 2)
        if (!original_text_address(checks[i])) {
            ps2::halt("Original translated block crosses declared text");
            cpu.pc = pc | ps2::kUnwind;
            return false;
        }
    return guard_block(cpu, pc, checks);
}

inline void observe_identity_rejection(const char* kind, std::uint32_t address,
                                       std::uint32_t expected, std::uint32_t actual) {
    static unsigned records = 0;
    if (records++ < 16)
        std::fprintf(stderr, "[original-exec-identity] rejected kind=%s address=%08X expected=%08X actual=%08X\n",
                     kind, address, expected, actual);
}

inline void observe_nontext_change() {
    static bool recorded = false;
    if (recorded) return;
    const auto checks = excluded_nontext_checks();
    for (std::size_t i = 0; i + 1 < checks.size(); i += 2) {
        if ((checks[i] & 3u) || checks[i] > ps2::kRamSize - 4) return;
        std::uint32_t actual; std::memcpy(&actual, ps2::g_ram + checks[i], 4);
        if (actual == checks[i + 1]) continue;
        recorded = true;
        std::fprintf(stderr, "[original-exec-identity] excluded_nontext_change address=%08X expected=%08X actual=%08X\n",
                     checks[i], checks[i + 1], actual);
        return;
    }
}

inline bool protected_markers_valid() {
    for (const auto& range : protected_ranges()) {
        if ((range.marker & 3u) || range.marker > ps2::kRamSize - 4) return false;
        std::uint32_t marker; std::memcpy(&marker, ps2::g_ram + range.marker, 4);
        if (marker && marker != range.marker) {
            observe_identity_rejection("marker-zero-or-self", range.marker, range.marker, marker);
            return false;
        }
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
    if (!guard_text(cpu, pc)) return CodeState::invalid;
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
    if (!dnas_module(module)) return false;
    if (!guard_text(cpu, pc)) return true;
    if (!protected_range(pc)) return false;
    const auto state = guard_protected(cpu, pc);
    if (state == CodeState::invalid) return true;
    if (state != CodeState::decoded) return false;
    const auto* range = protected_range(pc);
    const auto* unit = variant_unit(*range, pc);
    const auto entry = !(pc & 3u) && unit ? unit->entries[(pc - unit->base) / 4] : 0;
    if (!entry) {
        ps2::halt("No verified entry in original decoded block"); cpu.pc = pc | ps2::kUnwind; return true;
    }
    static std::array<std::uint64_t, 2> recorded{};
    const auto index = static_cast<unsigned>(range - protected_ranges().data());
    if (index >= 128) { ps2::halt("Protected range registry exceeds observation bound"); cpu.pc = pc | ps2::kUnwind; return true; }
    auto& word = recorded[index / 64];
    const auto bit = 1ull << (index % 64);
    if (!(word & bit)) {
        word |= bit;
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
