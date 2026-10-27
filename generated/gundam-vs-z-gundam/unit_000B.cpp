#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_000B[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0,
    0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0,
    0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0,
    0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31,
    32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0,
    0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37, 0, 38, 0, 0, 0, 39, 0,
    0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0,
    58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0,
    61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0,
    65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0,
    0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 108, 0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0,
    113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0,
    125, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0,
    130, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0,
    138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0,
    0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156,
    0, 157, 0, 158, 0, 159, 0, 0, 160, 0, 0, 161, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177,
    0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0,
    0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0,
    0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0,
    0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0,
    0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0,
    212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218,
    0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    231, 0, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 234, 0, 235, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0,
    0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 0,
    0, 247, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 255, 0, 0, 256, 0, 257, 0, 0, 0,
};

void unit_000B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0012C000;
    case 2u: goto L_0012C028;
    case 3u: goto L_0012C044;
    case 4u: goto L_0012C048;
    case 5u: goto L_0012C080;
    case 6u: goto L_0012C11C;
    case 7u: goto L_0012C2D0;
    case 8u: goto L_0012C2F0;
    case 9u: goto L_0012C330;
    case 10u: goto L_0012C340;
    case 11u: goto L_0012C374;
    case 12u: goto L_0012C3E8;
    case 13u: goto L_0012C40C;
    case 14u: goto L_0012C440;
    case 15u: goto L_0012C460;
    case 16u: goto L_0012C49C;
    case 17u: goto L_0012C66C;
    case 18u: goto L_0012C690;
    case 19u: goto L_0012C698;
    case 20u: goto L_0012C6CC;
    case 21u: goto L_0012C750;
    case 22u: goto L_0012C774;
    case 23u: goto L_0012C7B0;
    case 24u: goto L_0012C850;
    case 25u: goto L_0012C870;
    case 26u: goto L_0012C888;
    case 27u: goto L_0012C8A0;
    case 28u: goto L_0012C918;
    case 29u: goto L_0012C9D0;
    case 30u: goto L_0012C9E8;
    case 31u: goto L_0012C9FC;
    case 32u: goto L_0012CA00;
    case 33u: goto L_0012CA70;
    case 34u: goto L_0012CA90;
    case 35u: goto L_0012CB40;
    case 36u: goto L_0012CB50;
    case 37u: goto L_0012CB60;
    case 38u: goto L_0012CB68;
    case 39u: goto L_0012CB78;
    case 40u: goto L_0012CB90;
    case 41u: goto L_0012CC18;
    case 42u: goto L_0012CC28;
    case 43u: goto L_0012CC80;
    case 44u: goto L_0012CC90;
    case 45u: goto L_0012CCF0;
    case 46u: goto L_0012CD00;
    case 47u: goto L_0012CD58;
    case 48u: goto L_0012CD68;
    case 49u: goto L_0012CDA0;
    case 50u: goto L_0012CE40;
    case 51u: goto L_0012CE98;
    case 52u: goto L_0012CF00;
    case 53u: goto L_0012CF58;
    case 54u: goto L_0012CF70;
    case 55u: goto L_0012CFA8;
    case 56u: goto L_0012CFC0;
    case 57u: goto L_0012CFE8;
    case 58u: goto L_0012D000;
    case 59u: goto L_0012D010;
    case 60u: goto L_0012D170;
    case 61u: goto L_0012D180;
    case 62u: goto L_0012D1C0;
    case 63u: goto L_0012D1E0;
    case 64u: goto L_0012D1EC;
    case 65u: goto L_0012D200;
    case 66u: goto L_0012D244;
    case 67u: goto L_0012D27C;
    case 68u: goto L_0012D300;
    case 69u: goto L_0012D318;
    case 70u: goto L_0012D3D8;
    case 71u: goto L_0012D450;
    case 72u: goto L_0012D550;
    case 73u: goto L_0012D58C;
    case 74u: goto L_0012D5C4;
    case 75u: goto L_0012D610;
    case 76u: goto L_0012D628;
    case 77u: goto L_0012D6B0;
    case 78u: goto L_0012D6E0;
    case 79u: goto L_0012D760;
    case 80u: goto L_0012D7A4;
    case 81u: goto L_0012D7DC;
    case 82u: goto L_0012D910;
    case 83u: goto L_0012D948;
    case 84u: goto L_0012D9B0;
    case 85u: goto L_0012D9E0;
    case 86u: goto L_0012DA18;
    case 87u: goto L_0012DA80;
    case 88u: goto L_0012DAB0;
    case 89u: goto L_0012DB08;
    case 90u: goto L_0012DB70;
    case 91u: goto L_0012DBA0;
    case 92u: goto L_0012DBA8;
    case 93u: goto L_0012DBE0;
    case 94u: goto L_0012DC18;
    case 95u: goto L_0012DCA0;
    case 96u: goto L_0012DCB8;
    case 97u: goto L_0012DDC0;
    case 98u: goto L_0012DDD0;
    case 99u: goto L_0012DDD8;
    case 100u: goto L_0012DDF0;
    case 101u: goto L_0012DE08;
    case 102u: goto L_0012DE20;
    case 103u: goto L_0012DEA0;
    case 104u: goto L_0012DEA8;
    case 105u: goto L_0012DED8;
    case 106u: goto L_0012DF10;
    case 107u: goto L_0012DFD0;
    case 108u: goto L_0012E090;
    case 109u: goto L_0012E098;
    case 110u: goto L_0012E0A4;
    case 111u: goto L_0012E0B0;
    case 112u: goto L_0012E170;
    case 113u: goto L_0012E180;
    case 114u: goto L_0012E190;
    case 115u: goto L_0012E1C8;
    case 116u: goto L_0012E1D4;
    case 117u: goto L_0012E1EC;
    case 118u: goto L_0012E1F4;
    case 119u: goto L_0012E210;
    case 120u: goto L_0012E23C;
    case 121u: goto L_0012E244;
    case 122u: goto L_0012E250;
    case 123u: goto L_0012E260;
    case 124u: goto L_0012E270;
    case 125u: goto L_0012E280;
    case 126u: goto L_0012E288;
    case 127u: goto L_0012E2A0;
    case 128u: goto L_0012E2B0;
    case 129u: goto L_0012E2F0;
    case 130u: goto L_0012E300;
    case 131u: goto L_0012E310;
    case 132u: goto L_0012E320;
    case 133u: goto L_0012E330;
    case 134u: goto L_0012E340;
    case 135u: goto L_0012E350;
    case 136u: goto L_0012E360;
    case 137u: goto L_0012E370;
    case 138u: goto L_0012E380;
    case 139u: goto L_0012E390;
    case 140u: goto L_0012E3A0;
    case 141u: goto L_0012E3B8;
    case 142u: goto L_0012E3D0;
    case 143u: goto L_0012E42C;
    case 144u: goto L_0012E434;
    case 145u: goto L_0012E450;
    case 146u: goto L_0012E484;
    case 147u: goto L_0012E4B4;
    case 148u: goto L_0012E4D0;
    case 149u: goto L_0012E4F4;
    case 150u: goto L_0012E508;
    case 151u: goto L_0012E520;
    case 152u: goto L_0012E530;
    case 153u: goto L_0012E550;
    case 154u: goto L_0012E5B0;
    case 155u: goto L_0012E5F4;
    case 156u: goto L_0012E5FC;
    case 157u: goto L_0012E604;
    case 158u: goto L_0012E60C;
    case 159u: goto L_0012E614;
    case 160u: goto L_0012E620;
    case 161u: goto L_0012E62C;
    case 162u: goto L_0012E634;
    case 163u: goto L_0012E640;
    case 164u: goto L_0012E7C4;
    case 165u: goto L_0012E7DC;
    case 166u: goto L_0012E810;
    case 167u: goto L_0012E838;
    case 168u: goto L_0012E888;
    case 169u: goto L_0012E898;
    case 170u: goto L_0012E914;
    case 171u: goto L_0012E92C;
    case 172u: goto L_0012E95C;
    case 173u: goto L_0012E968;
    case 174u: goto L_0012E990;
    case 175u: goto L_0012E9D0;
    case 176u: goto L_0012EA30;
    case 177u: goto L_0012EAFC;
    case 178u: goto L_0012EB14;
    case 179u: goto L_0012EB3C;
    case 180u: goto L_0012EB54;
    case 181u: goto L_0012EB78;
    case 182u: goto L_0012EB90;
    case 183u: goto L_0012EBD8;
    case 184u: goto L_0012EBF0;
    case 185u: goto L_0012EC14;
    case 186u: goto L_0012EC20;
    case 187u: goto L_0012EC38;
    case 188u: goto L_0012EC5C;
    case 189u: goto L_0012ECB0;
    case 190u: goto L_0012ED28;
    case 191u: goto L_0012ED68;
    case 192u: goto L_0012ED88;
    case 193u: goto L_0012EDD0;
    case 194u: goto L_0012F3E4;
    case 195u: goto L_0012F428;
    case 196u: goto L_0012F438;
    case 197u: goto L_0012F448;
    case 198u: goto L_0012F4E8;
    case 199u: goto L_0012F4F8;
    case 200u: goto L_0012F6F8;
    case 201u: goto L_0012F720;
    case 202u: goto L_0012F74C;
    case 203u: goto L_0012F77C;
    case 204u: goto L_0012F800;
    case 205u: goto L_0012F828;
    case 206u: goto L_0012F878;
    case 207u: goto L_0012F888;
    case 208u: goto L_0012F898;
    case 209u: goto L_0012F8A8;
    case 210u: goto L_0012F8D0;
    case 211u: goto L_0012F8F8;
    case 212u: goto L_0012F900;
    case 213u: goto L_0012F990;
    case 214u: goto L_0012F9AC;
    case 215u: goto L_0012F9C0;
    case 216u: goto L_0012F9D0;
    case 217u: goto L_0012F9DC;
    case 218u: goto L_0012F9FC;
    case 219u: goto L_0012FA08;
    case 220u: goto L_0012FAB0;
    case 221u: goto L_0012FAE0;
    case 222u: goto L_0012FB2C;
    case 223u: goto L_0012FB40;
    case 224u: goto L_0012FB48;
    case 225u: goto L_0012FB60;
    case 226u: goto L_0012FBA8;
    case 227u: goto L_0012FBDC;
    case 228u: goto L_0012FBE4;
    case 229u: goto L_0012FC28;
    case 230u: goto L_0012FC30;
    case 231u: goto L_0012FC80;
    case 232u: goto L_0012FC98;
    case 233u: goto L_0012FCA0;
    case 234u: goto L_0012FCB0;
    case 235u: goto L_0012FCB8;
    case 236u: goto L_0012FCC0;
    case 237u: goto L_0012FCD0;
    case 238u: goto L_0012FD38;
    case 239u: goto L_0012FDF4;
    case 240u: goto L_0012FE10;
    case 241u: goto L_0012FE2C;
    case 242u: goto L_0012FE48;
    case 243u: goto L_0012FEB0;
    case 244u: goto L_0012FEC4;
    case 245u: goto L_0012FEDC;
    case 246u: goto L_0012FEE8;
    case 247u: goto L_0012FF04;
    case 248u: goto L_0012FF0C;
    case 249u: goto L_0012FF28;
    case 250u: goto L_0012FF3C;
    case 251u: goto L_0012FF60;
    case 252u: goto L_0012FF94;
    case 253u: goto L_0012FFA8;
    case 254u: goto L_0012FFD0;
    case 255u: goto L_0012FFDC;
    case 256u: goto L_0012FFE8;
    case 257u: goto L_0012FFF0;
    default: bad_entry(c, 0x0012C000u); return;
    }
L_0012C000:
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 32u)));
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 16u), 0ull);
    set32(c.r[6], ld32((c.r[21].w[0] + 36u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 26u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 28u)));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 24u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C028u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 37u, depth + 1u); else { c.pc = 0x00124A20u; return; } if (c.pc != 0x0012C028u) [[unlikely]] return; }
L_0012C028:
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    st32((c.r[21].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    st32((c.r[21].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C044u); set32(c.r[5], c.r[19].w[0] + 128u);  if (depth < kMaxDepth) unit_006B(c, 149u, depth + 1u); else { c.pc = 0x002ADB00u; return; } if (c.pc != 0x0012C044u) [[unlikely]] return; }
L_0012C044:
    c.budget -= 1;
L_0012C048:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 384u);  c.pc = t; return; }
L_0012C080:
    set32(c.r[29], c.r[29].w[0] - 400u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st8((c.r[29].w[0] + 399u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[29].w[0] + 392u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 48u), 0u);
    c.budget -= 19;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; st32((c.r[4].w[0] + 52u), c.r[5].w[0]);  if (t) { goto L_0012C468; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0012C3F0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0012C0E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012C778; } }
L_0012C0E8:
    c.r[30].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 4u)));
    set32(c.r[20], ld32((c.r[21].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 8u)));
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    st16((c.r[29].w[0] + 368u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 6u)));
    st16((c.r[29].w[0] + 352u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 12u)));
    st16((c.r[29].w[0] + 336u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 336u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C11Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 23u, depth + 1u); else { c.pc = 0x0012C7B0u; return; } if (c.pc != 0x0012C11Cu) [[unlikely]] return; }
