#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_003A[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 11, 0, 0,
    12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0,
    0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0,
    65, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0,
    0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0,
    0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0,
    86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0,
    95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 99,
    0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0,
    0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113,
    0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0,
    0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133,
    0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0,
    0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0,
    0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0,
    159, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0,
    0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0,
    0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182,
    0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0,
};

void unit_003A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001E8000;
    case 2u: goto L_001E8190;
    case 3u: goto L_001E81A0;
    case 4u: goto L_001E81A8;
    case 5u: goto L_001E8230;
    case 6u: goto L_001E8238;
    case 7u: goto L_001E8240;
    case 8u: goto L_001E8260;
    case 9u: goto L_001E82D8;
    case 10u: goto L_001E82E8;
    case 11u: goto L_001E82F4;
    case 12u: goto L_001E8300;
    case 13u: goto L_001E8550;
    case 14u: goto L_001E8558;
    case 15u: goto L_001E85A0;
    case 16u: goto L_001E8600;
    case 17u: goto L_001E8630;
    case 18u: goto L_001E8650;
    case 19u: goto L_001E8688;
    case 20u: goto L_001E86A8;
    case 21u: goto L_001E86E0;
    case 22u: goto L_001E8748;
    case 23u: goto L_001E8754;
    case 24u: goto L_001E8920;
    case 25u: goto L_001E8928;
    case 26u: goto L_001E8970;
    case 27u: goto L_001E89E0;
    case 28u: goto L_001E8A78;
    case 29u: goto L_001E8A98;
    case 30u: goto L_001E8AA4;
    case 31u: goto L_001E8B00;
    case 32u: goto L_001E8B08;
    case 33u: goto L_001E8BDC;
    case 34u: goto L_001E8C00;
    case 35u: goto L_001E8C0C;
    case 36u: goto L_001E8E00;
    case 37u: goto L_001E8E08;
    case 38u: goto L_001E8E58;
    case 39u: goto L_001E8EB8;
    case 40u: goto L_001E8F00;
    case 41u: goto L_001E8F20;
    case 42u: goto L_001E8F4C;
    case 43u: goto L_001E8F70;
    case 44u: goto L_001E8FB8;
    case 45u: goto L_001E8FC4;
    case 46u: goto L_001E8FD0;
    case 47u: goto L_001E9080;
    case 48u: goto L_001E9088;
    case 49u: goto L_001E9128;
    case 50u: goto L_001E914C;
    case 51u: goto L_001E9170;
    case 52u: goto L_001E91A0;
    case 53u: goto L_001E9250;
    case 54u: goto L_001E9290;
    case 55u: goto L_001E92F0;
    case 56u: goto L_001E9320;
    case 57u: goto L_001E93C0;
    case 58u: goto L_001E93E0;
    case 59u: goto L_001E943C;
    case 60u: goto L_001E9450;
    case 61u: goto L_001E9AC0;
    case 62u: goto L_001E9AF0;
    case 63u: goto L_001E9B40;
    case 64u: goto L_001E9B6C;
    case 65u: goto L_001E9B80;
    case 66u: goto L_001E9B90;
    case 67u: goto L_001E9BA0;
    case 68u: goto L_001E9DF0;
    case 69u: goto L_001E9EF0;
    case 70u: goto L_001EA000;
    case 71u: goto L_001EA02C;
    case 72u: goto L_001EA038;
    case 73u: goto L_001EA070;
    case 74u: goto L_001EA090;
    case 75u: goto L_001EA0C4;
    case 76u: goto L_001EA0D0;
    case 77u: goto L_001EA100;
    case 78u: goto L_001EA120;
    case 79u: goto L_001EA170;
    case 80u: goto L_001EA178;
    case 81u: goto L_001EA190;
    case 82u: goto L_001EA19C;
    case 83u: goto L_001EA1B0;
    case 84u: goto L_001EA230;
    case 85u: goto L_001EA268;
    case 86u: goto L_001EA280;
    case 87u: goto L_001EA330;
    case 88u: goto L_001EA338;
    case 89u: goto L_001EA354;
    case 90u: goto L_001EA370;
    case 91u: goto L_001EA3B4;
    case 92u: goto L_001EA3CC;
    case 93u: goto L_001EA3D8;
    case 94u: goto L_001EA3EC;
    case 95u: goto L_001EA400;
    case 96u: goto L_001EA444;
    case 97u: goto L_001EA45C;
    case 98u: goto L_001EA468;
    case 99u: goto L_001EA47C;
    case 100u: goto L_001EA490;
    case 101u: goto L_001EA508;
    case 102u: goto L_001EA56C;
    case 103u: goto L_001EA588;
    case 104u: goto L_001EA594;
    case 105u: goto L_001EA5C0;
    case 106u: goto L_001EA5E0;
    case 107u: goto L_001EA6B0;
    case 108u: goto L_001EA6F0;
    case 109u: goto L_001EA748;
    case 110u: goto L_001EA754;
    case 111u: goto L_001EA7C0;
    case 112u: goto L_001EA7F0;
    case 113u: goto L_001EA87C;
    case 114u: goto L_001EA88C;
    case 115u: goto L_001EA8D0;
    case 116u: goto L_001EA950;
    case 117u: goto L_001EA960;
    case 118u: goto L_001EAA20;
    case 119u: goto L_001EAA8C;
    case 120u: goto L_001EAA9C;
    case 121u: goto L_001EAB30;
    case 122u: goto L_001EAB70;
    case 123u: goto L_001EABA8;
    case 124u: goto L_001EABC8;
    case 125u: goto L_001EAC1C;
    case 126u: goto L_001EAC60;
    case 127u: goto L_001EAC68;
    case 128u: goto L_001EACF8;
    case 129u: goto L_001EAD04;
    case 130u: goto L_001EAD10;
    case 131u: goto L_001EAD40;
    case 132u: goto L_001EAE18;
    case 133u: goto L_001EAEFC;
    case 134u: goto L_001EAF10;
    case 135u: goto L_001EAF90;
    case 136u: goto L_001EAFB8;
    case 137u: goto L_001EAFD8;
    case 138u: goto L_001EB0C0;
    case 139u: goto L_001EB128;
    case 140u: goto L_001EB168;
    case 141u: goto L_001EB1C8;
    case 142u: goto L_001EB1F8;
    case 143u: goto L_001EB210;
    case 144u: goto L_001EB2E8;
    case 145u: goto L_001EB3E0;
    case 146u: goto L_001EB41C;
    case 147u: goto L_001EB428;
    case 148u: goto L_001EB580;
    case 149u: goto L_001EB5E4;
    case 150u: goto L_001EB660;
    case 151u: goto L_001EB840;
    case 152u: goto L_001EB8D0;
    case 153u: goto L_001EB9E4;
    case 154u: goto L_001EB9F4;
    case 155u: goto L_001EBA18;
    case 156u: goto L_001EBA44;
    case 157u: goto L_001EBA54;
    case 158u: goto L_001EBA68;
    case 159u: goto L_001EBA80;
    case 160u: goto L_001EBA8C;
    case 161u: goto L_001EBAA0;
    case 162u: goto L_001EBAF4;
    case 163u: goto L_001EBB14;
    case 164u: goto L_001EBB40;
    case 165u: goto L_001EBB60;
    case 166u: goto L_001EBB78;
    case 167u: goto L_001EBBE8;
    case 168u: goto L_001EBC94;
    case 169u: goto L_001EBCA8;
    case 170u: goto L_001EBCB8;
    case 171u: goto L_001EBCE4;
    case 172u: goto L_001EBD30;
    case 173u: goto L_001EBD48;
    case 174u: goto L_001EBD64;
    case 175u: goto L_001EBD74;
    case 176u: goto L_001EBD88;
    case 177u: goto L_001EBDE0;
    case 178u: goto L_001EBED0;
    case 179u: goto L_001EBF20;
    case 180u: goto L_001EBF44;
    case 181u: goto L_001EBF58;
    case 182u: goto L_001EBF7C;
    case 183u: goto L_001EBFA0;
    case 184u: goto L_001EBFF0;
    default: bad_entry(c, 0x001E8000u); return;
    }
L_001E8000:
    set32(c.r[2], 0u + 26u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E8058; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8659u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E8038; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 14088u)));
    st32((c.r[17].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18088u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8190; } }
    c.budget -= 1;
L_001E8038:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 14112u)));
    st32((c.r[17].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18064u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8190; } }
    c.budget -= 1;
L_001E8058:
    set32(c.r[2], 0u + 34u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E8080; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 14104u)));
    st32((c.r[17].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18072u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8190; } }
    c.budget -= 1;
L_001E8080:
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E80A8; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 14096u)));
    st32((c.r[17].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18080u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8190; } }
    c.budget -= 1;
L_001E80A8:
    set32(c.r[2], 0u + 27u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E80D0; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 14080u)));
    st32((c.r[17].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18096u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8190; } }
    c.budget -= 1;
L_001E80D0:
    set32(c.r[2], 0u + 42u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 47u);  if (t) { goto L_001E80E8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E8108; } }
    c.budget -= 1;
L_001E80E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 14072u)));
    st32((c.r[17].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18104u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8190; } }
    c.budget -= 1;
L_001E8108:
    set32(c.r[2], 0u + 50u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E8130; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 14064u)));
    st32((c.r[17].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18112u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8190; } }
    c.budget -= 1;
L_001E8130:
    set32(c.r[2], 0u + 75u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E8158; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 14040u)));
    st32((c.r[17].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18136u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8190; } }
    c.budget -= 1;
L_001E8158:
    set32(c.r[2], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E8180; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 14032u)));
    st32((c.r[17].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18144u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8190; } }
    c.budget -= 1;
L_001E8180:
    set32(c.r[2], c.r[28].w[0] - 32560u);
    st32((c.r[17].w[0] + 840u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 844u), c.r[2].w[0]);
    c.budget -= 4;
L_001E8190:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[3] = ld32((c.r[17].w[0] + 4052u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E81A0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 232u, depth + 1u); else { c.pc = 0x001E7910u; return; } if (c.pc != 0x001E81A0u) [[unlikely]] return; }
L_001E81A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E81A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 232u, depth + 1u); else { c.pc = 0x001E7910u; return; } if (c.pc != 0x001E81A8u) [[unlikely]] return; }
L_001E81A8:
    c.f[1] = ld32((c.r[17].w[0] + 740u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E81D8; } }
    c.f[1] = ld32((c.r[17].w[0] + 4052u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[3] = fp::sub(c.f[3], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.budget -= 6;
L_001E81D8:
    set32(c.r[2], 0u + 2u);
    c.f[1] = ld32((c.r[17].w[0] + 8292u));
    set32(c.r[3], 0u + 9999u);
    c.f[0] = ld32((c.r[17].w[0] + 740u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 740u), c.f[0]);
    st8((c.r[17].w[0] + 792u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 840u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001E8238; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 844u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001E8238; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 711u)));
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 711u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 792u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001E8238; } }
    c.budget -= 1;
L_001E8230:
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_001E8238:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_001E8240:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E8260:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001E8290; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001E86C0; } }
    c.budget -= 1;
L_001E8290:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 711u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_001E86B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001E8540; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E82B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E86B8; } }
L_001E82B8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 711u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[2], 0u + 75u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E82E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E82D8u);  if (depth < kMaxDepth) unit_004E(c, 146u, depth + 1u); else { c.pc = 0x0023A0A0u; return; } if (c.pc != 0x001E82D8u) [[unlikely]] return; }
L_001E82D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E82E8; } }
L_001E82E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E82E8u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_004E(c, 146u, depth + 1u); else { c.pc = 0x0023A0A0u; return; } if (c.pc != 0x001E82E8u) [[unlikely]] return; }
L_001E82E8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E82F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 155u, depth + 1u); else { c.pc = 0x001DBA60u; return; } if (c.pc != 0x001E82F4u) [[unlikely]] return; }
L_001E82F4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8300u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 158u, depth + 1u); else { c.pc = 0x001DBB00u; return; } if (c.pc != 0x001E8300u) [[unlikely]] return; }
L_001E8300:
    set32(c.r[3], 0u + 17u);
    set32(c.r[2], 0u + 33u);
    st8((c.r[17].w[0] + 850u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 740u), 0u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E8338; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 14140u)));
    st32((c.r[17].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18036u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8540; } }
    c.budget -= 1;
