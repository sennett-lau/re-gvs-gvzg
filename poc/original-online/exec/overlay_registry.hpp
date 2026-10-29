#pragma once
#include "ps2/generated.hpp"
#include <algorithm>
#include <cstring>
#include <stdexcept>
#include <vector>

namespace original_exec {
// Copy the original registry before guest execution; never mutate a live
// dispatch image or discard the other images sharing this address window.
inline std::vector<ps2::ModuleInfo> replace_overlay_registry(
    const ps2::ModuleInfo* source, std::uint32_t count,
    const ps2::ModuleInfo& expected, const ps2::ModuleInfo& replacement) {
    if (!source || !count || !expected.name || !replacement.name ||
        std::strcmp(expected.name, replacement.name) ||
        expected.fixed_base != replacement.fixed_base || expected.size != replacement.size ||
        !expected.checks || !expected.check_count || !replacement.checks ||
        !replacement.check_count || !replacement.units || !replacement.count)
        throw std::runtime_error("Invalid original overlay replacement contract");
    std::vector<ps2::ModuleInfo> result(source, source + count);
    unsigned matches = 0;
    for (auto& item : result) {
        if (!item.name || std::strcmp(item.name, expected.name)) continue;
        if (++matches != 1 || item.fixed_base != expected.fixed_base || item.size != expected.size ||
            item.check_count != expected.check_count || item.count != expected.count || !item.checks ||
            !std::equal(expected.checks, expected.checks + 2u * expected.check_count, item.checks))
            throw std::runtime_error("Original overlay registry does not match retained source");
        item = replacement;
    }
    if (matches != 1) throw std::runtime_error("Original overlay absent from retained registry");
    return result;
}
}
