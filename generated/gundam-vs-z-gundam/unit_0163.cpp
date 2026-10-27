#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0163[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0,
    0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0,
    0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 47, 0, 48, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0163(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0068C000;
    case 2u: goto L_0068C008;
    case 3u: goto L_0068C020;
    case 4u: goto L_0068C048;
    case 5u: goto L_0068C1B0;
    case 6u: goto L_0068C228;
    case 7u: goto L_0068C2E8;
    case 8u: goto L_0068C3B8;
    case 9u: goto L_0068C3D0;
    case 10u: goto L_0068C4C0;
    case 11u: goto L_0068C4E8;
    case 12u: goto L_0068C5B8;
    case 13u: goto L_0068C6C0;
    case 14u: goto L_0068C880;
    case 15u: goto L_0068C898;
    case 16u: goto L_0068C9B0;
    case 17u: goto L_0068CAB8;
    case 18u: goto L_0068CAD0;
    case 19u: goto L_0068CAF8;
    case 20u: goto L_0068CBE0;
    case 21u: goto L_0068CCC8;
    case 22u: goto L_0068CCCC;
    case 23u: goto L_0068CCE0;
    case 24u: goto L_0068CDB0;
    case 25u: goto L_0068CEB8;
    case 26u: goto L_0068CED0;
    case 27u: goto L_0068CFD0;
    case 28u: goto L_0068D0D8;
    case 29u: goto L_0068D0F0;
    case 30u: goto L_0068D118;
    case 31u: goto L_0068D210;
    case 32u: goto L_0068D2F8;
    case 33u: goto L_0068D310;
    case 34u: goto L_0068D3E0;
    case 35u: goto L_0068D4D8;
    case 36u: goto L_0068D4F0;
    case 37u: goto L_0068D5E8;
    case 38u: goto L_0068D600;
    case 39u: goto L_0068D6F8;
    case 40u: goto L_0068D710;
    case 41u: goto L_0068D738;
    case 42u: goto L_0068D910;
    case 43u: goto L_0068DBC8;
    case 44u: goto L_0068DBE0;
    case 45u: goto L_0068DCE8;
    case 46u: goto L_0068DD00;
    case 47u: goto L_0068DE08;
    case 48u: goto L_0068DE10;
    case 49u: goto L_0068DE18;
    case 50u: goto L_0068DE20;
    case 51u: goto L_0068DE54;
    case 52u: goto L_0068E190;
    case 53u: goto L_0068E194;
    case 54u: goto L_0068E198;
    case 55u: goto L_0068E19C;
    case 56u: goto L_0068E1A0;
    case 57u: goto L_0068E1A4;
    case 58u: goto L_0068E1A8;
    case 59u: goto L_0068E1AC;
    case 60u: goto L_0068E1B0;
    case 61u: goto L_0068E1B4;
    case 62u: goto L_0068E1B8;
    case 63u: goto L_0068E1BC;
    case 64u: goto L_0068E1C0;
    case 65u: goto L_0068E1C4;
    case 66u: goto L_0068E1C8;
    case 67u: goto L_0068E1CC;
    case 68u: goto L_0068E1D0;
    case 69u: goto L_0068E1D4;
    case 70u: goto L_0068E1D8;
    case 71u: goto L_0068E1DC;
    case 72u: goto L_0068E1E0;
    case 73u: goto L_0068E1E4;
    case 74u: goto L_0068E1E8;
    case 75u: goto L_0068E210;
    case 76u: goto L_0068E240;
    case 77u: goto L_0068E270;
    case 78u: goto L_0068E2A0;
    case 79u: goto L_0068E2D0;
    case 80u: goto L_0068E300;
    case 81u: goto L_0068E330;
    case 82u: goto L_0068E360;
    case 83u: goto L_0068E390;
    case 84u: goto L_0068E3C0;
    case 85u: goto L_0068E3F0;
    case 86u: goto L_0068E420;
    case 87u: goto L_0068E450;
    case 88u: goto L_0068E480;
    case 89u: goto L_0068E4B0;
    case 90u: goto L_0068E4E0;
    case 91u: goto L_0068E510;
    case 92u: goto L_0068E540;
    case 93u: goto L_0068E570;
    case 94u: goto L_0068E5A0;
    case 95u: goto L_0068E5D0;
    case 96u: goto L_0068E600;
    case 97u: goto L_0068E630;
    case 98u: goto L_0068E660;
    case 99u: goto L_0068E690;
    case 100u: goto L_0068E6C0;
    case 101u: goto L_0068E6F0;
    case 102u: goto L_0068E720;
    case 103u: goto L_0068E750;
    case 104u: goto L_0068E780;
    case 105u: goto L_0068E7B0;
    case 106u: goto L_0068E7E0;
    case 107u: goto L_0068E810;
    case 108u: goto L_0068E840;
    case 109u: goto L_0068E870;
    case 110u: goto L_0068E8A0;
    case 111u: goto L_0068E8D0;
    case 112u: goto L_0068E900;
    case 113u: goto L_0068E930;
    case 114u: goto L_0068E960;
    case 115u: goto L_0068E990;
    case 116u: goto L_0068E9C0;
    case 117u: goto L_0068E9F0;
    case 118u: goto L_0068EA20;
    case 119u: goto L_0068EA50;
    case 120u: goto L_0068EA80;
    case 121u: goto L_0068EAB0;
    case 122u: goto L_0068EAE0;
    case 123u: goto L_0068EB10;
    case 124u: goto L_0068EB40;
    case 125u: goto L_0068EB70;
    case 126u: goto L_0068EBA0;
    case 127u: goto L_0068EBD0;
    case 128u: goto L_0068EC00;
    case 129u: goto L_0068EC30;
    case 130u: goto L_0068EC60;
    case 131u: goto L_0068EC90;
    case 132u: goto L_0068ECC0;
    case 133u: goto L_0068ECF0;
    case 134u: goto L_0068ED20;
    case 135u: goto L_0068ED50;
    case 136u: goto L_0068ED80;
    case 137u: goto L_0068EDB0;
    case 138u: goto L_0068EDE0;
    case 139u: goto L_0068EE10;
    case 140u: goto L_0068EE40;
    case 141u: goto L_0068EE70;
    case 142u: goto L_0068EEA0;
    case 143u: goto L_0068EED0;
    case 144u: goto L_0068EF00;
    case 145u: goto L_0068EF30;
    case 146u: goto L_0068EF60;
    case 147u: goto L_0068EF90;
    case 148u: goto L_0068EFC0;
    case 149u: goto L_0068EFF0;
    case 150u: goto L_0068F020;
    case 151u: goto L_0068F050;
    case 152u: goto L_0068F080;
    case 153u: goto L_0068F0B0;
    case 154u: goto L_0068F0E0;
    case 155u: goto L_0068F110;
    case 156u: goto L_0068F140;
    case 157u: goto L_0068F170;
    case 158u: goto L_0068F1A0;
    case 159u: goto L_0068F1D0;
    case 160u: goto L_0068F200;
    case 161u: goto L_0068F230;
    case 162u: goto L_0068F260;
    case 163u: goto L_0068F290;
    case 164u: goto L_0068F2C0;
    case 165u: goto L_0068F2F0;
    case 166u: goto L_0068F320;
    case 167u: goto L_0068F350;
    case 168u: goto L_0068F380;
    case 169u: goto L_0068F3B0;
    case 170u: goto L_0068F3E0;
    case 171u: goto L_0068F410;
    case 172u: goto L_0068F440;
    case 173u: goto L_0068F470;
    case 174u: goto L_0068F4A0;
    case 175u: goto L_0068F4D0;
    case 176u: goto L_0068F500;
    case 177u: goto L_0068F530;
    case 178u: goto L_0068F560;
    case 179u: goto L_0068F590;
    case 180u: goto L_0068F5C0;
    case 181u: goto L_0068F5F0;
    case 182u: goto L_0068F620;
    case 183u: goto L_0068F650;
    case 184u: goto L_0068F680;
    case 185u: goto L_0068F6B0;
    case 186u: goto L_0068F6E0;
    case 187u: goto L_0068F710;
    case 188u: goto L_0068F740;
    case 189u: goto L_0068F770;
    case 190u: goto L_0068F7A0;
    case 191u: goto L_0068F7D0;
    case 192u: goto L_0068F800;
    case 193u: goto L_0068F824;
    case 194u: goto L_0068F830;
    case 195u: goto L_0068F860;
    case 196u: goto L_0068F890;
    case 197u: goto L_0068F8C0;
    case 198u: goto L_0068F8F0;
    case 199u: goto L_0068F920;
    case 200u: goto L_0068F950;
    case 201u: goto L_0068F980;
    case 202u: goto L_0068F9B0;
    case 203u: goto L_0068F9E0;
    case 204u: goto L_0068FA10;
    case 205u: goto L_0068FA40;
    case 206u: goto L_0068FA70;
    case 207u: goto L_0068FAA0;
    case 208u: goto L_0068FAD0;
    case 209u: goto L_0068FB00;
    case 210u: goto L_0068FB30;
    case 211u: goto L_0068FB60;
    case 212u: goto L_0068FB90;
    case 213u: goto L_0068FBC0;
    case 214u: goto L_0068FBF0;
    case 215u: goto L_0068FC20;
    case 216u: goto L_0068FC50;
    case 217u: goto L_0068FC80;
    case 218u: goto L_0068FCB0;
    case 219u: goto L_0068FCE0;
    case 220u: goto L_0068FD10;
    case 221u: goto L_0068FD40;
    case 222u: goto L_0068FD70;
    case 223u: goto L_0068FDA0;
    case 224u: goto L_0068FDD0;
    case 225u: goto L_0068FE00;
    case 226u: goto L_0068FE30;
    case 227u: goto L_0068FE60;
    case 228u: goto L_0068FE90;
    case 229u: goto L_0068FEC0;
    case 230u: goto L_0068FEF0;
    case 231u: goto L_0068FF20;
    case 232u: goto L_0068FF50;
    case 233u: goto L_0068FF80;
    case 234u: goto L_0068FF90;
    case 235u: goto L_0068FFB0;
    case 236u: goto L_0068FFD8;
    case 237u: goto L_0068FFE0;
    default: bad_entry(c, 0x0068C000u); return;
    }
