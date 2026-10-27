#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0047[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9, 0, 10, 0, 11, 0, 12, 0, 13, 0,
    14, 0, 15, 0, 16, 0, 17, 0, 18, 0, 19, 0, 20, 0, 21, 0, 22, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 26,
    0, 0, 27, 0, 0, 28, 0, 0, 0, 29, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 41, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    60, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0,
    70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0,
    80, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 107, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0,
    0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157,
    0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0,
    0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0,
    0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0,
    0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 204, 0,
    0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0,
    0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0,
    222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0,
    0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 240,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    249, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 259, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0,
    0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0,
    0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0,
    0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0,
    289, 290, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 295, 296, 0, 0, 0, 297, 298, 0, 0, 0, 0,
};

void unit_0047(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0021C000;
    case 2u: goto L_0021C008;
    case 3u: goto L_0021C020;
    case 4u: goto L_0021C030;
    case 5u: goto L_0021C038;
    case 6u: goto L_0021C040;
    case 7u: goto L_0021C048;
    case 8u: goto L_0021C050;
    case 9u: goto L_0021C058;
    case 10u: goto L_0021C060;
    case 11u: goto L_0021C068;
    case 12u: goto L_0021C070;
    case 13u: goto L_0021C078;
    case 14u: goto L_0021C080;
    case 15u: goto L_0021C088;
    case 16u: goto L_0021C090;
    case 17u: goto L_0021C098;
    case 18u: goto L_0021C0A0;
    case 19u: goto L_0021C0A8;
    case 20u: goto L_0021C0B0;
    case 21u: goto L_0021C0B8;
    case 22u: goto L_0021C0C0;
    case 23u: goto L_0021C0C8;
    case 24u: goto L_0021C0E0;
    case 25u: goto L_0021C0F0;
    case 26u: goto L_0021C0FC;
    case 27u: goto L_0021C108;
    case 28u: goto L_0021C114;
    case 29u: goto L_0021C124;
    case 30u: goto L_0021C12C;
    case 31u: goto L_0021C138;
    case 32u: goto L_0021C144;
    case 33u: goto L_0021C150;
    case 34u: goto L_0021C160;
    case 35u: goto L_0021C18C;
    case 36u: goto L_0021C194;
    case 37u: goto L_0021C230;
    case 38u: goto L_0021C240;
    case 39u: goto L_0021C25C;
    case 40u: goto L_0021C264;
    case 41u: goto L_0021C270;
    case 42u: goto L_0021C2A0;
    case 43u: goto L_0021C390;
    case 44u: goto L_0021C3D4;
    case 45u: goto L_0021C3E0;
    case 46u: goto L_0021C3F0;
    case 47u: goto L_0021C490;
    case 48u: goto L_0021C4A8;
    case 49u: goto L_0021C560;
    case 50u: goto L_0021C578;
    case 51u: goto L_0021C630;
    case 52u: goto L_0021C660;
    case 53u: goto L_0021C6BC;
    case 54u: goto L_0021C6D4;
    case 55u: goto L_0021C6F0;
    case 56u: goto L_0021C84C;
    case 57u: goto L_0021C85C;
    case 58u: goto L_0021C93C;
    case 59u: goto L_0021C99C;
    case 60u: goto L_0021CA00;
    case 61u: goto L_0021CA08;
    case 62u: goto L_0021CA68;
    case 63u: goto L_0021CAA0;
    case 64u: goto L_0021CACC;
    case 65u: goto L_0021CAD4;
    case 66u: goto L_0021CAE0;
    case 67u: goto L_0021CB00;
    case 68u: goto L_0021CB2C;
    case 69u: goto L_0021CB64;
    case 70u: goto L_0021CB80;
    case 71u: goto L_0021CB94;
    case 72u: goto L_0021CBB0;
    case 73u: goto L_0021CBC8;
    case 74u: goto L_0021CBE4;
    case 75u: goto L_0021CBF8;
    case 76u: goto L_0021CC24;
    case 77u: goto L_0021CC40;
    case 78u: goto L_0021CC58;
    case 79u: goto L_0021CC78;
    case 80u: goto L_0021CC80;
    case 81u: goto L_0021CC90;
    case 82u: goto L_0021CCA0;
    case 83u: goto L_0021CD50;
    case 84u: goto L_0021CDC0;
    case 85u: goto L_0021CDD0;
    case 86u: goto L_0021CE00;
    case 87u: goto L_0021CE38;
    case 88u: goto L_0021CEA0;
    case 89u: goto L_0021CED0;
    case 90u: goto L_0021CEE4;
    case 91u: goto L_0021CEF8;
    case 92u: goto L_0021CF40;
    case 93u: goto L_0021CF60;
    case 94u: goto L_0021CFC0;
    case 95u: goto L_0021CFD4;
    case 96u: goto L_0021CFE0;
    case 97u: goto L_0021D010;
    case 98u: goto L_0021D028;
    case 99u: goto L_0021D044;
    case 100u: goto L_0021D0C4;
    case 101u: goto L_0021D108;
    case 102u: goto L_0021D15C;
    case 103u: goto L_0021D190;
    case 104u: goto L_0021D1B8;
    case 105u: goto L_0021D1D8;
    case 106u: goto L_0021D1E4;
    case 107u: goto L_0021D1F0;
    case 108u: goto L_0021D224;
    case 109u: goto L_0021D230;
    case 110u: goto L_0021D280;
    case 111u: goto L_0021D288;
    case 112u: goto L_0021D2D0;
    case 113u: goto L_0021D348;
    case 114u: goto L_0021D360;
    case 115u: goto L_0021D398;
    case 116u: goto L_0021D3C8;
    case 117u: goto L_0021D428;
    case 118u: goto L_0021D490;
    case 119u: goto L_0021D4E0;
    case 120u: goto L_0021D530;
    case 121u: goto L_0021D5E8;
    case 122u: goto L_0021D688;
    case 123u: goto L_0021D7A0;
    case 124u: goto L_0021D928;
    case 125u: goto L_0021DA00;
    case 126u: goto L_0021DAD0;
    case 127u: goto L_0021DBC8;
    case 128u: goto L_0021DC60;
    case 129u: goto L_0021DD10;
    case 130u: goto L_0021DDA0;
    case 131u: goto L_0021DE38;
    case 132u: goto L_0021DE84;
    case 133u: goto L_0021DED0;
    case 134u: goto L_0021DF54;
    case 135u: goto L_0021DFA0;
    case 136u: goto L_0021E090;
    case 137u: goto L_0021E0A4;
    case 138u: goto L_0021E0D0;
    case 139u: goto L_0021E0E4;
    case 140u: goto L_0021E0F8;
    case 141u: goto L_0021E134;
    case 142u: goto L_0021E160;
    case 143u: goto L_0021E178;
    case 144u: goto L_0021E210;
    case 145u: goto L_0021E240;
    case 146u: goto L_0021E250;
    case 147u: goto L_0021E280;
    case 148u: goto L_0021E3A8;
    case 149u: goto L_0021E428;
    case 150u: goto L_0021E450;
    case 151u: goto L_0021E530;
    case 152u: goto L_0021E620;
    case 153u: goto L_0021E664;
    case 154u: goto L_0021E684;
    case 155u: goto L_0021E698;
    case 156u: goto L_0021E6AC;
    case 157u: goto L_0021E6FC;
    case 158u: goto L_0021E71C;
    case 159u: goto L_0021E730;
    case 160u: goto L_0021E78C;
    case 161u: goto L_0021E7B0;
    case 162u: goto L_0021E7C4;
    case 163u: goto L_0021E7D8;
    case 164u: goto L_0021E804;
    case 165u: goto L_0021E818;
    case 166u: goto L_0021E82C;
    case 167u: goto L_0021E880;
    case 168u: goto L_0021E8A4;
    case 169u: goto L_0021E8DC;
    case 170u: goto L_0021E8F0;
    case 171u: goto L_0021E904;
    case 172u: goto L_0021E93C;
    case 173u: goto L_0021E958;
    case 174u: goto L_0021E96C;
    case 175u: goto L_0021E980;
    case 176u: goto L_0021E9AC;
    case 177u: goto L_0021E9C0;
    case 178u: goto L_0021E9D4;
    case 179u: goto L_0021EA04;
    case 180u: goto L_0021EA18;
    case 181u: goto L_0021EA2C;
    case 182u: goto L_0021EA50;
    case 183u: goto L_0021EA64;
    case 184u: goto L_0021EA78;
    case 185u: goto L_0021EA90;
    case 186u: goto L_0021EAC8;
    case 187u: goto L_0021EAE0;
    case 188u: goto L_0021EB6C;
    case 189u: goto L_0021EB78;
    case 190u: goto L_0021EBB0;
    case 191u: goto L_0021EBBC;
    case 192u: goto L_0021EBF8;
    case 193u: goto L_0021EC30;
    case 194u: goto L_0021EC3C;
    case 195u: goto L_0021EC60;
    case 196u: goto L_0021EC90;
    case 197u: goto L_0021ECA0;
    case 198u: goto L_0021ECE4;
    case 199u: goto L_0021ECF4;
    case 200u: goto L_0021ED08;
    case 201u: goto L_0021ED3C;
    case 202u: goto L_0021ED5C;
    case 203u: goto L_0021ED70;
    case 204u: goto L_0021ED78;
    case 205u: goto L_0021ED88;
    case 206u: goto L_0021EDCC;
    case 207u: goto L_0021EDDC;
    case 208u: goto L_0021EDF0;
    case 209u: goto L_0021EE10;
    case 210u: goto L_0021EE40;
    case 211u: goto L_0021EECC;
    case 212u: goto L_0021EED8;
    case 213u: goto L_0021EF10;
    case 214u: goto L_0021EF1C;
    case 215u: goto L_0021EF58;
    case 216u: goto L_0021EF90;
    case 217u: goto L_0021EF9C;
    case 218u: goto L_0021EFD8;
    case 219u: goto L_0021EFF0;
    case 220u: goto L_0021F070;
    case 221u: goto L_0021F0E0;
    case 222u: goto L_0021F100;
    case 223u: goto L_0021F114;
    case 224u: goto L_0021F140;
    case 225u: goto L_0021F164;
    case 226u: goto L_0021F188;
    case 227u: goto L_0021F1B0;
    case 228u: goto L_0021F1C4;
    case 229u: goto L_0021F200;
    case 230u: goto L_0021F228;
    case 231u: goto L_0021F258;
    case 232u: goto L_0021F28C;
    case 233u: goto L_0021F2A4;
    case 234u: goto L_0021F300;
    case 235u: goto L_0021F348;
    case 236u: goto L_0021F3C0;
    case 237u: goto L_0021F400;
    case 238u: goto L_0021F410;
    case 239u: goto L_0021F470;
    case 240u: goto L_0021F47C;
    case 241u: goto L_0021F4B0;
    case 242u: goto L_0021F4D0;
    case 243u: goto L_0021F4F0;
    case 244u: goto L_0021F520;
    case 245u: goto L_0021F53C;
    case 246u: goto L_0021F540;
    case 247u: goto L_0021F5C4;
    case 248u: goto L_0021F5D0;
    case 249u: goto L_0021F600;
    case 250u: goto L_0021F60C;
    case 251u: goto L_0021F644;
    case 252u: goto L_0021F650;
    case 253u: goto L_0021F680;
    case 254u: goto L_0021F690;
    case 255u: goto L_0021F750;
    case 256u: goto L_0021F770;
    case 257u: goto L_0021F7E0;
    case 258u: goto L_0021F7F0;
    case 259u: goto L_0021F7F8;
    case 260u: goto L_0021F820;
    case 261u: goto L_0021F830;
    case 262u: goto L_0021F844;
    case 263u: goto L_0021F850;
    case 264u: goto L_0021F874;
    case 265u: goto L_0021F898;
    case 266u: goto L_0021F900;
    case 267u: goto L_0021F964;
    case 268u: goto L_0021F990;
    case 269u: goto L_0021FA5C;
    case 270u: goto L_0021FAB0;
    case 271u: goto L_0021FB7C;
    case 272u: goto L_0021FBA8;
    case 273u: goto L_0021FC1C;
    case 274u: goto L_0021FC74;
    case 275u: goto L_0021FC88;
    case 276u: goto L_0021FCD4;
    case 277u: goto L_0021FCDC;
    case 278u: goto L_0021FCF8;
    case 279u: goto L_0021FD10;
    case 280u: goto L_0021FD68;
    case 281u: goto L_0021FDB0;
    case 282u: goto L_0021FE08;
    case 283u: goto L_0021FE80;
    case 284u: goto L_0021FECC;
    case 285u: goto L_0021FED0;
    case 286u: goto L_0021FF00;
    case 287u: goto L_0021FF68;
    case 288u: goto L_0021FF78;
    case 289u: goto L_0021FF80;
    case 290u: goto L_0021FF84;
    case 291u: goto L_0021FF88;
    case 292u: goto L_0021FFA0;
    case 293u: goto L_0021FFB0;
    case 294u: goto L_0021FFC4;
    case 295u: goto L_0021FFD4;
    case 296u: goto L_0021FFD8;
    case 297u: goto L_0021FFE8;
    case 298u: goto L_0021FFEC;
    default: bad_entry(c, 0x0021C000u); return;
    }
L_0021C000:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 74u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0021C008:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021C020:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C030u);  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x0021C030u) [[unlikely]] return; }
L_0021C030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C038u);  if (depth < kMaxDepth) unit_006A(c, 139u, depth + 1u); else { c.pc = 0x002AA020u; return; } if (c.pc != 0x0021C038u) [[unlikely]] return; }
L_0021C038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C040u);  if (depth < kMaxDepth) unit_004E(c, 70u, depth + 1u); else { c.pc = 0x00238B60u; return; } if (c.pc != 0x0021C040u) [[unlikely]] return; }
L_0021C040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C048u);  if (depth < kMaxDepth) unit_0078(c, 23u, depth + 1u); else { c.pc = 0x002E01A0u; return; } if (c.pc != 0x0021C048u) [[unlikely]] return; }
L_0021C048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C050u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x0021C050u) [[unlikely]] return; }
L_0021C050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C058u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x0021C058u) [[unlikely]] return; }
L_0021C058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C060u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x0021C060u) [[unlikely]] return; }
L_0021C060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C068u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x0021C068u) [[unlikely]] return; }
L_0021C068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C070u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x0021C070u) [[unlikely]] return; }
L_0021C070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C078u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x0021C078u) [[unlikely]] return; }
L_0021C078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C080u);  if (depth < kMaxDepth) unit_004A(c, 360u, depth + 1u); else { c.pc = 0x0022B860u; return; } if (c.pc != 0x0021C080u) [[unlikely]] return; }
L_0021C080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C088u);  if (depth < kMaxDepth) unit_004B(c, 49u, depth + 1u); else { c.pc = 0x0022C9B0u; return; } if (c.pc != 0x0021C088u) [[unlikely]] return; }
L_0021C088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C090u);  if (depth < kMaxDepth) unit_006B(c, 20u, depth + 1u); else { c.pc = 0x002AC480u; return; } if (c.pc != 0x0021C090u) [[unlikely]] return; }
L_0021C090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C098u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x0021C098u) [[unlikely]] return; }
L_0021C098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C0A0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x0021C0A0u) [[unlikely]] return; }
L_0021C0A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C0A8u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x0021C0A8u) [[unlikely]] return; }
L_0021C0A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C0B0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x0021C0B0u) [[unlikely]] return; }
L_0021C0B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C0B8u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x0021C0B8u) [[unlikely]] return; }
L_0021C0B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C0C0u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x0021C0C0u) [[unlikely]] return; }
L_0021C0C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C0C8u);  if (depth < kMaxDepth) unit_0078(c, 154u, depth + 1u); else { c.pc = 0x002E18C0u; return; } if (c.pc != 0x0021C0C8u) [[unlikely]] return; }
L_0021C0C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021C0E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C0F0u);  if (depth < kMaxDepth) unit_0045(c, 90u, depth + 1u); else { c.pc = 0x00214EF0u; return; } if (c.pc != 0x0021C0F0u) [[unlikely]] return; }
L_0021C0F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C0FCu); set32(c.r[4], c.r[4].w[0] - 9792u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x0021C0FCu) [[unlikely]] return; }
L_0021C0FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C108u); set32(c.r[4], c.r[4].w[0] - 16432u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x0021C108u) [[unlikely]] return; }
L_0021C108:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C114u); set32(c.r[4], c.r[4].w[0] - 15136u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x0021C114u) [[unlikely]] return; }
L_0021C114:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C124u); set32(c.r[4], c.r[4].w[0] - 15024u);  if (depth < kMaxDepth) unit_0043(c, 416u, depth + 1u); else { c.pc = 0x0020FEF0u; return; } if (c.pc != 0x0021C124u) [[unlikely]] return; }
L_0021C124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C12Cu);  if (depth < kMaxDepth) unit_0046(c, 204u, depth + 1u); else { c.pc = 0x0021B570u; return; } if (c.pc != 0x0021C12Cu) [[unlikely]] return; }
L_0021C12C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C138u); set32(c.r[4], c.r[4].w[0] - 928u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x0021C138u) [[unlikely]] return; }
L_0021C138:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C144u); set32(c.r[4], c.r[4].w[0] - 912u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x0021C144u) [[unlikely]] return; }
L_0021C144:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C150u); set32(c.r[4], c.r[4].w[0] - 944u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x0021C150u) [[unlikely]] return; }
L_0021C150:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021C160:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 76u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0021C1A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C18Cu);  if (depth < kMaxDepth) unit_0049(c, 380u, depth + 1u); else { c.pc = 0x00227690u; return; } if (c.pc != 0x0021C18Cu) [[unlikely]] return; }
L_0021C18C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C194u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 382u, depth + 1u); else { c.pc = 0x00227730u; return; } if (c.pc != 0x0021C194u) [[unlikely]] return; }
L_0021C194:
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0021C220; } }
L_0021C1A0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 56u)));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_0021C1C0; } }
    c.r[3].d[0] = ld16((c.r[1].w[0] + 9540u));
    c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[6].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 4;
