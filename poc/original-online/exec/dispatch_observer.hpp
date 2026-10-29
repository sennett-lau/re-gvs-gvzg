#pragma once
#include "ps2/generated.hpp"
#include <cstdio>
#include <cstring>
#include <set>

namespace original_exec {
inline void observe_dispatch(const ps2::Cpu& cpu, std::uint32_t pc,
                             const ps2::ModuleInfo* module, std::uint16_t entry) {
    static std::set<std::uint32_t> recorded;
    if (entry && pc != 0x011EF7B0u && pc != 0x011EF7C0u && pc != 0x011EF7D0u) return;
    if (recorded.size() >= 32 || !recorded.insert(pc).second) return;
    const bool valid = !(pc & 3u) && pc <= ps2::kRamSize - 64;
    std::fprintf(stderr, "[original-exec-code] pc=%08X ra=%08X module=%s entry=%u valid=%u words=",
                 pc, cpu.r[31].w[0], module ? module->name : "none", entry, unsigned(valid));
    if (valid) for (unsigned i = 0; i < 16; ++i) {
        std::uint32_t word;
        std::memcpy(&word, ps2::g_ram + pc + i * 4, 4);
        std::fprintf(stderr, "%s%08X", i ? "," : "", word);
    }
    std::fputc('\n', stderr);
}
}