L_001E8338:
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E8360; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 14132u)));
    st32((c.r[17].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18044u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8540; } }
    c.budget -= 1;
L_001E8360:
    set32(c.r[2], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E8388; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 14124u)));
    st32((c.r[17].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18052u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8540; } }
    c.budget -= 1;
L_001E8388:
    set32(c.r[2], 0u + 35u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E83B0; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 14116u)));
    st32((c.r[17].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18060u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8540; } }
    c.budget -= 1;
L_001E83B0:
    set32(c.r[2], 0u + 26u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E8408; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8659u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E83E8; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 14084u)));
    st32((c.r[17].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18092u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8540; } }
    c.budget -= 1;
L_001E83E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 14108u)));
    st32((c.r[17].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18068u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8540; } }
    c.budget -= 1;
L_001E8408:
    set32(c.r[2], 0u + 34u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E8430; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 14100u)));
    st32((c.r[17].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18076u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8540; } }
    c.budget -= 1;
L_001E8430:
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E8458; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 14092u)));
    st32((c.r[17].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18084u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8540; } }
    c.budget -= 1;
L_001E8458:
    set32(c.r[2], 0u + 27u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E8480; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 14076u)));
    st32((c.r[17].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18100u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8540; } }
    c.budget -= 1;
L_001E8480:
    set32(c.r[2], 0u + 42u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 47u);  if (t) { goto L_001E8498; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E84B8; } }
    c.budget -= 1;
L_001E8498:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 14068u)));
    st32((c.r[17].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18108u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8540; } }
    c.budget -= 1;
L_001E84B8:
    set32(c.r[2], 0u + 50u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E84E0; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 14060u)));
    st32((c.r[17].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18116u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8540; } }
    c.budget -= 1;
L_001E84E0:
    set32(c.r[2], 0u + 75u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E8508; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 14036u)));
    st32((c.r[17].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18140u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8540; } }
    c.budget -= 1;
L_001E8508:
    set32(c.r[2], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E8530; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 14028u)));
    st32((c.r[17].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18148u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8540; } }
    c.budget -= 1;
L_001E8530:
    set32(c.r[2], c.r[28].w[0] - 32560u);
    st32((c.r[17].w[0] + 840u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 844u), c.r[2].w[0]);
    c.budget -= 4;
L_001E8540:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[3] = ld32((c.r[17].w[0] + 4052u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8550u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 232u, depth + 1u); else { c.pc = 0x001E7910u; return; } if (c.pc != 0x001E8550u) [[unlikely]] return; }
L_001E8550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8558u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 232u, depth + 1u); else { c.pc = 0x001E7910u; return; } if (c.pc != 0x001E8558u) [[unlikely]] return; }
L_001E8558:
    c.f[1] = ld32((c.r[17].w[0] + 740u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E8588; } }
    c.f[1] = ld32((c.r[17].w[0] + 4052u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[3] = fp::sub(c.f[3], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.budget -= 6;
L_001E8588:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[17].w[0] + 8292u));
    c.f[0] = ld32((c.r[17].w[0] + 740u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E85A0u); st32((c.r[17].w[0] + 740u), c.f[0]);  if (depth < kMaxDepth) unit_0039(c, 255u, depth + 1u); else { c.pc = 0x001E7CF0u; return; } if (c.pc != 0x001E85A0u) [[unlikely]] return; }
L_001E85A0:
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], 0u + 9999u);
    st8((c.r[17].w[0] + 792u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 840u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001E86B8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 844u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001E86B8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 711u)));
    set32(c.r[2], 0u - 4097u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 711u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[17].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 792u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8600u); st8((c.r[17].w[0] + 849u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0039(c, 251u, depth + 1u); else { c.pc = 0x001E7BE0u; return; } if (c.pc != 0x001E8600u) [[unlikely]] return; }
L_001E8600:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E8658; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 771u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E8638; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 33u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8630u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001E8630u) [[unlikely]] return; }
L_001E8630:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E86B8; } }
L_001E8638:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 25u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8650u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001E8650u) [[unlikely]] return; }
L_001E8650:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E86B8; } }
L_001E8658:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E86B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 771u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E8690; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 13u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8688u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001E8688u) [[unlikely]] return; }
L_001E8688:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E86B8; } }
L_001E8690:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E86A8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001E86A8u) [[unlikely]] return; }
L_001E86A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E86B8; } }
L_001E86B0:
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_001E86B8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_001E86C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E86E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001E8710; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001E89C8; } }
    c.budget -= 1;
L_001E8710:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 711u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E89B8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E8910; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E8738; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E89C0; } }
L_001E8738:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 711u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8748u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 155u, depth + 1u); else { c.pc = 0x001DBA60u; return; } if (c.pc != 0x001E8748u) [[unlikely]] return; }
L_001E8748:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8754u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 158u, depth + 1u); else { c.pc = 0x001DBB00u; return; } if (c.pc != 0x001E8754u) [[unlikely]] return; }
L_001E8754:
    set32(c.r[3], 0u + 17u);
    set32(c.r[2], 0u + 33u);
    st8((c.r[17].w[0] + 850u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 740u), 0u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E8788; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 13968u)));
    st32((c.r[17].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18208u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8910; } }
L_001E8788:
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E87B0; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 13964u)));
    st32((c.r[17].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18212u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8910; } }
    c.budget -= 1;
L_001E87B0:
    set32(c.r[2], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E87D8; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 13960u)));
    st32((c.r[17].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18216u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8910; } }
    c.budget -= 1;
L_001E87D8:
    set32(c.r[2], 0u + 35u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E8800; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 13956u)));
    st32((c.r[17].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18220u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8910; } }
    c.budget -= 1;
L_001E8800:
    set32(c.r[2], 0u + 34u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E8828; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 13952u)));
    st32((c.r[17].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18224u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8910; } }
    c.budget -= 1;
L_001E8828:
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E8850; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 13948u)));
    st32((c.r[17].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18228u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8910; } }
    c.budget -= 1;
L_001E8850:
    set32(c.r[2], 0u + 27u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E8878; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 13944u)));
    st32((c.r[17].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18232u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8910; } }
    c.budget -= 1;
L_001E8878:
    set32(c.r[2], 0u + 42u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 47u);  if (t) { goto L_001E8890; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E88B0; } }
    c.budget -= 1;
L_001E8890:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 13940u)));
    st32((c.r[17].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18236u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8910; } }
    c.budget -= 1;
L_001E88B0:
    set32(c.r[2], 0u + 26u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E88D8; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 13936u)));
    st32((c.r[17].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18240u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8910; } }
    c.budget -= 1;
L_001E88D8:
    set32(c.r[2], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E8900; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 13932u)));
    st32((c.r[17].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18244u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8910; } }
    c.budget -= 1;
L_001E8900:
    set32(c.r[2], c.r[28].w[0] - 32560u);
    st32((c.r[17].w[0] + 840u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 844u), c.r[2].w[0]);
    c.budget -= 4;
L_001E8910:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[3] = ld32((c.r[17].w[0] + 4052u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8920u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 232u, depth + 1u); else { c.pc = 0x001E7910u; return; } if (c.pc != 0x001E8920u) [[unlikely]] return; }
L_001E8920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8928u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 232u, depth + 1u); else { c.pc = 0x001E7910u; return; } if (c.pc != 0x001E8928u) [[unlikely]] return; }
L_001E8928:
    c.f[1] = ld32((c.r[17].w[0] + 740u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E8958; } }
    c.f[1] = ld32((c.r[17].w[0] + 4052u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[3] = fp::sub(c.f[3], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.budget -= 6;
L_001E8958:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[17].w[0] + 8292u));
    c.f[0] = ld32((c.r[17].w[0] + 740u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8970u); st32((c.r[17].w[0] + 740u), c.f[0]);  if (depth < kMaxDepth) unit_0039(c, 255u, depth + 1u); else { c.pc = 0x001E7CF0u; return; } if (c.pc != 0x001E8970u) [[unlikely]] return; }
L_001E8970:
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], 0u + 9999u);
    st8((c.r[17].w[0] + 792u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 840u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001E89C0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 844u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001E89C0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 711u)));
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 711u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 792u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 849u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001E89C0; } }
L_001E89B8:
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_001E89C0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_001E89C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E89E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001E8A18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001E9188; } }
    c.budget -= 1;
L_001E8A18:
    set32(c.r[2], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 34u);  if (t) { goto L_001E8B98; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001E8B98; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], 0u + 32u);  if (t) { goto L_001E8F80; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001E8B98; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 711u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E8B90; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E8AF0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E8A68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9180; } }
    c.budget -= 1;
L_001E8A68:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 711u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8A78u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_004E(c, 146u, depth + 1u); else { c.pc = 0x0023A0A0u; return; } if (c.pc != 0x001E8A78u) [[unlikely]] return; }
L_001E8A78:
    st32((c.r[18].w[0] + 8420u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[18].w[0] + 8416u), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[18].w[0] + 745u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8A98u); st8((c.r[18].w[0] + 801u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0036(c, 155u, depth + 1u); else { c.pc = 0x001DBA60u; return; } if (c.pc != 0x001E8A98u) [[unlikely]] return; }
L_001E8A98:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8AA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 158u, depth + 1u); else { c.pc = 0x001DBB00u; return; } if (c.pc != 0x001E8AA4u) [[unlikely]] return; }
L_001E8AA4:
    set32(c.r[3], 0u + 17u);
    set32(c.r[2], 0u + 45u);
    st8((c.r[18].w[0] + 850u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[18].w[0] + 740u), 0u);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 8658u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E8AD8; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 14000u)));
    st32((c.r[18].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18176u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8AF0; } }
L_001E8AD8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 14048u)));
    st32((c.r[18].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18128u)));
    st32((c.r[18].w[0] + 844u), c.r[2].w[0]);
    c.budget -= 6;
L_001E8AF0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[3] = ld32((c.r[18].w[0] + 4052u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8B00u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 232u, depth + 1u); else { c.pc = 0x001E7910u; return; } if (c.pc != 0x001E8B00u) [[unlikely]] return; }
L_001E8B00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8B08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 232u, depth + 1u); else { c.pc = 0x001E7910u; return; } if (c.pc != 0x001E8B08u) [[unlikely]] return; }
L_001E8B08:
    c.f[1] = ld32((c.r[18].w[0] + 740u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E8B38; } }
    c.f[1] = ld32((c.r[18].w[0] + 4052u));
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    c.f[3] = fp::sub(c.f[3], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.budget -= 6;
L_001E8B38:
    set32(c.r[2], 0u + 2u);
    c.f[1] = ld32((c.r[18].w[0] + 8292u));
    set32(c.r[3], 0u + 9999u);
    c.f[0] = ld32((c.r[18].w[0] + 740u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 740u), c.f[0]);
    st8((c.r[18].w[0] + 792u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 840u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001E9180; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 844u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001E9180; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 711u)));
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[18].w[0] + 711u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 792u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001E9180; } }
    c.budget -= 1;