L_0012C11C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x24920000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00070000u);
    c.r[3].d[0] = c.r[3].d[0] | 18725ull;
    mmi::multu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[2].w[0], c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] >> 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[22], c.r[2].w[0] >> 18);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012C160; } }
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 2;
L_0012C160:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != c.r[4].d[0];  if (t) { goto L_0012C178; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 336u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0012C2A0; } }
L_0012C178:
    c.r[3].d[0] = c.r[30].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], 0u + 27u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 20u);  if (t) { goto L_0012C278; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0012C248; } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0012C220; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0012C1F0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0012C1C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0012C1C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012C2A0; } }
L_0012C1C0:
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00070000u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (t) { goto L_0012C2A0; } }
    c.budget -= 1;
L_0012C1F0:
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00070000u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (t) { goto L_0012C2A0; } }
    c.budget -= 1;
L_0012C220:
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00070000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (t) { goto L_0012C2A0; } }
L_0012C248:
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00070000u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (t) { goto L_0012C2A0; } }
    c.budget -= 1;
L_0012C278:
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00070000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.budget -= 10;
L_0012C2A0:
    c.r[3].d[0] = c.r[30].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], 0u + 19u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0012C2C8; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 60u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0012C2C8; } }
    set32(c.r[30], 0u + 21u);
    c.budget -= 1;
L_0012C2C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C2D0u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 93u, depth + 1u); else { c.pc = 0x0012DBE0u; return; } if (c.pc != 0x0012C2D0u) [[unlikely]] return; }
L_0012C2D0:
    st32((c.r[29].w[0] + 320u), c.r[2].w[0]);
    c.r[1].d[0] = 0ull < c.r[22].d[0] ? 1ull : 0ull;
    set32(c.r[16], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_0012C3C8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 336u)));
    c.r[2].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 288u), c.r[2].w[0]);
    c.budget -= 3;
L_0012C2F0:
    set32(c.r[2], c.r[22].w[0] - 1u);
    c.r[2].d[0] = c.r[23].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012C338; } }
    st64((c.r[29].w[0]), c.r[19].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), 0ull);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 352u)));
    c.r[9].d[0] = c.r[30].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 368u)));
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C330u); c.r[11].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 37u, depth + 1u); else { c.pc = 0x00124A20u; return; } if (c.pc != 0x0012C330u) [[unlikely]] return; }
L_0012C330:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012C3B8; } }
L_0012C338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C340u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 93u, depth + 1u); else { c.pc = 0x0012DBE0u; return; } if (c.pc != 0x0012C340u) [[unlikely]] return; }
L_0012C340:
    st32((c.r[29].w[0] + 304u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[19].d[0]);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 304u)));
    c.r[9].d[0] = c.r[30].d[0] + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), 0ull);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 352u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 368u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C374u); c.r[11].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 37u, depth + 1u); else { c.pc = 0x00124A20u; return; } if (c.pc != 0x0012C374u) [[unlikely]] return; }
L_0012C374:
    set32(c.r[2], c.r[18].w[0] + c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00070000u);
    c.r[18].d[0] = c.r[2].d[0] << 48;
    set32(c.r[20], c.r[20].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0012C3B0; } }
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.budget -= 3;
L_0012C3B0:
    set32(c.r[16], ld32((c.r[29].w[0] + 304u)));
    c.budget -= 2;
L_0012C3B8:
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.r[2].d[0] = c.r[23].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C2F0u | kUnwind; return; } goto L_0012C2F0; } }
L_0012C3C8:
    c.r[6].d[0] = ld8((c.r[29].w[0] + 399u));
    set32(c.r[7], ld32((c.r[29].w[0] + 392u)));
    set32(c.r[5], c.r[16].w[0] + 128u);
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    st32((c.r[21].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C3E8u); st32((c.r[21].w[0] + 44u), c.r[22].w[0]);  if (depth < kMaxDepth) unit_006B(c, 156u, depth + 1u); else { c.pc = 0x002ADD40u; return; } if (c.pc != 0x0012C3E8u) [[unlikely]] return; }
L_0012C3E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012C778; } }
L_0012C3F0:
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 24u)));
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 28u)));
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 26u)));
    c.r[20].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 30u)));
    c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 32u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C40Cu); set32(c.r[19], ld32((c.r[21].w[0] + 36u)));  if (depth < kMaxDepth) unit_000B(c, 93u, depth + 1u); else { c.pc = 0x0012DBE0u; return; } if (c.pc != 0x0012C40Cu) [[unlikely]] return; }
L_0012C40C:
    st64((c.r[29].w[0]), c.r[20].d[0]);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[22].d[0]);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C440u); st64((c.r[29].w[0] + 16u), 0ull);  if (depth < kMaxDepth) unit_0009(c, 37u, depth + 1u); else { c.pc = 0x00124A20u; return; } if (c.pc != 0x0012C440u) [[unlikely]] return; }
L_0012C440:
    c.r[6].d[0] = ld8((c.r[29].w[0] + 399u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[7], ld32((c.r[29].w[0] + 392u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] + 128u);
    st32((c.r[21].w[0] + 40u), c.r[20].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C460u); st32((c.r[21].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006B(c, 156u, depth + 1u); else { c.pc = 0x002ADD40u; return; } if (c.pc != 0x0012C460u) [[unlikely]] return; }
L_0012C460:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012C778; } }
L_0012C468:
    set32(c.r[20], ld32((c.r[21].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 4u)));
    st16((c.r[29].w[0] + 256u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 256u)));
    st16((c.r[29].w[0] + 240u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 6u)));
    st16((c.r[29].w[0] + 224u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[30].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 10u)));
    c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 12u)));
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C49Cu); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 23u, depth + 1u); else { c.pc = 0x0012C7B0u; return; } if (c.pc != 0x0012C49Cu) [[unlikely]] return; }
L_0012C49C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x24920000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00070000u);
    c.r[3].d[0] = c.r[3].d[0] | 18725ull;
    mmi::multu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[2].w[0], c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] >> 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] >> 18);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012C4E8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.budget -= 3;
L_0012C4E8:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0012C508; } }
    c.r[17].d[0] = c.r[22].d[0] << 48;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (t) { goto L_0012C630; } }
    c.budget -= 1;
L_0012C508:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 256u)));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 27u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 20u);  if (t) { goto L_0012C608; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0012C5D8; } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0012C5B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0012C580; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0012C550; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0012C550; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012C630; } }
L_0012C550:
    c.r[2].d[0] = c.r[30].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00070000u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (t) { goto L_0012C630; } }
    c.budget -= 1;
L_0012C580:
    c.r[2].d[0] = c.r[30].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00070000u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (t) { goto L_0012C630; } }
    c.budget -= 1;
L_0012C5B0:
    c.r[2].d[0] = c.r[30].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00070000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (t) { goto L_0012C630; } }
L_0012C5D8:
    c.r[2].d[0] = c.r[30].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00070000u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (t) { goto L_0012C630; } }
    c.budget -= 1;
L_0012C608:
    c.r[2].d[0] = c.r[30].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00070000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.budget -= 10;
L_0012C630:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 256u)));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 19u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0012C658; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 60u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 21u);  if (t) { goto L_0012C658; } }
    st16((c.r[29].w[0] + 256u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0012C658:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C66Cu); set32(c.r[4], ld32((c.r[29].w[0] + 272u)));  if (depth < kMaxDepth) unit_000B(c, 93u, depth + 1u); else { c.pc = 0x0012DBE0u; return; } if (c.pc != 0x0012C66Cu) [[unlikely]] return; }
L_0012C66C:
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[19], ld32((c.r[29].w[0] + 204u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012C718; } }
    c.r[23].d[0] = c.r[22].d[0] << 48;
    c.r[23].d[0] = static_cast<std::uint64_t>(c.r[23].sd[0] >> 48);
    c.budget -= 3;
L_0012C690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C698u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 93u, depth + 1u); else { c.pc = 0x0012DBE0u; return; } if (c.pc != 0x0012C698u) [[unlikely]] return; }
L_0012C698:
    st64((c.r[29].w[0]), c.r[30].d[0]);
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), 0ull);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 224u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 240u)));
    c.r[10].d[0] = 0ull + 0ull;
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 256u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C6CCu); c.r[11].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 37u, depth + 1u); else { c.pc = 0x00124A20u; return; } if (c.pc != 0x0012C6CCu) [[unlikely]] return; }
L_0012C6CC:
    set32(c.r[2], c.r[18].w[0] + c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00070000u);
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[23].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[20], c.r[20].w[0] + c.r[3].w[0]);  if (t) { goto L_0012C700; } }
    set32(c.r[2], c.r[23].w[0] - c.r[18].w[0]);
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.budget -= 3;
L_0012C700:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[22].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C690u | kUnwind; return; } goto L_0012C690; } }
    c.budget -= 1;
L_0012C718:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 30u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 32u)));
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 16u), 0ull);
    set32(c.r[6], ld32((c.r[21].w[0] + 36u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 26u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 28u)));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 24u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C750u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 37u, depth + 1u); else { c.pc = 0x00124A20u; return; } if (c.pc != 0x0012C750u) [[unlikely]] return; }
L_0012C750:
    c.r[6].d[0] = ld8((c.r[29].w[0] + 399u));
    set32(c.r[7], ld32((c.r[29].w[0] + 392u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    st32((c.r[21].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    st32((c.r[21].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C774u); set32(c.r[5], c.r[19].w[0] + 128u);  if (depth < kMaxDepth) unit_006B(c, 156u, depth + 1u); else { c.pc = 0x002ADD40u; return; } if (c.pc != 0x0012C774u) [[unlikely]] return; }
L_0012C774:
    c.budget -= 1;
L_0012C778:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 400u);  c.pc = t; return; }
L_0012C7B0:
    set32(c.r[2], 0u + 27u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 19u);  if (t) { goto L_0012C838; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0012C838; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0012C828; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012C818; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0012C808; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0012C7F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012C840; } }
    c.budget -= 1;
L_0012C7F8:
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] << 1);  if (t) { goto L_0012C848; } }
    c.budget -= 1;
L_0012C808:
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0012C848; } }
L_0012C818:
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] << 2);  if (t) { goto L_0012C848; } }
    c.budget -= 1;
L_0012C828:
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] >> 1);  if (t) { goto L_0012C848; } }
    c.budget -= 1;
L_0012C838:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]); c.r[2].d[0] = c.lo.d[0];  if (t) { goto L_0012C848; } }
L_0012C840:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0012C848:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012C850:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00EB0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C870u); c.r[7].d[0] = c.r[2].d[0] | 14336ull;  if (depth < kMaxDepth) unit_000B(c, 27u, depth + 1u); else { c.pc = 0x0012C8A0u; return; } if (c.pc != 0x0012C870u) [[unlikely]] return; }
L_0012C870:
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00EC0000u);
    set32(c.r[6], 0u + 40u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C888u); c.r[7].d[0] = c.r[2].d[0] | 14336ull;  if (depth < kMaxDepth) unit_000B(c, 27u, depth + 1u); else { c.pc = 0x0012C8A0u; return; } if (c.pc != 0x0012C888u) [[unlikely]] return; }
L_0012C888:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012C8A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[2], c.r[4].w[0] << 1);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[19], c.r[19].w[0] - 6992u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[17], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 15168u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    mmi::divu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C918u); mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]); c.r[21].d[0] = c.lo.d[0];  if (depth < kMaxDepth) unit_000B(c, 60u, depth + 1u); else { c.pc = 0x0012D170u; return; } if (c.pc != 0x0012C918u) [[unlikely]] return; }
L_0012C918:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0012C928; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012CA40; } }
L_0012C928:
    set32(c.r[4], c.r[22].w[0] << 1);
    set32(c.r[3], c.r[28].w[0] - 32752u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[23].d[0] != 0ull; st16((c.r[18].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0012C980; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull; set32(c.r[3], 0u + 64u);  if (t) { goto L_0012C968; } }
    set32(c.r[2], c.r[21].w[0] >> 5);
    st16((c.r[18].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] << 6);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0012C9B8; } }
    c.budget -= 1;
L_0012C968:
    set32(c.r[2], 0u + 64u);
    st16((c.r[18].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u - 32u);
    c.r[2].d[0] = c.r[21].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0012C9B8; } }
L_0012C980:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull; set32(c.r[3], 0u + 64u);  if (t) { goto L_0012C9A0; } }
    set32(c.r[2], c.r[21].w[0] >> 4);
    st16((c.r[18].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] << 6);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0012C9B8; } }
    c.budget -= 1;
L_0012C9A0:
    set32(c.r[2], 0u + 64u);
    st16((c.r[18].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[21].w[0] >> 3);
    set32(c.r[2], c.r[2].w[0] << 5);
    st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
L_0012C9B8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[23].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0012C9F0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C9D0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0012D200u; return; } if (c.pc != 0x0012C9D0u) [[unlikely]] return; }
L_0012C9D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012C9E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012CA40; } }
L_0012C9E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C9E8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 82u, depth + 1u); else { c.pc = 0x0012D910u; return; } if (c.pc != 0x0012C9E8u) [[unlikely]] return; }
L_0012C9E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012CA20; } }
L_0012C9F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C9FCu); set32(c.r[4], c.r[4].w[0] + 13336u);  if (depth < kMaxDepth) unit_0006(c, 279u, depth + 1u); else { c.pc = 0x0011BDB8u; return; } if (c.pc != 0x0012C9FCu) [[unlikely]] return; }
L_0012C9FC:
    c.budget -= 1;
L_0012CA00:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012CA00u | kUnwind; return; } goto L_0012CA00; } }
    c.budget -= 1;
