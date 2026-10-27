float research_render_alpha();
// Experimental graphics-copy interpolation, specific to SLPS-25419.
// The entity simulation structures are never written by this hook.
#include "render_hooks.hpp"
#include "ps2/memory.hpp"
#include "render_math.hpp"
#include <array>
#include <cmath>
#include <cstring>
#include <unordered_map>
#include <vector>

namespace {
struct Pose {
    std::array<float, 4> position{};
    std::array<float, 3> angles{};
    std::vector<std::array<float, 16>> bones;
};
struct History {
    Pose previous, current;
    std::uint64_t epoch = ~0ull;
    std::uint32_t entity = 0, descriptor = 0;
};
std::unordered_map<std::uint32_t, History> history;
std::uint64_t interpolated = 0;
std::uint64_t bone_fallbacks = 0;
struct Camera {
    std::array<float, 4> eye, target, up;
    std::array<float, 16> projection_a, projection_b;
};
struct CameraHistory {
    Camera previous, current;
    std::uint64_t epoch = ~0ull;
};
std::unordered_map<std::uint32_t, CameraHistory> cameras;
std::uint32_t active_camera = 0;
std::array<unsigned char, 0x170> camera_backup;
std::uint64_t camera_frames = 0;

template <std::size_t N> std::array<float, N> read(std::uint32_t address) {
    std::array<float, N> value;
    std::memcpy(value.data(), ps2::g_ram + address, sizeof value);
    return value;
}
template <std::size_t N> void write(std::uint32_t address, const std::array<float, N> &value) {
    std::memcpy(ps2::g_ram + address, value.data(), sizeof value);
}
template <std::size_t N> std::array<float, N> mix(const std::array<float, N> &a, const std::array<float, N> &b, float t) {
    std::array<float, N> result;
    for (std::size_t i = 0; i < N; ++i) result[i] = a[i] + (b[i] - a[i]) * t;
    return result;
}

using Vec = std::array<float, 3>;
Vec cross(const Vec &a, const Vec &b) {
    return {a[1]*b[2]-a[2]*b[1], a[2]*b[0]-a[0]*b[2], a[0]*b[1]-a[1]*b[0]};
}
float dot(const Vec &a, const Vec &b) { return a[0]*b[0]+a[1]*b[1]+a[2]*b[2]; }
bool normalize(Vec &v) {
    const float length = std::sqrt(dot(v, v));
    if (!(length > 1e-6f) || !std::isfinite(length)) return false;
    for (float &x : v) x /= length;
    return true;
}
std::array<float, 16> multiply(const std::array<float, 16> &a, const std::array<float, 16> &b) {
    std::array<float, 16> out{};
    for (unsigned i = 0; i < 4; ++i) for (unsigned j = 0; j < 4; ++j)
        for (unsigned k = 0; k < 4; ++k) out[i*4+j] += a[k*4+j] * b[i*4+k];
    return out;
}
}

void research_model_copy(ps2::Cpu &c) {
    if (!research_interpolation_enabled()) return;
    const auto model = c.r[16].w[0], entity = c.r[17].w[0];
    if (model < 0x8AFDA0 || model > ps2::kRamSize - 0x65D0 || (model - 0x8AFDA0) % 0x65D0) return;
    const auto descriptor = ps2::ld32(model + 0x65BC);
    if (descriptor > ps2::kRamSize - 8) return;
    const auto count = ps2::ld8(descriptor + 7);
    if (!count || count > 40) return;
    Pose next;
    next.position = read<4>(model + 0x220);
    next.angles = read<3>(model + 0x200);
    for (unsigned i = 0; i < count; ++i) next.bones.push_back(read<16>(model + 0x300 + i * 0x240));
    auto &h = history[model];
    const auto epoch = research_pose_epoch();
    if (h.epoch == ~0ull || h.entity != entity || h.descriptor != descriptor || h.current.bones.size() != count) {
        h.previous = h.current = next;
        h.epoch = epoch;
        h.entity = entity;
        h.descriptor = descriptor;
    } else if (h.epoch != epoch) {
        h.previous = h.current;
        h.current = next;
        h.epoch = epoch;
    }
    // One simulation tick of presentation delay: previous on simulation frames,
    // halfway between previous/current on the additional rendering frames.
    const float alpha = research_render_alpha();
    write(model + 0x220, mix(h.previous.position, h.current.position, alpha));
    auto angles = h.previous.angles;
    for (unsigned i = 0; i < 3; ++i)
        angles[i] += std::remainder(h.current.angles[i] - angles[i], 6.28318530718f) * alpha;
    write(model + 0x200, angles);
    for (unsigned i = 0; i < count; ++i) {
        research_render_math::InterpolationStatus status;
        write(model + 0x300 + i * 0x240,
              research_render_math::interpolate_affine(h.previous.bones[i], h.current.bones[i], alpha, &status));
        if (status == research_render_math::InterpolationStatus::fallback_current) ++bone_fallbacks;
    }
    ++interpolated;
}

