#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B4[4096] = {
    1, 2, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 6, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 10,
    0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    14, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 20, 0, 0,
    21, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 27, 0, 28, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 32, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 38, 0,
    0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 46, 0, 47, 0, 0, 0, 48, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 51, 0, 52, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0,
    0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 66, 0,
    67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 71, 0, 72, 0, 0,
    0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0,
    0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0,
    0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0,
    117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0,
    0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 164, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 169, 0, 170, 0, 0, 0, 0,
    171, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0,
    0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 181, 0, 182, 0, 0, 0, 0, 183, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 187,
    0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0,
    194, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 199, 0, 0, 0, 200, 0, 0, 201, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 206, 0, 207, 0, 0, 0, 0,
    208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 217, 0, 0,
    218, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0,
    0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 229, 0, 0, 230, 0, 231, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00B4(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003D0000;
    case 2u: goto L_003D0004;
    case 3u: goto L_003D0008;
    case 4u: goto L_003D0020;
    case 5u: goto L_003D0034;
    case 6u: goto L_003D003C;
    case 7u: goto L_003D0040;
    case 8u: goto L_003D0058;
    case 9u: goto L_003D0078;
    case 10u: goto L_003D007C;
    case 11u: goto L_003D0088;
    case 12u: goto L_003D00B4;
    case 13u: goto L_003D00C0;
    case 14u: goto L_003D0100;
    case 15u: goto L_003D0104;
    case 16u: goto L_003D0198;
    case 17u: goto L_003D01A0;
    case 18u: goto L_003D01E4;
    case 19u: goto L_003D01F0;
    case 20u: goto L_003D01F4;
    case 21u: goto L_003D0200;
    case 22u: goto L_003D020C;
    case 23u: goto L_003D0250;
    case 24u: goto L_003D02F8;
    case 25u: goto L_003D033C;
    case 26u: goto L_003D034C;
    case 27u: goto L_003D0358;
    case 28u: goto L_003D0360;
    case 29u: goto L_003D0370;
    case 30u: goto L_003D0410;
    case 31u: goto L_003D0420;
    case 32u: goto L_003D042C;
    case 33u: goto L_003D0434;
    case 34u: goto L_003D0448;
    case 35u: goto L_003D0458;
    case 36u: goto L_003D05DC;
    case 37u: goto L_003D05EC;
    case 38u: goto L_003D05F8;
    case 39u: goto L_003D0604;
    case 40u: goto L_003D0610;
    case 41u: goto L_003D0638;
    case 42u: goto L_003D0650;
    case 43u: goto L_003D06F8;
    case 44u: goto L_003D073C;
    case 45u: goto L_003D074C;
    case 46u: goto L_003D0758;
    case 47u: goto L_003D0760;
    case 48u: goto L_003D0770;
    case 49u: goto L_003D0828;
    case 50u: goto L_003D0838;
    case 51u: goto L_003D0844;
    case 52u: goto L_003D084C;
    case 53u: goto L_003D0860;
    case 54u: goto L_003D086C;
    case 55u: goto L_003D0974;
    case 56u: goto L_003D09D8;
    case 57u: goto L_003D09F4;
    case 58u: goto L_003D0A04;
    case 59u: goto L_003D0A10;
    case 60u: goto L_003D0A1C;
    case 61u: goto L_003D0A28;
    case 62u: goto L_003D0A70;
    case 63u: goto L_003D0B18;
    case 64u: goto L_003D0B5C;
    case 65u: goto L_003D0B6C;
    case 66u: goto L_003D0B78;
    case 67u: goto L_003D0B80;
    case 68u: goto L_003D0B90;
    case 69u: goto L_003D0C50;
    case 70u: goto L_003D0C60;
    case 71u: goto L_003D0C6C;
    case 72u: goto L_003D0C74;
    case 73u: goto L_003D0C88;
    case 74u: goto L_003D0C94;
    case 75u: goto L_003D0E1C;
    case 76u: goto L_003D0E2C;
    case 77u: goto L_003D0E38;
    case 78u: goto L_003D0E44;
    case 79u: goto L_003D0E50;
    case 80u: goto L_003D0E90;
    case 81u: goto L_003D0EAC;
    case 82u: goto L_003D0F30;
    case 83u: goto L_003D1028;
    case 84u: goto L_003D1048;
    case 85u: goto L_003D1060;
    case 86u: goto L_003D1074;
    case 87u: goto L_003D1088;
    case 88u: goto L_003D10FC;
    case 89u: goto L_003D1130;
    case 90u: goto L_003D1150;
    case 91u: goto L_003D11E0;
    case 92u: goto L_003D1228;
    case 93u: goto L_003D1234;
    case 94u: goto L_003D1260;
    case 95u: goto L_003D128C;
    case 96u: goto L_003D129C;
    case 97u: goto L_003D132C;
    case 98u: goto L_003D14F8;
    case 99u: goto L_003D1504;
    case 100u: goto L_003D1590;
    case 101u: goto L_003D159C;
    case 102u: goto L_003D1700;
    case 103u: goto L_003D1724;
    case 104u: goto L_003D1728;
    case 105u: goto L_003D1738;
    case 106u: goto L_003D17E8;
    case 107u: goto L_003D1858;
    case 108u: goto L_003D1898;
    case 109u: goto L_003D18C4;
    case 110u: goto L_003D18D0;
    case 111u: goto L_003D18FC;
    case 112u: goto L_003D1930;
    case 113u: goto L_003D1948;
    case 114u: goto L_003D1990;
    case 115u: goto L_003D19C4;
    case 116u: goto L_003D19E0;
    case 117u: goto L_003D1A00;
    case 118u: goto L_003D1A38;
    case 119u: goto L_003D1A88;
    case 120u: goto L_003D1A98;
    case 121u: goto L_003D1AAC;
    case 122u: goto L_003D1AE8;
    case 123u: goto L_003D1B30;
    case 124u: goto L_003D1B90;
    case 125u: goto L_003D1BE0;
    case 126u: goto L_003D1C20;
    case 127u: goto L_003D1C3C;
    case 128u: goto L_003D1C78;
    case 129u: goto L_003D1C84;
    case 130u: goto L_003D1CB0;
    case 131u: goto L_003D1CD8;
    case 132u: goto L_003D1D3C;
    case 133u: goto L_003D1D9C;
    case 134u: goto L_003D1DFC;
    case 135u: goto L_003D1E60;
    case 136u: goto L_003D1EC0;
    case 137u: goto L_003D1F20;
    case 138u: goto L_003D1F80;
    case 139u: goto L_003D1FDC;
    case 140u: goto L_003D203C;
    case 141u: goto L_003D2098;
    case 142u: goto L_003D20F0;
    case 143u: goto L_003D2148;
    case 144u: goto L_003D21A0;
    case 145u: goto L_003D21F8;
    case 146u: goto L_003D2250;
    case 147u: goto L_003D22A8;
    case 148u: goto L_003D2300;
    case 149u: goto L_003D2354;
    case 150u: goto L_003D23AC;
    case 151u: goto L_003D2404;
    case 152u: goto L_003D245C;
    case 153u: goto L_003D24C0;
    case 154u: goto L_003D252C;
    case 155u: goto L_003D2550;
    case 156u: goto L_003D2620;
    case 157u: goto L_003D264C;
    case 158u: goto L_003D2680;
    case 159u: goto L_003D26AC;
    case 160u: goto L_003D26C0;
    case 161u: goto L_003D27B0;
    case 162u: goto L_003D2838;
    case 163u: goto L_003D2848;
    case 164u: goto L_003D2854;
    case 165u: goto L_003D285C;
    case 166u: goto L_003D286C;
    case 167u: goto L_003D2948;
    case 168u: goto L_003D2958;
    case 169u: goto L_003D2964;
    case 170u: goto L_003D296C;
    case 171u: goto L_003D2980;
    case 172u: goto L_003D298C;
    case 173u: goto L_003D2BE8;
    case 174u: goto L_003D2BF8;
    case 175u: goto L_003D2C0C;
    case 176u: goto L_003D2C18;
    case 177u: goto L_003D2C70;
    case 178u: goto L_003D2DB0;
    case 179u: goto L_003D2E40;
    case 180u: goto L_003D2E50;
    case 181u: goto L_003D2E5C;
    case 182u: goto L_003D2E64;
    case 183u: goto L_003D2E78;
    case 184u: goto L_003D2F48;
    case 185u: goto L_003D3060;
    case 186u: goto L_003D3070;
    case 187u: goto L_003D307C;
    case 188u: goto L_003D3084;
    case 189u: goto L_003D30A0;
    case 190u: goto L_003D30AC;
    case 191u: goto L_003D30CC;
    case 192u: goto L_003D30DC;
    case 193u: goto L_003D32F0;
    case 194u: goto L_003D3300;
    case 195u: goto L_003D3314;
    case 196u: goto L_003D3320;
    case 197u: goto L_003D3380;
    case 198u: goto L_003D3480;
    case 199u: goto L_003D3508;
    case 200u: goto L_003D3518;
    case 201u: goto L_003D3524;
    case 202u: goto L_003D352C;
    case 203u: goto L_003D353C;
    case 204u: goto L_003D3648;
    case 205u: goto L_003D3658;
    case 206u: goto L_003D3664;
    case 207u: goto L_003D366C;
    case 208u: goto L_003D3680;
    case 209u: goto L_003D368C;
    case 210u: goto L_003D38A8;
    case 211u: goto L_003D38B8;
    case 212u: goto L_003D38C4;
    case 213u: goto L_003D3960;
    case 214u: goto L_003D3A40;
    case 215u: goto L_003D3ADC;
    case 216u: goto L_003D3AE4;
    case 217u: goto L_003D3AF4;
    case 218u: goto L_003D3B00;
    case 219u: goto L_003D3B08;
    case 220u: goto L_003D3B1C;
    case 221u: goto L_003D3B2C;
    case 222u: goto L_003D3CE8;
    case 223u: goto L_003D3CF8;
    case 224u: goto L_003D3D04;
    case 225u: goto L_003D3DA0;
    case 226u: goto L_003D3E80;
    case 227u: goto L_003D3F1C;
    case 228u: goto L_003D3F24;
    case 229u: goto L_003D3F34;
    case 230u: goto L_003D3F40;
    case 231u: goto L_003D3F48;
    case 232u: goto L_003D3F5C;
    case 233u: goto L_003D3F68;
    default: bad_entry(c, 0x003D0000u); return;
    }
L_003D0000:
    set32(c.r[18], 0u + 8u);
    c.budget -= 1;
L_003D0004:
    set32(c.r[19], c.r[19].w[0] + 28080u);
    c.budget -= 1;
L_003D0008:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[3] = ld32((c.r[19].w[0]));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    c.budget -= 6;
L_003D0020:
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0034u); st32((c.r[4].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D0034u) [[unlikely]] return; }
L_003D0034:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0040u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001C(c, 205u, depth + 1u); else { c.pc = 0x001732B0u; return; } if (c.pc != 0x003D0040u) [[unlikely]] return; }
    goto L_003D0040;
L_003D003C:
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_003D0040:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D0008u | kUnwind; return; } goto L_003D0008; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D0060; } }
L_003D0058:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 109u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003D0060:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 110u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D00D8; } }
    set32(c.r[2], 0u + 16u);
    set32(c.r[4], c.r[17].w[0] + 1984u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D007Cu); st8((c.r[16].w[0] + 110u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003D007Cu) [[unlikely]] return; }
    goto L_003D007C;
L_003D0078:
    st8((c.r[16].w[0] + 110u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_003D007C:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[16], 0u + 12u);
    set32(c.r[18], c.r[18].w[0] + 28144u);
    c.budget -= 3;
L_003D0088:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[3] = ld32((c.r[18].w[0]));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D00B4u); st32((c.r[4].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D00B4u) [[unlikely]] return; }
L_003D00B4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D00C0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001C(c, 205u, depth + 1u); else { c.pc = 0x001732B0u; return; } if (c.pc != 0x003D00C0u) [[unlikely]] return; }
L_003D00C0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D0088u | kUnwind; return; } goto L_003D0088; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D00E0; } }
L_003D00D8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 110u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003D00E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003D0100:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.budget -= 1;
L_003D0104:
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 320u)));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_003D0218; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003D01C0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003D0140; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D0238; } }
L_003D0140:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D01B0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 120u);  if (t) { goto L_003D0168; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 88u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003D0170; } }
    c.budget -= 1;
