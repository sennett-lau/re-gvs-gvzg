#pragma once
#include <array>
#include <cstdint>
#include <cstdio>
#include <utility>

// Explicit diagnostic for the prepared exec runtime only. Callers run on the
// emulation thread at EE kernel service; nothing here schedules, wakes, writes
// guest memory or changes a deadline.
namespace original_exec::wait_snapshot {
inline constexpr unsigned thread_limit = 64, stack_words = 32, scan_words = 128, return_limit = 16;
inline constexpr unsigned object_limit = 32, waiter_limit = 8;
inline constexpr std::uint32_t trigger_state = 39, state_address = 0x00CD1360u;
// Guest milliseconds after the first state 39. Capture18 entered state 39 0.8 s
// before the third TLS final receive; the backend closed 60 s after that receive.
inline constexpr std::array<std::uint32_t, 11> delays_ms{500, 2000, 5000, 10000, 20000, 40000, 63000, 75000, 120000, 180000, 240000};

struct Gate {
    bool armed = false, rejected = false;
    unsigned next = 0;
    std::uint64_t start = 0;
    // 0: nothing, -1: regressing clock (stop), -2: trigger record, 1..N: sample number.
    int poll(std::uint64_t now, std::uint32_t state_word, std::uint64_t clock) {
        if (rejected || next == delays_ms.size()) return 0;
        if (!armed) {
            if ((state_word & 0xFFu) != trigger_state) return 0;
            armed = true; start = now; return -2;
        }
        if (now < start) { rejected = true; return -1; }
        if (now - start < delays_ms[next] * clock / 1000u) return 0;
        return static_cast<int>(++next);
    }
    bool done() const { return rejected || next == delays_ms.size(); }
};

struct Row {
    int id{}, status{}, priority{}, init_priority{}, wait{}, wait_id{}, wakeups{};
    std::uint64_t order{};
    std::uint32_t entry{}, pc{}, ra{}, sp{}, gp{}, v0{}, v1{}, a0{}, a1{}, a2{}, a3{}, s0{}, s1{};
    // IOP-only fields; EE rows leave them at zero.
    std::uint32_t rpc_queue{}, rpc_server{}, event_bits{}, event_mode{};
    bool stack_valid{};
    std::array<std::uint32_t, stack_words> stack{};
    unsigned returns{};
    std::array<std::uint32_t, return_limit> return_candidates{};
};

inline bool span_valid(std::uint32_t sp, std::uint32_t ram_size, unsigned words) {
    return !(sp & 3u) && ram_size >= words * 4u && sp <= ram_size - words * 4u;
}

// MIPS call forms whose return address is the call site plus eight.
inline bool call_word(std::uint32_t word) {
    const std::uint32_t op = word >> 26, rt = (word >> 16) & 31u;
    return op == 3u || (op == 0u && (word & 0x3Fu) == 9u) || (op == 1u && rt >= 0x10u && rt <= 0x13u);
}

// Raw words above SP, plus a bounded scan for aligned values whose preceding
// call-plus-eight word is a call. Candidates are not a reconstructed stack.
template<class Read> void stack(Row &row, std::uint32_t ram_size, Read read) {
    row.stack_valid = span_valid(row.sp, ram_size, stack_words);
    if (!row.stack_valid) return;
    for (unsigned i = 0; i < stack_words; ++i) row.stack[i] = read(row.sp + i * 4u);
    const unsigned words = span_valid(row.sp, ram_size, scan_words) ? scan_words : stack_words;
    for (unsigned i = 0; i < words && row.returns < return_limit; ++i) {
        const std::uint32_t value = read(row.sp + i * 4u);
        if (!(value & 3u) && value >= 8u && value < ram_size && call_word(read(value - 8u)))
            row.return_candidates[row.returns++] = value;
    }
}

inline void words(const char *name, const std::uint32_t *values, unsigned count) {
    std::fprintf(stderr, ",\"%s\":[", name);
    for (unsigned i = 0; i < count; ++i) std::fprintf(stderr, "%s%u", i ? "," : "", values[i]);
    std::fprintf(stderr, "]");
}

inline void emit(unsigned sample, const char *processor, const Row &r) {
    std::fprintf(stderr, "[original-exec-wait] {\"kind\":\"thread\",\"sample\":%u,\"processor\":\"%s\","
        "\"id\":%d,\"status\":%d,\"priority\":%d,\"init_priority\":%d,\"order\":%llu,\"wait\":%d,\"wait_id\":%d,\"wakeups\":%d,"
        "\"entry\":%u,\"pc\":%u,\"ra\":%u,\"sp\":%u,\"gp\":%u,\"v0\":%u,\"v1\":%u,\"a0\":%u,\"a1\":%u,\"a2\":%u,\"a3\":%u,\"s0\":%u,\"s1\":%u,"
        "\"rpc_queue\":%u,\"rpc_server\":%u,\"event_bits\":%u,\"event_mode\":%u,\"stack_span_valid\":%s",
        sample, processor, r.id, r.status, r.priority, r.init_priority, static_cast<unsigned long long>(r.order), r.wait, r.wait_id, r.wakeups,
        r.entry, r.pc, r.ra, r.sp, r.gp, r.v0, r.v1, r.a0, r.a1, r.a2, r.a3, r.s0, r.s1,
        r.rpc_queue, r.rpc_server, r.event_bits, r.event_mode, r.stack_valid ? "true" : "false");
    words("stack_words", r.stack.data(), r.stack_valid ? stack_words : 0);
    words("return_candidates", r.return_candidates.data(), r.returns);
    std::fprintf(stderr, "}\n");
}

template<class Waiters> void waiters(const Waiters &list) {
    std::fprintf(stderr, ",\"waiter_count\":%zu,\"waiters\":[", list.size());
    unsigned count = 0;
    for (const auto id : list) {
        if (count == waiter_limit) break;
        std::fprintf(stderr, "%s%d", count++ ? "," : "", static_cast<int>(id));
    }
    std::fprintf(stderr, "]");
}

// A wait object referenced by a thread row, deduplicated per sample and processor.
struct Waited {
    std::array<std::pair<int, int>, object_limit> items{};
    unsigned count = 0;
    bool limited = false;
    void add(int kind, int id) {
        for (unsigned i = 0; i < count; ++i) if (items[i] == std::pair{kind, id}) return;
        if (count == object_limit) { limited = true; return; }
        items[count++] = {kind, id};
    }
};

}
