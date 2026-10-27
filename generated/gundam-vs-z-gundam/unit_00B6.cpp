#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B6[4096] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0,
    0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 12, 0, 13, 0, 0, 0, 14,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 17, 0, 18, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0,
    0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 28, 0, 29, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 39, 0, 40, 0, 0, 0, 0, 41, 0,
    0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0,
    0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0,
    104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 119, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    122, 0, 0, 0, 123, 0, 0, 124, 0, 125, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 135, 0, 136, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139,
    0, 0, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0,
    147, 0, 148, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0,
    0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 186, 0, 187, 0,
    0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 197, 0, 198, 0,
    0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 208, 0,
};

void unit_00B6(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003D8000;
    case 2u: goto L_003D801C;
    case 3u: goto L_003D802C;
    case 4u: goto L_003D8038;
    case 5u: goto L_003D8068;
    case 6u: goto L_003D8078;
    case 7u: goto L_003D8098;
    case 8u: goto L_003D80B0;
    case 9u: goto L_003D8158;
    case 10u: goto L_003D81C8;
    case 11u: goto L_003D81D8;
    case 12u: goto L_003D81E4;
    case 13u: goto L_003D81EC;
    case 14u: goto L_003D81FC;
    case 15u: goto L_003D8298;
    case 16u: goto L_003D82A8;
    case 17u: goto L_003D82B4;
    case 18u: goto L_003D82BC;
    case 19u: goto L_003D82D0;
    case 20u: goto L_003D82DC;
    case 21u: goto L_003D8474;
    case 22u: goto L_003D8484;
    case 23u: goto L_003D8490;
    case 24u: goto L_003D8510;
    case 25u: goto L_003D85B0;
    case 26u: goto L_003D8620;
    case 27u: goto L_003D8630;
    case 28u: goto L_003D863C;
    case 29u: goto L_003D8644;
    case 30u: goto L_003D8658;
    case 31u: goto L_003D8664;
    case 32u: goto L_003D8794;
    case 33u: goto L_003D87A4;
    case 34u: goto L_003D87B0;
    case 35u: goto L_003D8830;
    case 36u: goto L_003D88D0;
    case 37u: goto L_003D8940;
    case 38u: goto L_003D8950;
    case 39u: goto L_003D895C;
    case 40u: goto L_003D8964;
    case 41u: goto L_003D8978;
    case 42u: goto L_003D8984;
    case 43u: goto L_003D8AB4;
    case 44u: goto L_003D8AC4;
    case 45u: goto L_003D8AD0;
    case 46u: goto L_003D8B50;
    case 47u: goto L_003D8BE8;
    case 48u: goto L_003D8C08;
    case 49u: goto L_003D8C64;
    case 50u: goto L_003D8C80;
    case 51u: goto L_003D8D00;
    case 52u: goto L_003D8D98;
    case 53u: goto L_003D8DB8;
    case 54u: goto L_003D8E14;
    case 55u: goto L_003D8E30;
    case 56u: goto L_003D8EB0;
    case 57u: goto L_003D8EDC;
    case 58u: goto L_003D8EEC;
    case 59u: goto L_003D8F7C;
    case 60u: goto L_003D9170;
    case 61u: goto L_003D917C;
    case 62u: goto L_003D9208;
    case 63u: goto L_003D9214;
    case 64u: goto L_003D9410;
    case 65u: goto L_003D941C;
    case 66u: goto L_003D94D8;
    case 67u: goto L_003D94E4;
    case 68u: goto L_003D95A0;
    case 69u: goto L_003D95C4;
    case 70u: goto L_003D9678;
    case 71u: goto L_003D96B0;
    case 72u: goto L_003D96E8;
    case 73u: goto L_003D9740;
    case 74u: goto L_003D9798;
    case 75u: goto L_003D97F0;
    case 76u: goto L_003D9828;
    case 77u: goto L_003D9878;
    case 78u: goto L_003D98B0;
    case 79u: goto L_003D98E8;
    case 80u: goto L_003D9990;
    case 81u: goto L_003D99A4;
    case 82u: goto L_003D99D8;
    case 83u: goto L_003D9A50;
    case 84u: goto L_003D9A78;
    case 85u: goto L_003D9AD8;
    case 86u: goto L_003D9B20;
    case 87u: goto L_003D9B68;
    case 88u: goto L_003D9B70;
    case 89u: goto L_003D9BE4;
    case 90u: goto L_003D9C48;
    case 91u: goto L_003D9CB0;
    case 92u: goto L_003D9CD4;
    case 93u: goto L_003D9DA8;
    case 94u: goto L_003D9DD4;
    case 95u: goto L_003D9E00;
    case 96u: goto L_003D9E2C;
    case 97u: goto L_003D9E40;
    case 98u: goto L_003D9E6C;
    case 99u: goto L_003D9EB0;
    case 100u: goto L_003D9F00;
    case 101u: goto L_003D9F08;
    case 102u: goto L_003D9F28;
    case 103u: goto L_003D9F78;
    case 104u: goto L_003D9F80;
    case 105u: goto L_003DA014;
    case 106u: goto L_003DA03C;
    case 107u: goto L_003DA230;
    case 108u: goto L_003DA23C;
    case 109u: goto L_003DA2B0;
    case 110u: goto L_003DA2BC;
    case 111u: goto L_003DA4A8;
    case 112u: goto L_003DA4B4;
    case 113u: goto L_003DA570;
    case 114u: goto L_003DA57C;
    case 115u: goto L_003DA640;
    case 116u: goto L_003DA6E8;
    case 117u: goto L_003DA72C;
    case 118u: goto L_003DA73C;
    case 119u: goto L_003DA748;
    case 120u: goto L_003DA750;
    case 121u: goto L_003DA760;
    case 122u: goto L_003DA800;
    case 123u: goto L_003DA810;
    case 124u: goto L_003DA81C;
    case 125u: goto L_003DA824;
    case 126u: goto L_003DA838;
    case 127u: goto L_003DA844;
    case 128u: goto L_003DA9D4;
    case 129u: goto L_003DA9E4;
    case 130u: goto L_003DA9F0;
    case 131u: goto L_003DAA30;
    case 132u: goto L_003DAAE0;
    case 133u: goto L_003DAB14;
    case 134u: goto L_003DAB24;
    case 135u: goto L_003DAB30;
    case 136u: goto L_003DAB38;
    case 137u: goto L_003DAB4C;
    case 138u: goto L_003DAB58;
    case 139u: goto L_003DAC7C;
    case 140u: goto L_003DAC8C;
    case 141u: goto L_003DAC98;
    case 142u: goto L_003DACA4;
    case 143u: goto L_003DAD80;
    case 144u: goto L_003DAE30;
    case 145u: goto L_003DAE64;
    case 146u: goto L_003DAE74;
    case 147u: goto L_003DAE80;
    case 148u: goto L_003DAE88;
    case 149u: goto L_003DAE9C;
    case 150u: goto L_003DAEA8;
    case 151u: goto L_003DAFCC;
    case 152u: goto L_003DAFDC;
    case 153u: goto L_003DAFE8;
    case 154u: goto L_003DAFF4;
    case 155u: goto L_003DB0D0;
    case 156u: goto L_003DB180;
    case 157u: goto L_003DB220;
    case 158u: goto L_003DB24C;
    case 159u: goto L_003DB25C;
    case 160u: goto L_003DB350;
    case 161u: goto L_003DB378;
    case 162u: goto L_003DB510;
    case 163u: goto L_003DB530;
    case 164u: goto L_003DB544;
    case 165u: goto L_003DB594;
    case 166u: goto L_003DB5F0;
    case 167u: goto L_003DB690;
    case 168u: goto L_003DB69C;
    case 169u: goto L_003DB6D0;
    case 170u: goto L_003DB6D8;
    case 171u: goto L_003DB6F8;
    case 172u: goto L_003DB704;
    case 173u: goto L_003DB738;
    case 174u: goto L_003DB740;
    case 175u: goto L_003DB790;
    case 176u: goto L_003DB7D8;
    case 177u: goto L_003DB820;
    case 178u: goto L_003DB850;
    case 179u: goto L_003DB87C;
    case 180u: goto L_003DB8B0;
    case 181u: goto L_003DB8DC;
    case 182u: goto L_003DB8F0;
    case 183u: goto L_003DB990;
    case 184u: goto L_003DB9D4;
    case 185u: goto L_003DB9E4;
    case 186u: goto L_003DB9F0;
    case 187u: goto L_003DB9F8;
    case 188u: goto L_003DBA0C;
    case 189u: goto L_003DBA18;
    case 190u: goto L_003DBB54;
    case 191u: goto L_003DBB64;
    case 192u: goto L_003DBB70;
    case 193u: goto L_003DBBF0;
    case 194u: goto L_003DBC90;
    case 195u: goto L_003DBCD4;
    case 196u: goto L_003DBCE4;
    case 197u: goto L_003DBCF0;
    case 198u: goto L_003DBCF8;
    case 199u: goto L_003DBD0C;
    case 200u: goto L_003DBD18;
    case 201u: goto L_003DBE54;
    case 202u: goto L_003DBE64;
    case 203u: goto L_003DBE70;
    case 204u: goto L_003DBEF0;
    case 205u: goto L_003DBF98;
    case 206u: goto L_003DBFDC;
    case 207u: goto L_003DBFEC;
    case 208u: goto L_003DBFF8;
    default: bad_entry(c, 0x003D8000u); return;
    }
L_003D8000:
    st8((c.r[17].w[0] + 294u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003D8020; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D801Cu); set32(c.r[5], ld32((c.r[17].w[0] + 372u)));  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EF900u; return; } if (c.pc != 0x003D801Cu) [[unlikely]] return; }
L_003D801C:
    c.budget -= 1;
L_003D8020:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D802Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003D802Cu) [[unlikely]] return; }
L_003D802C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8038u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003D8038u) [[unlikely]] return; }
L_003D8038:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 308u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 308u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_003D8098; } }
    set32(c.r[3], 0u + 30u);
    st8((c.r[17].w[0] + 280u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 294u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D8098; } }
    c.budget -= 1;
L_003D8068:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 294u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D8098; } }
    c.budget -= 1;
L_003D8078:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 294u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D8090; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 280u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D8098; } }
    c.budget -= 1;