L_0021C1C0:
    c.r[3].d[0] = c.r[4].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_0021C1D8; } }
    c.r[3].d[0] = ld16((c.r[1].w[0] + 9556u));
    c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[6].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 3;
L_0021C1D8:
    c.r[3].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_0021C1F0; } }
    c.r[3].d[0] = ld16((c.r[1].w[0] + 9572u));
    c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[6].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 3;
L_0021C1F0:
    c.r[3].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_0021C208; } }
    c.r[3].d[0] = ld16((c.r[1].w[0] + 9588u));
    c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[6].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 3;
L_0021C208:
    c.r[3].d[0] = c.r[6].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 33776ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0021C220; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_0021C220:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021C230:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C240u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 229u, depth + 1u); else { c.pc = 0x002E2990u; return; } if (c.pc != 0x0021C240u) [[unlikely]] return; }
L_0021C240:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] - 17904u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 81u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C25Cu); c.r[4].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_004D(c, 63u, depth + 1u); else { c.pc = 0x002350D0u; return; } if (c.pc != 0x0021C25Cu) [[unlikely]] return; }
L_0021C25C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C264u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 43u, depth + 1u); else { c.pc = 0x0021C390u; return; } if (c.pc != 0x0021C264u) [[unlikely]] return; }
L_0021C264:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021C270:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 10528u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[12], 0u + 61u);
    c.f[4] = c.r[7].w[0];
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = c.r[7].d[0] << 32;
    c.r[7].d[0] = 0ull | 32768ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[9].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.budget -= 12;
L_0021C2A0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.f[0] = ld32((c.r[4].w[0]));
    c.r[7].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    c.f[5] = ld32((c.r[3].w[0] + 4u));
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[1] = fp::add(c.f[0], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[2] = fp::sub(c.f[3], c.f[5]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[3], c.f[5]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[4]);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[5] = ld32((c.r[3].w[0] + 12u));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = c.f[1] ^ fp::kSign;
    c.f[3] = c.f[3] ^ fp::kSign;
    c.f[1] = fp::mul(c.f[5], c.f[1]);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[5]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 20u), c.f[0]);
    set32(c.r[11], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[8], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[10], ld32((c.r[5].w[0])));
    c.r[11].d[0] = c.r[11].d[0] << 8;
    c.r[8].d[0] = c.r[8].d[0] << 16;
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[10].d[0];
    st64((c.r[3].w[0] + 32u), c.r[8].d[0]);
    st64((c.r[3].w[0] + 40u), c.r[12].d[0]);
    set32(c.r[11], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[8], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[10], ld32((c.r[5].w[0])));
    c.r[11].d[0] = c.r[11].d[0] << 8;
    c.r[8].d[0] = c.r[8].d[0] << 16;
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[10].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st64((c.r[3].w[0] + 24u), c.r[8].d[0]);
    c.budget -= 55;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021C2A0u | kUnwind; return; } goto L_0021C2A0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021C390:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], c.r[4].w[0] << 3);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] - 14224u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 81u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C3D4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 86u, depth + 1u); else { c.pc = 0x0026CCF0u; return; } if (c.pc != 0x0021C3D4u) [[unlikely]] return; }
L_0021C3D4:
    set32(c.r[4], c.r[16].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C3E0u); set32(c.r[5], c.r[16].w[0] + 112u);  if (depth < kMaxDepth) unit_0047(c, 41u, depth + 1u); else { c.pc = 0x0021C270u; return; } if (c.pc != 0x0021C3E0u) [[unlikely]] return; }
L_0021C3E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021C3F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 41u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0021C480; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 81u)));
    c.r[1].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0021C450; } }
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x402C0000u);
    c.r[5].d[0] = c.r[3].d[0] | 52429ull;
    c.f[2] = c.r[5].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FD90000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 116u), c.f[0]);  if (t) { goto L_0021C480; } }
    c.budget -= 1;
L_0021C450:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.budget -= 12;
L_0021C480:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021C490:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[7], c.r[7].w[0] - 27856u);
    set32(c.r[6], c.r[6].w[0] + 18336u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_0021C4A8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 8663u)));
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[7].w[0] + 8658u));
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 8680u)));
    st8((c.r[6].w[0] + 15u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 8661u)));
    st8((c.r[6].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 8659u)));
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 8660u)));
    st8((c.r[6].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 8662u)));
    st8((c.r[6].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 876u)));
    st8((c.r[6].w[0] + 7u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 496u)));
    st16((c.r[6].w[0] + 8u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 498u)));
    st16((c.r[6].w[0] + 16u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 776u)));
    st8((c.r[6].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 8685u)));
    st8((c.r[6].w[0] + 11u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1934u)));
    st8((c.r[6].w[0] + 12u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1938u)));
    st8((c.r[6].w[0] + 13u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 8684u)));
    st8((c.r[6].w[0] + 14u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 886u)));
    st8((c.r[6].w[0] + 18u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 887u)));
    st8((c.r[6].w[0] + 19u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 8704u);
    c.budget -= 41;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021C4A8u | kUnwind; return; } goto L_0021C4A8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021C560:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[7], c.r[7].w[0] - 27856u);
    set32(c.r[6], c.r[6].w[0] + 18336u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_0021C578:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[7].w[0] + 8663u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    st8((c.r[7].w[0] + 8658u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 15u)));
    st8((c.r[7].w[0] + 8680u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 3u)));
    st8((c.r[7].w[0] + 8661u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    st8((c.r[7].w[0] + 8659u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 5u)));
    st8((c.r[7].w[0] + 8660u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 6u)));
    st8((c.r[7].w[0] + 8662u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 7u)));
    st8((c.r[7].w[0] + 876u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 8u)));
    st16((c.r[7].w[0] + 496u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 16u)));
    st16((c.r[7].w[0] + 498u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 10u)));
    st8((c.r[7].w[0] + 776u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 11u)));
    st8((c.r[7].w[0] + 8685u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 12u)));
    st8((c.r[7].w[0] + 1934u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 13u)));
    st8((c.r[7].w[0] + 1938u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 14u)));
    st8((c.r[7].w[0] + 8684u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 18u)));
    st8((c.r[7].w[0] + 886u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 19u)));
    st8((c.r[7].w[0] + 887u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], c.r[6].w[0] + 32u);
    c.budget -= 41;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021C578u | kUnwind; return; } goto L_0021C578; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021C630:
    set32(c.r[2], 0u + 139u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[1].w[0] + 16u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[1].w[0]), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 7744u)));
    c.budget -= 9;
    { c.r[5].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_006B(c, 227u, depth); }
L_0021C660:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 8560u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 820u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[5].w[0] + 820u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 88u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 822u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0021C6C0; } }
    st16((c.r[5].w[0] + 822u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[2].d[0] = ld64((c.r[1].w[0] + 4096u));
    c.r[2].d[0] = c.r[2].d[0] >> 13;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C6BCu); st32((c.r[5].w[0] + 824u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0047(c, 51u, depth + 1u); else { c.pc = 0x0021C630u; return; } if (c.pc != 0x0021C6BCu) [[unlikely]] return; }
L_0021C6BC:
    c.budget -= 1;
L_0021C6C0:
    set32(c.r[3], ld32((c.r[28].w[0] - 24024u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0021C6D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C6D4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0060(c, 314u, depth + 1u); else { c.pc = 0x002826F0u; return; } if (c.pc != 0x0021C6D4u) [[unlikely]] return; }
L_0021C6D4:
    c.budget -= 1;
L_0021C6D8:
    set_interrupts(c, true);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021C6F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], c.r[4].w[0] << 3);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[19], c.r[19].w[0] - 8560u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], ld32((c.r[19].w[0] + 816u)));
    set32(c.r[2], c.r[2].w[0] + 1200u);
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[18], c.r[3].w[0] + 848u);
    set32(c.r[3], ld32((c.r[3].w[0] + 852u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[4].d[0] & 256ull;
    c.budget -= 31;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] & 12ull;  if (t) { goto L_0021CA68; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);  if (t) { goto L_0021CA68; } }
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021CA68; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF0000000u);
    set32(c.r[2], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[18].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[4], c.r[5].w[0] + 1u);
    st32((c.r[18].w[0] + 32u), c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[17].d[0] & c.r[3].d[0];
    c.r[17].d[0] = c.r[17].d[0] << 36;
    set32(c.r[16], c.r[3].w[0] >> 28);
    c.budget -= 17;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[17].d[0] = c.r[17].d[0] >> 36;  if (t) { goto L_0021C800; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0021C7F0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0021C800; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0021C800; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021C800; } }
    c.budget -= 1;
L_0021C7F0:
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 4;
L_0021C800:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021CA68; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 32u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF0000000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[17].d[0] & c.r[3].d[0];
    c.r[17].d[0] = c.r[17].d[0] << 36;
    set32(c.r[16], c.r[3].w[0] >> 28);
    c.budget -= 12;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[17].d[0] >> 36;  if (t) { goto L_0021C8B8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0021C8B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C84Cu);  if (depth < kMaxDepth) unit_004D(c, 98u, depth + 1u); else { c.pc = 0x00235AB0u; return; } if (c.pc != 0x0021C84Cu) [[unlikely]] return; }
L_0021C84C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021C860; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C85Cu);  if (depth < kMaxDepth) unit_004D(c, 99u, depth + 1u); else { c.pc = 0x00235AC0u; return; } if (c.pc != 0x0021C85Cu) [[unlikely]] return; }
L_0021C85C:
    c.budget -= 1;
L_0021C860:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021C8B8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0021C888; } }
    set_interrupts(c, true);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0021CA78; } }
L_0021C888:
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF0000000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.r[17].d[0] = c.r[17].d[0] << 36;
    set32(c.r[16], c.r[2].w[0] >> 28);
    c.r[17].d[0] = c.r[17].d[0] >> 36;
    c.budget -= 12;
L_0021C8B8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_0021CA08; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0021C9A8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0021C948; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0021C8F8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0021C8F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021CA68; } }
    c.budget -= 1;
L_0021C8F8:
    set32(c.r[8], ld32((c.r[18].w[0])));
    set32(c.r[4], 0u - 65u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[2], 0u - 129u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[7].d[0] = ld8((c.r[8].w[0]));
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], ld32((c.r[18].w[0])));
    c.r[4].d[0] = ld8((c.r[6].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C93Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 183u, depth + 1u); else { c.pc = 0x00101D40u; return; } if (c.pc != 0x0021C93Cu) [[unlikely]] return; }
L_0021C93C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021CA68; } }
    c.budget -= 1;
L_0021C948:
    set32(c.r[6], ld32((c.r[17].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], 0u - 65u);
    set32(c.r[5], c.r[2].w[0] << 6);
    set32(c.r[3], c.r[2].w[0] << 7);
    set32(c.r[2], 0u - 129u);
    c.r[6].d[0] = c.r[6].d[0] | 2ull;
    st32((c.r[17].w[0] + 48u), c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[18].w[0])));
    c.r[6].d[0] = ld8((c.r[7].w[0]));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[4].d[0] = ld8((c.r[5].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C99Cu); set32(c.r[4], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_0000(c, 183u, depth + 1u); else { c.pc = 0x00101D40u; return; } if (c.pc != 0x0021C99Cu) [[unlikely]] return; }
L_0021C99C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021CA68; } }
    c.budget -= 1;
L_0021C9A8:
    set32(c.r[8], ld32((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    set32(c.r[5], 0u - 65u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[3], 0u - 129u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[2], c.r[2].w[0] + 12896u);
    c.r[7].d[0] = ld8((c.r[8].w[0]));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[18].w[0])));
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 816u)));
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], c.r[3].w[0] << 12);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CA00u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 183u, depth + 1u); else { c.pc = 0x00101D40u; return; } if (c.pc != 0x0021CA00u) [[unlikely]] return; }
L_0021CA00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021CA68; } }
L_0021CA08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 24576u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021CA08u | kUnwind; return; } goto L_0021CA08; } }
    set32(c.r[8], ld32((c.r[18].w[0])));
    set32(c.r[4], 0u - 65u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[2], 0u - 129u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[7].d[0] = ld8((c.r[8].w[0]));
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], ld32((c.r[18].w[0])));
    c.r[4].d[0] = ld8((c.r[6].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CA68u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 183u, depth + 1u); else { c.pc = 0x00101D40u; return; } if (c.pc != 0x0021CA68u) [[unlikely]] return; }
L_0021CA68:
    set_interrupts(c, true);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
L_0021CA78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0021CAA0:
    c.r[10].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 8560u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 640u);
    set32(c.r[7], 0u + 448u);
    set32(c.r[8], 0u + 3u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CACCu); set32(c.r[9], 0u + 49u);  if (depth < kMaxDepth) unit_0000(c, 142u, depth + 1u); else { c.pc = 0x001015D0u; return; } if (c.pc != 0x0021CACCu) [[unlikely]] return; }
L_0021CACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CAD4u);  if (depth < kMaxDepth) unit_0047(c, 66u, depth + 1u); else { c.pc = 0x0021CAE0u; return; } if (c.pc != 0x0021CAD4u) [[unlikely]] return; }
L_0021CAD4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021CAE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 8608u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 5;
    { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 8606u)));  [[clang::musttail]] return unit_006B(c, 233u, depth); }
L_0021CB00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 17856u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[28].w[0] - 24020u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24020u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CB2Cu); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0021CB2Cu) [[unlikely]] return; }
L_0021CB2C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BE0000u);
    set32(c.r[2], 0u + 18000u);
    st32((c.r[1].w[0] - 5892u), c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 8808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 8806u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 8791u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CB64u); st8((c.r[1].w[0] - 8790u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004A(c, 14u, depth + 1u); else { c.pc = 0x002282F0u; return; } if (c.pc != 0x0021CB64u) [[unlikely]] return; }
L_0021CB64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021CB80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CB94u); set32(c.r[4], c.r[4].w[0] - 8816u);  if (depth < kMaxDepth) unit_004A(c, 125u, depth + 1u); else { c.pc = 0x00229670u; return; } if (c.pc != 0x0021CB94u) [[unlikely]] return; }
L_0021CB94:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8791u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021CBB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01030000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 817u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CBC8u); c.r[5].d[0] = c.r[2].d[0] | 61440ull;  if (depth < kMaxDepth) unit_0009(c, 73u, depth + 1u); else { c.pc = 0x001251F0u; return; } if (c.pc != 0x0021CBC8u) [[unlikely]] return; }
L_0021CBC8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0021CBE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01030000u);
    set32(c.r[5], c.r[29].w[0] + 24u);
    c.r[4].d[0] = c.r[2].d[0] | 61440ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CBE4u); set32(c.r[6], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_000A(c, 212u, depth + 1u); else { c.pc = 0x0012B240u; return; } if (c.pc != 0x0021CBE4u) [[unlikely]] return; }