L_003D0168:
    set32(c.r[2], 0u + 600u);
    st16((c.r[16].w[0] + 88u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003D0170:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 4096u);
    c.r[7].d[0] = 0ull | 61440ull;
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0198u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003D0198u) [[unlikely]] return; }
L_003D0198:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D0238; } }
L_003D01A0:
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D0238; } }
L_003D01B0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 88u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003D0238; } }
    c.budget -= 1;
L_003D01C0:
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], 0u + 30u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003D01E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D01E4u); set32(c.r[5], ld32((c.r[16].w[0] + 116u)));  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EF900u; return; } if (c.pc != 0x003D01E4u) [[unlikely]] return; }
L_003D01E4:
    c.budget -= 1;
L_003D01E8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D01F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003D01F4u) [[unlikely]] return; }
    goto L_003D01F4;
L_003D01F0:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D01F4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0200u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003D0200u) [[unlikely]] return; }
L_003D0200:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D020Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003D020Cu) [[unlikely]] return; }
L_003D020C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D0238; } }
    c.budget -= 1;
L_003D0218:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D0230; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D0238; } }
    c.budget -= 1;
L_003D0230:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003D0238:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D0250:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 321u)));
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[17], c.r[18].w[0] + 304u);  if (t) { goto L_003D0618; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_003D05B8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003D04F8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003D02A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D0638; } }
L_003D02A0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 90u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D04E8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 120u);  if (t) { goto L_003D02C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 90u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003D02D0; } }
    c.budget -= 1;
L_003D02C8:
    set32(c.r[2], 0u + 600u);
    st16((c.r[17].w[0] + 90u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003D02D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 14336u);
    c.r[6].d[0] = 0ull | 32768ull;
    c.r[7].d[0] = 0ull | 32769ull;
    c.r[8].d[0] = 0ull | 51200ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D02F8u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003D02F8u) [[unlikely]] return; }
L_003D02F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D0638; } }
    st32((c.r[17].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[18].w[0] + 2048u);
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D033Cu); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003D033Cu) [[unlikely]] return; }
L_003D033C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D034Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003D034Cu) [[unlikely]] return; }
L_003D034C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0358u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D0358u) [[unlikely]] return; }
L_003D0358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0360u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003D0360u) [[unlikely]] return; }
L_003D0360:
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.f[13] = ld32((c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0370u); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D0370u) [[unlikely]] return; }
L_003D0370:
    set32(c.r[3], c.r[2].w[0] + 32767u);
    c.r[1].d[0] = 0ull | 32769ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 5072u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 44u));
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D03B8; } }
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 16384u);  if (t) { goto L_003D03B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_003D03D8; } }
L_003D03B8:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = 0ull | 49153ull;  if (t) { goto L_003D03D8; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull | 49152ull;  if (t) { goto L_003D03D8; } }
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 1;
L_003D03D8:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 5072u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 128u);  if (t) { goto L_003D0400; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_003D0408; } }
L_003D0400:
    set32(c.r[2], 0u + 128u);
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 2;
L_003D0408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0410u); set32(c.r[4], c.r[18].w[0] + 2112u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003D0410u) [[unlikely]] return; }
L_003D0410:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0420u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003D0420u) [[unlikely]] return; }
L_003D0420:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D042Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D042Cu) [[unlikely]] return; }
L_003D042C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0434u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003D0434u) [[unlikely]] return; }
L_003D0434:
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0448u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D0448u) [[unlikely]] return; }
L_003D0448:
    c.f[13] = c.f[0];
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0458u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D0458u) [[unlikely]] return; }
L_003D0458:
    set32(c.r[3], ld32((c.r[18].w[0] + 5088u)));
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[4].sd[0] < 3640ll ? 1ull : 0ull;  if (t) { goto L_003D0498; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D0498; } }
    set32(c.r[3], 0u + 3640u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 28u), c.r[3].w[0]);  if (t) { goto L_003D04B0; } }
    c.budget -= 1;
L_003D0498:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D04B0; } }
    st32((c.r[17].w[0] + 28u), 0u);
    c.budget -= 2;
L_003D04B0:
    set32(c.r[4], ld32((c.r[18].w[0] + 5088u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 64u);  if (t) { goto L_003D04D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_003D0638; } }
L_003D04D8:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_003D0638; } }
    c.budget -= 1;
L_003D04E8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 90u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003D0638; } }
    c.budget -= 1;
L_003D04F8:
    set32(c.r[6], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5072u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003D0528; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D0538; } }
    c.budget -= 1;
L_003D0528:
    st32((c.r[18].w[0] + 5072u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 76u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003D0550; } }
L_003D0538:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5072u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5072u));
    st32((c.r[18].w[0] + 5072u), c.r[3].w[0]);
    c.budget -= 6;
L_003D0550:
    set32(c.r[6], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5088u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65504ull;  if (t) { goto L_003D0578; } }
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D0588; } }
L_003D0578:
    st32((c.r[18].w[0] + 5088u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 60u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003D05A0; } }
L_003D0588:
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5088u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5088u));
    st32((c.r[18].w[0] + 5088u), c.r[3].w[0]);
    c.budget -= 6;
L_003D05A0:
    c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003D0638; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D0638; } }
    c.budget -= 1;
L_003D05B8:
    st8((c.r[17].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 30u);
    st8((c.r[17].w[0] + 21u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003D05E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D05DCu); set32(c.r[5], ld32((c.r[17].w[0] + 120u)));  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EF900u; return; } if (c.pc != 0x003D05DCu) [[unlikely]] return; }
L_003D05DC:
    c.budget -= 1;
L_003D05E0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D05ECu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003D05ECu) [[unlikely]] return; }
L_003D05EC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D05F8u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003D05F8u) [[unlikely]] return; }
L_003D05F8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0604u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003D0604u) [[unlikely]] return; }
L_003D0604:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0610u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003D0610u) [[unlikely]] return; }
L_003D0610:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D0638; } }
L_003D0618:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 21u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D0630; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 17u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D0638; } }
    c.budget -= 1;
L_003D0630:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[17].w[0] + 21u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003D0638:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003D0650:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 322u)));
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[17], c.r[18].w[0] + 304u);  if (t) { goto L_003D0A30; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_003D09D0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003D0910; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003D06A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D0A50; } }
L_003D06A0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D0900; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 90u);  if (t) { goto L_003D06C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 92u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003D06D0; } }
    c.budget -= 1;
L_003D06C8:
    set32(c.r[2], 0u + 600u);
    st16((c.r[17].w[0] + 92u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003D06D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull | 34816ull;
    c.r[7].d[0] = 0ull | 63488ull;
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D06F8u); set32(c.r[10], 0u + 5u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003D06F8u) [[unlikely]] return; }
L_003D06F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D0A50; } }
    st32((c.r[17].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[18].w[0] + 2304u);
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D073Cu); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003D073Cu) [[unlikely]] return; }
L_003D073C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D074Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003D074Cu) [[unlikely]] return; }
L_003D074C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0758u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D0758u) [[unlikely]] return; }
L_003D0758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0760u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003D0760u) [[unlikely]] return; }
L_003D0760:
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.f[13] = ld32((c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0770u); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D0770u) [[unlikely]] return; }
L_003D0770:
    set32(c.r[3], ld32((c.r[18].w[0] + 5120u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[2].d[0] = 0ull | 49152ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 48u));
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D07A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 48u), 0u);  if (t) { goto L_003D07C0; } }
L_003D07A8:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D07C0; } }
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    c.budget -= 2;
L_003D07C0:
    set32(c.r[4], ld32((c.r[18].w[0] + 5120u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003D0800; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], 0u + 128u);  if (t) { goto L_003D07F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_003D0820; } }
    c.budget -= 1;
L_003D07F0:
    set32(c.r[2], 0u - 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_003D0820; } }
    c.budget -= 1;
L_003D0800:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u - 128u);  if (t) { goto L_003D0818; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_003D0820; } }
L_003D0818:
    set32(c.r[2], 0u + 128u);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 2;
L_003D0820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0828u); set32(c.r[4], c.r[18].w[0] + 2368u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003D0828u) [[unlikely]] return; }
L_003D0828:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0838u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003D0838u) [[unlikely]] return; }
L_003D0838:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0844u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D0844u) [[unlikely]] return; }
L_003D0844:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D084Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003D084Cu) [[unlikely]] return; }
L_003D084C:
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0860u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D0860u) [[unlikely]] return; }
L_003D0860:
    c.f[12] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D086Cu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D086Cu) [[unlikely]] return; }
L_003D086C:
    set32(c.r[3], ld32((c.r[18].w[0] + 5136u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[17].w[0] + 32u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 32u));
    st32((c.r[17].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D08A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 32u), 0u);  if (t) { goto L_003D08C8; } }
    c.budget -= 1;
L_003D08A8:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 61897ull;  if (t) { goto L_003D08C8; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 61896ull;  if (t) { goto L_003D08C8; } }
    st32((c.r[17].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 1;
L_003D08C8:
    set32(c.r[4], ld32((c.r[18].w[0] + 5136u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 64u);  if (t) { goto L_003D08F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 64u), c.r[3].w[0]);  if (t) { goto L_003D0A50; } }
L_003D08F0:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 64u), c.r[3].w[0]);  if (t) { goto L_003D0A50; } }
    c.budget -= 1;
L_003D0900:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 92u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003D0A50; } }
    c.budget -= 1;
L_003D0910:
    set32(c.r[6], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5120u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003D0940; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D0950; } }
    c.budget -= 1;
L_003D0940:
    st32((c.r[18].w[0] + 5120u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 80u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003D0968; } }
L_003D0950:
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5120u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5120u));
    st32((c.r[18].w[0] + 5120u), c.r[3].w[0]);
    c.budget -= 6;
L_003D0968:
    set32(c.r[6], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5136u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.budget -= 3;
L_003D0974:
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65504ull;  if (t) { goto L_003D0990; } }
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D09A0; } }
L_003D0990:
    st32((c.r[18].w[0] + 5136u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 64u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003D09B8; } }
L_003D09A0:
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5136u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5136u));
    st32((c.r[18].w[0] + 5136u), c.r[3].w[0]);
    c.budget -= 6;
L_003D09B8:
    c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003D0A50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D0A50; } }
    c.budget -= 1;
L_003D09D0:
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 30u);
    c.budget -= 2;
L_003D09D8:
    st8((c.r[17].w[0] + 22u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003D09F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D09F4u); set32(c.r[5], ld32((c.r[17].w[0] + 124u)));  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EF900u; return; } if (c.pc != 0x003D09F4u) [[unlikely]] return; }
L_003D09F4:
    c.budget -= 1;
L_003D09F8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0A04u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003D0A04u) [[unlikely]] return; }
L_003D0A04:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0A10u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003D0A10u) [[unlikely]] return; }
L_003D0A10:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0A1Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003D0A1Cu) [[unlikely]] return; }
L_003D0A1C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0A28u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003D0A28u) [[unlikely]] return; }
L_003D0A28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D0A50; } }
L_003D0A30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 22u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D0A48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D0A50; } }
    c.budget -= 1;
L_003D0A48:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[17].w[0] + 22u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003D0A50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003D0A70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 323u)));
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[17], c.r[18].w[0] + 304u);  if (t) { goto L_003D0E58; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_003D0DF8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003D0D38; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003D0AC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D0E78; } }
L_003D0AC0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 94u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D0D28; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 90u);  if (t) { goto L_003D0AE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 94u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003D0AF0; } }
    c.budget -= 1;