L_0012CA20:
    set32(c.r[2], c.r[17].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 16896u), c.r[18].w[0]);
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[19].w[0]);
    st16((c.r[3].w[0] + 16920u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 1u);
    st16((c.r[3].w[0] + 16932u), static_cast<std::uint16_t>(c.r[21].w[0]));
    st32((c.r[18].w[0] + 16u), c.r[20].w[0]);
    c.budget -= 8;
L_0012CA40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0012CA70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 9904u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_0012CA90:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], 0u + 20u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[6], c.r[6].w[0] - 6992u);  if (t) { goto L_0012CAB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0012CAE8; } }
    c.budget -= 1;
L_0012CAB0:
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_0012CAC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012CAE8; } }
    c.budget -= 1;
L_0012CAC8:
    set32(c.r[2], 0u + 27u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_0012CAE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012CAE8; } }
    c.budget -= 1;
L_0012CAE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012CB30; } }
L_0012CAE8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 24u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0012CB00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0012CB18; } }
L_0012CB00:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0012CB10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0012CB18; } }
L_0012CB10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012CB30; } }
L_0012CB18:
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 16896u)));
    c.budget -= 6;
L_0012CB30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012CB40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CB50u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_000B(c, 33u, depth + 1u); else { c.pc = 0x0012CA70u; return; } if (c.pc != 0x0012CB50u) [[unlikely]] return; }
L_0012CB50:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CB60u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 251u, depth + 1u); else { c.pc = 0x0012B970u; return; } if (c.pc != 0x0012CB60u) [[unlikely]] return; }
L_0012CB60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CB68u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_000B(c, 33u, depth + 1u); else { c.pc = 0x0012CA70u; return; } if (c.pc != 0x0012CB68u) [[unlikely]] return; }
L_0012CB68:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CB78u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 251u, depth + 1u); else { c.pc = 0x0012B970u; return; } if (c.pc != 0x0012CB78u) [[unlikely]] return; }
L_0012CB78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012CB90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], c.r[4].w[0] << 1);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 9904u);
    set32(c.r[3], c.r[3].w[0] << 2);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0012CBD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012CD88; } }
L_0012CBD0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_0012CCB0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 2));  if (t) { goto L_0012CC48; } }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[3], c.r[2].w[0] << 10);  if (t) { goto L_0012CBF4; } }
    set32(c.r[2], c.r[6].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[3], c.r[2].w[0] << 10);
    c.budget -= 3;
L_0012CBF4:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; c.r[2].d[0] = c.r[6].d[0] & 3ull;  if (t) { goto L_0012CC08; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012CC08; } }
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 1;
L_0012CC08:
    set32(c.r[2], c.r[2].w[0] << 5);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0012CC18:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CC28u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0065(c, 279u, depth + 1u); else { c.pc = 0x00297450u; return; } if (c.pc != 0x0012CC28u) [[unlikely]] return; }
L_0012CC28:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 128u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012CC18u | kUnwind; return; } goto L_0012CC18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012CD80; } }
    c.budget -= 1;
L_0012CC48:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 3));  if (t) { goto L_0012CC58; } }
    set32(c.r[2], c.r[6].w[0] + 7u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_0012CC58:
    set32(c.r[3], c.r[2].w[0] << 11);
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] >= 0; c.r[2].d[0] = c.r[6].d[0] & 7ull;  if (t) { goto L_0012CC70; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012CC70; } }
    set32(c.r[2], c.r[2].w[0] - 8u);
    c.budget -= 1;
L_0012CC70:
    set32(c.r[2], c.r[2].w[0] << 5);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0012CC80:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CC90u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0065(c, 279u, depth + 1u); else { c.pc = 0x00297450u; return; } if (c.pc != 0x0012CC90u) [[unlikely]] return; }
L_0012CC90:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 256u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012CC80u | kUnwind; return; } goto L_0012CC80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012CD80; } }
    c.budget -= 1;
L_0012CCB0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 2));  if (t) { goto L_0012CD20; } }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[3], c.r[2].w[0] << 11);  if (t) { goto L_0012CCCC; } }
    set32(c.r[2], c.r[6].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[3], c.r[2].w[0] << 11);
    c.budget -= 3;
L_0012CCCC:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; c.r[2].d[0] = c.r[6].d[0] & 3ull;  if (t) { goto L_0012CCE0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012CCE0; } }
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 1;
L_0012CCE0:
    set32(c.r[2], c.r[2].w[0] << 5);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0012CCF0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CD00u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0065(c, 279u, depth + 1u); else { c.pc = 0x00297450u; return; } if (c.pc != 0x0012CD00u) [[unlikely]] return; }
L_0012CD00:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.r[2].d[0] = c.r[18].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 128u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012CCF0u | kUnwind; return; } goto L_0012CCF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012CD80; } }
    c.budget -= 1;
L_0012CD20:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 2));  if (t) { goto L_0012CD30; } }
    set32(c.r[2], c.r[6].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_0012CD30:
    set32(c.r[3], c.r[2].w[0] << 12);
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] >= 0; c.r[2].d[0] = c.r[6].d[0] & 3ull;  if (t) { goto L_0012CD48; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012CD48; } }
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 1;
L_0012CD48:
    set32(c.r[2], c.r[2].w[0] << 6);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0012CD58:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CD68u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0065(c, 279u, depth + 1u); else { c.pc = 0x00297450u; return; } if (c.pc != 0x0012CD68u) [[unlikely]] return; }
L_0012CD68:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 64u);
    c.r[2].d[0] = c.r[18].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 256u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012CD58u | kUnwind; return; } goto L_0012CD58; } }
    c.budget -= 1;
L_0012CD80:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0012CD88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012CDA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 27u);
    set32(c.r[3], c.r[3].w[0] - 6992u);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012CEA0; } }
    set32(c.r[5], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 20u);  if (t) { goto L_0012CEA0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_0012CDE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012CF58; } }
L_0012CDE0:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 24u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_0012CE48; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 22u)));
    c.r[5].d[0] = c.r[6].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0012CE10; } }
    c.r[2].d[0] = c.r[6].d[0] & 32767ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0012CE30; } }
    c.budget -= 1;
L_0012CE10:
    c.r[6].d[0] = ld16((c.r[3].w[0] + 16920u));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 16932u));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0012CF58; } }
    set32(c.r[2], c.r[6].w[0] + 1u);
    st16((c.r[3].w[0] + 16920u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 22u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 3;
L_0012CE30:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 22u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CE40u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 40u, depth + 1u); else { c.pc = 0x0012CB90u; return; } if (c.pc != 0x0012CE40u) [[unlikely]] return; }
L_0012CE40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012CF58; } }
L_0012CE48:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 22u)));
    c.r[5].d[0] = c.r[6].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0012CE68; } }
    c.r[2].d[0] = c.r[6].d[0] & 32767ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0012CE88; } }
    c.budget -= 1;
L_0012CE68:
    c.r[6].d[0] = ld16((c.r[3].w[0] + 16922u));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 16934u));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0012CF58; } }
    set32(c.r[2], c.r[6].w[0] + 1u);
    st16((c.r[3].w[0] + 16922u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 22u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 3;
L_0012CE88:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 22u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CE98u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 40u, depth + 1u); else { c.pc = 0x0012CB90u; return; } if (c.pc != 0x0012CE98u) [[unlikely]] return; }
L_0012CE98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012CF58; } }
L_0012CEA0:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 24u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_0012CF08; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 22u)));
    c.r[5].d[0] = c.r[6].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0012CED0; } }
    c.r[2].d[0] = c.r[6].d[0] & 32767ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0012CEF0; } }
    c.budget -= 1;
L_0012CED0:
    c.r[6].d[0] = ld16((c.r[3].w[0] + 16924u));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 16936u));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0012CF58; } }
    set32(c.r[2], c.r[6].w[0] + 1u);
    st16((c.r[3].w[0] + 16924u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 22u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 3;
L_0012CEF0:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 22u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CF00u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000B(c, 40u, depth + 1u); else { c.pc = 0x0012CB90u; return; } if (c.pc != 0x0012CF00u) [[unlikely]] return; }
L_0012CF00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012CF58; } }
L_0012CF08:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 22u)));
    c.r[5].d[0] = c.r[6].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0012CF28; } }
    c.r[2].d[0] = c.r[6].d[0] & 32767ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0012CF48; } }
    c.budget -= 1;
L_0012CF28:
    c.r[6].d[0] = ld16((c.r[3].w[0] + 16926u));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 16938u));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0012CF58; } }
    set32(c.r[2], c.r[6].w[0] + 1u);
    st16((c.r[3].w[0] + 16926u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 22u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 3;
L_0012CF48:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 22u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CF58u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 40u, depth + 1u); else { c.pc = 0x0012CB90u; return; } if (c.pc != 0x0012CF58u) [[unlikely]] return; }
L_0012CF58:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012CF70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 20u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0012CFC8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 24u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0012CFB0; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 22u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CFA8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 59u, depth + 1u); else { c.pc = 0x0012D010u; return; } if (c.pc != 0x0012CFA8u) [[unlikely]] return; }
L_0012CFA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012D000; } }
L_0012CFB0:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 22u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CFC0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 59u, depth + 1u); else { c.pc = 0x0012D010u; return; } if (c.pc != 0x0012CFC0u) [[unlikely]] return; }
L_0012CFC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012D000; } }
L_0012CFC8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 24u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0012CFF0; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 22u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CFE8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000B(c, 59u, depth + 1u); else { c.pc = 0x0012D010u; return; } if (c.pc != 0x0012CFE8u) [[unlikely]] return; }
L_0012CFE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012D000; } }
L_0012CFF0:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 22u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D000u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 59u, depth + 1u); else { c.pc = 0x0012D010u; return; } if (c.pc != 0x0012D000u) [[unlikely]] return; }
L_0012D000:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012D010:
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 9904u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012D040; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012D160; } }
    c.budget -= 1;
L_0012D040:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0012D0D0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0012D090; } }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; c.r[5].d[0] = c.r[6].d[0] & 31ull;  if (t) { goto L_0012D064; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0012D064; } }
    set32(c.r[5], c.r[5].w[0] - 32u);
    c.budget -= 1;
L_0012D064:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[4].w[0] - 15136u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 5));  if (t) { goto L_0012D084; } }
    set32(c.r[2], c.r[6].w[0] + 31u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_0012D084:
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_0012D158; } }
L_0012D090:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; c.r[5].d[0] = c.r[6].d[0] & 31ull;  if (t) { goto L_0012D0A4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0012D0A4; } }
    set32(c.r[5], c.r[5].w[0] - 32u);
    c.budget -= 1;
L_0012D0A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[4].w[0] - 15104u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 5));  if (t) { goto L_0012D0C4; } }
    set32(c.r[2], c.r[6].w[0] + 31u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_0012D0C4:
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_0012D158; } }
L_0012D0D0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0012D118; } }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; c.r[5].d[0] = c.r[6].d[0] & 15ull;  if (t) { goto L_0012D0EC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0012D0EC; } }
    set32(c.r[5], c.r[5].w[0] - 16u);
    c.budget -= 1;
L_0012D0EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[4].w[0] - 15072u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 4));  if (t) { goto L_0012D10C; } }
    set32(c.r[2], c.r[6].w[0] + 15u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 2;
L_0012D10C:
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);  if (t) { goto L_0012D158; } }
L_0012D118:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; c.r[5].d[0] = c.r[6].d[0] & 7ull;  if (t) { goto L_0012D12C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0012D12C; } }
    set32(c.r[5], c.r[5].w[0] - 8u);
    c.budget -= 1;
L_0012D12C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[4].w[0] - 15056u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 3));  if (t) { goto L_0012D14C; } }
    set32(c.r[2], c.r[6].w[0] + 7u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_0012D14C:
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_0012D158:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_0012D160:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012D170:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 6992u);
    c.budget -= 4;
L_0012D180:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0012D198; } }
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_0012D1B0; } }
L_0012D198:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].d[0] = c.r[4].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D180u | kUnwind; return; } goto L_0012D180; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0012D1B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012D1C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 58u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0012D1E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D1E0u);  if (depth < kMaxDepth) unit_000B(c, 88u, depth + 1u); else { c.pc = 0x0012DAB0u; return; } if (c.pc != 0x0012D1E0u) [[unlikely]] return; }
L_0012D1E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D1ECu); set32(c.r[5], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0065(c, 281u, depth + 1u); else { c.pc = 0x00297560u; return; } if (c.pc != 0x0012D1ECu) [[unlikely]] return; }
L_0012D1EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012D200:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], c.r[18].w[0] - 6992u);
    c.budget -= 13;
    { const bool t = c.r[6].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012D288; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 10u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D244u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 4u)));  if (depth < kMaxDepth) unit_000B(c, 71u, depth + 1u); else { c.pc = 0x0012D450u; return; } if (c.pc != 0x0012D244u) [[unlikely]] return; }
L_0012D244:
    st16((c.r[20].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] < 0; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0012D2B8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012D2B8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 20u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0012D2B8; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D27Cu); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 30u)));  if (depth < kMaxDepth) unit_000B(c, 71u, depth + 1u); else { c.pc = 0x0012D450u; return; } if (c.pc != 0x0012D27Cu) [[unlikely]] return; }
L_0012D27C:
    st16((c.r[20].w[0] + 34u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0012D2B8; } }
L_0012D288:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 14u)));  if (t) { goto L_0012D2B8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012D2B8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 20u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0012D2B8; } }
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 34u)));
    c.budget -= 2;