L_0021CBE4:
    c.budget -= 1;
L_0021CBE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00EA0000u);
    set32(c.r[4], 0u + 656u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CBF8u); c.r[5].d[0] = c.r[2].d[0] | 26624ull;  if (depth < kMaxDepth) unit_0009(c, 73u, depth + 1u); else { c.pc = 0x001251F0u; return; } if (c.pc != 0x0021CBF8u) [[unlikely]] return; }
L_0021CBF8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[7].sd[0] = static_cast<std::int32_t>(0x00BD0000u);  if (t) { goto L_0021CC28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00EA0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 20464u);
    set32(c.r[9], c.r[9].w[0] - 6928u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CC24u); c.r[8].d[0] = c.r[2].d[0] | 26624ull;  if (depth < kMaxDepth) unit_000A(c, 111u, depth + 1u); else { c.pc = 0x00129470u; return; } if (c.pc != 0x0021CC24u) [[unlikely]] return; }
L_0021CC24:
    c.budget -= 1;
L_0021CC28:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021CC40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01030000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 819u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CC58u); c.r[5].d[0] = c.r[2].d[0] | 61440ull;  if (depth < kMaxDepth) unit_0009(c, 73u, depth + 1u); else { c.pc = 0x001251F0u; return; } if (c.pc != 0x0021CC58u) [[unlikely]] return; }
L_0021CC58:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0021CC78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01030000u);
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[2].d[0] | 61440ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CC78u); set32(c.r[7], c.r[29].w[0] + 28u);  if (depth < kMaxDepth) unit_000A(c, 149u, depth + 1u); else { c.pc = 0x00129E30u; return; } if (c.pc != 0x0021CC78u) [[unlikely]] return; }
L_0021CC78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CC80u); set32(c.r[4], ld32((c.r[29].w[0] + 28u)));  if (depth < kMaxDepth) unit_006B(c, 121u, depth + 1u); else { c.pc = 0x002AD320u; return; } if (c.pc != 0x0021CC80u) [[unlikely]] return; }
L_0021CC80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021CC90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00EA0000u);
    set32(c.r[4], 0u + 655u);
    c.budget -= 4;
    { c.r[5].d[0] = c.r[2].d[0] | 24576ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001251F0u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 73u, depth); }
L_0021CCA0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x014A0000u);  if (t) { goto L_0021CCC8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01170000u);
    c.r[5].d[0] = c.r[5].d[0] | 49152ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    st32((c.r[1].w[0] - 2064u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 61440ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    st32((c.r[1].w[0] - 2060u), c.r[3].w[0]);
    c.budget -= 8;
L_0021CCC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[9], ld32((c.r[1].w[0] - 2064u)));
    set32(c.r[10], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 9120u);
    set32(c.r[8], c.r[3].w[0] + c.r[10].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] + 9124u);
    set32(c.r[7], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01030000u);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 24576ull;
    set32(c.r[3], c.r[4].w[0] << 12);
    set32(c.r[5], c.r[5].w[0] << 13);
    set32(c.r[4], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[8].w[0]), c.r[9].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[6], c.r[5].w[0] + c.r[1].w[0]);
    set32(c.r[3], c.r[3].w[0] + 9128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    set32(c.r[5], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[8], ld32((c.r[1].w[0] - 2060u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] + 9132u);
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    st32((c.r[7].w[0]), c.r[8].w[0]);
    st32((c.r[5].w[0]), c.r[6].w[0]);
    c.budget -= 31;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[4].w[0]);  c.pc = t; return; }
L_0021CD50:
    set32(c.r[3], 0u + 21728u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x008D0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[7], c.r[7].w[0] - 1360u);
    set32(c.r[9], c.r[4].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] + 9120u);
    set32(c.r[4], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] + 9124u);
    set32(c.r[5], c.r[3].w[0] + c.r[9].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] + 9128u);
    st32((c.r[7].w[0] + 24u), c.r[6].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] + 9132u);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    st32((c.r[7].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    st32((c.r[7].w[0] + 21716u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0] + 21720u), c.r[3].w[0]);  c.pc = t; return; }
L_0021CDC0:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 4;
    { set32(c.r[5], c.r[3].w[0] - c.r[2].w[0]);  [[clang::musttail]] return unit_009B(c, 304u, depth); }
L_0021CDD0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CE00u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 103u, depth + 1u); else { c.pc = 0x0021D190u; return; } if (c.pc != 0x0021CE00u) [[unlikely]] return; }
L_0021CE00:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x008D0000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[20], c.r[20].w[0] - 1360u);
    set32(c.r[19], c.r[19].w[0] + 8864u);
    set32(c.r[21], c.r[21].w[0] + 9120u);
    set32(c.r[18], c.r[18].w[0] + 2624u);
    set32(c.r[22], c.r[22].w[0] + 2592u);
    set32(c.r[23], c.r[23].w[0] + 15648u);
    c.budget -= 14;
L_0021CE38:
    set32(c.r[4], 0u - 1u);
    st32((c.r[19].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 47u)));
    c.r[30].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 53u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 88u)));
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == c.r[4].d[0]; st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0021CF00; } }
    set32(c.r[5], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st8((c.r[20].w[0] + 1u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 5760u);
    st8((c.r[20].w[0] + 4u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[20].w[0] + 5u), static_cast<std::uint8_t>(c.r[30].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 176u)));
    set32(c.r[4], c.r[4].w[0] - 13152u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[20].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CEA0u); st32((c.r[29].w[0] + 160u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021CEA0u) [[unlikely]] return; }
L_0021CEA0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 176u)));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[30].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CED0u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 74u, depth + 1u); else { c.pc = 0x00214940u; return; } if (c.pc != 0x0021CED0u) [[unlikely]] return; }
L_0021CED0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 12976u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CEE4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021CEE4u) [[unlikely]] return; }
L_0021CEE4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00140000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 21488u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CEF8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021CEF8u) [[unlikely]] return; }
L_0021CEF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021CF08; } }
L_0021CF00:
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0021CF08:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; c.r[1].d[0] = c.r[17].sd[0] < 64ll ? 1ull : 0ull;  if (t) { goto L_0021CF60; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0021CF60; } }
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[17], c.r[17].w[0] << 2);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[22].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CF40u); set32(c.r[5], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_0045(c, 59u, depth + 1u); else { c.pc = 0x002147C0u; return; } if (c.pc != 0x0021CF40u) [[unlikely]] return; }
L_0021CF40:
    set32(c.r[2], ld32((c.r[23].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[6], ld32((c.r[18].w[0])));
    set32(c.r[4], c.r[4].w[0] + 17120u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CF60u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021CF60u) [[unlikely]] return; }
L_0021CF60:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    set32(c.r[20], c.r[20].w[0] + 21728u);
    set32(c.r[19], c.r[19].w[0] + 4u);
    set32(c.r[21], c.r[21].w[0] + 16u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[22], c.r[22].w[0] + 4u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[23], c.r[23].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021CE38u | kUnwind; return; } goto L_0021CE38; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0021CFC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CFD4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 103u, depth + 1u); else { c.pc = 0x0021D190u; return; } if (c.pc != 0x0021CFD4u) [[unlikely]] return; }
L_0021CFD4:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x008D0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] - 1360u);
    c.budget -= 3;
L_0021CFE0:
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0021D160; } }
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], ld32((c.r[17].w[0] + 24u)));  if (t) { goto L_0021D018; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D010u); st16((c.r[17].w[0] + 21712u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000A(c, 65u, depth + 1u); else { c.pc = 0x00128BC0u; return; } if (c.pc != 0x0021D010u) [[unlikely]] return; }
L_0021D010:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021D020; } }
L_0021D018:
    st16((c.r[17].w[0] + 21712u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_0021D020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D028u); set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_000A(c, 22u, depth + 1u); else { c.pc = 0x00128660u; return; } if (c.pc != 0x0021D028u) [[unlikely]] return; }
L_0021D028:
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0021D0B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D044u);  if (depth < kMaxDepth) unit_0047(c, 120u, depth + 1u); else { c.pc = 0x0021D530u; return; } if (c.pc != 0x0021D044u) [[unlikely]] return; }
L_0021D044:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    set32(c.r[4], 0u + 1100u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] - 7568u);
    set32(c.r[3], c.r[3].w[0] - 13952u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[4].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[17].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 27;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0021D120; } }
L_0021D0B0:
    c.r[1].d[0] = c.r[2].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0021D100; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D0C4u);  if (depth < kMaxDepth) unit_0047(c, 125u, depth + 1u); else { c.pc = 0x0021DA00u; return; } if (c.pc != 0x0021D0C4u) [[unlikely]] return; }
L_0021D0C4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 7680u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] - 256u), c.r[17].w[0]);  if (t) { goto L_0021D120; } }
    c.budget -= 1;
L_0021D100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D108u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 128u, depth + 1u); else { c.pc = 0x0021DC60u; return; } if (c.pc != 0x0021D108u) [[unlikely]] return; }
L_0021D108:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    set32(c.r[2], c.r[2].w[0] - 7792u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] - 320u), c.r[17].w[0]);
    c.budget -= 6;
L_0021D120:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], c.r[3].w[0] + 14384u);
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 123u)));
    st8((c.r[17].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 92u)));
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D15Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));  if (depth < kMaxDepth) unit_0069(c, 171u, depth + 1u); else { c.pc = 0x002A6B20u; return; } if (c.pc != 0x0021D15Cu) [[unlikely]] return; }
L_0021D15C:
    c.budget -= 1;
L_0021D160:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 21728u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021CFE0u | kUnwind; return; } goto L_0021CFE0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021D190:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
L_0021D1B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[3].w[0] + 16272u);
    set32(c.r[2], c.r[2].w[0] + 17168u);
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[17], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 8;
L_0021D1D8:
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D1E4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 57u, depth + 1u); else { c.pc = 0x001E93C0u; return; } if (c.pc != 0x0021D1E4u) [[unlikely]] return; }
L_0021D1E4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0021D210; } }
L_0021D1F0:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D1F0u | kUnwind; return; } goto L_0021D1F0; } }
    c.budget -= 1;
L_0021D210:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0021D250; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D224u);  if (depth < kMaxDepth) unit_003A(c, 57u, depth + 1u); else { c.pc = 0x001E93C0u; return; } if (c.pc != 0x0021D224u) [[unlikely]] return; }
L_0021D224:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0021D250; } }
L_0021D230:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D230u | kUnwind; return; } goto L_0021D230; } }
    c.budget -= 1;
L_0021D250:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[3].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(55ll) ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 8u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D1D8u | kUnwind; return; } goto L_0021D1D8; } }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D1B8u | kUnwind; return; } goto L_0021D1B8; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] + 16928u);
    c.budget -= 3;
L_0021D280:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 2;
L_0021D288:
    st32((c.r[6].w[0]), 0u);
    st32((c.r[6].w[0] + 8u), 0u);
    set32(c.r[4], c.r[4].w[0] + 7u);
    st32((c.r[6].w[0] + 16u), 0u);
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(14ll) ? 1ull : 0ull;
    st32((c.r[6].w[0] + 24u), 0u);
    st32((c.r[6].w[0] + 32u), 0u);
    st32((c.r[6].w[0] + 40u), 0u);
    st32((c.r[6].w[0] + 48u), 0u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 56u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D288u | kUnwind; return; } goto L_0021D288; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 112u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D280u | kUnwind; return; } goto L_0021D280; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] - 27920u);
    c.budget -= 3;
L_0021D2D0:
    st32((c.r[5].w[0]), 0u);
    st32((c.r[5].w[0] + 8u), 0u);
    set32(c.r[4], c.r[4].w[0] + 8u);
    st32((c.r[5].w[0] + 16u), 0u);
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(18ll) ? 1ull : 0ull;
    st32((c.r[5].w[0] + 24u), 0u);
    st32((c.r[5].w[0] + 32u), 0u);
    st32((c.r[5].w[0] + 40u), 0u);
    st32((c.r[5].w[0] + 48u), 0u);
    st32((c.r[5].w[0] + 56u), 0u);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D2D0u | kUnwind; return; } goto L_0021D2D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - 27920u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    st32((c.r[3].w[0]), 0u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[11], c.r[11].w[0] - 688u);
    st32((c.r[3].w[0] + 8u), 0u);
    set32(c.r[10], c.r[10].w[0] - 1488u);
    set32(c.r[9], c.r[9].w[0] - 1728u);
    set32(c.r[8], c.r[8].w[0] - 1968u);
    set32(c.r[7], c.r[7].w[0] - 720u);
    c.budget -= 18;
L_0021D348:
    st32((c.r[11].w[0]), 0u);
    st32((c.r[11].w[0] + 4u), 0u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[11].w[0] + 8u), 0u);
    c.r[6].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 6;
L_0021D360:
    st32((c.r[6].w[0]), 0u);
    st32((c.r[6].w[0] + 4u), 0u);
    set32(c.r[4], c.r[4].w[0] + 8u);
    st32((c.r[6].w[0] + 8u), 0u);
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    st32((c.r[6].w[0] + 12u), 0u);
    st32((c.r[6].w[0] + 16u), 0u);
    st32((c.r[6].w[0] + 20u), 0u);
    st32((c.r[6].w[0] + 24u), 0u);
    st32((c.r[6].w[0] + 28u), 0u);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D360u | kUnwind; return; } goto L_0021D360; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 2;
L_0021D398:
    st32((c.r[6].w[0]), 0u);
    st32((c.r[6].w[0] + 4u), 0u);
    set32(c.r[4], c.r[4].w[0] + 5u);
    st32((c.r[6].w[0] + 8u), 0u);
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    st32((c.r[6].w[0] + 12u), 0u);
    st32((c.r[6].w[0] + 16u), 0u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D398u | kUnwind; return; } goto L_0021D398; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 3;
L_0021D3C8:
    st32((c.r[6].w[0]), 0u);
    st32((c.r[6].w[0] + 4u), 0u);
    set32(c.r[4], c.r[4].w[0] + 5u);
    st32((c.r[6].w[0] + 8u), 0u);
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    st32((c.r[6].w[0] + 12u), 0u);
    st32((c.r[6].w[0] + 16u), 0u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D3C8u | kUnwind; return; } goto L_0021D3C8; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[7].w[0]), 0u);
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    set32(c.r[11], c.r[11].w[0] + 12u);
    set32(c.r[10], c.r[10].w[0] + 128u);
    set32(c.r[9], c.r[9].w[0] + 40u);
    set32(c.r[8], c.r[8].w[0] + 40u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D348u | kUnwind; return; } goto L_0021D348; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    set32(c.r[3], c.r[3].w[0] - 5360u);
    set32(c.r[5], c.r[5].w[0] - 7568u);
    st32((c.r[28].w[0] - 23756u), c.r[3].w[0]);
    set32(c.r[3], 0u + 550u);
    c.budget -= 6;
