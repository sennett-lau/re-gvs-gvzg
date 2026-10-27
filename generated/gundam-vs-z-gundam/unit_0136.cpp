#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0136[4096] = {
    0, 0, 1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
    0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0,
    30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0,
    0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 72, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0,
    0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0136(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_005D8008;
    case 2u: goto L_005D8020;
    case 3u: goto L_005D8048;
    case 4u: goto L_005D8120;
    case 5u: goto L_005D81F0;
    case 6u: goto L_005D8208;
    case 7u: goto L_005D8220;
    case 8u: goto L_005D84F8;
    case 9u: goto L_005D8510;
    case 10u: goto L_005D8648;
    case 11u: goto L_005D87C0;
    case 12u: goto L_005D8858;
    case 13u: goto L_005D8928;
    case 14u: goto L_005D8940;
    case 15u: goto L_005D8A08;
    case 16u: goto L_005D8A20;
    case 17u: goto L_005D8B08;
    case 18u: goto L_005D8B20;
    case 19u: goto L_005D8B48;
    case 20u: goto L_005D8D40;
    case 21u: goto L_005D9030;
    case 22u: goto L_005D9130;
    case 23u: goto L_005D9148;
    case 24u: goto L_005D9160;
    case 25u: goto L_005D9188;
    case 26u: goto L_005D92D8;
    case 27u: goto L_005D92F0;
    case 28u: goto L_005D9388;
    case 29u: goto L_005D9468;
    case 30u: goto L_005D9480;
    case 31u: goto L_005D9558;
    case 32u: goto L_005D9570;
    case 33u: goto L_005D9628;
    case 34u: goto L_005D9640;
    case 35u: goto L_005D9668;
    case 36u: goto L_005D9750;
    case 37u: goto L_005D9838;
    case 38u: goto L_005D983C;
    case 39u: goto L_005D9850;
    case 40u: goto L_005D9920;
    case 41u: goto L_005D9A10;
    case 42u: goto L_005D9A28;
    case 43u: goto L_005D9A40;
    case 44u: goto L_005D9B40;
    case 45u: goto L_005D9C48;
    case 46u: goto L_005D9C60;
    case 47u: goto L_005D9C88;
    case 48u: goto L_005D9D38;
    case 49u: goto L_005D9E08;
    case 50u: goto L_005D9E20;
    case 51u: goto L_005D9EB8;
    case 52u: goto L_005DA0A8;
    case 53u: goto L_005DA0C0;
    case 54u: goto L_005DA190;
    case 55u: goto L_005DA1A8;
    case 56u: goto L_005DA1C0;
    case 57u: goto L_005DA1E8;
    case 58u: goto L_005DA350;
    case 59u: goto L_005DA3E8;
    case 60u: goto L_005DA480;
    case 61u: goto L_005DA498;
    case 62u: goto L_005DA4B0;
    case 63u: goto L_005DA590;
    case 64u: goto L_005DA660;
    case 65u: goto L_005DA678;
    case 66u: goto L_005DA690;
    case 67u: goto L_005DA6B8;
    case 68u: goto L_005DA818;
    case 69u: goto L_005DA830;
    case 70u: goto L_005DA9C0;
    case 71u: goto L_005DA9D8;
    case 72u: goto L_005DA9DC;
    case 73u: goto L_005DAAF8;
    case 74u: goto L_005DAB10;
    case 75u: goto L_005DAD90;
    case 76u: goto L_005DADA8;
    case 77u: goto L_005DADB0;
    case 78u: goto L_005DADC0;
    case 79u: goto L_005DAE48;
    case 80u: goto L_005DAE60;
    case 81u: goto L_005DAEB0;
    case 82u: goto L_005DAEC0;
    case 83u: goto L_005DAED0;
    case 84u: goto L_005DAEE8;
    case 85u: goto L_005DAEF8;
    case 86u: goto L_005DAF10;
    case 87u: goto L_005DAF30;
    case 88u: goto L_005DAF50;
    case 89u: goto L_005DAF70;
    case 90u: goto L_005DAFB8;
    case 91u: goto L_005DAFC8;
    case 92u: goto L_005DB210;
    default: bad_entry(c, 0x005D8000u); return;
    }
L_005D8008:
    c.r[12].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[13].sd[0]) trap(c, 0x005D800Cu);
    set32(c.r[15], c.r[29].w[0] << 28);
    c.r[12].d[0] = c.r[3].d[0] + c.r[13].d[0];
    if (c.r[2].sd[0] >= c.r[29].sd[0]) trap(c, 0x005D8018u);
    c.r[15].d[0] = c.r[3].d[0] + c.r[13].d[0];
    c.budget -= 6;
