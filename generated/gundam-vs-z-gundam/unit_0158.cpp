#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0158[4096] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0,
    0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0,
    0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0,
    0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0,
    0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0,
    0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0,
    0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0,
    0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0,
    0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 95, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0158(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00660038;
    case 2u: goto L_0066003C;
    case 3u: goto L_00660070;
    case 4u: goto L_006601F8;
    case 5u: goto L_00660210;
    case 6u: goto L_00660290;
    case 7u: goto L_0066029C;
    case 8u: goto L_006602F8;
    case 9u: goto L_006603F8;
    case 10u: goto L_00660410;
    case 11u: goto L_00660438;
    case 12u: goto L_00660490;
    case 13u: goto L_00660508;
    case 14u: goto L_006605F8;
    case 15u: goto L_00660610;
    case 16u: goto L_006607B8;
    case 17u: goto L_006607D0;
    case 18u: goto L_006607F8;
    case 19u: goto L_006608C8;
    case 20u: goto L_006609A0;
    case 21u: goto L_006609B4;
    case 22u: goto L_006609B8;
    case 23u: goto L_006609D0;
    case 24u: goto L_00660AB0;
    case 25u: goto L_00660B78;
    case 26u: goto L_00660B90;
    case 27u: goto L_00660BB8;
    case 28u: goto L_00660C88;
    case 29u: goto L_00660D60;
    case 30u: goto L_00660D78;
    case 31u: goto L_00660D90;
    case 32u: goto L_00660F38;
    case 33u: goto L_00660F50;
    case 34u: goto L_00660F78;
    case 35u: goto L_00661048;
    case 36u: goto L_00661120;
    case 37u: goto L_00661138;
    case 38u: goto L_00661150;
    case 39u: goto L_00661230;
    case 40u: goto L_006612F8;
    case 41u: goto L_00661310;
    case 42u: goto L_00661338;
    case 43u: goto L_00661408;
    case 44u: goto L_006614F8;
    case 45u: goto L_00661510;
    case 46u: goto L_006616B8;
    case 47u: goto L_00661700;
    case 48u: goto L_00661728;
    case 49u: goto L_006617F8;
    case 50u: goto L_00661818;
    case 51u: goto L_00661AA8;
    case 52u: goto L_00661AC0;
    case 53u: goto L_00661AE8;
    case 54u: goto L_00661BB8;
    case 55u: goto L_00661C90;
    case 56u: goto L_00661CA8;
    case 57u: goto L_00661CC0;
    case 58u: goto L_00661E80;
    case 59u: goto L_00661EA8;
    case 60u: goto L_00661F78;
    case 61u: goto L_00662050;
    case 62u: goto L_00662148;
    case 63u: goto L_00662160;
    case 64u: goto L_00662228;
    case 65u: goto L_00662240;
    case 66u: goto L_00662268;
    case 67u: goto L_00662410;
    case 68u: goto L_00662428;
    case 69u: goto L_00662508;
    case 70u: goto L_00662514;
    case 71u: goto L_00662520;
    case 72u: goto L_00662600;
    case 73u: goto L_00662628;
    case 74u: goto L_006626F0;
    case 75u: goto L_00662708;
    case 76u: goto L_00662720;
    case 77u: goto L_00662798;
    case 78u: goto L_006627B0;
    case 79u: goto L_00662868;
    case 80u: goto L_00662910;
    case 81u: goto L_00662928;
    case 82u: goto L_00662A40;
    case 83u: goto L_00662AD8;
    case 84u: goto L_00662BC8;
    case 85u: goto L_00662C28;
    case 86u: goto L_00662C90;
    case 87u: goto L_00662CA8;
    case 88u: goto L_00662CC0;
    case 89u: goto L_00662DC8;
    case 90u: goto L_00662DE0;
    case 91u: goto L_00662E08;
    case 92u: goto L_00662E68;
    case 93u: goto L_00662ED0;
    case 94u: goto L_00662EE8;
    case 95u: goto L_00662EEC;
    case 96u: goto L_00662F90;
    case 97u: goto L_00663620;
    case 98u: goto L_00663830;
    case 99u: goto L_00663960;
    case 100u: goto L_00663A80;
    case 101u: goto L_00663DB0;
    default: bad_entry(c, 0x00660000u); return;
    }
