#pragma once

#include <array>
#include <cmath>
#include <limits>

// Isolated research helper. Matrices use column-major affine T * R * S layout.
// This is pose interpolation, not a change to the game's simulation timestep.
namespace research_render_math {

using Matrix = std::array<float, 16>;

enum class InterpolationStatus {
    endpoint,
    interpolated,
    fallback_current,
};

namespace detail {
using Vector = std::array<double, 3>;
using Quaternion = std::array<double, 4>; // x, y, z, w
struct Transform {
    Vector translation, scale;
    Quaternion rotation;
    bool reflected;
};

inline double dot(const Vector &a, const Vector &b) {
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

inline Vector cross(const Vector &a, const Vector &b) {
    return {a[1] * b[2] - a[2] * b[1],
            a[2] * b[0] - a[0] * b[2],
            a[0] * b[1] - a[1] * b[0]};
}

inline bool normalize(Quaternion &q) {
    double squared = 0;
    for (double v : q) squared += v * v;
    if (!std::isfinite(squared) || squared < 1e-16) return false;
    const double inverse = 1.0 / std::sqrt(squared);
    for (double &v : q) v *= inverse;
    return true;
}

inline bool decompose(const Matrix &m, Transform &out) {
    for (float v : m) if (!std::isfinite(v)) return false;
    // Permit floating-point noise, but do not silently interpret a projective
    // or substantially sheared matrix as a rigid pose.
    constexpr double affine_tolerance = 1e-6;
    constexpr double orthogonal_tolerance = 1e-4;
    if (std::abs(m[3]) > affine_tolerance || std::abs(m[7]) > affine_tolerance ||
        std::abs(m[11]) > affine_tolerance || std::abs(m[15] - 1.0) > affine_tolerance)
        return false;
    std::array<Vector, 3> columns;
    for (unsigned column = 0; column < 3; ++column) {
        auto &v = columns[column];
        for (unsigned row = 0; row < 3; ++row) v[row] = m[column * 4 + row];
        out.scale[column] = std::sqrt(dot(v, v));
        if (out.scale[column] < 1e-8) return false;
        for (double &component : v) component /= out.scale[column];
        out.translation[column] = m[12 + column];
    }
    if (std::abs(dot(columns[0], columns[1])) > orthogonal_tolerance ||
        std::abs(dot(columns[0], columns[2])) > orthogonal_tolerance ||
        std::abs(dot(columns[1], columns[2])) > orthogonal_tolerance)
        return false;
    const double determinant = dot(columns[0], cross(columns[1], columns[2]));
    if (std::abs(std::abs(determinant) - 1.0) > orthogonal_tolerance) return false;
    out.reflected = determinant < 0;
    if (out.reflected) {
        // A consistent sign axis avoids choosing different decompositions when
        // the largest scale changes. The remaining rotation has determinant +1.
        out.scale[0] = -out.scale[0];
        for (double &component : columns[0]) component = -component;
    }

    const double r00 = columns[0][0], r01 = columns[1][0], r02 = columns[2][0];
    const double r10 = columns[0][1], r11 = columns[1][1], r12 = columns[2][1];
    const double r20 = columns[0][2], r21 = columns[1][2], r22 = columns[2][2];
    const double trace = r00 + r11 + r22;
    auto &q = out.rotation;
    if (trace > 0) {
        const double s = 2.0 * std::sqrt(trace + 1.0);
        q = {(r21 - r12) / s, (r02 - r20) / s, (r10 - r01) / s, s * 0.25};
    } else if (r00 >= r11 && r00 >= r22) {
        const double s = 2.0 * std::sqrt(1.0 + r00 - r11 - r22);
        q = {s * 0.25, (r01 + r10) / s, (r02 + r20) / s, (r21 - r12) / s};
    } else if (r11 >= r22) {
        const double s = 2.0 * std::sqrt(1.0 + r11 - r00 - r22);
        q = {(r01 + r10) / s, s * 0.25, (r12 + r21) / s, (r02 - r20) / s};
    } else {
        const double s = 2.0 * std::sqrt(1.0 + r22 - r00 - r11);
        q = {(r02 + r20) / s, (r12 + r21) / s, s * 0.25, (r10 - r01) / s};
    }
    return normalize(q);
}
} // namespace detail

inline bool is_supported_affine(const Matrix &matrix) {
    detail::Transform transform;
    return detail::decompose(matrix, transform);
}

// Finite alpha is clamped to [0,1]; endpoints are returned bit-for-bit, including
// unsupported matrices. Interior results use shortest-path quaternion nlerp,
// linear translation and scale. Nlerp is not constant angular velocity except
// at the endpoints/midpoint, which are the samples used by the 120 Hz probe.
//
// Degenerate columns (<1e-8), significant shear, non-affine/nonfinite matrices,
// nonfinite alpha, opposite handedness, or unrepresentable results return
// current unchanged. This intentionally preserves a game's current invalid or
// disabled-bone representation instead of inventing a replacement pose. Matching
// reflections are supported; determinant sign never crosses zero in that case.
inline Matrix interpolate_affine(const Matrix &previous, const Matrix &current,
                                 float alpha, InterpolationStatus *status = nullptr) {
    const auto finish = [status](const Matrix &matrix, InterpolationStatus outcome) {
        if (status) *status = outcome;
        return matrix;
    };
    if (!std::isfinite(alpha)) return finish(current, InterpolationStatus::fallback_current);
    if (alpha <= 0) return finish(previous, InterpolationStatus::endpoint);
    if (alpha >= 1) return finish(current, InterpolationStatus::endpoint);
    detail::Transform a, b;
    if (!detail::decompose(previous, a) || !detail::decompose(current, b) || a.reflected != b.reflected)
        return finish(current, InterpolationStatus::fallback_current);

    double cosine = 0;
    for (unsigned i = 0; i < 4; ++i) cosine += a.rotation[i] * b.rotation[i];
    if (cosine < 0) for (double &component : b.rotation) component = -component;
    detail::Quaternion q;
    const double t = alpha;
    for (unsigned i = 0; i < 4; ++i) q[i] = (1.0 - t) * a.rotation[i] + t * b.rotation[i];
    if (!detail::normalize(q)) return finish(current, InterpolationStatus::fallback_current);
    const auto [x, y, z, w] = q;
    const std::array<detail::Vector, 3> columns = {{
        {1.0 - 2.0 * (y * y + z * z), 2.0 * (x * y + z * w), 2.0 * (x * z - y * w)},
        {2.0 * (x * y - z * w), 1.0 - 2.0 * (x * x + z * z), 2.0 * (y * z + x * w)},
        {2.0 * (x * z + y * w), 2.0 * (y * z - x * w), 1.0 - 2.0 * (x * x + y * y)},
    }};
    Matrix result{};
    result[15] = 1;
    for (unsigned column = 0; column < 3; ++column) {
        const double scale = (1.0 - t) * a.scale[column] + t * b.scale[column];
        for (unsigned row = 0; row < 3; ++row) {
            const double value = columns[column][row] * scale;
            if (!std::isfinite(value) || std::abs(value) > std::numeric_limits<float>::max())
                return finish(current, InterpolationStatus::fallback_current);
            result[column * 4 + row] = static_cast<float>(value);
        }
        result[12 + column] = static_cast<float>((1.0 - t) * a.translation[column] + t * b.translation[column]);
    }
    return finish(result, InterpolationStatus::interpolated);
}
} // namespace research_render_math