L_003D8090:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[17].w[0] + 294u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003D8098:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003D80B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8529u)));
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[17], c.r[18].w[0] + 8248u);  if (t) { goto L_003D84D0; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003D8448; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003D8380; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003D8100; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D84F0; } }
    c.budget -= 1;
L_003D8100:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 70u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D8370; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 600u);  if (t) { goto L_003D8128; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 70u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003D8130; } }
    c.budget -= 1;
L_003D8128:
    set32(c.r[2], 0u + 1200u);
    st16((c.r[17].w[0] + 70u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003D8130:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 2048u);
    set32(c.r[7], 0u + 30720u);
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8158u); set32(c.r[10], 0u + 21u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003D8158u) [[unlikely]] return; }
L_003D8158:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D84F0; } }
    st32((c.r[17].w[0] + 376u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 281u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D81A8; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_003D81C0; } }
L_003D81A8:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 6;
L_003D81C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D81C8u); set32(c.r[4], c.r[18].w[0] + 3328u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003D81C8u) [[unlikely]] return; }
L_003D81C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D81D8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003D81D8u) [[unlikely]] return; }
L_003D81D8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D81E4u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D81E4u) [[unlikely]] return; }
L_003D81E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D81ECu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003D81ECu) [[unlikely]] return; }
L_003D81EC:
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.f[13] = ld32((c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D81FCu); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D81FCu) [[unlikely]] return; }
L_003D81FC:
    set32(c.r[3], c.r[2].w[0] + 16384u);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 5312u)));
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 164u));
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D8240; } }
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 16384u);  if (t) { goto L_003D8240; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 164u), c.r[2].w[0]);  if (t) { goto L_003D8260; } }
L_003D8240:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 49153ull;  if (t) { goto L_003D8260; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull | 49152ull;  if (t) { goto L_003D8260; } }
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 1;
L_003D8260:
    set32(c.r[4], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 5312u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 128u);  if (t) { goto L_003D8288; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 260u), c.r[2].w[0]);  if (t) { goto L_003D8290; } }
L_003D8288:
    set32(c.r[2], 0u + 128u);
    st32((c.r[17].w[0] + 260u), c.r[2].w[0]);
    c.budget -= 2;
L_003D8290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8298u); set32(c.r[4], c.r[18].w[0] + 3392u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003D8298u) [[unlikely]] return; }
L_003D8298:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D82A8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003D82A8u) [[unlikely]] return; }
L_003D82A8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D82B4u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D82B4u) [[unlikely]] return; }
L_003D82B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D82BCu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003D82BCu) [[unlikely]] return; }
L_003D82BC:
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D82D0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D82D0u) [[unlikely]] return; }
L_003D82D0:
    c.f[12] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D82DCu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D82DCu) [[unlikely]] return; }
L_003D82DC:
    set32(c.r[4], ld32((c.r[18].w[0] + 5320u)));
    set32(c.r[3], c.r[2].w[0] - 3095u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    st32((c.r[17].w[0] + 116u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 116u));
    st32((c.r[17].w[0] + 116u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 116u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D8318; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 116u), 0u);  if (t) { goto L_003D8338; } }
    c.budget -= 1;
L_003D8318:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 8193ll ? 1ull : 0ull;  if (t) { goto L_003D8338; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 8192u);  if (t) { goto L_003D8338; } }
    st32((c.r[17].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 2;
L_003D8338:
    set32(c.r[4], ld32((c.r[18].w[0] + 5320u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 116u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 64u);  if (t) { goto L_003D8360; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 212u), c.r[3].w[0]);  if (t) { goto L_003D84F0; } }
L_003D8360:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 212u), c.r[3].w[0]);  if (t) { goto L_003D84F0; } }
    c.budget -= 1;
L_003D8370:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 70u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003D84F0; } }
    c.budget -= 1;
L_003D8380:
    set32(c.r[6], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5312u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003D83B0; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D83C0; } }
    c.budget -= 1;
L_003D83B0:
    st32((c.r[18].w[0] + 5312u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 260u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003D83D8; } }
L_003D83C0:
    set32(c.r[3], ld32((c.r[17].w[0] + 260u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5312u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5312u));
    st32((c.r[18].w[0] + 5312u), c.r[3].w[0]);
    c.budget -= 6;
L_003D83D8:
    set32(c.r[6], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5320u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65504ull;  if (t) { goto L_003D8400; } }
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D8410; } }
L_003D8400:
    st32((c.r[18].w[0] + 5320u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 212u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003D8428; } }
L_003D8410:
    set32(c.r[3], ld32((c.r[17].w[0] + 212u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5320u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5320u));
    st32((c.r[18].w[0] + 5320u), c.r[3].w[0]);
    c.budget -= 6;
L_003D8428:
    c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003D84F0; } }
    st8((c.r[17].w[0] + 281u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 295u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 309u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D84F0; } }
    c.budget -= 1;
L_003D8448:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 295u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D84C0; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[17].w[0] + 295u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003D8478; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8474u); set32(c.r[5], ld32((c.r[17].w[0] + 376u)));  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EF900u; return; } if (c.pc != 0x003D8474u) [[unlikely]] return; }
L_003D8474:
    c.budget -= 1;
L_003D8478:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8484u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003D8484u) [[unlikely]] return; }
L_003D8484:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8490u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003D8490u) [[unlikely]] return; }
L_003D8490:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 309u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 309u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 309u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_003D84F0; } }
    set32(c.r[3], 0u + 30u);
    st8((c.r[17].w[0] + 281u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 295u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D84F0; } }
    c.budget -= 1;
L_003D84C0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 295u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D84F0; } }
    c.budget -= 1;
L_003D84D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 295u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D84E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 281u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D84F0; } }
    c.budget -= 1;
L_003D84E8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[17].w[0] + 295u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003D84F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003D8510:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8530u)));
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 8248u);  if (t) { goto L_003D87F0; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003D8768; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003D8708; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003D8558; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D8810; } }
L_003D8558:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D86F8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 600u);  if (t) { goto L_003D8580; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 72u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003D8588; } }
    c.budget -= 1;
L_003D8580:
    set32(c.r[2], 0u + 1200u);
    st16((c.r[16].w[0] + 72u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003D8588:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 4096u);
    c.r[7].d[0] = 0ull | 63488ull;
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D85B0u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003D85B0u) [[unlikely]] return; }
L_003D85B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D8810; } }
    st32((c.r[16].w[0] + 380u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 282u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D8600; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 72u), c.f[0]);  if (t) { goto L_003D8618; } }
L_003D8600:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.budget -= 6;
L_003D8618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8620u); set32(c.r[4], c.r[17].w[0] + 2048u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003D8620u) [[unlikely]] return; }
L_003D8620:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8630u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003D8630u) [[unlikely]] return; }
L_003D8630:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D863Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D863Cu) [[unlikely]] return; }
L_003D863C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8644u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003D8644u) [[unlikely]] return; }
L_003D8644:
    c.f[1] = ld32((c.r[29].w[0] + 56u));
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8658u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D8658u) [[unlikely]] return; }
L_003D8658:
    c.f[12] = ld32((c.r[29].w[0] + 52u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8664u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D8664u) [[unlikely]] return; }
L_003D8664:
    set32(c.r[3], ld32((c.r[17].w[0] + 5076u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[16].w[0] + 120u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 120u));
    st32((c.r[16].w[0] + 120u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D86A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 120u), 0u);  if (t) { goto L_003D86C0; } }
    c.budget -= 1;
L_003D86A0:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 52794ull;  if (t) { goto L_003D86C0; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 52793ull;  if (t) { goto L_003D86C0; } }
    st32((c.r[16].w[0] + 120u), c.r[3].w[0]);
    c.budget -= 1;
L_003D86C0:
    set32(c.r[4], ld32((c.r[17].w[0] + 5076u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 120u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 64u);  if (t) { goto L_003D86E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 216u), c.r[3].w[0]);  if (t) { goto L_003D8810; } }
L_003D86E8:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 216u), c.r[3].w[0]);  if (t) { goto L_003D8810; } }
    c.budget -= 1;
L_003D86F8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 72u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003D8810; } }
    c.budget -= 1;
L_003D8708:
    set32(c.r[6], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 5076u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65504ull;  if (t) { goto L_003D8730; } }
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D8750; } }
L_003D8730:
    st32((c.r[17].w[0] + 5076u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 216u), 0u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 282u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 296u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 310u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D8810; } }
    c.budget -= 1;
L_003D8750:
    set32(c.r[3], ld32((c.r[16].w[0] + 216u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 5076u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 5076u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 5076u), c.r[3].w[0]);  if (t) { goto L_003D8810; } }
L_003D8768:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 296u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D87E0; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 296u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003D8798; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8794u); set32(c.r[5], ld32((c.r[16].w[0] + 380u)));  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EF900u; return; } if (c.pc != 0x003D8794u) [[unlikely]] return; }
L_003D8794:
    c.budget -= 1;
L_003D8798:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D87A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003D87A4u) [[unlikely]] return; }
L_003D87A4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D87B0u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003D87B0u) [[unlikely]] return; }
L_003D87B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 310u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 310u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 310u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_003D8810; } }
    set32(c.r[3], 0u + 30u);
    st8((c.r[16].w[0] + 282u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 296u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D8810; } }
    c.budget -= 1;
L_003D87E0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 296u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D8810; } }
    c.budget -= 1;
L_003D87F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 296u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D8808; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 282u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D8810; } }
    c.budget -= 1;
L_003D8808:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 296u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003D8810:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003D8830:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8531u)));
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 8248u);  if (t) { goto L_003D8B10; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003D8A88; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003D8A28; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003D8878; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D8B30; } }
L_003D8878:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 74u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D8A18; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 600u);  if (t) { goto L_003D88A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 74u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003D88A8; } }
    c.budget -= 1;
L_003D88A0:
    set32(c.r[2], 0u + 1200u);
    st16((c.r[16].w[0] + 74u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003D88A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 2048u);
    c.r[7].d[0] = 0ull | 61440ull;
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D88D0u); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003D88D0u) [[unlikely]] return; }
L_003D88D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D8B30; } }
    st32((c.r[16].w[0] + 384u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 283u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D8920; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 72u), c.f[0]);  if (t) { goto L_003D8938; } }