L_003D0AE8:
    set32(c.r[2], 0u + 600u);
    st16((c.r[17].w[0] + 94u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003D0AF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 2048u);
    set32(c.r[7], 0u + 30720u);
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0B18u); set32(c.r[10], 0u + 3u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003D0B18u) [[unlikely]] return; }
L_003D0B18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D0E78; } }
    st32((c.r[17].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 19u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[18].w[0] + 2176u);
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0B5Cu); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003D0B5Cu) [[unlikely]] return; }
L_003D0B5C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0B6Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003D0B6Cu) [[unlikely]] return; }
L_003D0B6C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0B78u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D0B78u) [[unlikely]] return; }
L_003D0B78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0B80u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003D0B80u) [[unlikely]] return; }
L_003D0B80:
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.f[13] = ld32((c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0B90u); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D0B90u) [[unlikely]] return; }
L_003D0B90:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    set32(c.r[2], ld32((c.r[18].w[0] + 5096u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 52u));
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.r[1].d[0] = c.r[2].sd[0] < 16385ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D0BC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_003D0BE8; } }
    c.budget -= 1;
L_003D0BC8:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 16385ll ? 1ull : 0ull;  if (t) { goto L_003D0BE8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].d[0] = 0ull | 32768ull;  if (t) { goto L_003D0BE8; } }
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 2;
L_003D0BE8:
    set32(c.r[4], ld32((c.r[18].w[0] + 5096u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003D0C28; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], 0u - 128u);  if (t) { goto L_003D0C18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_003D0C48; } }
    c.budget -= 1;
L_003D0C18:
    set32(c.r[2], 0u + 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_003D0C48; } }
    c.budget -= 1;
L_003D0C28:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u - 128u);  if (t) { goto L_003D0C40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_003D0C48; } }
L_003D0C40:
    set32(c.r[2], 0u + 128u);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 2;
L_003D0C48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0C50u); set32(c.r[4], c.r[18].w[0] + 2240u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003D0C50u) [[unlikely]] return; }
L_003D0C50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0C60u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003D0C60u) [[unlikely]] return; }
L_003D0C60:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0C6Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D0C6Cu) [[unlikely]] return; }
L_003D0C6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0C74u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003D0C74u) [[unlikely]] return; }
L_003D0C74:
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0C88u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D0C88u) [[unlikely]] return; }
L_003D0C88:
    c.f[12] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0C94u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D0C94u) [[unlikely]] return; }
L_003D0C94:
    set32(c.r[3], ld32((c.r[18].w[0] + 5112u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[17].w[0] + 36u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 36u));
    st32((c.r[17].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D0CD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 36u), 0u);  if (t) { goto L_003D0CF0; } }
    c.budget -= 1;
L_003D0CD0:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 61897ull;  if (t) { goto L_003D0CF0; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 61896ull;  if (t) { goto L_003D0CF0; } }
    st32((c.r[17].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 1;
L_003D0CF0:
    set32(c.r[4], ld32((c.r[18].w[0] + 5112u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 64u);  if (t) { goto L_003D0D18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_003D0E78; } }
L_003D0D18:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_003D0E78; } }
    c.budget -= 1;
L_003D0D28:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 94u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003D0E78; } }
    c.budget -= 1;
L_003D0D38:
    set32(c.r[6], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5096u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003D0D68; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D0D78; } }
    c.budget -= 1;
L_003D0D68:
    st32((c.r[18].w[0] + 5096u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 84u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003D0D90; } }
L_003D0D78:
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5096u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5096u));
    st32((c.r[18].w[0] + 5096u), c.r[3].w[0]);
    c.budget -= 6;
L_003D0D90:
    set32(c.r[6], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5112u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65504ull;  if (t) { goto L_003D0DB8; } }
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D0DC8; } }
L_003D0DB8:
    st32((c.r[18].w[0] + 5112u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 68u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003D0DE0; } }
L_003D0DC8:
    set32(c.r[3], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5112u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5112u));
    st32((c.r[18].w[0] + 5112u), c.r[3].w[0]);
    c.budget -= 6;
L_003D0DE0:
    c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003D0E78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 19u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D0E78; } }
    c.budget -= 1;
L_003D0DF8:
    st8((c.r[17].w[0] + 19u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 30u);
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003D0E20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0E1Cu); set32(c.r[5], ld32((c.r[17].w[0] + 128u)));  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EF900u; return; } if (c.pc != 0x003D0E1Cu) [[unlikely]] return; }
L_003D0E1C:
    c.budget -= 1;
L_003D0E20:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0E2Cu); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003D0E2Cu) [[unlikely]] return; }
L_003D0E2C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0E38u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003D0E38u) [[unlikely]] return; }
L_003D0E38:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0E44u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003D0E44u) [[unlikely]] return; }
L_003D0E44:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0E50u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003D0E50u) [[unlikely]] return; }
L_003D0E50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D0E78; } }
L_003D0E58:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 23u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D0E70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 19u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D0E78; } }
    c.budget -= 1;
L_003D0E70:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003D0E78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003D0E90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0EACu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x003D0EACu) [[unlikely]] return; }
L_003D0EAC:
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 1023u);
    st32((c.r[16].w[0] + 1236u), c.r[4].w[0]);
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[2], c.r[16].w[0] + 304u);  if (t) { goto L_003D0F00; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8662u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 28208u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 2));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[16].w[0] + 500u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 498u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 496u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 13;
L_003D0F00:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003D0F68; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003D0F48; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D0F28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D0F88; } }
L_003D0F28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[3].w[0] + 28240u);
    c.budget -= 2;
L_003D0F30:
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[3].w[0] + 28336u);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D0F88; } }
L_003D0F48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[3].w[0] + 28368u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[3].w[0] + 28464u);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D0F88; } }
L_003D0F68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[3].w[0] + 28496u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[3].w[0] + 28624u);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_003D0F88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    set32(c.r[5], 0u + 17294u);
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[4], 0u - 17294u);
    st32((c.r[16].w[0] + 92u), 0u);
    set32(c.r[3], 0u + 6u);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + c.r[6].w[0]);
    c.f[3] = ld32((c.r[7].w[0]));
    c.f[2] = ld32((c.r[7].w[0] + 4u));
    c.f[1] = ld32((c.r[7].w[0] + 8u));
    c.f[0] = ld32((c.r[7].w[0] + 12u));
    st32((c.r[16].w[0] + 1856u), c.f[3]);
    st32((c.r[16].w[0] + 1860u), c.f[2]);
    st32((c.r[16].w[0] + 1864u), c.f[1]);
    st32((c.r[16].w[0] + 1868u), c.f[0]);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 5092u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 5140u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 28;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003D1000; } }
    st32((c.r[16].w[0] + 5092u), 0u);
    st32((c.r[16].w[0] + 5140u), 0u);
    c.budget -= 2;
L_003D1000:
    st16((c.r[2].w[0] + 16u), static_cast<std::uint16_t>(0u));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 19u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 21u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 22u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1028u); st8((c.r[2].w[0] + 23u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0040(c, 123u, depth + 1u); else { c.pc = 0x00200E90u; return; } if (c.pc != 0x003D1028u) [[unlikely]] return; }
L_003D1028:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 6u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003D1048; } }
    set32(c.r[5], 0u + 34u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1048u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x003D1048u) [[unlikely]] return; }
L_003D1048:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D1060:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1074u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 94u, depth + 1u); else { c.pc = 0x003D1260u; return; } if (c.pc != 0x003D1074u) [[unlikely]] return; }
L_003D1074:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003D1088; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1088u);  if (depth < kMaxDepth) unit_00B4(c, 90u, depth + 1u); else { c.pc = 0x003D1150u; return; } if (c.pc != 0x003D1088u) [[unlikely]] return; }
L_003D1088:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 21u)));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D10A4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 275u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003D10A4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D1120; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 80u));
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 84u));
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 88u));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D10FCu); st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 73u, depth + 1u); else { c.pc = 0x00195590u; return; } if (c.pc != 0x003D10FCu) [[unlikely]] return; }
L_003D10FC:
    set32(c.r[3], ld32((c.r[16].w[0] + 5072u)));
    set32(c.r[3], c.r[3].w[0] - 5376u);
    st32((c.r[16].w[0] + 5072u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 5120u)));
    set32(c.r[3], c.r[3].w[0] + 5376u);
    st32((c.r[16].w[0] + 5120u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 5168u)));
    set32(c.r[3], c.r[3].w[0] - 5376u);
    st32((c.r[16].w[0] + 5168u), c.r[3].w[0]);
    c.budget -= 9;
L_003D1120:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D1130:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 34u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023A1C0u | kUnwind; return; } [[clang::musttail]] return unit_004E(c, 153u, depth); }
L_003D1150:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 306u)));
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_003D1248; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D1188; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D1248; } }
L_003D1188:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D1240; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 180u);  if (t) { goto L_003D11B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003D11B8; } }
L_003D11B0:
    set32(c.r[2], 0u + 360u);
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003D11B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43E10000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 6144u);
    c.r[7].d[0] = 0ull | 59392ull;
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D11E0u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003D11E0u) [[unlikely]] return; }
L_003D11E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D1248; } }
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st8((c.r[3].w[0] + 18u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003D1228; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1228u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EF900u; return; } if (c.pc != 0x003D1228u) [[unlikely]] return; }
L_003D1228:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1234u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003D1234u) [[unlikely]] return; }
L_003D1234:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D1248; } }
    c.budget -= 1;
L_003D1240:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003D1248:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D1260:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[16], c.r[17].w[0] + 304u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D128Cu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x003D128Cu) [[unlikely]] return; }
L_003D128C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D1308; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D129Cu);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003D129Cu) [[unlikely]] return; }
L_003D129C:
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[17].w[0] + 1856u), c.f[3]);
    st32((c.r[17].w[0] + 1860u), c.f[2]);
    st32((c.r[17].w[0] + 1864u), c.f[1]);
    st32((c.r[17].w[0] + 1868u), c.f[0]);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 52u), 0u);
    c.budget -= 27;
L_003D1308:
    c.f[3] = ld32((c.r[17].w[0] + 1856u));
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0] + 1864u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[21] = fp::sub(c.f[3], c.f[2]);
    c.f[20] = fp::sub(c.f[1], c.f[0]);
    c.f[12] = c.f[21];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D132Cu); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D132Cu) [[unlikely]] return; }
L_003D132C:
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = 0ull | 63488ull;
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.r[5].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[5].sd[0] < 2049ll ? 1ull : 0ull;  if (t) { goto L_003D1358; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D13C0; } }
    c.budget -= 1;
L_003D1358:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003D1370; } }
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003D1380; } }
L_003D1370:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_003D1380; } }
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_003D1380:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003D1398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_003D14A0; } }
    c.budget -= 1;
L_003D1398:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 32u);  if (t) { goto L_003D13B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_003D14A0; } }
L_003D13B0:
    set32(c.r[3], 0u - 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_003D14A0; } }
    c.budget -= 1;
L_003D13C0:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D1438; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.r[3].d[0] = c.r[4].sd[0] < 152ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 152u);  if (t) { goto L_003D13E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003D13F0; } }
L_003D13E8:
    set32(c.r[3], c.r[4].w[0] + 4u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_003D13F0:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.r[1].d[0] = 0ull | 61441ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_003D1420; } }
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D1420; } }
    c.r[3].d[0] = 0ull | 61440ull;
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_003D14A0; } }
L_003D1420:
    c.r[3].d[0] = c.r[5].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 32u);  if (t) { goto L_003D14A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_003D14A0; } }
    c.budget -= 1;
L_003D1438:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.r[1].d[0] = c.r[3].sd[0] < -151ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D1458; } }
    set32(c.r[3], 0u - 152u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003D1460; } }
    c.budget -= 1;
L_003D1458:
    set32(c.r[3], c.r[3].w[0] - 4u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_003D1460:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.r[3].d[0] = c.r[4].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_003D1488; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 4096u);  if (t) { goto L_003D1488; } }
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_003D14A0; } }
L_003D1488:
    c.r[1].d[0] = 0ull | 61441ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 32u);  if (t) { goto L_003D14A0; } }
    st32((c.r[17].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 2;
L_003D14A0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003D1690; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003D1640; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003D14C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D16D8; } }
L_003D14C8:
    c.f[1] = ld32((c.r[17].w[0] + 1860u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D1568; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.f[1] = ld32((c.r[17].w[0] + 1860u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D14F8u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D14F8u) [[unlikely]] return; }
L_003D14F8:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1504u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D1504u) [[unlikely]] return; }
L_003D1504:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[2] = c.r[3].w[0];
    c.f[1] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D1540; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D1550; } }
    c.budget -= 1;
