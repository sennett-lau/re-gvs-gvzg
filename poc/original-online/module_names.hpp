#pragma once
#include <algorithm>
#include <cstdint>
#include <stdexcept>
#include <string>
#include <string_view>
#include <vector>

namespace original_online {
// Preserve the IRX's internal module name for SearchModuleByName. Filename
// stems such as SMAP do not match the game's INET_SMAP_driver query.
inline std::string irx_module_name(const std::vector<std::uint8_t> &bytes,
                                   const std::string &fallback) {
    const auto word = [&](std::size_t at) -> std::uint32_t {
        if (at > bytes.size() || bytes.size() - at < 4) throw std::out_of_range("IRX header");
        return std::uint32_t(bytes[at]) | std::uint32_t(bytes[at+1]) << 8 |
               std::uint32_t(bytes[at+2]) << 16 | std::uint32_t(bytes[at+3]) << 24;
    };
    if (bytes.size() < 52 || word(0) != 0x464c457fu || bytes[4] != 1 || bytes[5] != 1)
        return fallback;
    const auto phoff = word(28);
    const auto size = unsigned(bytes[42]) | unsigned(bytes[43]) << 8;
    const auto count = unsigned(bytes[44]) | unsigned(bytes[45]) << 8;
    if (size < 32 || phoff > bytes.size() || count > (bytes.size() - phoff) / size)
        return fallback;
    for (unsigned i = 0; i < count; ++i) {
        const std::size_t at = std::size_t(phoff) + i * size;
        if (word(at) != 0x70000080u) continue;
        const auto offset = word(at+4), length = word(at+16);
        if (length <= 26 || offset > bytes.size() || length > bytes.size() - offset)
            return fallback;
        const auto begin = bytes.begin() + offset + 26;
        const auto end = bytes.begin() + offset + length;
        const auto zero = std::find(begin, end, 0);
        if (zero == end || zero == begin) return fallback;
        return std::string(begin, zero);
    }
    return fallback;
}

inline std::string_view loadfile_name(const std::uint8_t *ram, std::size_t ram_size,
                                       std::uint32_t args, std::uint32_t send_size) {
    if (send_size < 9 || args > ram_size || send_size > ram_size - args)
        throw std::runtime_error("Invalid LoadFile09 request span");
    const auto *begin = reinterpret_cast<const char *>(ram + args + 8);
    const auto *end = begin + std::min<std::uint32_t>(252, send_size - 8);
    const auto *zero = std::find(begin, end, '\0');
    if (zero == end || zero == begin) throw std::runtime_error("Invalid LoadFile09 module name");
    return {begin, static_cast<std::size_t>(zero - begin)};
}

template<class Registry>
int find_module(const Registry &modules, std::string_view name) {
    for (const auto &[id, module] : modules)
        if (module.name == name) return id;
    return -202;
}
}