L_003D8920:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.budget -= 6;
L_003D8938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8940u); set32(c.r[4], c.r[17].w[0] + 2112u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003D8940u) [[unlikely]] return; }
L_003D8940:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8950u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003D8950u) [[unlikely]] return; }
L_003D8950:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D895Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D895Cu) [[unlikely]] return; }
L_003D895C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8964u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003D8964u) [[unlikely]] return; }
L_003D8964:
    c.f[1] = ld32((c.r[29].w[0] + 56u));
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8978u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D8978u) [[unlikely]] return; }
L_003D8978:
    c.f[12] = ld32((c.r[29].w[0] + 52u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8984u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D8984u) [[unlikely]] return; }
L_003D8984:
    set32(c.r[3], ld32((c.r[17].w[0] + 5088u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[16].w[0] + 124u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 124u));
    st32((c.r[16].w[0] + 124u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D89C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 124u), 0u);  if (t) { goto L_003D89E0; } }
    c.budget -= 1;
L_003D89C0:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 52794ull;  if (t) { goto L_003D89E0; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 52793ull;  if (t) { goto L_003D89E0; } }
    st32((c.r[16].w[0] + 124u), c.r[3].w[0]);
    c.budget -= 1;
L_003D89E0:
    set32(c.r[4], ld32((c.r[17].w[0] + 5088u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 124u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 64u);  if (t) { goto L_003D8A08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 220u), c.r[3].w[0]);  if (t) { goto L_003D8B30; } }
L_003D8A08:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 220u), c.r[3].w[0]);  if (t) { goto L_003D8B30; } }
    c.budget -= 1;
L_003D8A18:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003D8B30; } }
    c.budget -= 1;
L_003D8A28:
    set32(c.r[6], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 5088u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65504ull;  if (t) { goto L_003D8A50; } }
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D8A70; } }
L_003D8A50:
    st32((c.r[17].w[0] + 5088u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 220u), 0u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 283u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 297u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 311u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D8B30; } }
    c.budget -= 1;
L_003D8A70:
    set32(c.r[3], ld32((c.r[16].w[0] + 220u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 5088u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 5088u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 5088u), c.r[3].w[0]);  if (t) { goto L_003D8B30; } }
L_003D8A88:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 297u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D8B00; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 297u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003D8AB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8AB4u); set32(c.r[5], ld32((c.r[16].w[0] + 384u)));  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EF900u; return; } if (c.pc != 0x003D8AB4u) [[unlikely]] return; }
L_003D8AB4:
    c.budget -= 1;
L_003D8AB8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8AC4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003D8AC4u) [[unlikely]] return; }
L_003D8AC4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8AD0u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003D8AD0u) [[unlikely]] return; }
L_003D8AD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 311u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 311u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 311u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_003D8B30; } }
    set32(c.r[3], 0u + 30u);
    st8((c.r[16].w[0] + 283u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 297u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D8B30; } }
    c.budget -= 1;
L_003D8B00:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 297u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D8B30; } }
    c.budget -= 1;
L_003D8B10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 297u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D8B28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 283u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D8B30; } }
    c.budget -= 1;
L_003D8B28:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 297u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003D8B30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003D8B50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8532u)));
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[16], c.r[17].w[0] + 8248u);  if (t) { goto L_003D8CC0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003D8C38; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003D8B90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D8CE0; } }
L_003D8B90:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D8C28; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 300u);  if (t) { goto L_003D8BB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 76u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003D8BC0; } }
    c.budget -= 1;
L_003D8BB8:
    set32(c.r[2], 0u + 600u);
    st16((c.r[16].w[0] + 76u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003D8BC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    set32(c.r[5], 0u + 4096u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 18432u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8BE8u); set32(c.r[10], 0u + 5u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003D8BE8u) [[unlikely]] return; }
L_003D8BE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D8CE0; } }
    st32((c.r[16].w[0] + 388u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 298u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8C08u); st8((c.r[16].w[0] + 312u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003D8C08u) [[unlikely]] return; }
L_003D8C08:
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    st8((c.r[16].w[0] + 326u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 326u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 326u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D8CE0; } }
    c.budget -= 1;
L_003D8C28:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 76u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003D8CE0; } }
    c.budget -= 1;
L_003D8C38:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 298u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D8CB0; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 298u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003D8C68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8C64u); set32(c.r[5], ld32((c.r[16].w[0] + 388u)));  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EF900u; return; } if (c.pc != 0x003D8C64u) [[unlikely]] return; }
L_003D8C64:
    c.budget -= 1;
L_003D8C68:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 326u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 312u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8C80u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003D8C80u) [[unlikely]] return; }
L_003D8C80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 312u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 312u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 312u)));
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_003D8CE0; } }
    set32(c.r[3], 0u + 30u);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 298u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D8CE0; } }
    c.budget -= 1;
L_003D8CB0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 298u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D8CE0; } }
    c.budget -= 1;
L_003D8CC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 298u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D8CD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D8CE0; } }
    c.budget -= 1;
L_003D8CD8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 298u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003D8CE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D8D00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8533u)));
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[16], c.r[17].w[0] + 8248u);  if (t) { goto L_003D8E70; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003D8DE8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003D8D40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D8E90; } }
L_003D8D40:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 78u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D8DD8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 300u);  if (t) { goto L_003D8D68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 78u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003D8D70; } }
    c.budget -= 1;
L_003D8D68:
    set32(c.r[2], 0u + 600u);
    st16((c.r[16].w[0] + 78u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003D8D70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.r[5].d[0] = 0ull | 47104ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[6].d[0] = 0ull | 61440ull;
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8D98u); set32(c.r[10], 0u + 13u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003D8D98u) [[unlikely]] return; }
L_003D8D98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D8E90; } }
    st32((c.r[16].w[0] + 392u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 285u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 299u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8DB8u); st8((c.r[16].w[0] + 313u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003D8DB8u) [[unlikely]] return; }
L_003D8DB8:
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    st8((c.r[16].w[0] + 327u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 327u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 327u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D8E90; } }
    c.budget -= 1;
L_003D8DD8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 78u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003D8E90; } }
    c.budget -= 1;
L_003D8DE8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 299u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D8E60; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 299u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003D8E18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8E14u); set32(c.r[5], ld32((c.r[16].w[0] + 392u)));  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EF900u; return; } if (c.pc != 0x003D8E14u) [[unlikely]] return; }
L_003D8E14:
    c.budget -= 1;
L_003D8E18:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 327u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 313u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 18u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8E30u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003D8E30u) [[unlikely]] return; }
L_003D8E30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 313u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 313u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 313u)));
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_003D8E90; } }
    set32(c.r[3], 0u + 30u);
    st8((c.r[16].w[0] + 285u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 299u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D8E90; } }
    c.budget -= 1;
L_003D8E60:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 299u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D8E90; } }
    c.budget -= 1;
L_003D8E70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 299u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D8E88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 285u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D8E90; } }
    c.budget -= 1;
L_003D8E88:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 299u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003D8E90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D8EB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[16], c.r[17].w[0] + 8248u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8EDCu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x003D8EDCu) [[unlikely]] return; }
L_003D8EDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D8F58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8EECu);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003D8EECu) [[unlikely]] return; }
L_003D8EEC:
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
L_003D8F58:
    c.f[3] = ld32((c.r[17].w[0] + 1856u));
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0] + 1864u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[21] = fp::sub(c.f[3], c.f[2]);
    c.f[20] = fp::sub(c.f[1], c.f[0]);
    c.f[12] = c.f[21];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D8F7Cu); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D8F7Cu) [[unlikely]] return; }
L_003D8F7C:
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = 0ull | 63488ull;
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.r[5].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[5].sd[0] < 2049ll ? 1ull : 0ull;  if (t) { goto L_003D8FA8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D9010; } }
    c.budget -= 1;
L_003D8FA8:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003D8FC0; } }
    set32(c.r[3], c.r[3].w[0] - 16u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003D8FD0; } }
L_003D8FC0:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_003D8FD0; } }
    set32(c.r[3], c.r[3].w[0] + 16u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_003D8FD0:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003D8FE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_003D90F0; } }
    c.budget -= 1;
L_003D8FE8:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_003D9000; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_003D90F0; } }
L_003D9000:
    set32(c.r[3], 0u - 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_003D90F0; } }
    c.budget -= 1;
L_003D9010:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D9088; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.r[3].d[0] = c.r[4].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 64u);  if (t) { goto L_003D9038; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003D9040; } }
L_003D9038:
    set32(c.r[3], c.r[4].w[0] + 16u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_003D9040:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.r[1].d[0] = 0ull | 61441ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_003D9070; } }
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D9070; } }
    c.r[3].d[0] = 0ull | 61440ull;
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_003D90F0; } }
L_003D9070:
    c.r[3].d[0] = c.r[5].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 8u);  if (t) { goto L_003D90F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_003D90F0; } }
    c.budget -= 1;
L_003D9088:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.r[1].d[0] = c.r[3].sd[0] < -63ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D90A8; } }
    set32(c.r[3], 0u - 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003D90B0; } }
    c.budget -= 1;
L_003D90A8:
    set32(c.r[3], c.r[3].w[0] - 16u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_003D90B0:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.r[3].d[0] = c.r[4].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_003D90D8; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 4096u);  if (t) { goto L_003D90D8; } }
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_003D90F0; } }
L_003D90D8:
    c.r[1].d[0] = 0ull | 61441ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_003D90F0; } }
    st32((c.r[17].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 2;
L_003D90F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 2ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D9110; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 336u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003D9110:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D9350; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_003D9308; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003D92B8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003D9140; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D9580; } }
L_003D9140:
    c.f[1] = ld32((c.r[17].w[0] + 1860u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D91E0; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.f[1] = ld32((c.r[17].w[0] + 1860u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9170u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D9170u) [[unlikely]] return; }
L_003D9170:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D917Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D917Cu) [[unlikely]] return; }
L_003D917C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[2] = c.r[3].w[0];
    c.f[1] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D91B8; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D91C8; } }
    c.budget -= 1;
L_003D91B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
L_003D91C8:
    set32(c.r[3], 0u - 1u);
    fpu_div(c, 20u, c.f[20], c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[20]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003D9580; } }
L_003D91E0:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D9278; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9208u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D9208u) [[unlikely]] return; }
L_003D9208:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9214u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D9214u) [[unlikely]] return; }
L_003D9214:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[2] = c.r[3].w[0];
    c.f[1] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D9250; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D9260; } }
    c.budget -= 1;
L_003D9250:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
L_003D9260:
    set32(c.r[3], 0u + 1u);
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.f[0] = c.f[20] ^ fp::kSign;
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003D9580; } }
L_003D9278:
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003D9290; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_003D9580; } }
    c.budget -= 1;