L_0068C000:
    c.budget -= 2;
L_0068C008:
    if (c.r[3].d[0] == c.r[13].d[0]) trap(c, 0x0068C008u);
    c.r[14].d[0] = c.r[13].d[0] << 51;
    set32(c.r[23], c.r[8].w[0] << 28);
    c.r[14].d[0] = c.r[13].d[0] << 19;
    if (c.r[3].sd[0] >= c.r[8].sd[0]) trap(c, 0x0068C018u);
    set32(c.r[16], c.r[13].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 6;
L_0068C020:
    c.r[23].d[0] = c.r[8].d[0] << 15;
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[23].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068C048:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068C1B0:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068C228:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068C2E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; stop(c, 0x0068C2ECu, "unsupported delay slot"); return; c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068C3B8:
    c.r[14].d[0] = c.r[13].d[0] << (c.r[3].w[0] & 63u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[13].w[0]);
    c.r[14].d[0] = c.lo.d[0];
    c.r[14].d[0] = c.hi.d[0];
    set32(c.r[24], c.r[8].w[0] << 12);
    set32(c.r[24], c.r[3].w[0] + c.r[8].w[0]);
    c.budget -= 6;
L_0068C3D0:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068C4C0:
    mmi::mult(c, 0, c.r[3].w[0], c.r[8].w[0]);
    c.r[24].d[0] = c.lo.d[0];
    c.r[24].d[0] = c.sa;
    c.r[24].d[0] = c.sa;
    c.r[24].d[0] = c.r[8].d[0] << 14;
    c.budget -= 10;
L_0068C4E8:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068C5B8:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068C6C0:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068C880:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0068CC80; } }
    set32(c.r[4], 0u << 20);
    c.budget -= 3;
    { const bool t = c.r[8].sd[0] > 0;  if (t) { goto L_0068C90C; } }
    c.budget -= 1;