L_003D1540:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
L_003D1550:
    set32(c.r[3], 0u - 10u);
    fpu_div(c, 20u, c.f[20], c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[20]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003D16D8; } }
L_003D1568:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D1600; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1590u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D1590u) [[unlikely]] return; }
L_003D1590:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D159Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D159Cu) [[unlikely]] return; }
L_003D159C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[2] = c.r[3].w[0];
    c.f[1] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D15D8; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D15E8; } }
    c.budget -= 1;
L_003D15D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
L_003D15E8:
    set32(c.r[3], 0u + 10u);
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.f[0] = c.f[20] ^ fp::kSign;
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003D16D8; } }
L_003D1600:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003D1618; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_003D16D8; } }
    c.budget -= 1;
L_003D1618:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 10u);  if (t) { goto L_003D1630; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003D16D8; } }
L_003D1630:
    set32(c.r[3], 0u - 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003D16D8; } }
    c.budget -= 1;
L_003D1640:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D1660; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_003D16D8; } }
L_003D1660:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[1].d[0] = 0ull | 63489ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_003D16D8; } }
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D16D8; } }
    c.r[3].d[0] = 0ull | 63488ull;
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_003D16D8; } }
L_003D1690:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D16B0; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_003D16D8; } }
L_003D16B0:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[3].d[0] = c.r[4].sd[0] < 2048ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_003D16D8; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 2048u);  if (t) { goto L_003D16D8; } }
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 3;
L_003D16D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D1700:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1724u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x003D1724u) [[unlikely]] return; }
L_003D1724:
    set32(c.r[16], 0u + 88u);
    c.budget -= 1;
L_003D1728:
    c.r[5].d[0] = c.r[16].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1738u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 343u, depth + 1u); else { c.pc = 0x00217490u; return; } if (c.pc != 0x003D1738u) [[unlikely]] return; }
L_003D1738:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[16].sd[0] < 92ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D1728u | kUnwind; return; } goto L_003D1728; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);  if (t) { goto L_003D1768; } }
    set32(c.r[3], c.r[3].w[0] - 32592u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 636u), c.r[3].w[0]);  if (t) { goto L_003D1778; } }
    c.budget -= 1;
L_003D1768:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[3].w[0] + 28912u);
    st32((c.r[17].w[0] + 636u), c.r[3].w[0]);
    c.budget -= 4;
L_003D1778:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    set32(c.r[3], 0u - 1u);
    st32((c.r[17].w[0] + 1236u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 8248u);  if (t) { goto L_003D1AC8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[3], c.r[4].w[0] << 3);  if (t) { goto L_003D17D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8662u)));
    set32(c.r[2], c.r[2].w[0] + 28656u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[17].w[0] + 500u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 498u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 496u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 12;
L_003D17D8:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_003D17E8:
    st16((c.r[5].w[0] + 96u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[3], c.r[6].w[0] + 60u);
    set32(c.r[2], c.r[6].w[0] + 120u);
    st16((c.r[5].w[0] + 98u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 7u);
    st16((c.r[5].w[0] + 100u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[6].w[0] + 180u);
    st16((c.r[5].w[0] + 102u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[6].w[0] + 240u);
    st16((c.r[5].w[0] + 104u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[6].w[0] + 300u);
    set32(c.r[2], c.r[6].w[0] + 360u);
    st16((c.r[5].w[0] + 106u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[5].w[0] + 108u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] + 420u);
    c.r[2].d[0] = c.r[4].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 14u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D17E8u | kUnwind; return; } goto L_003D17E8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006C0000u);  if (t) { goto L_003D1A18; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 13664u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003D0000u < 16384u) { entry = entries_00B4[(t - 0x003D0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003D1858:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] + 28688u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] + 28752u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 568u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 570u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 139u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003D1A18; } }
    c.budget -= 1;
L_003D1898:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[17].w[0] + 1856u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[17].w[0] + 32u);
    st8((c.r[16].w[0] + 568u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 570u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 139u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D18C4u); set32(c.r[6], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003D18C4u) [[unlikely]] return; }
L_003D18C4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003D1A18; } }
L_003D18D0:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 568u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    st8((c.r[16].w[0] + 569u), static_cast<std::uint8_t>(0u));
    c.f[12] = c.r[2].w[0];
    st8((c.r[16].w[0] + 570u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D18FCu); st8((c.r[16].w[0] + 139u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00AB(c, 113u, depth + 1u); else { c.pc = 0x003AD5D0u; return; } if (c.pc != 0x003D18FCu) [[unlikely]] return; }
L_003D18FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D1918; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_003D1920; } }
    c.budget -= 1;
L_003D1918:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 2;
L_003D1920:
    st32((c.r[17].w[0] + 52u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1930u); st32((c.r[16].w[0] + 560u), 0u);  if (depth < kMaxDepth) unit_00AB(c, 111u, depth + 1u); else { c.pc = 0x003AD550u; return; } if (c.pc != 0x003D1930u) [[unlikely]] return; }
L_003D1930:
    st32((c.r[16].w[0] + 564u), c.f[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 31u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D1A18; } }
L_003D1948:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] + 28768u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] + 28880u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 6u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 568u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 569u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 138u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 570u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 139u), static_cast<std::uint8_t>(0u));
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D1A18; } }
L_003D1990:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    st8((c.r[16].w[0] + 568u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 569u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    st8((c.r[16].w[0] + 570u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 52u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D19C4u); st32((c.r[16].w[0] + 560u), 0u);  if (depth < kMaxDepth) unit_00AB(c, 111u, depth + 1u); else { c.pc = 0x003AD550u; return; } if (c.pc != 0x003D19C4u) [[unlikely]] return; }
L_003D19C4:
    st32((c.r[16].w[0] + 564u), c.f[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 139u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 31u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D1A18; } }
L_003D19E0:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[17].w[0] + 1856u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1A00u); set32(c.r[6], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003D1A00u) [[unlikely]] return; }
L_003D1A00:
    st8((c.r[16].w[0] + 568u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 569u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 570u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 139u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_003D1A18:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 6u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003D1A38; } }
    set32(c.r[5], 0u + 35u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1A38u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x003D1A38u) [[unlikely]] return; }
L_003D1A38:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);  if (t) { goto L_003D1A90; } }
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    st32((c.r[17].w[0] + 96u), 0u);
    st32((c.r[17].w[0] + 100u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[17].w[0] + 1856u), c.f[3]);
    st32((c.r[17].w[0] + 1860u), c.f[2]);
    st32((c.r[17].w[0] + 1864u), c.f[1]);
    st32((c.r[17].w[0] + 1868u), c.f[0]);
    c.budget -= 17;
L_003D1A88:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003D1A90:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003D1A98:
    set32(c.r[2], c.r[18].w[0] + 84u);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1AACu); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_003D(c, 283u, depth + 1u); else { c.pc = 0x001F6BC0u; return; } if (c.pc != 0x003D1AACu) [[unlikely]] return; }
L_003D1AAC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[18].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D1A98u | kUnwind; return; } goto L_003D1A98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D1B18; } }
L_003D1AC8:
    set32(c.r[3], 0u + 1000u);
    st16((c.r[17].w[0] + 496u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    st16((c.r[17].w[0] + 498u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 500u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 104u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    c.budget -= 8;
L_003D1AE8:
    st16((c.r[16].w[0] + 96u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 98u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 7u);
    st16((c.r[16].w[0] + 100u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = c.r[4].sd[0] < 21ll ? 1ull : 0ull;
    st16((c.r[16].w[0] + 102u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 104u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 106u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 108u), static_cast<std::uint16_t>(0u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 14u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D1AE8u | kUnwind; return; } goto L_003D1AE8; } }
    c.budget -= 1;
L_003D1B18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D1B30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003D25F8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8250u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 8248u);  if (t) { goto L_003D1BE8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 21u)));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D1B80; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 275u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003D1B80:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003D1CD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1B90u);  if (depth < kMaxDepth) unit_00B5(c, 33u, depth + 1u); else { c.pc = 0x003D4980u; return; } if (c.pc != 0x003D1B90u) [[unlikely]] return; }
L_003D1B90:
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 80u));
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 84u));
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 88u));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1BE0u); st32((c.r[17].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 73u, depth + 1u); else { c.pc = 0x00195590u; return; } if (c.pc != 0x003D1BE0u) [[unlikely]] return; }
L_003D1BE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D1CD8; } }
L_003D1BE8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 570u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D1CB8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 21u)));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D1C10; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 275u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003D1C10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003D1C20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1C20u);  if (depth < kMaxDepth) unit_0025(c, 73u, depth + 1u); else { c.pc = 0x00195590u; return; } if (c.pc != 0x003D1C20u) [[unlikely]] return; }
L_003D1C20:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 139u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D1C48; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1C3Cu); set32(c.r[4], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003D1C3Cu) [[unlikely]] return; }
L_003D1C3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D1CD8; } }
    c.budget -= 1;
L_003D1C48:
    c.f[5] = ld32((c.r[17].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0] + 128u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 136u));
    c.f[3] = ld32((c.r[17].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 132u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1C78u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D1C78u) [[unlikely]] return; }
L_003D1C78:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1C84u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D1C84u) [[unlikely]] return; }
L_003D1C84:
    c.f[1] = ld32((c.r[16].w[0] + 560u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 560u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 564u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D1CD8; } }
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1CB0u); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x003D1CB0u) [[unlikely]] return; }
L_003D1CB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D2660; } }
L_003D1CB8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D1CD8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[5], c.r[17].w[0] + 1856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1CD8u); set32(c.r[6], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x003D1CD8u) [[unlikely]] return; }
L_003D1CD8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003D2460; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D1D40; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003D1D20; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003D1D20; } }
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[3], 0u - 7u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003D1D40; } }
L_003D1D20:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 2u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1D3Cu); set32(c.r[9], 0u + 28u);  if (depth < kMaxDepth) unit_00B4(c, 160u, depth + 1u); else { c.pc = 0x003D26C0u; return; } if (c.pc != 0x003D1D3Cu) [[unlikely]] return; }
L_003D1D3C:
    c.budget -= 1;
L_003D1D40:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D1DA0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003D1D80; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003D1D80; } }
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[3], 0u - 25u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003D1DA0; } }
    c.budget -= 1;
L_003D1D80:
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[7], 0u + 4u);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1D9Cu); set32(c.r[9], 0u + 30u);  if (depth < kMaxDepth) unit_00B4(c, 160u, depth + 1u); else { c.pc = 0x003D26C0u; return; } if (c.pc != 0x003D1D9Cu) [[unlikely]] return; }
L_003D1D9C:
    c.budget -= 1;
L_003D1DA0:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D1E00; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003D1DE0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003D1DE0; } }
    st32((c.r[16].w[0] + 20u), 0u);
    set32(c.r[3], 0u - 97u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003D1E00; } }
    c.budget -= 1;
L_003D1DE0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[7], 0u + 6u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1DFCu); set32(c.r[9], 0u + 32u);  if (depth < kMaxDepth) unit_00B4(c, 160u, depth + 1u); else { c.pc = 0x003D26C0u; return; } if (c.pc != 0x003D1DFCu) [[unlikely]] return; }
L_003D1DFC:
    c.budget -= 1;
L_003D1E00:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D1E60; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003D1E40; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003D1E40; } }
    st32((c.r[16].w[0] + 24u), 0u);
    set32(c.r[3], 0u - 385u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003D1E60; } }
    c.budget -= 1;
L_003D1E40:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 7u);
    set32(c.r[7], 0u + 8u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1E60u); set32(c.r[10], 0u + 34u);  if (depth < kMaxDepth) unit_00B4(c, 177u, depth + 1u); else { c.pc = 0x003D2C70u; return; } if (c.pc != 0x003D1E60u) [[unlikely]] return; }
L_003D1E60:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D1EC0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003D1EA0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003D1EA0; } }
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[3], 0u - 1537u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003D1EC0; } }
    c.budget -= 1;
