void research_reset_interpolation();
#include "render_hooks.hpp"
#include "full_game_web_hooks.hpp"
#include "adaptive_phase.hpp"
#include "scene_snapshot.hpp"
#include "ps2/system.hpp"
#include "ps2/memory.hpp"
#ifdef __EMSCRIPTEN__
#include <emscripten.h>
#else
#define EMSCRIPTEN_KEEPALIVE
#endif
#include <atomic>
#include <cstdlib>
#include <cstdio>
#include <string>

namespace {
AdaptivePhase phase;
bool active = false, interpolation_started = false;
std::atomic<unsigned> capable_stat{0}, mode_stat{0xffffffffu}, generation_stat{0};
std::uint64_t scene_key = ~0ull;
std::atomic<std::int64_t> canonical_irq_clock_stat{-1};
std::atomic<std::uint64_t> scene_snapshot_stat{gundam_scene::invalid};
unsigned stable_scene_frames = 0;
std::uint32_t previous_battle_counter = 0;
bool scene_capable = false;
struct Scene { std::uint64_t key; unsigned mode; bool eligible; std::uint64_t snapshot = gundam_scene::invalid; };
Scene read_scene() {
    // Original dispatcher reads *(GP-0x5CE4). Before initialization it is zero.
    const auto context = ps2::ld32(0x6D7A8C);
    if (context != 0x839110) return {~0ull, 0xffffffffu, false};
    const auto mode = ps2::ld8(context), state = ps2::ld8(context+1), stage = ps2::ld8(context+2);
    const auto initialized = ps2::ld8(context+4), phase_state = ps2::ld8(context+5);
    const auto human_mask = ps2::ld8(context+0x38);
    // 0x2281B0 enters the original pause menu through 0x238A00(1);
    // 0x2282A0 leaves it through 0x238A00(0). This flag also pauses sound.
    const auto paused = ps2::ld8(context+0x39);
    const auto configuration = ps2::ld32(0x6D7A88);
    const bool configuration_valid = configuration == 0x838FB0;
    const unsigned split_active = configuration_valid ? ps2::ld8(configuration+0x29) : 0;
    const unsigned split_pending = configuration_valid ? ps2::ld8(configuration+0x2A) : 0;
    const auto camera = ps2::ld32(0x6D7A90);
    const unsigned camera_kind = camera==0x843D30 ? 1 : camera==0x843EF0 ? 2 : camera==0x8440B0 ? 3 : 0;
    const bool single_camera = configuration_valid && split_active==0 && split_pending==0 && camera_kind==1;
    const std::uint64_t key = mode | (std::uint64_t(state)<<8) | (std::uint64_t(stage)<<16) |
        (std::uint64_t(initialized)<<24) | (std::uint64_t(phase_state)<<32) | (std::uint64_t(human_mask)<<40) | (std::uint64_t(paused)<<48) |
        (std::uint64_t(mode==4 && !single_camera)<<56);
    const auto snapshot = gundam_scene::pack({mode,state,stage,initialized,phase_state,human_mask,paused,
        split_active,split_pending,ps2::ld8(context+0x4C),ps2::ld8(context+3),ps2::ld8(context+0x34),camera_kind,
        configuration_valid ? ps2::ld8(configuration+0x0C) : 0u,
        configuration_valid ? ps2::ld8(configuration+0x0D) : 0u,configuration_valid ? 1u : 0u});
    // Original0x2BD240 (VS) and0x2BDFB0 (Arcade) both call0x2B19F0.
    // VS selection/loading/results and its two-camera branch remain60Hz.
    const bool battle_path = (mode==3 && stage==7) || (mode==4 && stage==3 && single_camera);
    return {key, unsigned(mode) | (unsigned(stage)<<8),
        battle_path && state==1 && initialized==1 && phase_state==2 && human_mask==1 && paused==0,
        snapshot};
}
void observe_scene(bool vblank) {
    const auto scene=read_scene();
    // EE-owned observation only; never dereference guest RAM from the JS thread.
    canonical_irq_clock_stat.store(ps2::ld32(0x6D7A8C)==0x839110 ?
        static_cast<std::int64_t>(ps2::ld32(0x839110+0x58)) : -1,std::memory_order_relaxed);
    scene_snapshot_stat.store(scene.snapshot,std::memory_order_relaxed);
    const auto counter=scene.eligible ? ps2::ld32(0x838F0C) : 0;
    if (scene.key != scene_key || (scene.eligible && previous_battle_counter && counter < previous_battle_counter)) {
        research_reset_interpolation();
        scene_key=scene.key; stable_scene_frames=0; scene_capable=false;
        generation_stat.fetch_add(1,std::memory_order_relaxed);
    } else if(vblank && stable_scene_frames<2) ++stable_scene_frames;
    previous_battle_counter=counter;
    scene_capable=scene.eligible && stable_scene_frames>=2;
    capable_stat.store(scene_capable,std::memory_order_relaxed);
    mode_stat.store(scene.mode,std::memory_order_relaxed);
}

unsigned scripted_input = 0;
std::uint64_t first_cycles = 0;
std::atomic<unsigned> requested_hz{0}, applied_hz{0}, rate_changes{0};
std::atomic<std::uint32_t> simulation_ticks{0}, extra_frames{0}, model_copies{0}, camera_copies{0};
std::atomic<std::uint32_t> battle_ticks{0}, clock_seconds{0}, current_frame{0};
std::atomic<std::uint64_t> audio_frames{0}, phase_cycles{0}, phase_tick{0};
std::atomic<double> guest_seconds{0}, phase_alpha{0};

unsigned initial_hz() {
    static const unsigned value = [] {
        const char *text = std::getenv("PS2_EXPERIMENT_FPS");
        char *end = nullptr;
        const long n = text ? std::strtol(text, &end, 10) : 120;
        return text && end && *end == '\0' && n >= 60 && n <= 120 ? static_cast<unsigned>(n) : 120u;
    }();
    return value;
}
}