L_0068C898:
    if (c.r[3].sd[0] >= c.r[13].sd[0]) trap(c, 0x0068C898u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; set32(c.r[24], c.r[8].w[0] << 27);  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068C90C:
    c.sa = 0u & 15u;
    if (0ull == 0ull) trap(c, 0x0068C91Cu);
    c.budget -= 8;
    {  c.pc = 0x04040000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068C9B0:
    c.budget -= 2;
    { mmi::divu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068CAB8:
    set32(c.r[14], c.r[13].w[0] << 21);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; if (c.r[3].sd[0] >= c.r[8].sd[0]) trap(c, 0x0068CAC0u);  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068CAD0:
    c.r[24].d[0] = c.sa;
    c.r[25].d[0] = c.r[8].d[0] << 10;
    mmi::mult(c, 0, c.r[3].w[0], c.r[8].w[0]);
    c.r[25].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[8].w[0]);
    c.r[25].d[0] = c.lo.d[0];
    c.budget -= 10;
L_0068CAF8:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068CBE0:
    c.budget -= 2;
    { if (0ull >= 0ull) trap(c, 0x0068CBE4u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068CC80:
    breakpoint(c, 0x0068CC80u);
    if (0ull == 0ull) trap(c, 0x0068CC84u);
    c.budget -= 5;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068CCC8:
    c.pc = 0x0068CCCCu; syscall(c, 0x0068CCC8u); if (c.pc != 0x0068CCCCu) return;
    c.budget -= 1;
L_0068CCCC:
    c.r[14].d[0] = c.hi.d[0];
    c.r[25].d[0] = c.r[8].d[0] << 11;
    set32(c.r[25], c.r[3].w[0] + c.r[8].w[0]);
    if (c.r[3].sd[0] >= c.r[8].sd[0]) trap(c, 0x0068CCD8u);
    c.budget -= 4;
    c.pc = 0x0068CCE0u; syscall(c, 0x0068CCDCu); if (c.pc != 0x0068CCE0u) return;
    c.budget -= 1;
L_0068CCE0:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068CDB0:
    c.budget -= 2;
    { if (0ull >= 0ull) trap(c, 0x0068CDB4u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068CEB8:
    c.r[14].d[0] = c.r[13].d[0] << (c.r[3].w[0] & 63u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[13].w[0]);
    c.r[14].d[0] = c.lo.d[0];
    set32(c.r[25], c.r[3].w[0] + c.r[8].w[0]);
    if (c.r[3].sd[0] >= c.r[8].sd[0]) trap(c, 0x0068CEC4u);
    set32(c.r[25], c.r[3].w[0] + c.r[8].w[0]);
    c.budget -= 5;
    c.pc = 0x0068CED0u; syscall(c, 0x0068CECCu); if (c.pc != 0x0068CED0u) return;
    c.budget -= 1;
L_0068CED0:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068CFD0:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068D0D8:
    c.r[14].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[13].sd[0]) trap(c, 0x0068D0DCu);
    c.r[25].d[0] = c.hi.d[0];
    c.r[14].d[0] = c.r[3].d[0] + c.r[13].d[0];
    set32(c.r[26], c.r[8].w[0] << 3);
    c.budget -= 5;
    c.pc = 0x0068D0F0u; syscall(c, 0x0068D0ECu); if (c.pc != 0x0068D0F0u) return;
    c.budget -= 1;
L_0068D0F0:
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; mmi::mult(c, 0, c.r[3].w[0], c.r[8].w[0]); c.r[26].d[0] = c.lo.d[0];  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068D118:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068D210:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068D2F8:
    if (c.r[3].d[0] == c.r[13].d[0]) trap(c, 0x0068D2F8u);
    c.r[14].d[0] = c.r[13].d[0] << 21;
    mmi::mult(c, 0, c.r[3].w[0], c.r[8].w[0]);
    c.r[26].d[0] = c.lo.d[0];
    c.r[26].d[0] = c.hi.d[0];
    set32(c.r[26], c.r[3].w[0] + c.r[8].w[0]);
    c.budget -= 6;
L_0068D310:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068D3E0:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068D4D8:
    c.r[14].d[0] = c.r[13].d[0] << 53;
    set32(c.r[14], c.r[13].w[0] << 22);
    c.r[26].d[0] = c.hi.d[0];
    set32(c.r[26], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[26], c.r[8].w[0] << 19);
    c.budget -= 6;
L_0068D4F0:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068D5E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; stop(c, 0x0068D5ECu, "unsupported delay slot"); return; c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068D600:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068D6F8:
    c.r[14].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[13].w[0]);
    c.r[14].d[0] = c.lo.d[0];
    set32(c.r[26], c.r[8].w[0] << 24);
    c.r[14].d[0] = c.r[13].d[0] << (c.r[3].w[0] & 63u);
    set32(c.r[26], c.r[3].w[0] + c.r[8].w[0]);
    c.budget -= 6;
L_0068D710:
    c.r[26].d[0] = c.r[8].d[0] << 11;
    c.r[26].d[0] = c.r[8].d[0] << 27;
    mmi::mult(c, 0, c.r[3].w[0], c.r[8].w[0]);
    c.r[26].d[0] = c.lo.d[0];
    c.r[26].d[0] = c.sa;
    c.budget -= 10;
L_0068D738:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068D910:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068DBC8:
    if (c.r[3].sd[0] >= c.r[13].sd[0]) trap(c, 0x0068DBC8u);
    c.r[27].d[0] = c.r[8].d[0] << 12;
    c.r[14].d[0] = c.r[3].d[0] + c.r[13].d[0];
    set32(c.r[27], c.r[8].w[0] << 11);
    if (c.r[3].sd[0] >= c.r[8].sd[0]) trap(c, 0x0068DBD8u);
    c.r[16].d[0] = c.hi.d[0];
    c.budget -= 6;
L_0068DBE0:
    c.budget -= 2;
    { if (0ll >= 0ll) trap(c, 0x0068DBE4u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068DCE8:
    mmi::mult(c, 0, c.r[3].w[0], c.r[8].w[0]);
    c.r[27].d[0] = c.lo.d[0];
    c.r[14].d[0] = c.r[13].d[0] << 22;
    set32(c.r[27], c.r[3].w[0] + c.r[8].w[0]);
    if (c.r[3].d[0] == c.r[13].d[0]) trap(c, 0x0068DCF4u);
    c.r[27].d[0] = c.hi.d[0];
    c.r[16].d[0] = c.hi.d[0];
    c.budget -= 6;
L_0068DD00:
    c.r[27].d[0] = c.r[8].d[0] << 3;
    c.r[27].d[0] = c.sa;
    c.r[27].d[0] = c.sa;
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068DE08:
    set32(c.r[2], c.r[25].w[0] + 8480u);
    c.budget -= 2;
L_0068DE10:
    c.r[23].d[0] = c.r[1].d[0] ^ 13875ull;
    st64((c.r[25].w[0] + 14905u), c.r[27].d[0]);
    c.budget -= 2;
L_0068DE18:
    c.r[28].sd[0] = static_cast<std::int32_t>(0x35340000u);
    c.r[7].d[0] = c.r[31].d[0] >> 60;
    c.budget -= 2;
L_0068DE20:
    set32(c.r[27], c.r[8].w[0] << 24);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[27].d[0] = c.hi.d[0];  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068DE54:
    c.budget -= 2;
    { c.r[1].d[0] = static_cast<std::uint64_t>(c.r[31].sd[0] >> 39);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001C1814u | kUnwind; return; } [[clang::musttail]] return unit_0030(c, 473u, depth); }
L_0068E190:
    if (c.r[2].sd[0] >= 0ll) trap(c, 0x0068E190u);
    c.budget -= 1;
L_0068E194:
    set32(c.r[27], c.r[2].w[0] + 0u);
    c.budget -= 1;
L_0068E198:
    c.r[19].d[0] = c.hi.d[0];
    c.budget -= 1;
L_0068E19C:
    set32(c.r[19], c.r[2].w[0] + 0u);
    c.budget -= 1;
L_0068E1A0:
    c.r[28].d[0] = c.hi.d[0];
    c.budget -= 1;
L_0068E1A4:
    set32(c.r[28], c.r[2].w[0] + 0u);
    c.budget -= 1;
L_0068E1A8:
    c.r[19].d[0] = c.hi.d[0];
    c.budget -= 1;
L_0068E1AC:
    set32(c.r[19], c.r[2].w[0] + 0u);
    c.budget -= 1;
L_0068E1B0:
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.budget -= 1;
L_0068E1B4:
    c.r[7].d[0] = c.sa;
    c.budget -= 1;
L_0068E1B8:
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E1B8u);
    c.budget -= 1;
L_0068E1BC:
    c.r[7].d[0] = c.hi.d[0];
    c.budget -= 1;
L_0068E1C0:
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E1C0u);
    c.budget -= 1;
L_0068E1C4:
    c.r[7].d[0] = c.sa;
    c.budget -= 1;
L_0068E1C8:
    c.r[7].d[0] = c.hi.d[0];
    c.budget -= 1;
L_0068E1CC:
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E1CCu);
    c.budget -= 1;
L_0068E1D0:
    c.r[7].d[0] = c.hi.d[0];
    c.budget -= 1;
L_0068E1D4:
    c.r[7].d[0] = c.sa;
    c.budget -= 1;
L_0068E1D8:
    c.budget -= 1;
L_0068E1DC:
    c.budget -= 1;
L_0068E1E0:
    c.r[7].d[0] = c.r[12].d[0] << 8;
    c.budget -= 1;
L_0068E1E4:
    c.r[7].d[0] = c.sa;
    c.budget -= 1;
L_0068E1E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; set32(c.r[7], c.r[3].w[0] + c.r[12].w[0]);  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068E210:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068E240:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068E270:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068E2A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068E2D0:
    c.r[7].d[0] = c.r[12].d[0] << 18;
    c.r[7].d[0] = c.sa;
    c.r[7].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E2DCu);
    c.r[7].d[0] = c.sa;
    c.r[7].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E2E8u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068E300:
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E308u);
    c.r[7].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E310u);
    c.r[7].d[0] = c.sa;
    c.r[7].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E31Cu);
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068E330:
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E338u);
    c.r[7].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E340u);
    c.r[7].d[0] = c.sa;
    set32(c.r[7], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[7], c.r[12].w[0] << 25);
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.sa;
    c.budget -= 12;