L_003D1EA0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 9u);
    set32(c.r[7], 0u + 10u);
    set32(c.r[8], 0u + 1u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1EC0u); set32(c.r[10], 0u + 36u);  if (depth < kMaxDepth) unit_00B4(c, 177u, depth + 1u); else { c.pc = 0x003D2C70u; return; } if (c.pc != 0x003D1EC0u) [[unlikely]] return; }
L_003D1EC0:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D1F20; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003D1F00; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003D1F00; } }
    st32((c.r[16].w[0] + 32u), 0u);
    set32(c.r[3], 0u - 6145u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003D1F20; } }
    c.budget -= 1;
L_003D1F00:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    set32(c.r[6], 0u + 11u);
    set32(c.r[7], 0u + 12u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1F20u); set32(c.r[10], 0u + 38u);  if (depth < kMaxDepth) unit_00B4(c, 177u, depth + 1u); else { c.pc = 0x003D2C70u; return; } if (c.pc != 0x003D1F20u) [[unlikely]] return; }
L_003D1F20:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D1F80; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003D1F60; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003D1F60; } }
    st32((c.r[16].w[0] + 36u), 0u);
    set32(c.r[3], 0u - 24577u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003D1F80; } }
    c.budget -= 1;
L_003D1F60:
    set32(c.r[8], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], 0u + 13u);
    set32(c.r[7], 0u + 14u);
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1F80u); set32(c.r[10], 0u + 40u);  if (depth < kMaxDepth) unit_00B4(c, 177u, depth + 1u); else { c.pc = 0x003D2C70u; return; } if (c.pc != 0x003D1F80u) [[unlikely]] return; }
L_003D1F80:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D1FE0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003D1FC0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003D1FC0; } }
    st32((c.r[16].w[0] + 40u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] | 32767ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003D1FE0; } }
L_003D1FC0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    set32(c.r[6], 0u + 15u);
    set32(c.r[7], 0u + 16u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1FDCu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 197u, depth + 1u); else { c.pc = 0x003D3380u; return; } if (c.pc != 0x003D1FDCu) [[unlikely]] return; }
L_003D1FDC:
    c.budget -= 1;
L_003D1FE0:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D2040; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003D2020; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003D2020; } }
    st32((c.r[16].w[0] + 44u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFF90000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003D2040; } }
L_003D2020:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], 0u + 17u);
    set32(c.r[7], 0u + 18u);
    set32(c.r[8], 0u + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D203Cu); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_00B4(c, 197u, depth + 1u); else { c.pc = 0x003D3380u; return; } if (c.pc != 0x003D203Cu) [[unlikely]] return; }
L_003D203C:
    c.budget -= 1;
L_003D2040:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D2098; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003D2080; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003D2080; } }
    st32((c.r[16].w[0] + 48u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFEF0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003D2098; } }
L_003D2080:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    set32(c.r[6], 0u + 20u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2098u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 213u, depth + 1u); else { c.pc = 0x003D3960u; return; } if (c.pc != 0x003D2098u) [[unlikely]] return; }
L_003D2098:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D20F0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003D20D8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003D20D8; } }
    st32((c.r[16].w[0] + 52u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFDF0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003D20F0; } }
L_003D20D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 21u);
    set32(c.r[7], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D20F0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 225u, depth + 1u); else { c.pc = 0x003D3DA0u; return; } if (c.pc != 0x003D20F0u) [[unlikely]] return; }
L_003D20F0:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D2148; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003D2130; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003D2130; } }
    st32((c.r[16].w[0] + 56u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003D2148; } }
L_003D2130:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 11u);
    set32(c.r[6], 0u + 22u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2148u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_00B4(c, 213u, depth + 1u); else { c.pc = 0x003D3960u; return; } if (c.pc != 0x003D2148u) [[unlikely]] return; }
L_003D2148:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D21A0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003D2188; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003D2188; } }
    st32((c.r[16].w[0] + 60u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF7F0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003D21A0; } }
L_003D2188:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 12u);
    set32(c.r[6], 0u + 23u);
    set32(c.r[7], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D21A0u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_00B4(c, 225u, depth + 1u); else { c.pc = 0x003D3DA0u; return; } if (c.pc != 0x003D21A0u) [[unlikely]] return; }
L_003D21A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D21F8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003D21E0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003D21E0; } }
    st32((c.r[16].w[0] + 64u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFEFF0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003D21F8; } }
L_003D21E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 13u);
    set32(c.r[6], 0u + 24u);
    set32(c.r[7], 0u + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D21F8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 213u, depth + 1u); else { c.pc = 0x003D3960u; return; } if (c.pc != 0x003D21F8u) [[unlikely]] return; }
L_003D21F8:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D2250; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003D2238; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003D2238; } }
    st32((c.r[16].w[0] + 68u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFDFF0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003D2250; } }
L_003D2238:
    set32(c.r[5], 0u + 14u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 25u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2250u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 225u, depth + 1u); else { c.pc = 0x003D3DA0u; return; } if (c.pc != 0x003D2250u) [[unlikely]] return; }
L_003D2250:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D22A8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003D2290; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003D2290; } }
    st32((c.r[16].w[0] + 72u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFBFF0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003D22A8; } }
L_003D2290:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 15u);
    set32(c.r[6], 0u + 26u);
    set32(c.r[7], 0u + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D22A8u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_00B4(c, 213u, depth + 1u); else { c.pc = 0x003D3960u; return; } if (c.pc != 0x003D22A8u) [[unlikely]] return; }
L_003D22A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D2300; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003D22E8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003D22E8; } }
    st32((c.r[16].w[0] + 76u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF7FF0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003D2300; } }
L_003D22E8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 16u);
    set32(c.r[6], 0u + 27u);
    set32(c.r[7], 0u + 18u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2300u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_00B4(c, 225u, depth + 1u); else { c.pc = 0x003D3DA0u; return; } if (c.pc != 0x003D2300u) [[unlikely]] return; }
L_003D2300:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D2358; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003D2340; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003D2340; } }
    st32((c.r[16].w[0] + 80u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003D2358; } }
L_003D2340:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 17u);
    set32(c.r[6], 0u + 28u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2354u); set32(c.r[7], 0u + 20u);  if (depth < kMaxDepth) unit_00B5(c, 11u, depth + 1u); else { c.pc = 0x003D41E0u; return; } if (c.pc != 0x003D2354u) [[unlikely]] return; }
L_003D2354:
    c.budget -= 1;
L_003D2358:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D23B0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003D2398; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003D2398; } }
    st32((c.r[16].w[0] + 84u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003D23B0; } }
L_003D2398:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 18u);
    set32(c.r[6], 0u + 29u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D23ACu); set32(c.r[7], 0u + 22u);  if (depth < kMaxDepth) unit_00B5(c, 22u, depth + 1u); else { c.pc = 0x003D45B0u; return; } if (c.pc != 0x003D23ACu) [[unlikely]] return; }
L_003D23AC:
    c.budget -= 1;
L_003D23B0:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D2408; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003D23F0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003D23F0; } }
    st32((c.r[16].w[0] + 88u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBFFF0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003D2408; } }
L_003D23F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 19u);
    set32(c.r[6], 0u + 30u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2404u); set32(c.r[7], 0u + 24u);  if (depth < kMaxDepth) unit_00B5(c, 11u, depth + 1u); else { c.pc = 0x003D41E0u; return; } if (c.pc != 0x003D2404u) [[unlikely]] return; }
L_003D2404:
    c.budget -= 1;
L_003D2408:
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D2460; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003D2448; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003D2448; } }
    st32((c.r[16].w[0] + 92u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003D2460; } }
    c.budget -= 1;
L_003D2448:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 20u);
    set32(c.r[6], 0u + 31u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D245Cu); set32(c.r[7], 0u + 26u);  if (depth < kMaxDepth) unit_00B5(c, 22u, depth + 1u); else { c.pc = 0x003D45B0u; return; } if (c.pc != 0x003D245Cu) [[unlikely]] return; }
L_003D245C:
    c.budget -= 1;
L_003D2460:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_003D2660; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 513u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D2660; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 568u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D2660; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 569u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003D2558; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003D24D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D24B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D2660; } }
L_003D24B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D24C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 113u, depth + 1u); else { c.pc = 0x003AD5D0u; return; } if (c.pc != 0x003D24C0u) [[unlikely]] return; }
L_003D24C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D2660; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 569u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 569u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D2660; } }
L_003D24D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D2500; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_003D2518; } }
L_003D2500:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 6;
L_003D2518:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43930000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D252Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 117u, depth + 1u); else { c.pc = 0x003AD6C0u; return; } if (c.pc != 0x003D252Cu) [[unlikely]] return; }
L_003D252C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D2660; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 569u)));
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 569u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2550u); st8((c.r[17].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0071(c, 43u, depth + 1u); else { c.pc = 0x002C4A90u; return; } if (c.pc != 0x003D2550u) [[unlikely]] return; }
L_003D2550:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D2660; } }
L_003D2558:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D25B0; } }
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D2590; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_003D2660; } }
    c.budget -= 1;
L_003D2590:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_003D2660; } }
    c.budget -= 1;
L_003D25B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D25D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_003D2660; } }
L_003D25D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_003D2660; } }
    c.budget -= 1;
L_003D25F8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003D2618; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D2660; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D2660; } }
L_003D2618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2620u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x003D2620u) [[unlikely]] return; }
L_003D2620:
    c.f[2] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D264Cu); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x003D264Cu) [[unlikely]] return; }
L_003D264C:
    c.f[2] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.budget -= 5;
L_003D2660:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D2680:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 35u);  if (t) { goto L_003D26B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D26ACu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 153u, depth + 1u); else { c.pc = 0x0023A1C0u; return; } if (c.pc != 0x003D26ACu) [[unlikely]] return; }
L_003D26AC:
    c.budget -= 1;
L_003D26B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D26C0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[20].w[0] + 8248u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[23], c.r[20].w[0] + 304u);
    c.r[16].d[0] = c.r[5].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    set32(c.r[7], c.r[16].w[0] + c.r[18].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 476u)));
    c.budget -= 25;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[17], c.r[7].w[0] + 476u);  if (t) { goto L_003D2C20; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_003D2BC0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003D2AA8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003D2750; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D2C40; } }
    c.budget -= 1;
L_003D2750:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[3].w[0] + 96u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 96u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D2A98; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 300u);  if (t) { goto L_003D2780; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003D2788; } }
L_003D2780:
    set32(c.r[2], 0u + 600u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003D2788:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 18432u);
    c.r[7].d[0] = 0ull | 47104ull;
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D27B0u); c.r[10].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003D27B0u) [[unlikely]] return; }
L_003D27B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D2C40; } }
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[23].w[0] + c.r[16].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D2808; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 176u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 180u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 184u), c.f[0]);  if (t) { goto L_003D2820; } }
L_003D2808:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 180u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 184u), c.f[0]);
    c.budget -= 6;
L_003D2820:
    c.r[17].d[0] = c.r[19].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    set32(c.r[2], c.r[17].w[0] << 6);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2838u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003D2838u) [[unlikely]] return; }
L_003D2838:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2848u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003D2848u) [[unlikely]] return; }
L_003D2848:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2854u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D2854u) [[unlikely]] return; }
L_003D2854:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D285Cu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003D285Cu) [[unlikely]] return; }
L_003D285C:
    set32(c.r[19], c.r[29].w[0] + 168u);
    c.f[13] = ld32((c.r[19].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D286Cu); c.f[12] = ld32((c.r[29].w[0] + 160u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D286Cu) [[unlikely]] return; }
L_003D286C:
    c.r[6].d[0] = c.r[2].d[0] << 48;
    set32(c.r[3], c.r[16].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[17].w[0] << 1);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[3].w[0] + 224u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[5], c.r[2].w[0] + 5060u);
    set32(c.r[2], ld32((c.r[2].w[0] + 5060u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 224u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 224u));
    st32((c.r[3].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 224u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D28D0; } }
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 16384u);  if (t) { goto L_003D28D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_003D28F0; } }
    c.budget -= 1;
L_003D28D0:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 49153ull;  if (t) { goto L_003D28F0; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull | 49152ull;  if (t) { goto L_003D28F0; } }
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003D28F0:
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u - 128u);  if (t) { goto L_003D2920; } }
    set32(c.r[2], c.r[16].w[0] + c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 392u), c.r[3].w[0]);  if (t) { goto L_003D2930; } }
    c.budget -= 1;