L_003D9290:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D92A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[4].w[0]);  if (t) { goto L_003D9580; } }
L_003D92A8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003D9580; } }
    c.budget -= 1;
L_003D92B8:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D92D8; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_003D9580; } }
L_003D92D8:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[1].d[0] = 0ull | 64513ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_003D9580; } }
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D9580; } }
    c.r[3].d[0] = 0ull | 64512ull;
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_003D9580; } }
L_003D9308:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D9328; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_003D9580; } }
L_003D9328:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[3].d[0] = c.r[4].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_003D9580; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 1024u);  if (t) { goto L_003D9580; } }
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_003D9580; } }
L_003D9350:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_003D94C0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003D93F8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003D9378; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D9580; } }
L_003D9378:
    c.f[1] = ld32((c.r[17].w[0] + 1860u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D93A0; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003D9580; } }
    c.budget -= 1;
L_003D93A0:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D93B8; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[4].w[0]);  if (t) { goto L_003D9580; } }
L_003D93B8:
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003D93D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_003D9580; } }
    c.budget -= 1;
L_003D93D0:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D93E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[4].w[0]);  if (t) { goto L_003D9580; } }
L_003D93E8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003D9580; } }
    c.budget -= 1;
L_003D93F8:
    c.f[1] = ld32((c.r[17].w[0] + 1860u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9410u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D9410u) [[unlikely]] return; }
L_003D9410:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D941Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D941Cu) [[unlikely]] return; }
L_003D941C:
    c.f[2] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D9450; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D9460; } }
    c.budget -= 1;
L_003D9450:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
L_003D9460:
    fpu_div(c, 20u, c.f[20], c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[20]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D9490; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_003D9580; } }
    c.budget -= 1;
L_003D9490:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[1].d[0] = 0ull | 64513ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_003D9580; } }
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D9580; } }
    c.r[3].d[0] = 0ull | 64512ull;
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_003D9580; } }
L_003D94C0:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D94D8u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D94D8u) [[unlikely]] return; }
L_003D94D8:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D94E4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D94E4u) [[unlikely]] return; }
L_003D94E4:
    c.f[2] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D9518; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D9528; } }
    c.budget -= 1;
L_003D9518:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
L_003D9528:
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.f[0] = c.f[20] ^ fp::kSign;
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D9558; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_003D9580; } }
L_003D9558:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[3].d[0] = c.r[4].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_003D9580; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 1024u);  if (t) { goto L_003D9580; } }
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 3;
L_003D9580:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D95A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D95C4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x003D95C4u) [[unlikely]] return; }
L_003D95C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], c.r[3].w[0] - 20864u);
    st32((c.r[17].w[0] + 636u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_003D99E0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[5].w[0] << 3);  if (t) { goto L_003D9620; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8662u)));
    set32(c.r[3], c.r[3].w[0] - 22528u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 2));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[17].w[0] + 500u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 498u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 496u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 11;
L_003D9620:
    st16((c.r[16].w[0] + 88u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 300u);
    st16((c.r[16].w[0] + 90u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 600u);
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 900u);
    st16((c.r[16].w[0] + 92u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 26u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 94u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 27u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006C0000u);  if (t) { goto L_003D9920; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 13728u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003D8000u < 16384u) { entry = entries_00B6[(t - 0x003D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003D9678:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], c.r[3].w[0] - 22496u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], c.r[3].w[0] - 22336u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[16].w[0] + 100u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_003D9920; } }
    c.budget -= 1;
L_003D96B0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], c.r[3].w[0] - 22288u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], c.r[3].w[0] - 22128u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[16].w[0] + 100u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_003D9920; } }
    c.budget -= 1;
L_003D96E8:
    set32(c.r[6], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], c.r[3].w[0] - 22080u);
    set32(c.r[5], 0u + 6u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], 0u + 9u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], c.r[3].w[0] - 21920u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 98u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    st8((c.r[16].w[0] + 99u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    st8((c.r[16].w[0] + 100u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_003D9920; } }
    c.budget -= 1;
L_003D9740:
    set32(c.r[6], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], c.r[3].w[0] - 21872u);
    set32(c.r[5], 0u + 6u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], 0u + 9u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], c.r[3].w[0] - 21712u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 98u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    st8((c.r[16].w[0] + 99u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    st8((c.r[16].w[0] + 100u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_003D9920; } }
    c.budget -= 1;
L_003D9798:
    set32(c.r[5], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] - 21664u);
    set32(c.r[4], 0u + 3u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], c.r[3].w[0] - 21504u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], 0u + 5u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], 0u + 6u);
    st8((c.r[16].w[0] + 98u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 9u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    st8((c.r[16].w[0] + 99u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    st8((c.r[16].w[0] + 100u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_003D9920; } }
L_003D97F0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], c.r[3].w[0] - 21456u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], c.r[3].w[0] - 21360u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[16].w[0] + 100u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_003D9920; } }
    c.budget -= 1;
L_003D9828:
    set32(c.r[5], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] - 21328u);
    set32(c.r[4], 0u + 6u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], c.r[3].w[0] - 21216u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    st8((c.r[16].w[0] + 98u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    st8((c.r[16].w[0] + 99u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 100u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_003D9920; } }
L_003D9878:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], c.r[3].w[0] - 21184u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], c.r[3].w[0] - 21120u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    st8((c.r[16].w[0] + 100u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_003D9920; } }
    c.budget -= 1;
L_003D98B0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], c.r[3].w[0] - 21104u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], c.r[3].w[0] - 20912u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    st8((c.r[16].w[0] + 100u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_003D9920; } }
    c.budget -= 1;
L_003D98E8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], c.r[3].w[0] - 22080u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], c.r[3].w[0] - 21920u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    st8((c.r[16].w[0] + 100u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 14;
L_003D9920:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 20288u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    st32((c.r[17].w[0] + 1236u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    st32((c.r[17].w[0] + 96u), 0u);
    st32((c.r[17].w[0] + 100u), 0u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[17].w[0] + 1856u), c.f[3]);
    st32((c.r[17].w[0] + 1860u), c.f[2]);
    st32((c.r[17].w[0] + 1864u), c.f[1]);
    st32((c.r[17].w[0] + 1868u), c.f[0]);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 101u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.budget -= 28;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003D99B8; } }
L_003D9990:
    set32(c.r[2], c.r[18].w[0] + 49u);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D99A4u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_003D(c, 283u, depth + 1u); else { c.pc = 0x001F6BC0u; return; } if (c.pc != 0x003D99A4u) [[unlikely]] return; }
L_003D99A4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D9990u | kUnwind; return; } goto L_003D9990; } }
L_003D99B8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 6u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003D9A38; } }
    set32(c.r[5], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D99D8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x003D99D8u) [[unlikely]] return; }
L_003D99D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D9A38; } }
L_003D99E0:
    set32(c.r[3], 0u + 1000u);
    st16((c.r[17].w[0] + 496u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st16((c.r[17].w[0] + 498u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] - 20288u);
    st16((c.r[17].w[0] + 500u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 5097u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u - 5097u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    st32((c.r[17].w[0] + 1236u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 5072u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 5084u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 104u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    st16((c.r[16].w[0] + 88u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 90u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 92u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 94u), static_cast<std::uint16_t>(0u));
    c.budget -= 22;
L_003D9A38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D9A50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003D9D80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9A78u); set32(c.r[16], c.r[17].w[0] + 304u);  if (depth < kMaxDepth) unit_00B6(c, 97u, depth + 1u); else { c.pc = 0x003D9E40u; return; } if (c.pc != 0x003D9A78u) [[unlikely]] return; }
L_003D9A78:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003D9B70; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003D9B70; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D9AD8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_003D9AD0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003D9AD0; } }
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], 0u - 385u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1236u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[2].w[0]);  if (t) { goto L_003D9AD8; } }
L_003D9AD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9AD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 115u, depth + 1u); else { c.pc = 0x003DA640u; return; } if (c.pc != 0x003D9AD8u) [[unlikely]] return; }
L_003D9AD8:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D9B20; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_003D9B18; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003D9B18; } }
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[2], 0u - 1025u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1236u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[2].w[0]);  if (t) { goto L_003D9B20; } }
    c.budget -= 1;
L_003D9B18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9B20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 131u, depth + 1u); else { c.pc = 0x003DAA30u; return; } if (c.pc != 0x003D9B20u) [[unlikely]] return; }
L_003D9B20:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D9B68; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_003D9B60; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003D9B60; } }
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[2], 0u - 4097u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1236u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[2].w[0]);  if (t) { goto L_003D9B68; } }
    c.budget -= 1;
L_003D9B60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9B68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 143u, depth + 1u); else { c.pc = 0x003DAD80u; return; } if (c.pc != 0x003D9B68u) [[unlikely]] return; }
L_003D9B68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9B70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 155u, depth + 1u); else { c.pc = 0x003DB0D0u; return; } if (c.pc != 0x003D9B70u) [[unlikely]] return; }
L_003D9B70:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 21u)));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D9B8C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 275u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003D9B8C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D9BE8; } }
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9BE4u); st32((c.r[17].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 73u, depth + 1u); else { c.pc = 0x00195590u; return; } if (c.pc != 0x003D9BE4u) [[unlikely]] return; }
L_003D9BE4:
    c.budget -= 1;
L_003D9BE8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_003D9DE8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 513u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D9DE8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D9DE8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 101u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003D9CE0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003D9C60; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D9C38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D9DE8; } }
L_003D9C38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9C48u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 113u, depth + 1u); else { c.pc = 0x003AD5D0u; return; } if (c.pc != 0x003D9C48u) [[unlikely]] return; }
L_003D9C48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D9DE8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 101u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 101u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D9DE8; } }
L_003D9C60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D9C88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_003D9CA0; } }
    c.budget -= 1;
L_003D9C88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 6;
L_003D9CA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9CB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 117u, depth + 1u); else { c.pc = 0x003AD6C0u; return; } if (c.pc != 0x003D9CB0u) [[unlikely]] return; }
L_003D9CB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D9DE8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 101u)));
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 101u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9CD4u); st8((c.r[17].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0071(c, 43u, depth + 1u); else { c.pc = 0x002C4A90u; return; } if (c.pc != 0x003D9CD4u) [[unlikely]] return; }
L_003D9CD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D9DE8; } }
    c.budget -= 1;