std::uint64_t research_interpolated_models() { return interpolated; }

std::uint32_t research_attachment_source(std::uint32_t entity, unsigned offset) {
    if (!research_interpolation_enabled()) return entity + offset;
    const auto index = static_cast<std::int8_t>(ps2::ld8(entity + 0x21D0));
    if (index < 0) return entity + offset;
    const auto model = 0x8AFDA0 + index * 0x65D0;
    auto it = history.find(model);
    const auto bone = (offset - 0x7C0) / 0x40;
    if (it == history.end() || bone >= it->second.current.bones.size()) return entity + offset;
    return model + 0x300 + bone * 0x240;
}

void research_camera_begin() {
    if (!research_interpolation_enabled()) return;
    const auto address = ps2::ld32(0x6D7A90);
    if (address < 0x800000 || address >= ps2::kRamSize - 0x1C0) return;
    Camera next{read<4>(address+0x180), read<4>(address+0x190), read<4>(address+0x1A0),
                read<16>(address+0x40), read<16>(address+0x80)};
    auto &h = cameras[address];
    const auto epoch = research_pose_epoch();
    if (h.epoch == ~0ull) h.previous = h.current = next;
    else if (h.epoch != epoch) { h.previous = h.current; h.current = next; }
    h.epoch = epoch;
    const float alpha = research_render_alpha();
    const auto eye = mix(h.previous.eye, h.current.eye, alpha);
    const auto target = mix(h.previous.target, h.current.target, alpha);
    const auto up = mix(h.previous.up, h.current.up, alpha);
    Vec forward{target[0]-eye[0],target[1]-eye[1],target[2]-eye[2]};
    if (!normalize(forward)) return;
    Vec right = cross(forward, {up[0],up[1],up[2]});
    if (!normalize(right)) return;
    const Vec down = cross(forward, right), e{eye[0],eye[1],eye[2]};
    const std::array<float, 16> view{right[0],down[0],forward[0],0,
        right[1],down[1],forward[1],0, right[2],down[2],forward[2],0,
        -dot(right,e),-dot(down,e),-dot(forward,e),1};
    const auto pa = mix(h.previous.projection_a, h.current.projection_a, alpha);
    const auto pb = mix(h.previous.projection_b, h.current.projection_b, alpha);
    active_camera = address;
    std::memcpy(camera_backup.data(), ps2::g_ram + address + 0x40, camera_backup.size());
    write(address+0x40,pa); write(address+0x80,pb); write(address+0xC0,view);
    write(address+0x100,multiply(pa,view)); write(address+0x140,multiply(pb,view));
    write(address+0x180,eye); write(address+0x190,target); write(address+0x1A0,up);
    ++camera_frames;
}

void research_camera_end() {
    if (!active_camera) return;
    std::memcpy(ps2::g_ram + active_camera + 0x40, camera_backup.data(), camera_backup.size());
    active_camera = 0;
}
std::uint64_t research_interpolated_cameras() { return camera_frames; }

void research_reset_interpolation() {
    // Restore any temporary graphics camera before invalidating pointer history.
    research_camera_end();
    history.clear();
    cameras.clear();
}