L_003D2920:
    set32(c.r[3], 0u + 128u);
    set32(c.r[2], c.r[16].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0] + 392u), c.r[3].w[0]);
    c.budget -= 4;
L_003D2930:
    c.r[17].d[0] = c.r[22].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    set32(c.r[2], c.r[17].w[0] << 6);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2948u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003D2948u) [[unlikely]] return; }
L_003D2948:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2958u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003D2958u) [[unlikely]] return; }
L_003D2958:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2964u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D2964u) [[unlikely]] return; }
L_003D2964:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D296Cu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003D296Cu) [[unlikely]] return; }
L_003D296C:
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2980u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D2980u) [[unlikely]] return; }
L_003D2980:
    c.f[12] = ld32((c.r[29].w[0] + 164u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D298Cu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D298Cu) [[unlikely]] return; }
L_003D298C:
    set32(c.r[4], c.r[17].w[0] << 1);
    c.r[8].d[0] = c.r[2].d[0] << 48;
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[16].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[3].d[0] = c.r[30].d[0] << 56;
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    set32(c.r[6], c.r[4].w[0] + 5064u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[4], ld32((c.r[4].w[0] + 5064u)));
    set32(c.r[7], c.r[5].w[0] + 140u);
    set32(c.r[4], c.r[4].w[0] - c.r[8].w[0]);
    st32((c.r[5].w[0] + 140u), c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[5].w[0] + 140u));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[5].w[0] + 140u), c.r[4].w[0]);  if (t) { goto L_003D2A18; } }
    set32(c.r[4], ld32((c.r[7].w[0])));
    c.r[1].d[0] = 0ull | 32768ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D29F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), 0u);  if (t) { goto L_003D2A58; } }
    c.budget -= 1;
L_003D29F0:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 61897ull;  if (t) { goto L_003D2A58; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 61896ull;  if (t) { goto L_003D2A58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_003D2A58; } }
    c.budget -= 1;
L_003D2A18:
    set32(c.r[4], ld32((c.r[18].w[0] + 144u)));
    c.r[1].d[0] = 0ull | 32768ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[4].sd[0] < 3640ll ? 1ull : 0ull;  if (t) { goto L_003D2A40; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D2A40; } }
    set32(c.r[3], 0u + 3640u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 144u), c.r[3].w[0]);  if (t) { goto L_003D2A58; } }
L_003D2A40:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D2A58; } }
    st32((c.r[18].w[0] + 144u), 0u);
    c.budget -= 2;
L_003D2A58:
    set32(c.r[5], ld32((c.r[7].w[0])));
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] + c.r[18].w[0]);  if (t) { goto L_003D2A88; } }
    set32(c.r[4], 0u - 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 308u), c.r[4].w[0]);  if (t) { goto L_003D2C40; } }
    c.budget -= 1;
L_003D2A88:
    set32(c.r[3], c.r[16].w[0] + c.r[18].w[0]);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 308u), c.r[4].w[0]);  if (t) { goto L_003D2C40; } }
L_003D2A98:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003D2C40; } }
    c.budget -= 1;
L_003D2AA8:
    c.r[5].d[0] = c.r[19].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[20].w[0]);
    set32(c.r[7], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[10], ld32((c.r[7].w[0] + 224u)));
    set32(c.r[8], c.r[5].w[0] + 5060u);
    set32(c.r[6], ld32((c.r[5].w[0] + 5060u)));
    set32(c.r[5], c.r[10].w[0] - c.r[6].w[0]);
    c.r[9].d[0] = c.r[5].d[0] & 65535ull;
    c.r[1].d[0] = c.r[9].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003D2AF8; } }
    c.r[5].d[0] = 0ull | 65472ull;
    c.r[5].d[0] = c.r[9].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003D2B10; } }
L_003D2AF8:
    set32(c.r[5], c.r[16].w[0] << 2);
    st32((c.r[8].w[0]), c.r[10].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 392u), 0u);  if (t) { goto L_003D2B28; } }
L_003D2B10:
    set32(c.r[5], ld32((c.r[7].w[0] + 392u)));
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    st32((c.r[8].w[0]), c.r[5].w[0]);
    c.r[5].d[0] = ld16((c.r[8].w[0]));
    st32((c.r[8].w[0]), c.r[5].w[0]);
    c.budget -= 6;
L_003D2B28:
    c.r[5].d[0] = c.r[22].d[0] << 56;
    set32(c.r[6], c.r[3].w[0] + c.r[18].w[0]);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[9], ld32((c.r[6].w[0] + 140u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 5064u)));
    set32(c.r[7], c.r[3].w[0] + 5064u);
    set32(c.r[3], c.r[9].w[0] - c.r[5].w[0]);
    c.r[8].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[8].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003D2B78; } }
    c.r[3].d[0] = 0ull | 65504ull;
    c.r[3].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D2B90; } }
    c.budget -= 1;
L_003D2B78:
    set32(c.r[3], c.r[16].w[0] << 2);
    st32((c.r[7].w[0]), c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 308u), 0u);  if (t) { goto L_003D2BA8; } }
L_003D2B90:
    set32(c.r[3], ld32((c.r[6].w[0] + 308u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[7].w[0]));
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_003D2BA8:
    c.r[3].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003D2C40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D2C40; } }
    c.budget -= 1;
L_003D2BC0:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 30u);
    st8((c.r[7].w[0] + 497u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { goto L_003D2BE8; } }
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2BE8u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EF900u; return; } if (c.pc != 0x003D2BE8u) [[unlikely]] return; }
L_003D2BE8:
    c.r[5].d[0] = c.r[21].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2BF8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003D2BF8u) [[unlikely]] return; }
L_003D2BF8:
    c.r[2].d[0] = c.r[21].d[0] << 56;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2C0Cu); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003D2C0Cu) [[unlikely]] return; }
L_003D2C0C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2C18u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003D2C18u) [[unlikely]] return; }
L_003D2C18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D2C40; } }
L_003D2C20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 497u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[7].w[0] + 497u);  if (t) { goto L_003D2C38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D2C40; } }
    c.budget -= 1;
L_003D2C38:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003D2C40:
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
L_003D2C70:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] << 56;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[17].w[0] + 304u);
    set32(c.r[16], c.r[17].w[0] + 8248u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[7], c.r[19].w[0] + c.r[16].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 476u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 25;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[18], c.r[7].w[0] + 476u);  if (t) { goto L_003D3328; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_003D32C0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003D31A8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003D2D00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D3348; } }
    c.budget -= 1;
L_003D2D00:
    set32(c.r[3], c.r[19].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[3].w[0] + 96u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 96u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D3198; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 300u);  if (t) { goto L_003D2D30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003D2D38; } }
L_003D2D30:
    set32(c.r[2], 0u + 600u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003D2D38:
    c.r[30].d[0] = c.r[9].d[0] << 56;
    c.r[30].d[0] = static_cast<std::uint64_t>(c.r[30].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[30].d[0] != 0ull; c.r[22].d[0] = c.r[8].d[0] << 56;  if (t) { goto L_003D2D70; } }
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003D2D60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 6144u);  if (t) { goto L_003D2D90; } }
    c.budget -= 1;
L_003D2D60:
    c.r[5].d[0] = 0ull | 59392ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull | 65535ull;  if (t) { goto L_003D2D90; } }
    c.budget -= 1;
L_003D2D70:
    c.r[22].d[0] = c.r[8].d[0] << 56;
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[22].d[0] != 0ull; set32(c.r[5], 0u + 26624u);  if (t) { goto L_003D2D88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull | 32768ull;  if (t) { goto L_003D2D90; } }
L_003D2D88:
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[6].d[0] = 0ull | 38912ull;
    c.budget -= 2;
L_003D2D90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull | 65535ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2DB0u); c.r[10].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003D2DB0u) [[unlikely]] return; }
L_003D2DB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D3348; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[19], c.r[19].w[0] << 2);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D2E10; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 192u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 200u), c.f[0]);  if (t) { goto L_003D2E28; } }
    c.budget -= 1;
L_003D2E10:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 200u), c.f[0]);
    c.budget -= 6;
L_003D2E28:
    c.r[21].d[0] = c.r[21].d[0] << 56;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 56);
    set32(c.r[2], c.r[21].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2E40u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003D2E40u) [[unlikely]] return; }
L_003D2E40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2E50u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003D2E50u) [[unlikely]] return; }
L_003D2E50:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2E5Cu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D2E5Cu) [[unlikely]] return; }
L_003D2E5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2E64u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003D2E64u) [[unlikely]] return; }
L_003D2E64:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull; set32(c.r[18], c.r[29].w[0] + 184u);  if (t) { goto L_003D2F38; } }
    c.f[13] = ld32((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2E78u); c.f[12] = ld32((c.r[29].w[0] + 176u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D2E78u) [[unlikely]] return; }
L_003D2E78:
    c.r[6].d[0] = c.r[2].d[0] << 48;
    set32(c.r[5], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[21].w[0] << 1);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[3], c.r[5].w[0] + 224u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[4].w[0] + 5060u);
    set32(c.r[4], ld32((c.r[4].w[0] + 5060u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0] + 224u), c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[5].w[0] + 224u));
    c.budget -= 15;
    { const bool t = c.r[22].d[0] != 0ull; st32((c.r[5].w[0] + 224u), c.r[4].w[0]);  if (t) { goto L_003D2EF8; } }
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.r[1].d[0] = 0ull | 32768ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull | 32768ull;  if (t) { goto L_003D2EE0; } }
    c.r[4].d[0] = c.r[5].sd[0] < 3640ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[4], 0u + 3640u);  if (t) { goto L_003D2EE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { goto L_003D3008; } }
    c.budget -= 1;
L_003D2EE0:
    c.r[4].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003D3008; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), 0u);  if (t) { goto L_003D3008; } }
L_003D2EF8:
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.r[1].d[0] = 0ull | 32768ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull | 32768ull;  if (t) { goto L_003D2F18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), 0u);  if (t) { goto L_003D3008; } }
    c.budget -= 1;
L_003D2F18:
    c.r[4].d[0] = c.r[5].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[1].d[0] = 0ull | 61897ull;  if (t) { goto L_003D3008; } }
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull | 61896ull;  if (t) { goto L_003D3008; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { goto L_003D3008; } }
L_003D2F38:
    set32(c.r[18], c.r[29].w[0] + 184u);
    c.f[13] = ld32((c.r[18].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2F48u); c.f[12] = ld32((c.r[29].w[0] + 176u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D2F48u) [[unlikely]] return; }
L_003D2F48:
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[3], c.r[21].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[6], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[20].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[6].w[0] + 224u);
    set32(c.r[2], c.r[4].w[0] + 5060u);
    set32(c.r[4], ld32((c.r[4].w[0] + 5060u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[6].w[0] + 224u), c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[6].w[0] + 224u));
    c.budget -= 17;
    { const bool t = c.r[22].d[0] != 0ull; st32((c.r[6].w[0] + 224u), c.r[4].w[0]);  if (t) { goto L_003D2FC8; } }
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.r[1].d[0] = 0ull | 32768ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D2FA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), 0u);  if (t) { goto L_003D3008; } }
L_003D2FA8:
    c.r[4].d[0] = c.r[5].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[1].d[0] = 0ull | 61897ull;  if (t) { goto L_003D3008; } }
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull | 61896ull;  if (t) { goto L_003D3008; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { goto L_003D3008; } }
L_003D2FC8:
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.r[1].d[0] = 0ull | 32768ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[5].sd[0] < 3640ll ? 1ull : 0ull;  if (t) { goto L_003D2FF0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003D2FF0; } }
    set32(c.r[4], 0u + 3640u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { goto L_003D3008; } }
L_003D2FF0:
    c.r[4].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003D3008; } }
    st32((c.r[3].w[0]), 0u);
    c.budget -= 2;
L_003D3008:
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D3038; } }
    set32(c.r[3], 0u - 64u);
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 392u), c.r[3].w[0]);  if (t) { goto L_003D3048; } }
    c.budget -= 1;
L_003D3038:
    set32(c.r[3], 0u + 64u);
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 392u), c.r[3].w[0]);
    c.budget -= 4;
