#pragma once
#include <array>
#include <cstdint>

// One EE-owned observation, published as one atomic uint64. The record is at
// most 48 bits and therefore exactly representable by the exported double.
// Invalid field values are not truncated: the export reports -1 instead.
namespace gundam_scene {
inline constexpr std::uint64_t invalid = ~0ull;
inline constexpr std::array<unsigned, 16> widths =
    {4,4,5,3,4,4,1,1,1,4,8,2,2,2,2,1};
inline constexpr std::array<unsigned, 16> shifts =
    {0,4,8,13,16,20,24,25,26,27,31,39,41,43,45,47};
using Fields = std::array<unsigned, 16>;
// mode,state,stage,initialized,phase,humanMask,paused,splitActive,
// splitPending,menuVariant,substate,viewIndex,cameraKind,teamHumansA,
// teamHumansB,configurationValid. cameraKind: 0 other/none, 1 full,
// 2 first split camera, 3 second split camera.
constexpr std::uint64_t pack(const Fields &fields) {
    std::uint64_t value = 0;
    for (unsigned i=0; i<fields.size(); ++i) {
        if (fields[i] >= (1u << widths[i])) return invalid;
        value |= std::uint64_t(fields[i]) << shifts[i];
    }
    return value;
}
constexpr double exported(std::uint64_t value) {
    return value <= ((1ull<<53)-1) ? static_cast<double>(value) : -1.0;
}
}
