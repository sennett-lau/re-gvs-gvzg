#pragma once
#include "ps2/generated.hpp"
#include "ps2/system.hpp"
#include <cstdio>
#include <cstring>
#include <span>

namespace original_exec {
inline bool guard_block(ps2::Cpu& cpu, std::uint32_t pc, std::span<const std::uint32_t> checks) {
    if (checks.empty() || checks.size() % 2) {
        ps2::halt("Invalid original code block guard"); cpu.pc = pc | ps2::kUnwind; return false;
    }
    for (std::size_t i = 0; i < checks.size(); i += 2) {
        const auto address = checks[i], expected = checks[i + 1];
        if ((address & 3u) || address > ps2::kRamSize - 4) {
            ps2::halt("Original code guard exceeds RAM"); cpu.pc = pc | ps2::kUnwind; return false;
        }
        std::uint32_t actual;
        std::memcpy(&actual, ps2::g_ram + address, 4);
        if (actual == expected) continue;
        std::fprintf(stderr, "[original-exec-code-change] block=%08X address=%08X expected=%08X actual=%08X ra=%08X\n",
                     pc, address, expected, actual, cpu.r[31].w[0]);
        ps2::halt("Original code changed before translated block execution");
        cpu.pc = pc | ps2::kUnwind;
        return false;
    }
    return true;
}

struct CodeObservation {
    std::uint32_t address = 0, site = 0;
    bool active = false;
    std::uint32_t words = 16;
    std::uint32_t input[4]{};
    std::uint32_t helper = 0;
};

inline void observe_words(const ps2::Cpu& cpu, CodeObservation observation, const char* phase) {
    if (!observation.active) return;
    std::uint32_t marker = 0;
    const bool has_marker = observation.address >= 0x14;
    if (has_marker) std::memcpy(&marker, ps2::g_ram + observation.address - 0x14, 4);
    std::fprintf(stderr, "[original-exec-transform] phase=%s site=%08X address=%08X ra=%08X args=%08X,%08X,%08X,%08X words=",
                 phase, observation.site, observation.address, cpu.r[31].w[0],
                 cpu.r[4].w[0], cpu.r[5].w[0], cpu.r[6].w[0], cpu.r[7].w[0]);
    for (unsigned i = 0; i < observation.words; ++i) {
        std::uint32_t word; std::memcpy(&word, ps2::g_ram + observation.address + 4 * i, 4);
        std::fprintf(stderr, "%s%08X", i ? "," : "", word);
    }
    std::fprintf(stderr, " marker_valid=%u marker_address=%08X marker=%08X input_args=%08X,%08X,%08X,%08X helper=%08X\n", has_marker,
                 has_marker ? observation.address - 0x14 : 0, marker,
                 observation.input[0], observation.input[1], observation.input[2], observation.input[3], observation.helper);
}

inline CodeObservation observe_before(const ps2::Cpu& cpu, std::uint32_t site, std::uint32_t helper = 0x011AAA68) {
    static unsigned counts[3]{};
    auto& count = counts[helper == 0x011AAA68 ? 0 : helper == 0x011E47C8 ? 1 : 2];
    if (count++ >= 64) {
        if (count == 65) std::fprintf(stderr, "[original-exec-transform] observation_cap=64 helper=%08X\n", helper);
        return {};
    }
    auto address = cpu.r[4].w[0];
    std::uint32_t bytes = 64;
    const auto length = cpu.r[5].w[0] ^ cpu.r[6].w[0];
    bool valid = true;
    if (helper == 0x011AAA68 || helper == 0x011E47C8) {
        valid = !(length & 3u) && length <= 0x800;
        if (cpu.r[7].w[0] & 1u) { valid = valid && address >= length; address -= length; }
        if (length > bytes) bytes = length;
    }
    CodeObservation result{address, site, valid && !(address & 3u) && bytes <= ps2::kRamSize && address <= ps2::kRamSize - bytes, bytes / 4};
    for (unsigned i = 0; i < 4; ++i) result.input[i] = cpu.r[4 + i].w[0];
    result.helper = helper;
    if (!result.active) std::fprintf(stderr, "[original-exec-transform] invalid_span=%08X site=%08X\n", address, site);
    observe_words(cpu, result, "before");
    return result;
}
}