L_00660038:
    c.pc = 0x0066003Cu; syscall(c, 0x00660038u); if (c.pc != 0x0066003Cu) return;
    c.budget -= 1;
L_0066003C:
    c.r[14].d[0] = c.hi.d[0];
    c.r[31].d[0] = c.r[5].d[0] << 25;
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00660000u < 16384u) { entry = entries_0158[(t - 0x00660000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00660070:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006601F8:
    set32(c.r[14], c.r[3].w[0] + c.r[13].w[0]);
    c.r[14].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[6].sd[0]) trap(c, 0x00660200u);
    c.r[14].d[0] = c.r[3].d[0] & c.r[13].d[0];
    c.budget -= 6;
L_00660210:
    c.budget -= 2;
    { mmi::divu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00660290:
    if (0ull == 0ull) trap(c, 0x00660298u);
    c.budget -= 3;
L_0066029C:
    c.budget -= 3;
    { mmi::divu(c, 0, 0u, 0u);  c.pc = 0x04040000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006602F8:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006603F8:
    c.r[14].d[0] = c.r[3].d[0] + c.r[13].d[0];
    if (c.r[3].sd[0] >= c.r[13].sd[0]) trap(c, 0x006603FCu);
    c.budget -= 6;
L_00660410:
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[28].w[0]);
    c.r[30].d[0] = c.lo.d[0];
    c.budget -= 10;
L_00660438:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00660490:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00660508:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006605F8:
    if (c.r[3].d[0] == c.r[13].d[0]) trap(c, 0x006605F8u);
    c.r[14].d[0] = c.r[13].d[0] << 4;
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00660000u < 16384u) { entry = entries_0158[(t - 0x00660000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00660610:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006607B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[14].d[0] = c.hi.d[0];  c.pc = t; if (t - 0x00660000u < 16384u) { entry = entries_0158[(t - 0x00660000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006607D0:
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[28].w[0]);
    c.r[30].d[0] = c.lo.d[0];
    c.budget -= 10;
L_006607F8:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006608C8:
    c.budget -= 2;
    { breakpoint(c, 0x006608CCu);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006609A0:
    st64((c.r[24].w[0] + 255u), 0ull);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x006609B4u);  call(c, 0x08040034u, depth + 1u); if (c.pc != 0x006609B4u) [[unlikely]] return; }
L_006609B4:
    c.budget -= 1;
L_006609B8:
    c.r[14].d[0] = c.r[13].d[0] << (c.r[3].w[0] & 63u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[13].w[0]);
    c.r[14].d[0] = c.lo.d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; set32(c.r[1], c.r[3].w[0] + c.r[6].w[0]);  c.pc = t; if (t - 0x00660000u < 16384u) { entry = entries_0158[(t - 0x00660000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006609D0:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00660AB0:
    c.budget -= 2;
    { c.hi.d[0] = 0ull;  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00660B78:
    c.r[14].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[13].sd[0]) trap(c, 0x00660B7Cu);
    if (c.r[3].sd[0] >= c.r[6].sd[0]) trap(c, 0x00660B80u);
    c.r[14].d[0] = c.r[3].d[0] + c.r[13].d[0];
    set32(c.r[1], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 6;
L_00660B90:
    c.r[20].d[0] = c.r[29].d[0] << 12;
    c.r[20].d[0] = c.r[29].d[0] << 25;
    mmi::mult(c, 0, c.r[2].w[0], c.r[29].w[0]);
    c.r[20].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[6].d[0] << 6;
    c.r[1].d[0] = c.r[6].d[0] << 13;
    c.r[20].d[0] = c.r[29].d[0] << 21;
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[1].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[28].w[0]);
    c.r[30].d[0] = c.lo.d[0];
    c.budget -= 10;
L_00660BB8:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00660C88:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00660D60:
    st64((c.r[24].w[0] + 255u), 0ull);
    set32(c.r[2], 0u << 16);
    c.budget -= 5;
    { const bool t = c.r[24].sd[0] >= 0;  if (t) { goto L_00660D88; } }
    c.budget -= 1;
L_00660D78:
    if (c.r[3].d[0] == c.r[13].d[0]) trap(c, 0x00660D78u);
    c.r[14].d[0] = c.r[13].d[0] << 5;
    c.r[1].d[0] = c.r[6].d[0] << 14;
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; set32(c.r[1], c.r[3].w[0] + c.r[6].w[0]);  c.pc = t; if (t - 0x00660000u < 16384u) { entry = entries_0158[(t - 0x00660000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00660D88:
    set32(c.r[1], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 1;
    c.pc = 0x00660D8Cu; [[clang::musttail]] return dispatch(c, 0u, depth);
L_00660D90:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00660F38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[14].d[0] = c.hi.d[0];  c.pc = t; if (t - 0x00660000u < 16384u) { entry = entries_0158[(t - 0x00660000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00660F50:
    c.r[1].d[0] = c.r[6].d[0] << 21;
    c.r[1].d[0] = c.r[6].d[0] << 28;
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[1].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[28].w[0]);
    c.r[30].d[0] = c.lo.d[0];
    c.budget -= 10;
L_00660F78:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00661048:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00661120:
    st64((c.r[24].w[0] + 255u), 0ull);
    set32(c.r[2], c.r[4].w[0] << 12);
    c.budget -= 5;
    { const bool t = c.r[24].sd[0] >= 0;  if (t) { goto L_00661148; } }
    c.budget -= 1;
L_00661138:
    c.r[14].d[0] = c.r[13].d[0] << (c.r[3].w[0] & 63u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[13].w[0]);
    c.r[14].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[6].d[0] << 29;
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);  c.pc = t; if (t - 0x00660000u < 16384u) { entry = entries_0158[(t - 0x00660000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00661148:
    set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 1;
    c.pc = 0x0066114Cu; [[clang::musttail]] return dispatch(c, 0u, depth);
L_00661150:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00661230:
    c.budget -= 2;
    { c.lo.d[0] = 0ull;  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006612F8:
    c.r[14].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[13].sd[0]) trap(c, 0x006612FCu);
    if (c.r[3].sd[0] >= c.r[6].sd[0]) trap(c, 0x00661300u);
    c.r[14].d[0] = c.r[3].d[0] + c.r[13].d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 6;
L_00661310:
    c.r[2].d[0] = c.r[6].d[0] << 4;
    c.r[2].d[0] = c.r[6].d[0] << 11;
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[28].w[0]);
    c.r[30].d[0] = c.lo.d[0];
    c.budget -= 10;
L_00661338:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00661408:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006614F8:
    if (c.r[3].d[0] == c.r[13].d[0]) trap(c, 0x006614F8u);
    c.r[14].d[0] = c.r[13].d[0] << 6;
    c.r[2].d[0] = c.r[6].d[0] << 12;
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);  c.pc = t; if (t - 0x00660000u < 16384u) { entry = entries_0158[(t - 0x00660000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00661510:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006616B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[14].d[0] = c.hi.d[0];  c.pc = t; if (t - 0x00660000u < 16384u) { entry = entries_0158[(t - 0x00660000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00661700:
    c.r[2].d[0] = c.r[6].d[0] << 19;
    c.r[2].d[0] = c.r[6].d[0] << 26;
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.sa;
    c.budget -= 10;
L_00661728:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006617F8:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00661818:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00661AA8:
    c.r[14].d[0] = c.r[13].d[0] << 7;
    set32(c.r[14], c.r[13].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[14].d[0] = c.r[13].d[0] << 39;
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 6;
L_00661AC0:
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; mmi::mult(c, 0, c.r[2].w[0], c.r[26].w[0]); c.r[28].d[0] = c.lo.d[0];  c.pc = t; if (t - 0x00660000u < 16384u) { entry = entries_0158[(t - 0x00660000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00661AE8:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00661BB8:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00661C90:
    st64((c.r[24].w[0] + 255u), 0ull);
    c.budget -= 5;
    {  c.pc = 0x00040010u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00661CA8:
    set32(c.r[14], c.r[13].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[3].d[0] = c.sa;  c.pc = t; if (t - 0x00660000u < 16384u) { entry = entries_0158[(t - 0x00660000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00661CC0:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00661E80:
    c.r[3].d[0] = c.sa;
    c.r[3].d[0] = c.sa;
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; mmi::mult(c, 0, c.r[2].w[0], c.r[28].w[0]); c.r[30].d[0] = c.lo.d[0];  c.pc = t; if (t - 0x00660000u < 16384u) { entry = entries_0158[(t - 0x00660000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00661EA8:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00661F78:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00662050:
    st64((c.r[24].w[0] + 255u), 0ull);
    c.budget -= 5;
    {  c.pc = 0x00040010u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00662148:
    if (c.r[3].sd[0] >= c.r[13].sd[0]) trap(c, 0x00662148u);
    if (c.r[3].d[0] == c.r[13].d[0]) trap(c, 0x0066214Cu);
    c.r[14].d[0] = c.r[3].d[0] + c.r[13].d[0];
    set32(c.r[4], c.r[6].w[0] << 2);
    if (c.r[3].sd[0] >= c.r[6].sd[0]) trap(c, 0x00662158u);
    c.budget -= 6;
L_00662160:
    c.budget -= 2;
    { c.hi.d[0] = 0ull;  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00662228:
    c.r[14].d[0] = c.r[13].d[0] << 8;
    set32(c.r[14], c.r[13].w[0] << 9);
    set32(c.r[4], c.r[3].w[0] + c.r[6].w[0]);
    c.r[14].d[0] = c.r[13].d[0] << 40;
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 6;
L_00662240:
    c.r[4].d[0] = c.sa;
    c.r[4].d[0] = c.sa;
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; mmi::mult(c, 0, c.r[2].w[0], c.r[28].w[0]); c.r[30].d[0] = c.lo.d[0];  c.pc = t; if (t - 0x00660000u < 16384u) { entry = entries_0158[(t - 0x00660000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00662268:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00662410:
    st64((c.r[24].w[0] + 255u), 0ull);
    c.budget -= 5;
    {  c.pc = 0x00040028u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00662428:
    set32(c.r[14], c.r[13].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[4].d[0] = c.sa;  c.pc = t; if (t - 0x00660000u < 16384u) { entry = entries_0158[(t - 0x00660000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00662508:
    c.r[14].d[0] = c.hi.d[0];
    c.r[14].d[0] = c.r[13].d[0] << (c.r[3].w[0] & 63u);
    c.budget -= 2;
    c.pc = 0x00662514u; syscall(c, 0x00662510u); if (c.pc != 0x00662514u) return;
    c.budget -= 1;
L_00662514:
    set32(c.r[4], c.r[6].w[0] << 17);
    if (c.r[3].sd[0] >= c.r[6].sd[0]) trap(c, 0x00662518u);
    c.budget -= 3;
L_00662520:
    c.budget -= 2;
    { c.hi.d[0] = 0ull;  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00662600:
    c.r[4].d[0] = c.sa;
    c.r[4].d[0] = c.sa;
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; mmi::mult(c, 0, c.r[2].w[0], c.r[28].w[0]); c.r[30].d[0] = c.lo.d[0];  c.pc = t; if (t - 0x00660000u < 16384u) { entry = entries_0158[(t - 0x00660000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00662628:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006626F0:
    st64((c.r[24].w[0] + 255u), 0ull);
    set32(c.r[3], 0u << 24);
    c.budget -= 6;
L_00662708:
    c.r[14].d[0] = c.r[3].d[0] & c.r[13].d[0];
    c.r[14].d[0] = c.sa;
    c.r[4].d[0] = c.sa;
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; if (c.r[3].sd[0] >= c.r[6].sd[0]) trap(c, 0x00662718u);  c.pc = t; if (t - 0x00660000u < 16384u) { entry = entries_0158[(t - 0x00660000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00662720:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00662798:
    if (c.r[3].sd[0] >= c.r[13].sd[0]) trap(c, 0x00662798u);
    if (c.r[3].d[0] == c.r[13].d[0]) trap(c, 0x0066279Cu);
    c.r[14].d[0] = c.r[3].d[0] + c.r[13].d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[6].w[0] << 30);
    c.budget -= 6;
L_006627B0:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00662868:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00662910:
    st64((c.r[24].w[0] + 255u), 0ull);
    c.budget -= 5;
    {  c.pc = 0x00040010u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00662928:
    set32(c.r[14], c.r[13].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[5].d[0] = c.sa;  c.pc = t; if (t - 0x00660000u < 16384u) { entry = entries_0158[(t - 0x00660000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00662A40:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00662AD8:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00662BC8:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00662C28:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00662C90:
    st64((c.r[24].w[0] + 255u), 0ull);
    c.budget -= 5;
    {  c.pc = 0x00040C10u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00662CA8:
    c.r[14].d[0] = c.r[3].d[0] + c.r[13].d[0];
    if (c.r[3].sd[0] >= c.r[13].sd[0]) trap(c, 0x00662CACu);
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[5].d[0] = c.sa;  c.pc = t; if (t - 0x00660000u < 16384u) { entry = entries_0158[(t - 0x00660000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00662CC0:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00662DC8:
    set32(c.r[14], c.r[13].w[0] << 11);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[5].d[0] = c.hi.d[0];  c.pc = t; if (t - 0x00660000u < 16384u) { entry = entries_0158[(t - 0x00660000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00662DE0:
    c.r[5].d[0] = c.sa;
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00660000u < 16384u) { entry = entries_0158[(t - 0x00660000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00662E08:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00662E68:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00662ED0:
    st64((c.r[24].w[0] + 255u), 0ull);
    c.budget -= 5;
    {  c.pc = 0x00040010u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00662EE8:
    c.pc = 0x00662EECu; syscall(c, 0x00662EE8u); if (c.pc != 0x00662EECu) return;
    c.budget -= 1;
L_00662EEC:
    c.r[14].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[5].d[0] = c.sa;  c.pc = t; if (t - 0x00660000u < 16384u) { entry = entries_0158[(t - 0x00660000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00662F90:
    c.budget -= 2;
    { c.hi.d[0] = 0ull;  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00663620:
    c.r[2].d[0] = c.r[12].d[0] << 5;
    set32(c.r[2], c.r[12].w[0] << 6);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[12].w[0] << 7);
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x00663630u);
    set32(c.r[2], c.r[3].w[0] + c.r[12].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[2].d[0] = c.hi.d[0];  c.pc = t; if (t - 0x00660000u < 16384u) { entry = entries_0158[(t - 0x00660000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00663830:
    c.r[3].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x00663834u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[3].d[0] = c.hi.d[0];  c.pc = t; if (t - 0x00660000u < 16384u) { entry = entries_0158[(t - 0x00660000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00663960:
    set32(c.r[3], c.r[3].w[0] + c.r[12].w[0]);
    c.r[3].d[0] = c.r[12].d[0] << 14;
    c.r[3].d[0] = c.hi.d[0];
    c.r[3].d[0] = c.sa;
    c.r[3].d[0] = c.r[12].d[0] << 15;
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]); c.r[3].d[0] = c.lo.d[0];  c.pc = t; if (t - 0x00660000u < 16384u) { entry = entries_0158[(t - 0x00660000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00663A80:
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x00663A80u);
    set32(c.r[3], c.r[12].w[0] << 21);
    c.r[3].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x00663A8Cu);
    c.r[3].d[0] = c.hi.d[0];
    c.r[3].d[0] = c.sa;
    c.r[3].d[0] = c.r[12].d[0] << 22;
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; set32(c.r[3], c.r[3].w[0] + c.r[12].w[0]);  c.pc = t; if (t - 0x00660000u < 16384u) { entry = entries_0158[(t - 0x00660000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00663DB0:
    c.r[3].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[12].sd[0]) trap(c, 0x00663DB4u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; mmi::mult(c, 0, c.r[3].w[0], c.r[12].w[0]); c.r[3].d[0] = c.lo.d[0];  c.pc = t; if (t - 0x00660000u < 16384u) { entry = entries_0158[(t - 0x00660000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
}

}