L_001E8B90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_001E9180; } }
L_001E8B98:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 711u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E8F78; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E8DF0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E8BC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9180; } }
L_001E8BC0:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 711u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 32u);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001E8BE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8BDCu); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_004E(c, 146u, depth + 1u); else { c.pc = 0x0023A0A0u; return; } if (c.pc != 0x001E8BDCu) [[unlikely]] return; }
L_001E8BDC:
    c.budget -= 1;
L_001E8BE0:
    st32((c.r[18].w[0] + 8420u), 0u);
    st32((c.r[18].w[0] + 8416u), 0u);
    set32(c.r[2], 0u - 1u);
    st8((c.r[18].w[0] + 745u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8C00u); st8((c.r[18].w[0] + 801u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0036(c, 155u, depth + 1u); else { c.pc = 0x001DBA60u; return; } if (c.pc != 0x001E8C00u) [[unlikely]] return; }
L_001E8C00:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8C0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 158u, depth + 1u); else { c.pc = 0x001DBB00u; return; } if (c.pc != 0x001E8C0Cu) [[unlikely]] return; }
L_001E8C0C:
    set32(c.r[2], 0u + 17u);
    st8((c.r[18].w[0] + 850u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 740u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 771u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E8D10; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 8658u));
    set32(c.r[2], 0u + 45u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 33u);  if (t) { goto L_001E8CA0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E8C58; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 14016u)));
    st32((c.r[18].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18160u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8DF0; } }
    c.budget -= 1;
L_001E8C58:
    set32(c.r[2], 0u + 34u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E8C80; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 13996u)));
    st32((c.r[18].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18180u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8DF0; } }
    c.budget -= 1;
L_001E8C80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 13980u)));
    st32((c.r[18].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18196u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8DF0; } }
    c.budget -= 1;
L_001E8CA0:
    set32(c.r[2], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E8CC8; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 14008u)));
    st32((c.r[18].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18168u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8DF0; } }
    c.budget -= 1;
L_001E8CC8:
    set32(c.r[2], 0u + 34u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E8CF0; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 14052u)));
    st32((c.r[18].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18124u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8DF0; } }
    c.budget -= 1;
L_001E8CF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 13988u)));
    st32((c.r[18].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18188u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8DF0; } }
    c.budget -= 1;
L_001E8D10:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 8658u));
    set32(c.r[2], 0u + 45u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 33u);  if (t) { goto L_001E8D88; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E8D40; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 14024u)));
    st32((c.r[18].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18152u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8DF0; } }
L_001E8D40:
    set32(c.r[2], 0u + 34u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E8D68; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 13996u)));
    st32((c.r[18].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18180u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8DF0; } }
    c.budget -= 1;
L_001E8D68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 13984u)));
    st32((c.r[18].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18192u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8DF0; } }
    c.budget -= 1;
L_001E8D88:
    set32(c.r[2], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E8DB0; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 14056u)));
    st32((c.r[18].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18120u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8DF0; } }
    c.budget -= 1;
L_001E8DB0:
    set32(c.r[2], 0u + 34u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E8DD8; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 14052u)));
    st32((c.r[18].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18124u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E8DF0; } }
    c.budget -= 1;
L_001E8DD8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 13992u)));
    st32((c.r[18].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18184u)));
    st32((c.r[18].w[0] + 844u), c.r[2].w[0]);
    c.budget -= 6;
L_001E8DF0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[3] = ld32((c.r[18].w[0] + 4052u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8E00u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 232u, depth + 1u); else { c.pc = 0x001E7910u; return; } if (c.pc != 0x001E8E00u) [[unlikely]] return; }
L_001E8E00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8E08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 232u, depth + 1u); else { c.pc = 0x001E7910u; return; } if (c.pc != 0x001E8E08u) [[unlikely]] return; }
L_001E8E08:
    c.f[1] = ld32((c.r[18].w[0] + 740u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E8E38; } }
    c.f[1] = ld32((c.r[18].w[0] + 4052u));
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    c.f[3] = fp::sub(c.f[3], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.budget -= 6;
L_001E8E38:
    set32(c.r[2], 0u + 34u);
    c.f[1] = ld32((c.r[18].w[0] + 8292u));
    c.f[0] = ld32((c.r[18].w[0] + 740u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; st32((c.r[18].w[0] + 740u), c.f[0]);  if (t) { goto L_001E8E58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8E58u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 255u, depth + 1u); else { c.pc = 0x001E7CF0u; return; } if (c.pc != 0x001E8E58u) [[unlikely]] return; }
L_001E8E58:
    set32(c.r[2], 0u + 2u);
    st8((c.r[18].w[0] + 792u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 9999u);
    set32(c.r[2], ld32((c.r[18].w[0] + 840u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001E9180; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 844u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001E9180; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 711u)));
    set32(c.r[2], 0u - 4097u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 16u);
    set32(c.r[16], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 711u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[18].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 792u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8EB8u); st8((c.r[18].w[0] + 849u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0039(c, 251u, depth + 1u); else { c.pc = 0x001E7BE0u; return; } if (c.pc != 0x001E8EB8u) [[unlikely]] return; }
L_001E8EB8:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 8658u));
    set32(c.r[2], 0u + 45u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E8ED0; } }
    st8((c.r[18].w[0] + 767u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001E8ED0:
    set32(c.r[2], 0u + 34u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_001E8F28; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 771u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E8F08; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 33u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8F00u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001E8F00u) [[unlikely]] return; }
L_001E8F00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9180; } }
L_001E8F08:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 25u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8F20u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001E8F20u) [[unlikely]] return; }
L_001E8F20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9180; } }
L_001E8F28:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 771u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E8F58; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 35u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8F4Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001E8F4Cu) [[unlikely]] return; }
L_001E8F4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9180; } }
    c.budget -= 1;
L_001E8F58:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 39u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8F70u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001E8F70u) [[unlikely]] return; }
L_001E8F70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9180; } }
L_001E8F78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_001E9180; } }
L_001E8F80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 711u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E9178; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E9070; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E8FA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9180; } }
L_001E8FA8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 711u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8FB8u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_004E(c, 146u, depth + 1u); else { c.pc = 0x0023A0A0u; return; } if (c.pc != 0x001E8FB8u) [[unlikely]] return; }
L_001E8FB8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8FC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 155u, depth + 1u); else { c.pc = 0x001DBA60u; return; } if (c.pc != 0x001E8FC4u) [[unlikely]] return; }
L_001E8FC4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8FD0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 158u, depth + 1u); else { c.pc = 0x001DBB00u; return; } if (c.pc != 0x001E8FD0u) [[unlikely]] return; }
L_001E8FD0:
    set32(c.r[2], 0u + 17u);
    st8((c.r[18].w[0] + 850u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 740u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 771u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E9030; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 8658u));
    set32(c.r[2], 0u + 45u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E9010; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 14012u)));
    st32((c.r[18].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18164u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E9070; } }
L_001E9010:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 14004u)));
    st32((c.r[18].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18172u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E9070; } }
    c.budget -= 1;
L_001E9030:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 8658u));
    set32(c.r[2], 0u + 45u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001E9058; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 14020u)));
    st32((c.r[18].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18156u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 844u), c.r[2].w[0]);  if (t) { goto L_001E9070; } }
L_001E9058:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 14044u)));
    st32((c.r[18].w[0] + 840u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18132u)));
    st32((c.r[18].w[0] + 844u), c.r[2].w[0]);
    c.budget -= 6;
L_001E9070:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[3] = ld32((c.r[18].w[0] + 4052u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9080u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0039(c, 232u, depth + 1u); else { c.pc = 0x001E7910u; return; } if (c.pc != 0x001E9080u) [[unlikely]] return; }
L_001E9080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9088u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 232u, depth + 1u); else { c.pc = 0x001E7910u; return; } if (c.pc != 0x001E9088u) [[unlikely]] return; }
L_001E9088:
    c.f[1] = ld32((c.r[18].w[0] + 740u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001E90B8; } }
    c.f[1] = ld32((c.r[18].w[0] + 4052u));
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    c.f[3] = fp::sub(c.f[3], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.budget -= 6;
L_001E90B8:
    set32(c.r[2], 0u + 2u);
    c.f[1] = ld32((c.r[18].w[0] + 8292u));
    set32(c.r[3], 0u + 9999u);
    c.f[0] = ld32((c.r[18].w[0] + 740u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 740u), c.f[0]);
    st8((c.r[18].w[0] + 792u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 840u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001E9180; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 844u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001E9180; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 711u)));
    set32(c.r[2], 0u - 4097u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 711u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[18].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 792u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9128u); st8((c.r[18].w[0] + 849u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0039(c, 251u, depth + 1u); else { c.pc = 0x001E7BE0u; return; } if (c.pc != 0x001E9128u) [[unlikely]] return; }
L_001E9128:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 771u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E9158; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 35u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E914Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001E914Cu) [[unlikely]] return; }
L_001E914C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9180; } }
    c.budget -= 1;
L_001E9158:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 39u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9170u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001E9170u) [[unlikely]] return; }
L_001E9170:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9180; } }
L_001E9178:
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_001E9180:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_001E9188:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001E91A0:
    set32(c.r[3], 0u + 38u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));  if (t) { goto L_001E9230; } }
    set32(c.r[3], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 29u);  if (t) { goto L_001E9218; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001E9218; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001E9200; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E91E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9238; } }
L_001E91E0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001E9238; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_001E9238; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[9], 0u + 3u);  if (t) { goto L_001E9238; } }
    c.budget -= 1;
L_001E9200:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != c.r[3].d[0];  if (t) { goto L_001E9238; } }
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u + 1u);  if (t) { goto L_001E9238; } }
L_001E9218:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != c.r[3].d[0];  if (t) { goto L_001E9238; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_001E9238; } }
    c.budget -= 1;
L_001E9230:
    c.r[8].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 2;
L_001E9238:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));  c.pc = t; return; }
L_001E9250:
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    st8((c.r[4].w[0] + 8659u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], c.r[8].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + 14504u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[7].d[0] = c.r[7].d[0] << 56;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[5], c.r[4].w[0] + 8659u);
    set32(c.r[6], c.r[4].w[0] + 8660u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    st8((c.r[4].w[0] + 8660u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 15;
    { c.r[4].d[0] = c.r[8].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E91A0u | kUnwind; return; } goto L_001E91A0; }
L_001E9290:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[11].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[11].d[0] == 0ull; c.r[10].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001E92AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));  if (t) { goto L_001E92B0; } }
L_001E92AC:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E92B0:
    st8((c.r[29].w[0] + 31u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].d[0] = c.r[7].d[0] << 56;
    c.r[3].d[0] = c.r[4].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[4].d[0] = c.r[4].d[0] << 56;
    set32(c.r[5], c.r[3].w[0] << 7);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[6], c.r[29].w[0] + 30u);
    set32(c.r[3], c.r[3].w[0] + 14504u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[5], c.r[29].w[0] + 31u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E92F0u); st8((c.r[29].w[0] + 30u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_003A(c, 52u, depth + 1u); else { c.pc = 0x001E91A0u; return; } if (c.pc != 0x001E92F0u) [[unlikely]] return; }
L_001E92F0:
    c.budget -= 2;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_001E9300; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 31u)));
    st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001E9300:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { goto L_001E9310; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 30u)));
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001E9310:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E9320:
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] - 27856u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E9358; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E93B8; } }
    c.budget -= 1;
L_001E9358:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[2], 0u + 38u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 49u);  if (t) { goto L_001E93B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E93B0; } }
    set32(c.r[2], 0u + 29u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E93B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_001E93B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E9398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E93B0; } }
    c.budget -= 1;
L_001E9398:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8660u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_001E93B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E93B8; } }
L_001E93B0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8659u)));
    c.budget -= 2;