L_003D9CE0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D9D38; } }
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D9D18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_003D9DE8; } }
L_003D9D18:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_003D9DE8; } }
    c.budget -= 1;
L_003D9D38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D9D60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_003D9DE8; } }
    c.budget -= 1;
L_003D9D60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_003D9DE8; } }
    c.budget -= 1;
L_003D9D80:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003D9DA0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D9DE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D9DE8; } }
L_003D9DA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9DA8u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x003D9DA8u) [[unlikely]] return; }
L_003D9DA8:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9DD4u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x003D9DD4u) [[unlikely]] return; }
L_003D9DD4:
    c.f[2] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.budget -= 5;
L_003D9DE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D9E00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 32u);  if (t) { goto L_003D9E30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9E2Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 153u, depth + 1u); else { c.pc = 0x0023A1C0u; return; } if (c.pc != 0x003D9E2Cu) [[unlikely]] return; }
L_003D9E2C:
    c.budget -= 1;
L_003D9E30:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D9E40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[16], c.r[17].w[0] + 304u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9E6Cu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x003D9E6Cu) [[unlikely]] return; }
L_003D9E6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D9FE8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_003D9F78; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006C0000u);  if (t) { goto L_003D9F78; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 13776u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003D8000u < 16384u) { entry = entries_00B6[(t - 0x003D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003D9EB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 97u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003D9EE8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 96u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D9F78; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 98u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003D9F78; } }
    c.budget -= 1;
L_003D9EE8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 99u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003D9F78; } }
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9F00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x003D9F00u) [[unlikely]] return; }
L_003D9F00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DA618; } }
L_003D9F08:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[6].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_003D9F78; } }
    st16((c.r[17].w[0] + 498u), static_cast<std::uint16_t>(0u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 27856u);
    c.budget -= 4;
L_003D9F28:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003D9F58; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D9F58; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D9F58; } }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 2;
L_003D9F58:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D9F28u | kUnwind; return; } goto L_003D9F28; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003D9F78; } }
    st32((c.r[17].w[0] + 592u), c.r[5].w[0]);
    c.budget -= 2;
L_003D9F78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D9F80u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003D9F80u) [[unlikely]] return; }
L_003D9F80:
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
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
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
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
    c.budget -= 26;
L_003D9FE8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003DA018; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003DA018; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA014u);  if (depth < kMaxDepth) unit_00AB(c, 98u, depth + 1u); else { c.pc = 0x003AD1B0u; return; } if (c.pc != 0x003DA014u) [[unlikely]] return; }
L_003DA014:
    c.budget -= 1;
L_003DA018:
    c.f[3] = ld32((c.r[17].w[0] + 1856u));
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0] + 1864u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[21] = fp::sub(c.f[3], c.f[2]);
    c.f[20] = fp::sub(c.f[1], c.f[0]);
    c.f[12] = c.f[21];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA03Cu); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003DA03Cu) [[unlikely]] return; }
L_003DA03C:
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = 0ull | 63488ull;
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.r[5].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[5].sd[0] < 2049ll ? 1ull : 0ull;  if (t) { goto L_003DA068; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003DA0D0; } }
    c.budget -= 1;
L_003DA068:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003DA080; } }
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003DA090; } }
L_003DA080:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_003DA090; } }
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_003DA090:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003DA0A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_003DA1B0; } }
    c.budget -= 1;
L_003DA0A8:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 32u);  if (t) { goto L_003DA0C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_003DA1B0; } }
L_003DA0C0:
    set32(c.r[3], 0u - 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_003DA1B0; } }
    c.budget -= 1;
L_003DA0D0:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003DA148; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.r[3].d[0] = c.r[4].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 128u);  if (t) { goto L_003DA0F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003DA100; } }
L_003DA0F8:
    set32(c.r[3], c.r[4].w[0] + 4u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_003DA100:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.r[1].d[0] = 0ull | 61441ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_003DA130; } }
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DA130; } }
    c.r[3].d[0] = 0ull | 61440ull;
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_003DA1B0; } }
L_003DA130:
    c.r[3].d[0] = c.r[5].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 32u);  if (t) { goto L_003DA1B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_003DA1B0; } }
    c.budget -= 1;
L_003DA148:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.r[1].d[0] = c.r[3].sd[0] < -127ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003DA168; } }
    set32(c.r[3], 0u - 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003DA170; } }
    c.budget -= 1;
L_003DA168:
    set32(c.r[3], c.r[3].w[0] - 4u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_003DA170:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.r[3].d[0] = c.r[4].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_003DA198; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 4096u);  if (t) { goto L_003DA198; } }
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_003DA1B0; } }
L_003DA198:
    c.r[1].d[0] = 0ull | 61441ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 32u);  if (t) { goto L_003DA1B0; } }
    st32((c.r[17].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 2;
L_003DA1B0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 2ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DA1D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 100u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003DA1D0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DA3E0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003DA398; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003DA348; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003DA200; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DA618; } }
L_003DA200:
    c.f[1] = ld32((c.r[17].w[0] + 1860u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003DA288; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.f[1] = ld32((c.r[17].w[0] + 1860u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA230u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003DA230u) [[unlikely]] return; }
L_003DA230:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA23Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003DA23Cu) [[unlikely]] return; }
L_003DA23C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DA260; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003DA270; } }
    c.budget -= 1;
L_003DA260:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
L_003DA270:
    set32(c.r[3], 0u - 10u);
    fpu_div(c, 20u, c.f[20], c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[20]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003DA618; } }
L_003DA288:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DA308; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA2B0u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003DA2B0u) [[unlikely]] return; }
L_003DA2B0:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA2BCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003DA2BCu) [[unlikely]] return; }
L_003DA2BC:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DA2E0; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003DA2F0; } }
    c.budget -= 1;
L_003DA2E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
L_003DA2F0:
    set32(c.r[3], 0u + 10u);
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.f[0] = c.f[20] ^ fp::kSign;
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003DA618; } }
L_003DA308:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003DA320; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_003DA618; } }
    c.budget -= 1;
L_003DA320:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 10u);  if (t) { goto L_003DA338; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003DA618; } }
L_003DA338:
    set32(c.r[3], 0u - 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003DA618; } }
    c.budget -= 1;
L_003DA348:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DA368; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_003DA618; } }
L_003DA368:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[1].d[0] = 0ull | 63489ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_003DA618; } }
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DA618; } }
    c.r[3].d[0] = 0ull | 63488ull;
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_003DA618; } }
L_003DA398:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003DA3B8; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_003DA618; } }
L_003DA3B8:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[3].d[0] = c.r[4].sd[0] < 2048ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_003DA618; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 2048u);  if (t) { goto L_003DA618; } }
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_003DA618; } }
L_003DA3E0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003DA558; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003DA490; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003DA408; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DA618; } }
L_003DA408:
    c.f[1] = ld32((c.r[17].w[0] + 1860u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003DA430; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u - 10u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003DA618; } }
    c.budget -= 1;
L_003DA430:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DA450; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003DA618; } }
    c.budget -= 1;
L_003DA450:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003DA468; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_003DA618; } }
    c.budget -= 1;
L_003DA468:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 10u);  if (t) { goto L_003DA480; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003DA618; } }
L_003DA480:
    set32(c.r[3], 0u - 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003DA618; } }
    c.budget -= 1;
L_003DA490:
    c.f[1] = ld32((c.r[17].w[0] + 1860u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA4A8u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003DA4A8u) [[unlikely]] return; }
L_003DA4A8:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA4B4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003DA4B4u) [[unlikely]] return; }
L_003DA4B4:
    c.f[2] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DA4E8; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003DA4F8; } }
    c.budget -= 1;
L_003DA4E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
L_003DA4F8:
    fpu_div(c, 20u, c.f[20], c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[20]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DA528; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_003DA618; } }
    c.budget -= 1;
L_003DA528:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[1].d[0] = 0ull | 63489ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_003DA618; } }
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DA618; } }
    c.r[3].d[0] = 0ull | 63488ull;
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_003DA618; } }
L_003DA558:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA570u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003DA570u) [[unlikely]] return; }
L_003DA570:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA57Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003DA57Cu) [[unlikely]] return; }
L_003DA57C:
    c.f[2] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DA5B0; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003DA5C0; } }
    c.budget -= 1;
L_003DA5B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
L_003DA5C0:
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.f[0] = c.f[20] ^ fp::kSign;
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003DA5F0; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_003DA618; } }
L_003DA5F0:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[3].d[0] = c.r[4].sd[0] < 2048ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_003DA618; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 2048u);  if (t) { goto L_003DA618; } }
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 3;
L_003DA618:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003DA640:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 328u)));
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[17], c.r[18].w[0] + 304u);  if (t) { goto L_003DA9F8; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_003DA9B0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003DA8F0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003DA690; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DAA18; } }
L_003DA690:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DA8E0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 300u);  if (t) { goto L_003DA6B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 88u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003DA6C0; } }
    c.budget -= 1;
L_003DA6B8:
    set32(c.r[2], 0u + 600u);
    st16((c.r[17].w[0] + 88u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003DA6C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44160000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 21845u);
    c.r[7].d[0] = 0ull | 43690ull;
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA6E8u); set32(c.r[10], 0u + 7u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003DA6E8u) [[unlikely]] return; }
L_003DA6E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DAA18; } }
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[18].w[0] + 2432u);
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA72Cu); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003DA72Cu) [[unlikely]] return; }
L_003DA72C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA73Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003DA73Cu) [[unlikely]] return; }
L_003DA73C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA748u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003DA748u) [[unlikely]] return; }
L_003DA748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA750u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003DA750u) [[unlikely]] return; }
L_003DA750:
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.f[13] = ld32((c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA760u); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003DA760u) [[unlikely]] return; }
L_003DA760:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 5144u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 52u));
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003DA7A8; } }
    c.r[2].d[0] = c.r[3].sd[0] < 21845ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 21845u);  if (t) { goto L_003DA7A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003DA7C8; } }
    c.budget -= 1;
L_003DA7A8:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 43691ull;  if (t) { goto L_003DA7C8; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull | 43690ull;  if (t) { goto L_003DA7C8; } }
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 1;
L_003DA7C8:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 5144u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 128u);  if (t) { goto L_003DA7F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_003DA7F8; } }
L_003DA7F0:
    set32(c.r[2], 0u + 128u);
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 2;
L_003DA7F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA800u); set32(c.r[4], c.r[18].w[0] + 2496u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003DA800u) [[unlikely]] return; }
L_003DA800:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA810u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003DA810u) [[unlikely]] return; }
L_003DA810:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA81Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003DA81Cu) [[unlikely]] return; }
L_003DA81C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA824u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003DA824u) [[unlikely]] return; }
L_003DA824:
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA838u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003DA838u) [[unlikely]] return; }
L_003DA838:
    c.f[12] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA844u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003DA844u) [[unlikely]] return; }