L_0021D428:
    st32((c.r[5].w[0]), 0u);
    st32((c.r[5].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] - 8u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    st32((c.r[5].w[0]), 0u);
    st32((c.r[5].w[0] + 4u), 0u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    st32((c.r[5].w[0]), 0u);
    st32((c.r[5].w[0] + 4u), 0u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    st32((c.r[5].w[0]), 0u);
    st32((c.r[5].w[0] + 4u), 0u);
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D428u | kUnwind; return; } goto L_0021D428; } }
    st32((c.r[5].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    st32((c.r[5].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] - 7680u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[4], 0u + 26u);
    st32((c.r[5].w[0]), 0u);
    st32((c.r[5].w[0] + 4u), 0u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    st32((c.r[5].w[0]), 0u);
    st32((c.r[5].w[0] + 4u), 0u);
    c.budget -= 11;
L_0021D490:
    st32((c.r[3].w[0]), 0u);
    st32((c.r[3].w[0] + 4u), 0u);
    set32(c.r[4], c.r[4].w[0] - 8u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    st32((c.r[3].w[0]), 0u);
    st32((c.r[3].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    st32((c.r[3].w[0]), 0u);
    st32((c.r[3].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    st32((c.r[3].w[0]), 0u);
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D490u | kUnwind; return; } goto L_0021D490; } }
    st32((c.r[3].w[0]), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    st32((c.r[3].w[0] + 4u), 0u);
    set32(c.r[4], c.r[4].w[0] - 7792u);
    set32(c.r[3], 0u + 25u);
    c.budget -= 5;
L_0021D4E0:
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] - 5u);
    set32(c.r[4], c.r[4].w[0] + 8u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[4], c.r[4].w[0] + 8u);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D4E0u | kUnwind; return; } goto L_0021D4E0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0021D530:
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.r[13].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[12], c.r[12].w[0] + 16272u);
    c.r[9].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[13], c.r[13].w[0] - 688u);
    set32(c.r[10], c.r[10].w[0] - 12160u);
    set32(c.r[3], c.r[3].w[0] - 1488u);
    set32(c.r[14], c.r[14].w[0] << 3);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[12], c.r[12].w[0] + c.r[14].w[0]);
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[12], c.r[11].w[0] + c.r[12].w[0]);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[12], ld32((c.r[12].w[0])));
    set32(c.r[11], c.r[8].w[0] << 3);
    set32(c.r[8], c.r[9].w[0] << 1);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[13].w[0] + c.r[8].w[0]);
    set32(c.r[12], c.r[12].w[0] + c.r[11].w[0]);
    st32((c.r[12].w[0]), c.r[8].w[0]);
    c.r[8].d[0] = ld8((c.r[4].w[0] + 1u));
    st16((c.r[12].w[0] + 4u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[9].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[12], c.r[8].w[0] << 2);
    set32(c.r[11], ld32((c.r[10].w[0])));
    set32(c.r[8], c.r[9].w[0] << 7);
    set32(c.r[10], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[8], c.r[9].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[9], ld32((c.r[9].w[0])));
    set32(c.r[8], c.r[13].w[0] + c.r[8].w[0]);
    st32((c.r[8].w[0]), c.r[10].w[0]);
    set32(c.r[12], 0u + 5u);
    c.budget -= 46;
L_0021D5E8:
    set32(c.r[8], ld32((c.r[28].w[0] - 23756u)));
    set32(c.r[11], c.r[6].w[0] + 48u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(0u));
    c.r[10].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[8], ld32((c.r[28].w[0] - 23756u)));
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[8], ld32((c.r[28].w[0] - 23756u)));
    st8((c.r[8].w[0] + 2u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[8], ld32((c.r[28].w[0] - 23756u)));
    st8((c.r[8].w[0] + 3u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[8], ld32((c.r[28].w[0] - 23756u)));
    st8((c.r[8].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[10], ld32((c.r[28].w[0] - 23756u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[8].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(19ll) ? 1ull : 0ull;
    st32((c.r[10].w[0] + 8u), c.r[11].w[0]);
    st16((c.r[6].w[0] + 146u), static_cast<std::uint16_t>(c.r[12].w[0]));
    st16((c.r[6].w[0] + 10738u), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.r[10].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[6], c.r[6].w[0] + 240u);
    set32(c.r[11], ld32((c.r[28].w[0] - 23756u)));
    set32(c.r[10], c.r[10].w[0] << 7);
    set32(c.r[10], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[10], c.r[5].w[0] + c.r[10].w[0]);
    st32((c.r[10].w[0]), c.r[11].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[10], ld32((c.r[28].w[0] - 23756u)));
    set32(c.r[10], c.r[10].w[0] + 12u);
    c.budget -= 32;
    { const bool t = c.r[8].d[0] != 0ull; st32((c.r[28].w[0] - 23756u), c.r[10].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D5E8u | kUnwind; return; } goto L_0021D5E8; } }
    c.r[6].d[0] = ld8((c.r[9].w[0]));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[9], c.r[9].w[0] + 1u);  if (t) { goto L_0021D748; } }
    set32(c.r[5], c.r[7].w[0] << 2);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    set32(c.r[3], 0u + 5u);
    set32(c.r[10], c.r[10].w[0] - 1488u);
    c.budget -= 5;
L_0021D688:
    set32(c.r[8], ld32((c.r[28].w[0] - 23756u)));
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(0u));
    c.r[11].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[8], ld32((c.r[28].w[0] - 23756u)));
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[8], ld32((c.r[28].w[0] - 23756u)));
    st8((c.r[8].w[0] + 2u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[8], ld32((c.r[28].w[0] - 23756u)));
    st8((c.r[8].w[0] + 3u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[9].w[0]));
    set32(c.r[8], ld32((c.r[28].w[0] - 23756u)));
    st8((c.r[8].w[0] + 4u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[12].d[0] = ld8((c.r[9].w[0]));
    set32(c.r[8], ld32((c.r[28].w[0] - 23756u)));
    set32(c.r[11], c.r[12].w[0] << 4);
    set32(c.r[11], c.r[11].w[0] - c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[11], c.r[4].w[0] + c.r[11].w[0]);
    set32(c.r[11], c.r[11].w[0] + 48u);
    st32((c.r[8].w[0] + 8u), c.r[11].w[0]);
    c.r[11].d[0] = ld8((c.r[9].w[0]));
    set32(c.r[8], c.r[11].w[0] << 4);
    set32(c.r[8], c.r[8].w[0] - c.r[11].w[0]);
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[8], c.r[4].w[0] + c.r[8].w[0]);
    st16((c.r[8].w[0] + 146u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[11].d[0] = ld8((c.r[9].w[0]));
    set32(c.r[8], c.r[11].w[0] << 4);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[8], c.r[8].w[0] - c.r[11].w[0]);
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[8], c.r[4].w[0] + c.r[8].w[0]);
    st16((c.r[8].w[0] + 10738u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[8].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[11], ld32((c.r[28].w[0] - 23756u)));
    set32(c.r[8], c.r[8].w[0] << 7);
    set32(c.r[8], c.r[10].w[0] + c.r[8].w[0]);
    set32(c.r[8], c.r[5].w[0] + c.r[8].w[0]);
    st32((c.r[8].w[0]), c.r[11].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[8], ld32((c.r[28].w[0] - 23756u)));
    set32(c.r[8], c.r[8].w[0] + 12u);
    c.budget -= 48;
    { const bool t = c.r[6].d[0] != 0ull; st32((c.r[28].w[0] - 23756u), c.r[8].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D688u | kUnwind; return; } goto L_0021D688; } }
L_0021D748:
    c.r[6].d[0] = ld8((c.r[9].w[0]));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[9], c.r[9].w[0] + 1u);  if (t) { goto L_0021D868; } }
    c.r[11].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    set32(c.r[3], c.r[3].w[0] - 684u);
    set32(c.r[5], c.r[5].w[0] - 1728u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[11].w[0] << 1);
    set32(c.r[10], c.r[11].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[8], c.r[5].w[0] + c.r[10].w[0]);
    c.budget -= 16;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[3].w[0]), c.r[8].w[0]);  if (t) { goto L_0021D868; } }
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
L_0021D7A0:
    set32(c.r[10], ld32((c.r[28].w[0] - 23756u)));
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(0u));
    c.r[11].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[10], ld32((c.r[28].w[0] - 23756u)));
    st8((c.r[10].w[0] + 1u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[10], ld32((c.r[28].w[0] - 23756u)));
    st8((c.r[10].w[0] + 2u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[10], ld32((c.r[28].w[0] - 23756u)));
    st8((c.r[10].w[0] + 3u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[9].w[0]));
    set32(c.r[10], ld32((c.r[28].w[0] - 23756u)));
    st8((c.r[10].w[0] + 4u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[12].d[0] = ld8((c.r[9].w[0]));
    set32(c.r[10], ld32((c.r[28].w[0] - 23756u)));
    set32(c.r[11], c.r[12].w[0] << 4);
    set32(c.r[11], c.r[11].w[0] - c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[11], c.r[4].w[0] + c.r[11].w[0]);
    set32(c.r[11], c.r[11].w[0] + 48u);
    st32((c.r[10].w[0] + 8u), c.r[11].w[0]);
    c.r[11].d[0] = ld8((c.r[9].w[0]));
    set32(c.r[10], c.r[11].w[0] << 4);
    set32(c.r[10], c.r[10].w[0] - c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 4);
    set32(c.r[10], c.r[4].w[0] + c.r[10].w[0]);
    st16((c.r[10].w[0] + 146u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[11].d[0] = ld8((c.r[9].w[0]));
    set32(c.r[10], c.r[11].w[0] << 4);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[10], c.r[10].w[0] - c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 4);
    set32(c.r[10], c.r[4].w[0] + c.r[10].w[0]);
    st16((c.r[10].w[0] + 10738u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[11].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[12], ld32((c.r[28].w[0] - 23756u)));
    set32(c.r[10], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 3);
    set32(c.r[10], c.r[5].w[0] + c.r[10].w[0]);
    set32(c.r[10], c.r[8].w[0] + c.r[10].w[0]);
    st32((c.r[10].w[0]), c.r[12].w[0]);
    set32(c.r[8], c.r[8].w[0] + 4u);
    set32(c.r[10], ld32((c.r[28].w[0] - 23756u)));
    set32(c.r[10], c.r[10].w[0] + 12u);
    c.budget -= 50;
    { const bool t = c.r[6].d[0] != 0ull; st32((c.r[28].w[0] - 23756u), c.r[10].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D7A0u | kUnwind; return; } goto L_0021D7A0; } }
L_0021D868:
    c.r[6].d[0] = ld8((c.r[9].w[0]));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[9], c.r[9].w[0] + 1u);  if (t) { goto L_0021D9F0; } }
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.r[12].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    c.r[8].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    set32(c.r[13], c.r[13].w[0] + 17168u);
    set32(c.r[12], c.r[12].w[0] - 720u);
    set32(c.r[3], c.r[3].w[0] - 680u);
    set32(c.r[5], c.r[5].w[0] - 1968u);
    set32(c.r[14], c.r[14].w[0] << 3);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[13], c.r[13].w[0] + c.r[14].w[0]);
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[11], c.r[11].w[0] + c.r[13].w[0]);
    set32(c.r[10], c.r[10].w[0] << 3);
    set32(c.r[11], ld32((c.r[11].w[0])));
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[12].w[0] + c.r[8].w[0]);
    set32(c.r[11], c.r[11].w[0] + c.r[10].w[0]);
    st32((c.r[11].w[0]), c.r[8].w[0]);
    c.r[8].d[0] = ld8((c.r[4].w[0] + 1u));
    st16((c.r[11].w[0] + 4u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[11].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[8], c.r[11].w[0] << 1);
    set32(c.r[10], c.r[11].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[8], c.r[5].w[0] + c.r[10].w[0]);
    st32((c.r[3].w[0]), c.r[8].w[0]);
    c.r[8].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[8], c.r[8].w[0] << 3);
    set32(c.r[3], c.r[12].w[0] + c.r[3].w[0]);
    set32(c.r[8], c.r[5].w[0] + c.r[8].w[0]);
    c.budget -= 43;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[3].w[0]), c.r[8].w[0]);  if (t) { goto L_0021D9F0; } }
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 5u);
    c.budget -= 2;
