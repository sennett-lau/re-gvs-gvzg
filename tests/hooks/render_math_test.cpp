#include "render_math.hpp"

#include <bit>
#include <cstdint>
#include <cstring>
#include <fstream>
#include <iostream>
#include <numbers>
#include <stdexcept>
#include <string>
#include <vector>

using research_render_math::Matrix;
using research_render_math::InterpolationStatus;
using research_render_math::interpolate_affine;
using research_render_math::is_supported_affine;

namespace {
unsigned checks = 0;
void require(bool condition, const std::string &message) {
    ++checks;
    if (!condition) throw std::runtime_error(message);
}
bool exact(const Matrix &a, const Matrix &b) {
    return std::memcmp(a.data(), b.data(), sizeof a) == 0;
}
bool close(double a, double b, double tolerance = 2e-5) {
    return std::isfinite(a) && std::isfinite(b) && std::abs(a - b) <= tolerance;
}
Matrix identity() {
    Matrix m{};
    m[0] = m[5] = m[10] = m[15] = 1;
    return m;
}
Matrix rotate(unsigned axis, double degrees) {
    Matrix m = identity();
    const double angle = degrees * std::numbers::pi / 180.0;
    const float c = static_cast<float>(std::cos(angle)), s = static_cast<float>(std::sin(angle));
    const unsigned a = (axis + 1) % 3, b = (axis + 2) % 3;
    m[a * 4 + a] = m[b * 4 + b] = c;
    m[a * 4 + b] = s;
    m[b * 4 + a] = -s;
    return m;
}
Matrix scale(Matrix m, const std::array<float, 3> &s) {
    for (unsigned column = 0; column < 3; ++column)
        for (unsigned row = 0; row < 3; ++row) m[column * 4 + row] *= s[column];
    return m;
}
double determinant(const Matrix &m) {
    return double(m[0]) * (double(m[5]) * m[10] - double(m[9]) * m[6]) -
           double(m[4]) * (double(m[1]) * m[10] - double(m[9]) * m[2]) +
           double(m[8]) * (double(m[1]) * m[6] - double(m[5]) * m[2]);
}
double column_dot(const Matrix &m, unsigned a, unsigned b) {
    double result = 0;
    for (unsigned i = 0; i < 3; ++i) result += double(m[a * 4 + i]) * m[b * 4 + i];
    return result;
}
void expect_matrix(const Matrix &actual, const Matrix &expected, const std::string &label,
                   double tolerance = 2e-5) {
    for (unsigned i = 0; i < 16; ++i) require(close(actual[i], expected[i], tolerance), label + " element " + std::to_string(i));
}
void expect_rigid(const Matrix &m, const std::string &label, double tolerance = 2e-5) {
    for (unsigned a = 0; a < 3; ++a) {
        require(close(column_dot(m, a, a), 1, tolerance), label + " unit column");
        for (unsigned b = a + 1; b < 3; ++b) require(close(column_dot(m, a, b), 0, tolerance), label + " orthogonal columns");
    }
    require(close(determinant(m), 1, tolerance), label + " determinant +1");
}
void fallback(const Matrix &a, const Matrix &b, const std::string &label, float alpha = 0.5f) {
    InterpolationStatus status{};
    require(exact(interpolate_affine(a, b, alpha, &status), b), label + " returns current bits");
    require(status == InterpolationStatus::fallback_current, label + " reports fallback");
}

void known_transforms() {
    const Matrix id = identity();
    for (unsigned axis = 0; axis < 3; ++axis) {
        for (double angle : {90.0, 180.0}) {
            InterpolationStatus status{};
            const Matrix end = rotate(axis, angle);
            const Matrix mid = interpolate_affine(id, end, 0.5f, &status);
            require(status == InterpolationStatus::interpolated, "known rotation accepted");
            expect_matrix(mid, rotate(axis, angle / 2), "half-angle rotation");
            expect_rigid(mid, "half-angle rotation");
            require(exact(interpolate_affine(id, end, 0), id), "rotation alpha0 exact");
            require(exact(interpolate_affine(id, end, 1), end), "rotation alpha1 exact");
        }
    }
    // Across the signed-angle seam the shorter path goes through 180, not zero.
    expect_matrix(interpolate_affine(rotate(2, 170), rotate(2, -170), 0.5f), rotate(2, 180), "shortest wrap arc");
    expect_matrix(interpolate_affine(rotate(1, 350), rotate(1, 10), 0.5f), id, "shortest zero arc");
    Matrix a = scale(rotate(2, 0), {1, 2, 3});
    Matrix b = scale(rotate(2, 90), {3, 4, 5});
    a[12] = -20; a[13] = 3; a[14] = 100;
    b[12] = 40; b[13] = -7; b[14] = 200;
    Matrix expected = scale(rotate(2, 45), {2, 3, 4});
    expected[12] = 10; expected[13] = -2; expected[14] = 150;
    const Matrix mid = interpolate_affine(a, b, 0.5f);
    expect_matrix(mid, expected, "translation and nonuniform scale");
    require(close(determinant(mid), 24), "positive scaled determinant");
    for (unsigned i = 0; i < 3; ++i) require(close(column_dot(mid, i, i), (i + 2) * (i + 2)), "scaled column length");

    a = scale(rotate(2, 0), {-1, 2, 3});
    b = scale(rotate(2, 90), {-3, 4, 5});
    const Matrix reflected = interpolate_affine(a, b, 0.5f);
    expect_matrix(reflected, scale(rotate(2, 45), {-2, 3, 4}), "matching reflections");
    require(close(determinant(reflected), -24), "negative determinant retained");
    // Reflection on Y must also survive canonical signed-X decomposition.
    a = scale(rotate(0, 20), {2, -3, 4});
    expect_matrix(interpolate_affine(a, a, 0.5f), a, "Y reflection roundtrip");
    require(determinant(interpolate_affine(a, a, 0.5f)) < 0, "Y reflection remains negative");
}

void conservative_inputs() {
    Matrix id = identity(), bad = id;
    id[1] = -0.0f;
    require(exact(interpolate_affine(id, rotate(2, 90), 0), id), "signed zero endpoint preserved");
    require(exact(interpolate_affine(id, rotate(2, 90), -1), id), "alpha lower clamp");
    const Matrix end = rotate(2, 90);
    require(exact(interpolate_affine(id, end, 2), end), "alpha upper clamp");
    fallback(id, end, "NaN alpha", std::numeric_limits<float>::quiet_NaN());
    fallback(id, end, "infinite alpha", std::numeric_limits<float>::infinity());
    bad[0] = 0;
    fallback(bad, id, "degenerate previous");
    fallback(id, bad, "degenerate current");
    bad = id; bad[0] = 1e-10f;
    fallback(bad, id, "near-zero scale");
    bad = id; bad[4] = 0.02f;
    fallback(bad, id, "shear");
    bad = id; bad[3] = 0.1f;
    fallback(bad, id, "projective matrix");
    bad = id; bad[15] = 0;
    fallback(id, bad, "invalid affine last element");
    bad = id; bad[6] = std::numeric_limits<float>::quiet_NaN();
    fallback(bad, id, "NaN previous");
    fallback(id, bad, "NaN current preserved");
    require(exact(interpolate_affine(bad, id, 0), bad), "unsupported endpoint still exact");
    bad = id; bad[12] = std::numeric_limits<float>::infinity();
    fallback(bad, id, "infinite translation");
    fallback(id, scale(id, {-1, 1, 1}), "opposite handedness");
    // Large finite translations must not overflow (b-a), as float lerp can.
    Matrix a = id, b = id;
    a[12] = -3e38f; b[12] = 3e38f;
    require(close(interpolate_affine(a, b, 0.5f)[12], 0), "large finite translation midpoint");
}

void fixture(const char *path) {
    std::ifstream file(path, std::ios::binary | std::ios::ate);
    require(bool(file), std::string("open fixture: ") + path);
    const auto size = file.tellg();
    require(size >= std::streamoff(0x839330 + 3 * 0x2200 + 0x7c0 + 24 * 64), "fixture covers all entities");
    std::vector<unsigned char> bytes(static_cast<std::size_t>(size));
    file.seekg(0);
    file.read(reinterpret_cast<char *>(bytes.data()), size);
    require(bool(file), "read fixture");
    constexpr unsigned counts[] = {27, 28, 27, 24};
    unsigned supported = 0, rejected = 0;
    for (unsigned slot = 0; slot < 4; ++slot) {
        unsigned slot_supported = 0;
        for (unsigned bone = 0; bone < counts[slot]; ++bone) {
            const auto address = 0x839330 + slot * 0x2200 + 0x7c0 + bone * 64;
            Matrix m;
            for (unsigned element = 0; element < 16; ++element) {
                const auto *p = bytes.data() + address + element * 4;
                const std::uint32_t bits = std::uint32_t(p[0]) | (std::uint32_t(p[1]) << 8) |
                                           (std::uint32_t(p[2]) << 16) | (std::uint32_t(p[3]) << 24);
                m[element] = std::bit_cast<float>(bits);
            }
            require(exact(interpolate_affine(m, identity(), 0), m), "fixture exact previous endpoint");
            require(exact(interpolate_affine(identity(), m, 1), m), "fixture exact current endpoint");
            if (!is_supported_affine(m)) {
                ++rejected;
                fallback(identity(), m, "unsupported fixture bone");
                continue;
            }
            ++supported; ++slot_supported;
            InterpolationStatus status{};
            expect_matrix(interpolate_affine(m, m, 0.5f, &status), m, "fixture self roundtrip", 5e-5);
            require(status == InterpolationStatus::interpolated, "fixture self accepted");
            // These captured skeleton matrices are rigid; verify that a halfway
            // pose remains rigid rather than contracting as element lerp does.
            expect_rigid(m, "fixture source", 2e-5);
            const Matrix midpoint = interpolate_affine(identity(), m, 0.5f, &status);
            require(status == InterpolationStatus::interpolated, "fixture midpoint accepted");
            expect_rigid(midpoint, "fixture midpoint", 2e-5);
            for (unsigned axis = 0; axis < 3; ++axis)
                require(close(midpoint[12 + axis], double(m[12 + axis]) / 2, 1e-4), "fixture halfway translation");
        }
        require(slot_supported > 0, "fixture slot has usable matrices");
    }
    std::cout << "Fixture: " << supported << " supported, " << rejected << " conservative fallbacks (106 matrices)\n";
}
} // namespace

int main(int argc, char **argv) {
    try {
        require(argc <= 2, "usage: render_math_test [local-ee-ram-dump]");
        known_transforms();
        conservative_inputs();
        if (argc == 2) fixture(argv[1]);
        std::cout << "PASS: " << checks << " checks\n";
        return 0;
    } catch (const std::exception &error) {
        std::cerr << "FAIL: " << error.what() << '\n';
        return 1;
    }
}