L_0012D2B8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);  if (t) { goto L_0012D378; } }
    set32(c.r[1], c.r[18].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 17464u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_0012D2D8; } }
    set32(c.r[2], c.r[3].w[0] + 31u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_0012D2D8:
    set32(c.r[3], c.r[3].w[0] - 13440u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_0012D2F0; } }
    set32(c.r[2], c.r[3].w[0] + 31u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_0012D2F0:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[6], c.r[2].w[0] + 16384u);
    c.budget -= 4;
L_0012D300:
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012D340; } }
    c.budget -= 1;
L_0012D318:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D318u | kUnwind; return; } goto L_0012D318; } }
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D300u | kUnwind; return; } goto L_0012D300; } }
L_0012D340:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D300u | kUnwind; return; } goto L_0012D300; } }
    set32(c.r[3], c.r[5].w[0] << 5);
    set32(c.r[2], 0u + 1u);
    st16((c.r[20].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[5].w[0] + c.r[17].w[0]);  if (t) { goto L_0012D370; } }
    set32(c.r[2], c.r[2].w[0] << 5);
    st16((c.r[20].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0012D370:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012D428; } }
L_0012D378:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[1], c.r[18].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 17464u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));  if (t) { goto L_0012D394; } }
    set32(c.r[2], c.r[2].w[0] + 31u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_0012D394:
    c.r[1].d[0] = c.r[19].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);  if (t) { goto L_0012D3D0; } }
    set32(c.r[1], c.r[18].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 17468u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_0012D3B8; } }
    set32(c.r[2], c.r[3].w[0] + 31u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_0012D3B8:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012D3D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012D428; } }
    c.budget -= 1;
L_0012D3D0:
    set32(c.r[2], c.r[18].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[2].w[0] + 16384u);
    c.budget -= 2;
L_0012D3D8:
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012D3F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012D428; } }
    c.budget -= 1;
L_0012D3F8:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D3D8u | kUnwind; return; } goto L_0012D3D8; } }
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] << 5);
    st16((c.r[20].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 14u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    st16((c.r[20].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 9;
L_0012D428:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0012D450:
    set32(c.r[2], 0u + 27u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 20u);  if (t) { goto L_0012D4D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0012D4C8; } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0012D4B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0012D4A8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0012D498; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0012D498; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012D4E0; } }
    c.budget -= 1;
L_0012D498:
    set32(c.r[7], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 32u);  if (t) { goto L_0012D4E0; } }
    c.budget -= 1;
L_0012D4A8:
    set32(c.r[7], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0012D4E0; } }
    c.budget -= 1;
L_0012D4B8:
    set32(c.r[7], 0u + 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 64u);  if (t) { goto L_0012D4E0; } }
    c.budget -= 1;
L_0012D4C8:
    set32(c.r[7], 0u + 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0012D4E0; } }
    c.budget -= 1;
L_0012D4D8:
    set32(c.r[7], 0u + 64u);
    set32(c.r[3], 0u + 32u);
    c.budget -= 2;
L_0012D4E0:
    mmi::div(c, 0, c.r[5].w[0], c.r[7].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[5].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012D510; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_0012D510:
    mmi::div(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0012D540; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_0012D540:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]); c.r[2].d[0] = c.lo.d[0];  c.pc = t; return; }
L_0012D550:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], c.r[18].w[0] - 6992u);
    c.budget -= 11;
    { const bool t = c.r[6].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012D5D0; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D58Cu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 4u)));  if (depth < kMaxDepth) unit_000B(c, 71u, depth + 1u); else { c.pc = 0x0012D450u; return; } if (c.pc != 0x0012D58Cu) [[unlikely]] return; }
L_0012D58C:
    st16((c.r[19].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] < 0; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0012D600; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012D600; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 20u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0012D600; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D5C4u); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 30u)));  if (depth < kMaxDepth) unit_000B(c, 71u, depth + 1u); else { c.pc = 0x0012D450u; return; } if (c.pc != 0x0012D5C4u) [[unlikely]] return; }
L_0012D5C4:
    st16((c.r[19].w[0] + 34u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0012D600; } }
L_0012D5D0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 14u)));  if (t) { goto L_0012D600; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012D600; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 20u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0012D600; } }
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 34u)));
    c.budget -= 2;
L_0012D600:
    set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[18].w[0] + 16476u);
    c.budget -= 4;
L_0012D610:
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012D650; } }
    c.budget -= 1;
L_0012D628:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D628u | kUnwind; return; } goto L_0012D628; } }
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D610u | kUnwind; return; } goto L_0012D610; } }
L_0012D650:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D610u | kUnwind; return; } goto L_0012D610; } }
    set32(c.r[3], c.r[5].w[0] << 5);
    set32(c.r[2], 0u + 1u);
    st16((c.r[19].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);  if (t) { goto L_0012D738; } }
    set32(c.r[1], c.r[18].w[0] + c.r[1].w[0]);
    set32(c.r[3], ld32((c.r[1].w[0] + 17464u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_0012D68C; } }
    set32(c.r[2], c.r[3].w[0] + 31u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_0012D68C:
    set32(c.r[3], c.r[3].w[0] - 13440u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_0012D6A4; } }
    set32(c.r[2], c.r[3].w[0] + 31u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_0012D6A4:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + 16384u);
    c.budget -= 3;
L_0012D6B0:
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);  if (t) { goto L_0012D718; } }
    set32(c.r[1], c.r[18].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 17468u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));  if (t) { goto L_0012D6DC; } }
    set32(c.r[2], c.r[2].w[0] + 31u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_0012D6DC:
    c.budget -= 1;
L_0012D6E0:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { goto L_0012D700; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012D738; } }
    c.budget -= 1;
L_0012D700:
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D6E0u | kUnwind; return; } goto L_0012D6E0; } }
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D6B0u | kUnwind; return; } goto L_0012D6B0; } }
L_0012D718:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[16].d[0]; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D6B0u | kUnwind; return; } goto L_0012D6B0; } }
    set32(c.r[3], c.r[5].w[0] << 5);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0012D738; } }
    c.budget -= 1;
L_0012D738:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0012D760:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], c.r[18].w[0] - 6992u);
    c.budget -= 13;
    { const bool t = c.r[6].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012D7E8; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 10u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D7A4u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 4u)));  if (depth < kMaxDepth) unit_000B(c, 71u, depth + 1u); else { c.pc = 0x0012D450u; return; } if (c.pc != 0x0012D7A4u) [[unlikely]] return; }
L_0012D7A4:
    st16((c.r[20].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] < 0; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0012D818; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012D818; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 20u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0012D818; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D7DCu); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 30u)));  if (depth < kMaxDepth) unit_000B(c, 71u, depth + 1u); else { c.pc = 0x0012D450u; return; } if (c.pc != 0x0012D7DCu) [[unlikely]] return; }
L_0012D7DC:
    st16((c.r[20].w[0] + 34u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0012D818; } }
L_0012D7E8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 14u)));  if (t) { goto L_0012D818; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012D818; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 20u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0012D818; } }
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 34u)));
    c.budget -= 2;
L_0012D818:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);  if (t) { goto L_0012D8A8; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[1], c.r[18].w[0] + c.r[1].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 17480u)));
    st16((c.r[20].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 14u)));
    set32(c.r[1], c.r[18].w[0] + c.r[1].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 17480u)));
    set32(c.r[4], c.r[4].w[0] << 5);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[1], c.r[18].w[0] + c.r[1].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[1].w[0] + 17480u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 20u)));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0012D8E0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[2], c.r[16].w[0] << 5);
    set32(c.r[1], c.r[18].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 17480u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    st16((c.r[20].w[0] + 26u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[1], c.r[18].w[0] + c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 17480u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[18].w[0] + c.r[1].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 17480u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0012D8E0; } }
    c.budget -= 1;
L_0012D8A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[1], c.r[18].w[0] + c.r[1].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 17480u)));
    st16((c.r[20].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 20u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);  if (t) { goto L_0012D8E0; } }
    set32(c.r[2], c.r[17].w[0] << 5);
    set32(c.r[1], c.r[18].w[0] + c.r[1].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 17480u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[20].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
L_0012D8E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0012D910:
    set32(c.r[3], 0u + 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[4].w[0] + 58u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] - 6992u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 6u)));
    set32(c.r[5], c.r[3].w[0] - 13440u);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 5));  if (t) { goto L_0012D938; } }
    set32(c.r[3], c.r[5].w[0] + 31u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 2;
L_0012D938:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 14u)));
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16384u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
L_0012D948:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D948u | kUnwind; return; } goto L_0012D948; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0012D9D0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0012D9D0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0012D9D0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 26u)));
    set32(c.r[5], c.r[3].w[0] - 13440u);
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 5));  if (t) { goto L_0012D9A0; } }
    set32(c.r[3], c.r[5].w[0] + 31u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 2;
L_0012D9A0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 34u)));
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[3].w[0] + 16384u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
L_0012D9B0:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D9B0u | kUnwind; return; } goto L_0012D9B0; } }
    c.budget -= 1;
L_0012D9D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012D9E0:
    set32(c.r[3], 0u + 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[4].w[0] + 58u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] - 6992u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 6u)));
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 5));  if (t) { goto L_0012DA04; } }
    set32(c.r[3], c.r[5].w[0] + 31u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 2;
L_0012DA04:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 14u)));
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16476u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
L_0012DA18:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012DA18u | kUnwind; return; } goto L_0012DA18; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0012DAA0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0012DAA0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0012DAA0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 26u)));
    set32(c.r[5], c.r[3].w[0] - 13440u);
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 5));  if (t) { goto L_0012DA70; } }
    set32(c.r[3], c.r[5].w[0] + 31u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 2;
L_0012DA70:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 34u)));
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[3].w[0] + 16384u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
L_0012DA80:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012DA80u | kUnwind; return; } goto L_0012DA80; } }
    c.budget -= 1;
L_0012DAA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012DAB0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 6u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[3].d[0] = c.r[5].sd[0] < 13440ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] - 6992u);  if (t) { goto L_0012DAE8; } }
    set32(c.r[5], c.r[5].w[0] - 13440u);
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 5));  if (t) { goto L_0012DAD8; } }
    set32(c.r[3], c.r[5].w[0] + 31u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 2;
L_0012DAD8:
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 16384u);  if (t) { goto L_0012DB00; } }
    c.budget -= 1;
L_0012DAE8:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 5));  if (t) { goto L_0012DAF8; } }
    set32(c.r[3], c.r[5].w[0] + 31u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 2;
L_0012DAF8:
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16476u);
    c.budget -= 2;
L_0012DB00:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 14u)));
    c.budget -= 2;
L_0012DB08:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012DB08u | kUnwind; return; } goto L_0012DB08; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0012DB90; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 20u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0012DB90; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0012DB90; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 26u)));
    set32(c.r[5], c.r[3].w[0] - 13440u);
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 5));  if (t) { goto L_0012DB64; } }
    set32(c.r[3], c.r[5].w[0] + 31u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 2;
L_0012DB64:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 34u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16384u);
    c.budget -= 3;
L_0012DB70:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012DB70u | kUnwind; return; } goto L_0012DB70; } }
    c.budget -= 1;
L_0012DB90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012DBA0:
    set32(c.r[2], 0u + 1u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0012DBA8:
    set32(c.r[3], c.r[5].w[0] << (c.r[2].w[0] & 31u));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0012DBC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012DBD8; } }
L_0012DBC0:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].d[0] = c.r[2].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012DBA8u | kUnwind; return; } goto L_0012DBA8; } }
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_0012DBD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012DBE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 7744u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[7], c.r[7].w[0] - 6992u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 17456u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 257ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] - 8560u);  if (t) { goto L_0012DC38; } }
L_0012DC18:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012DC18u | kUnwind; return; } goto L_0012DC18; } }
    c.budget -= 1;
L_0012DC38:
    set32(c.r[2], ld32((c.r[8].w[0] + 816u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[1], c.r[5].w[0] + c.r[1].w[0]);
    set32(c.r[6], ld32((c.r[1].w[0] + 17456u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[3], c.r[6].w[0] + 1u);
    set32(c.r[1], c.r[5].w[0] + c.r[1].w[0]);
    set32(c.r[2], c.r[6].w[0] << 8);
    st32((c.r[1].w[0] + 17456u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[8].w[0] + 816u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 16944u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[8].w[0] + 816u)));
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 16944u);  c.pc = t; return; }
L_0012DCA0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[5].w[0] - 8560u);
    set32(c.r[4], c.r[4].w[0] - 6992u);
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_0012DCB8:
    set32(c.r[6], ld32((c.r[5].w[0] + 816u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[6], c.r[6].w[0] << 8);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 16944u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], ld32((c.r[5].w[0] + 816u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[6], c.r[6].w[0] << 8);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 16945u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], ld32((c.r[5].w[0] + 816u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[6], c.r[6].w[0] << 8);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 16946u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], ld32((c.r[5].w[0] + 816u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[6], c.r[6].w[0] << 8);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 16947u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], ld32((c.r[5].w[0] + 816u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[6], c.r[6].w[0] << 8);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 16948u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], ld32((c.r[5].w[0] + 816u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[6], c.r[6].w[0] << 8);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 16949u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], ld32((c.r[5].w[0] + 816u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[6], c.r[6].w[0] << 8);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 16950u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], ld32((c.r[5].w[0] + 816u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[6], c.r[6].w[0] << 8);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.r[6].d[0] = c.r[3].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 59;
    { const bool t = c.r[6].d[0] != 0ull; st8((c.r[1].w[0] + 16951u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012DCB8u | kUnwind; return; } goto L_0012DCB8; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 816u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 17456u), 0u);  c.pc = t; return; }
L_0012DDC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DDD0u); set32(c.r[4], 0u + 255u);  if (depth < kMaxDepth) unit_000B(c, 102u, depth + 1u); else { c.pc = 0x0012DE20u; return; } if (c.pc != 0x0012DDD0u) [[unlikely]] return; }
L_0012DDD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DDD8u);  if (depth < kMaxDepth) unit_000B(c, 107u, depth + 1u); else { c.pc = 0x0012DFD0u; return; } if (c.pc != 0x0012DDD8u) [[unlikely]] return; }
L_0012DDD8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[4].w[0] - 8688u);
    set32(c.r[5], c.r[5].w[0] - 8624u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DDF0u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0012DDF0u) [[unlikely]] return; }