L_003D3048:
    c.r[21].d[0] = c.r[23].d[0] << 56;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 56);
    set32(c.r[2], c.r[21].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3060u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003D3060u) [[unlikely]] return; }
L_003D3060:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3070u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003D3070u) [[unlikely]] return; }
L_003D3070:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D307Cu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D307Cu) [[unlikely]] return; }
L_003D307C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3084u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003D3084u) [[unlikely]] return; }
L_003D3084:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull;  if (t) { goto L_003D30B8; } }
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D30A0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D30A0u) [[unlikely]] return; }
L_003D30A0:
    c.f[12] = ld32((c.r[29].w[0] + 180u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D30ACu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D30ACu) [[unlikely]] return; }
L_003D30AC:
    c.r[7].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);  if (t) { goto L_003D30E8; } }
L_003D30B8:
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D30CCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D30CCu) [[unlikely]] return; }
L_003D30CC:
    c.f[13] = c.f[0];
    c.f[0] = ld32((c.r[29].w[0] + 180u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D30DCu); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D30DCu) [[unlikely]] return; }
L_003D30DC:
    c.r[7].d[0] = c.r[2].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.budget -= 3;
L_003D30E8:
    set32(c.r[3], c.r[21].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[4], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + 140u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[3].w[0] + 5064u);
    set32(c.r[3], ld32((c.r[3].w[0] + 5064u)));
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    st32((c.r[4].w[0] + 140u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 140u));
    st32((c.r[4].w[0] + 140u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 140u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[4].sd[0] < 16384ll ? 1ull : 0ull;  if (t) { goto L_003D3140; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D3140; } }
    set32(c.r[3], 0u + 16384u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[3].w[0]);  if (t) { goto L_003D3160; } }
    c.budget -= 1;
L_003D3140:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 49153ull;  if (t) { goto L_003D3160; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 49152ull;  if (t) { goto L_003D3160; } }
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_003D3160:
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[19].w[0] + c.r[16].w[0]);  if (t) { goto L_003D3188; } }
    set32(c.r[4], 0u - 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 308u), c.r[4].w[0]);  if (t) { goto L_003D3348; } }
L_003D3188:
    set32(c.r[3], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[4], 0u + 128u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 308u), c.r[4].w[0]);  if (t) { goto L_003D3348; } }
L_003D3198:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003D3348; } }
    c.budget -= 1;
L_003D31A8:
    c.r[5].d[0] = c.r[21].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    set32(c.r[7], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[10], ld32((c.r[7].w[0] + 224u)));
    set32(c.r[8], c.r[5].w[0] + 5060u);
    set32(c.r[6], ld32((c.r[5].w[0] + 5060u)));
    set32(c.r[5], c.r[10].w[0] - c.r[6].w[0]);
    c.r[9].d[0] = c.r[5].d[0] & 65535ull;
    c.r[1].d[0] = c.r[9].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003D31F8; } }
    c.r[5].d[0] = 0ull | 65504ull;
    c.r[5].d[0] = c.r[9].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003D3210; } }
L_003D31F8:
    set32(c.r[5], c.r[19].w[0] << 2);
    st32((c.r[8].w[0]), c.r[10].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 392u), 0u);  if (t) { goto L_003D3228; } }
L_003D3210:
    set32(c.r[5], ld32((c.r[7].w[0] + 392u)));
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    st32((c.r[8].w[0]), c.r[5].w[0]);
    c.r[5].d[0] = ld16((c.r[8].w[0]));
    st32((c.r[8].w[0]), c.r[5].w[0]);
    c.budget -= 6;
L_003D3228:
    c.r[5].d[0] = c.r[23].d[0] << 56;
    set32(c.r[6], c.r[3].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[9], ld32((c.r[6].w[0] + 140u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 5064u)));
    set32(c.r[7], c.r[3].w[0] + 5064u);
    set32(c.r[3], c.r[9].w[0] - c.r[5].w[0]);
    c.r[8].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[8].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003D3278; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D3290; } }
    c.budget -= 1;
L_003D3278:
    set32(c.r[3], c.r[19].w[0] << 2);
    st32((c.r[7].w[0]), c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 308u), 0u);  if (t) { goto L_003D32A8; } }
L_003D3290:
    set32(c.r[3], ld32((c.r[6].w[0] + 308u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[7].w[0]));
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_003D32A8:
    c.r[3].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003D3348; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D3348; } }
    c.budget -= 1;
L_003D32C0:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 30u);
    st8((c.r[7].w[0] + 497u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003D32F0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D32F0u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EF900u; return; } if (c.pc != 0x003D32F0u) [[unlikely]] return; }
L_003D32F0:
    c.r[5].d[0] = c.r[20].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3300u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003D3300u) [[unlikely]] return; }
L_003D3300:
    c.r[2].d[0] = c.r[20].d[0] << 56;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3314u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003D3314u) [[unlikely]] return; }
L_003D3314:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3320u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003D3320u) [[unlikely]] return; }
L_003D3320:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D3348; } }
L_003D3328:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 497u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[7].w[0] + 497u);  if (t) { goto L_003D3340; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D3348; } }
    c.budget -= 1;
L_003D3340:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003D3348:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_003D3380:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] << 56;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 56);
    set32(c.r[17], c.r[19].w[0] + 8248u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], c.r[20].w[0] + c.r[17].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 476u)));
    set32(c.r[22], c.r[19].w[0] + 304u);
    c.budget -= 23;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[6].w[0] + 476u);  if (t) { goto L_003D3908; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003D3878; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003D3750; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003D3408; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D3928; } }
    c.budget -= 1;
L_003D3408:
    set32(c.r[4], c.r[20].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[4].w[0] + 96u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 96u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003D3740; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 600u);  if (t) { goto L_003D3438; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003D3440; } }
L_003D3438:
    set32(c.r[2], 0u + 1200u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003D3440:
    c.r[23].d[0] = c.r[9].d[0] << 56;
    c.r[23].d[0] = static_cast<std::uint64_t>(c.r[23].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[23].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003D3458; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 12288u);  if (t) { goto L_003D3460; } }
L_003D3458:
    c.r[5].d[0] = 0ull | 53248ull;
    c.r[6].d[0] = 0ull | 65535ull;
    c.budget -= 2;
L_003D3460:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43AF0000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = 0ull | 65535ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3480u); c.r[10].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003D3480u) [[unlikely]] return; }
L_003D3480:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D3928; } }
    set32(c.r[20], c.r[20].w[0] << 2);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[22].w[0] + c.r[20].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D34D8; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 160u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 168u), c.f[0]);  if (t) { goto L_003D34F0; } }
L_003D34D8:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.budget -= 6;
L_003D34F0:
    c.r[16].d[0] = c.r[21].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    set32(c.r[2], c.r[16].w[0] << 6);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3508u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003D3508u) [[unlikely]] return; }
L_003D3508:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3518u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003D3518u) [[unlikely]] return; }
L_003D3518:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3524u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D3524u) [[unlikely]] return; }
L_003D3524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D352Cu); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003D352Cu) [[unlikely]] return; }
L_003D352C:
    set32(c.r[21], c.r[29].w[0] + 152u);
    c.f[13] = ld32((c.r[21].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D353Cu); c.f[12] = ld32((c.r[29].w[0] + 144u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D353Cu) [[unlikely]] return; }
L_003D353C:
    c.r[6].d[0] = c.r[2].d[0] << 48;
    set32(c.r[3], c.r[20].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[16].w[0] << 1);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], c.r[3].w[0] + 224u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], c.r[2].w[0] + 5060u);
    set32(c.r[2], ld32((c.r[2].w[0] + 5060u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 224u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 224u));
    c.budget -= 15;
    { const bool t = c.r[23].d[0] != 0ull; st32((c.r[3].w[0] + 224u), c.r[2].w[0]);  if (t) { goto L_003D35B8; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[1].d[0] = 0ull | 32768ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull | 32768ull;  if (t) { goto L_003D35A0; } }
    c.r[2].d[0] = c.r[3].sd[0] < 10922ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 10922u);  if (t) { goto L_003D35A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[2].w[0]);  if (t) { goto L_003D35F8; } }
L_003D35A0:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D35F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), 0u);  if (t) { goto L_003D35F8; } }
L_003D35B8:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[1].d[0] = 0ull | 32768ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull | 32768ull;  if (t) { goto L_003D35D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), 0u);  if (t) { goto L_003D35F8; } }
    c.budget -= 1;
L_003D35D8:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 54615ull;  if (t) { goto L_003D35F8; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull | 54614ull;  if (t) { goto L_003D35F8; } }
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003D35F8:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u - 64u);  if (t) { goto L_003D3620; } }
    set32(c.r[2], c.r[20].w[0] + c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 392u), c.r[3].w[0]);  if (t) { goto L_003D3630; } }
L_003D3620:
    set32(c.r[3], 0u + 64u);
    set32(c.r[2], c.r[20].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 392u), c.r[3].w[0]);
    c.budget -= 4;
L_003D3630:
    c.r[18].d[0] = c.r[18].d[0] << 56;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    set32(c.r[2], c.r[18].w[0] << 6);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3648u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003D3648u) [[unlikely]] return; }
L_003D3648:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3658u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003D3658u) [[unlikely]] return; }
L_003D3658:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3664u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D3664u) [[unlikely]] return; }
L_003D3664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D366Cu); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003D366Cu) [[unlikely]] return; }
L_003D366C:
    c.f[1] = ld32((c.r[21].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3680u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D3680u) [[unlikely]] return; }
L_003D3680:
    c.f[12] = ld32((c.r[29].w[0] + 148u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D368Cu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D368Cu) [[unlikely]] return; }
L_003D368C:
    set32(c.r[3], c.r[18].w[0] << 1);
    c.r[7].d[0] = c.r[2].d[0] << 48;
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[20].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[6], c.r[4].w[0] + 140u);
    set32(c.r[5], c.r[3].w[0] + 5064u);
    set32(c.r[3], ld32((c.r[3].w[0] + 5064u)));
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    st32((c.r[4].w[0] + 140u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 140u));
    st32((c.r[4].w[0] + 140u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 140u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[4].sd[0] < 12743ll ? 1ull : 0ull;  if (t) { goto L_003D36E8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D36E8; } }
    set32(c.r[3], 0u + 12743u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[3].w[0]);  if (t) { goto L_003D3708; } }
L_003D36E8:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 52794ull;  if (t) { goto L_003D3708; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 52793ull;  if (t) { goto L_003D3708; } }
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_003D3708:
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[20].w[0] + c.r[17].w[0]);  if (t) { goto L_003D3730; } }
    set32(c.r[4], 0u - 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 308u), c.r[4].w[0]);  if (t) { goto L_003D3928; } }
L_003D3730:
    set32(c.r[3], c.r[20].w[0] + c.r[17].w[0]);
    set32(c.r[4], 0u + 128u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 308u), c.r[4].w[0]);  if (t) { goto L_003D3928; } }
L_003D3740:
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003D3928; } }
    c.budget -= 1;
L_003D3750:
    c.r[5].d[0] = c.r[21].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[19].w[0]);
    set32(c.r[7], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[10], ld32((c.r[7].w[0] + 224u)));
    set32(c.r[8], c.r[5].w[0] + 5060u);
    set32(c.r[6], ld32((c.r[5].w[0] + 5060u)));
    set32(c.r[5], c.r[10].w[0] - c.r[6].w[0]);
    c.r[9].d[0] = c.r[5].d[0] & 65535ull;
    c.r[1].d[0] = c.r[9].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003D37A0; } }
    c.r[5].d[0] = 0ull | 65504ull;
    c.r[5].d[0] = c.r[9].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003D37B8; } }
L_003D37A0:
    set32(c.r[5], c.r[20].w[0] << 2);
    st32((c.r[8].w[0]), c.r[10].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 392u), 0u);  if (t) { goto L_003D37D0; } }
L_003D37B8:
    set32(c.r[5], ld32((c.r[7].w[0] + 392u)));
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    st32((c.r[8].w[0]), c.r[5].w[0]);
    c.r[5].d[0] = ld16((c.r[8].w[0]));
    st32((c.r[8].w[0]), c.r[5].w[0]);
    c.budget -= 6;
