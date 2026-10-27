// SLPS-25419 only. Controller for the isolated browser experiment.
#include "render_hooks.hpp"
#include "web_hooks.hpp"
#include "ps2/system.hpp"
#include "ps2/memory.hpp"
#include <emscripten.h>
#include <atomic>
#include <cstdlib>
#include <cstdio>
#include <string>

namespace {
std::uint64_t first_frame = 0;
bool active = false;
bool mode120 = true;
std::atomic<std::uint32_t> simulation_ticks{0}, extra_frames{0}, model_copies{0}, camera_copies{0};
std::atomic<std::uint32_t> battle_ticks{0}, clock_seconds{0};
std::atomic<std::uint32_t> current_frame{0};
}
bool research_web_120() {
    static const bool enabled = [] {
        const char *mode = std::getenv("PS2_EXPERIMENT_FPS");
        return !mode || std::string(mode) != "60";
    }();
    return enabled;
}
bool research_interpolation_enabled() { return active && mode120; }
std::uint64_t research_pose_epoch() {
    return ps2::frame_count() < first_frame ? 0 : (ps2::frame_count() - first_frame) / 2 + 1;
}
bool research_render_only() {
    return active && mode120 && ps2::frame_count() >= first_frame && ((ps2::frame_count() - first_frame) & 1u);
}
void research_mode_complete() {
    // The outer mode callback runs on both video phases. Count only the
    // phase that is allowed to execute the game's simulation worker.
    if (!research_render_only()) simulation_ticks.fetch_add(1, std::memory_order_relaxed);
}
void research_render_complete() {
    research_camera_end();
    if (research_render_only()) extra_frames.fetch_add(1, std::memory_order_relaxed);
    model_copies.store(research_interpolated_models(), std::memory_order_relaxed);
    camera_copies.store(research_interpolated_cameras(), std::memory_order_relaxed);
}
void research_web_begin() {
    mode120 = research_web_120();
    first_frame = ps2::frame_count() + 1;
    active = true;
    std::fprintf(stderr, "[experiment] %u Hz video / 60 Hz simulation; first frame %llu\n", mode120 ? 120 : 60,
                 static_cast<unsigned long long>(first_frame));
    const char *test = std::getenv("PS2_EXPERIMENT_TEST");
    if (test && (std::string(test) == "combat" || std::string(test) == "movement")) {
        const unsigned hz = mode120 ? 120 : 60;
        ps2::g_options.axis_presses.push_back({first_frame, hz * 30, 2, 255});
        if (std::string(test) == "combat") for (unsigned second = 0; second < 30; ++second) {
            ps2::g_options.presses.push_back({first_frame + hz * second + hz / 4, hz / 10, static_cast<std::uint16_t>(1u << 15)});
            if (second % 3 == 1) ps2::g_options.presses.push_back({first_frame + hz * second + hz / 2, hz / 5, static_cast<std::uint16_t>(1u << 14)});
        }
    }
}
void research_web_vblank() {
    current_frame.store(ps2::frame_count(), std::memory_order_relaxed);
    battle_ticks.store(ps2::ld32(0x838F0C), std::memory_order_relaxed);
    clock_seconds.store(ps2::ld16(0x838F64), std::memory_order_relaxed);
}
extern "C" EMSCRIPTEN_KEEPALIVE double ps2web_experiment_stat(int which) {
    switch (which) {
    case 0: return simulation_ticks.load(std::memory_order_relaxed);
    case 1: return extra_frames.load(std::memory_order_relaxed);
    case 2: return model_copies.load(std::memory_order_relaxed);
    case 3: return camera_copies.load(std::memory_order_relaxed);
    case 4: return battle_ticks.load(std::memory_order_relaxed);
    case 5: return clock_seconds.load(std::memory_order_relaxed);
    case 6: return current_frame.load(std::memory_order_relaxed);
    default: return 0;
    }
}