L_0068E360:
    c.r[7].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    set32(c.r[7], c.r[12].w[0] << 26);
    set32(c.r[7], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.r[12].d[0] << 26;
    c.r[7].d[0] = c.sa;
    c.r[7].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E37Cu);
    c.r[7].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E384u);
    c.budget -= 12;
L_0068E390:
    c.r[7].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    set32(c.r[7], c.r[12].w[0] << 26);
    c.r[7].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    set32(c.r[7], c.r[12].w[0] << 30);
    set32(c.r[7], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[7], c.r[12].w[0] << 31);
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.budget -= 12;
L_0068E3C0:
    set32(c.r[7], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    set32(c.r[8], c.r[12].w[0] << 0);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[8], c.r[12].w[0] << 1);
    c.r[7].d[0] = c.sa;
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[8], c.r[12].w[0] << 2);
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.sa;
    c.budget -= 12;
L_0068E3F0:
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E3F8u);
    set32(c.r[8], c.r[12].w[0] << 3);
    c.r[7].d[0] = c.sa;
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[8], c.r[12].w[0] << 4);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    c.budget -= 12;
L_0068E420:
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E428u);
    set32(c.r[8], c.r[12].w[0] << 3);
    c.r[7].d[0] = c.sa;
    set32(c.r[8], c.r[12].w[0] << 5);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[8].d[0] = c.r[12].d[0] << 5;
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068E450:
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E458u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068E480:
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E488u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068E4B0:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    set32(c.r[8], c.r[12].w[0] << 13);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[8], c.r[12].w[0] << 14);
    c.r[7].d[0] = c.sa;
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[8], c.r[12].w[0] << 15);
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.budget -= 12;
L_0068E4E0:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    set32(c.r[8], c.r[12].w[0] << 13);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[8], c.r[12].w[0] << 14);
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E4FCu);
    c.r[8].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E504u);
    c.budget -= 12;
L_0068E510:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    set32(c.r[8], c.r[12].w[0] << 13);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[8], c.r[12].w[0] << 14);
    c.r[7].d[0] = c.sa;
    c.r[8].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E530u);
    c.r[8].d[0] = c.hi.d[0];
    c.budget -= 12;
L_0068E540:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    set32(c.r[8], c.r[12].w[0] << 13);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[8], c.r[12].w[0] << 14);
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E55Cu);
    c.r[8].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E564u);
    c.budget -= 12;
L_0068E570:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.r[8].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E580u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068E5A0:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E5ACu);
    c.r[8].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E5B4u);
    c.r[7].d[0] = c.sa;
    c.r[8].d[0] = c.hi.d[0];
    c.r[8].d[0] = c.sa;
    c.r[8].d[0] = c.r[12].d[0] << 24;
    c.budget -= 12;
L_0068E5D0:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]); c.r[8].d[0] = c.lo.d[0];  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068E600:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]); c.r[8].d[0] = c.lo.d[0];  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068E630:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[8].d[0] = c.r[12].d[0] << 29;
    set32(c.r[8], c.r[12].w[0] << 30);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[8], c.r[12].w[0] << 31);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[9], c.r[12].w[0] << 0);
    c.budget -= 12;
L_0068E660:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E670u);
    c.r[7].d[0] = c.sa;
    c.r[9].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E67Cu);
    c.r[9].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.sa;
    c.budget -= 12;
L_0068E690:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E69Cu);
    c.r[9].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E6A8u);
    c.r[9].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E6B0u);
    c.r[9].d[0] = c.hi.d[0];
    c.budget -= 12;
L_0068E6C0:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E6CCu);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; set32(c.r[9], c.r[3].w[0] + c.r[12].w[0]);  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068E6F0:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E700u);
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E704u);
    c.r[7].d[0] = c.sa;
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; set32(c.r[9], c.r[3].w[0] + c.r[12].w[0]);  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068E720:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E730u);
    c.r[7].d[0] = c.sa;
    c.r[9].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E73Cu);
    c.r[9].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E744u);
    c.budget -= 12;
L_0068E750:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E760u);
    c.r[7].d[0] = c.sa;
    c.r[9].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E76Cu);
    c.r[9].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E774u);
    c.budget -= 12;
L_0068E780:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.r[9].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E790u);
    c.r[9].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E798u);
    c.r[9].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E7A0u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068E7B0:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    set32(c.r[9], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[9], c.r[12].w[0] << 18);
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E7CCu);
    c.r[9].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E7D4u);
    c.budget -= 12;
L_0068E7E0:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.r[9].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E7F0u);
    c.r[9].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    set32(c.r[9], c.r[12].w[0] << 21);
    set32(c.r[9], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[9], c.r[12].w[0] << 22);
    c.budget -= 12;
L_0068E810:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.r[9].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E820u);
    c.r[9].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    set32(c.r[9], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[9], c.r[12].w[0] << 23);
    set32(c.r[9], c.r[3].w[0] + c.r[12].w[0]);
    c.budget -= 12;
L_0068E840:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.r[9].d[0] = c.r[12].d[0] << 23;
    c.r[9].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E858u);
    c.r[9].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E860u);
    c.r[9].d[0] = c.hi.d[0];
    c.budget -= 12;