L_001E93B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E93C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], c.r[4].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + 14502u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  c.pc = t; return; }
L_001E93E0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[2], 0u + 45u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E9418; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 851u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E9418; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E9418; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9440; } }
L_001E9418:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E9430; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9440; } }
L_001E9430:
    set32(c.r[2], ld32((c.r[4].w[0] + 1608u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 112u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_001E943C:
    c.budget -= 1;
L_001E9440:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E9450:
    c.r[6].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], c.r[5].w[0] + 14384u);
    set32(c.r[6], c.r[6].w[0] << 7);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0] + 1608u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + 1644u);  if (t) { goto L_001E9570; } }
    c.r[10].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[8], c.r[8].w[0] - 21680u);
    set32(c.r[7], c.r[7].w[0] - 24160u);
    set32(c.r[6], c.r[6].w[0] + 30288u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[9], c.r[10].w[0] << 1);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 3);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[8].w[0]);
    c.r[9].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[8], c.r[9].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 1608u)));
    set32(c.r[7], c.r[7].w[0] + 28u);
    st32((c.r[3].w[0] + 16u), c.r[7].w[0]);
    c.r[8].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[7], c.r[8].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0] + 36u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23780u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 76u)));
    c.budget -= 32;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_001E9540; } }
    c.r[9].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8684u)));
    set32(c.r[7], c.r[7].w[0] - 16352u);
    set32(c.r[5], c.r[9].w[0] << 3);
    set32(c.r[8], c.r[5].w[0] - c.r[9].w[0]);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[8], c.r[8].w[0] - c.r[9].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[8].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 40u), c.r[5].w[0]);  if (t) { goto L_001E9658; } }
L_001E9540:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[5].w[0] - 18112u);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 40u), c.r[5].w[0]);  if (t) { goto L_001E9658; } }
    c.budget -= 1;
L_001E9570:
    c.r[10].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[8], c.r[8].w[0] - 30448u);
    set32(c.r[7], c.r[7].w[0] - 28432u);
    set32(c.r[6], c.r[6].w[0] - 24416u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[9], c.r[10].w[0] << 1);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 3);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[8].w[0]);
    c.r[9].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[8], c.r[9].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 1608u)));
    set32(c.r[7], c.r[7].w[0] + 32u);
    st32((c.r[3].w[0] + 16u), c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[7], c.r[7].w[0] << 6);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0] + 36u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23780u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 76u)));
    c.budget -= 30;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_001E9630; } }
    c.r[9].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8684u)));
    set32(c.r[7], c.r[7].w[0] - 7872u);
    set32(c.r[5], c.r[9].w[0] << 3);
    set32(c.r[8], c.r[5].w[0] - c.r[9].w[0]);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[8], c.r[8].w[0] - c.r[9].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[8].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 40u), c.r[5].w[0]);  if (t) { goto L_001E9658; } }
L_001E9630:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] - 27504u);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 40u), c.r[5].w[0]);
    c.budget -= 10;
L_001E9658:
    set32(c.r[8], ld32((c.r[4].w[0] + 1608u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[7], c.r[7].w[0] + 27824u);
    set32(c.r[6], c.r[6].w[0] - 26624u);
    set32(c.r[5], c.r[5].w[0] - 23232u);
    set32(c.r[8], c.r[8].w[0] + 44u);
    st32((c.r[3].w[0] + 12u), c.r[8].w[0]);
    c.r[8].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[8], c.r[8].w[0] << 5);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 1608u)));
    set32(c.r[7], c.r[7].w[0] + 36u);
    st32((c.r[3].w[0] + 24u), c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[7], c.r[7].w[0] << 5);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0] + 28u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 1608u)));
    set32(c.r[6], c.r[6].w[0] + 40u);
    st32((c.r[3].w[0] + 32u), c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 44u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.budget -= 31;
    { const bool t = c.r[5].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);  if (t) { goto L_001E96E0; } }
    set32(c.r[5], c.r[5].w[0] - 22400u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 52u), c.r[5].w[0]);  if (t) { goto L_001E96F0; } }
L_001E96E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[5], c.r[5].w[0] - 22368u);
    st32((c.r[3].w[0] + 52u), c.r[5].w[0]);
    c.budget -= 4;
L_001E96F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[5], c.r[5].w[0] - 22288u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[3].w[0] + 56u), c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[7], c.r[7].w[0] + 30288u);
    set32(c.r[5], c.r[5].w[0] - 22272u);
    set32(c.r[6], c.r[6].w[0] - 22336u);
    st32((c.r[3].w[0] + 60u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[5], c.r[5].w[0] + 24772u);
    st32((c.r[3].w[0] + 64u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[5], c.r[5].w[0] - 22256u);
    st32((c.r[3].w[0] + 68u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[5], c.r[5].w[0] + 24776u);
    st32((c.r[3].w[0] + 72u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[5], c.r[5].w[0] - 22224u);
    st32((c.r[3].w[0] + 76u), c.r[5].w[0]);
    set32(c.r[8], ld32((c.r[4].w[0] + 1608u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[5], c.r[5].w[0] + 24768u);
    set32(c.r[8], c.r[8].w[0] + 40u);
    st32((c.r[3].w[0] + 80u), c.r[8].w[0]);
    st32((c.r[3].w[0] + 84u), c.r[7].w[0]);
    st32((c.r[3].w[0] + 88u), c.r[6].w[0]);
    st32((c.r[3].w[0] + 92u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.budget -= 34;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 96u);  if (t) { goto L_001E9880; } }
    c.r[11].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[9], c.r[9].w[0] + 3920u);
    set32(c.r[8], c.r[8].w[0] + 5776u);
    set32(c.r[7], c.r[7].w[0] + 3600u);
    set32(c.r[6], c.r[6].w[0] + 7936u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[10], c.r[11].w[0] << 1);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 3);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[9].w[0]);
    c.r[10].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[9], c.r[10].w[0] << 1);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[8].w[0]);
    c.r[8].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    st32((c.r[3].w[0] + 16u), c.r[7].w[0]);
    c.r[8].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[7], c.r[8].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0] + 36u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23780u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 76u)));
    c.budget -= 35;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_001E9850; } }
    c.r[9].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8684u)));
    set32(c.r[7], c.r[7].w[0] - 16352u);
    set32(c.r[5], c.r[9].w[0] << 3);
    set32(c.r[8], c.r[5].w[0] - c.r[9].w[0]);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[8], c.r[8].w[0] - c.r[9].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[8].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 40u), c.r[5].w[0]);  if (t) { goto L_001E9978; } }
    c.budget -= 1;
L_001E9850:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[5].w[0] - 18112u);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 40u), c.r[5].w[0]);  if (t) { goto L_001E9978; } }
    c.budget -= 1;
L_001E9880:
    c.r[11].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[9], c.r[9].w[0] + 29264u);
    set32(c.r[8], c.r[8].w[0] + 31120u);
    set32(c.r[7], c.r[7].w[0] + 28944u);
    set32(c.r[6], c.r[6].w[0] + 32048u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[10], c.r[11].w[0] << 1);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 3);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[9].w[0]);
    c.r[10].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[9], c.r[10].w[0] << 1);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[8].w[0]);
    c.r[8].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    st32((c.r[3].w[0] + 16u), c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[7], c.r[7].w[0] << 6);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0] + 36u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23780u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 76u)));
    c.budget -= 33;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_001E9950; } }
    c.r[9].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8684u)));
    set32(c.r[7], c.r[7].w[0] - 7872u);
    set32(c.r[5], c.r[9].w[0] << 3);
    set32(c.r[8], c.r[5].w[0] - c.r[9].w[0]);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[8], c.r[8].w[0] - c.r[9].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[8].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 40u), c.r[5].w[0]);  if (t) { goto L_001E9978; } }
    c.budget -= 1;
L_001E9950:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] - 27504u);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 40u), c.r[5].w[0]);
    c.budget -= 10;
L_001E9978:
    c.r[11].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[10], c.r[10].w[0] + 6704u);
    set32(c.r[9], c.r[9].w[0] + 1136u);
    set32(c.r[8], c.r[8].w[0] + 19024u);
    set32(c.r[7], c.r[7].w[0] + 16560u);
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] - 23232u);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[5], c.r[5].w[0] - 19824u);
    st32((c.r[3].w[0] + 12u), c.r[10].w[0]);
    c.r[10].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[10], c.r[10].w[0] << 5);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[9].w[0]);
    c.r[9].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    st32((c.r[3].w[0] + 24u), c.r[8].w[0]);
    c.r[8].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[8], c.r[8].w[0] << 5);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    st32((c.r[3].w[0] + 28u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 1608u)));
    set32(c.r[7], c.r[7].w[0] + 40u);
    st32((c.r[3].w[0] + 32u), c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0] + 44u), c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 1632u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 43;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E9A78; } }
    c.r[8].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[6], c.r[6].w[0] - 19504u);
    set32(c.r[5], c.r[5].w[0] - 22912u);
    set32(c.r[3], c.r[3].w[0] - 16416u);
    set32(c.r[7], c.r[8].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[4].w[0] + 1636u), c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0] + 1036u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 1640u), c.r[3].w[0]);  if (t) { goto L_001E9AB8; } }
L_001E9A78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] - 28592u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] + 1636u), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] - 25808u);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] - 19488u);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0] + 1036u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 1640u), c.r[3].w[0]);
    c.budget -= 16;
L_001E9AB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E9AC0:
    set32(c.r[2], c.r[5].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1788u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 1644u)));  c.pc = t; return; }
L_001E9AF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001E9B88; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_001E9B18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9B90; } }
L_001E9B18:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001E9B38; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E9B38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9B48; } }
    c.budget -= 1;
L_001E9B38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9B40u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003A(c, 67u, depth + 1u); else { c.pc = 0x001E9BA0u; return; } if (c.pc != 0x001E9B40u) [[unlikely]] return; }
L_001E9B40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9B90; } }
L_001E9B48:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8693u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E9B78; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 797u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E9B78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9B6Cu);  if (depth < kMaxDepth) unit_003A(c, 67u, depth + 1u); else { c.pc = 0x001E9BA0u; return; } if (c.pc != 0x001E9B6Cu) [[unlikely]] return; }
L_001E9B6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9B90; } }
    c.budget -= 1;
L_001E9B78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9B80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 67u, depth + 1u); else { c.pc = 0x001E9BA0u; return; } if (c.pc != 0x001E9B80u) [[unlikely]] return; }
L_001E9B80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9B90; } }
L_001E9B88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E9B90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 67u, depth + 1u); else { c.pc = 0x001E9BA0u; return; } if (c.pc != 0x001E9B90u) [[unlikely]] return; }
L_001E9B90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001E9BA0:
    set32(c.r[3], c.r[5].w[0] << 1);
    st8((c.r[4].w[0] + 1788u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[6], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[6].w[0] + 1648u)));
    set32(c.r[3], c.r[6].w[0] + 1644u);
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[4].w[0] + 1000u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[4].w[0] + 1084u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    st32((c.r[4].w[0] + 1080u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 12u));
    st32((c.r[4].w[0] + 1004u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 16u));
    st32((c.r[4].w[0] + 1008u), c.f[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    c.budget -= 21;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_001E9C00; } }
    c.f[0] = ld32((c.r[7].w[0] + 20u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 1012u), c.f[0]);  if (t) { goto L_001E9C08; } }
L_001E9C00:
    c.f[0] = ld32((c.r[7].w[0] + 20u));
    st32((c.r[4].w[0] + 1076u), c.f[0]);
    c.budget -= 2;
L_001E9C08:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { goto L_001E9C40; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001E9C40; } }
    c.f[0] = ld32((c.r[4].w[0] + 1008u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[1] = c.r[5].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 1008u), c.f[0]);
    c.budget -= 7;
