#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_014A[4096] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0,
    0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0,
    0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0,
    0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0,
    0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 62,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 73, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0,
    84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0,
    0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0,
    100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0,
    103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 108, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_014A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00628100;
    case 2u: goto L_00628118;
    case 3u: goto L_00628130;
    case 4u: goto L_006281F8;
    case 5u: goto L_00628210;
    case 6u: goto L_006282D8;
    case 7u: goto L_006282F0;
    case 8u: goto L_00628318;
    case 9u: goto L_006284F0;
    case 10u: goto L_006285B8;
    case 11u: goto L_006285D0;
    case 12u: goto L_00628698;
    case 13u: goto L_006286B0;
    case 14u: goto L_006286D8;
    case 15u: goto L_00628738;
    case 16u: goto L_006287F0;
    case 17u: goto L_00628808;
    case 18u: goto L_00628820;
    case 19u: goto L_006288B8;
    case 20u: goto L_006288D0;
    case 21u: goto L_00628998;
    case 22u: goto L_006289B0;
    case 23u: goto L_006289D8;
    case 24u: goto L_00628AA8;
    case 25u: goto L_00628BB0;
    case 26u: goto L_00628C78;
    case 27u: goto L_00628C90;
    case 28u: goto L_00628D58;
    case 29u: goto L_00628D70;
    case 30u: goto L_00628D98;
    case 31u: goto L_00628E68;
    case 32u: goto L_00629038;
    case 33u: goto L_00629050;
    case 34u: goto L_00629118;
    case 35u: goto L_00629130;
    case 36u: goto L_00629158;
    case 37u: goto L_00629228;
    case 38u: goto L_00629330;
    case 39u: goto L_006293F8;
    case 40u: goto L_00629410;
    case 41u: goto L_006294D8;
    case 42u: goto L_006294F0;
    case 43u: goto L_00629518;
    case 44u: goto L_006295E8;
    case 45u: goto L_006297B8;
    case 46u: goto L_006297D0;
    case 47u: goto L_00629898;
    case 48u: goto L_006298B0;
    case 49u: goto L_00629980;
    case 50u: goto L_00629A80;
    case 51u: goto L_00629B50;
    case 52u: goto L_00629C58;
    case 53u: goto L_00629C70;
    case 54u: goto L_00629D78;
    case 55u: goto L_00629D90;
    case 56u: goto L_00629FA0;
    case 57u: goto L_0062A070;
    case 58u: goto L_0062A088;
    case 59u: goto L_0062A0A0;
    case 60u: goto L_0062A170;
    case 61u: goto L_0062A278;
    case 62u: goto L_0062A27C;
    case 63u: goto L_0062A290;
    case 64u: goto L_0062A4D0;
    case 65u: goto L_0062A5E0;
    case 66u: goto L_0062A6C8;
    case 67u: goto L_0062A6E0;
    case 68u: goto L_0062A8B8;
    case 69u: goto L_0062A8D0;
    case 70u: goto L_0062AAC0;
    case 71u: goto L_0062AAD8;
    case 72u: goto L_0062AAE0;
    case 73u: goto L_0062AAF0;
    case 74u: goto L_0062ACD8;
    case 75u: goto L_0062ACF0;
    case 76u: goto L_0062ADC0;
    case 77u: goto L_0062AED0;
    case 78u: goto L_0062B0C0;
    case 79u: goto L_0062B0D8;
    case 80u: goto L_0062B0F0;
    case 81u: goto L_0062B118;
    case 82u: goto L_0062B200;
    case 83u: goto L_0062B2E8;
    case 84u: goto L_0062B300;
    case 85u: goto L_0062B3D0;
    case 86u: goto L_0062B4D8;
    case 87u: goto L_0062B4F0;
    case 88u: goto L_0062B5D8;
    case 89u: goto L_0062B5F0;
    case 90u: goto L_0062B6E0;
    case 91u: goto L_0062B6F8;
    case 92u: goto L_0062B710;
    case 93u: goto L_0062B738;
    case 94u: goto L_0062B910;
    case 95u: goto L_0062B9E0;
    case 96u: goto L_0062BA80;
    case 97u: goto L_0062BA98;
    case 98u: goto L_0062BAB0;
    case 99u: goto L_0062BB68;
    case 100u: goto L_0062BB80;
    case 101u: goto L_0062BC50;
    case 102u: goto L_0062BC68;
    case 103u: goto L_0062BC80;
    case 104u: goto L_0062BCA8;
    case 105u: goto L_0062BE18;
    case 106u: goto L_0062BE30;
    case 107u: goto L_0062BEA8;
    case 108u: goto L_0062BF98;
    case 109u: goto L_0062BF9C;
    case 110u: goto L_0062BFB0;
    default: bad_entry(c, 0x00628000u); return;
    }