L_0012DDF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[4].w[0] - 8752u);
    set32(c.r[5], c.r[5].w[0] - 8624u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DE08u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0012DE08u) [[unlikely]] return; }
L_0012DE08:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012DE20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] - 8624u);  if (t) { goto L_0012DE90; } }
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], 0u + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], 0u + 4u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 21u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 22u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 23u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(0u));
    c.budget -= 17;
L_0012DE90:
    c.r[3].d[0] = c.r[17].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0012DEC0; } }
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012DEA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DEA8u); set32(c.r[4], c.r[18].w[0] + 28u);  if (depth < kMaxDepth) unit_006B(c, 129u, depth + 1u); else { c.pc = 0x002AD5D0u; return; } if (c.pc != 0x0012DEA8u) [[unlikely]] return; }
L_0012DEA8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 16u);
    c.r[3].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012DEA0u | kUnwind; return; } goto L_0012DEA0; } }
    c.budget -= 1;
L_0012DEC0:
    c.r[3].d[0] = c.r[17].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0012DED8; } }
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DED8u); st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0047(c, 66u, depth + 1u); else { c.pc = 0x0021CAE0u; return; } if (c.pc != 0x0012DED8u) [[unlikely]] return; }
L_0012DED8:
    set32(c.r[3], 0u + 255u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_0012DEF0; } }
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_0012DEF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0012DF10:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[3].d[0] = c.r[4].d[0] & 4ull;
    set32(c.r[7], c.r[7].w[0] - 8624u);
    set32(c.r[6], c.r[6].w[0] - 8752u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] - 8832u);  if (t) { goto L_0012DF48; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_0012DF48:
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0012DF90; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 2u)));
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 22u)));
    st8((c.r[6].w[0] + 22u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 23u)));
    st8((c.r[6].w[0] + 23u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 20u)));
    st8((c.r[6].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 21u)));
    st8((c.r[6].w[0] + 21u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 24u)));
    st8((c.r[6].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 15;
L_0012DF90:
    c.r[3].d[0] = c.r[4].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0012DFC0; } }
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[6].w[0] + 22u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[6].w[0] + 23u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[6].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[6].w[0] + 21u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[6].w[0] + 24u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
L_0012DFC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012DFD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8623u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[2].w[0] + 23u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8624u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[2].w[0] + 24u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8622u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[2].w[0] + 25u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8604u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[2].w[0] + 31u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8603u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[2].w[0] + 32u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8621u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[2].w[0] + 21u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 26u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 27u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 28u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 29u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8600u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[2].w[0] + 33u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8602u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[2].w[0] + 34u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8601u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 48;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E090u); st8((c.r[2].w[0] + 35u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0047(c, 66u, depth + 1u); else { c.pc = 0x0021CAE0u; return; } if (c.pc != 0x0012E090u) [[unlikely]] return; }
L_0012E090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E098u);  if (depth < kMaxDepth) unit_004E(c, 45u, depth + 1u); else { c.pc = 0x002384F0u; return; } if (c.pc != 0x0012E098u) [[unlikely]] return; }
L_0012E098:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E0A4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 21u)));  if (depth < kMaxDepth) unit_004D(c, 310u, depth + 1u); else { c.pc = 0x00237F70u; return; } if (c.pc != 0x0012E0A4u) [[unlikely]] return; }
L_0012E0A4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012E0B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8623u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 23u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8624u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[3].w[0] + 24u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8622u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[3].w[0] + 25u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8604u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[3].w[0] + 31u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8603u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[3].w[0] + 32u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8621u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[3].w[0] + 21u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 26u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 27u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 28u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 29u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8600u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[3].w[0] + 33u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8602u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[3].w[0] + 34u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8601u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 46;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 35u), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_0012E170:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E180:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E190:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], c.r[2].w[0] - 15040u);
    st8((c.r[3].w[0] + 36u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E1C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012E1C8u) [[unlikely]] return; }
L_0012E1C8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E1D4u); st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000B(c, 153u, depth + 1u); else { c.pc = 0x0012E550u; return; } if (c.pc != 0x0012E1D4u) [[unlikely]] return; }
L_0012E1D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012E1F8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E1ECu); st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0049(c, 164u, depth + 1u); else { c.pc = 0x002251D0u; return; } if (c.pc != 0x0012E1ECu) [[unlikely]] return; }
L_0012E1EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E1F4u);  if (depth < kMaxDepth) unit_000B(c, 154u, depth + 1u); else { c.pc = 0x0012E5B0u; return; } if (c.pc != 0x0012E1F4u) [[unlikely]] return; }
L_0012E1F4:
    c.budget -= 1;
L_0012E1F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012E210:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 44u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E23Cu); st8((c.r[2].w[0] + 46u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (depth < kMaxDepth) unit_0076(c, 272u, depth + 1u); else { c.pc = 0x002DB2D0u; return; } if (c.pc != 0x0012E23Cu) [[unlikely]] return; }
L_0012E23C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E244u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_000B(c, 142u, depth + 1u); else { c.pc = 0x0012E3D0u; return; } if (c.pc != 0x0012E244u) [[unlikely]] return; }
L_0012E244:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E250u); set32(c.r[4], c.r[4].w[0] - 22608u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x0012E250u) [[unlikely]] return; }
L_0012E250:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012E260:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E270u);  if (depth < kMaxDepth) unit_0066(c, 339u, depth + 1u); else { c.pc = 0x0029A8F0u; return; } if (c.pc != 0x0012E270u) [[unlikely]] return; }
L_0012E270:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0012E288; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E280u);  if (depth < kMaxDepth) unit_000B(c, 142u, depth + 1u); else { c.pc = 0x0012E3D0u; return; } if (c.pc != 0x0012E280u) [[unlikely]] return; }
L_0012E280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E288u);  if (depth < kMaxDepth) unit_0049(c, 164u, depth + 1u); else { c.pc = 0x002251D0u; return; } if (c.pc != 0x0012E288u) [[unlikely]] return; }
L_0012E288:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012E2A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E2B0u);  if (depth < kMaxDepth) unit_0066(c, 96u, depth + 1u); else { c.pc = 0x00299160u; return; } if (c.pc != 0x0012E2B0u) [[unlikely]] return; }
L_0012E2B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012E2F0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 46u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[3].w[0] + 46u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 46u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 9u);  if (t) { goto L_0012E2E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 47u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0012E2E8; } }
L_0012E2E0:
    set32(c.r[2], 0u + 36u);
    st8((c.r[3].w[0] + 47u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0012E2E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E2F0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_000B(c, 142u, depth + 1u); else { c.pc = 0x0012E3D0u; return; } if (c.pc != 0x0012E2F0u) [[unlikely]] return; }
L_0012E2F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012E300:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E310u);  if (depth < kMaxDepth) unit_007A(c, 28u, depth + 1u); else { c.pc = 0x002E8710u; return; } if (c.pc != 0x0012E310u) [[unlikely]] return; }
L_0012E310:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_0012E320; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E320u);  if (depth < kMaxDepth) unit_000B(c, 142u, depth + 1u); else { c.pc = 0x0012E3D0u; return; } if (c.pc != 0x0012E320u) [[unlikely]] return; }
L_0012E320:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012E330:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E340u);  if (depth < kMaxDepth) unit_0079(c, 165u, depth + 1u); else { c.pc = 0x002E71B0u; return; } if (c.pc != 0x0012E340u) [[unlikely]] return; }
L_0012E340:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012E350; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E350u);  if (depth < kMaxDepth) unit_000B(c, 148u, depth + 1u); else { c.pc = 0x0012E4D0u; return; } if (c.pc != 0x0012E350u) [[unlikely]] return; }
L_0012E350:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012E360:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E370u);  if (depth < kMaxDepth) unit_0066(c, 46u, depth + 1u); else { c.pc = 0x00298AE0u; return; } if (c.pc != 0x0012E370u) [[unlikely]] return; }
L_0012E370:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0012E380; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E380u);  if (depth < kMaxDepth) unit_000B(c, 142u, depth + 1u); else { c.pc = 0x0012E3D0u; return; } if (c.pc != 0x0012E380u) [[unlikely]] return; }
L_0012E380:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012E390:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E3A0u);  if (depth < kMaxDepth) unit_007A(c, 128u, depth + 1u); else { c.pc = 0x002E96F0u; return; } if (c.pc != 0x0012E3A0u) [[unlikely]] return; }
L_0012E3A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012E3B8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E3B8u); st8((c.r[2].w[0] + 39u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000B(c, 142u, depth + 1u); else { c.pc = 0x0012E3D0u; return; } if (c.pc != 0x0012E3B8u) [[unlikely]] return; }
L_0012E3B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012E3D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], 0u + 64u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 3u);
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[5].w[0] + 77u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[5].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[5].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 21;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0012E438; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E42Cu);  if (depth < kMaxDepth) unit_0079(c, 160u, depth + 1u); else { c.pc = 0x002E7140u; return; } if (c.pc != 0x0012E42Cu) [[unlikely]] return; }
L_0012E42C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E434u);  if (depth < kMaxDepth) unit_000B(c, 145u, depth + 1u); else { c.pc = 0x0012E450u; return; } if (c.pc != 0x0012E434u) [[unlikely]] return; }
L_0012E434:
    c.budget -= 1;
L_0012E438:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012E450:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 44u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 44u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0012E490; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E484u);  if (depth < kMaxDepth) unit_0066(c, 79u, depth + 1u); else { c.pc = 0x00299020u; return; } if (c.pc != 0x0012E484u) [[unlikely]] return; }
L_0012E484:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012E4B8; } }
    c.budget -= 1;
L_0012E490:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 45u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E4B4u); st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_007A(c, 210u, depth + 1u); else { c.pc = 0x002EA720u; return; } if (c.pc != 0x0012E4B4u) [[unlikely]] return; }
L_0012E4B4:
    c.budget -= 1;
L_0012E4B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012E4D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 44u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 4u);  if (t) { goto L_0012E500; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E4F4u);  if (depth < kMaxDepth) unit_000B(c, 142u, depth + 1u); else { c.pc = 0x0012E3D0u; return; } if (c.pc != 0x0012E4F4u) [[unlikely]] return; }
L_0012E4F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012E508; } }
    c.budget -= 1;
L_0012E500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E508u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_000B(c, 142u, depth + 1u); else { c.pc = 0x0012E3D0u; return; } if (c.pc != 0x0012E508u) [[unlikely]] return; }
L_0012E508:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012E520:
    c.budget -= 2;
    { set32(c.r[4], 0u + 2u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E3D0u | kUnwind; return; } goto L_0012E3D0; }
L_0012E530:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 9u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { st8((c.r[2].w[0] + 47u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E3D0u | kUnwind; return; } goto L_0012E3D0; }
L_0012E550:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 6u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012E570; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012E5A8; } }
    c.budget -= 1;
L_0012E570:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 9604u));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_0012E598; } }
    c.r[2].d[0] = ld16((c.r[1].w[0] + 9620u));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012E5A0; } }
    c.budget -= 1;
L_0012E598:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012E5A8; } }
L_0012E5A0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0012E5A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012E5B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E5F4u); st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0076(c, 272u, depth + 1u); else { c.pc = 0x002DB2D0u; return; } if (c.pc != 0x0012E5F4u) [[unlikely]] return; }
L_0012E5F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E5FCu);  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x0012E5FCu) [[unlikely]] return; }
L_0012E5FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E604u);  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x0012E604u) [[unlikely]] return; }
L_0012E604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E60Cu);  if (depth < kMaxDepth) unit_006A(c, 136u, depth + 1u); else { c.pc = 0x002A9F70u; return; } if (c.pc != 0x0012E60Cu) [[unlikely]] return; }
L_0012E60C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E614u);  if (depth < kMaxDepth) unit_0043(c, 413u, depth + 1u); else { c.pc = 0x0020FEA0u; return; } if (c.pc != 0x0012E614u) [[unlikely]] return; }
L_0012E614:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E620u); st8((c.r[2].w[0] + 54u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004E(c, 5u, depth + 1u); else { c.pc = 0x00238040u; return; } if (c.pc != 0x0012E620u) [[unlikely]] return; }
L_0012E620:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E62Cu); set32(c.r[5], 0u + 190u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x0012E62Cu) [[unlikely]] return; }
L_0012E62C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E634u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 25u, depth + 1u); else { c.pc = 0x001246A0u; return; } if (c.pc != 0x0012E634u) [[unlikely]] return; }
L_0012E634:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012E640:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[17], 0u + 50u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 15;
    { const bool t = c.r[21].d[0] != 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_0012E688; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012EA00; } }
    c.budget -= 1;