L_001E9C40:
    set32(c.r[7], ld32((c.r[3].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[2] = c.r[5].w[0];
    set32(c.r[6], c.r[6].w[0] - 24576u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[5].w[0];
    c.f[0] = ld32((c.r[7].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[5].d[0] = c.r[5].d[0] | 39322ull;
    st32((c.r[4].w[0] + 1044u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[4].w[0] + 1048u), c.f[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[4].w[0] + 1052u), c.f[0]);
    set32(c.r[7], ld32((c.r[3].w[0] + 12u)));
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[4].w[0] + 1056u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[4].w[0] + 1064u), c.f[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[4].w[0] + 1068u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[4].w[0] + 1060u), c.f[0]);
    set32(c.r[7], ld32((c.r[3].w[0] + 16u)));
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[4].w[0] + 1156u), c.f[0]);
    set32(c.r[7], ld32((c.r[3].w[0] + 20u)));
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[4].w[0] + 1092u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[4].w[0] + 1096u), c.f[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[4].w[0] + 1100u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[4].w[0] + 1104u), c.f[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[4].w[0] + 1108u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[4].w[0] + 1112u), c.f[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[4].w[0] + 1116u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[4].w[0] + 1120u), c.f[0]);
    set32(c.r[7], ld32((c.r[3].w[0] + 24u)));
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[4].w[0] + 1160u), c.f[0]);
    set32(c.r[7], ld32((c.r[3].w[0] + 28u)));
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[4].w[0] + 1124u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[4].w[0] + 1128u), c.f[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[4].w[0] + 1132u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[4].w[0] + 1136u), c.f[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[4].w[0] + 1140u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[4].w[0] + 1144u), c.f[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[4].w[0] + 1148u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[4].w[0] + 1152u), c.f[0]);
    set32(c.r[7], ld32((c.r[3].w[0] + 32u)));
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[4].w[0] + 1164u), c.f[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 44u)));
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 1040u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[4].w[0] + 864u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[4].w[0] + 1640u)));
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[4].w[0] + 1224u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[4].w[0] + 1228u), c.f[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st16((c.r[4].w[0] + 1232u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st16((c.r[4].w[0] + 1234u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 1168u), c.r[5].w[0]);
    c.budget -= 106;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 1172u), c.r[5].w[0]);  c.pc = t; return; }
L_001E9DF0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 771u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[5].d[0] << 48;  if (t) { goto L_001E9E48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] - 10560u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], 0u + 48u);
    set32(c.r[5], c.r[5].w[0] << 1);
    c.budget -= 11;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_001E9E38; } }
    set32(c.r[2], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_001E9E40; } }
    c.budget -= 1;
L_001E9E38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001E9E98; } }
L_001E9E40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_001E9E98; } }
L_001E9E48:
    c.r[6].d[0] = c.r[5].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 10304u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[2], 0u + 48u);
    c.budget -= 12;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_001E9E88; } }
    set32(c.r[2], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_001E9E90; } }
    c.budget -= 1;
L_001E9E88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001E9E98; } }
L_001E9E90:
    set32(c.r[5], 0u + 1u);
    c.budget -= 2;
L_001E9E98:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E9EB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9EE0; } }
L_001E9EB0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 820u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001E9ED0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E9ED0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9EE0; } }
    c.budget -= 1;
L_001E9ED0:
    st8((c.r[4].w[0] + 820u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 704u), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
L_001E9EE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E9EF0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 771u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].d[0] = c.r[5].d[0] << 48;  if (t) { goto L_001E9F48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] - 10560u);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], 0u + 48u);
    set32(c.r[6], c.r[6].w[0] << 1);
    c.budget -= 11;
    { const bool t = c.r[7].d[0] == c.r[2].d[0]; set32(c.r[8], c.r[3].w[0] + c.r[6].w[0]);  if (t) { goto L_001E9F38; } }
    set32(c.r[2], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_001E9F40; } }
    c.budget -= 1;
L_001E9F38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001E9F98; } }
L_001E9F40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_001E9F98; } }
L_001E9F48:
    c.r[7].d[0] = c.r[5].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 10304u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[2], 0u + 48u);
    c.budget -= 12;
    { const bool t = c.r[7].d[0] == c.r[2].d[0]; set32(c.r[8], c.r[3].w[0] + c.r[6].w[0]);  if (t) { goto L_001E9F88; } }
    set32(c.r[2], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_001E9F90; } }
    c.budget -= 1;
L_001E9F88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001E9F98; } }
L_001E9F90:
    set32(c.r[6], 0u + 1u);
    c.budget -= 2;
L_001E9F98:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E9FB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9FF0; } }
L_001E9FB0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 814u)));
    st16((c.r[4].w[0] + 816u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 814u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 821u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001E9FE0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001E9FE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9FF0; } }
    c.budget -= 1;
L_001E9FE0:
    st8((c.r[4].w[0] + 821u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 708u), 0u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 786u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001E9FF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EA000:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8327u)));
    st8((c.r[4].w[0] + 8287u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8326u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA02Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001EA02Cu) [[unlikely]] return; }
L_001EA02C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA038u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 68u, depth + 1u); else { c.pc = 0x001E9DF0u; return; } if (c.pc != 0x001EA038u) [[unlikely]] return; }
L_001EA038:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EA068; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8326u)));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 792u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EA068; } }
    st8((c.r[16].w[0] + 792u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001EA068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA070u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 11u, depth + 1u); else { c.pc = 0x001EC290u; return; } if (c.pc != 0x001EA070u) [[unlikely]] return; }
L_001EA070:
    st16((c.r[16].w[0] + 818u), static_cast<std::uint16_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001EA090:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[12] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8327u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA0C4u); st8((c.r[4].w[0] + 8287u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001EA0C4u) [[unlikely]] return; }
L_001EA0C4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA0D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 68u, depth + 1u); else { c.pc = 0x001E9DF0u; return; } if (c.pc != 0x001EA0D0u) [[unlikely]] return; }
L_001EA0D0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EA0F8; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 792u));
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EA0F8; } }
    st8((c.r[17].w[0] + 792u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001EA0F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA100u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 11u, depth + 1u); else { c.pc = 0x001EC290u; return; } if (c.pc != 0x001EA100u) [[unlikely]] return; }
L_001EA100:
    st16((c.r[17].w[0] + 818u), static_cast<std::uint16_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001EA120:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 18256u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 108u), 0u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0] + 104u), 0u);
    set32(c.r[5], 0u + 1u);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3587ull;
    st16((c.r[4].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 814u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA170u); st8((c.r[4].w[0] + 779u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000D(c, 223u, depth + 1u); else { c.pc = 0x001371F0u; return; } if (c.pc != 0x001EA170u) [[unlikely]] return; }
L_001EA170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA178u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 11u, depth + 1u); else { c.pc = 0x001EC290u; return; } if (c.pc != 0x001EA178u) [[unlikely]] return; }
L_001EA178:
    c.f[12] = 0u;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA190u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x001EA190u) [[unlikely]] return; }
L_001EA190:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA19Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x001EA19Cu) [[unlikely]] return; }
L_001EA19C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001EA1B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 37u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 814u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001EA200; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0; st16((c.r[17].w[0] + 856u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001EA220; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] - 14303u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (t) { goto L_001EA220; } }
    c.budget -= 1;
L_001EA200:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; st16((c.r[17].w[0] + 856u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001EA220; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 26432u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
L_001EA220:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 23u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA230u); st16((c.r[17].w[0] + 858u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_003A(c, 68u, depth + 1u); else { c.pc = 0x001E9DF0u; return; } if (c.pc != 0x001EA230u) [[unlikely]] return; }
L_001EA230:
    set32(c.r[2], 0u + 23u);
    st16((c.r[17].w[0] + 818u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EA260; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 792u));
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EA260; } }
    st8((c.r[17].w[0] + 792u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001EA260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA268u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 11u, depth + 1u); else { c.pc = 0x001EC290u; return; } if (c.pc != 0x001EA268u) [[unlikely]] return; }
L_001EA268:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001EA280:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 37u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 814u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001EA2C8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0; st16((c.r[16].w[0] + 856u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001EA2E8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] - 14303u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (t) { goto L_001EA2E8; } }
    c.budget -= 1;
L_001EA2C8:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0; st16((c.r[16].w[0] + 856u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001EA2E8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 26432u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
L_001EA2E8:
    st16((c.r[16].w[0] + 858u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[3].d[0] = c.r[4].d[0] & 3592ull;  if (t) { goto L_001EA340; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 792u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EA320; } }
    st8((c.r[16].w[0] + 792u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001EA320:
    set32(c.r[2], ld32((c.r[16].w[0] + 1612u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA330u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001EA330u) [[unlikely]] return; }
L_001EA330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA338u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 11u, depth + 1u); else { c.pc = 0x001EC290u; return; } if (c.pc != 0x001EA338u) [[unlikely]] return; }
L_001EA338:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EA348; } }
L_001EA340:
    c.r[2].d[0] = c.r[4].d[0] & 3585ull;
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001EA348:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA354u); set32(c.r[5], 0u + 23u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x001EA354u) [[unlikely]] return; }
L_001EA354:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001EA370:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001EA3A0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 792u));
    c.r[1].d[0] = c.r[2].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 80u);  if (t) { goto L_001EA3A0; } }
    st8((c.r[16].w[0] + 792u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001EA3A0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 3584ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA3B4u); st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003B(c, 11u, depth + 1u); else { c.pc = 0x001EC290u; return; } if (c.pc != 0x001EA3B4u) [[unlikely]] return; }
L_001EA3B4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EA3E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA3CCu); set32(c.r[5], 0u + 26u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x001EA3CCu) [[unlikely]] return; }
L_001EA3CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA3D8u); set32(c.r[5], 0u + 26u);  if (depth < kMaxDepth) unit_003A(c, 68u, depth + 1u); else { c.pc = 0x001E9DF0u; return; } if (c.pc != 0x001EA3D8u) [[unlikely]] return; }
L_001EA3D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EA3F0; } }
L_001EA3E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA3ECu); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_003A(c, 78u, depth + 1u); else { c.pc = 0x001EA120u; return; } if (c.pc != 0x001EA3ECu) [[unlikely]] return; }
L_001EA3EC:
    c.budget -= 1;
L_001EA3F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001EA400:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001EA430; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 792u));
    c.r[1].d[0] = c.r[2].sd[0] < 40ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 40u);  if (t) { goto L_001EA430; } }
    st8((c.r[16].w[0] + 792u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001EA430:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 7688ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA444u); st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003B(c, 11u, depth + 1u); else { c.pc = 0x001EC290u; return; } if (c.pc != 0x001EA444u) [[unlikely]] return; }
L_001EA444:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001EA470; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA45Cu); set32(c.r[5], 0u + 36u);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x001EA45Cu) [[unlikely]] return; }
L_001EA45C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA468u); set32(c.r[5], 0u + 36u);  if (depth < kMaxDepth) unit_003A(c, 68u, depth + 1u); else { c.pc = 0x001E9DF0u; return; } if (c.pc != 0x001EA468u) [[unlikely]] return; }
L_001EA468:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EA480; } }
L_001EA470:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA47Cu); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_003A(c, 78u, depth + 1u); else { c.pc = 0x001EA120u; return; } if (c.pc != 0x001EA47Cu) [[unlikely]] return; }
L_001EA47C:
    c.budget -= 1;
L_001EA480:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001EA490:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[17].w[0] + 8288u);  if (t) { goto L_001EA4D0; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 792u));
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EA4D0; } }
    st8((c.r[17].w[0] + 792u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001EA4D0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 39u)));
    st8((c.r[17].w[0] + 8287u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 38u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EA510; } }
    c.f[0] = c.r[16].w[0];
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 8u)));
    c.f[1] = ld32((c.r[6].w[0] + 20u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 10u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA508u); c.f[12] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001EA508u) [[unlikely]] return; }
