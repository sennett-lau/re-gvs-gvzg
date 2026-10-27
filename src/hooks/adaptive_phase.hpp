#pragma once
#include <cstdint>

// EE-thread-owned clock. Requests change the NEXT interval, never this frame's
// already-latched simulation epoch/interpolation fraction.
struct AdaptivePhase {
    static constexpr std::uint64_t clock = 294912000;
    std::uint64_t first_frame = 0, last_frame = ~0ull, cycles = 0, tick = 0, period = clock / 60;
    unsigned hz = 60;
    bool initialized = false, extra = false;
    float alpha = 0;

    void begin(std::uint64_t first, unsigned initial_hz) {
        *this = AdaptivePhase{};
        first_frame = first;
        hz = initial_hz;
        period = clock / hz;
    }
    bool latch(std::uint64_t frame, unsigned requested_hz) {
        if (frame < first_frame || frame == last_frame) return false;
        if (initialized) cycles += period;
        const auto next_tick = cycles * 60 / clock;
        extra = initialized && next_tick == tick;
        tick = next_tick;
        alpha = static_cast<float>((cycles * 60) % clock) / static_cast<float>(clock);
        initialized = true;
        last_frame = frame;
        if (requested_hz >= 60 && requested_hz <= 120) hz = requested_hz;
        period = clock / hz;
        return true;
    }
};