L_0021D928:
    set32(c.r[10], ld32((c.r[28].w[0] - 23756u)));
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(0u));
    c.r[11].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[10], ld32((c.r[28].w[0] - 23756u)));
    st8((c.r[10].w[0] + 1u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[10], ld32((c.r[28].w[0] - 23756u)));
    st8((c.r[10].w[0] + 2u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[10], ld32((c.r[28].w[0] - 23756u)));
    st8((c.r[10].w[0] + 3u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[9].w[0]));
    set32(c.r[10], ld32((c.r[28].w[0] - 23756u)));
    st8((c.r[10].w[0] + 4u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[12].d[0] = ld8((c.r[9].w[0]));
    set32(c.r[10], ld32((c.r[28].w[0] - 23756u)));
    set32(c.r[11], c.r[12].w[0] << 4);
    set32(c.r[11], c.r[11].w[0] - c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[11], c.r[4].w[0] + c.r[11].w[0]);
    set32(c.r[11], c.r[11].w[0] + 48u);
    st32((c.r[10].w[0] + 8u), c.r[11].w[0]);
    c.r[11].d[0] = ld8((c.r[9].w[0]));
    set32(c.r[10], c.r[11].w[0] << 4);
    set32(c.r[10], c.r[10].w[0] - c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 4);
    set32(c.r[10], c.r[4].w[0] + c.r[10].w[0]);
    st16((c.r[10].w[0] + 146u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[11].d[0] = ld8((c.r[9].w[0]));
    set32(c.r[10], c.r[11].w[0] << 4);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[10], c.r[10].w[0] - c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 4);
    set32(c.r[10], c.r[4].w[0] + c.r[10].w[0]);
    st16((c.r[10].w[0] + 10738u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[11].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[12], ld32((c.r[28].w[0] - 23756u)));
    set32(c.r[10], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 3);
    set32(c.r[10], c.r[5].w[0] + c.r[10].w[0]);
    set32(c.r[10], c.r[8].w[0] + c.r[10].w[0]);
    st32((c.r[10].w[0]), c.r[12].w[0]);
    set32(c.r[8], c.r[8].w[0] + 4u);
    set32(c.r[10], ld32((c.r[28].w[0] - 23756u)));
    set32(c.r[10], c.r[10].w[0] + 12u);
    c.budget -= 50;
    { const bool t = c.r[6].d[0] != 0ull; st32((c.r[28].w[0] - 23756u), c.r[10].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D928u | kUnwind; return; } goto L_0021D928; } }
L_0021D9F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021DA00:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    c.r[14].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[7], c.r[7].w[0] - 11936u);
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    set32(c.r[12], c.r[12].w[0] + 16928u);
    set32(c.r[3], c.r[3].w[0] - 688u);
    set32(c.r[11], c.r[11].w[0] + 16932u);
    set32(c.r[9], c.r[6].w[0] - 64u);
    set32(c.r[5], c.r[5].w[0] - 1488u);
    set32(c.r[6], c.r[9].w[0] << 3);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[9].w[0] << 1);
    set32(c.r[9], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[14].w[0] << 1);
    set32(c.r[14], c.r[7].w[0] + c.r[14].w[0]);
    set32(c.r[7], c.r[13].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] - c.r[13].w[0]);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[13], c.r[14].w[0] << 2);
    set32(c.r[7], c.r[12].w[0] + c.r[7].w[0]);
    set32(c.r[13], c.r[3].w[0] + c.r[13].w[0]);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[7].w[0]), c.r[13].w[0]);
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.r[13].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[7], c.r[12].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] - c.r[12].w[0]);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[7], c.r[11].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[13].w[0]));
    c.r[11].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[6], c.r[11].w[0] << 1);
    set32(c.r[7], c.r[11].w[0] << 7);
    set32(c.r[6], c.r[6].w[0] + c.r[11].w[0]);
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.r[7].w[0]);
    c.r[3].d[0] = ld8((c.r[9].w[0]));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 48;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0021DB58; } }
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
L_0021DAD0:
    set32(c.r[11], ld32((c.r[28].w[0] - 23756u)));
    set32(c.r[12], c.r[7].w[0] + 48u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[13].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[11], ld32((c.r[28].w[0] - 23756u)));
    st8((c.r[11].w[0] + 1u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[11], ld32((c.r[28].w[0] - 23756u)));
    st8((c.r[11].w[0] + 2u), static_cast<std::uint8_t>(c.r[13].w[0]));
    set32(c.r[11], ld32((c.r[28].w[0] - 23756u)));
    st8((c.r[11].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[11], ld32((c.r[28].w[0] - 23756u)));
    st8((c.r[11].w[0] + 4u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[11], ld32((c.r[28].w[0] - 23756u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[11].w[0] + 8u), c.r[12].w[0]);
    st16((c.r[7].w[0] + 146u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[7].w[0] + 10738u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[11].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[7], c.r[7].w[0] + 240u);
    set32(c.r[12], ld32((c.r[28].w[0] - 23756u)));
    set32(c.r[11], c.r[11].w[0] << 7);
    set32(c.r[11], c.r[5].w[0] + c.r[11].w[0]);
    set32(c.r[11], c.r[6].w[0] + c.r[11].w[0]);
    st32((c.r[11].w[0]), c.r[12].w[0]);
    set32(c.r[11], ld32((c.r[28].w[0] - 23756u)));
    set32(c.r[11], c.r[11].w[0] + 12u);
    st32((c.r[28].w[0] - 23756u), c.r[11].w[0]);
    c.r[11].d[0] = ld8((c.r[9].w[0]));
    c.r[11].d[0] = c.r[8].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 33;
    { const bool t = c.r[11].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021DAD0u | kUnwind; return; } goto L_0021DAD0; } }
    c.budget -= 1;
L_0021DB58:
    c.r[3].d[0] = ld8((c.r[9].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0021DC58; } }
    c.r[11].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    set32(c.r[3], c.r[3].w[0] - 684u);
    set32(c.r[5], c.r[5].w[0] - 1728u);
    set32(c.r[7], c.r[11].w[0] << 1);
    set32(c.r[8], c.r[11].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[11].w[0]);
    set32(c.r[8], c.r[8].w[0] + c.r[11].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[5].w[0] + c.r[8].w[0]);
    st32((c.r[3].w[0]), c.r[7].w[0]);
    c.r[3].d[0] = ld8((c.r[9].w[0] + 1u));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0021DC58; } }
    set32(c.r[3], c.r[10].w[0] << 4);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[10].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[8], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 7;
L_0021DBC8:
    set32(c.r[11], ld32((c.r[28].w[0] - 23756u)));
    set32(c.r[12], c.r[8].w[0] + 48u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[13].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[11], ld32((c.r[28].w[0] - 23756u)));
    st8((c.r[11].w[0] + 1u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[11], ld32((c.r[28].w[0] - 23756u)));
    st8((c.r[11].w[0] + 2u), static_cast<std::uint8_t>(c.r[13].w[0]));
    set32(c.r[11], ld32((c.r[28].w[0] - 23756u)));
    st8((c.r[11].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[11], ld32((c.r[28].w[0] - 23756u)));
    st8((c.r[11].w[0] + 4u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[11], ld32((c.r[28].w[0] - 23756u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[11].w[0] + 8u), c.r[12].w[0]);
    st16((c.r[8].w[0] + 146u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[8].w[0] + 10738u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[12].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[8], c.r[8].w[0] + 240u);
    set32(c.r[13], ld32((c.r[28].w[0] - 23756u)));
    set32(c.r[11], c.r[12].w[0] << 2);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 3);
    set32(c.r[11], c.r[5].w[0] + c.r[11].w[0]);
    set32(c.r[11], c.r[7].w[0] + c.r[11].w[0]);
    st32((c.r[11].w[0]), c.r[13].w[0]);
    set32(c.r[11], ld32((c.r[28].w[0] - 23756u)));
    set32(c.r[11], c.r[11].w[0] + 12u);
    st32((c.r[28].w[0] - 23756u), c.r[11].w[0]);
    c.r[11].d[0] = ld8((c.r[9].w[0] + 1u));
    c.r[11].d[0] = c.r[6].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 35;
    { const bool t = c.r[11].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021DBC8u | kUnwind; return; } goto L_0021DBC8; } }
    c.budget -= 1;
L_0021DC58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021DC60:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[10].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    set32(c.r[11], c.r[11].w[0] - 688u);
    set32(c.r[7], c.r[7].w[0] - 27920u);
    set32(c.r[6], c.r[6].w[0] - 27916u);
    set32(c.r[3], c.r[3].w[0] + 14384u);
    set32(c.r[5], c.r[5].w[0] - 1488u);
    set32(c.r[8], c.r[8].w[0] - 80u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[12], c.r[8].w[0] << 3);
    set32(c.r[8], c.r[10].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[12].w[0]);
    set32(c.r[8], c.r[8].w[0] + c.r[10].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[12].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[11].w[0] + c.r[8].w[0]);
    st32((c.r[7].w[0]), c.r[8].w[0]);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 1u));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[6], c.r[6].w[0] << 7);
    set32(c.r[10], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[7].w[0] << 7);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[11].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[10].w[0] + 121u));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 39;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[8], c.r[10].w[0] + 121u);  if (t) { goto L_0021DD90; } }
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 2u);
    set32(c.r[12], 0u + 5u);
    c.budget -= 5;
L_0021DD10:
    set32(c.r[10], ld32((c.r[28].w[0] - 23756u)));
    set32(c.r[11], c.r[7].w[0] + 48u);
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[13].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[10], ld32((c.r[28].w[0] - 23756u)));
    st8((c.r[10].w[0] + 1u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[10], ld32((c.r[28].w[0] - 23756u)));
    st8((c.r[10].w[0] + 2u), static_cast<std::uint8_t>(c.r[13].w[0]));
    set32(c.r[10], ld32((c.r[28].w[0] - 23756u)));
    st8((c.r[10].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[10], ld32((c.r[28].w[0] - 23756u)));
    st8((c.r[10].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[10], ld32((c.r[28].w[0] - 23756u)));
    set32(c.r[9], c.r[9].w[0] + 1u);
    st32((c.r[10].w[0] + 8u), c.r[11].w[0]);
    st16((c.r[7].w[0] + 146u), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.r[10].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[7], c.r[7].w[0] + 240u);
    set32(c.r[11], ld32((c.r[28].w[0] - 23756u)));
    set32(c.r[10], c.r[10].w[0] << 7);
    set32(c.r[10], c.r[5].w[0] + c.r[10].w[0]);
    set32(c.r[10], c.r[6].w[0] + c.r[10].w[0]);
    st32((c.r[10].w[0]), c.r[11].w[0]);
    set32(c.r[10], ld32((c.r[28].w[0] - 23756u)));
    set32(c.r[10], c.r[10].w[0] + 12u);
    st32((c.r[28].w[0] - 23756u), c.r[10].w[0]);
    c.r[10].d[0] = ld8((c.r[8].w[0]));
    c.r[10].d[0] = c.r[9].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 31;
    { const bool t = c.r[10].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021DD10u | kUnwind; return; } goto L_0021DD10; } }
    c.budget -= 1;
L_0021DD90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021DDA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], 0u - 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], 0u + 26064u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    set32(c.r[6], c.r[6].w[0] - 608u);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    mmi::pcpyld(c.r[3], c.r[0], c.r[3]);
    mmi::mult(c, 0, c.r[8].w[0], c.r[7].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[6].w[0] + c.r[7].w[0]);
    st8((c.r[16].w[0] + 26040u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8659u)));
    st8((c.r[16].w[0] + 26041u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8680u)));
    st8((c.r[16].w[0] + 26042u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st64((c.r[16].w[0] + 26032u), c.r[3].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[1].d[0] = c.r[3].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0021DE40; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8680u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], 0u + 1100u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8659u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    set32(c.r[5], c.r[5].w[0] - 7568u);
    set32(c.r[3], c.r[3].w[0] << 2);
    mmi::mult(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DE38u); st32((c.r[16].w[0] + 26044u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0069(c, 167u, depth + 1u); else { c.pc = 0x002A69C0u; return; } if (c.pc != 0x0021DE38u) [[unlikely]] return; }
L_0021DE38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021DEA8; } }
L_0021DE40:
    c.r[1].d[0] = c.r[3].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0021DE90; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8680u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    set32(c.r[3], c.r[3].w[0] - 7936u);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DE84u); st32((c.r[16].w[0] + 26044u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0069(c, 167u, depth + 1u); else { c.pc = 0x002A69C0u; return; } if (c.pc != 0x0021DE84u) [[unlikely]] return; }
L_0021DE84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021DEA8; } }
    c.budget -= 1;
L_0021DE90:
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    set32(c.r[3], c.r[3].w[0] - 8112u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[16].w[0] + 26044u), c.r[3].w[0]);
    c.budget -= 6;
L_0021DEA8:
    set32(c.r[3], ld32((c.r[16].w[0] + 26044u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 21712u)));
    st32((c.r[16].w[0] + 26048u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021DED0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01840000u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[2].d[0] | 40960ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st32((c.r[1].w[0] + 8852u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st8((c.r[29].w[0] + 159u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 158u), static_cast<std::uint8_t>(0u));
    st32((c.r[1].w[0] + 8848u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 42u)));
    c.budget -= 22;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021DF30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_0021DF38; } }
L_0021DF30:
    set32(c.r[18], 0u + 2u);
    c.budget -= 2;
L_0021DF38:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 159u);  if (t) { goto L_0021DF68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DF54u); set32(c.r[5], c.r[29].w[0] + 158u);  if (depth < kMaxDepth) unit_0071(c, 185u, depth + 1u); else { c.pc = 0x002C6D30u; return; } if (c.pc != 0x0021DF54u) [[unlikely]] return; }
L_0021DF54:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0021DF68; } }
    set32(c.r[18], 0u + 2u);
    c.budget -= 2;
L_0021DF68:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0021E128; } }
    set32(c.r[22], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[2], c.r[2].w[0] - 27856u);
    set32(c.r[21], c.r[21].w[0] + 8848u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
L_0021DFA0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u + 255u);
    set32(c.r[4], c.r[3].w[0] + c.r[22].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 120u)));
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0021E118; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0021E008; } }
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + 5024u);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8659u)));
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_0021E068; } }
L_0021E008:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_0021E040; } }
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + 5024u);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8659u)));
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_0021E068; } }
L_0021E040:
    c.r[5].d[0] = ld8((c.r[29].w[0] + 159u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 158u));
    set32(c.r[4], c.r[4].w[0] + 5024u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 10;
L_0021E068:
    c.r[4].d[0] = ld16((c.r[5].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[23].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021E108; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_0021E0B0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8660u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021E098; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E090u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 59u, depth + 1u); else { c.pc = 0x002147C0u; return; } if (c.pc != 0x0021E090u) [[unlikely]] return; }
L_0021E090:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + c.r[2].w[0]);  if (t) { goto L_0021E100; } }
L_0021E098:
    c.r[4].d[0] = ld16((c.r[5].w[0] + 14u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E0A4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 59u, depth + 1u); else { c.pc = 0x002147C0u; return; } if (c.pc != 0x0021E0A4u) [[unlikely]] return; }
L_0021E0A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + c.r[2].w[0]);  if (t) { goto L_0021E100; } }
    c.budget -= 1;
L_0021E0B0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0021E0F0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8660u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021E0D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E0D0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 59u, depth + 1u); else { c.pc = 0x002147C0u; return; } if (c.pc != 0x0021E0D0u) [[unlikely]] return; }
L_0021E0D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + c.r[2].w[0]);  if (t) { goto L_0021E100; } }
L_0021E0D8:
    c.r[4].d[0] = ld16((c.r[5].w[0] + 14u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E0E4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 59u, depth + 1u); else { c.pc = 0x002147C0u; return; } if (c.pc != 0x0021E0E4u) [[unlikely]] return; }
L_0021E0E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + c.r[2].w[0]);  if (t) { goto L_0021E100; } }
    c.budget -= 1;
L_0021E0F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E0F8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 59u, depth + 1u); else { c.pc = 0x002147C0u; return; } if (c.pc != 0x0021E0F8u) [[unlikely]] return; }
L_0021E0F8:
    set32(c.r[20], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0021E100:
    st32((c.r[21].w[0]), c.r[23].w[0]);
    c.budget -= 2;
L_0021E108:
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[21], c.r[21].w[0] + 4u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 4;
L_0021E118:
    set32(c.r[22], c.r[22].w[0] + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021DFA0u | kUnwind; return; } goto L_0021DFA0; } }
    c.budget -= 1;
L_0021E128:
    set32(c.r[4], 0u + 659u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E134u); c.r[5].sd[0] = static_cast<std::int32_t>(0x01850000u);  if (depth < kMaxDepth) unit_0045(c, 59u, depth + 1u); else { c.pc = 0x002147C0u; return; } if (c.pc != 0x0021E134u) [[unlikely]] return; }
L_0021E134:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0021E160:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x01850000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = c.r[7].d[0] | 2048ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_0021E178:
    set32(c.r[4], ld32((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(512ll) ? 1ull : 0ull;
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0] + 4u)));
    st32((c.r[6].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[4], ld32((c.r[7].w[0])));
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0] + 4u)));
    st32((c.r[6].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[4], ld32((c.r[7].w[0])));
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0] + 4u)));
    st32((c.r[6].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[4], ld32((c.r[7].w[0])));
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0] + 4u)));
    st32((c.r[6].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.budget -= 27;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E178u | kUnwind; return; } goto L_0021E178; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[9], ld32((c.r[1].w[0] + 8848u)));
    c.budget -= 4;
    { const bool t = c.r[9].d[0] == 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x00BD0000u);  if (t) { goto L_0021E210; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 9904u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x01850000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E210u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_000A(c, 57u, depth + 1u); else { c.pc = 0x00128A60u; return; } if (c.pc != 0x0021E210u) [[unlikely]] return; }
L_0021E210:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[9], ld32((c.r[1].w[0] + 8852u)));
    c.budget -= 4;
    { const bool t = c.r[9].d[0] == 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x00BD0000u);  if (t) { goto L_0021E240; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01850000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 9664u);
    set32(c.r[10], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E240u); c.r[8].d[0] = c.r[2].d[0] | 2048ull;  if (depth < kMaxDepth) unit_000A(c, 57u, depth + 1u); else { c.pc = 0x00128A60u; return; } if (c.pc != 0x0021E240u) [[unlikely]] return; }
L_0021E240:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021E250:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st8((c.r[28].w[0] - 24012u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[1].w[0] + 8832u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[1].w[0] + 8844u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[1].w[0] + 8836u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 8840u), 0u);  c.pc = t; return; }
L_0021E280:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], 0u + 21u);  if (t) { goto L_0021E448; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0021E358; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 20u);  if (t) { goto L_0021E358; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0021E340; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 19u);  if (t) { goto L_0021E340; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0021E328; } }
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 38u);  if (t) { goto L_0021E328; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0021E310; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 32u);  if (t) { goto L_0021E310; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0021E2F8; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0021E2F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021E370; } }
    c.budget -= 1;
L_0021E2F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] + 12392u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 12496u), c.r[5].w[0]);  if (t) { goto L_0021E388; } }
L_0021E310:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] + 12376u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 12520u), c.r[5].w[0]);  if (t) { goto L_0021E388; } }
L_0021E328:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] + 12432u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 12444u), c.r[5].w[0]);  if (t) { goto L_0021E388; } }
L_0021E340:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] + 12384u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 12448u), c.r[5].w[0]);  if (t) { goto L_0021E388; } }
L_0021E358:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] + 12388u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 12452u), c.r[5].w[0]);  if (t) { goto L_0021E388; } }
L_0021E370:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 12368u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.budget -= 6;
L_0021E388:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0021E448; } }
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[8], c.r[3].w[0] - 8u);  if (t) { goto L_0021E418; } }
    set32(c.r[7], c.r[5].w[0] + 4u);
    c.budget -= 2;
L_0021E3A8:
    set32(c.r[6], ld32((c.r[7].w[0])));
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.r[1].d[0] = c.r[8].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    st32((c.r[7].w[0]), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    st32((c.r[7].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    st32((c.r[7].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    st32((c.r[7].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    st32((c.r[7].w[0] + 16u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0] + 20u)));
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    st32((c.r[7].w[0] + 20u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0] + 24u)));
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    st32((c.r[7].w[0] + 24u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0] + 28u)));
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    st32((c.r[7].w[0] + 28u), c.r[6].w[0]);
    c.budget -= 28;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[7].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E3A8u | kUnwind; return; } goto L_0021E3A8; } }