L_0068E870:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.r[9].d[0] = c.r[12].d[0] << 23;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E880u);
    c.r[7].d[0] = c.sa;
    c.r[9].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E88Cu);
    c.r[9].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.sa;
    c.budget -= 12;
L_0068E8A0:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.r[9].d[0] = c.r[12].d[0] << 23;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E8B0u);
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E8B8u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]); c.r[9].d[0] = c.lo.d[0];  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068E8D0:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.r[9].d[0] = c.r[12].d[0] << 23;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E8E0u);
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E8E8u);
    c.r[9].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E8F0u);
    c.r[9].d[0] = c.hi.d[0];
    c.budget -= 12;
L_0068E900:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.r[9].d[0] = c.r[12].d[0] << 23;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E910u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068E930:
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E930u);
    c.r[7].d[0] = c.sa;
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]); c.r[10].d[0] = c.lo.d[0];  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068E960:
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E960u);
    c.r[7].d[0] = c.sa;
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]); c.r[10].d[0] = c.lo.d[0];  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068E990:
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E990u);
    c.r[7].d[0] = c.sa;
    c.r[10].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E99Cu);
    c.r[10].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E9A4u);
    c.r[7].d[0] = c.sa;
    c.r[10].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E9B0u);
    c.r[7].d[0] = c.sa;
    c.budget -= 12;
L_0068E9C0:
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E9C0u);
    c.r[7].d[0] = c.sa;
    c.r[10].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E9CCu);
    c.r[10].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E9D4u);
    c.r[7].d[0] = c.sa;
    c.r[10].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E9E0u);
    c.r[10].d[0] = c.hi.d[0];
    c.budget -= 12;
L_0068E9F0:
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E9F0u);
    c.r[7].d[0] = c.sa;
    c.r[10].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068E9FCu);
    c.r[10].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068EA04u);
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068EA0Cu);
    c.r[10].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068EA14u);
    c.budget -= 12;
L_0068EA20:
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068EA20u);
    c.r[7].d[0] = c.sa;
    c.r[10].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068EA2Cu);
    c.r[10].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068EA34u);
    c.r[7].d[0] = c.sa;
    c.r[10].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068EA40u);
    c.r[10].d[0] = c.hi.d[0];
    c.budget -= 12;
L_0068EA50:
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068EA50u);
    c.r[7].d[0] = c.sa;
    c.r[10].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068EA5Cu);
    c.r[10].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068EA64u);
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068EA6Cu);
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068EA80:
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068EA88u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068EA94u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068EAB0:
    c.r[10].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    set32(c.r[10], c.r[12].w[0] << 17);
    set32(c.r[10], c.r[3].w[0] + c.r[12].w[0]);
    c.r[10].d[0] = c.r[12].d[0] << 17;
    c.r[7].d[0] = c.sa;
    c.r[10].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068EAD0u);
    c.r[10].d[0] = c.hi.d[0];
    c.budget -= 12;
L_0068EAE0:
    c.r[10].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    set32(c.r[10], c.r[12].w[0] << 17);
    set32(c.r[10], c.r[12].w[0] << 20);
    set32(c.r[10], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[10], c.r[12].w[0] << 21);
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.sa;
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068EB04u);
    c.budget -= 12;
L_0068EB10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068EB40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068EB70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068EBA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068EBD0:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068EBDCu);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]); c.r[8].d[0] = c.lo.d[0];  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068EC00:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068EC0Cu);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]); c.r[8].d[0] = c.lo.d[0];  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068EC30:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.r[11].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068EC40u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; set32(c.r[11], c.r[3].w[0] + c.r[12].w[0]);  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068EC60:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.r[11].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068EC70u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068EC90:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.r[11].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068ECA0u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068ECC0:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.r[11].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068ECD0u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; set32(c.r[11], c.r[12].w[0] << 6);  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068ECF0:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.r[11].d[0] = c.sa;
    set32(c.r[11], c.r[12].w[0] << 8);
    c.r[7].d[0] = c.sa;
    set32(c.r[11], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[11], c.r[12].w[0] << 9);
    set32(c.r[11], c.r[3].w[0] + c.r[12].w[0]);
    c.r[11].d[0] = c.r[12].d[0] << 9;
    c.budget -= 12;
L_0068ED20:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.r[11].d[0] = c.sa;
    set32(c.r[11], c.r[12].w[0] << 8);
    c.r[7].d[0] = c.sa;
    c.r[11].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068ED3Cu);
    c.r[7].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    c.budget -= 12;
L_0068ED50:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.r[11].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068ED60u);
    c.r[7].d[0] = c.sa;
    c.r[11].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068ED6Cu);
    c.r[11].d[0] = c.hi.d[0];
    c.r[11].d[0] = c.sa;
    c.budget -= 12;
L_0068ED80:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068ED8Cu);
    c.r[11].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068ED94u);
    c.r[11].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068ED9Cu);
    c.r[11].d[0] = c.hi.d[0];
    c.r[11].d[0] = c.sa;
    c.budget -= 12;
L_0068EDB0:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068EDBCu);
    c.r[11].d[0] = c.hi.d[0];
    c.r[8].d[0] = c.r[12].d[0] << 29;
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068EDCCu);
    c.r[11].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068EDD4u);
    c.budget -= 12;
L_0068EDE0:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.r[11].d[0] = c.hi.d[0];
    c.r[11].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    set32(c.r[11], c.r[12].w[0] << 20);
    set32(c.r[11], c.r[3].w[0] + c.r[12].w[0]);
    c.r[11].d[0] = c.r[12].d[0] << 20;
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.budget -= 12;
L_0068EE10:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.r[11].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068EE20u);
    c.r[8].d[0] = c.r[12].d[0] << 29;
    c.r[7].d[0] = c.sa;
    c.r[11].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068EE30u);
    c.r[7].d[0] = c.sa;
    c.budget -= 12;
L_0068EE40:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.r[11].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068EE54u);
    c.r[11].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068EE5Cu);
    c.r[11].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    c.budget -= 12;
L_0068EE70:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.r[11].d[0] = c.hi.d[0];
    c.r[11].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    set32(c.r[11], c.r[12].w[0] << 26);
    set32(c.r[11], c.r[3].w[0] + c.r[12].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068EEA0:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    set32(c.r[11], c.r[12].w[0] << 27);
    set32(c.r[11], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    set32(c.r[11], c.r[12].w[0] << 28);
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[11].d[0] = c.lo.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068EEC0u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068EED0:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.r[11].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068EEE0u);
    c.r[7].d[0] = c.sa;
    c.r[11].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068EEECu);
    c.r[11].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068EEF4u);
    c.budget -= 12;