L_0012E688:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01E80000u);
    c.r[3].d[0] = c.r[16].d[0] & 1ull;
    c.r[4].d[0] = c.r[2].d[0] | 33536ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[1].w[0] - 7744u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[8], c.r[5].w[0] << 7);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 18912u);
    c.r[9].d[0] = c.r[7].d[0] & 1ull;
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[9].w[0] << 2);
    set32(c.r[5], c.r[9].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] - c.r[7].w[0]);
    set32(c.r[2], c.r[21].w[0] + 2u);
    set32(c.r[5], c.r[5].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[22], c.r[8].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[20], c.r[22].w[0] + c.r[4].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[4], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E850000u);
    st32((c.r[18].w[0] + 4u), c.r[20].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 12897ull;
    set32(c.r[3], 0u + 1u);
    st32((c.r[18].w[0] + 8u), c.r[4].w[0]);
    c.f[20] = c.r[2].w[0];
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 42;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[18].w[0] + 16u), c.r[6].w[0]);  if (t) { goto L_0012E738; } }
    c.f[20] = c.f[20] ^ fp::kSign;
    c.budget -= 2;
L_0012E738:
    set32(c.r[5], ld32((c.r[28].w[0] - 32748u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.r[2].d[0] = c.r[2].d[0] | 4058ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 32744u)));
    c.f[2] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    set32(c.r[5], c.r[5].w[0] << 1);
    c.r[3].d[0] = c.r[2].d[0] | 34079ull;
    c.f[3] = c.r[5].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38C90000u);
    c.r[2].d[0] = c.r[2].d[0] | 4058ull;
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    fpu_div(c, 2u, c.f[2], c.f[1]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[21] = fp::add(c.f[2], c.f[0]);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E7C4u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0004(c, 227u, depth + 1u); else { c.pc = 0x001138D8u; return; } if (c.pc != 0x0012E7C4u) [[unlikely]] return; }
L_0012E7C4:
    c.f[1] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 24176u));
    c.f[12] = c.f[21];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E7DCu); st32((c.r[20].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0004(c, 214u, depth + 1u); else { c.pc = 0x00113638u; return; } if (c.pc != 0x0012E7DCu) [[unlikely]] return; }
L_0012E7DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E850000u);
    c.r[3].d[0] = c.r[2].d[0] | 12897ull;
    c.f[2] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47000000u);
    c.f[1] = ld32((c.r[28].w[0] - 32740u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 4u), c.f[0]);
    st32((c.r[20].w[0] + 8u), 0u);
    c.f[12] = c.f[21];
    st32((c.r[20].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E810u); set32(c.r[20], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0004(c, 227u, depth + 1u); else { c.pc = 0x001138D8u; return; } if (c.pc != 0x0012E810u) [[unlikely]] return; }
L_0012E810:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EAE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 5243ull;
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[28].w[0] - 24176u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[12] = c.f[21];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E838u); st32((c.r[20].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0004(c, 214u, depth + 1u); else { c.pc = 0x00113638u; return; } if (c.pc != 0x0012E838u) [[unlikely]] return; }
L_0012E838:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E850000u);
    set32(c.r[4], c.r[16].w[0] << 4);
    c.r[3].d[0] = c.r[2].d[0] | 12897ull;
    c.f[3] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EAE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 5243ull;
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[28].w[0] - 32740u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] - 15008u);
    set32(c.r[16], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[20].w[0] + 16u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 4u), c.f[0]);
    st32((c.r[20].w[0] + 8u), 0u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E888u); st32((c.r[20].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0012E888u) [[unlikely]] return; }
L_0012E888:
    set32(c.r[2], c.r[21].w[0] + 2u);
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0012E9E8; } }
L_0012E898:
    set32(c.r[5], ld32((c.r[28].w[0] - 32748u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.r[2].d[0] = c.r[2].d[0] | 4058ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 32744u)));
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    set32(c.r[5], c.r[5].w[0] << 1);
    c.r[3].d[0] = c.r[2].d[0] | 34079ull;
    c.f[2] = c.r[5].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38C90000u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].d[0] | 4058ull;
    c.f[2] = fp::cvt_s_w(c.f[2]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    fpu_div(c, 2u, c.f[1], c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[21] = fp::add(c.f[2], c.f[0]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E914u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0004(c, 227u, depth + 1u); else { c.pc = 0x001138D8u; return; } if (c.pc != 0x0012E914u) [[unlikely]] return; }
L_0012E914:
    c.f[1] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 24176u));
    c.f[12] = c.f[21];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E92Cu); st32((c.r[20].w[0] + 32u), c.f[0]);  if (depth < kMaxDepth) unit_0004(c, 214u, depth + 1u); else { c.pc = 0x00113638u; return; } if (c.pc != 0x0012E92Cu) [[unlikely]] return; }
L_0012E92C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E850000u);
    set32(c.r[4], c.r[20].w[0] + 48u);
    c.r[2].d[0] = c.r[2].d[0] | 12897ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[28].w[0] - 32740u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 36u), c.f[0]);
    st32((c.r[20].w[0] + 40u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E95Cu); st32((c.r[20].w[0] + 44u), 0u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0012E95Cu) [[unlikely]] return; }
L_0012E95C:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E968u); set32(c.r[20], c.r[20].w[0] + 64u);  if (depth < kMaxDepth) unit_0004(c, 227u, depth + 1u); else { c.pc = 0x001138D8u; return; } if (c.pc != 0x0012E968u) [[unlikely]] return; }
L_0012E968:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EAE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 5243ull;
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[28].w[0] - 24176u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[12] = c.f[21];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E990u); st32((c.r[20].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0004(c, 214u, depth + 1u); else { c.pc = 0x00113638u; return; } if (c.pc != 0x0012E990u) [[unlikely]] return; }
L_0012E990:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E850000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EAE0000u);
    c.r[3].d[0] = c.r[3].d[0] | 12897ull;
    c.r[2].d[0] = c.r[2].d[0] | 5243ull;
    c.f[3] = c.r[3].w[0];
    set32(c.r[4], c.r[20].w[0] + 16u);
    c.f[2] = c.r[2].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32740u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 4u), c.f[0]);
    st32((c.r[20].w[0] + 8u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E9D0u); st32((c.r[20].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0012E9D0u) [[unlikely]] return; }
L_0012E9D0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[2], c.r[21].w[0] + 2u);
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E898u | kUnwind; return; } goto L_0012E898; } }
    c.budget -= 1;
L_0012E9E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01E80000u);
    c.r[3].d[0] = c.r[3].d[0] | 33536ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x47000000u);
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[3].w[0] + 44u), c.r[4].w[0]);
    c.budget -= 6;
L_0012EA00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0012EA30:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 14976u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    set32(c.r[3], c.r[29].w[0] + 128u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 16;
    { const bool t = c.r[21].d[0] != 0ull; st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (t) { goto L_0012EA78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012EC88; } }
L_0012EA78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01550000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[7].d[0] = c.r[2].d[0] | 2816ull;
    set32(c.r[8], ld32((c.r[1].w[0] - 7744u)));
    set32(c.r[2], c.r[21].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[6], c.r[6].w[0] + 18912u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    set32(c.r[4], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] | 4058ull;
    set32(c.r[3], 0u + 1u);
    c.f[0] = c.r[2].w[0];
    c.r[8].d[0] = c.r[8].d[0] & 1ull;
    set32(c.r[2], c.r[8].w[0] << 4);
    set32(c.r[9], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    c.f[1] = 0u;
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] - c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[17], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[18], c.r[8].w[0] << 6);
    c.f[20] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0]), c.r[5].w[0]);
    set32(c.r[20], c.r[18].w[0] + c.r[7].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[20].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EAFCu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0004(c, 227u, depth + 1u); else { c.pc = 0x001138D8u; return; } if (c.pc != 0x0012EAFCu) [[unlikely]] return; }
L_0012EAFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2880000u);
    c.f[1] = c.r[2].w[0];
    c.f[12] = c.f[20];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EB14u); st32((c.r[20].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0004(c, 214u, depth + 1u); else { c.pc = 0x00113638u; return; } if (c.pc != 0x0012EB14u) [[unlikely]] return; }
L_0012EB14:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42880000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47000000u);
    c.f[1] = c.r[3].w[0];
    c.f[12] = c.f[20];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 4u), c.f[0]);
    st32((c.r[20].w[0] + 8u), 0u);
    st32((c.r[20].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EB3Cu); set32(c.r[20], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0004(c, 227u, depth + 1u); else { c.pc = 0x001138D8u; return; } if (c.pc != 0x0012EB3Cu) [[unlikely]] return; }
L_0012EB3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC30A0000u);
    c.f[1] = c.r[2].w[0];
    c.f[12] = c.f[20];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EB54u); st32((c.r[20].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0004(c, 214u, depth + 1u); else { c.pc = 0x00113638u; return; } if (c.pc != 0x0012EB54u) [[unlikely]] return; }
L_0012EB54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x430A0000u);
    set32(c.r[4], c.r[20].w[0] + 16u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 4u), c.f[0]);
    st32((c.r[20].w[0] + 8u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EB78u); st32((c.r[20].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0012EB78u) [[unlikely]] return; }
L_0012EB78:
    set32(c.r[2], c.r[21].w[0] + 2u);
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0012EC70; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00190000u);
    c.budget -= 2;
L_0012EB90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    set32(c.r[3], c.r[16].w[0] >> 31);
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.f[0] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38C90000u);
    c.r[2].d[0] = c.r[2].d[0] | 4058ull;
    c.f[1] = c.r[2].w[0];
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[20] = fp::add(c.f[0], c.f[1]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EBD8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0004(c, 227u, depth + 1u); else { c.pc = 0x001138D8u; return; } if (c.pc != 0x0012EBD8u) [[unlikely]] return; }
L_0012EBD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2880000u);
    c.f[1] = c.r[2].w[0];
    c.f[12] = c.f[20];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EBF0u); st32((c.r[20].w[0] + 32u), c.f[0]);  if (depth < kMaxDepth) unit_0004(c, 214u, depth + 1u); else { c.pc = 0x00113638u; return; } if (c.pc != 0x0012EBF0u) [[unlikely]] return; }
L_0012EBF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42880000u);
    set32(c.r[4], c.r[20].w[0] + 48u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 36u), c.f[0]);
    st32((c.r[20].w[0] + 40u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EC14u); st32((c.r[20].w[0] + 44u), 0u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0012EC14u) [[unlikely]] return; }
L_0012EC14:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EC20u); set32(c.r[20], c.r[20].w[0] + 64u);  if (depth < kMaxDepth) unit_0004(c, 227u, depth + 1u); else { c.pc = 0x001138D8u; return; } if (c.pc != 0x0012EC20u) [[unlikely]] return; }
L_0012EC20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC30A0000u);
    c.f[1] = c.r[2].w[0];
    c.f[12] = c.f[20];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EC38u); st32((c.r[20].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0004(c, 214u, depth + 1u); else { c.pc = 0x00113638u; return; } if (c.pc != 0x0012EC38u) [[unlikely]] return; }
L_0012EC38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x430A0000u);
    set32(c.r[4], c.r[20].w[0] + 16u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 4u), c.f[0]);
    st32((c.r[20].w[0] + 8u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EC5Cu); st32((c.r[20].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0012EC5Cu) [[unlikely]] return; }
L_0012EC5C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[2], c.r[21].w[0] + 2u);
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] - 32768u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012EB90u | kUnwind; return; } goto L_0012EB90; } }
L_0012EC70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01E80000u);
    c.r[3].d[0] = c.r[3].d[0] | 33536ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x47000000u);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[3].w[0] + 44u), c.r[4].w[0]);
    c.budget -= 6;
L_0012EC88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0012ECB0:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 6164u)));
    c.r[12].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 6160u)));
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 6162u)));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 6158u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[8].w[0]);
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    mmi::div(c, 1, c.r[5].w[0], c.r[8].w[0]);
    c.r[9].d[0] = c.hi.d[0];
    c.r[8].d[0] = c.lo.d[1];
    mmi::div(c, 0, c.r[9].w[0], c.r[11].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[10].w[0], c.r[9].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[9].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[10].w[0], c.r[8].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[10].w[0], c.r[8].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[5].w[0], c.r[11].w[0]);
    set32(c.r[9], c.r[9].w[0] + c.r[8].w[0]);
    c.r[8].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[9].w[0] << 1);
    mmi::mult(c, 1, c.r[3].w[0], c.r[8].w[0]);
    c.r[8].d[0] = c.lo.d[1];
    set32(c.r[8], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.budget -= 30;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[9], c.r[7].w[0] + c.r[5].w[0]);  if (t) { goto L_0012ED48; } }
L_0012ED28:
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 6160u)));
    set32(c.r[12], c.r[12].w[0] + 1u);
    set32(c.r[9], c.r[9].w[0] + 2u);
    c.r[5].d[0] = c.r[12].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012ED28u | kUnwind; return; } goto L_0012ED28; } }
    c.budget -= 1;
L_0012ED48:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 6158u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + c.r[5].w[0]);  if (t) { goto L_0012EDC8; } }
    c.budget -= 1;
L_0012ED68:
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(0u));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 6160u)));
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 2u);
    c.r[1].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0012EDA8; } }
    c.budget -= 1;
L_0012ED88:
    c.r[3].d[0] = ld16((c.r[6].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 6160u)));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012ED88u | kUnwind; return; } goto L_0012ED88; } }
L_0012EDA8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 6158u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[6], c.r[8].w[0] + 64u);
    c.r[3].d[0] = c.r[10].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] - c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012ED68u | kUnwind; return; } goto L_0012ED68; } }