L_003DA844:
    set32(c.r[3], ld32((c.r[18].w[0] + 5160u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 40u));
    st32((c.r[17].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[4].sd[0] < 1820ll ? 1ull : 0ull;  if (t) { goto L_003DA888; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DA888; } }
    set32(c.r[3], 0u + 1820u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 40u), c.r[3].w[0]);  if (t) { goto L_003DA8A8; } }
L_003DA888:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 62806ull;  if (t) { goto L_003DA8A8; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 62805ull;  if (t) { goto L_003DA8A8; } }
    st32((c.r[17].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 1;
L_003DA8A8:
    set32(c.r[4], ld32((c.r[18].w[0] + 5160u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 64u);  if (t) { goto L_003DA8D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 64u), c.r[3].w[0]);  if (t) { goto L_003DAA18; } }
L_003DA8D0:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 64u), c.r[3].w[0]);  if (t) { goto L_003DAA18; } }
    c.budget -= 1;
L_003DA8E0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 88u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003DAA18; } }
    c.budget -= 1;
L_003DA8F0:
    set32(c.r[6], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5144u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003DA920; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DA930; } }
    c.budget -= 1;
L_003DA920:
    st32((c.r[18].w[0] + 5144u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 76u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003DA948; } }
L_003DA930:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5144u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5144u));
    st32((c.r[18].w[0] + 5144u), c.r[3].w[0]);
    c.budget -= 6;
L_003DA948:
    set32(c.r[6], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5160u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65504ull;  if (t) { goto L_003DA970; } }
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DA980; } }
L_003DA970:
    st32((c.r[18].w[0] + 5160u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 64u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003DA998; } }
L_003DA980:
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5160u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5160u));
    st32((c.r[18].w[0] + 5160u), c.r[3].w[0]);
    c.budget -= 6;
L_003DA998:
    c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003DAA18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003DAA18; } }
    c.budget -= 1;
L_003DA9B0:
    st8((c.r[17].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 30u);
    st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003DA9D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA9D4u); set32(c.r[5], ld32((c.r[17].w[0] + 104u)));  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EF900u; return; } if (c.pc != 0x003DA9D4u) [[unlikely]] return; }
L_003DA9D4:
    c.budget -= 1;
L_003DA9D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA9E4u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003DA9E4u) [[unlikely]] return; }
L_003DA9E4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DA9F0u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003DA9F0u) [[unlikely]] return; }
L_003DA9F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DAA18; } }
L_003DA9F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DAA10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 24u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003DAA18; } }
    c.budget -= 1;
L_003DAA10:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003DAA18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003DAA30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[5], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 329u)));
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_003DACD8; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003DACB0; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_003DAC58; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003DABD8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003DAA88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DAD60; } }
L_003DAA88:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 90u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DABC8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 300u);  if (t) { goto L_003DAAB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 90u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003DAAB8; } }
    c.budget -= 1;
L_003DAAB0:
    set32(c.r[2], 0u + 600u);
    st16((c.r[16].w[0] + 90u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003DAAB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44160000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 4096u);
    c.r[7].d[0] = 0ull | 61440ull;
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 16384u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAAE0u); set32(c.r[10], 0u + 10u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003DAAE0u) [[unlikely]] return; }
L_003DAAE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DAD60; } }
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[17].w[0] + 2624u);
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAB14u); st32((c.r[29].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003DAB14u) [[unlikely]] return; }
L_003DAB14:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAB24u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003DAB24u) [[unlikely]] return; }
L_003DAB24:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAB30u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003DAB30u) [[unlikely]] return; }
L_003DAB30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAB38u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003DAB38u) [[unlikely]] return; }
L_003DAB38:
    c.f[1] = ld32((c.r[29].w[0] + 56u));
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAB4Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003DAB4Cu) [[unlikely]] return; }
L_003DAB4C:
    c.f[12] = ld32((c.r[29].w[0] + 52u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAB58u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003DAB58u) [[unlikely]] return; }
L_003DAB58:
    set32(c.r[3], ld32((c.r[17].w[0] + 5184u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[4].sd[0] < 1820ll ? 1ull : 0ull;  if (t) { goto L_003DABA0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DABA0; } }
    set32(c.r[3], 0u + 1820u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 44u), c.r[3].w[0]);  if (t) { goto L_003DAD60; } }
    c.budget -= 1;
L_003DABA0:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 63717ull;  if (t) { goto L_003DAD60; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 63716ull;  if (t) { goto L_003DAD60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 44u), c.r[3].w[0]);  if (t) { goto L_003DAD60; } }
    c.budget -= 1;
L_003DABC8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 90u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003DAD60; } }
    c.budget -= 1;
L_003DABD8:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003DAC20; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 5184u)));
    set32(c.r[3], c.r[3].w[0] + 182u);
    st32((c.r[17].w[0] + 5184u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 5184u));
    st32((c.r[17].w[0] + 5184u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 5184u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DAD60; } }
    st32((c.r[17].w[0] + 5184u), c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_003DAD60; } }
L_003DAC20:
    set32(c.r[3], ld32((c.r[17].w[0] + 5184u)));
    set32(c.r[3], c.r[3].w[0] - 182u);
    st32((c.r[17].w[0] + 5184u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 5184u));
    st32((c.r[17].w[0] + 5184u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 5184u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003DAD60; } }
    st32((c.r[17].w[0] + 5184u), c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_003DAD60; } }
    c.budget -= 1;
L_003DAC58:
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 30u);
    st8((c.r[16].w[0] + 29u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003DAC80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAC7Cu); set32(c.r[5], ld32((c.r[16].w[0] + 108u)));  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EF900u; return; } if (c.pc != 0x003DAC7Cu) [[unlikely]] return; }
L_003DAC7C:
    c.budget -= 1;
L_003DAC80:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAC8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003DAC8Cu) [[unlikely]] return; }
L_003DAC8C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAC98u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003DAC98u) [[unlikely]] return; }
L_003DAC98:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DACA4u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003DACA4u) [[unlikely]] return; }
L_003DACA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DAD60; } }
    c.budget -= 1;
L_003DACB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 29u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DACC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_003DAD60; } }
    c.budget -= 1;
L_003DACC8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 29u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003DAD60; } }
    c.budget -= 1;
L_003DACD8:
    set32(c.r[3], ld32((c.r[17].w[0] + 5184u)));
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003DAD28; } }
    set32(c.r[3], c.r[3].w[0] - 182u);
    c.r[1].d[0] = 0ull | 32768ull;
    st32((c.r[17].w[0] + 5184u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 5184u));
    st32((c.r[17].w[0] + 5184u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 5184u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003DAD18; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DAD60; } }
L_003DAD18:
    st32((c.r[17].w[0] + 5184u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003DAD60; } }
    c.budget -= 1;
L_003DAD28:
    set32(c.r[3], c.r[3].w[0] + 182u);
    st32((c.r[17].w[0] + 5184u), c.r[3].w[0]);
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[3].d[0] = ld16((c.r[17].w[0] + 5184u));
    st32((c.r[17].w[0] + 5184u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 5184u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003DAD58; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DAD60; } }
    c.budget -= 1;
L_003DAD58:
    st32((c.r[17].w[0] + 5184u), 0u);
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003DAD60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003DAD80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[5], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 330u)));
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_003DB028; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003DB000; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_003DAFA8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003DAF28; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003DADD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DB0B0; } }
L_003DADD8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DAF18; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 300u);  if (t) { goto L_003DAE00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 92u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003DAE08; } }
    c.budget -= 1;
L_003DAE00:
    set32(c.r[2], 0u + 600u);
    st16((c.r[16].w[0] + 92u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003DAE08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44160000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 4096u);
    c.r[7].d[0] = 0ull | 61440ull;
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAE30u); set32(c.r[10], 0u + 12u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003DAE30u) [[unlikely]] return; }
L_003DAE30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DB0B0; } }
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 26u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[17].w[0] + 2752u);
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAE64u); st32((c.r[29].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003DAE64u) [[unlikely]] return; }
L_003DAE64:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAE74u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003DAE74u) [[unlikely]] return; }
L_003DAE74:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAE80u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003DAE80u) [[unlikely]] return; }
L_003DAE80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAE88u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003DAE88u) [[unlikely]] return; }
L_003DAE88:
    c.f[1] = ld32((c.r[29].w[0] + 56u));
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAE9Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003DAE9Cu) [[unlikely]] return; }
L_003DAE9C:
    c.f[12] = ld32((c.r[29].w[0] + 52u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAEA8u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003DAEA8u) [[unlikely]] return; }
L_003DAEA8:
    set32(c.r[3], ld32((c.r[17].w[0] + 5208u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = 0ull | 32769ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 48u));
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[4].sd[0] < 1820ll ? 1ull : 0ull;  if (t) { goto L_003DAEF0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DAEF0; } }
    set32(c.r[3], 0u + 1820u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), c.r[3].w[0]);  if (t) { goto L_003DB0B0; } }
    c.budget -= 1;
L_003DAEF0:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = 0ull | 63717ull;  if (t) { goto L_003DB0B0; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 63716ull;  if (t) { goto L_003DB0B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), c.r[3].w[0]);  if (t) { goto L_003DB0B0; } }
    c.budget -= 1;
L_003DAF18:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 92u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003DB0B0; } }
    c.budget -= 1;
L_003DAF28:
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003DAF70; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 5208u)));
    set32(c.r[3], c.r[3].w[0] + 182u);
    st32((c.r[17].w[0] + 5208u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 5208u));
    st32((c.r[17].w[0] + 5208u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 5208u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DB0B0; } }
    st32((c.r[17].w[0] + 5208u), c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 26u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_003DB0B0; } }
L_003DAF70:
    set32(c.r[3], ld32((c.r[17].w[0] + 5208u)));
    set32(c.r[3], c.r[3].w[0] - 182u);
    st32((c.r[17].w[0] + 5208u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 5208u));
    st32((c.r[17].w[0] + 5208u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 5208u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003DB0B0; } }
    st32((c.r[17].w[0] + 5208u), c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 26u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_003DB0B0; } }
    c.budget -= 1;