unsigned research_web_video_hz() {
    const unsigned value = applied_hz.load(std::memory_order_acquire);
    return value ? value : 60u;
}
std::uint64_t research_adaptive_frame_cycles() {
    return active ? phase.period : ps2::kEeClock / 60u;
}
bool research_interpolation_enabled() { return active && interpolation_started && scene_capable && read_scene().key==scene_key; }
std::uint64_t research_pose_epoch() { return phase.tick + 1; }
bool research_render_only() { return active && phase.extra; }
float research_render_alpha() { return research_interpolation_enabled() ? phase.alpha : 0.f; }
void research_mode_complete() {
    observe_scene(false);
    if (!research_render_only()) simulation_ticks.fetch_add(1, std::memory_order_relaxed);
}
void research_render_complete() {
    research_camera_end();
    if (research_render_only()) extra_frames.fetch_add(1, std::memory_order_relaxed);
    model_copies.store(research_interpolated_models(), std::memory_order_relaxed);
    camera_copies.store(research_interpolated_cameras(), std::memory_order_relaxed);
}
void research_web_begin() {
    const unsigned hz = initial_hz();
    phase.begin(ps2::frame_count() + 1, 60);
    research_reset_interpolation();
    scene_key=~0ull;stable_scene_frames=0;scene_capable=false;
    canonical_irq_clock_stat.store(-1,std::memory_order_relaxed);
    scene_snapshot_stat.store(gundam_scene::invalid,std::memory_order_relaxed);
    requested_hz.store(hz, std::memory_order_release);
    applied_hz.store(60, std::memory_order_release);
    const char *mode = std::getenv("PS2_RENDER_AUTO");
    interpolation_started = hz > 60 || (mode && std::string(mode) == "1");
    active = true;
    first_cycles = 0;
    audio_frames.store(0);
    const char *test = std::getenv("PS2_EXPERIMENT_TEST");
    scripted_input = test && std::string(test) == "combat" ? 2 : test && std::string(test) == "movement" ? 1 : 0;
    std::fprintf(stderr, "[full-game-adaptive] requests %u video Hz; boot/unverified modes use60; verified battle uses continuous60-Hz simulation\n", hz);
}
void research_web_vblank() {
    if (!active) return;
    const auto frame = ps2::frame_count();
    const auto previous_hz = phase.hz;
    observe_scene(true);
    const unsigned next_hz=scene_capable ? requested_hz.load(std::memory_order_acquire) : 60u;
    if (!phase.latch(frame, next_hz)) return;
    if (phase.hz != previous_hz) rate_changes.fetch_add(1, std::memory_order_relaxed);
    if (phase.hz > 60) interpolation_started = true;
    applied_hz.store(phase.hz, std::memory_order_release);
    phase_cycles.store(phase.cycles, std::memory_order_relaxed);
    phase_tick.store(phase.tick, std::memory_order_relaxed);
    phase_alpha.store(phase.alpha, std::memory_order_relaxed);
    if (frame == phase.first_frame) first_cycles = ps2::now();
    if (scripted_input && !phase.extra) {
        // These use the ordinary host-pad→IOP path, not the diagnostic
        // game-cache replay hook. Dynamic cadence can shift an input edge by
        // one simulation tick; this mode is intentionally separate from PvP.
        unsigned buttons = 0;
        if (scripted_input == 2 && phase.tick < 1800) {
            if (phase.tick % 60 >= 15 && phase.tick % 60 < 21) buttons |= 1u << 15;
            if (phase.tick / 60 % 3 == 1 && phase.tick % 60 >= 30 && phase.tick % 60 < 42) buttons |= 1u << 14;
        }
        ps2::set_pad_buttons(buttons, 0);
        ps2::set_pad_axis(2, phase.tick < 1800 ? 255 : 128, 0);
    }
    current_frame.store(frame, std::memory_order_relaxed);
    guest_seconds.store(first_cycles ? static_cast<double>(ps2::now() - first_cycles) / ps2::kEeClock : 0.0, std::memory_order_relaxed);
    battle_ticks.store(ps2::ld32(0x838F0C), std::memory_order_relaxed);
    clock_seconds.store(ps2::ld16(0x838F64), std::memory_order_relaxed);
}
void research_web_audio(std::size_t frames) { audio_frames.fetch_add(frames, std::memory_order_relaxed); }
extern "C" EMSCRIPTEN_KEEPALIVE int ps2web_request_fps(int hz) {
    if (hz < 60 || hz > 120) return 0;
    requested_hz.store(static_cast<unsigned>(hz), std::memory_order_release);
    return 1;
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
    case 7: return static_cast<double>(audio_frames.load(std::memory_order_relaxed));
    case 8: return research_web_video_hz();
    case 9: return guest_seconds.load(std::memory_order_relaxed);
    case 10: return requested_hz.load(std::memory_order_relaxed);
    case 11: return phase_alpha.load(std::memory_order_relaxed);
    case 12: return rate_changes.load(std::memory_order_relaxed);
    case 13: return static_cast<double>(phase_tick.load(std::memory_order_relaxed));
    case 14: return static_cast<double>(phase_cycles.load(std::memory_order_relaxed));
    case 15: return capable_stat.load(std::memory_order_relaxed);
    case 16: return mode_stat.load(std::memory_order_relaxed);
    case 17: return generation_stat.load(std::memory_order_relaxed);
    case 18: return capable_stat.load(std::memory_order_relaxed) ? 120 : 60;
    case 19: return gundam_scene::exported(scene_snapshot_stat.load(std::memory_order_relaxed));
    case 20: return static_cast<double>(canonical_irq_clock_stat.load(std::memory_order_relaxed));
    default: return 0;
    }
}