L_003D37D0:
    c.r[5].d[0] = c.r[18].d[0] << 56;
    set32(c.r[6], c.r[3].w[0] + c.r[17].w[0]);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[9], ld32((c.r[6].w[0] + 140u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 5064u)));
    set32(c.r[7], c.r[3].w[0] + 5064u);
    set32(c.r[3], c.r[9].w[0] - c.r[5].w[0]);
    c.r[8].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[8].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003D3820; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D3838; } }
    c.budget -= 1;
L_003D3820:
    set32(c.r[3], c.r[20].w[0] << 2);
    st32((c.r[7].w[0]), c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 308u), 0u);  if (t) { goto L_003D3850; } }
L_003D3838:
    set32(c.r[3], ld32((c.r[6].w[0] + 308u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[7].w[0]));
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_003D3850:
    c.r[3].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D3928; } }
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], c.r[20].w[0] + c.r[17].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[3].w[0] + 497u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 518u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D3928; } }
    c.budget -= 1;
L_003D3878:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 497u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[18], c.r[6].w[0] + 497u);  if (t) { goto L_003D38F8; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], c.r[20].w[0] << 2);  if (t) { goto L_003D38A8; } }
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D38A8u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EF900u; return; } if (c.pc != 0x003D38A8u) [[unlikely]] return; }
L_003D38A8:
    c.r[5].d[0] = c.r[23].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D38B8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003D38B8u) [[unlikely]] return; }
L_003D38B8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D38C4u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003D38C4u) [[unlikely]] return; }
L_003D38C4:
    set32(c.r[4], c.r[20].w[0] + c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 518u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 518u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 518u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_003D3928; } }
    set32(c.r[3], 0u + 30u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D3928; } }
    c.budget -= 1;
L_003D38F8:
    set32(c.r[3], c.r[5].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D3928; } }
    c.budget -= 1;
L_003D3908:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 497u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[6].w[0] + 497u);  if (t) { goto L_003D3920; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D3928; } }
    c.budget -= 1;
L_003D3920:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003D3928:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003D3960:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] << 56;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 56);
    set32(c.r[17], c.r[19].w[0] + 8248u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[20].w[0] + c.r[17].w[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 476u)));
    set32(c.r[21], c.r[19].w[0] + 304u);
    c.budget -= 23;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[7].w[0] + 476u);  if (t) { goto L_003D3D48; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003D3CB8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003D3C28; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003D39E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D3D68; } }
L_003D39E0:
    set32(c.r[3], c.r[20].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[3].w[0] + 96u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 96u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D3C18; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 600u);  if (t) { goto L_003D3A10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003D3A18; } }
L_003D3A10:
    set32(c.r[2], 0u + 1200u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003D3A18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43AF0000u);
    set32(c.r[5], 0u + 14336u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 18432u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3A40u); c.r[10].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003D3A40u) [[unlikely]] return; }
L_003D3A40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D3D68; } }
    set32(c.r[20], c.r[20].w[0] << 2);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[21].w[0] + c.r[20].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D3A98; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 160u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 168u), c.f[0]);  if (t) { goto L_003D3AB0; } }
L_003D3A98:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.budget -= 6;
L_003D3AB0:
    c.r[18].d[0] = c.r[18].d[0] << 56;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.r[16].d[0] = c.r[23].d[0] << 56;
    set32(c.r[2], c.r[18].w[0] << 6);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[21], 0u + 16384u);
    set32(c.r[3], 0u - 16384u);
    set32(c.r[4], c.r[2].w[0] + 1984u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3ADCu); if (c.r[16].d[0] != 0) c.r[21].d[0] = c.r[3].d[0];  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003D3ADCu) [[unlikely]] return; }
L_003D3ADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3AE4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x003D3AE4u) [[unlikely]] return; }
L_003D3AE4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3AF4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003D3AF4u) [[unlikely]] return; }
L_003D3AF4:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3B00u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D3B00u) [[unlikely]] return; }
L_003D3B00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3B08u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003D3B08u) [[unlikely]] return; }
L_003D3B08:
    c.f[1] = ld32((c.r[29].w[0] + 152u));
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3B1Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D3B1Cu) [[unlikely]] return; }
L_003D3B1C:
    c.f[13] = c.f[0];
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3B2Cu); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D3B2Cu) [[unlikely]] return; }
L_003D3B2C:
    set32(c.r[3], c.r[18].w[0] << 1);
    set32(c.r[5], c.r[20].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[7], c.r[5].w[0] + 140u);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[6], c.r[4].w[0] + 5056u);
    set32(c.r[4], ld32((c.r[4].w[0] + 5056u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    st32((c.r[5].w[0] + 140u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 140u));
    c.budget -= 14;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[5].w[0] + 140u), c.r[3].w[0]);  if (t) { goto L_003D3BA0; } }
    set32(c.r[4], ld32((c.r[7].w[0])));
    c.r[1].d[0] = 0ull | 32768ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull | 32768ull;  if (t) { goto L_003D3B80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), 0u);  if (t) { goto L_003D3BE0; } }
L_003D3B80:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 53705ull;  if (t) { goto L_003D3BE0; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 53704ull;  if (t) { goto L_003D3BE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_003D3BE0; } }
L_003D3BA0:
    set32(c.r[4], ld32((c.r[7].w[0])));
    c.r[1].d[0] = 0ull | 32768ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull | 32768ull;  if (t) { goto L_003D3BC8; } }
    c.r[3].d[0] = c.r[4].sd[0] < 11832ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 11832u);  if (t) { goto L_003D3BC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_003D3BE0; } }
L_003D3BC8:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D3BE0; } }
    st32((c.r[7].w[0]), 0u);
    c.budget -= 2;
L_003D3BE0:
    set32(c.r[4], ld32((c.r[7].w[0])));
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[20].w[0] + c.r[17].w[0]);  if (t) { goto L_003D3C08; } }
    set32(c.r[4], 0u - 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 308u), c.r[4].w[0]);  if (t) { goto L_003D3D68; } }
L_003D3C08:
    set32(c.r[3], c.r[20].w[0] + c.r[17].w[0]);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 308u), c.r[4].w[0]);  if (t) { goto L_003D3D68; } }
L_003D3C18:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003D3D68; } }
    c.budget -= 1;
L_003D3C28:
    c.r[4].d[0] = c.r[18].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[5], c.r[20].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[8], ld32((c.r[5].w[0] + 140u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 5056u)));
    set32(c.r[6], c.r[3].w[0] + 5056u);
    set32(c.r[3], c.r[8].w[0] - c.r[4].w[0]);
    c.r[7].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[7].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65504ull;  if (t) { goto L_003D3C78; } }
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D3CA0; } }
    c.budget -= 1;
L_003D3C78:
    set32(c.r[4], c.r[20].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[17].w[0]);
    st32((c.r[6].w[0]), c.r[8].w[0]);
    set32(c.r[4], 0u + 2u);
    st32((c.r[5].w[0] + 308u), 0u);
    set32(c.r[3], c.r[20].w[0] + c.r[17].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[3].w[0] + 497u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 518u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D3D68; } }
L_003D3CA0:
    set32(c.r[3], ld32((c.r[5].w[0] + 308u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[6].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[3].w[0]);  if (t) { goto L_003D3D68; } }
L_003D3CB8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 497u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[7].w[0] + 497u);  if (t) { goto L_003D3D38; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], c.r[20].w[0] << 2);  if (t) { goto L_003D3CE8; } }
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3CE8u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EF900u; return; } if (c.pc != 0x003D3CE8u) [[unlikely]] return; }
L_003D3CE8:
    c.r[5].d[0] = c.r[22].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3CF8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003D3CF8u) [[unlikely]] return; }
L_003D3CF8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3D04u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003D3D04u) [[unlikely]] return; }
L_003D3D04:
    set32(c.r[4], c.r[20].w[0] + c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 518u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 518u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 518u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_003D3D68; } }
    set32(c.r[3], 0u + 30u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D3D68; } }
    c.budget -= 1;
L_003D3D38:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D3D68; } }
    c.budget -= 1;
L_003D3D48:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 497u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[7].w[0] + 497u);  if (t) { goto L_003D3D60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D3D68; } }
    c.budget -= 1;
L_003D3D60:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003D3D68:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003D3DA0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] << 56;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 56);
    set32(c.r[17], c.r[19].w[0] + 8248u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[20].w[0] + c.r[17].w[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 476u)));
    set32(c.r[21], c.r[19].w[0] + 304u);
    c.budget -= 23;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[7].w[0] + 476u);  if (t) { [[clang::musttail]] return unit_00B5(c, 9u, depth); } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { [[clang::musttail]] return unit_00B5(c, 5u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_00B5(c, 4u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003D3E20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00B5(c, 10u, depth); } }
L_003D3E20:
    set32(c.r[3], c.r[20].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[3].w[0] + 96u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 96u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_00B5(c, 3u, depth); } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 600u);  if (t) { goto L_003D3E50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003D3E58; } }
L_003D3E50:
    set32(c.r[2], 0u + 1200u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003D3E58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43AF0000u);
    c.r[5].d[0] = 0ull | 47104ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[6].d[0] = 0ull | 51200ull;
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3E80u); c.r[10].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003D3E80u) [[unlikely]] return; }
L_003D3E80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00B5(c, 10u, depth); } }
    set32(c.r[20], c.r[20].w[0] << 2);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[21].w[0] + c.r[20].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D3ED8; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 160u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 168u), c.f[0]);  if (t) { goto L_003D3EF0; } }
L_003D3ED8:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.budget -= 6;
L_003D3EF0:
    c.r[18].d[0] = c.r[18].d[0] << 56;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.r[16].d[0] = c.r[23].d[0] << 56;
    set32(c.r[2], c.r[18].w[0] << 6);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[21], 0u - 16384u);
    set32(c.r[3], 0u + 16384u);
    set32(c.r[4], c.r[2].w[0] + 1984u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3F1Cu); if (c.r[16].d[0] != 0) c.r[21].d[0] = c.r[3].d[0];  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003D3F1Cu) [[unlikely]] return; }
L_003D3F1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3F24u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x003D3F24u) [[unlikely]] return; }
L_003D3F24:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3F34u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003D3F34u) [[unlikely]] return; }
L_003D3F34:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3F40u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D3F40u) [[unlikely]] return; }
L_003D3F40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3F48u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003D3F48u) [[unlikely]] return; }
L_003D3F48:
    c.f[1] = ld32((c.r[29].w[0] + 152u));
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3F5Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D3F5Cu) [[unlikely]] return; }
L_003D3F5C:
    c.f[12] = ld32((c.r[29].w[0] + 148u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3F68u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D3F68u) [[unlikely]] return; }
L_003D3F68:
    set32(c.r[3], c.r[18].w[0] << 1);
    set32(c.r[5], c.r[20].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[7], c.r[5].w[0] + 140u);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[6], c.r[4].w[0] + 5056u);
    set32(c.r[4], ld32((c.r[4].w[0] + 5056u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    st32((c.r[5].w[0] + 140u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 140u));
    c.budget -= 14;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[5].w[0] + 140u), c.r[3].w[0]);  if (t) { goto L_003D3FE0; } }
    set32(c.r[4], ld32((c.r[7].w[0])));
    c.r[1].d[0] = 0ull | 32768ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull | 32768ull;  if (t) { goto L_003D3FC8; } }
    c.r[3].d[0] = c.r[4].sd[0] < 11832ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 11832u);  if (t) { goto L_003D3FC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_00B5(c, 2u, depth); } }
L_003D3FC8:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_00B5(c, 2u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), 0u);  if (t) { [[clang::musttail]] return unit_00B5(c, 2u, depth); } }
L_003D3FE0:
    set32(c.r[4], ld32((c.r[7].w[0])));
    c.r[1].d[0] = 0ull | 32768ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull | 32768ull;  if (t) { [[clang::musttail]] return unit_00B5(c, 1u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), 0u);  if (t) { [[clang::musttail]] return unit_00B5(c, 2u, depth); } }
    c.budget -= 1;
    [[clang::musttail]] return unit_00B5(c, 1u, depth);
}

}