L_005D8020:
    c.r[15].d[0] = c.r[29].d[0] << 15;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[15].d[0] = c.sa;  c.pc = t; if (t - 0x005D8000u < 16384u) { entry = entries_0136[(t - 0x005D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D8048:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D8120:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D81F0:
    set32(c.r[1], c.r[8].w[0] + 255u);
    set32(c.r[3], 0u << 0);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_005D8264; } }
    c.budget -= 1;
L_005D8208:
    if (c.r[3].d[0] == c.r[13].d[0]) trap(c, 0x005D8208u);
    c.r[12].d[0] = c.r[13].d[0] << 24;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; set32(c.r[16], c.r[2].w[0] + c.r[29].w[0]);  c.pc = t; if (t - 0x005D8000u < 16384u) { entry = entries_0136[(t - 0x005D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D8220:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D8264:
    if (0ull == 0ull) trap(c, 0x005D8270u);
    c.budget -= 7;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D84F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; stop(c, 0x005D84FCu, "unsupported delay slot"); return; c.pc = t; if (t - 0x005D8000u < 16384u) { entry = entries_0136[(t - 0x005D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D8510:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D8648:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D87C0:
    c.budget -= 2;
    { mmi::divu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D8858:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D8928:
    c.r[12].d[0] = c.r[3].d[0] & c.r[13].d[0];
    c.r[12].d[0] = c.sa;
    set32(c.r[16], c.r[29].w[0] << 31);
    mmi::mult(c, 0, c.r[2].w[0], c.r[29].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    c.r[17].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[13].sd[0]) trap(c, 0x005D893Cu);
    c.budget -= 6;
L_005D8940:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D8A08:
    if (c.r[3].sd[0] >= c.r[13].sd[0]) trap(c, 0x005D8A08u);
    if (c.r[3].d[0] == c.r[13].d[0]) trap(c, 0x005D8A0Cu);
    c.r[12].d[0] = c.r[3].d[0] + c.r[13].d[0];
    set32(c.r[17], c.r[29].w[0] << 5);
    if (c.r[2].sd[0] >= c.r[29].sd[0]) trap(c, 0x005D8A18u);
    if (c.r[3].sd[0] >= c.r[13].sd[0]) trap(c, 0x005D8A1Cu);
    c.budget -= 6;
L_005D8A20:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D8B08:
    c.r[12].d[0] = c.r[13].d[0] << 25;
    set32(c.r[12], c.r[13].w[0] << 26);
    set32(c.r[17], c.r[2].w[0] + c.r[29].w[0]);
    c.r[12].d[0] = c.r[13].d[0] << 57;
    if (c.r[2].sd[0] >= c.r[29].sd[0]) trap(c, 0x005D8B18u);
    if (c.r[3].sd[0] >= c.r[13].sd[0]) trap(c, 0x005D8B1Cu);
    c.budget -= 6;
L_005D8B20:
    c.r[16].d[0] = c.sa;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[17].d[0] = c.sa;  c.pc = t; if (t - 0x005D8000u < 16384u) { entry = entries_0136[(t - 0x005D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D8B48:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D8D40:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D9030:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D9130:
    st64((c.r[24].w[0] + 255u), c.r[1].d[0]);
    set32(c.r[2], c.r[1].w[0] << 28);
    st64((c.r[24].w[0] + 22u), 0ull);
    c.budget -= 6;
L_005D9148:
    set32(c.r[12], c.r[3].w[0] + c.r[13].w[0]);
    c.r[12].d[0] = c.sa;
    if (c.r[2].sd[0] >= c.r[29].sd[0]) trap(c, 0x005D9150u);
    c.r[12].d[0] = c.r[3].d[0] & c.r[13].d[0];
    if (c.r[2].sd[0] >= c.r[29].sd[0]) trap(c, 0x005D9158u);
    c.budget -= 6;
L_005D9160:
    c.r[17].d[0] = c.sa;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[17].d[0] = c.sa;  c.pc = t; if (t - 0x005D8000u < 16384u) { entry = entries_0136[(t - 0x005D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D9188:
    c.budget -= 2;
    { mmi::divu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D92D8:
    c.r[12].d[0] = c.r[3].d[0] + c.r[13].d[0];
    if (c.r[3].sd[0] >= c.r[13].sd[0]) trap(c, 0x005D92DCu);
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; set32(c.r[18], c.r[2].w[0] + c.r[29].w[0]);  c.pc = t; if (t - 0x005D8000u < 16384u) { entry = entries_0136[(t - 0x005D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D92F0:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D9388:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D9468:
    if (c.r[3].d[0] == c.r[13].d[0]) trap(c, 0x005D9468u);
    c.r[18].d[0] = c.sa;
    if (c.r[2].sd[0] >= c.r[29].sd[0]) trap(c, 0x005D9470u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[18].d[0] = c.hi.d[0];  c.pc = t; if (t - 0x005D8000u < 16384u) { entry = entries_0136[(t - 0x005D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D9480:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D9558:
    c.r[12].d[0] = c.r[13].d[0] << 58;
    set32(c.r[18], c.r[2].w[0] + c.r[29].w[0]);
    c.r[12].d[0] = c.r[13].d[0] << 26;
    set32(c.r[18], c.r[29].w[0] << 18);
    set32(c.r[18], c.r[29].w[0] << 21);
    if (c.r[3].d[0] == c.r[13].d[0]) trap(c, 0x005D956Cu);
    c.budget -= 6;
L_005D9570:
    c.budget -= 2;
    { mmi::divu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D9628:
    set32(c.r[12], c.r[13].w[0] << 27);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; if (c.r[2].sd[0] >= c.r[29].sd[0]) trap(c, 0x005D9630u);  c.pc = t; if (t - 0x005D8000u < 16384u) { entry = entries_0136[(t - 0x005D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D9640:
    mmi::mult(c, 0, c.r[2].w[0], c.r[29].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    c.r[18].d[0] = c.sa;
    c.r[18].d[0] = c.sa;
    mmi::mult(c, 0, c.r[2].w[0], c.r[29].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    c.budget -= 10;
L_005D9668:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D9750:
    c.budget -= 2;
    { if (0ull >= 0ull) trap(c, 0x005D9754u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D9838:
    c.pc = 0x005D983Cu; syscall(c, 0x005D9838u); if (c.pc != 0x005D983Cu) return;
    c.budget -= 1;
L_005D983C:
    c.r[12].d[0] = c.hi.d[0];
    c.r[18].d[0] = c.sa;
    c.r[18].d[0] = c.hi.d[0];
    set32(c.r[19], c.r[2].w[0] + c.r[29].w[0]);
    c.r[15].d[0] = c.r[13].d[0] << 19;
    c.budget -= 5;
L_005D9850:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D9920:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D9A10:
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] <= 0;  if (t) { goto L_005D9E10; } }
    set32(c.r[4], 0u << 28);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[1].d[0];  if (t) { goto L_005D9AA4; } }
    c.budget -= 1;
L_005D9A28:
    c.r[12].d[0] = c.r[13].d[0] << (c.r[3].w[0] & 63u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[13].w[0]);
    c.r[12].d[0] = c.lo.d[0];
    c.r[19].d[0] = c.hi.d[0];
    set32(c.r[19], c.r[2].w[0] + c.r[29].w[0]);
    c.r[19].d[0] = c.hi.d[0];
    c.r[15].d[0] = c.r[13].d[0] << 19;
    c.budget -= 6;
L_005D9A40:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D9AA4:
    if (0ull == 0ull) trap(c, 0x005D9AACu);
    c.lo.d[0] = 0ull;
    c.budget -= 6;
    {  c.pc = 0x04040000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D9B40:
    c.budget -= 2;
    { if (0ll >= 0ll) trap(c, 0x005D9B44u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D9C48:
    c.r[12].d[0] = c.sa;
    if (c.r[3].sd[0] >= c.r[13].sd[0]) trap(c, 0x005D9C4Cu);
    set32(c.r[19], c.r[29].w[0] << 13);
    c.r[12].d[0] = c.r[3].d[0] + c.r[13].d[0];
    if (c.r[2].sd[0] >= c.r[29].sd[0]) trap(c, 0x005D9C58u);
    c.r[15].d[0] = c.r[13].d[0] << 19;
    c.budget -= 6;
L_005D9C60:
    c.r[19].d[0] = c.r[29].d[0] << 0;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[19].d[0] = c.sa;  c.pc = t; if (t - 0x005D8000u < 16384u) { entry = entries_0136[(t - 0x005D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D9C88:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D9D38:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D9E08:
    if (c.r[3].d[0] == c.r[13].d[0]) trap(c, 0x005D9E08u);
    c.r[12].d[0] = c.r[13].d[0] << 27;
    c.budget -= 2;
L_005D9E10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[19].d[0] = c.r[29].d[0] << 20;  c.pc = t; if (t - 0x005D8000u < 16384u) { entry = entries_0136[(t - 0x005D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D9E20:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D9EB8:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005DA0A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; stop(c, 0x005DA0ACu, "unsupported delay slot"); return; c.pc = t; if (t - 0x005D8000u < 16384u) { entry = entries_0136[(t - 0x005D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005DA0C0:
    c.budget -= 2;
    { if (0ll >= 0ll) trap(c, 0x005DA0C4u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005DA190:
    st64((c.r[24].w[0] + 255u), c.r[1].d[0]);
    set32(c.r[6], 0u << 0);
    c.budget -= 5;
    { const bool t = c.r[8].sd[0] <= 0;  if (t) { goto L_005DA660; } }
    c.budget -= 1;
L_005DA1A8:
    c.r[12].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[13].w[0]);
    c.r[12].d[0] = c.lo.d[0];
    set32(c.r[20], c.r[29].w[0] << 3);
    c.r[12].d[0] = c.r[13].d[0] << (c.r[3].w[0] & 63u);
    c.r[20].d[0] = c.hi.d[0];
    c.r[15].d[0] = c.r[13].d[0] << 51;
    c.budget -= 6;
L_005DA1C0:
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[20].d[0] = c.sa;  c.pc = t; if (t - 0x005D8000u < 16384u) { entry = entries_0136[(t - 0x005D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005DA1E8:
    c.budget -= 2;
    { mmi::divu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005DA350:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005DA3E8:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005DA480:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_005DA880; } }
    set32(c.r[3], 0u << 28);
    set32(c.r[1], c.r[24].w[0] + 41u);
    c.budget -= 4;
L_005DA498:
    c.r[12].d[0] = c.r[3].d[0] & c.r[13].d[0];
    c.r[12].d[0] = c.sa;
    c.r[20].d[0] = c.hi.d[0];
    c.r[20].d[0] = c.sa;
    set32(c.r[20], c.r[29].w[0] << 18);
    set32(c.r[15], c.r[13].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 6;
L_005DA4B0:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005DA590:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005DA660:
    st64((c.r[24].w[0] + 255u), c.r[1].d[0]);
    set32(c.r[2], 0u << 28);
    st64((c.r[24].w[0] + 27u), 0ull);
    c.budget -= 6;
L_005DA678:
    c.r[12].d[0] = c.r[13].d[0] << 28;
    set32(c.r[12], c.r[13].w[0] << 29);
    c.r[20].d[0] = c.hi.d[0];
    c.r[12].d[0] = c.r[13].d[0] << 60;
    set32(c.r[20], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 5;
    c.pc = 0x005DA690u; syscall(c, 0x005DA68Cu); if (c.pc != 0x005DA690u) return;
    c.budget -= 1;
L_005DA690:
    c.r[20].d[0] = c.r[29].d[0] << 12;
    c.r[20].d[0] = c.r[29].d[0] << 25;
    mmi::mult(c, 0, c.r[2].w[0], c.r[29].w[0]);
    c.r[20].d[0] = c.lo.d[0];
    c.r[20].d[0] = c.r[29].d[0] << 21;
    c.budget -= 10;
L_005DA6B8:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005DA818:
    set32(c.r[12], c.r[13].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[20].d[0] = c.r[29].d[0] << 26;  c.pc = t; if (t - 0x005D8000u < 16384u) { entry = entries_0136[(t - 0x005D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005DA830:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005DA880:
    c.budget -= 4;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005DA9C0:
    set32(c.r[3], 0u << 28);
    set32(c.r[1], 0u + 41u);
    c.budget -= 6;
L_005DA9D8:
    c.pc = 0x005DA9DCu; syscall(c, 0x005DA9D8u); if (c.pc != 0x005DA9DCu) return;
    c.budget -= 1;
L_005DA9DC:
    set32(c.r[21], c.r[29].w[0] << 5);
    if (c.r[2].sd[0] >= c.r[29].sd[0]) trap(c, 0x005DA9E0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; set32(c.r[21], c.r[29].w[0] << 7);  c.pc = t; if (t - 0x005D8000u < 16384u) { entry = entries_0136[(t - 0x005D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005DAAF8:
    c.r[12].d[0] = c.r[13].d[0] << (c.r[3].w[0] & 63u);
    c.r[21].d[0] = c.sa;
    c.r[12].d[0] = c.hi.d[0];
    if (c.r[2].sd[0] >= c.r[29].sd[0]) trap(c, 0x005DAB04u);
    set32(c.r[21], c.r[2].w[0] + c.r[29].w[0]);
    c.r[15].d[0] = c.hi.d[0];
    c.budget -= 6;
L_005DAB10:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005DAD90:
    set32(c.r[16], c.r[2].w[0] >> 0);
    set32(c.r[16], c.r[4].w[0] >> 0);
    set32(c.r[31], 0u << 31);
    c.budget -= 6;
L_005DADA8:
    c.r[4].d[0] = c.hi.d[0];
    st64((c.r[30].w[0] + 127u), 0ull);
    c.budget -= 2;
L_005DADB0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((0u - 32246u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((0u - 32248u)));
    st64((c.r[30].w[0] + 127u), 0ull);
    c.budget -= 4;
L_005DADC0:
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 260u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] - 32766u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; set32(c.r[31], 0u << 31);  c.pc = t; if (t - 0x005D8000u < 16384u) { entry = entries_0136[(t - 0x005D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005DAE48:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((0u - 32252u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((0u - 32248u)));
    st64((c.r[30].w[0] + 127u), 0ull);
    c.budget -= 6;
L_005DAE60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[8].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((0u - 32246u)));  c.pc = t; if (t - 0x005D8000u < 16384u) { entry = entries_0136[(t - 0x005D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005DAEB0:
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 516u)));
    c.r[28].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 516u)));
    st64((c.r[30].w[0] + 127u), 0ull);
    c.budget -= 4;
L_005DAEC0:
    set32(c.r[1], c.r[31].w[0] >> 0);
    set32(c.r[31], 0u << 31);
    c.budget -= 4;
L_005DAED0:
    c.budget -= 2;
    { const std::uint32_t t = 0u; set32(c.r[1], c.r[28].w[0] >> 0);  c.pc = t; if (t - 0x005D8000u < 16384u) { entry = entries_0136[(t - 0x005D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005DAEE8:
    st64((c.r[30].w[0] + 127u), 0ull);
    c.budget -= 4;
L_005DAEF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x005D8000u < 16384u) { entry = entries_0136[(t - 0x005D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005DAF10:
    set32(c.r[31], c.r[31].w[0] << 31);
    set32(c.r[31], 0u << 31);
    c.budget -= 8;
L_005DAF30:
    set32(c.r[31], c.r[31].w[0] << 31);
    set32(c.r[31], 0u << 31);
    c.budget -= 8;
L_005DAF50:
    st8((c.r[1].w[0] + 260u), static_cast<std::uint8_t>(c.r[28].w[0]));
    c.r[8].d[0] = ld8((c.r[1].w[0] - 32738u));
    st8((0u - 32738u), static_cast<std::uint8_t>(c.r[20].w[0]));
    c.r[30].d[0] = ld8((0u - 32708u));
    st8((c.r[1].w[0] - 32738u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[20].d[0] = ld8((0u - 32738u));
    c.r[16].d[0] = c.r[31].d[0] << 32;
    set32(c.r[31], 0u << 31);
    c.budget -= 8;
L_005DAF70:
    c.r[28].sd[0] = static_cast<std::int8_t>(ld8((0u - 32510u)));
    c.budget -= 3;
    {  c.pc = 0x00080040u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005DAFB8:
    set32(c.r[16], c.r[4].w[0] << (0u & 31u));
    set32(c.r[16], 0u + c.r[28].w[0]);
    st64((c.r[30].w[0] + 127u), 0ull);
    c.budget -= 4;
L_005DAFC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; set32(c.r[31], 0u << 31);  c.pc = t; if (t - 0x005D8000u < 16384u) { entry = entries_0136[(t - 0x005D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005DB210:
    set32(c.r[21], c.r[2].w[0] + c.r[29].w[0]);
    if (c.r[2].sd[0] >= c.r[29].sd[0]) trap(c, 0x005DB214u);
    set32(c.r[21], c.r[29].w[0] << 19);
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; set32(c.r[21], c.r[2].w[0] + c.r[29].w[0]);  c.pc = t; if (t - 0x005D8000u < 16384u) { entry = entries_0136[(t - 0x005D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
}

}