L_0068EF00:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; set32(c.r[12], c.r[3].w[0] + c.r[12].w[0]);  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068EF30:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.r[11].d[0] = c.sa;
    set32(c.r[12], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    set32(c.r[12], c.r[12].w[0] << 3);
    set32(c.r[12], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[12], c.r[12].w[0] << 4);
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[12].d[0] = c.lo.d[0];
    c.budget -= 12;
L_0068EF60:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068EF6Cu);
    c.r[12].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068EF78u);
    c.r[12].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068EF80u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.budget -= 12;
L_0068EF90:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.r[12].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068EFA0u);
    c.r[7].d[0] = c.sa;
    c.r[12].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068EFACu);
    c.r[12].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.sa;
    c.budget -= 12;
L_0068EFC0:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.r[12].d[0] = c.sa;
    set32(c.r[12], c.r[12].w[0] << 10);
    set32(c.r[12], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    set32(c.r[12], c.r[12].w[0] << 11);
    set32(c.r[12], c.r[3].w[0] + c.r[12].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.budget -= 12;
L_0068EFF0:
    c.r[12].d[0] = c.r[12].d[0] << 11;
    c.r[7].d[0] = c.sa;
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; set32(c.r[12], c.r[3].w[0] + c.r[12].w[0]);  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068F020:
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[12].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F028u);
    c.r[12].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F030u);
    c.r[7].d[0] = c.sa;
    c.r[12].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F03Cu);
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]); c.r[12].d[0] = c.lo.d[0];  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068F050:
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[12].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F058u);
    c.r[12].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F064u);
    c.r[12].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F06Cu);
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068F080:
    c.r[12].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.sa;
    set32(c.r[12], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[12], c.r[12].w[0] << 21);
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[12].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F098u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068F0B0:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    set32(c.r[12], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[12], c.r[12].w[0] << 23);
    c.r[7].d[0] = c.sa;
    set32(c.r[12], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[12], c.r[12].w[0] << 24);
    c.r[8].d[0] = c.r[12].d[0] << 29;
    c.r[7].d[0] = c.sa;
    c.budget -= 12;
L_0068F0E0:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    set32(c.r[12], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[12], c.r[12].w[0] << 25);
    c.r[7].d[0] = c.sa;
    set32(c.r[12], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[12], c.r[12].w[0] << 26);
    set32(c.r[12], c.r[3].w[0] + c.r[12].w[0]);
    c.r[12].d[0] = c.r[12].d[0] << 26;
    c.budget -= 12;
L_0068F110:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    set32(c.r[12], c.r[3].w[0] + c.r[12].w[0]);
    c.r[12].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F128u);
    c.r[12].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F130u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068F140:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    set32(c.r[12], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[12], c.r[12].w[0] << 25);
    c.r[7].d[0] = c.sa;
    set32(c.r[12], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[12], c.r[12].w[0] << 30);
    set32(c.r[12], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[12], c.r[12].w[0] << 31);
    c.budget -= 12;
L_0068F170:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[12].d[0] = c.lo.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F180u);
    c.r[7].d[0] = c.sa;
    c.r[13].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F18Cu);
    c.r[13].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.sa;
    c.budget -= 12;
L_0068F1A0:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F1ACu);
    c.r[8].d[0] = c.r[12].d[0] << 29;
    c.r[7].d[0] = c.sa;
    c.r[13].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F1BCu);
    c.r[13].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F1C4u);
    c.budget -= 12;
L_0068F1D0:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.r[13].d[0] = c.hi.d[0];
    c.r[13].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    set32(c.r[13], c.r[12].w[0] << 5);
    set32(c.r[13], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[13], c.r[12].w[0] << 6);
    set32(c.r[13], c.r[3].w[0] + c.r[12].w[0]);
    c.budget -= 12;
L_0068F200:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    set32(c.r[13], c.r[12].w[0] << 7);
    c.r[8].d[0] = c.r[12].d[0] << 29;
    c.r[7].d[0] = c.sa;
    set32(c.r[13], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[13], c.r[12].w[0] << 8);
    set32(c.r[13], c.r[3].w[0] + c.r[12].w[0]);
    c.r[13].d[0] = c.r[12].d[0] << 8;
    c.budget -= 12;
L_0068F230:
    c.r[7].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    c.r[13].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F244u);
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F248u);
    c.r[13].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.sa;
    c.budget -= 12;
L_0068F260:
    c.r[7].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F268u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068F290:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    set32(c.r[13], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[13], c.r[12].w[0] << 14);
    c.r[7].d[0] = c.sa;
    set32(c.r[13], c.r[3].w[0] + c.r[12].w[0]);
    c.r[13].d[0] = c.r[12].d[0] << 14;
    c.r[13].d[0] = c.hi.d[0];
    c.r[11].d[0] = c.sa;
    c.budget -= 12;
L_0068F2C0:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F2CCu);
    c.r[7].d[0] = c.sa;
    c.r[13].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F2D8u);
    c.r[13].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    c.budget -= 12;
L_0068F2F0:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.r[13].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F300u);
    c.r[7].d[0] = c.sa;
    c.r[13].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F30Cu);
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068F320:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    set32(c.r[13], c.r[3].w[0] + c.r[12].w[0]);
    c.r[13].d[0] = c.r[12].d[0] << 19;
    c.r[7].d[0] = c.sa;
    c.r[13].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F33Cu);
    c.r[13].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.sa;
    c.budget -= 12;
L_0068F350:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F35Cu);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068F380:
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[13].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F388u);
    c.r[13].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F390u);
    c.r[7].d[0] = c.sa;
    c.r[13].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F39Cu);
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068F3B0:
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[13].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.sa;
    set32(c.r[13], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[13], c.r[12].w[0] << 28);
    c.r[7].d[0] = c.sa;
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[13].d[0] = c.lo.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F3C8u);
    c.r[13].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    c.budget -= 12;
L_0068F3E0:
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[13].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F3E8u);
    c.r[13].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F3F0u);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.r[13].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F400u);
    c.r[14].d[0] = c.hi.d[0];
    c.budget -= 12;
L_0068F410:
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[13].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F418u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068F440:
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F440u);
    c.r[7].d[0] = c.sa;
    c.r[14].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F44Cu);
    c.r[7].d[0] = c.sa;
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; set32(c.r[14], c.r[3].w[0] + c.r[12].w[0]);  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068F470:
    c.r[14].d[0] = c.r[12].d[0] << 6;
    c.r[7].d[0] = c.sa;
    c.r[14].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F47Cu);
    c.r[14].d[0] = c.hi.d[0];
    c.r[14].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    set32(c.r[14], c.r[12].w[0] << 9);
    set32(c.r[14], c.r[3].w[0] + c.r[12].w[0]);
    c.r[14].d[0] = c.r[12].d[0] << 9;
    c.budget -= 12;
L_0068F4A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068F4D0:
    c.r[14].d[0] = c.r[12].d[0] << 11;
    c.r[7].d[0] = c.sa;
    c.r[14].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F4DCu);
    c.r[7].d[0] = c.sa;
    c.r[14].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F4E8u);
    c.r[14].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F4F0u);
    c.r[7].d[0] = c.sa;
    c.budget -= 12;