L_001EA508:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EA588; } }
L_001EA510:
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[6].w[0] + 16u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.r[1].d[0] = c.r[7].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; c.f[12] = ld32((c.r[17].w[0] + 6424u));  if (t) { goto L_001EA578; } }
    set32(c.r[2], c.r[16].w[0] - c.r[7].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 8u)));
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 10u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA56Cu); c.f[12] = fp::add(c.f[12], c.f[0]);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001EA56Cu) [[unlikely]] return; }
L_001EA56C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EA588; } }
    c.budget -= 1;
L_001EA578:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 10u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA588u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x001EA588u) [[unlikely]] return; }
L_001EA588:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 814u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA594u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 68u, depth + 1u); else { c.pc = 0x001E9DF0u; return; } if (c.pc != 0x001EA594u) [[unlikely]] return; }
L_001EA594:
    c.f[0] = c.r[16].w[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 814u)));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st16((c.r[17].w[0] + 818u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 8516u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001EA5C0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 814u)));
    set32(c.r[3], 0u - 24580u);
    st16((c.r[4].w[0] + 816u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 814u), static_cast<std::uint16_t>(0u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001EA5E0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8296u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EA6A0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8298u)));
    set32(c.r[2], 0u + 25u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EA6A0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[2], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 12u);  if (t) { goto L_001EA650; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EA640; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EA630; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EA660; } }
    c.budget -= 1;
L_001EA630:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EA668; } }
L_001EA640:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EA668; } }
L_001EA650:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EA668; } }
L_001EA660:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 2;
L_001EA668:
    c.f[0] = ld32((c.r[4].w[0] + 8308u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EA698; } }
    c.f[0] = ld32((c.r[4].w[0] + 8316u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 2u);  if (t) { goto L_001EA68C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001EA68C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EA6A8; } }
    c.budget -= 1;
L_001EA698:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001EA6A8; } }
L_001EA6A0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_001EA6A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EA6B0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001EA6E8; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 1260u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[4].w[0] + 1268u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1260u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 12;
L_001EA6E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EA6F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[2] = ld32((c.r[4].w[0] + 96u));
    c.f[3] = ld32((c.r[4].w[0] + 1260u));
    c.f[1] = ld32((c.r[4].w[0] + 1016u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[21] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[21]) == fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[12] = fp::cvt_s_w(c.f[3]);  if (t) { goto L_001EA740; } }
    st32((c.r[16].w[0] + 1260u), 0u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 1268u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_001EA7A0; } }
L_001EA740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA748u);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x001EA748u) [[unlikely]] return; }
L_001EA748:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA754u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x001EA754u) [[unlikely]] return; }
L_001EA754:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EA778; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1268u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), 0u);  if (t) { goto L_001EA7A0; } }
    c.budget -= 1;
L_001EA778:
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    c.f[0] = fp::cvt_w_s(c.f[21]);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[16].w[0] + 1260u), c.r[3].w[0]);
    c.budget -= 10;
L_001EA7A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001EA7C0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001EA7E0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 1260u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 6;
L_001EA7E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EA7F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001EA818; } }
    st32((c.r[16].w[0] + 1260u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001EA8B0; } }
L_001EA818:
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 84u));
    c.f[1] = ld32((c.r[16].w[0] + 1016u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[16].w[0] + 96u));
    c.f[0] = ld32((c.r[16].w[0] + 1260u));
    c.f[1] = ld32((c.r[16].w[0] + 1016u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1260u));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA87Cu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x001EA87Cu) [[unlikely]] return; }
L_001EA87C:
    c.f[20] = c.f[0];
    c.f[0] = ld32((c.r[16].w[0] + 96u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA88Cu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x001EA88Cu) [[unlikely]] return; }
L_001EA88C:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EA8A8; } }
    st32((c.r[16].w[0] + 96u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001EA8B0; } }
    c.budget -= 1;
L_001EA8A8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001EA8B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001EA8D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].d[0] = c.r[5].d[0] & 127ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[2], ld32((c.r[4].w[0] + 1260u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] - 23008u);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 22;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[19], ld32((c.r[3].w[0])));  if (t) { goto L_001EA930; } }
    set32(c.r[19], 0u - c.r[19].w[0]);
    c.budget -= 2;
L_001EA930:
    set32(c.r[18], ld32((c.r[17].w[0] + 84u)));
    c.f[1] = c.r[19].w[0];
    c.f[0] = ld32((c.r[17].w[0] + 8292u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA950u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x001EA950u) [[unlikely]] return; }
L_001EA950:
    c.f[20] = c.f[0];
    c.f[0] = ld32((c.r[17].w[0] + 1260u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA960u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x001EA960u) [[unlikely]] return; }
L_001EA960:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EA9D0; } }
    c.f[2] = c.r[19].w[0];
    c.r[2].d[0] = c.r[16].d[0] & 128ull;
    c.f[0] = c.r[18].w[0];
    c.f[1] = ld32((c.r[17].w[0] + 8292u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[0]);
    st32((c.r[17].w[0] + 1268u), c.r[18].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 1260u));
    c.f[1] = ld32((c.r[17].w[0] + 8292u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 21;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 1260u), c.r[3].w[0]);  if (t) { goto L_001EA9C8; } }
    st32((c.r[17].w[0] + 84u), c.r[18].w[0]);
    c.budget -= 2;
L_001EA9C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001EA9F8; } }
L_001EA9D0:
    set32(c.r[3], ld32((c.r[17].w[0] + 1260u)));
    c.r[2].d[0] = c.r[16].d[0] & 128ull;
    set32(c.r[18], c.r[18].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 1268u), c.r[18].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 1260u), 0u);  if (t) { goto L_001EA9F0; } }
    st32((c.r[17].w[0] + 84u), c.r[18].w[0]);
    c.budget -= 2;
L_001EA9F0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_001EA9F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001EAA20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = c.r[5].d[0] & 127ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[2].w[0] << 2);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] - 23008u);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[2], ld32((c.r[4].w[0] + 1260u)));
    set32(c.r[4], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 19;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[17], ld32((c.r[3].w[0])));  if (t) { goto L_001EAA70; } }
    set32(c.r[17], 0u - c.r[17].w[0]);
    c.budget -= 1;
L_001EAA70:
    c.f[1] = c.r[17].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 8292u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAA8Cu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x001EAA8Cu) [[unlikely]] return; }
L_001EAA8C:
    c.f[20] = c.f[0];
    c.f[0] = ld32((c.r[16].w[0] + 1260u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAA9Cu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x001EAA9Cu) [[unlikely]] return; }
L_001EAA9C:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EAB00; } }
    c.f[2] = c.r[17].w[0];
    c.r[2].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 84u));
    c.f[1] = ld32((c.r[16].w[0] + 8292u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1260u));
    c.f[1] = ld32((c.r[16].w[0] + 8292u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1260u), c.r[3].w[0]);  if (t) { goto L_001EAB18; } }
    c.budget -= 1;
L_001EAB00:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1260u), 0u);
    c.budget -= 6;
L_001EAB18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001EAB30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], c.r[28].w[0] - 23808u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23836u)));
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_001EAD20; } }
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 27856u);
    c.budget -= 2;
L_001EAB70:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EAB88; } }
    st16((c.r[4].w[0] + 860u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 760u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 761u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_001EAB88:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EAB70u | kUnwind; return; } goto L_001EAB70; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] - 27856u);
    c.budget -= 4;
L_001EABA8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x461C0000u);  if (t) { goto L_001EAC40; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    set32(c.r[18], c.r[18].w[0] - 27856u);
    c.r[19].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 996u), c.r[2].w[0]);
    c.budget -= 5;
L_001EABC8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EAC30; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[18].d[0];  if (t) { goto L_001EAC30; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 515u));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 515u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EAC30; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EAC10; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EAC30; } }
    c.budget -= 1;
L_001EAC10:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAC1Cu); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001EAC1Cu) [[unlikely]] return; }
L_001EAC1C:
    c.f[1] = ld32((c.r[17].w[0] + 996u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EAC30; } }
    st32((c.r[17].w[0] + 996u), c.f[0]);
    c.budget -= 1;
L_001EAC30:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EABC8u | kUnwind; return; } goto L_001EABC8; } }
L_001EAC40:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EABA8u | kUnwind; return; } goto L_001EABA8; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] - 27856u);
    c.budget -= 4;
L_001EAC60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAC68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 131u, depth + 1u); else { c.pc = 0x001EAD40u; return; } if (c.pc != 0x001EAC68u) [[unlikely]] return; }
L_001EAC68:
    set32(c.r[5], ld32((c.r[17].w[0] + 1492u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001EAC98; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EAC98; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8657u)));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 860u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[5].w[0] + 860u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_001EAC98:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 764u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EAD10; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EAD08; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EACD0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EACE8; } }
L_001EACD0:
    st32((c.r[17].w[0] + 1504u), 0u);
    st32((c.r[17].w[0] + 1516u), 0u);
    st32((c.r[17].w[0] + 1488u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 508u), 0u);  if (t) { goto L_001EAD08; } }
    c.budget -= 1;
L_001EACE8:
    set32(c.r[2], ld32((c.r[17].w[0] + 504u)));
    set32(c.r[4], c.r[17].w[0] + 1344u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EACF8u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001EACF8u) [[unlikely]] return; }
L_001EACF8:
    set32(c.r[4], c.r[17].w[0] + 1296u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAD04u); set32(c.r[5], c.r[17].w[0] + 1344u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001EAD04u) [[unlikely]] return; }
L_001EAD04:
    c.budget -= 1;
L_001EAD08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAD10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 18u, depth + 1u); else { c.pc = 0x001EC4F0u; return; } if (c.pc != 0x001EAD10u) [[unlikely]] return; }
L_001EAD10:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EAC60u | kUnwind; return; } goto L_001EAC60; } }
L_001EAD20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001EAD40:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001EAD98; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EAD98; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 800u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EADE0; } }
    c.budget -= 1;
L_001EAD98:
    st32((c.r[20].w[0] + 1488u), 0u);
    st32((c.r[20].w[0] + 504u), 0u);
    set32(c.r[3], 0u + 3u);
    st32((c.r[20].w[0] + 508u), 0u);
    st32((c.r[20].w[0] + 1492u), 0u);
    st32((c.r[20].w[0] + 1508u), 0u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 764u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EADD0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EADD8; } }
    c.budget -= 1;
L_001EADD0:
    st8((c.r[20].w[0] + 764u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001EADD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EB3A8; } }
L_001EADE0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23836u)));
    set32(c.r[3], c.r[28].w[0] - 23808u);
    st32((c.r[28].w[0] - 24120u), 0u);
    c.r[5].d[0] = c.r[4].d[0] ^ 1ull;
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001EAF68; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[4], c.r[5].w[0] << 10);
    set32(c.r[3], c.r[3].w[0] + 24928u);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_001EAE18:
    set32(c.r[19], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001EAF50; } }
    set32(c.r[7], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001EAF50; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EAF50; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    set32(c.r[3], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_001EAF50; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001EAE68; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_001EAF50; } }
L_001EAE68:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[7].d[0];  if (t) { goto L_001EAF50; } }
    c.r[4].d[0] = ld8((c.r[7].w[0] + 515u));
    c.r[3].d[0] = ld8((c.r[20].w[0] + 515u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 255u);  if (t) { goto L_001EAF50; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EAF50; } }
    c.r[3].d[0] = ld16((c.r[7].w[0] + 566u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001EAF50; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[1].d[0] = c.r[6].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_001EAEC0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EAEE0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EAEE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EAF50; } }
L_001EAEC0:
    c.r[1].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EAEE0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EAF50; } }
    c.budget -= 1;