L_0021E418:
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[6], c.r[4].w[0] << 2);  if (t) { goto L_0021E448; } }
    set32(c.r[7], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 1;
L_0021E428:
    set32(c.r[6], ld32((c.r[7].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    st32((c.r[7].w[0]), c.r[6].w[0]);
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E428u | kUnwind; return; } goto L_0021E428; } }
    c.budget -= 1;
L_0021E448:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021E450:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[5].w[0] - 9184u);  if (t) { goto L_0021E4F0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0021E4C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0021E480; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021E528; } }
    c.budget -= 1;
L_0021E480:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 8832u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 8836u)));
    st32((c.r[5].w[0] + 20u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 8840u)));
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 8844u)));
    st32((c.r[5].w[0] + 7308u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24012u)));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 7328u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0021E528; } }
    c.budget -= 1;
L_0021E4C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 8832u)));
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 8836u)));
    st32((c.r[5].w[0] + 28u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 8844u)));
    st32((c.r[5].w[0] + 7312u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24012u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 7329u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0021E528; } }
L_0021E4F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 8832u)));
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 8836u)));
    st32((c.r[5].w[0] + 36u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 8840u)));
    st32((c.r[5].w[0] + 40u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 8844u)));
    st32((c.r[5].w[0] + 7316u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24012u)));
    st8((c.r[5].w[0] + 7330u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 14;
L_0021E528:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021E530:
    c.r[2].d[0] = c.r[4].d[0] << 48;
    set32(c.r[3], 0u + 2624u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0021E5E8; } }
    set32(c.r[3], 0u + 2671u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0021E5C0; } }
    set32(c.r[3], 0u + 2551u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0021E598; } }
    set32(c.r[3], 0u + 2598u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0021E570; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021E610; } }
L_0021E570:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 336u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] << 48;  if (t) { goto L_0021E590; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);  if (t) { goto L_0021E610; } }
    c.budget -= 1;
L_0021E590:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2599u);  if (t) { goto L_0021E610; } }
L_0021E598:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 336u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] << 48;  if (t) { goto L_0021E5B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);  if (t) { goto L_0021E610; } }
    c.budget -= 1;
L_0021E5B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2565u);  if (t) { goto L_0021E610; } }
L_0021E5C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 336u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] << 48;  if (t) { goto L_0021E5E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);  if (t) { goto L_0021E610; } }
    c.budget -= 1;
L_0021E5E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2672u);  if (t) { goto L_0021E610; } }
L_0021E5E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 336u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] << 48;  if (t) { goto L_0021E608; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);  if (t) { goto L_0021E610; } }
    c.budget -= 1;
L_0021E608:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2638u);  if (t) { goto L_0021E610; } }
L_0021E610:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021E620:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01B70000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[2].d[0] | 34816ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01BA0000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[8].d[0] = c.r[2].d[0] | 34816ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[7], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], c.r[4].w[0] - 7600u);
    set32(c.r[5], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 68u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E664u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021E664u) [[unlikely]] return; }
L_0021E664:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 9456u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E684u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));  if (depth < kMaxDepth) unit_0047(c, 151u, depth + 1u); else { c.pc = 0x0021E530u; return; } if (c.pc != 0x0021E684u) [[unlikely]] return; }
L_0021E684:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E698u); set32(c.r[5], c.r[5].w[0] + 8832u);  if (depth < kMaxDepth) unit_0045(c, 74u, depth + 1u); else { c.pc = 0x00214940u; return; } if (c.pc != 0x0021E698u) [[unlikely]] return; }
L_0021E698:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 7088u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E6ACu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021E6ACu) [[unlikely]] return; }
L_0021E6AC:
    set32(c.r[10], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 101u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021E9E0; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01BA0000u);
    c.r[8].d[0] = c.r[2].d[0] | 43008ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01B80000u);
    set32(c.r[9], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], c.r[4].w[0] - 7600u);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = c.r[3].d[0] | 47104ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 82u)));
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 116u)));
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 72u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E6FCu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021E6FCu) [[unlikely]] return; }
L_0021E6FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 9456u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E71Cu); set32(c.r[5], c.r[5].w[0] + 8832u);  if (depth < kMaxDepth) unit_0045(c, 74u, depth + 1u); else { c.pc = 0x00214940u; return; } if (c.pc != 0x0021E71Cu) [[unlikely]] return; }
L_0021E71C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 7088u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E730u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021E730u) [[unlikely]] return; }
L_0021E730:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 41u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021E750; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 42u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021E838; } }
    c.budget -= 1;
L_0021E750:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 69u)));
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x01B90000u);  if (t) { goto L_0021E7E0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[6].d[0] = c.r[2].d[0] | 22528ull;
    set32(c.r[4], c.r[4].w[0] - 7600u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01BA0000u);
    set32(c.r[5], 0u + 3u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E78Cu); c.r[8].d[0] = c.r[2].d[0] | 63488ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021E78Cu) [[unlikely]] return; }
L_0021E78C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 9590u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E7B0u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0047(c, 151u, depth + 1u); else { c.pc = 0x0021E530u; return; } if (c.pc != 0x0021E7B0u) [[unlikely]] return; }
L_0021E7B0:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E7C4u); set32(c.r[5], c.r[5].w[0] + 8832u);  if (depth < kMaxDepth) unit_0045(c, 74u, depth + 1u); else { c.pc = 0x00214940u; return; } if (c.pc != 0x0021E7C4u) [[unlikely]] return; }
L_0021E7C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 7088u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E7D8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021E7D8u) [[unlikely]] return; }
L_0021E7D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021EA78; } }
L_0021E7E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01B90000u);
    c.r[6].d[0] = c.r[2].d[0] | 22528ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01BA0000u);
    set32(c.r[4], c.r[4].w[0] - 7600u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E804u); c.r[8].d[0] = c.r[2].d[0] | 63488ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021E804u) [[unlikely]] return; }
L_0021E804:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 9592u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E818u); set32(c.r[5], c.r[5].w[0] + 8832u);  if (depth < kMaxDepth) unit_0045(c, 74u, depth + 1u); else { c.pc = 0x00214940u; return; } if (c.pc != 0x0021E818u) [[unlikely]] return; }
L_0021E818:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 7088u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E82Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021E82Cu) [[unlikely]] return; }
L_0021E82C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021EA78; } }
    c.budget -= 1;
L_0021E838:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 191u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0021E910; } }
    set32(c.r[5], 0u + 3u);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 68u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01B90000u);
    set32(c.r[4], c.r[4].w[0] - 7600u);
    c.r[6].d[0] = c.r[3].d[0] | 22528ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01BA0000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E880u); c.r[8].d[0] = c.r[2].d[0] | 63488ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021E880u) [[unlikely]] return; }
L_0021E880:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);  if (t) { goto L_0021E8B0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 9592u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E8A4u); set32(c.r[5], c.r[5].w[0] + 8832u);  if (depth < kMaxDepth) unit_0045(c, 74u, depth + 1u); else { c.pc = 0x00214940u; return; } if (c.pc != 0x0021E8A4u) [[unlikely]] return; }
L_0021E8A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021E8F0; } }
    c.budget -= 1;
L_0021E8B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 9590u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 191u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E8DCu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));  if (depth < kMaxDepth) unit_0047(c, 151u, depth + 1u); else { c.pc = 0x0021E530u; return; } if (c.pc != 0x0021E8DCu) [[unlikely]] return; }
L_0021E8DC:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E8F0u); set32(c.r[5], c.r[5].w[0] + 8832u);  if (depth < kMaxDepth) unit_0045(c, 74u, depth + 1u); else { c.pc = 0x00214940u; return; } if (c.pc != 0x0021E8F0u) [[unlikely]] return; }
L_0021E8F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[4], c.r[4].w[0] - 7088u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E904u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021E904u) [[unlikely]] return; }
L_0021E904:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021EA78; } }
    c.budget -= 1;
L_0021E910:
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 69u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x01B90000u);  if (t) { goto L_0021E988; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[6].d[0] = c.r[2].d[0] | 22528ull;
    set32(c.r[4], c.r[4].w[0] - 7600u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01BA0000u);
    set32(c.r[5], 0u + 3u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E93Cu); c.r[8].d[0] = c.r[2].d[0] | 63488ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021E93Cu) [[unlikely]] return; }
L_0021E93C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 9456u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E958u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0047(c, 151u, depth + 1u); else { c.pc = 0x0021E530u; return; } if (c.pc != 0x0021E958u) [[unlikely]] return; }
L_0021E958:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E96Cu); set32(c.r[5], c.r[5].w[0] + 8832u);  if (depth < kMaxDepth) unit_0045(c, 74u, depth + 1u); else { c.pc = 0x00214940u; return; } if (c.pc != 0x0021E96Cu) [[unlikely]] return; }
L_0021E96C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 7088u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E980u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021E980u) [[unlikely]] return; }
L_0021E980:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021EA78; } }
L_0021E988:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01B90000u);
    c.r[6].d[0] = c.r[2].d[0] | 22528ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01BA0000u);
    set32(c.r[4], c.r[4].w[0] - 7600u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E9ACu); c.r[8].d[0] = c.r[2].d[0] | 63488ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021E9ACu) [[unlikely]] return; }
L_0021E9AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 9592u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E9C0u); set32(c.r[5], c.r[5].w[0] + 8832u);  if (depth < kMaxDepth) unit_0045(c, 74u, depth + 1u); else { c.pc = 0x00214940u; return; } if (c.pc != 0x0021E9C0u) [[unlikely]] return; }
L_0021E9C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 7088u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E9D4u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021E9D4u) [[unlikely]] return; }
L_0021E9D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021EA78; } }
    c.budget -= 1;
L_0021E9E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01B80000u);
    c.r[6].d[0] = c.r[2].d[0] | 47104ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01BA0000u);
    set32(c.r[4], c.r[4].w[0] - 7600u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 47u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EA04u); c.r[8].d[0] = c.r[2].d[0] | 43008ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021EA04u) [[unlikely]] return; }
L_0021EA04:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 9550u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EA18u); set32(c.r[5], c.r[5].w[0] + 8832u);  if (depth < kMaxDepth) unit_0045(c, 74u, depth + 1u); else { c.pc = 0x00214940u; return; } if (c.pc != 0x0021EA18u) [[unlikely]] return; }
L_0021EA18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 7088u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EA2Cu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021EA2Cu) [[unlikely]] return; }
L_0021EA2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01B90000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[6].d[0] = c.r[2].d[0] | 22528ull;
    set32(c.r[4], c.r[4].w[0] - 7600u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01BA0000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EA50u); c.r[8].d[0] = c.r[2].d[0] | 63488ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021EA50u) [[unlikely]] return; }
L_0021EA50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 9592u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EA64u); set32(c.r[5], c.r[5].w[0] + 8832u);  if (depth < kMaxDepth) unit_0045(c, 74u, depth + 1u); else { c.pc = 0x00214940u; return; } if (c.pc != 0x0021EA64u) [[unlikely]] return; }
L_0021EA64:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 7088u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EA78u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021EA78u) [[unlikely]] return; }
L_0021EA78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021EA90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[17], c.r[17].w[0] - 6992u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[16], c.r[16].w[0] - 9184u);  if (t) { goto L_0021EAD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EAC8u);  if (depth < kMaxDepth) unit_0047(c, 209u, depth + 1u); else { c.pc = 0x0021EE10u; return; } if (c.pc != 0x0021EAC8u) [[unlikely]] return; }
L_0021EAC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021EC40; } }
L_0021EAD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12368u);
    c.budget -= 4;
L_0021EAE0:
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[3].d[0] = c.r[5].sd[0] < 77ll ? 1ull : 0ull;
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021EAE0u | kUnwind; return; } goto L_0021EAE0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 12368u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), 0u);
    st32((c.r[3].w[0] + 4u), 0u);
    st32((c.r[3].w[0] + 8u), 0u);
    st32((c.r[3].w[0] + 12u), 0u);
    st32((c.r[3].w[0] + 16u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);  if (t) { goto L_0021EB78; } }
    set32(c.r[2], 0u + 15744u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[4], c.r[16].w[0] + 4864u);
    st16((c.r[1].w[0] + 17480u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[16].w[0] + 20u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[9], ld32((c.r[16].w[0])));
    set32(c.r[7], c.r[16].w[0] + 64u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EB6Cu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 83u, depth + 1u); else { c.pc = 0x00129040u; return; } if (c.pc != 0x0021EB6Cu) [[unlikely]] return; }
L_0021EB6C:
    set32(c.r[5], ld32((c.r[16].w[0] + 7308u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EB78u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7328u)));  if (depth < kMaxDepth) unit_0047(c, 147u, depth + 1u); else { c.pc = 0x0021E280u; return; } if (c.pc != 0x0021EB78u) [[unlikely]] return; }
L_0021EB78:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);  if (t) { goto L_0021EBC0; } }
    set32(c.r[2], 0u + 15744u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[4], c.r[16].w[0] + 4868u);
    st16((c.r[1].w[0] + 17480u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[16].w[0] + 28u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[9], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[7], c.r[16].w[0] + 1024u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EBB0u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 83u, depth + 1u); else { c.pc = 0x00129040u; return; } if (c.pc != 0x0021EBB0u) [[unlikely]] return; }
L_0021EBB0:
    set32(c.r[5], ld32((c.r[16].w[0] + 7312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EBBCu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7329u)));  if (depth < kMaxDepth) unit_0047(c, 147u, depth + 1u); else { c.pc = 0x0021E280u; return; } if (c.pc != 0x0021EBBCu) [[unlikely]] return; }
L_0021EBBC:
    c.budget -= 1;
L_0021EBC0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);  if (t) { goto L_0021EBF8; } }
    set32(c.r[2], 0u + 15744u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[4], c.r[16].w[0] + 4864u);
    st16((c.r[1].w[0] + 17480u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[16].w[0] + 24u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[9], ld32((c.r[16].w[0])));
    set32(c.r[7], c.r[16].w[0] + 544u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EBF8u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 83u, depth + 1u); else { c.pc = 0x00129040u; return; } if (c.pc != 0x0021EBF8u) [[unlikely]] return; }
L_0021EBF8:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);  if (t) { goto L_0021EC40; } }
    set32(c.r[2], 0u + 15744u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[4], c.r[16].w[0] + 4872u);
    st16((c.r[1].w[0] + 17480u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[16].w[0] + 40u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[9], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[7], c.r[16].w[0] + 2464u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EC30u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 83u, depth + 1u); else { c.pc = 0x00129040u; return; } if (c.pc != 0x0021EC30u) [[unlikely]] return; }
L_0021EC30:
    set32(c.r[5], ld32((c.r[16].w[0] + 7316u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EC3Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7330u)));  if (depth < kMaxDepth) unit_0047(c, 147u, depth + 1u); else { c.pc = 0x0021E280u; return; } if (c.pc != 0x0021EC3Cu) [[unlikely]] return; }
L_0021EC3C:
    c.budget -= 1;
L_0021EC40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021EC60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 68u)));
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 72u)));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 69u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EC90u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 201u, depth + 1u); else { c.pc = 0x002C7130u; return; } if (c.pc != 0x0021EC90u) [[unlikely]] return; }
L_0021EC90:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021ECB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021ECA0u);  if (depth < kMaxDepth) unit_0072(c, 41u, depth + 1u); else { c.pc = 0x002C8930u; return; } if (c.pc != 0x0021ECA0u) [[unlikely]] return; }
L_0021ECA0:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 13408u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (t) { goto L_0021ECC0; } }
L_0021ECB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 13408u)));
    c.budget -= 2;
