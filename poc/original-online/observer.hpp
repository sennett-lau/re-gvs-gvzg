#pragma once
#include "ps2/memory.hpp"
#include "ps2/system.hpp"
#include "iop/kernel.hpp"
#include <array>
#include <cstdint>
#include <cstdio>

// EE-thread observation only: no guest/register/clock writes. Logging can
// perturb wall time; this is not a performance profile or a network backend.
namespace original_online {
inline bool active = false;
inline unsigned emitted = 0, dropped = 0, boot_emitted = 0, boot_dropped = 0;
inline unsigned summaries = 0, request_sequence = 0;
inline constexpr unsigned limit = 16384;
inline std::uint32_t last_mode = ~0u;
inline std::array<unsigned, 8> hits{};
inline unsigned bind_hits = 0, call_hits = 0, end_hits = 0, background_calls = 0;
inline unsigned pending_collisions = 0, pending_overflow = 0;
inline unsigned card_calls = 0, card_ends = 0;
inline std::array<unsigned, 3> card_repeats{};
inline std::array<std::array<std::array<std::uint32_t, 9>, 64>, 3> card_previous{};
inline std::array<std::array<bool, 64>, 3> card_seen{};
inline bool repeated_card(unsigned kind, std::uint32_t service, std::uint32_t method,
                          const std::array<std::uint32_t, 9> &value) {
    if (service != 0x80000400u || method >= 64) return false;
    if (card_seen[kind][method] && card_previous[kind][method] == value) {
        ++card_repeats[kind]; return true;
    }
    card_seen[kind][method] = true; card_previous[kind][method] = value; return false;
}
inline std::array<std::array<std::uint32_t, 17>, 8> previous{};
inline std::array<bool, 8> seen{};
struct Pending {
    bool used = false, ambiguous = false;
    unsigned sequence = 0;
    std::uint32_t client = 0, service = 0, method = 0, recv = 0, recv_size = 0;
};
inline std::array<Pending, 16> pending{};
inline std::uint32_t read32(std::uint32_t address) {
    const auto physical = address & 0x1fffffffu;
    if (physical > ps2::kRamSize - 4) return ~0u;
    return ps2::ld32(physical);
}
inline unsigned read8(std::uint32_t address) {
    return (read32(address & ~3u) >> ((address & 3u) * 8u)) & 255u;
}
inline unsigned read16(std::uint32_t address) {
    return (read32(address & ~3u) >> ((address & 2u) * 8u)) & 65535u;
}
inline bool background(std::uint32_t service) {
    // Observed baseline traffic, not an inferred list of all harmless services.
    return service == 0 || service == 0x80000593u || service == 0x80000595u || service == 0x80001300u;
}
inline bool custom(std::uint32_t service) { return service == 0x01270010u || service == 0x01270030u; }
template<class... Args> void log(bool allow_boot, const char *event, const char *format, Args... args) {
    if (!active && !allow_boot) return;
    auto &count = active ? emitted : boot_emitted;
    auto &lost = active ? dropped : boot_dropped;
    const auto budget = active ? limit : 128u;
    if (count >= budget) {
        if (++lost == 1) std::fprintf(stderr,
            "[original-online] {\"event\":\"trace_cap\",\"guest_cycles\":%llu,\"emitted\":%u,\"dropped\":%u}\n",
            static_cast<unsigned long long>(ps2::now()), count, lost);
        return;
    }
    char fields[1800];
    const int length = [&] {
        if constexpr (sizeof...(Args) == 0) return std::snprintf(fields, sizeof fields, "%s", format);
        else return std::snprintf(fields, sizeof fields, format, args...);
    }();
    if (length < 0 || static_cast<unsigned>(length) >= sizeof fields) { ++lost; return; }
    std::fprintf(stderr, "[original-online] {\"event\":\"%s\",\"guest_cycles\":%llu,\"record\":%u,\"scope\":\"%s\"%s}\n",
        event, static_cast<unsigned long long>(ps2::now()), ++count, active ? "post_menu" : "boot_network", fields);
}
inline void summary() {
    // Independent bounded reporting preserves cap/drop visibility after the cap.
    if (!active || summaries++ >= 64) return;
    std::fprintf(stderr,
        "[original-online] {\"event\":\"counters\",\"guest_cycles\":%llu,\"emitted\":%u,\"dropped\":%u,"
        "\"boot_emitted\":%u,\"boot_dropped\":%u,\"connection_hits\":%u,\"producer_hits\":%u,\"render_hits\":%u,\"queue1_hits\":%u,\"queue2_hits\":%u,"
        "\"confirm_hits\":%u,\"cancel_hits\":%u,\"activity_hits\":%u,\"bind_hits\":%u,\"call_hits\":%u,"
        "\"end_hits\":%u,\"background_calls\":%u,\"pending_collisions\":%u,\"pending_overflow\":%u,"
        "\"card_service\":2147484672,\"card_calls\":%u,\"card_ends\":%u,\"card_call_repeats\":%u,\"card_return_repeats\":%u,\"card_reply_repeats\":%u}\n",
        static_cast<unsigned long long>(ps2::now()), emitted, dropped, boot_emitted, boot_dropped,
        hits[0], hits[1], hits[2], hits[3], hits[4], hits[5], hits[6], hits[7],
        bind_hits, call_hits, end_hits, background_calls, pending_collisions, pending_overflow,
        card_calls, card_ends, card_repeats[0], card_repeats[1], card_repeats[2]);
}
template<class Cpu> void state(const Cpu &c, unsigned slot, const char *event, bool returned = false) {
    if (!active) return;
    ++hits[slot];
    const auto q1 = read8(0xcd1392u), q2 = read8(0xcd1393u);
    const std::array<std::uint32_t, 17> now = {
        read32(0xcd1360u), read32(0xcd1364u), read8(0xcd136eu), read32(0xcd138cu),
        q1 | q2 << 8, read8(0x839148u), read16(0x6f2544u), read32(c.r[28].w[0] - 22508u),
        q1 ? read32(0xcd13a0u) : 0, q1 > 4 ? read32(0xcd13a4u) : 0,
        q1 ? read32(0xcd13a8u) : 0, q1 > 4 ? read32(0xcd13acu) : 0,
        q2 ? read32(0xcd13b0u) : 0, q2 > 4 ? read32(0xcd13b4u) : 0,
        q2 ? read32(0xcd13b8u) : 0, q2 > 4 ? read32(0xcd13bcu) : 0,
        returned ? c.r[2].w[0] : 0u};
    if (!seen[slot] || previous[slot] != now) {
        seen[slot] = true; previous[slot] = now;
        log(false, event, ",\"state_word\":%u,\"state\":%u,\"substate\":%u,\"state_byte2\":%u,\"state_byte3\":%u,\"timer4\":%d,\"timer6\":%d,"
            "\"render_control\":%u,\"ui_flags\":%u,\"queue1_count\":%u,\"queue2_count\":%u,"
            "\"input_gate\":%u,\"input_edge\":%u,\"activity\":%u,\"queue_words\":[%u,%u,%u,%u,%u,%u,%u,%u],"
            "\"has_return\":%s,\"return_value\":%d,\"site_hits\":%u",
            now[0], now[0] & 255u, (now[0] >> 8) & 255u, (now[0] >> 16) & 255u, now[0] >> 24,
            static_cast<std::int16_t>(now[1]), static_cast<std::int16_t>(now[1] >> 16),
            now[2], now[3], q1, q2, now[5], now[6], now[7],
            now[8], now[9], now[10], now[11], now[12], now[13], now[14], now[15],
            returned ? "true" : "false", static_cast<std::int32_t>(now[16]), hits[slot]);
    }
    if (slot == 0 && (hits[0] == 1 || hits[0] % 120 == 0)) summary();
}
template<class Cpu> void enter(const Cpu &) {
    active = true; seen = {}; last_mode = ~0u;
    // Preserve bounded custom-service boot records and any in-flight correlation.
    // This runtime flag also logs IOP DMA starts; it adds diagnostic overhead.
    ps2::iop::kernel::g_trace_modules = true;
    log(false, "menu", ",\"mode\":7,\"observer_version\":3");
}
template<class Cpu> void mode(const Cpu &c) {
    const auto value = read32(read32(c.r[28].w[0] - 23780u));
    if (active && value != last_mode) { last_mode = value; log(false, "mode", ",\"state_word\":%u", value); }
}
template<class Cpu> void connection(const Cpu &c) { state(c, 0, "connection"); }
template<class Cpu> void ui_produced(const Cpu &c) { state(c, 1, "ui_produced"); }
template<class Cpu> void ui_render(const Cpu &c) { state(c, 2, "ui_render"); }
template<class Cpu> void ui_queue1(const Cpu &c) { state(c, 3, "ui_queue1"); }
template<class Cpu> void ui_queue2(const Cpu &c) { state(c, 4, "ui_queue2"); }
template<class Cpu> void confirm_result(const Cpu &c) { state(c, 5, "confirm_result", true); }
template<class Cpu> void cancel_result(const Cpu &c) { state(c, 6, "cancel_result", true); }
template<class Cpu> void activity_result(const Cpu &c) { state(c, 7, "activity_result", true); }
template<class Cpu> void battle(const Cpu &) { log(false, "battle_dispatch", ""); }
inline void remember(std::uint32_t client, std::uint32_t service, std::uint32_t method,
                     std::uint32_t recv, std::uint32_t recv_size) {
    Pending *empty = nullptr;
    for (auto &p : pending) {
        if (p.used && p.client == client) {
            ++pending_collisions; p.ambiguous = true;
            log(false, "pending_collision", ",\"client\":%u,\"sequence\":%u", client, p.sequence);
            return; // Never attribute a later reply to guessed replacement metadata.
        }
        if (!p.used && !empty) empty = &p;
    }
    if (!empty) { ++pending_overflow; log(false, "pending_overflow", ",\"client\":%u", client); return; }
    *empty = {true, false, ++request_sequence, client, service, method, recv, recv_size};
}
template<class Cpu> void bind(const Cpu &c) {
    if (!active && !custom(c.r[5].w[0])) return;
    ++bind_hits;
    remember(c.r[4].w[0], c.r[5].w[0], 0, 0, 0);
    log(custom(c.r[5].w[0]), "bind", ",\"caller\":%u,\"client\":%u,\"service\":%u,\"mode\":%u",
        c.r[31].w[0] - 8u, c.r[4].w[0], c.r[5].w[0], c.r[6].w[0]);
}
template<class Cpu> void call(const Cpu &c) {
    const auto encoded = read32(c.r[4].w[0] + 36u), service = encoded ? encoded ^ 0xacacacacu : ~0u;
    if (!active && !custom(service)) return;
    ++call_hits;
    if (background(service)) { ++background_calls; return; }
    remember(c.r[4].w[0], service, c.r[5].w[0], c.r[9].w[0], c.r[10].w[0]);
    if (service == 0x80000400u) ++card_calls;
    if (repeated_card(0, service, c.r[5].w[0], {c.r[31].w[0], c.r[4].w[0], encoded,
        c.r[5].w[0], c.r[6].w[0], c.r[7].w[0], c.r[8].w[0], c.r[9].w[0], c.r[10].w[0]})) return;
    log(custom(service), "call", ",\"caller\":%u,\"client\":%u,\"server_data\":%u,\"service\":%u,\"method\":%u,"
        "\"mode\":%u,\"send\":%u,\"send_size\":%u,\"recv\":%u,\"recv_size\":%u",
        c.r[31].w[0] - 8u, c.r[4].w[0], encoded, service, c.r[5].w[0], c.r[6].w[0],
        c.r[7].w[0], c.r[8].w[0], c.r[9].w[0], c.r[10].w[0]);
}
template<class Cpu> void bind_return(const Cpu &c) {
    if (!active && !custom(c.r[19].w[0])) return;
    log(custom(c.r[19].w[0]), "bind_return", ",\"client\":%u,\"service\":%u,\"mode\":%u,\"return_value\":%d,\"server_data\":%u",
        c.r[17].w[0], c.r[19].w[0], c.r[18].w[0], c.r[2].sw[0], read32(c.r[17].w[0] + 36u));
}
template<class Cpu> void call_return(const Cpu &c) {
    const auto encoded = read32(c.r[17].w[0] + 36u), service = encoded ? encoded ^ 0xacacacacu : ~0u;
    if (!active && !custom(service)) return;
    if (background(service)) return;
    if (repeated_card(1, service, c.r[22].w[0], {c.r[17].w[0], c.r[22].w[0], c.r[30].w[0], c.r[2].w[0]})) return;
    log(custom(service), "call_return", ",\"client\":%u,\"service\":%u,\"method\":%u,\"mode\":%u,\"return_value\":%d",
        c.r[17].w[0], service, c.r[22].w[0], c.r[30].w[0], c.r[2].sw[0]);
}
template<class Cpu> void rpc_end(const Cpu &c) {
    ++end_hits;
    const auto packet = c.r[4].w[0], client = read32(packet + 28u), command = read32(packet + 32u);
    for (auto &p : pending) if (p.used && p.client == client) {
        // This is a local RPC end acknowledgement, not evidence of operation success.
        const bool word = !p.ambiguous && p.recv && p.recv_size >= 4;
        const bool status = !p.ambiguous && p.recv && p.recv_size >= 26 && p.service == 0x01270030u;
        if (p.service == 0x80000400u) ++card_ends;
        if (repeated_card(2, p.service, p.method, {client, p.method, command, read32(packet + 36u),
            p.ambiguous, word, word ? read32(p.recv) : 0, status,
            status ? read16(p.recv + 24u) : 0})) { p.used = false; return; }
        log(custom(p.service), "rpc_end", ",\"client\":%u,\"sequence\":%u,\"service\":%u,\"method\":%u,\"command\":%u,"
            "\"rpc_id\":%u,\"server_data\":%u,\"ambiguous\":%s,\"has_reply_word\":%s,\"reply_word0\":%u,"
            "\"has_reply_status\":%s,\"reply_i16_24\":%d",
            client, p.sequence, p.service, p.method, command, read32(packet + 24u), read32(packet + 36u),
            p.ambiguous ? "true" : "false", word ? "true" : "false", word ? read32(p.recv) : 0,
            status ? "true" : "false", status ? static_cast<std::int16_t>(read16(p.recv + 24u)) : 0);
        p.used = false; return;
    }
}
}