L_003DAFA8:
    st8((c.r[16].w[0] + 26u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 30u);
    st8((c.r[16].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003DAFD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAFCCu); set32(c.r[5], ld32((c.r[16].w[0] + 112u)));  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EF900u; return; } if (c.pc != 0x003DAFCCu) [[unlikely]] return; }
L_003DAFCC:
    c.budget -= 1;
L_003DAFD0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAFDCu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003DAFDCu) [[unlikely]] return; }
L_003DAFDC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAFE8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003DAFE8u) [[unlikely]] return; }
L_003DAFE8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DAFF4u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003DAFF4u) [[unlikely]] return; }
L_003DAFF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DB0B0; } }
    c.budget -= 1;
L_003DB000:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 30u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DB018; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 26u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_003DB0B0; } }
    c.budget -= 1;
L_003DB018:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 30u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003DB0B0; } }
    c.budget -= 1;
L_003DB028:
    set32(c.r[3], ld32((c.r[17].w[0] + 5208u)));
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003DB078; } }
    set32(c.r[3], c.r[3].w[0] - 182u);
    c.r[1].d[0] = 0ull | 32768ull;
    st32((c.r[17].w[0] + 5208u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 5208u));
    st32((c.r[17].w[0] + 5208u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 5208u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003DB068; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DB0B0; } }
L_003DB068:
    st32((c.r[17].w[0] + 5208u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 26u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003DB0B0; } }
    c.budget -= 1;
L_003DB078:
    set32(c.r[3], c.r[3].w[0] + 182u);
    st32((c.r[17].w[0] + 5208u), c.r[3].w[0]);
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[3].d[0] = ld16((c.r[17].w[0] + 5208u));
    st32((c.r[17].w[0] + 5208u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 5208u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003DB0A8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DB0B0; } }
    c.budget -= 1;
L_003DB0A8:
    st32((c.r[17].w[0] + 5208u), 0u);
    st8((c.r[16].w[0] + 26u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003DB0B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003DB0D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 331u)));
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_003DB2E0; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003DB2B8; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003DB228; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003DB1B8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003DB128; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DB330; } }
    c.budget -= 1;
L_003DB128:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 94u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DB1A8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 300u);  if (t) { goto L_003DB150; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 94u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003DB158; } }
    c.budget -= 1;
L_003DB150:
    set32(c.r[2], 0u + 600u);
    st16((c.r[16].w[0] + 94u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003DB158:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 8192u);
    c.r[7].d[0] = 0ull | 57344ull;
    c.r[8].d[0] = 0ull | 65535ull;
    c.r[9].d[0] = 0ull | 32768ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB180u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003DB180u) [[unlikely]] return; }
L_003DB180:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DB330; } }
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_003DB330; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 27u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003DB330; } }
L_003DB1A8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 94u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003DB330; } }
    c.budget -= 1;
L_003DB1B8:
    set32(c.r[3], ld32((c.r[17].w[0] + 5212u)));
    set32(c.r[3], c.r[3].w[0] - 728u);
    st32((c.r[17].w[0] + 5212u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 5224u)));
    set32(c.r[3], c.r[3].w[0] + 728u);
    st32((c.r[17].w[0] + 5224u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 5236u)));
    set32(c.r[3], c.r[3].w[0] + 728u);
    st32((c.r[17].w[0] + 5236u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 5248u)));
    set32(c.r[3], c.r[3].w[0] - 728u);
    st32((c.r[17].w[0] + 5248u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 5224u)));
    c.r[3].d[0] = c.r[3].sd[0] < 20935ll ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 20935u);  if (t) { goto L_003DB330; } }
    set32(c.r[2], 0u + 20935u);
    st32((c.r[17].w[0] + 5212u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 5224u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 5236u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 5248u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 27u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 31u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 35u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB220u); st8((c.r[16].w[0] + 39u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003DB220u) [[unlikely]] return; }
L_003DB220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DB330; } }
L_003DB228:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 31u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DB2A8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003DB250; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB24Cu); set32(c.r[5], ld32((c.r[16].w[0] + 116u)));  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EF900u; return; } if (c.pc != 0x003DB24Cu) [[unlikely]] return; }
L_003DB24C:
    c.budget -= 1;
L_003DB250:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 39u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB25Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 326u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x003DB25Cu) [[unlikely]] return; }
L_003DB25C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 39u)));
    set32(c.r[3], 0u + 6u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 39u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 39u)));
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    st8((c.r[16].w[0] + 39u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 31u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 35u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 35u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 35u)));
    c.r[3].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_003DB330; } }
    set32(c.r[3], 0u + 30u);
    st8((c.r[16].w[0] + 27u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 31u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003DB330; } }
L_003DB2A8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 31u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003DB330; } }
    c.budget -= 1;
L_003DB2B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 31u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DB2D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 27u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_003DB330; } }
    c.budget -= 1;
L_003DB2D0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 31u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003DB330; } }
    c.budget -= 1;
L_003DB2E0:
    set32(c.r[3], ld32((c.r[17].w[0] + 5212u)));
    set32(c.r[3], c.r[3].w[0] + 728u);
    st32((c.r[17].w[0] + 5212u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 5224u)));
    set32(c.r[3], c.r[3].w[0] - 728u);
    st32((c.r[17].w[0] + 5224u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 5236u)));
    set32(c.r[3], c.r[3].w[0] - 728u);
    st32((c.r[17].w[0] + 5236u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 5248u)));
    set32(c.r[3], c.r[3].w[0] + 728u);
    st32((c.r[17].w[0] + 5248u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 5224u)));
    c.budget -= 15;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003DB330; } }
    st8((c.r[16].w[0] + 27u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 5212u), 0u);
    st32((c.r[17].w[0] + 5224u), 0u);
    st32((c.r[17].w[0] + 5236u), 0u);
    st32((c.r[17].w[0] + 5248u), 0u);
    c.budget -= 5;
L_003DB330:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003DB350:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB378u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x003DB378u) [[unlikely]] return; }
L_003DB378:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], c.r[3].w[0] - 19952u);
    st32((c.r[17].w[0] + 636u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_003DB5A0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[3], c.r[4].w[0] << 3);  if (t) { goto L_003DB3D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8662u)));
    set32(c.r[2], c.r[2].w[0] - 20272u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[17].w[0] + 500u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 498u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 496u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 12;
L_003DB3D8:
    st16((c.r[16].w[0] + 80u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 300u);
    set32(c.r[3], 0u + 600u);
    st16((c.r[16].w[0] + 82u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 84u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003DB478; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003DB448; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DB418; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DB4A0; } }
    c.budget -= 1;
L_003DB418:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 20256u);
    set32(c.r[3], c.r[3].w[0] - 20144u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    st8((c.r[16].w[0] + 90u), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 92u), c.r[2].w[0]);  if (t) { goto L_003DB4A0; } }
    c.budget -= 1;
L_003DB448:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 20256u);
    set32(c.r[3], c.r[3].w[0] - 20144u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], 0u + 900u);
    st8((c.r[16].w[0] + 90u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 96u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 92u), 0u);  if (t) { goto L_003DB4A0; } }
L_003DB478:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 20112u);
    set32(c.r[2], c.r[2].w[0] - 19984u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 90u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 92u), 0u);
    c.budget -= 10;
L_003DB4A0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    set32(c.r[3], c.r[3].w[0] - 19376u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    st32((c.r[17].w[0] + 96u), 0u);
    st32((c.r[17].w[0] + 100u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 90u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[17].w[0] + 1856u), c.f[3]);
    st32((c.r[17].w[0] + 1860u), c.f[2]);
    st32((c.r[17].w[0] + 1864u), c.f[1]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB510u); st32((c.r[17].w[0] + 1868u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x003DB510u) [[unlikely]] return; }
L_003DB510:
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.r[19].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 92u));
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.budget -= 8;
L_003DB530:
    set32(c.r[2], c.r[19].w[0] + 71u);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB544u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_003D(c, 283u, depth + 1u); else { c.pc = 0x001F6BC0u; return; } if (c.pc != 0x003DB544u) [[unlikely]] return; }
L_003DB544:
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DB530u | kUnwind; return; } goto L_003DB530; } }
    st8((c.r[16].w[0] + 86u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 4u);
    st8((c.r[16].w[0] + 87u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 8u);
    st8((c.r[16].w[0] + 88u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 12u);
    st8((c.r[16].w[0] + 89u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 6u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003DB5C8; } }
    set32(c.r[5], 0u + 37u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB594u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x003DB594u) [[unlikely]] return; }
L_003DB594:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DB5C8; } }
    c.budget -= 1;
L_003DB5A0:
    set32(c.r[3], 0u + 1000u);
    st16((c.r[17].w[0] + 496u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 498u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 500u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 104u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    st16((c.r[16].w[0] + 80u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 82u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 84u), static_cast<std::uint16_t>(0u));
    c.budget -= 10;
L_003DB5C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003DB5F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003DB828; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_003DB6E0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DB638; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 96u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003DB740; } }
    c.budget -= 1;
L_003DB638:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DB740; } }
    c.f[1] = ld32((c.r[16].w[0] + 92u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003DB670; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 92u), c.f[0]);  if (t) { goto L_003DB688; } }
    c.budget -= 1;
L_003DB670:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 92u), c.f[0]);
    c.budget -= 6;
L_003DB688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB690u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 18u, depth + 1u); else { c.pc = 0x003DC300u; return; } if (c.pc != 0x003DB690u) [[unlikely]] return; }
L_003DB690:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB69Cu); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x003DB69Cu) [[unlikely]] return; }
L_003DB69C:
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 92u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 84u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB6D0u); st32((c.r[17].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B7(c, 33u, depth + 1u); else { c.pc = 0x003DC640u; return; } if (c.pc != 0x003DB6D0u) [[unlikely]] return; }
L_003DB6D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB6D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 61u, depth + 1u); else { c.pc = 0x00195470u; return; } if (c.pc != 0x003DB6D8u) [[unlikely]] return; }
L_003DB6D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DB740; } }
L_003DB6E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DB740; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB6F8u);  if (depth < kMaxDepth) unit_00B7(c, 18u, depth + 1u); else { c.pc = 0x003DC300u; return; } if (c.pc != 0x003DB6F8u) [[unlikely]] return; }
L_003DB6F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB704u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x003DB704u) [[unlikely]] return; }
L_003DB704:
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 92u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 84u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB738u); st32((c.r[17].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B7(c, 33u, depth + 1u); else { c.pc = 0x003DC640u; return; } if (c.pc != 0x003DB738u) [[unlikely]] return; }
L_003DB738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB740u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 61u, depth + 1u); else { c.pc = 0x00195470u; return; } if (c.pc != 0x003DB740u) [[unlikely]] return; }
L_003DB740:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003DB890; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003DB790; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003DB788; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003DB788; } }
    st32((c.r[16].w[0]), 0u);
    set32(c.r[3], 0u - 17u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003DB790; } }