L_0021ECC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01B70000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01BA0000u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 7600u);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = c.r[3].d[0] | 34816ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021ECE4u); c.r[8].d[0] = c.r[2].d[0] | 34816ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021ECE4u) [[unlikely]] return; }
L_0021ECE4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021ECF4u); set32(c.r[5], c.r[5].w[0] + 8832u);  if (depth < kMaxDepth) unit_0045(c, 74u, depth + 1u); else { c.pc = 0x00214940u; return; } if (c.pc != 0x0021ECF4u) [[unlikely]] return; }
L_0021ECF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 7088u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021ED08u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021ED08u) [[unlikely]] return; }
L_0021ED08:
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(47ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0021ED18; } }
    set32(c.r[17], 0u + 47u);
    c.budget -= 1;
L_0021ED18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01B80000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[6].d[0] = c.r[2].d[0] | 47104ull;
    set32(c.r[4], c.r[4].w[0] - 7600u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01BA0000u);
    set32(c.r[5], 0u + 3u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021ED3Cu); c.r[8].d[0] = c.r[2].d[0] | 43008ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021ED3Cu) [[unlikely]] return; }
L_0021ED3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 9456u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021ED5Cu); set32(c.r[5], c.r[5].w[0] + 8832u);  if (depth < kMaxDepth) unit_0045(c, 74u, depth + 1u); else { c.pc = 0x00214940u; return; } if (c.pc != 0x0021ED5Cu) [[unlikely]] return; }
L_0021ED5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 7088u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021ED70u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021ED70u) [[unlikely]] return; }
L_0021ED70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021ED78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 201u, depth + 1u); else { c.pc = 0x002C7130u; return; } if (c.pc != 0x0021ED78u) [[unlikely]] return; }
L_0021ED78:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021EDA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021ED88u);  if (depth < kMaxDepth) unit_0072(c, 41u, depth + 1u); else { c.pc = 0x002C8930u; return; } if (c.pc != 0x0021ED88u) [[unlikely]] return; }
L_0021ED88:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] + 13410u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (t) { goto L_0021EDA8; } }
L_0021EDA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 13410u)));
    c.budget -= 2;
L_0021EDA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01B90000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01BA0000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 7600u);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = c.r[3].d[0] | 22528ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EDCCu); c.r[8].d[0] = c.r[2].d[0] | 63488ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021EDCCu) [[unlikely]] return; }
L_0021EDCC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EDDCu); set32(c.r[5], c.r[5].w[0] + 8832u);  if (depth < kMaxDepth) unit_0045(c, 74u, depth + 1u); else { c.pc = 0x00214940u; return; } if (c.pc != 0x0021EDDCu) [[unlikely]] return; }
L_0021EDDC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 7088u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EDF0u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021EDF0u) [[unlikely]] return; }
L_0021EDF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0021EE10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] + 12368u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[17], c.r[17].w[0] - 6992u);
    set32(c.r[16], c.r[16].w[0] - 9184u);
    c.budget -= 12;
L_0021EE40:
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[3].d[0] = c.r[5].sd[0] < 77ll ? 1ull : 0ull;
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021EE40u | kUnwind; return; } goto L_0021EE40; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 12368u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), 0u);
    st32((c.r[3].w[0] + 4u), 0u);
    st32((c.r[3].w[0] + 8u), 0u);
    st32((c.r[3].w[0] + 12u), 0u);
    st32((c.r[3].w[0] + 16u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);  if (t) { goto L_0021EED8; } }
    set32(c.r[2], 0u + 15744u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[4], c.r[16].w[0] + 4864u);
    st16((c.r[1].w[0] + 17480u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[16].w[0] + 20u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[9], ld32((c.r[16].w[0])));
    set32(c.r[7], c.r[16].w[0] + 64u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EECCu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 83u, depth + 1u); else { c.pc = 0x00129040u; return; } if (c.pc != 0x0021EECCu) [[unlikely]] return; }
L_0021EECC:
    set32(c.r[5], ld32((c.r[16].w[0] + 7308u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EED8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7328u)));  if (depth < kMaxDepth) unit_0047(c, 147u, depth + 1u); else { c.pc = 0x0021E280u; return; } if (c.pc != 0x0021EED8u) [[unlikely]] return; }
L_0021EED8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);  if (t) { goto L_0021EF20; } }
    set32(c.r[2], 0u + 15744u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[4], c.r[16].w[0] + 4868u);
    st16((c.r[1].w[0] + 17480u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[16].w[0] + 28u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[9], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[7], c.r[16].w[0] + 1024u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EF10u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 83u, depth + 1u); else { c.pc = 0x00129040u; return; } if (c.pc != 0x0021EF10u) [[unlikely]] return; }
L_0021EF10:
    set32(c.r[5], ld32((c.r[16].w[0] + 7312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EF1Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7329u)));  if (depth < kMaxDepth) unit_0047(c, 147u, depth + 1u); else { c.pc = 0x0021E280u; return; } if (c.pc != 0x0021EF1Cu) [[unlikely]] return; }
L_0021EF1C:
    c.budget -= 1;
L_0021EF20:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);  if (t) { goto L_0021EF58; } }
    set32(c.r[2], 0u + 15744u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[4], c.r[16].w[0] + 4864u);
    st16((c.r[1].w[0] + 17480u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[16].w[0] + 24u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[9], ld32((c.r[16].w[0])));
    set32(c.r[7], c.r[16].w[0] + 544u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EF58u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 83u, depth + 1u); else { c.pc = 0x00129040u; return; } if (c.pc != 0x0021EF58u) [[unlikely]] return; }
L_0021EF58:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);  if (t) { goto L_0021EFA0; } }
    set32(c.r[2], 0u + 15744u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[4], c.r[16].w[0] + 4872u);
    st16((c.r[1].w[0] + 17480u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[16].w[0] + 40u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[9], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[7], c.r[16].w[0] + 2464u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EF90u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 83u, depth + 1u); else { c.pc = 0x00129040u; return; } if (c.pc != 0x0021EF90u) [[unlikely]] return; }
L_0021EF90:
    set32(c.r[5], ld32((c.r[16].w[0] + 7316u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EF9Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7330u)));  if (depth < kMaxDepth) unit_0047(c, 147u, depth + 1u); else { c.pc = 0x0021E280u; return; } if (c.pc != 0x0021EF9Cu) [[unlikely]] return; }
L_0021EF9C:
    c.budget -= 1;
L_0021EFA0:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);  if (t) { goto L_0021EFD8; } }
    set32(c.r[2], 0u + 15744u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[4], c.r[16].w[0] + 4872u);
    st16((c.r[1].w[0] + 17480u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[16].w[0] + 36u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[9], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[7], c.r[16].w[0] + 1984u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EFD8u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 83u, depth + 1u); else { c.pc = 0x00129040u; return; } if (c.pc != 0x0021EFD8u) [[unlikely]] return; }
L_0021EFD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021EFF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[10], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 11856u);
    set32(c.r[9], ld32((c.r[1].w[0] + 8832u)));
    set32(c.r[8], c.r[3].w[0] + c.r[10].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[6], c.r[4].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + 11968u);
    set32(c.r[7], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + 11972u);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[5], c.r[5].w[0] + 12192u);
    set32(c.r[3], c.r[3].w[0] + 12304u);
    st32((c.r[8].w[0]), c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 8836u)));
    set32(c.r[5], c.r[5].w[0] + c.r[10].w[0]);
    st32((c.r[7].w[0]), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 8840u)));
    st32((c.r[6].w[0]), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 8844u)));
    st32((c.r[5].w[0]), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24012u)));
    c.budget -= 32;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_0021F070:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[6].d[0] << 56;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.r[3].d[0] = c.r[18].sd[0] < 85ll ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0021F120; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[16], c.r[18].w[0] - 85u);
    set32(c.r[2], c.r[2].w[0] + 22640u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] - 7600u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], 0u + 3u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x016C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x014A0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F0E0u); c.r[6].d[0] = c.r[2].d[0] | 49152ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021F0E0u) [[unlikely]] return; }
L_0021F0E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 9792u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F100u); set32(c.r[5], c.r[5].w[0] + 8832u);  if (depth < kMaxDepth) unit_0045(c, 74u, depth + 1u); else { c.pc = 0x00214940u; return; } if (c.pc != 0x0021F100u) [[unlikely]] return; }
L_0021F100:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 4112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F114u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021F114u) [[unlikely]] return; }
L_0021F114:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F2C8; } }
    c.budget -= 1;
L_0021F120:
    c.r[3].d[0] = c.r[18].sd[0] < 47ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[18].sd[0] < 64ll ? 1ull : 0ull;  if (t) { goto L_0021F1F0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x014A0000u);  if (t) { goto L_0021F1F0; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.r[17].sd[0] = static_cast<std::int32_t>(0x016C0000u);
    c.r[16].d[0] = c.r[3].d[0] | 49152ull;
    c.budget -= 3;
L_0021F140:
    c.r[20].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    c.budget -= 3;
    { const bool t = c.r[20].sd[0] < 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);  if (t) { goto L_0021F1E8; } }
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] - 7600u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F164u); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021F164u) [[unlikely]] return; }
L_0021F164:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[18].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);  if (t) { goto L_0021F190; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[20].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 9456u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F188u); set32(c.r[5], c.r[5].w[0] + 8832u);  if (depth < kMaxDepth) unit_0045(c, 74u, depth + 1u); else { c.pc = 0x00214940u; return; } if (c.pc != 0x0021F188u) [[unlikely]] return; }
L_0021F188:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F1B0; } }
L_0021F190:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[20].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 9456u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 134u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F1B0u); set32(c.r[5], c.r[5].w[0] + 8832u);  if (depth < kMaxDepth) unit_0045(c, 74u, depth + 1u); else { c.pc = 0x00214940u; return; } if (c.pc != 0x0021F1B0u) [[unlikely]] return; }
L_0021F1B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[4], c.r[4].w[0] - 4112u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F1C4u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021F1C4u) [[unlikely]] return; }
L_0021F1C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[4].d[0] = c.r[3].d[0] | 12288ull;
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 28ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 8192u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021F140u | kUnwind; return; } goto L_0021F140; } }
    c.budget -= 1;
L_0021F1E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F2C8; } }
L_0021F1F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x014A0000u);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[20].sd[0] = static_cast<std::int32_t>(0x016C0000u);
    c.r[19].d[0] = c.r[3].d[0] | 49152ull;
    c.budget -= 4;
L_0021F200:
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] < 0; c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0])));  if (t) { goto L_0021F2C8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] - 7600u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F228u); c.r[8].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021F228u) [[unlikely]] return; }
L_0021F228:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[18].d[0]; set32(c.r[3], c.r[16].w[0] << 1);  if (t) { goto L_0021F260; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 13728u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F258u); set32(c.r[5], c.r[5].w[0] + 8832u);  if (depth < kMaxDepth) unit_0045(c, 74u, depth + 1u); else { c.pc = 0x00214940u; return; } if (c.pc != 0x0021F258u) [[unlikely]] return; }
L_0021F258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F290; } }
L_0021F260:
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 14016u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F28Cu); set32(c.r[5], c.r[5].w[0] + 8832u);  if (depth < kMaxDepth) unit_0045(c, 74u, depth + 1u); else { c.pc = 0x00214940u; return; } if (c.pc != 0x0021F28Cu) [[unlikely]] return; }
L_0021F28C:
    c.budget -= 1;
L_0021F290:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[4], c.r[4].w[0] - 4112u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F2A4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021F2A4u) [[unlikely]] return; }
L_0021F2A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 12288ull;
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 8192u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021F200u | kUnwind; return; } goto L_0021F200; } }
L_0021F2C8:
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
L_0021F300:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[20], c.r[20].w[0] + 11856u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[19], c.r[19].w[0] - 6992u);
    set32(c.r[4], c.r[4].w[0] + 12368u);
    c.budget -= 18;
L_0021F348:
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[3].d[0] = c.r[6].sd[0] < 77ll ? 1ull : 0ull;
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021F348u | kUnwind; return; } goto L_0021F348; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].d[0] = c.r[5].d[0] << 56;
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 12368u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    st32((c.r[4].w[0]), 0u);
    c.r[1].d[0] = c.r[3].sd[0] < 47ll ? 1ull : 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[4].w[0] + 16u), 0u);  if (t) { goto L_0021F438; } }
    c.r[21].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[20].d[0] + 0ull;
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
L_0021F3C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);  if (t) { goto L_0021F480; } }
    set32(c.r[3], 0u + 15744u);
    set32(c.r[1], c.r[19].w[0] + c.r[1].w[0]);
    st16((c.r[1].w[0] + 17480u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[9], ld32((c.r[18].w[0])));
    c.budget -= 6;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_0021F410; } }
    set32(c.r[8], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[4], c.r[18].w[0] + 476u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[16].w[0] + 1072u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F400u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 83u, depth + 1u); else { c.pc = 0x00129040u; return; } if (c.pc != 0x0021F400u) [[unlikely]] return; }
L_0021F400:
    set32(c.r[2], c.r[20].w[0] + c.r[21].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 448u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F410u); set32(c.r[5], ld32((c.r[18].w[0] + 336u)));  if (depth < kMaxDepth) unit_0047(c, 147u, depth + 1u); else { c.pc = 0x0021E280u; return; } if (c.pc != 0x0021F410u) [[unlikely]] return; }
L_0021F410:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[3].d[0] = c.r[21].sd[0] < 28ll ? 1ull : 0ull;
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 960u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021F3C0u | kUnwind; return; } goto L_0021F3C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F480; } }
    c.budget -= 1;
L_0021F438:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[3], 0u + 15744u);
    set32(c.r[1], c.r[19].w[0] + c.r[1].w[0]);
    st16((c.r[1].w[0] + 17480u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[9], ld32((c.r[20].w[0])));
    c.budget -= 7;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_0021F480; } }
    set32(c.r[8], ld32((c.r[20].w[0] + 112u)));
    set32(c.r[4], c.r[20].w[0] + 476u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[20].w[0] + 592u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F470u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 83u, depth + 1u); else { c.pc = 0x00129040u; return; } if (c.pc != 0x0021F470u) [[unlikely]] return; }
L_0021F470:
    set32(c.r[5], ld32((c.r[20].w[0] + 336u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F47Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 448u)));  if (depth < kMaxDepth) unit_0047(c, 147u, depth + 1u); else { c.pc = 0x0021E280u; return; } if (c.pc != 0x0021F47Cu) [[unlikely]] return; }
L_0021F47C:
    c.budget -= 1;
L_0021F480:
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
L_0021F4B0:
    set32(c.r[5], ld32((c.r[28].w[0] - 23752u)));
    set32(c.r[3], 0u - 16u);
    set32(c.r[5], c.r[5].w[0] + 15u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[28].w[0] - 24000u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24000u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_0021F4D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01560000u);
    c.r[3].d[0] = c.r[3].d[0] | 24576ull;
    st32((c.r[28].w[0] - 24000u), c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 23752u), c.r[3].w[0]);  c.pc = t; return; }
L_0021F4F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01560000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[3].d[0] = c.r[2].d[0] | 24576ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] - 2864u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F520u); st32((c.r[2].w[0] + 4u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021F520u) [[unlikely]] return; }
L_0021F520:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], 0u + 2299u);
    set32(c.r[2], 0u + 2422u);
    set32(c.r[5], c.r[28].w[0] - 24000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F53Cu); if (c.r[3].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];  if (depth < kMaxDepth) unit_0045(c, 69u, depth + 1u); else { c.pc = 0x002148C0u; return; } if (c.pc != 0x0021F53Cu) [[unlikely]] return; }
L_0021F53C:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021F540:
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[6].w[0] + c.r[17].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 47u)));
    c.r[1].d[0] = c.r[5].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 53u)));  if (t) { goto L_0021F650; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[8], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 6432u);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[7].d[0] = c.r[4].d[0] << 56;  if (t) { goto L_0021F650; } }
    set32(c.r[3], 0u - 1u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[4], c.r[7].w[0] << 2);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[16].w[0] + c.r[4].w[0]);  if (t) { goto L_0021F650; } }
    c.r[1].d[0] = c.r[5].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0021F618; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_0021F5D8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[2], c.r[2].w[0] + 18064u);
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] - 2896u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F5C4u); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021F5C4u) [[unlikely]] return; }
L_0021F5C4:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F5D0u); set32(c.r[5], c.r[28].w[0] - 24000u);  if (depth < kMaxDepth) unit_0045(c, 69u, depth + 1u); else { c.pc = 0x002148C0u; return; } if (c.pc != 0x0021F5D0u) [[unlikely]] return; }
L_0021F5D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F650; } }
L_0021F5D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] + 18288u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] - 2896u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F600u); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021F600u) [[unlikely]] return; }
L_0021F600:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F60Cu); set32(c.r[5], c.r[28].w[0] - 24000u);  if (depth < kMaxDepth) unit_0045(c, 69u, depth + 1u); else { c.pc = 0x002148C0u; return; } if (c.pc != 0x0021F60Cu) [[unlikely]] return; }
L_0021F60C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021F650; } }
    c.budget -= 1;