L_001EAEE0:
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001EAF50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAEFCu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 145u, depth + 1u); else { c.pc = 0x001EB3E0u; return; } if (c.pc != 0x001EAEFCu) [[unlikely]] return; }
L_001EAEFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001EAF50; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAF10u); set32(c.r[6], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_003A(c, 148u, depth + 1u); else { c.pc = 0x001EB580u; return; } if (c.pc != 0x001EAF10u) [[unlikely]] return; }
L_001EAF10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EAF50; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 24120u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 22672u);
    set32(c.r[3], c.r[3].w[0] + 21648u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0]), c.r[19].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24120u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[28].w[0] - 24120u), c.r[3].w[0]);
    c.budget -= 14;
L_001EAF50:
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EAE18u | kUnwind; return; } goto L_001EAE18; } }
    c.budget -= 1;
L_001EAF68:
    set32(c.r[3], ld32((c.r[28].w[0] - 24120u)));
    set32(c.r[21], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[21].sd[0] <= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_001EB098; } }
    set32(c.r[4], c.r[21].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 22672u);
    set32(c.r[23], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] + 21648u);
    set32(c.r[30], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
L_001EAF90:
    set32(c.r[19], c.r[21].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] < 0; c.r[18].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_001EB038; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 22672u);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 21648u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
L_001EAFB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[22], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 22672u);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAFD8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 150u, depth + 1u); else { c.pc = 0x001EB660u; return; } if (c.pc != 0x001EAFD8u) [[unlikely]] return; }
L_001EAFD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001EB028; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001EB020; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001EB000; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EB028; } }
    c.budget -= 1;
L_001EB000:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] + 21648u);
    set32(c.r[3], c.r[3].w[0] + c.r[22].w[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EB028; } }
L_001EB020:
    c.r[18].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_001EB028:
    set32(c.r[19], c.r[19].w[0] - 1u);
    set32(c.r[17], c.r[17].w[0] - 4u);
    c.budget -= 4;
    { const bool t = c.r[19].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EAFB8u | kUnwind; return; } goto L_001EAFB8; } }
L_001EB038:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[21].d[0];  if (t) { goto L_001EB088; } }
    set32(c.r[6], ld32((c.r[23].w[0])));
    c.f[0] = ld32((c.r[30].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 22672u);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] + 21648u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 172u), c.f[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[23].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[30].w[0]), c.f[0]);
    st32((c.r[5].w[0]), c.r[6].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 18;
L_001EB088:
    set32(c.r[21], c.r[21].w[0] - 1u);
    set32(c.r[23], c.r[23].w[0] - 4u);
    c.budget -= 4;
    { const bool t = c.r[21].sd[0] > 0; set32(c.r[30], c.r[30].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EAF90u | kUnwind; return; } goto L_001EAF90; } }
L_001EB098:
    set32(c.r[5], ld32((c.r[20].w[0] + 1492u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001EB390; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 24120u)));
    c.r[1].d[0] = 0ll < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001EB0E0; } }
    set32(c.r[7], ld32((c.r[20].w[0] + 1508u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[8], c.r[8].w[0] + 22672u);
    c.budget -= 3;
L_001EB0C0:
    set32(c.r[3], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[7].d[0];  if (t) { goto L_001EB0E0; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EB0C0u | kUnwind; return; } goto L_001EB0C0; } }
    c.budget -= 1;
L_001EB0E0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[6].d[0];  if (t) { goto L_001EB0F8; } }
    st32((c.r[20].w[0] + 1508u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 1492u), 0u);  if (t) { goto L_001EB390; } }
    c.budget -= 1;
L_001EB0F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EB390; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EB390; } }
    st32((c.r[20].w[0] + 1508u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 1492u), 0u);  if (t) { goto L_001EB390; } }
    c.budget -= 1;
L_001EB128:
    set32(c.r[5], ld32((c.r[6].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EB150; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EB1C8; } }
L_001EB150:
    st32((c.r[20].w[0] + 1508u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[4], c.r[20].w[0] + 1312u);
    set32(c.r[5], c.r[5].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB168u); st32((c.r[20].w[0] + 1492u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001EB168u) [[unlikely]] return; }
L_001EB168:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EB1E0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EB190; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[20].w[0] + 1604u));  if (t) { goto L_001EB194; } }
L_001EB190:
    c.f[1] = ld32((c.r[20].w[0] + 1600u));
    c.budget -= 1;
L_001EB194:
    set32(c.r[4], ld32((c.r[28].w[0] - 24120u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] + 21648u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_001EB1C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 784u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001EB1E0; } }
L_001EB1C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 784u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001EB1E0; } }
L_001EB1C8:
    set32(c.r[4], ld32((c.r[28].w[0] - 24120u)));
    set32(c.r[6], c.r[6].w[0] - 4u);
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[28].w[0] - 24120u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EB128u | kUnwind; return; } goto L_001EB128; } }
    c.budget -= 1;
L_001EB1E0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 764u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001EB1F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB1F8u);  if (depth < kMaxDepth) unit_003B(c, 11u, depth + 1u); else { c.pc = 0x001EC290u; return; } if (c.pc != 0x001EB1F8u) [[unlikely]] return; }
L_001EB1F8:
    set32(c.r[9], ld32((c.r[20].w[0] + 1492u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 27856u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
L_001EB210:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EB2A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001EB2A8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[20].d[0];  if (t) { goto L_001EB2A8; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8657u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 274u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[8].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EB270; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_001EB260; } }
    set32(c.r[3], ld32((c.r[9].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; c.r[3].d[0] = c.r[4].d[0] ^ c.r[8].d[0];  if (t) { goto L_001EB2A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001EB2A8; } }
L_001EB260:
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[8].d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001EB2A8; } }
    c.budget -= 1;
L_001EB270:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_001EB2A8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[9].d[0];  if (t) { goto L_001EB290; } }
    set32(c.r[3], ld32((c.r[9].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_001EB2A8; } }
    c.budget -= 1;
L_001EB290:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 784u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EB2A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 274u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    st8((c.r[6].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001EB2A8:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EB210u | kUnwind; return; } goto L_001EB210; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EB388; } }
    c.r[3].d[0] = ld16((c.r[28].w[0] - 23892u));
    set32(c.r[9], ld32((c.r[20].w[0] + 1492u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_001EB388; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[6], c.r[6].w[0] - 9840u);
    c.budget -= 2;
L_001EB2E8:
    set32(c.r[8], ld32((c.r[6].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EB370; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8657u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 274u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EB338; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_001EB328; } }
    set32(c.r[3], ld32((c.r[9].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[8].d[0]; c.r[3].d[0] = c.r[4].d[0] ^ c.r[5].d[0];  if (t) { goto L_001EB370; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001EB370; } }
L_001EB328:
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[5].d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001EB370; } }
    c.budget -= 1;
L_001EB338:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_001EB370; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[9].d[0];  if (t) { goto L_001EB358; } }
    set32(c.r[3], ld32((c.r[9].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[3].d[0];  if (t) { goto L_001EB370; } }
    c.budget -= 1;
L_001EB358:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 784u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EB370; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 274u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[8].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001EB370:
    c.r[3].d[0] = ld16((c.r[28].w[0] - 23892u));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EB2E8u | kUnwind; return; } goto L_001EB2E8; } }
    c.budget -= 1;
L_001EB388:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EB3A8; } }
L_001EB390:
    set32(c.r[4], ld32((c.r[28].w[0] - 24120u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] + 22672u);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EB1C8u | kUnwind; return; } goto L_001EB1C8; } }
L_001EB3A8:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001EB3E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB41Cu); set32(c.r[4], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001EB41Cu) [[unlikely]] return; }
L_001EB41C:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB428u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001EB428u) [[unlikely]] return; }
L_001EB428:
    set32(c.r[4], c.r[29].w[0] + 56u);
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[3]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EB450; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EB458; } }
L_001EB450:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001EB568; } }
L_001EB458:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[5] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[3], c.f[5]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001EB488; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EB568; } }
L_001EB488:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DDD0000u);
    c.f[2] = ld32((c.r[29].w[0] + 48u));
    c.r[3].d[0] = c.r[3].d[0] | 11897ull;
    c.f[0] = ld32((c.r[17].w[0] + 1020u));
    set32(c.r[5], c.r[29].w[0] + 52u);
    c.f[1] = c.r[3].w[0];
    c.r[2].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.f[2] = fp::mul(c.f[5], c.f[2]);
    fpu_div(c, 2u, c.f[2], c.f[3]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[4] = ld32((c.r[5].w[0]));
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 1024u));
    c.f[0] = c.f[1] ^ fp::kSign;
    c.f[4] = fp::mul(c.f[5], c.f[4]);
    fpu_div(c, 3u, c.f[4], c.f[3]);
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    st32((c.r[5].w[0]), c.f[2]);
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[2] = fp::mul(c.f[5], c.f[3]);
    fpu_div(c, 2u, c.f[2], c.f[3]);
    st32((c.r[4].w[0]), c.f[2]);
    c.f[2] = ld32((c.r[29].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 28;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001EB508; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EB508; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_001EB508:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001EB538; } }
    c.f[1] = ld32((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DAC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 2097ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EB538; } }
    set32(c.r[7], 0u + 1u);
    c.budget -= 1;
L_001EB538:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001EB568; } }
    c.f[1] = ld32((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DAC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 2097ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EB568; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_001EB568:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001EB580:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001EB5A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_001EB5B8; } }
L_001EB5A8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EB5B8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001EB5B8:
    set32(c.r[2], c.r[4].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[5].w[0] + 64u);
    c.f[0] = ld32((c.r[2].w[0] + 2032u));
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2036u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2040u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB5E4u); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001EB5E4u) [[unlikely]] return; }
L_001EB5E4:
    st32((c.r[16].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001EB600; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EB640; } }
L_001EB600:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EB618; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[17].w[0] + 1604u));  if (t) { goto L_001EB61C; } }
L_001EB618:
    c.f[1] = ld32((c.r[17].w[0] + 1600u));
    c.budget -= 1;
L_001EB61C:
    c.f[0] = ld32((c.r[16].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001EB638; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EB640; } }
    c.budget -= 1;
L_001EB638:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001EB640:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001EB660:
    set32(c.r[8], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[7], 0u + 2u);
    set32(c.r[2], ld32((c.r[6].w[0] + 20u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 76u)));
    c.budget -= 6;
    { const bool t = c.r[8].d[0] != c.r[7].d[0]; set32(c.r[3], ld32((c.r[5].w[0] + 20u)));  if (t) { goto L_001EB6D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EB748; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8657u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 274u)));
    c.r[7].d[0] = c.r[4].d[0] & c.r[9].d[0];
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001EB6B0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 274u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[9].d[0];
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001EB6B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001EB8C0; } }
    c.budget -= 1;
L_001EB6B0:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_001EB748; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 274u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[9].d[0];
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001EB748; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001EB8C0; } }
L_001EB6D0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[1].d[0] = c.r[7].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EB748; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.r[1].d[0] = c.r[7].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EB748; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EB748; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8657u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 274u)));
    c.r[7].d[0] = c.r[4].d[0] & c.r[9].d[0];
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001EB728; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 274u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[9].d[0];
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001EB728; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001EB8C0; } }
    c.budget -= 1;
L_001EB728:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_001EB748; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 274u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[9].d[0];
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001EB748; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001EB8C0; } }
L_001EB748:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EB790; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 56u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], ld32((c.r[5].w[0] + 56u)));
    set32(c.r[4], c.r[4].w[0] + 18320u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 2u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001EB788; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001EB8C0; } }