L_0068F500:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068F530:
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[14].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.sa;
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F53Cu);
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F544u);
    c.r[14].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F54Cu);
    c.r[7].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    c.budget -= 12;
L_0068F560:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068F590:
    c.r[14].d[0] = c.r[12].d[0] << 20;
    c.r[7].d[0] = c.sa;
    c.r[14].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F59Cu);
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F5A4u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]); c.r[14].d[0] = c.lo.d[0];  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068F5C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068F5F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068F620:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068F650:
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[14].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F658u);
    c.r[14].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F660u);
    c.r[15].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F66Cu);
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068F680:
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F688u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068F6B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068F6E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068F710:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068F740:
    c.r[15].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    c.r[9].d[0] = c.r[12].d[0] << 23;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F74Cu);
    c.r[7].d[0] = c.sa;
    set32(c.r[15], c.r[12].w[0] << 10);
    set32(c.r[15], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    c.budget -= 12;
L_0068F770:
    c.r[15].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    c.r[9].d[0] = c.r[12].d[0] << 23;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F77Cu);
    c.r[7].d[0] = c.sa;
    set32(c.r[15], c.r[12].w[0] << 11);
    set32(c.r[15], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[15], c.r[12].w[0] << 12);
    set32(c.r[15], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[15], c.r[12].w[0] << 13);
    c.budget -= 12;
L_0068F7A0:
    c.r[15].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    c.r[9].d[0] = c.r[12].d[0] << 23;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F7ACu);
    c.r[7].d[0] = c.sa;
    set32(c.r[15], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[15], c.r[12].w[0] << 14);
    set32(c.r[15], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[15], c.r[12].w[0] << 15);
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    c.budget -= 12;
L_0068F7D0:
    set32(c.r[15], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.r[9].d[0] = c.r[12].d[0] << 23;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F7DCu);
    c.r[7].d[0] = c.sa;
    c.r[15].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F7E8u);
    c.r[15].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F7F0u);
    c.r[7].d[0] = c.sa;
    c.budget -= 12;
L_0068F800:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.r[15].d[0] = c.hi.d[0];
    c.r[8].d[0] = c.r[12].d[0] << 29;
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F818u);
    c.r[15].d[0] = c.hi.d[0];
    c.r[15].d[0] = c.sa;
    c.budget -= 9;
L_0068F824:
    c.r[7].d[0] = c.sa;
    c.budget -= 3;
L_0068F830:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    set32(c.r[15], c.r[12].w[0] << 20);
    set32(c.r[15], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    set32(c.r[15], c.r[12].w[0] << 21);
    set32(c.r[15], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[15], c.r[12].w[0] << 22);
    set32(c.r[15], c.r[3].w[0] + c.r[12].w[0]);
    c.budget -= 12;
L_0068F860:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.r[15].d[0] = c.r[12].d[0] << 22;
    c.r[15].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F878u);
    c.r[15].d[0] = c.hi.d[0];
    c.r[15].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    c.budget -= 12;
L_0068F890:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.r[15].d[0] = c.r[12].d[0] << 22;
    set32(c.r[15], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F8A8u);
    c.r[15].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F8B0u);
    c.r[7].d[0] = c.sa;
    c.budget -= 12;
L_0068F8C0:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.r[15].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F8D0u);
    c.r[7].d[0] = c.sa;
    c.r[15].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F8DCu);
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068F8F0:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    set32(c.r[15], c.r[3].w[0] + c.r[12].w[0]);
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F900u);
    c.r[7].d[0] = c.sa;
    set32(c.r[15], c.r[12].w[0] << 29);
    set32(c.r[15], c.r[3].w[0] + c.r[12].w[0]);
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F910u);
    c.r[7].d[0] = c.sa;
    c.budget -= 12;
L_0068F920:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.r[15].d[0] = c.r[12].d[0] << 29;
    c.r[15].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F938u);
    c.r[15].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    c.budget -= 12;
L_0068F950:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.r[15].d[0] = c.sa;
    set32(c.r[16], c.r[12].w[0] << 0);
    c.r[7].d[0] = c.sa;
    set32(c.r[16], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[16], c.r[12].w[0] << 1);
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.sa;
    c.budget -= 12;
L_0068F980:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F98Cu);
    c.r[16].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F998u);
    c.r[16].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F9A0u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068F9B0:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    set32(c.r[16], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    set32(c.r[16], c.r[12].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    set32(c.r[16], c.r[12].w[0] << 6);
    set32(c.r[16], c.r[3].w[0] + c.r[12].w[0]);
    c.budget -= 12;
L_0068F9E0:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    set32(c.r[16], c.r[12].w[0] << 7);
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068F9F8u);
    c.r[16].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068FA00u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068FA10:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    set32(c.r[16], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[16], c.r[12].w[0] << 10);
    c.r[7].d[0] = c.sa;
    set32(c.r[16], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[16], c.r[12].w[0] << 11);
    set32(c.r[16], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.budget -= 12;
L_0068FA40:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    set32(c.r[16], c.r[12].w[0] << 12);
    set32(c.r[16], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    set32(c.r[16], c.r[12].w[0] << 13);
    set32(c.r[16], c.r[3].w[0] + c.r[12].w[0]);
    c.r[16].d[0] = c.r[12].d[0] << 13;
    c.r[7].d[0] = c.sa;
    c.budget -= 12;
L_0068FA70:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.r[16].d[0] = c.hi.d[0];
    c.r[16].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    set32(c.r[16], c.r[12].w[0] << 15);
    set32(c.r[16], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[16], c.r[12].w[0] << 16);
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.budget -= 12;
L_0068FAA0:
    c.r[16].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    set32(c.r[16], c.r[12].w[0] << 17);
    set32(c.r[16], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    set32(c.r[16], c.r[12].w[0] << 18);
    set32(c.r[16], c.r[3].w[0] + c.r[12].w[0]);
    c.r[16].d[0] = c.r[12].d[0] << 18;
    c.r[7].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    c.budget -= 12;
L_0068FAD0:
    c.r[16].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    c.r[16].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068FADCu);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068FB00:
    c.r[16].d[0] = c.r[12].d[0] << 21;
    c.r[7].d[0] = c.sa;
    c.r[16].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068FB0Cu);
    c.r[7].d[0] = c.sa;
    c.r[16].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068FB18u);
    c.r[16].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068FB20u);
    c.r[7].d[0] = c.sa;
    c.budget -= 12;