L_0021F618:
    c.r[1].d[0] = c.r[5].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] - 64u);  if (t) { goto L_0021F650; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[2], c.r[2].w[0] + 18736u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - 2896u);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F644u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021F644u) [[unlikely]] return; }
L_0021F644:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F650u); set32(c.r[5], c.r[28].w[0] - 24000u);  if (depth < kMaxDepth) unit_0045(c, 69u, depth + 1u); else { c.pc = 0x002148C0u; return; } if (c.pc != 0x0021F650u) [[unlikely]] return; }
L_0021F650:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021F540u | kUnwind; return; } goto L_0021F540; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021F680:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9232u);
    c.budget -= 4;
L_0021F690:
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[5], c.r[5].w[0] + 6u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[3].d[0] = c.r[5].sd[0] < 7ll ? 1ull : 0ull;
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021F690u | kUnwind; return; } goto L_0021F690; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 9232u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01850000u);
    st32((c.r[4].w[0]), 0u);
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st32((c.r[1].w[0] + 9232u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01CD0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].d[0] = c.r[3].d[0] | 8192ull;
    st32((c.r[1].w[0] + 9252u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01920000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[1].w[0] + 9272u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x019A0000u);
    set32(c.r[3], c.r[3].w[0] + 9024u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 27;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[1].w[0] + 4100u), c.r[3].w[0]);  if (t) { goto L_0021F738; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01A20000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 21568ull;
    st32((c.r[1].w[0] + 9276u), c.r[3].w[0]);
    c.budget -= 5;
L_0021F738:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01030000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 9280u), c.r[3].w[0]);  c.pc = t; return; }
L_0021F750:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[10], c.r[10].w[0] + 9232u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] + 14304u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 20304u);
    c.budget -= 8;
L_0021F770:
    set32(c.r[7], ld32((c.r[8].w[0])));
    set32(c.r[3], ld32((c.r[10].w[0])));
    set32(c.r[6], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 7);
    set32(c.r[7], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 5);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);  if (t) { goto L_0021F7A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[6].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_0021F7C0; } }
    c.budget -= 1;
L_0021F7A8:
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[10].w[0])));
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[10].w[0] + 20u)));
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 6;
L_0021F7C0:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[9].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[8], c.r[8].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021F770u | kUnwind; return; } goto L_0021F770; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021F7E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F7F0u);  if (depth < kMaxDepth) unit_0047(c, 279u, depth + 1u); else { c.pc = 0x0021FD10u; return; } if (c.pc != 0x0021F7F0u) [[unlikely]] return; }
L_0021F7F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F7F8u);  if (depth < kMaxDepth) unit_0047(c, 253u, depth + 1u); else { c.pc = 0x0021F680u; return; } if (c.pc != 0x0021F7F8u) [[unlikely]] return; }
L_0021F7F8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] + 8944u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F820u); set32(c.r[5], c.r[5].w[0] + 9232u);  if (depth < kMaxDepth) unit_0045(c, 74u, depth + 1u); else { c.pc = 0x00214940u; return; } if (c.pc != 0x0021F820u) [[unlikely]] return; }
L_0021F820:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F830u); set32(c.r[4], c.r[4].w[0] - 2224u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021F830u) [[unlikely]] return; }
L_0021F830:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00140000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 21488u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F844u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021F844u) [[unlikely]] return; }
L_0021F844:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021F850:
    set32(c.r[29], c.r[29].w[0] - 3888u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[17], c.r[17].w[0] + 20304u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F874u); set32(c.r[16], c.r[16].w[0] - 6992u);  if (depth < kMaxDepth) unit_0047(c, 279u, depth + 1u); else { c.pc = 0x0021FD10u; return; } if (c.pc != 0x0021F874u) [[unlikely]] return; }
L_0021F874:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[3], 0u + 14336u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    st16((c.r[1].w[0] + 17480u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 20304u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0021F968; } }
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0021F898:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[4], c.r[4].w[0] + 8u);
    st32((c.r[1].w[0] + 20144u), 0u);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(52ll) ? 1ull : 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 20148u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 20152u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 20156u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 20160u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 20164u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 20168u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 20172u), 0u);
    c.budget -= 26;
L_0021F900:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021F898u | kUnwind; return; } goto L_0021F898; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    c.r[1].d[0] = c.r[1].d[0] | 20144ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[10], 0u + 1u);
    c.r[1].d[0] = c.r[1].d[0] | 20144ull;
    set32(c.r[2], c.r[2].w[0] + c.r[1].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[2].w[0] + 4u), 0u);
    c.r[1].d[0] = c.r[1].d[0] | 4752ull;
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[6], c.r[17].w[0] + c.r[1].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[8], ld32((c.r[17].w[0] + 4u)));
    c.r[1].d[0] = c.r[1].d[0] | 4784ull;
    set32(c.r[9], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F964u); set32(c.r[7], c.r[17].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_000A(c, 83u, depth + 1u); else { c.pc = 0x00129040u; return; } if (c.pc != 0x0021F964u) [[unlikely]] return; }
L_0021F964:
    c.budget -= 1;
L_0021F968:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[3], 0u + 14336u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[9], c.r[9].w[0] - 24848u);
    st16((c.r[1].w[0] + 17480u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0021FA60; } }
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 1;
L_0021F990:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    set32(c.r[3], c.r[3].w[0] + 8u);
    st32((c.r[1].w[0] + 20144u), 0u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(52ll) ? 1ull : 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 20148u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 20152u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 20156u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 20160u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 20164u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 20168u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 20172u), 0u);
    c.budget -= 28;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021F990u | kUnwind; return; } goto L_0021F990; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[1].d[0] = c.r[1].d[0] | 20144ull;
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[4], c.r[9].w[0] + c.r[1].w[0]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 20144ull;
    set32(c.r[2], c.r[2].w[0] + c.r[1].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[2].w[0] + 4u), 0u);
    c.r[1].d[0] = c.r[1].d[0] | 4752ull;
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[6], c.r[9].w[0] + c.r[1].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[8], ld32((c.r[9].w[0] + 4u)));
    c.r[1].d[0] = c.r[1].d[0] | 4784ull;
    set32(c.r[7], c.r[9].w[0] + c.r[1].w[0]);
    set32(c.r[9], ld32((c.r[9].w[0] + 8u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FA5Cu); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_000A(c, 83u, depth + 1u); else { c.pc = 0x00129040u; return; } if (c.pc != 0x0021FA5Cu) [[unlikely]] return; }
L_0021FA5C:
    c.budget -= 1;
L_0021FA60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[3], 0u + 15488u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[9], c.r[9].w[0] - 4464u);
    st16((c.r[1].w[0] + 17480u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0021FB80; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0021FAA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0021FAA8; } }
    c.budget -= 1;
L_0021FAA0:
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_0021FAA8:
    c.r[3].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 2;
L_0021FAB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    set32(c.r[3], c.r[3].w[0] + 8u);
    st32((c.r[1].w[0] + 20144u), 0u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(52ll) ? 1ull : 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 20148u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 20152u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 20156u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 20160u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 20164u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 20168u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 20172u), 0u);
    c.budget -= 28;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021FAB0u | kUnwind; return; } goto L_0021FAB0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[1].d[0] = c.r[1].d[0] | 20144ull;
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[4], c.r[9].w[0] + c.r[1].w[0]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 20144ull;
    set32(c.r[2], c.r[2].w[0] + c.r[1].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[2].w[0] + 4u), 0u);
    c.r[1].d[0] = c.r[1].d[0] | 4752ull;
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[6], c.r[9].w[0] + c.r[1].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[8], ld32((c.r[9].w[0] + 4u)));
    c.r[1].d[0] = c.r[1].d[0] | 4784ull;
    set32(c.r[7], c.r[9].w[0] + c.r[1].w[0]);
    set32(c.r[9], ld32((c.r[9].w[0] + 8u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FB7Cu); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_000A(c, 83u, depth + 1u); else { c.pc = 0x00129040u; return; } if (c.pc != 0x0021FB7Cu) [[unlikely]] return; }
L_0021FB7C:
    c.budget -= 1;
L_0021FB80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00880000u);
    set32(c.r[3], 0u + 15488u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[9], c.r[9].w[0] + 15920u);
    st16((c.r[1].w[0] + 17480u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0021FC78; } }
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 1;
L_0021FBA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    set32(c.r[3], c.r[3].w[0] + 8u);
    st32((c.r[1].w[0] + 20144u), 0u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(52ll) ? 1ull : 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 20148u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 20152u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 20156u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 20160u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 20164u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 20168u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[1].w[0] + 20172u), 0u);
    c.budget -= 28;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021FBA8u | kUnwind; return; } goto L_0021FBA8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_0021FC1C:
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[1].d[0] = c.r[1].d[0] | 20144ull;
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[4], c.r[9].w[0] + c.r[1].w[0]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 20144ull;
    set32(c.r[2], c.r[2].w[0] + c.r[1].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[2].w[0] + 4u), 0u);
    c.r[1].d[0] = c.r[1].d[0] | 4752ull;
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[6], c.r[9].w[0] + c.r[1].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[8], ld32((c.r[9].w[0] + 4u)));
    c.r[1].d[0] = c.r[1].d[0] | 4784ull;
    set32(c.r[7], c.r[9].w[0] + c.r[1].w[0]);
    set32(c.r[9], ld32((c.r[9].w[0] + 8u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FC74u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_000A(c, 83u, depth + 1u); else { c.pc = 0x00129040u; return; } if (c.pc != 0x0021FC74u) [[unlikely]] return; }
L_0021FC74:
    c.budget -= 1;
L_0021FC78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[3], 0u + 14336u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x008A0000u);
    c.budget -= 4;
L_0021FC88:
    st16((c.r[1].w[0] + 17480u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[16], c.r[16].w[0] - 29232u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0021FCE0; } }
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.r[1].d[0] = c.r[1].d[0] | 20144ull;
    set32(c.r[8], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[9], ld32((c.r[16].w[0] + 8u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.r[1].d[0] = c.r[1].d[0] | 4752ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[6], c.r[16].w[0] + c.r[1].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 4784ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FCD4u); set32(c.r[7], c.r[16].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_000A(c, 83u, depth + 1u); else { c.pc = 0x00129040u; return; } if (c.pc != 0x0021FCD4u) [[unlikely]] return; }
L_0021FCD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FCDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 281u, depth + 1u); else { c.pc = 0x0021FDB0u; return; } if (c.pc != 0x0021FCDCu) [[unlikely]] return; }
L_0021FCDC:
    c.budget -= 1;
L_0021FCE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 9272u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0021FCF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FCF8u);  if (depth < kMaxDepth) unit_0011(c, 192u, depth + 1u); else { c.pc = 0x001463A0u; return; } if (c.pc != 0x0021FCF8u) [[unlikely]] return; }
L_0021FCF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 3888u);  c.pc = t; return; }
L_0021FD10:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    set32(c.r[3], c.r[3].w[0] - 27712u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] - 8064u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), 0u);
    st32((c.r[1].w[0] - 7796u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    st32((c.r[28].w[0] - 23760u), 0u);
    st32((c.r[1].w[0] - 7800u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    st32((c.r[28].w[0] - 23764u), 0u);
    st32((c.r[1].w[0] - 7804u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    st32((c.r[28].w[0] - 23768u), 0u);
    st32((c.r[1].w[0] - 7808u), 0u);
    c.budget -= 22;
L_0021FD68:
    st32((c.r[5].w[0]), 0u);
    st32((c.r[5].w[0] + 4u), 0u);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 8u), 0u);
    c.r[3].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(64ll) ? 1ull : 0ull;
    st32((c.r[5].w[0] + 12u), 0u);
    st32((c.r[5].w[0] + 16u), 0u);
    st32((c.r[5].w[0] + 20u), 0u);
    st32((c.r[5].w[0] + 24u), 0u);
    st32((c.r[5].w[0] + 28u), 0u);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021FD68u | kUnwind; return; } goto L_0021FD68; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    set32(c.r[3], c.r[3].w[0] - 8848u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 23772u), c.r[3].w[0]);  c.pc = t; return; }
L_0021FDB0:
    set32(c.r[7], ld32((c.r[28].w[0] - 23784u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    set32(c.r[6], c.r[6].w[0] - 27712u);
    set32(c.r[8], c.r[8].w[0] - 7808u);
    set32(c.r[3], c.r[3].w[0] - 8064u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[6].w[0]), c.r[8].w[0]);
    st32((c.r[1].w[0] - 7796u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4752u)));
    c.r[1].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0021FE70; } }
    c.r[10].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[9], 0u + 18u);
    set32(c.r[8], 0u + 2u);
    c.budget -= 3;
L_0021FE08:
    set32(c.r[6], ld32((c.r[28].w[0] - 23772u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 4784ull;
    set32(c.r[7], c.r[10].w[0] + c.r[1].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[10], c.r[10].w[0] + 240u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23772u)));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 23772u)));
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], ld32((c.r[28].w[0] - 23772u)));
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 23772u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0] + 5u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 23772u)));
    st32((c.r[6].w[0] + 8u), c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23772u)));
    set32(c.r[6], c.r[6].w[0] + 12u);
    st32((c.r[28].w[0] - 23772u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4752u)));
    c.r[6].d[0] = c.r[5].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 26;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021FE08u | kUnwind; return; } goto L_0021FE08; } }
L_0021FE70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021FE80:
    set32(c.r[3], c.r[4].w[0] << 3);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 7712u);
    set32(c.r[3], ld32((c.r[1].w[0] - 2064u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[1].w[0] + 9080u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 2060u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[1].w[0] + 9084u), c.r[3].w[0]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  c.pc = t; return; }
L_0021FECC:
    c.budget -= 1;
L_0021FED0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x017A0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    c.r[4].d[0] = c.r[3].d[0] | 49152ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01810000u);
    st32((c.r[1].w[0] - 2064u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] - 2060u), c.r[3].w[0]);  c.pc = t; return; }
L_0021FF00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_0021FF30; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0021FF38; } }
L_0021FF30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[28].w[0] - 23888u)));  if (t) { goto L_0021FF50; } }
L_0021FF38:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_0021FF50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[4], c.r[4].w[0] + 16032u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FF68u); set32(c.r[16], c.r[16].w[0] - 7712u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021FF68u) [[unlikely]] return; }
L_0021FF68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FF78u); set32(c.r[4], c.r[4].w[0] - 304u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021FF78u) [[unlikely]] return; }
L_0021FF78:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0021FF80:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 1;
L_0021FF84:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0021FF88:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_0021FFE0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[4].w[0] - 384u);
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 4;
L_0021FFA0:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FFB0u); st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0021FFB0u) [[unlikely]] return; }
L_0021FFB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] + 6192u);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 5;
L_0021FFC4:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FFD4u); set32(c.r[5], c.r[5].w[0] + 9080u);  if (depth < kMaxDepth) unit_0045(c, 74u, depth + 1u); else { c.pc = 0x00214940u; return; } if (c.pc != 0x0021FFD4u) [[unlikely]] return; }
L_0021FFD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021FFE8; } }
    goto L_0021FFDC;
L_0021FFD8:
    c.budget -= 1;
L_0021FFDC:
    c.budget -= 1;
L_0021FFE0:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_0021FFE8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0021FFEC:
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 2368u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021FF80u | kUnwind; return; } goto L_0021FF80; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
    [[clang::musttail]] return unit_0048(c, 1u, depth);
}

}