L_00628100:
    st64((c.r[24].w[0] + 255u), 0ull);
    set32(c.r[3], c.r[1].w[0] << 16);
    set32(c.r[1], c.r[8].w[0] + 31u);
    c.budget -= 6;
L_00628118:
    c.r[13].d[0] = c.r[13].d[0] << 46;
    set32(c.r[13], c.r[13].w[0] << 15);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    c.r[16].d[0] = c.sa;
    set32(c.r[16], c.r[2].w[0] << 4);
    c.budget -= 6;
L_00628130:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006281F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; stop(c, 0x006281FCu, "unsupported delay slot"); return; c.pc = t; if (t - 0x00628000u < 16384u) { entry = entries_014A[(t - 0x00628000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00628210:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006282D8:
    c.r[13].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[13].w[0]);
    c.r[13].d[0] = c.lo.d[0];
    c.r[16].d[0] = c.hi.d[0];
    c.r[13].d[0] = c.r[13].d[0] << (c.r[3].w[0] & 63u);
    set32(c.r[16], c.r[2].w[0] << 11);
    c.budget -= 6;
L_006282F0:
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[16].d[0] = c.r[2].d[0] << 7;
    mmi::mult(c, 0, c.r[2].w[0], c.r[28].w[0]);
    c.r[30].d[0] = c.lo.d[0];
    c.budget -= 10;
L_00628318:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006284F0:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006285B8:
    c.r[13].d[0] = c.sa;
    c.r[13].d[0] = c.r[3].d[0] + c.r[13].d[0];
    c.r[13].d[0] = c.r[3].d[0] & c.r[13].d[0];
    if (c.r[3].sd[0] >= c.r[2].sd[0]) trap(c, 0x006285C4u);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
L_006285D0:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00628698:
    if (c.r[3].sd[0] >= c.r[13].sd[0]) trap(c, 0x00628698u);
    c.r[13].d[0] = c.r[13].d[0] << 15;
    c.r[16].d[0] = c.hi.d[0];
    if (c.r[3].d[0] == c.r[13].d[0]) trap(c, 0x006286A4u);
    set32(c.r[16], c.r[2].w[0] << 26);
    c.budget -= 6;
L_006286B0:
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[16].d[0] = c.r[2].d[0] << 22;
    mmi::mult(c, 0, c.r[2].w[0], c.r[28].w[0]);
    c.r[30].d[0] = c.lo.d[0];
    c.budget -= 10;
L_006286D8:
    c.budget -= 2;
    { mmi::divu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00628738:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006287F0:
    st64((c.r[24].w[0] + 255u), 0ull);
    set32(c.r[3], 0u << 12);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] > 0;  if (t) { goto L_006288B4; } }
    c.budget -= 1;
L_00628808:
    c.r[13].d[0] = c.r[13].d[0] << 47;
    set32(c.r[13], c.r[13].w[0] << 16);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[16].d[0] = c.r[2].d[0] << 28;
    if (c.r[3].sd[0] >= c.r[2].sd[0]) trap(c, 0x00628818u);
    c.budget -= 6;
L_00628820:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006288B4:
    c.budget -= 1;
L_006288B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; stop(c, 0x006288BCu, "unsupported delay slot"); return; c.pc = t; if (t - 0x00628000u < 16384u) { entry = entries_014A[(t - 0x00628000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006288D0:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00628998:
    c.r[13].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[13].w[0]);
    c.r[13].d[0] = c.lo.d[0];
    c.r[17].d[0] = c.hi.d[0];
    c.r[13].d[0] = c.r[13].d[0] << (c.r[3].w[0] & 63u);
    set32(c.r[17], c.r[2].w[0] << 6);
    c.budget -= 6;
L_006289B0:
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]); c.r[17].d[0] = c.lo.d[0];  c.pc = t; if (t - 0x00628000u < 16384u) { entry = entries_014A[(t - 0x00628000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006289D8:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00628AA8:
    c.budget -= 2;
    { if (0ull >= 0ull) trap(c, 0x00628AACu);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00628BB0:
    c.budget -= 2;
    { if (0ull >= 0ull) trap(c, 0x00628BB4u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00628C78:
    c.r[13].d[0] = c.sa;
    c.r[13].d[0] = c.r[3].d[0] + c.r[13].d[0];
    c.r[13].d[0] = c.r[3].d[0] & c.r[13].d[0];
    if (c.r[3].sd[0] >= c.r[2].sd[0]) trap(c, 0x00628C84u);
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
L_00628C90:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00628D58:
    if (c.r[3].sd[0] >= c.r[13].sd[0]) trap(c, 0x00628D58u);
    c.r[13].d[0] = c.r[13].d[0] << 16;
    c.r[17].d[0] = c.hi.d[0];
    if (c.r[3].d[0] == c.r[13].d[0]) trap(c, 0x00628D64u);
    set32(c.r[17], c.r[2].w[0] << 21);
    c.budget -= 6;
L_00628D70:
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    c.r[17].d[0] = c.r[2].d[0] << 17;
    mmi::mult(c, 0, c.r[2].w[0], c.r[28].w[0]);
    c.r[30].d[0] = c.lo.d[0];
    c.budget -= 10;
L_00628D98:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00628E68:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00629038:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; stop(c, 0x0062903Cu, "unsupported delay slot"); return; c.pc = t; if (t - 0x00628000u < 16384u) { entry = entries_014A[(t - 0x00628000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00629050:
    c.budget -= 2;
    { c.lo.d[0] = 0ull;  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00629118:
    c.r[13].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[13].w[0]);
    c.r[13].d[0] = c.lo.d[0];
    c.r[18].d[0] = c.hi.d[0];
    c.r[13].d[0] = c.r[13].d[0] << (c.r[3].w[0] & 63u);
    set32(c.r[18], c.r[2].w[0] << 4);
    c.budget -= 6;
L_00629130:
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    c.r[18].d[0] = c.r[2].d[0] << 0;
    mmi::mult(c, 0, c.r[2].w[0], c.r[28].w[0]);
    c.r[30].d[0] = c.lo.d[0];
    c.budget -= 10;
L_00629158:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00629228:
    c.budget -= 2;
    { breakpoint(c, 0x0062922Cu);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00629330:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006293F8:
    c.r[13].d[0] = c.sa;
    c.r[13].d[0] = c.r[3].d[0] + c.r[13].d[0];
    c.r[13].d[0] = c.r[3].d[0] & c.r[13].d[0];
    if (c.r[3].sd[0] >= c.r[2].sd[0]) trap(c, 0x00629404u);
    set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
L_00629410:
    c.budget -= 2;
    { c.lo.d[0] = 0ull;  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006294D8:
    if (c.r[3].sd[0] >= c.r[13].sd[0]) trap(c, 0x006294D8u);
    c.r[13].d[0] = c.r[13].d[0] << 17;
    c.r[18].d[0] = c.hi.d[0];
    if (c.r[3].d[0] == c.r[13].d[0]) trap(c, 0x006294E4u);
    set32(c.r[18], c.r[2].w[0] << 19);
    c.budget -= 6;
L_006294F0:
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    c.r[18].d[0] = c.r[2].d[0] << 15;
    mmi::mult(c, 0, c.r[2].w[0], c.r[28].w[0]);
    c.r[30].d[0] = c.lo.d[0];
    c.budget -= 10;
L_00629518:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006295E8:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006297B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; stop(c, 0x006297BCu, "unsupported delay slot"); return; c.pc = t; if (t - 0x00628000u < 16384u) { entry = entries_014A[(t - 0x00628000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006297D0:
    c.budget -= 2;
    { if (0ll >= 0ll) trap(c, 0x006297D4u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00629898:
    c.r[13].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[13].w[0]);
    c.r[13].d[0] = c.lo.d[0];
    c.r[18].d[0] = c.hi.d[0];
    c.r[13].d[0] = c.r[13].d[0] << (c.r[3].w[0] & 63u);
    set32(c.r[19], c.r[2].w[0] << 2);
    c.budget -= 6;
L_006298B0:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00629980:
    c.budget -= 2;
    { breakpoint(c, 0x00629984u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00629A80:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00629B50:
    c.budget -= 2;
    { breakpoint(c, 0x00629B54u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00629C58:
    c.r[13].d[0] = c.r[3].d[0] & c.r[13].d[0];
    c.r[13].d[0] = c.sa;
    set32(c.r[19], c.r[2].w[0] << 10);
    c.r[19].d[0] = c.hi.d[0];
    set32(c.r[19], c.r[2].w[0] << 17);
    c.r[16].d[0] = c.sa;
    c.budget -= 6;
L_00629C70:
    c.budget -= 2;
    { breakpoint(c, 0x00629C74u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00629D78:
    if (c.r[3].sd[0] >= c.r[13].sd[0]) trap(c, 0x00629D78u);
    if (c.r[3].d[0] == c.r[13].d[0]) trap(c, 0x00629D7Cu);
    c.r[13].d[0] = c.r[3].d[0] + c.r[13].d[0];
    if (c.r[3].sd[0] >= c.r[2].sd[0]) trap(c, 0x00629D84u);
    set32(c.r[19], c.r[3].w[0] + c.r[2].w[0]);
    c.r[16].d[0] = c.sa;
    c.budget -= 6;
L_00629D90:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00629FA0:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0062A070:
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] > 0;  if (t) { goto L_0062A470; } }
    set32(c.r[2], c.r[1].w[0] << 20);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] > 0;  if (t) { goto L_0062A0D8; } }
    c.budget -= 1;
L_0062A088:
    set32(c.r[13], c.r[13].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[19].d[0] = c.r[2].d[0] << 26;  c.pc = t; if (t - 0x00628000u < 16384u) { entry = entries_014A[(t - 0x00628000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0062A0A0:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0062A0D8:
    c.budget -= 3;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0062A170:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0062A278:
    c.pc = 0x0062A27Cu; syscall(c, 0x0062A278u); if (c.pc != 0x0062A27Cu) return;
    c.budget -= 1;
L_0062A27C:
    c.r[20].d[0] = c.sa;
    set32(c.r[20], c.r[3].w[0] + c.r[2].w[0]);
    if (c.r[3].sd[0] >= c.r[2].sd[0]) trap(c, 0x0062A284u);
    set32(c.r[20], c.r[3].w[0] + c.r[2].w[0]);
    c.r[16].d[0] = c.r[3].d[0] + c.r[13].d[0];
    c.budget -= 5;
L_0062A290:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0062A470:
    if (0ull == 0ull) trap(c, 0x0062A470u);
    c.budget -= 4;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04040000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0062A4D0:
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[20].d[0] = c.r[2].d[0] << 18;  c.pc = t; if (t - 0x00628000u < 16384u) { entry = entries_014A[(t - 0x00628000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0062A5E0:
    c.budget -= 2;
    { if (0ull >= 0ull) trap(c, 0x0062A5E4u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0062A6C8:
    c.r[13].d[0] = c.sa;
    c.r[13].d[0] = c.r[3].d[0] + c.r[13].d[0];
    c.r[20].d[0] = c.r[2].d[0] << 19;
    set32(c.r[20], c.r[3].w[0] + c.r[2].w[0]);
    if (c.r[3].sd[0] >= c.r[2].sd[0]) trap(c, 0x0062A6D8u);
    if (c.r[3].sd[0] >= c.r[13].sd[0]) trap(c, 0x0062A6DCu);
    c.budget -= 6;
L_0062A6E0:
    c.budget -= 2;
    { mmi::divu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0062A8B8:
    if (c.r[3].sd[0] >= c.r[13].sd[0]) trap(c, 0x0062A8B8u);
    if (c.r[3].d[0] == c.r[13].d[0]) trap(c, 0x0062A8BCu);
    set32(c.r[20], c.r[3].w[0] + c.r[2].w[0]);
    if (c.r[3].sd[0] >= c.r[2].sd[0]) trap(c, 0x0062A8C4u);
    set32(c.r[21], c.r[3].w[0] + c.r[2].w[0]);
    if (c.r[3].sd[0] >= c.r[13].sd[0]) trap(c, 0x0062A8CCu);
    c.budget -= 6;
L_0062A8D0:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0062AAC0:
    st64((c.r[24].w[0] + 255u), c.r[1].d[0]);
    set32(c.r[3], 0u << 12);
    c.budget -= 6;
L_0062AAD8:
    set32(c.r[13], c.r[13].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 1;
    c.pc = 0x0062AAE0u; syscall(c, 0x0062AADCu); if (c.pc != 0x0062AAE0u) return;
    c.budget -= 1;
L_0062AAE0:
    c.r[21].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; set32(c.r[21], c.r[2].w[0] << 11);  c.pc = t; if (t - 0x00628000u < 16384u) { entry = entries_014A[(t - 0x00628000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0062AAF0:
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]); c.r[21].d[0] = c.lo.d[0];  c.pc = t; if (t - 0x00628000u < 16384u) { entry = entries_014A[(t - 0x00628000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0062ACD8:
    c.r[13].d[0] = c.hi.d[0];
    c.r[13].d[0] = c.r[13].d[0] << (c.r[3].w[0] & 63u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[21].d[0] = c.lo.d[0];
    if (c.r[3].sd[0] >= c.r[2].sd[0]) trap(c, 0x0062ACE4u);
    set32(c.r[21], c.r[2].w[0] << 19);
    c.budget -= 6;
L_0062ACF0:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0062ADC0:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0062AED0:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0062B0C0:
    st64((c.r[24].w[0] + 255u), c.r[1].d[0]);
    set32(c.r[3], 0u << 24);
    c.budget -= 6;
L_0062B0D8:
    c.r[13].d[0] = c.r[3].d[0] + c.r[13].d[0];
    if (c.r[3].d[0] == c.r[13].d[0]) trap(c, 0x0062B0DCu);
    set32(c.r[21], c.r[3].w[0] + c.r[2].w[0]);
    if (c.r[3].sd[0] >= c.r[13].sd[0]) trap(c, 0x0062B0E4u);
    set32(c.r[22], c.r[2].w[0] << 3);
    c.budget -= 6;
L_0062B0F0:
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[21].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[22].d[0] = c.lo.d[0];
    c.r[21].d[0] = c.r[2].d[0] << 26;
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00628000u < 16384u) { entry = entries_014A[(t - 0x00628000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0062B118:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0062B200:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0062B2E8:
    c.r[13].d[0] = c.r[13].d[0] << 20;
    c.r[13].d[0] = c.r[13].d[0] << 52;
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[22].d[0] = c.lo.d[0];
    set32(c.r[22], c.r[2].w[0] << 8);
    c.r[22].d[0] = c.hi.d[0];
    if (c.r[3].d[0] == c.r[13].d[0]) trap(c, 0x0062B2FCu);
    c.budget -= 6;
L_0062B300:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0062B3D0:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0062B4D8:
    set32(c.r[13], c.r[13].w[0] << 21);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; set32(c.r[22], c.r[2].w[0] << 12);  c.pc = t; if (t - 0x00628000u < 16384u) { entry = entries_014A[(t - 0x00628000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0062B4F0:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0062B5D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; stop(c, 0x0062B5DCu, "unsupported delay slot"); return; c.pc = t; if (t - 0x00628000u < 16384u) { entry = entries_014A[(t - 0x00628000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0062B5F0:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0062B6E0:
    st64((c.r[24].w[0] + 255u), c.r[1].d[0]);
    set32(c.r[5], 0u << 4);
    c.budget -= 6;
L_0062B6F8:
    c.r[13].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[13].w[0]);
    c.r[13].d[0] = c.lo.d[0];
    if (c.r[3].sd[0] >= c.r[2].sd[0]) trap(c, 0x0062B700u);
    c.r[13].d[0] = c.r[13].d[0] << (c.r[3].w[0] & 63u);
    set32(c.r[22], c.r[3].w[0] + c.r[2].w[0]);
    if (c.r[3].d[0] == c.r[13].d[0]) trap(c, 0x0062B70Cu);
    c.budget -= 6;
L_0062B710:
    c.r[22].d[0] = c.sa;
    c.r[22].d[0] = c.r[2].d[0] << 27;
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[22].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[22].d[0] = c.lo.d[0];
    c.budget -= 10;
L_0062B738:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0062B910:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0062B9E0:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0062BA80:
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] <= 0;  if (t) { goto L_0062BE80; } }
    set32(c.r[3], 0u << 0);
    set32(c.r[1], 0u + 45u);
    c.budget -= 4;
L_0062BA98:
    c.r[13].d[0] = c.r[3].d[0] & c.r[13].d[0];
    c.r[13].d[0] = c.sa;
    c.r[23].d[0] = c.hi.d[0];
    set32(c.r[23], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[23], c.r[2].w[0] << 10);
    c.budget -= 6;
L_0062BAB0:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0062BB68:
    if (c.r[3].sd[0] >= c.r[13].sd[0]) trap(c, 0x0062BB68u);
    if (c.r[3].d[0] == c.r[13].d[0]) trap(c, 0x0062BB6Cu);
    c.r[13].d[0] = c.r[3].d[0] + c.r[13].d[0];
    if (c.r[3].sd[0] >= c.r[2].sd[0]) trap(c, 0x0062BB74u);
    c.r[23].d[0] = c.hi.d[0];
    c.budget -= 6;
L_0062BB80:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0062BC50:
    st64((c.r[24].w[0] + 255u), c.r[1].d[0]);
    set32(c.r[5], 0u << 20);
    st64((c.r[24].w[0] + 36u), 0ull);
    c.budget -= 6;
L_0062BC68:
    c.r[13].d[0] = c.r[13].d[0] << 21;
    set32(c.r[13], c.r[13].w[0] << 22);
    set32(c.r[23], c.r[2].w[0] << 14);
    c.r[13].d[0] = c.r[13].d[0] << 53;
    c.r[23].d[0] = c.hi.d[0];
    c.budget -= 6;
L_0062BC80:
    c.r[23].d[0] = c.r[2].d[0] << 3;
    c.r[23].d[0] = c.sa;
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[23].d[0] = c.lo.d[0];
    c.r[23].d[0] = c.sa;
    c.budget -= 10;
L_0062BCA8:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0062BE18:
    set32(c.r[13], c.r[13].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[23].d[0] = c.sa;  c.pc = t; if (t - 0x00628000u < 16384u) { entry = entries_014A[(t - 0x00628000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0062BE30:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0062BE80:
    if (0ull == 0ull) trap(c, 0x0062BE80u);
    c.sa = 0u & 15u;
    c.budget -= 4;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0062BEA8:
    c.budget -= 2;
    { mmi::divu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0062BF98:
    c.pc = 0x0062BF9Cu; syscall(c, 0x0062BF98u); if (c.pc != 0x0062BF9Cu) return;
    c.budget -= 1;
L_0062BF9C:
    c.r[13].d[0] = c.hi.d[0];
    if (c.r[3].sd[0] >= c.r[2].sd[0]) trap(c, 0x0062BFA0u);
    c.r[23].d[0] = c.sa;
    set32(c.r[23], c.r[2].w[0] << 30);
    c.budget -= 5;
L_0062BFB0:
    c.budget -= 2;
    { mmi::divu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
}

}