L_0012EDC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012EDD0:
    set32(c.r[29], c.r[29].w[0] - 288u);
    set32(c.r[12], 0u + 1u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 240u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[9], c.r[29].w[0] + 224u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[8], 0u + 128u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[7], c.r[29].w[0] + 274u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[11], ld32((c.r[4].w[0] + 6148u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 24080u)));
    set32(c.r[16], c.r[16].w[0] + 18992u);
    st32((c.r[1].w[0] + 19012u), c.r[6].w[0]);
    set32(c.r[11], c.r[12].w[0] << (c.r[11].w[0] & 31u));
    c.r[6].d[0] = c.r[11].d[0] & c.r[10].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[29].w[0] + 208u), c.r[6].w[0]);
    st32((c.r[1].w[0] + 19016u), c.r[9].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 6144u)));
    st32((c.r[29].w[0] + 272u), c.r[4].w[0]);
    st8((c.r[29].w[0] + 275u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[4].d[0] = ld8((c.r[7].w[0]));
    c.budget -= 35;
    { const bool t = c.r[4].sd[0] < 0; set32(c.r[6], c.r[3].w[0] + 6116u);  if (t) { goto L_0012EE68; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0012EE84; } }
L_0012EE68:
    set32(c.r[8], c.r[4].w[0] >> 1);
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[8].d[0] = c.r[8].d[0] | c.r[4].d[0];
    c.f[0] = c.r[8].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_0012EE84:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[4].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0012EEAC; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[9], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012EEC4; } }
L_0012EEAC:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[9], c.f[1]);
    c.r[9].d[0] = c.r[9].d[0] | c.r[4].d[0];
    c.budget -= 6;
L_0012EEC4:
    c.budget -= 2;
    { const bool t = c.r[9].sd[0] < 0; set32(c.r[8], c.r[9].w[0] >> 1);  if (t) { goto L_0012EED8; } }
    c.f[0] = c.r[9].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0012EEF0; } }
L_0012EED8:
    c.r[4].d[0] = c.r[9].d[0] & 1ull;
    c.r[8].d[0] = c.r[8].d[0] | c.r[4].d[0];
    c.f[0] = c.r[8].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 6;
L_0012EEF0:
    c.f[1] = ld32((c.r[6].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0012EF20; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { goto L_0012EF3C; } }
L_0012EF20:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[1]);
    c.r[8].d[0] = c.r[8].d[0] | c.r[4].d[0];
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 7;
L_0012EF3C:
    set32(c.r[4], c.r[29].w[0] + 273u);
    c.r[8].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = c.r[8].sd[0] < 0; set32(c.r[9], c.r[8].w[0] >> 1);  if (t) { goto L_0012EF58; } }
    c.f[0] = c.r[8].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0012EF70; } }
L_0012EF58:
    c.r[8].d[0] = c.r[8].d[0] & 1ull;
    c.r[9].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.f[0] = c.r[9].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0012EF70:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[8].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0012EF98; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[10], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012EFB0; } }
L_0012EF98:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[10], c.f[1]);
    c.r[10].d[0] = c.r[10].d[0] | c.r[8].d[0];
    c.budget -= 6;
L_0012EFB0:
    c.budget -= 2;
    { const bool t = c.r[10].sd[0] < 0; set32(c.r[9], c.r[10].w[0] >> 1);  if (t) { goto L_0012EFC4; } }
    c.f[0] = c.r[10].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0012EFDC; } }
L_0012EFC4:
    c.r[8].d[0] = c.r[10].d[0] & 1ull;
    c.r[9].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.f[0] = c.r[9].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 6;
L_0012EFDC:
    c.f[1] = ld32((c.r[6].w[0]));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[8].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0012F00C; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[9], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));  if (t) { goto L_0012F028; } }
L_0012F00C:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[9], c.f[1]);
    c.r[9].d[0] = c.r[9].d[0] | c.r[8].d[0];
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.budget -= 7;
L_0012F028:
    c.r[8].d[0] = ld8((c.r[29].w[0] + 272u));
    c.budget -= 3;
    { const bool t = c.r[8].sd[0] < 0;  if (t) { goto L_0012F040; } }
    c.f[0] = c.r[8].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0012F05C; } }
L_0012F040:
    set32(c.r[9], c.r[8].w[0] >> 1);
    c.r[8].d[0] = c.r[8].d[0] & 1ull;
    c.r[9].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.f[0] = c.r[9].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_0012F05C:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[8].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0012F084; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[10], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012F09C; } }
L_0012F084:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[10], c.f[1]);
    c.r[10].d[0] = c.r[10].d[0] | c.r[8].d[0];
    c.budget -= 6;
L_0012F09C:
    c.budget -= 2;
    { const bool t = c.r[10].sd[0] < 0; set32(c.r[9], c.r[10].w[0] >> 1);  if (t) { goto L_0012F0B0; } }
    c.f[0] = c.r[10].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0012F0C8; } }
L_0012F0B0:
    c.r[8].d[0] = c.r[10].d[0] & 1ull;
    c.r[9].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.f[0] = c.r[9].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 6;
L_0012F0C8:
    c.f[1] = ld32((c.r[6].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[6].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0012F0F8; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 128u);  if (t) { goto L_0012F114; } }
L_0012F0F8:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[1]);
    c.r[8].d[0] = c.r[8].d[0] | c.r[6].d[0];
    set32(c.r[6], 0u + 128u);
    c.budget -= 7;
L_0012F114:
    st8((c.r[29].w[0] + 272u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[29].w[0] + 279u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[7].w[0]));
    c.budget -= 5;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_0012F134; } }
    c.f[0] = c.r[6].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0012F150; } }
L_0012F134:
    set32(c.r[7], c.r[6].w[0] >> 1);
    c.r[6].d[0] = c.r[6].d[0] & 1ull;
    c.r[7].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.f[0] = c.r[7].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_0012F150:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[7].w[0];
    c.f[0] = c.r[6].w[0];
    fpu_div(c, 1u, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0012F18C; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[7], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 278u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_0012F1A8; } }
L_0012F18C:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[7], c.f[1]);
    c.r[7].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st8((c.r[29].w[0] + 278u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 7;
L_0012F1A8:
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0; set32(c.r[6], c.r[4].w[0] >> 1);  if (t) { goto L_0012F1C0; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0012F1D8; } }
L_0012F1C0:
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.f[0] = c.r[6].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 6;
L_0012F1D8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[6].w[0];
    c.f[0] = c.r[4].w[0];
    fpu_div(c, 1u, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0012F214; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[29].w[0] + 272u));  if (t) { goto L_0012F230; } }
L_0012F214:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[4].d[0] = ld8((c.r[29].w[0] + 272u));
    c.budget -= 7;
L_0012F230:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0; st8((c.r[29].w[0] + 277u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_0012F244; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0012F260; } }
L_0012F244:
    set32(c.r[6], c.r[4].w[0] >> 1);
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.f[0] = c.r[6].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_0012F260:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[6].w[0];
    c.f[0] = c.r[4].w[0];
    fpu_div(c, 1u, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0012F29C; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 276u);  if (t) { goto L_0012F2B8; } }
L_0012F29C:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    set32(c.r[4], c.r[29].w[0] + 276u);
    c.budget -= 7;
L_0012F2B8:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[12]);
    set32(c.r[6], c.r[29].w[0] + 272u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19028u), c.r[6].w[0]);
    set32(c.r[4], c.r[29].w[0] + 280u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st32((c.r[1].w[0] + 19040u), c.r[4].w[0]);
    c.r[10].d[0] = c.r[6].d[0] | 65304ull;
    set32(c.r[13], ld32((c.r[17].w[0] + 6132u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[12], c.f[0]);
    set32(c.r[11], 0u + 11u);
    set32(c.r[8], c.r[8].w[0] - 27248u);
    set32(c.r[18], c.r[29].w[0] + 256u);
    c.f[0] = fp::cvt_w_s(c.f[13]);
    set32(c.r[7], c.r[29].w[0] + 260u);
    set32(c.r[4], c.r[29].w[0] + 244u);
    set32(c.r[6], c.r[29].w[0] + 252u);
    set32(c.r[9], 0u + 1u);
    st32((c.r[1].w[0] + 19048u), c.r[13].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[29].w[0] + 236u), 0u);
    st16((c.r[1].w[0] + 19052u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[29].w[0] + 232u), 0u);
    st32((c.r[1].w[0] + 19044u), c.r[8].w[0]);
    set32(c.r[11], c.f[0]);
    set32(c.r[8], c.r[29].w[0] + 228u);
    st32((c.r[8].w[0]), 0u);
    st32((c.r[29].w[0] + 224u), 0u);
    c.r[13].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6152u)));
    c.f[1] = ld32((c.r[3].w[0] + 6108u));
    c.f[0] = ld32((c.r[3].w[0] + 6112u));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6154u)));
    c.f[2] = c.r[13].w[0];
    st32((c.r[18].w[0]), c.r[12].w[0]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    st32((c.r[29].w[0] + 240u), c.r[12].w[0]);
    st32((c.r[7].w[0]), c.r[11].w[0]);
    st32((c.r[4].w[0]), c.r[11].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[11], c.f[1]);
    c.f[1] = c.r[8].w[0];
    c.r[19].d[0] = c.r[11].d[0] << 48;
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[8], c.f[0]);
    c.r[8].d[0] = c.r[8].d[0] << 48;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 264u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 248u), c.r[10].w[0]);
    st32((c.r[6].w[0]), c.r[9].w[0]);
    st32((c.r[6].w[0]), c.r[9].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[1].d[0] = c.r[3].sd[0] < 448ll ? 1ull : 0ull;
    c.budget -= 66;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);  if (t) { goto L_0012F3D0; } }
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0012F3D8; } }
    c.budget -= 1;
L_0012F3D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012F7D0; } }
L_0012F3D8:
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F3E4u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0012F3E4u) [[unlikely]] return; }
L_0012F3E4:
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 204u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0012F7D0; } }
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[30], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_0012F418; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[30], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0012F418:
    c.r[2].d[0] = c.r[19].d[0] << 48;
    set32(c.r[23], c.r[29].w[0] + 284u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 4;
L_0012F428:
    c.r[19].d[0] = ld8((c.r[21].w[0]));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F438u); set32(c.r[21], c.r[21].w[0] + 1u);  if (depth < kMaxDepth) unit_0044(c, 344u, depth + 1u); else { c.pc = 0x00212FA0u; return; } if (c.pc != 0x0012F438u) [[unlikely]] return; }
L_0012F438:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0012F468; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F448u); c.r[22].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 345u, depth + 1u); else { c.pc = 0x00212FF0u; return; } if (c.pc != 0x0012F448u) [[unlikely]] return; }
L_0012F448:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[30].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_0012F4A0; } }
    c.budget -= 1;
L_0012F468:
    c.r[3].d[0] = c.r[19].d[0] & 255ull;
    set32(c.r[4], c.r[3].w[0] << 8);
    set32(c.r[19], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[21].w[0]));
    c.r[22].d[0] = c.r[4].d[0] << 48;
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 48);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[5].d[0] = c.r[3].d[0] << 48;
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 14;
L_0012F4A0:
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    c.r[1].d[0] = c.r[3].sd[0] < 640ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0012F780; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0012F780; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].d[0] = c.r[22].d[0] << 48;
    set32(c.r[6], ld32((c.r[17].w[0] + 6148u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[22].d[0] = c.r[2].d[0] << 48;
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 48);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F4E8u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 340u, depth + 1u); else { c.pc = 0x00212E00u; return; } if (c.pc != 0x0012F4E8u) [[unlikely]] return; }
L_0012F4E8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0012F5D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F4F8u);  if (depth < kMaxDepth) unit_0044(c, 342u, depth + 1u); else { c.pc = 0x00212EC0u; return; } if (c.pc != 0x0012F4F8u) [[unlikely]] return; }
L_0012F4F8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0012F7D0; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 6100u)));
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st16((c.r[3].w[0] + 2048u), static_cast<std::uint16_t>(c.r[22].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 6100u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3648u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st8((c.r[4].w[0] + 3648u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 6100u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3648u));
    c.r[3].d[0] = c.r[3].d[0] & 251ull;
    st8((c.r[4].w[0] + 3648u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 6100u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[3].w[0] + 4448u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 6100u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 6148u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[3].w[0] + 5248u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 52;
L_0012F5D0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6162u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6160u)));
    mmi::div(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[23].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[29].w[0] + 280u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6162u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6160u)));
    mmi::div(c, 1, c.r[2].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[29].w[0] + 286u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[29].w[0] + 282u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 6064u)));
    set32(c.r[3], c.r[29].w[0] + 286u);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[29].w[0] + 286u);
    c.budget -= 31;
    { const bool t = c.r[19].d[0] != 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_0012F678; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 6072u)));
    set32(c.r[4], c.r[3].w[0] << 2);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));  if (t) { goto L_0012F664; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_0012F664:
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = ld16((c.r[23].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[23].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0012F690; } }
L_0012F678:
    set32(c.r[4], ld32((c.r[17].w[0] + 6072u)));
    c.r[3].d[0] = ld16((c.r[23].w[0]));
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[23].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_0012F690:
    set32(c.r[4], ld32((c.r[17].w[0] + 6100u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 3648u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st8((c.r[3].w[0] + 3648u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012F758; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 6120u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0012F728; } }
    set32(c.r[3], c.r[29].w[0] + 272u);
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 228u);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[29].w[0] + 224u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F6F8u); st32((c.r[16].w[0] + 36u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0066(c, 399u, depth + 1u); else { c.pc = 0x0029B1E0u; return; } if (c.pc != 0x0012F6F8u) [[unlikely]] return; }
L_0012F6F8:
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[29].w[0] + 228u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[3], 0u + 4u);
    st32((c.r[29].w[0] + 224u), c.r[5].w[0]);
    set32(c.r[2], c.r[29].w[0] + 276u);
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F720u); st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0066(c, 399u, depth + 1u); else { c.pc = 0x0029B1E0u; return; } if (c.pc != 0x0012F720u) [[unlikely]] return; }
L_0012F720:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012F780; } }
L_0012F728:
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 272u);
    set32(c.r[2], c.r[29].w[0] + 228u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[2].w[0]), 0u);
    st32((c.r[29].w[0] + 224u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F74Cu); st32((c.r[16].w[0] + 36u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0066(c, 399u, depth + 1u); else { c.pc = 0x0029B1E0u; return; } if (c.pc != 0x0012F74Cu) [[unlikely]] return; }
L_0012F74C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012F780; } }
    c.budget -= 1;
