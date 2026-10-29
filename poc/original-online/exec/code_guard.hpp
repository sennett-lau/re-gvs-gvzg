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

struct CodeObservation { std::uint32_t address = 0, site = 0; bool active = false; };

inline void observe_words(const ps2::Cpu& cpu, CodeObservation observation, const char* phase) {
    if (!observation.active) return;
    std::uint32_t marker = 0;
    const bool has_marker = observation.address >= 0x14;
    if (has_marker) std::memcpy(&marker, ps2::g_ram + observation.address - 0x14, 4);
    std::fprintf(stderr, "[original-exec-transform] phase=%s site=%08X address=%08X ra=%08X args=%08X,%08X,%08X,%08X words=",
                 phase, observation.site, observation.address, cpu.r[31].w[0],
                 cpu.r[4].w[0], cpu.r[5].w[0], cpu.r[6].w[0], cpu.r[7].w[0]);
    for (unsigned i = 0; i < 16; ++i) {
        std::uint32_t word; std::memcpy(&word, ps2::g_ram + observation.address + 4 * i, 4);
        std::fprintf(stderr, "%s%08X", i ? "," : "", word);
    }
    std::fprintf(stderr, " marker_valid=%u marker_address=%08X marker=%08X\n", has_marker,
                 has_marker ? observation.address - 0x14 : 0, marker);
}

inline CodeObservation observe_before(const ps2::Cpu& cpu, std::uint32_t site) {
    static unsigned count = 0;
    if (count++ >= 64) {
        if (count == 65) std::fputs("[original-exec-transform] observation_cap=64\n", stderr);
        return {};
    }
    const auto address = cpu.r[4].w[0];
    CodeObservation result{address, site, !(address & 3u) && address <= ps2::kRamSize - 64};
    if (!result.active) std::fprintf(stderr, "[original-exec-transform] invalid_span=%08X site=%08X\n", address, site);
    observe_words(cpu, result, "before");
    return result;
}
}