L_0068FB30:
    c.r[16].d[0] = c.r[12].d[0] << 21;
    c.r[7].d[0] = c.sa;
    c.r[16].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068FB3Cu);
    c.r[7].d[0] = c.sa;
    c.r[16].d[0] = c.hi.d[0];
    c.r[16].d[0] = c.sa;
    set32(c.r[16], c.r[12].w[0] << 26);
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    c.budget -= 12;
L_0068FB60:
    c.r[16].d[0] = c.r[12].d[0] << 21;
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068FB68u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068FB90:
    c.r[16].d[0] = c.r[12].d[0] << 21;
    c.r[7].d[0] = c.sa;
    set32(c.r[16], c.r[12].w[0] << 30);
    set32(c.r[16], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    set32(c.r[16], c.r[12].w[0] << 31);
    set32(c.r[16], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[17], c.r[12].w[0] << 0);
    set32(c.r[17], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.budget -= 12;
L_0068FBC0:
    c.r[17].d[0] = c.r[12].d[0] << 0;
    c.r[7].d[0] = c.sa;
    c.r[17].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068FBCCu);
    c.r[7].d[0] = c.sa;
    c.r[17].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068FBD8u);
    c.r[17].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068FBE0u);
    c.r[7].d[0] = c.sa;
    c.budget -= 12;
L_0068FBF0:
    c.r[17].d[0] = c.r[12].d[0] << 0;
    c.r[7].d[0] = c.sa;
    c.r[17].d[0] = c.hi.d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; set32(c.r[17], c.r[3].w[0] + c.r[12].w[0]);  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068FC20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068FC50:
    c.r[17].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    set32(c.r[17], c.r[12].w[0] << 10);
    set32(c.r[17], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    set32(c.r[17], c.r[12].w[0] << 11);
    set32(c.r[17], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[17], c.r[12].w[0] << 12);
    set32(c.r[17], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.budget -= 12;
L_0068FC80:
    c.r[17].d[0] = c.r[12].d[0] << 12;
    c.r[7].d[0] = c.sa;
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; set32(c.r[17], c.r[3].w[0] + c.r[12].w[0]);  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068FCB0:
    c.r[17].d[0] = c.r[12].d[0] << 15;
    c.r[7].d[0] = c.sa;
    c.r[17].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068FCC0u);
    c.r[17].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068FCC8u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    c.budget -= 12;
L_0068FCE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068FD10:
    c.r[17].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    set32(c.r[17], c.r[12].w[0] << 21);
    c.r[8].d[0] = c.r[12].d[0] << 29;
    c.r[7].d[0] = c.sa;
    set32(c.r[17], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[17], c.r[12].w[0] << 22);
    set32(c.r[17], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[17], c.r[12].w[0] << 23);
    c.r[7].d[0] = c.sa;
    c.budget -= 12;
L_0068FD40:
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068FD48u);
    c.r[17].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068FD50u);
    c.r[7].d[0] = c.sa;
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; set32(c.r[17], c.r[3].w[0] + c.r[12].w[0]);  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068FD70:
    c.r[17].d[0] = c.r[12].d[0] << 26;
    c.r[7].d[0] = c.sa;
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; set32(c.r[17], c.r[3].w[0] + c.r[12].w[0]);  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068FDA0:
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.sa;
    c.r[17].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    set32(c.r[17], c.r[12].w[0] << 30);
    set32(c.r[17], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[17], c.r[12].w[0] << 31);
    c.r[7].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    c.budget -= 12;
L_0068FDD0:
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068FDD8u);
    c.r[18].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068FDE0u);
    c.r[7].d[0] = c.sa;
    c.r[18].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068FDECu);
    c.r[18].d[0] = c.hi.d[0];
    c.r[18].d[0] = c.sa;
    c.budget -= 12;
L_0068FE00:
    c.r[18].d[0] = c.r[12].d[0] << 2;
    c.r[7].d[0] = c.sa;
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; set32(c.r[18], c.r[3].w[0] + c.r[12].w[0]);  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068FE30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[7].d[0] = c.sa;  c.pc = t; if (t - 0x0068C000u < 16384u) { entry = entries_0163[(t - 0x0068C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0068FE60:
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068FE68u);
    c.r[18].d[0] = c.hi.d[0];
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068FE74u);
    c.r[18].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068FE7Cu);
    c.r[18].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068FE84u);
    c.budget -= 12;
L_0068FE90:
    c.r[12].d[0] = c.r[12].d[0] << 11;
    c.r[7].d[0] = c.sa;
    c.r[18].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068FE9Cu);
    c.r[18].d[0] = c.hi.d[0];
    c.r[8].d[0] = c.r[12].d[0] << 29;
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068FEACu);
    c.r[18].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068FEB4u);
    c.budget -= 12;
L_0068FEC0:
    c.r[12].d[0] = c.r[12].d[0] << 11;
    c.r[7].d[0] = c.sa;
    c.r[18].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068FECCu);
    c.r[18].d[0] = c.hi.d[0];
    c.r[18].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    set32(c.r[18], c.r[12].w[0] << 17);
    set32(c.r[18], c.r[3].w[0] + c.r[12].w[0]);
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068FEE4u);
    c.budget -= 12;
L_0068FEF0:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    set32(c.r[18], c.r[12].w[0] << 18);
    c.r[7].d[0] = c.sa;
    set32(c.r[18], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[18], c.r[12].w[0] << 19);
    set32(c.r[18], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    c.budget -= 12;
L_0068FF20:
    set32(c.r[8], c.r[12].w[0] << 12);
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    set32(c.r[18], c.r[12].w[0] << 18);
    c.r[7].d[0] = c.sa;
    set32(c.r[18], c.r[12].w[0] << 20);
    set32(c.r[18], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[18], c.r[12].w[0] << 21);
    c.r[7].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    c.budget -= 12;
L_0068FF50:
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068FF58u);
    set32(c.r[18], c.r[12].w[0] << 22);
    set32(c.r[18], c.r[3].w[0] + c.r[12].w[0]);
    c.r[7].d[0] = c.sa;
    set32(c.r[18], c.r[12].w[0] << 23);
    set32(c.r[18], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[18], c.r[12].w[0] << 24);
    c.r[7].d[0] = c.sa;
    c.budget -= 12;
L_0068FF80:
    c.r[7].d[0] = c.sa;
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068FF88u);
    c.r[7].d[0] = c.sa;
    c.budget -= 4;
L_0068FF90:
    c.r[18].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068FF94u);
    c.r[7].d[0] = c.sa;
    c.r[18].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.sa;
    c.budget -= 8;
L_0068FFB0:
    c.r[18].d[0] = c.sa;
    c.r[7].d[0] = c.sa;
    set32(c.r[18], c.r[12].w[0] << 27);
    set32(c.r[18], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[18], c.r[12].w[0] << 28);
    c.r[7].d[0] = c.sa;
    set32(c.r[18], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[18], c.r[12].w[0] << 29);
    mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.sa;
    c.budget -= 10;
L_0068FFD8:
    c.budget -= 2;
L_0068FFE0:
    c.r[7].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068FFE4u);
    c.r[18].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068FFECu);
    c.r[7].d[0] = c.sa;
    c.r[18].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x0068FFF8u);
    c.r[19].d[0] = c.hi.d[0];
    c.budget -= 8;
    [[clang::musttail]] return unit_0164(c, 1u, depth);
}

}
