#pragma once
#include "ps2/memory.hpp"
#include "ps2/system.hpp"
#include "iop/iop.hpp"
#include <cstdint>
#include <cstdio>

// Observation runs on the EE thread. No guest writes, invented RPC replies,
// network sockets, or timing changes. Log metadata only; never credentials.
namespace original_online {
inline bool active = false;
inline unsigned records = 0;
inline std::uint32_t last_mode = ~0u, last_connection = ~0u;
inline constexpr unsigned limit = 1024;
inline std::uint32_t read32(std::uint32_t address) {
    const auto physical = address & 0x1fffffffu;
    if (physical > ps2::kRamSize - 4) return ~0u;
    return ps2::ld32(physical);
}
inline bool emit() { return active && records++ < limit; }
template<class Cpu> void enter(const Cpu &) {
    active = true;
    records = 0;
    last_mode = last_connection = ~0u;
    ps2::g_options.trace_iop_modules = true;
    ps2::iop::set_trace(true, false);
    if (emit()) std::fprintf(stderr, "[original-online] {\"event\":\"menu\",\"mode\":7}\n");
}
template<class Cpu> void mode(const Cpu &c) {
    const auto at = read32(c.r[28].w[0] - 23780u);
    const auto value = read32(at);
    if (active && value != last_mode) {
        last_mode = value;
        if (emit()) std::fprintf(stderr, "[original-online] {\"event\":\"mode\",\"state_word\":%u}\n", value);
    }
}
template<class Cpu> void connection(const Cpu &) {
    const auto value = read32(0x00cd1360u);
    if (active && value != last_connection) {
        last_connection = value;
        if (emit()) std::fprintf(stderr, "[original-online] {\"event\":\"connection\",\"state_word\":%u}\n", value);
    }
}
template<class Cpu> void battle(const Cpu &) {
    if (emit()) std::fprintf(stderr, "[original-online] {\"event\":\"battle_dispatch\"}\n");
}
template<class Cpu> void bind(const Cpu &c) {
    if (emit()) std::fprintf(stderr,
        "[original-online] {\"event\":\"bind\",\"caller\":%u,\"client\":%u,\"service\":%u,\"mode\":%u}\n",
        c.r[31].w[0] - 8u, c.r[4].w[0], c.r[5].w[0], c.r[6].w[0]);
}
template<class Cpu> void call(const Cpu &c) {
    // This runtime's server_data is service ID xor 0xacacacac, not a guest
    // server pointer. Keep the encoded value too, and do not decode unbound 0.
    const auto encoded = read32(c.r[4].w[0] + 36u);
    if (emit()) std::fprintf(stderr,
        "[original-online] {\"event\":\"call\",\"caller\":%u,\"client\":%u,\"server_data\":%u,\"method\":%u,\"mode\":%u,\"send\":%u,\"send_size\":%u,\"recv\":%u,\"recv_size\":%u}\n",
        c.r[31].w[0] - 8u, c.r[4].w[0], encoded, c.r[5].w[0], c.r[6].w[0],
        c.r[7].w[0], c.r[8].w[0], c.r[9].w[0], c.r[10].w[0]);
}
}