L_0012F758:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 272u);
    set32(c.r[2], c.r[29].w[0] + 228u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[2].w[0]), 0u);
    st32((c.r[29].w[0] + 224u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F77Cu); st32((c.r[16].w[0] + 36u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0066(c, 399u, depth + 1u); else { c.pc = 0x0029B1E0u; return; } if (c.pc != 0x0012F77Cu) [[unlikely]] return; }
L_0012F77C:
    c.budget -= 1;
L_0012F780:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_0012F7A0; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6156u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[4], c.r[30].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 240u), c.r[3].w[0]);  if (t) { goto L_0012F7B8; } }
L_0012F7A0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6156u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 240u), c.r[3].w[0]);
    c.budget -= 6;
L_0012F7B8:
    set32(c.r[3], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[18].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012F428u | kUnwind; return; } goto L_0012F428; } }
L_0012F7D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_0012F800:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F828u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000B(c, 60u, depth + 1u); else { c.pc = 0x0012D170u; return; } if (c.pc != 0x0012F828u) [[unlikely]] return; }
L_0012F828:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0012F838; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012F8B0; } }
L_0012F838:
    set32(c.r[2], 0u + 2u);
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 6));  if (t) { goto L_0012F850; } }
    set32(c.r[2], c.r[18].w[0] + 63u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.budget -= 2;
L_0012F850:
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[18].w[0]));
    set32(c.r[2], 0u - 1u);
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 16u), c.r[19].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F878u); st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0012D200u; return; } if (c.pc != 0x0012F878u) [[unlikely]] return; }
L_0012F878:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0012F890; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F888u);  if (depth < kMaxDepth) unit_000B(c, 62u, depth + 1u); else { c.pc = 0x0012D1C0u; return; } if (c.pc != 0x0012F888u) [[unlikely]] return; }
L_0012F888:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012F8B0; } }
L_0012F890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F898u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 82u, depth + 1u); else { c.pc = 0x0012D910u; return; } if (c.pc != 0x0012F898u) [[unlikely]] return; }
L_0012F898:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F8A8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 251u, depth + 1u); else { c.pc = 0x0012B970u; return; } if (c.pc != 0x0012F8A8u) [[unlikely]] return; }
L_0012F8A8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0012F8B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0012F8D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    set32(c.r[17], c.r[17].w[0] + 1904u);
    set32(c.r[16], c.r[16].w[0] + 976u);
    c.budget -= 10;
L_0012F8F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F900u);  if (depth < kMaxDepth) unit_000B(c, 60u, depth + 1u); else { c.pc = 0x0012D170u; return; } if (c.pc != 0x0012F900u) [[unlikely]] return; }
L_0012F900:
    set32(c.r[5], ld32((c.r[28].w[0] - 23744u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[4], 0u - 1u);
    c.r[3].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 4u)));
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23744u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 6u)));
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23744u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8u)));
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23744u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 10u)));
    st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23744u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 12u)));
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[2].w[0] + 14u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], ld32((c.r[17].w[0])));
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[17], c.r[17].w[0] + 4u);
    st16((c.r[2].w[0] + 24u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[2].w[0] + 20u), static_cast<std::uint16_t>(0u));
    st16((c.r[2].w[0] + 58u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 28;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012F8F8u | kUnwind; return; } goto L_0012F8F8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012F990:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F9ACu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0012F9ACu) [[unlikely]] return; }
L_0012F9AC:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] + 29024u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 5;
L_0012F9C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F9D0u); set32(c.r[6], 0u + 384u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0012F9D0u) [[unlikely]] return; }
L_0012F9D0:
    set32(c.r[4], c.r[17].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F9DCu); st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[18].w[0]));  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0012F9DCu) [[unlikely]] return; }
L_0012F9DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[3], c.r[16].w[0] + 1920u);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], 0u + 384u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F9FCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0012F9FCu) [[unlikely]] return; }
L_0012F9FC:
    set32(c.r[4], c.r[19].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FA08u); st8((c.r[17].w[0] + 1920u), static_cast<std::uint8_t>(c.r[18].w[0]));  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0012FA08u) [[unlikely]] return; }
L_0012FA08:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 384u);
    c.r[3].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 384u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012F9C0u | kUnwind; return; } goto L_0012F9C0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u - 1u);
    set32(c.r[4], 0u + 180u);
    st8((c.r[3].w[0] + 73u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 72u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 82u)));
    st8((c.r[3].w[0] + 102u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 82u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[3].w[0] + 103u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 104u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 105u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st16((c.r[3].w[0] + 108u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st16((c.r[3].w[0] + 110u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 108u)));
    st16((c.r[4].w[0] + 112u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 110u)));
    st16((c.r[4].w[0] + 114u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 36;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0012FAB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[7].w[0] + 29024u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] - 27856u);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 12;
L_0012FAE0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 348u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012FB00; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 1492u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 1500u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0012FB00; } }
    st8((c.r[7].w[0] + 348u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0012FB00:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 8704u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 384u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012FAE0u | kUnwind; return; } goto L_0012FAE0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0012FB38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FB2Cu);  if (depth < kMaxDepth) unit_0050(c, 449u, depth + 1u); else { c.pc = 0x00243F80u; return; } if (c.pc != 0x0012FB2Cu) [[unlikely]] return; }
L_0012FB2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012FB40; } }
    c.budget -= 1;
L_0012FB38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FB40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 225u, depth + 1u); else { c.pc = 0x0012FB60u; return; } if (c.pc != 0x0012FB40u) [[unlikely]] return; }
L_0012FB40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FB48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 58u, depth + 1u); else { c.pc = 0x00134F70u; return; } if (c.pc != 0x0012FB48u) [[unlikely]] return; }
L_0012FB48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012FB60:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[21], c.r[21].w[0] + 29024u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[20], c.r[20].w[0] - 27856u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 18;
L_0012FBA8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0012FBE8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 2032u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FBDCu); c.r[6].d[0] = c.r[22].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012FBDCu) [[unlikely]] return; }
L_0012FBDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FBE4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 231u, depth + 1u); else { c.pc = 0x0012FC80u; return; } if (c.pc != 0x0012FBE4u) [[unlikely]] return; }
L_0012FBE4:
    c.budget -= 1;
L_0012FBE8:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 796u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0012FC30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[3], c.r[18].w[0] + 1920u);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1921u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 2048u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FC28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012FC28u) [[unlikely]] return; }
L_0012FC28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FC30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 231u, depth + 1u); else { c.pc = 0x0012FC80u; return; } if (c.pc != 0x0012FC30u) [[unlikely]] return; }
L_0012FC30:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 384u);
    set32(c.r[17], c.r[17].w[0] + 384u);
    set32(c.r[21], c.r[21].w[0] + 384u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012FBA8u | kUnwind; return; } goto L_0012FBA8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0012FC80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FC98u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0009(c, 167u, depth + 1u); else { c.pc = 0x00126260u; return; } if (c.pc != 0x0012FC98u) [[unlikely]] return; }
L_0012FC98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FCA0u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0012FCA0u) [[unlikely]] return; }
L_0012FCA0:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 14u)));
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FCB0u); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x00127690u; return; } if (c.pc != 0x0012FCB0u) [[unlikely]] return; }
L_0012FCB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FCB8u); set32(c.r[4], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0012FCB8u) [[unlikely]] return; }
L_0012FCB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FCC0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 167u, depth + 1u); else { c.pc = 0x00126260u; return; } if (c.pc != 0x0012FCC0u) [[unlikely]] return; }
L_0012FCC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012FCD0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0012FF40; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 747u)));
    set32(c.r[3], c.r[3].w[0] - 10048u);
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0012FD28; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 747u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 748u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_0012FD28:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FD38u); set32(c.r[6], 0u + 384u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0012FD38u) [[unlikely]] return; }
L_0012FD38:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 767u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st8((c.r[18].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 767u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 332u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 767u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[18].w[0] + 336u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    st32((c.r[18].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[18].w[0] + 336u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 47;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FDF4u); st32((c.r[18].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_000D(c, 80u, depth + 1u); else { c.pc = 0x00135930u; return; } if (c.pc != 0x0012FDF4u) [[unlikely]] return; }
L_0012FDF4:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FE10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x0012FE10u) [[unlikely]] return; }
L_0012FE10:
    c.f[2] = ld32((c.r[18].w[0] + 332u));
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FE2Cu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));  if (depth < kMaxDepth) unit_0009(c, 148u, depth + 1u); else { c.pc = 0x00125F10u; return; } if (c.pc != 0x0012FE2Cu) [[unlikely]] return; }
L_0012FE2C:
    c.f[2] = ld32((c.r[18].w[0] + 332u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[18].w[0] + 52u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FE48u); st32((c.r[29].w[0] + 68u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x0012FE48u) [[unlikely]] return; }
L_0012FE48:
    c.f[2] = ld32((c.r[18].w[0] + 332u));
    set32(c.r[2], c.r[29].w[0] + 64u);
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    set32(c.r[5], c.r[18].w[0] + 16u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[18].w[0] + 48u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[18].w[0] + 32u), c.f[3]);
    st32((c.r[18].w[0] + 36u), c.f[2]);
    st32((c.r[18].w[0] + 40u), c.f[1]);
    st32((c.r[18].w[0] + 44u), c.f[0]);
    c.f[3] = ld32((c.r[18].w[0] + 32u));
    c.f[2] = ld32((c.r[18].w[0] + 36u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0] + 44u));
    st32((c.r[18].w[0] + 16u), c.f[3]);
    st32((c.r[18].w[0] + 20u), c.f[2]);
    st32((c.r[18].w[0] + 24u), c.f[1]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FEB0u); st32((c.r[18].w[0] + 28u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0012FEB0u) [[unlikely]] return; }
L_0012FEB0:
    set32(c.r[2], ld32((c.r[17].w[0] + 1252u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] + 32767u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FEC4u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_000D(c, 211u, depth + 1u); else { c.pc = 0x00136E90u; return; } if (c.pc != 0x0012FEC4u) [[unlikely]] return; }
L_0012FEC4:
    set32(c.r[16], c.r[29].w[0] + 88u);
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FEDCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0012FEDCu) [[unlikely]] return; }
L_0012FEDC:
    c.f[12] = ld32((c.r[29].w[0] + 84u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FEE8u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0012FEE8u) [[unlikely]] return; }
L_0012FEE8:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], 0u - c.r[2].w[0]);
    st16((c.r[18].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[12] = ld32((c.r[29].w[0] + 80u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FF04u); c.f[13] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0012FF04u) [[unlikely]] return; }
L_0012FF04:
    st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[18].w[0] + 304u);
    c.budget -= 2;
L_0012FF0C:
    st16((c.r[18].w[0] + 14u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FF28u); st32((c.r[17].w[0] + 1252u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0012FF28u) [[unlikely]] return; }
L_0012FF28:
    st8((c.r[17].w[0] + 795u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FF3Cu); st8((c.r[17].w[0] + 794u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000D(c, 237u, depth + 1u); else { c.pc = 0x00137760u; return; } if (c.pc != 0x0012FF3Cu) [[unlikely]] return; }
L_0012FF3C:
    c.budget -= 1;
L_0012FF40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0012FF60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_000C(c, 1u, depth); } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 747u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { [[clang::musttail]] return unit_000C(c, 1u, depth); } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 2;
L_0012FF94:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_000C(c, 3u, depth); } }
    c.f[3] = ld32((c.r[17].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.f[2] = ld32((c.r[17].w[0] + 20u));
    c.budget -= 3;
L_0012FFA8:
    set32(c.r[2], c.r[2].w[0] + 1968u);
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    st32((c.r[17].w[0] + 32u), c.f[3]);
    st32((c.r[17].w[0] + 36u), c.f[2]);
    st32((c.r[17].w[0] + 40u), c.f[1]);
    st32((c.r[17].w[0] + 44u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 747u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
L_0012FFD0:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FFDCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012FFDCu) [[unlikely]] return; }
L_0012FFDC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_000C(c, 3u, depth); } }
    goto L_0012FFEC;
L_0012FFE8:
    c.budget -= 1;
L_0012FFEC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 1;
L_0012FFF0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(0u));  if (t) { [[clang::musttail]] return unit_000C(c, 3u, depth); } }
    [[clang::musttail]] return unit_000C(c, 1u, depth);
}

}