L_003DB788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB790u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 182u, depth + 1u); else { c.pc = 0x003DB8F0u; return; } if (c.pc != 0x003DB790u) [[unlikely]] return; }
L_003DB790:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003DB7D8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003DB7D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003DB7D0; } }
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[3], 0u - 65u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003DB7D8; } }
    c.budget -= 1;
L_003DB7D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB7D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 193u, depth + 1u); else { c.pc = 0x003DBBF0u; return; } if (c.pc != 0x003DB7D8u) [[unlikely]] return; }
L_003DB7D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003DB890; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003DB818; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003DB818; } }
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[3], 0u - 385u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1236u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003DB890; } }
    c.budget -= 1;
L_003DB818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB820u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 204u, depth + 1u); else { c.pc = 0x003DBEF0u; return; } if (c.pc != 0x003DB820u) [[unlikely]] return; }
L_003DB820:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DB890; } }
L_003DB828:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003DB848; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003DB890; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DB890; } }
L_003DB848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB850u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x003DB850u) [[unlikely]] return; }
L_003DB850:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB87Cu); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x003DB87Cu) [[unlikely]] return; }
L_003DB87C:
    c.f[2] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.budget -= 5;
L_003DB890:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003DB8B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 37u);  if (t) { goto L_003DB8E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB8DCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 153u, depth + 1u); else { c.pc = 0x0023A1C0u; return; } if (c.pc != 0x003DB8DCu) [[unlikely]] return; }
L_003DB8DC:
    c.budget -= 1;
L_003DB8E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003DB8F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 372u)));
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_003DBBB0; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003DBB28; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003DBAC8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003DB938; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DBBD0; } }
L_003DB938:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DBAB8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 600u);  if (t) { goto L_003DB960; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 80u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003DB968; } }
    c.budget -= 1;
L_003DB960:
    set32(c.r[2], 0u + 1200u);
    st16((c.r[16].w[0] + 80u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003DB968:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 4096u);
    c.r[7].d[0] = 0ull | 63488ull;
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB990u); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003DB990u) [[unlikely]] return; }
L_003DB990:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DBBD0; } }
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[17].w[0] + 2240u);
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB9D4u); st32((c.r[29].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003DB9D4u) [[unlikely]] return; }
L_003DB9D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB9E4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003DB9E4u) [[unlikely]] return; }
L_003DB9E4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB9F0u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003DB9F0u) [[unlikely]] return; }
L_003DB9F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DB9F8u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003DB9F8u) [[unlikely]] return; }
L_003DB9F8:
    c.f[1] = ld32((c.r[29].w[0] + 56u));
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBA0Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003DBA0Cu) [[unlikely]] return; }
L_003DBA0C:
    c.f[12] = ld32((c.r[29].w[0] + 52u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBA18u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003DBA18u) [[unlikely]] return; }
L_003DBA18:
    set32(c.r[3], ld32((c.r[17].w[0] + 5112u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 20u));
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[4].sd[0] < 3640ll ? 1ull : 0ull;  if (t) { goto L_003DBA60; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DBA60; } }
    set32(c.r[3], 0u + 3640u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_003DBA80; } }
    c.budget -= 1;
L_003DBA60:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 60986ull;  if (t) { goto L_003DBA80; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 60985ull;  if (t) { goto L_003DBA80; } }
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 1;
L_003DBA80:
    set32(c.r[4], ld32((c.r[17].w[0] + 5112u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 64u);  if (t) { goto L_003DBAA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 44u), c.r[3].w[0]);  if (t) { goto L_003DBBD0; } }
L_003DBAA8:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 44u), c.r[3].w[0]);  if (t) { goto L_003DBBD0; } }
    c.budget -= 1;
L_003DBAB8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 80u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003DBBD0; } }
    c.budget -= 1;
L_003DBAC8:
    set32(c.r[6], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 5112u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65504ull;  if (t) { goto L_003DBAF0; } }
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DBB10; } }
L_003DBAF0:
    st32((c.r[17].w[0] + 5112u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 44u), 0u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 71u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 74u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003DBBD0; } }
    c.budget -= 1;
L_003DBB10:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 5112u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 5112u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 5112u), c.r[3].w[0]);  if (t) { goto L_003DBBD0; } }
L_003DBB28:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 71u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DBBA0; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 71u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003DBB58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBB54u); set32(c.r[5], ld32((c.r[16].w[0] + 100u)));  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EF900u; return; } if (c.pc != 0x003DBB54u) [[unlikely]] return; }
L_003DBB54:
    c.budget -= 1;
L_003DBB58:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBB64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003DBB64u) [[unlikely]] return; }
L_003DBB64:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBB70u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003DBB70u) [[unlikely]] return; }
L_003DBB70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 74u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 74u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 74u)));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_003DBBD0; } }
    set32(c.r[3], 0u + 30u);
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 71u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003DBBD0; } }
    c.budget -= 1;
L_003DBBA0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 71u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003DBBD0; } }
    c.budget -= 1;
L_003DBBB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 71u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DBBC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003DBBD0; } }
    c.budget -= 1;
L_003DBBC8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 71u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003DBBD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003DBBF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 373u)));
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_003DBEB0; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003DBE28; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003DBDC8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003DBC38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003DBED0; } }
L_003DBC38:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 82u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DBDB8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 600u);  if (t) { goto L_003DBC60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 82u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003DBC68; } }
    c.budget -= 1;
L_003DBC60:
    set32(c.r[2], 0u + 1200u);
    st16((c.r[16].w[0] + 82u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003DBC68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 2048u);
    c.r[7].d[0] = 0ull | 61440ull;
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBC90u); set32(c.r[10], 0u + 6u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003DBC90u) [[unlikely]] return; }
L_003DBC90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003DBED0; } }
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[17].w[0] + 2368u);
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBCD4u); st32((c.r[29].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003DBCD4u) [[unlikely]] return; }
L_003DBCD4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBCE4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003DBCE4u) [[unlikely]] return; }
L_003DBCE4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBCF0u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003DBCF0u) [[unlikely]] return; }
L_003DBCF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBCF8u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003DBCF8u) [[unlikely]] return; }
L_003DBCF8:
    c.f[1] = ld32((c.r[29].w[0] + 56u));
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBD0Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003DBD0Cu) [[unlikely]] return; }
L_003DBD0C:
    c.f[12] = ld32((c.r[29].w[0] + 52u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBD18u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003DBD18u) [[unlikely]] return; }
L_003DBD18:
    set32(c.r[3], ld32((c.r[17].w[0] + 5136u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 24u));
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[4].sd[0] < 3640ll ? 1ull : 0ull;  if (t) { goto L_003DBD60; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DBD60; } }
    set32(c.r[3], 0u + 3640u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_003DBD80; } }
    c.budget -= 1;
L_003DBD60:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 60986ull;  if (t) { goto L_003DBD80; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 60985ull;  if (t) { goto L_003DBD80; } }
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 1;
L_003DBD80:
    set32(c.r[4], ld32((c.r[17].w[0] + 5136u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 64u);  if (t) { goto L_003DBDA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), c.r[3].w[0]);  if (t) { goto L_003DBED0; } }
L_003DBDA8:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), c.r[3].w[0]);  if (t) { goto L_003DBED0; } }
    c.budget -= 1;
L_003DBDB8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 82u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003DBED0; } }
    c.budget -= 1;
L_003DBDC8:
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 5136u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65504ull;  if (t) { goto L_003DBDF0; } }
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DBE10; } }
L_003DBDF0:
    st32((c.r[17].w[0] + 5136u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 48u), 0u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 75u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003DBED0; } }
    c.budget -= 1;
L_003DBE10:
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 5136u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 5136u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 5136u), c.r[3].w[0]);  if (t) { goto L_003DBED0; } }
L_003DBE28:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DBEA0; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003DBE58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBE54u); set32(c.r[5], ld32((c.r[16].w[0] + 104u)));  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EF900u; return; } if (c.pc != 0x003DBE54u) [[unlikely]] return; }
L_003DBE54:
    c.budget -= 1;
L_003DBE58:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBE64u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003DBE64u) [[unlikely]] return; }
L_003DBE64:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBE70u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003DBE70u) [[unlikely]] return; }
L_003DBE70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 75u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 75u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 75u)));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_003DBED0; } }
    set32(c.r[3], 0u + 30u);
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003DBED0; } }
    c.budget -= 1;
L_003DBEA0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003DBED0; } }
    c.budget -= 1;
L_003DBEB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DBEC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003DBED0; } }
    c.budget -= 1;
L_003DBEC8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003DBED0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003DBEF0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 374u)));
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[17], c.r[18].w[0] + 304u);  if (t) { [[clang::musttail]] return unit_00B7(c, 16u, depth); } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { [[clang::musttail]] return unit_00B7(c, 11u, depth); } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_00B7(c, 10u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003DBF40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00B7(c, 17u, depth); } }
L_003DBF40:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_00B7(c, 9u, depth); } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 300u);  if (t) { goto L_003DBF68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 84u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003DBF70; } }
    c.budget -= 1;
L_003DBF68:
    set32(c.r[2], 0u + 600u);
    st16((c.r[17].w[0] + 84u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003DBF70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    set32(c.r[5], 0u + 20480u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[6].d[0] = 0ull | 45056ull;
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBF98u); set32(c.r[10], 0u + 7u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003DBF98u) [[unlikely]] return; }
L_003DBF98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00B7(c, 17u, depth); } }
    st32((c.r[17].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 70u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[18].w[0] + 2432u);
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBFDCu); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003DBFDCu) [[unlikely]] return; }
L_003DBFDC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBFECu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003DBFECu) [[unlikely]] return; }
L_003DBFEC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DBFF8u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003DBFF8u) [[unlikely]] return; }
L_003DBFF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC000u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003DC000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_00B7(c, 1u, depth);
}

}