L_001EB788:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;  if (t) { goto L_001EB8C0; } }
L_001EB790:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[4].d[0];  if (t) { goto L_001EB7C0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 503u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 503u)));
    set32(c.r[6], c.r[6].w[0] + 18368u);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = ld8((c.r[5].w[0]));  if (t) { goto L_001EB7E0; } }
L_001EB7C0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 503u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 503u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[6], c.r[6].w[0] + 18352u);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.r[6].d[0] = ld8((c.r[5].w[0]));
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 8;
L_001EB7E0:
    c.r[5].d[0] = c.r[4].d[0] & 255ull;
    c.r[4].d[0] = c.r[6].d[0] & 255ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EB800; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001EB8C0; } }
    c.budget -= 1;
L_001EB800:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_001EB8B8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[1].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EB8B0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.r[1].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EB8B0; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 822u)));
    c.r[5].d[0] = c.r[4].d[0] & 16384ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001EB850; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 822u)));
    c.r[4].d[0] = c.r[4].d[0] & 16384ull;
    c.budget -= 2;
L_001EB840:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001EB850; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001EB8C0; } }
L_001EB850:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001EB870; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 822u)));
    c.r[4].d[0] = c.r[4].d[0] & 16384ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001EB870; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001EB8C0; } }
L_001EB870:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001EB890; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EB890; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001EB8C0; } }
L_001EB890:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001EB8B0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EB8B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001EB8C0; } }
    c.budget -= 1;
L_001EB8B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001EB8C0; } }
L_001EB8B8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001EB8C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EB8D0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001EB980; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8693u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EB950; } }
    c.r[5].d[0] = ld8((c.r[19].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 755u));
    set32(c.r[3], c.r[3].w[0] + 22128u);
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001EB9D0; } }
L_001EB950:
    c.r[5].d[0] = ld8((c.r[19].w[0] + 8658u));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 755u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] - 112u);
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001EB9D0; } }
    c.budget -= 1;
L_001EB980:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EB9D0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8693u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EB9B8; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], c.r[2].w[0] + 28736u);
    set32(c.r[3], c.r[3].w[0] - 64u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001EB9D0; } }
L_001EB9B8:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 6496u);
    set32(c.r[3], c.r[3].w[0] - 64u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_001EB9D0:
    set32(c.r[20], ld32((c.r[19].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[4], c.r[19].w[0] + 2048u);  if (t) { goto L_001EBB48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB9E4u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001EB9E4u) [[unlikely]] return; }
L_001EB9E4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 224u);  if (t) { goto L_001EBA00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB9F4u); set32(c.r[5], c.r[19].w[0] + 2096u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001EB9F4u) [[unlikely]] return; }
L_001EB9F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBA18; } }
    c.budget -= 1;
L_001EBA00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 19232u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBA18u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001EBA18u) [[unlikely]] return; }
L_001EBA18:
    set32(c.r[18], c.r[29].w[0] + 212u);
    c.f[0] = ld32((c.r[19].w[0] + 2096u));
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[20].w[0] + 64u);
    set32(c.r[6], c.r[29].w[0] + 224u);
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 2100u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 2104u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBA44u); st32((c.r[29].w[0] + 216u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001EBA44u) [[unlikely]] return; }
L_001EBA44:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[20].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBA54u); set32(c.r[6], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001EBA54u) [[unlikely]] return; }
L_001EBA54:
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    c.f[1] = ld32((c.r[29].w[0] + 184u));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBA68u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001EBA68u) [[unlikely]] return; }
L_001EBA68:
    c.f[20] = c.f[0];
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    c.f[1] = ld32((c.r[29].w[0] + 200u));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBA80u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001EBA80u) [[unlikely]] return; }
L_001EBA80:
    c.f[12] = ld32((c.r[29].w[0] + 196u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBA8Cu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001EBA8Cu) [[unlikely]] return; }
L_001EBA8C:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.f[0] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBAA0u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x001EBAA0u) [[unlikely]] return; }
L_001EBAA0:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.r[2].w[0] - 432u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], c.f[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_001EBB08; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EBB48; } }
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[1] = ld32((c.r[20].w[0] + 68u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBAF4u); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x001EBAF4u) [[unlikely]] return; }
L_001EBAF4:
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EBB48; } }
    c.budget -= 1;
L_001EBB08:
    set32(c.r[4], c.r[20].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBB14u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001EBB14u) [[unlikely]] return; }
L_001EBB14:
    c.f[1] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EBB48; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 1488u)));
    set32(c.r[4], c.r[19].w[0] + 1344u);
    set32(c.r[5], c.r[19].w[0] + 1296u);
    st32((c.r[19].w[0] + 1504u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 504u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBB40u); st32((c.r[19].w[0] + 1516u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001EBB40u) [[unlikely]] return; }
L_001EBB40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001EBEE0; } }
L_001EBB48:
    st32((c.r[19].w[0] + 1504u), 0u);
    st32((c.r[19].w[0] + 1516u), 0u);
    set32(c.r[4], c.r[19].w[0] + 2048u);
    c.f[20] = ld32((c.r[17].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBB60u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001EBB60u) [[unlikely]] return; }
L_001EBB60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 19232u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBB78u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001EBB78u) [[unlikely]] return; }
L_001EBB78:
    c.r[7].d[0] = ld8((c.r[19].w[0] + 8658u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[8], c.r[16].w[0] << 3);
    set32(c.r[3], ld32((c.r[28].w[0] - 23836u)));
    set32(c.r[5], c.r[5].w[0] - 3520u);
    set32(c.r[2], c.r[28].w[0] - 23808u);
    set32(c.r[4], ld32((c.r[19].w[0] + 84u)));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 3);
    c.r[7].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[22], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = ld16((c.r[22].w[0]));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[1].d[0] == 0ull; c.r[23].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001EBEB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[3], c.r[7].w[0] << 10);
    set32(c.r[2], c.r[2].w[0] + 24928u);
    set32(c.r[30], c.r[5].w[0] + 4u);
    set32(c.r[21], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_001EBBE8:
    set32(c.r[20], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001EBE98; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001EBE98; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EBE98; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[2], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001EBE98; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[5].d[0];  if (t) { goto L_001EBE98; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 515u));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 515u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 255u);  if (t) { goto L_001EBE98; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[1].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_001EBE98; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EBC58; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EBE98; } }
    c.budget -= 1;
L_001EBC58:
    set32(c.r[2], ld32((c.r[20].w[0] + 56u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EBE98; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001EBC88; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EBE98; } }
    c.budget -= 1;
L_001EBC88:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBC94u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 145u, depth + 1u); else { c.pc = 0x001EB3E0u; return; } if (c.pc != 0x001EBC94u) [[unlikely]] return; }
L_001EBC94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 192u);  if (t) { goto L_001EBE98; } }
    set32(c.r[5], c.r[20].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBCA8u); set32(c.r[6], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001EBCA8u) [[unlikely]] return; }
L_001EBCA8:
    set32(c.r[2], c.r[29].w[0] + 200u);
    c.f[13] = ld32((c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBCB8u); c.f[12] = ld32((c.r[29].w[0] + 192u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001EBCB8u) [[unlikely]] return; }
L_001EBCB8:
    set32(c.r[2], c.r[2].w[0] - c.r[23].w[0]);
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001EBCF0; } }
    set32(c.r[2], c.r[3].w[0] - 32768u);
    set32(c.r[2], c.r[2].w[0] - 32768u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBCE4u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x001EBCE4u) [[unlikely]] return; }
L_001EBCE4:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 3;
L_001EBCF0:
    set32(c.r[2], ld32((c.r[30].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001EBE98; } }
    c.f[0] = ld32((c.r[19].w[0] + 2096u));
    set32(c.r[2], c.r[29].w[0] + 212u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[20].w[0] + 64u);
    set32(c.r[6], c.r[29].w[0] + 208u);
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 2100u));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 2104u));
    set32(c.r[2], c.r[29].w[0] + 216u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBD30u); st32((c.r[2].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001EBD30u) [[unlikely]] return; }
L_001EBD30:
    set32(c.r[2], c.r[29].w[0] + 184u);
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    c.f[1] = ld32((c.r[2].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBD48u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001EBD48u) [[unlikely]] return; }
L_001EBD48:
    c.f[21] = c.f[0];
    set32(c.r[2], c.r[29].w[0] + 200u);
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    c.f[1] = ld32((c.r[2].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBD64u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001EBD64u) [[unlikely]] return; }
L_001EBD64:
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBD74u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001EBD74u) [[unlikely]] return; }
L_001EBD74:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.f[0] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBD88u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x001EBD88u) [[unlikely]] return; }
L_001EBD88:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.r[2].w[0] - 432u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], c.f[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_001EBDF8; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EBE98; } }
    set32(c.r[2], c.r[29].w[0] + 212u);
    c.f[1] = ld32((c.r[20].w[0] + 68u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBDE0u); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x001EBDE0u) [[unlikely]] return; }
L_001EBDE0:
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EBE80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBE98; } }
L_001EBDF8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001EBE80; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_001EBE80; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 503u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 503u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EBE98; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EBE80; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EBE80; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EBE80; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EBE68; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EBE98; } }
    c.budget -= 1;
L_001EBE68:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EBE80; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EBE98; } }
L_001EBE80:
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EBE98; } }
    c.f[20] = c.f[21];
    c.r[18].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
L_001EBE98:
    c.r[2].d[0] = ld16((c.r[22].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EBBE8u | kUnwind; return; } goto L_001EBBE8; } }
    c.budget -= 1;
L_001EBEB0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001EBED8; } }
    st32((c.r[19].w[0] + 1516u), c.r[18].w[0]);
    set32(c.r[4], c.r[19].w[0] + 1344u);
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[5], c.r[18].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBED0u); st32((c.r[19].w[0] + 1504u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001EBED0u) [[unlikely]] return; }
L_001EBED0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001EBEE0; } }
L_001EBED8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001EBEE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_001EBF20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001EBF4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBF44u);  if (depth < kMaxDepth) unit_005A(c, 260u, depth + 1u); else { c.pc = 0x0026A9B0u; return; } if (c.pc != 0x001EBF44u) [[unlikely]] return; }
L_001EBF44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBF58; } }
L_001EBF4C:
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBF58u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_003A(c, 152u, depth + 1u); else { c.pc = 0x001EB8D0u; return; } if (c.pc != 0x001EBF58u) [[unlikely]] return; }
L_001EBF58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EBF88; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1516u)));
    set32(c.r[4], c.r[16].w[0] + 1296u);
    set32(c.r[5], c.r[16].w[0] + 1344u);
    st32((c.r[16].w[0] + 504u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1504u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBF7Cu); st32((c.r[16].w[0] + 1488u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001EBF7Cu) [[unlikely]] return; }
L_001EBF7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EBF90; } }
    c.budget -= 1;
L_001EBF88:
    st32((c.r[16].w[0] + 1488u), 0u);
    st32((c.r[16].w[0] + 504u), 0u);
    c.budget -= 2;
L_001EBF90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001EBFA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1488u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001EBFD0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EBFE0; } }
    c.budget -= 1;
L_001EBFD0:
    st32((c.r[16].w[0] + 1260u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_003B(c, 5u, depth); } }
    c.budget -= 1;
L_001EBFE0:
    set32(c.r[2], ld32((c.r[16].w[0] + 504u)));
    set32(c.r[4], c.r[16].w[0] + 1296u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBFF0u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001EBFF0u) [[unlikely]] return; }
L_001EBFF0:
    c.f[3] = ld32((c.r[16].w[0] + 1296u));
    c.f[2] = ld32((c.r[16].w[0] + 2096u));
    c.f[1] = ld32((c.r[16].w[0] + 1304u));
    c.f[0] = ld32((c.r[16].w[0] + 2104u));
    c.budget -= 4;
    [[clang::musttail]] return unit_003B(c, 1u, depth);
}

}
