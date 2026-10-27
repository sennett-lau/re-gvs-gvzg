#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0135[4096] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0,
    0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0,
    0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0,
    0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 34, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0,
    0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0,
    84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0,
    0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0135(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_005D4028;
    case 2u: goto L_005D4040;
    case 3u: goto L_005D4130;
    case 4u: goto L_005D4148;
    case 5u: goto L_005D4150;
    case 6u: goto L_005D4188;
    case 7u: goto L_005D42A8;
    case 8u: goto L_005D42C0;
    case 9u: goto L_005D42F0;
    case 10u: goto L_005D4320;
    case 11u: goto L_005D43F0;
    case 12u: goto L_005D44A8;
    case 13u: goto L_005D44C0;
    case 14u: goto L_005D4578;
    case 15u: goto L_005D4590;
    case 16u: goto L_005D45B8;
    case 17u: goto L_005D4788;
    case 18u: goto L_005D47A0;
    case 19u: goto L_005D4978;
    case 20u: goto L_005D4990;
    case 21u: goto L_005D4A78;
    case 22u: goto L_005D4A90;
    case 23u: goto L_005D4B98;
    case 24u: goto L_005D4BB0;
    case 25u: goto L_005D4BD8;
    case 26u: goto L_005D4D10;
    case 27u: goto L_005D4D70;
    case 28u: goto L_005D4F38;
    case 29u: goto L_005D4F50;
    case 30u: goto L_005D5048;
    case 31u: goto L_005D5130;
    case 32u: goto L_005D5230;
    case 33u: goto L_005D5300;
    case 34u: goto L_005D5408;
    case 35u: goto L_005D540C;
    case 36u: goto L_005D5420;
    case 37u: goto L_005D54E8;
    case 38u: goto L_005D5500;
    case 39u: goto L_005D5648;
    case 40u: goto L_005D5808;
    case 41u: goto L_005D5820;
    case 42u: goto L_005D5AF8;
    case 43u: goto L_005D5B10;
    case 44u: goto L_005D5BF0;
    case 45u: goto L_005D5C08;
    case 46u: goto L_005D5C10;
    case 47u: goto L_005D5C48;
    case 48u: goto L_005D5E18;
    case 49u: goto L_005D5E30;
    case 50u: goto L_005D61A0;
    case 51u: goto L_005D62C0;
    case 52u: goto L_005D62E8;
    case 53u: goto L_005D64B8;
    case 54u: goto L_005D64D0;
    case 55u: goto L_005D67A8;
    case 56u: goto L_005D67C0;
    case 57u: goto L_005D68C8;
    case 58u: goto L_005D68E0;
    case 59u: goto L_005D6908;
    case 60u: goto L_005D6AD0;
    case 61u: goto L_005D6BA0;
    case 62u: goto L_005D6C90;
    case 63u: goto L_005D6CA8;
    case 64u: goto L_005D6CC0;
    case 65u: goto L_005D6DC8;
    case 66u: goto L_005D6DE0;
    case 67u: goto L_005D6ED0;
    case 68u: goto L_005D6EE8;
    case 69u: goto L_005D6F00;
    case 70u: goto L_005D6F28;
    case 71u: goto L_005D7078;
    case 72u: goto L_005D7090;
    case 73u: goto L_005D71C8;
    case 74u: goto L_005D71CC;
    case 75u: goto L_005D72D0;
    case 76u: goto L_005D7390;
    case 77u: goto L_005D73A8;
    case 78u: goto L_005D73C0;
    case 79u: goto L_005D75B8;
    case 80u: goto L_005D75D0;
    case 81u: goto L_005D79D0;
    case 82u: goto L_005D79E8;
    case 83u: goto L_005D79F0;
    case 84u: goto L_005D7A00;
    case 85u: goto L_005D7A28;
    case 86u: goto L_005D7B10;
    case 87u: goto L_005D7BF8;
    case 88u: goto L_005D7C10;
    case 89u: goto L_005D7F00;
    default: bad_entry(c, 0x005D4000u); return;
    }
L_005D4028:
    set32(c.r[12], c.r[13].w[0] << (c.r[3].w[0] & 31u));
    mmi::mult(c, 0, c.r[2].w[0], c.r[29].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[12], c.r[13].w[0] << 18);
    set32(c.r[7], c.r[2].w[0] + c.r[29].w[0]);
    c.r[8].d[0] = c.hi.d[0];
    c.r[15].d[0] = c.hi.d[0];
    c.budget -= 6;
L_005D4040:
    c.budget -= 2;
    { if (0ll >= 0ll) trap(c, 0x005D4044u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D4130:
    st64((c.r[24].w[0] + 255u), c.r[1].d[0]);
    set32(c.r[6], 0u << 0);
    c.budget -= 5;
    { const bool t = c.r[24].d[0] != 0ull;  if (t) { goto L_005D459C; } }
    c.budget -= 1;
L_005D4148:
    c.r[8].d[0] = c.r[29].d[0] << 2;
    c.budget -= 1;
    c.pc = 0x005D4150u; syscall(c, 0x005D414Cu); if (c.pc != 0x005D4150u) return;
    c.budget -= 1;
L_005D4150:
    set32(c.r[8], c.r[29].w[0] << 1);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; if (c.r[2].sd[0] >= c.r[29].sd[0]) trap(c, 0x005D4158u);  c.pc = t; if (t - 0x005D4000u < 16384u) { entry = entries_0135[(t - 0x005D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D4188:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D42A8:
    c.r[12].d[0] = c.hi.d[0];
    c.r[12].d[0] = c.r[13].d[0] << (c.r[3].w[0] & 63u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[8].d[0] = c.sa;  c.pc = t; if (t - 0x005D4000u < 16384u) { entry = entries_0135[(t - 0x005D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D42C0:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D42F0:
    c.budget -= 5;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D4320:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D43F0:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D44A8:
    c.r[12].d[0] = c.r[3].d[0] & c.r[13].d[0];
    c.r[12].d[0] = c.sa;
    set32(c.r[12], c.r[3].w[0] + c.r[13].w[0]);
    if (c.r[2].sd[0] >= c.r[29].sd[0]) trap(c, 0x005D44B4u);
    c.r[8].d[0] = c.hi.d[0];
    c.budget -= 6;
L_005D44C0:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D4578:
    c.r[12].d[0] = c.r[3].d[0] + c.r[13].d[0];
    if (c.r[3].d[0] == c.r[13].d[0]) trap(c, 0x005D457Cu);
    set32(c.r[8], c.r[29].w[0] << 19);
    if (c.r[3].sd[0] >= c.r[13].sd[0]) trap(c, 0x005D4584u);
    set32(c.r[8], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 6;
L_005D4590:
    c.r[8].d[0] = c.sa;
    c.r[8].d[0] = c.r[29].d[0] << 21;
    c.budget -= 3;
L_005D459C:
    mmi::mult(c, 0, c.r[2].w[0], c.r[29].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.r[8].d[0] = c.sa;
    c.budget -= 7;
L_005D45B8:
    c.budget -= 2;
    { mmi::divu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D4788:
    c.r[12].d[0] = c.r[13].d[0] << 18;
    c.r[12].d[0] = c.r[13].d[0] << 50;
    c.r[8].d[0] = c.r[29].d[0] << 22;
    set32(c.r[8], c.r[2].w[0] + c.r[29].w[0]);
    if (c.r[2].sd[0] >= c.r[29].sd[0]) trap(c, 0x005D4798u);
    c.r[15].d[0] = c.r[13].d[0] << (c.r[3].w[0] & 63u);
    c.budget -= 6;
L_005D47A0:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D4978:
    set32(c.r[12], c.r[13].w[0] << 19);
    c.r[9].d[0] = c.sa;
    set32(c.r[8], c.r[2].w[0] + c.r[29].w[0]);
    if (c.r[2].sd[0] >= c.r[29].sd[0]) trap(c, 0x005D4984u);
    set32(c.r[9], c.r[2].w[0] + c.r[29].w[0]);
    c.r[15].d[0] = c.r[13].d[0] << (c.r[3].w[0] & 63u);
    c.budget -= 6;
L_005D4990:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D4A78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; stop(c, 0x005D4A7Cu, "unsupported delay slot"); return; c.pc = t; if (t - 0x005D4000u < 16384u) { entry = entries_0135[(t - 0x005D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D4A90:
    c.budget -= 2;
    { mmi::divu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D4B98:
    c.r[12].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[13].w[0]);
    c.r[12].d[0] = c.lo.d[0];
    c.r[9].d[0] = c.hi.d[0];
    c.r[12].d[0] = c.r[13].d[0] << (c.r[3].w[0] & 63u);
    set32(c.r[9], c.r[29].w[0] << 14);
    c.r[15].d[0] = c.r[13].d[0] << (c.r[3].w[0] & 63u);
    c.budget -= 6;
L_005D4BB0:
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; mmi::mult(c, 0, c.r[2].w[0], c.r[29].w[0]); c.r[9].d[0] = c.lo.d[0];  c.pc = t; if (t - 0x005D4000u < 16384u) { entry = entries_0135[(t - 0x005D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D4BD8:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D4D10:
    c.budget -= 2;
    { mmi::divu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D4D70:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D4F38:
    if (c.r[3].sd[0] >= c.r[13].sd[0]) trap(c, 0x005D4F38u);
    if (c.r[3].d[0] == c.r[13].d[0]) trap(c, 0x005D4F3Cu);
    c.r[12].d[0] = c.r[3].d[0] + c.r[13].d[0];
    set32(c.r[9], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[9], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 6;
L_005D4F50:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D5048:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D5130:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D5230:
    c.budget -= 2;
    { mmi::divu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D5300:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D5408:
    c.pc = 0x005D540Cu; syscall(c, 0x005D5408u); if (c.pc != 0x005D540Cu) return;
    c.budget -= 1;
L_005D540C:
    c.r[10].d[0] = c.r[29].d[0] << 13;
    if (c.r[2].sd[0] >= c.r[29].sd[0]) trap(c, 0x005D5410u);
    set32(c.r[10], c.r[29].w[0] << 12);
    if (c.r[2].sd[0] >= c.r[29].sd[0]) trap(c, 0x005D5418u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[13].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    c.budget -= 5;
L_005D5420:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D54E8:
    c.r[12].d[0] = c.r[13].d[0] << (c.r[3].w[0] & 63u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[13].w[0]);
    c.r[12].d[0] = c.lo.d[0];
    c.r[12].d[0] = c.hi.d[0];
    set32(c.r[10], c.r[2].w[0] + c.r[29].w[0]);
    c.r[10].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[13].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    c.budget -= 6;
L_005D5500:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D5648:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D5808:
    c.r[12].d[0] = c.sa;
    c.r[12].d[0] = c.r[3].d[0] + c.r[13].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; set32(c.r[10], c.r[2].w[0] + c.r[29].w[0]);  c.pc = t; if (t - 0x005D4000u < 16384u) { entry = entries_0135[(t - 0x005D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D5820:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D5AF8:
    c.r[12].d[0] = c.r[13].d[0] << 52;
    set32(c.r[12], c.r[13].w[0] << 21);
    c.r[12].d[0] = c.r[13].d[0] << 20;
    set32(c.r[11], c.r[29].w[0] << 8);
    set32(c.r[11], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 6;
L_005D5B10:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D5BF0:
    st64((c.r[24].w[0] + 255u), c.r[1].d[0]);
    set32(c.r[3], 0u << 4);
    c.budget -= 5;
    { const bool t = c.r[24].d[0] != 0ull;  if (t) { goto L_005D5C54; } }
    c.budget -= 1;
L_005D5C08:
    set32(c.r[12], c.r[13].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 1;
    c.pc = 0x005D5C10u; syscall(c, 0x005D5C0Cu); if (c.pc != 0x005D5C10u) return;
    c.budget -= 1;
L_005D5C10:
    c.r[11].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; if (c.r[2].sd[0] >= c.r[29].sd[0]) trap(c, 0x005D5C18u);  c.pc = t; if (t - 0x005D4000u < 16384u) { entry = entries_0135[(t - 0x005D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D5C48:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D5C54:
    c.budget -= 6;
    {  c.pc = 0x04040000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D5E18:
    c.r[12].d[0] = c.hi.d[0];
    c.r[12].d[0] = c.r[13].d[0] << (c.r[3].w[0] & 63u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; if (c.r[2].sd[0] >= c.r[29].sd[0]) trap(c, 0x005D5E24u);  c.pc = t; if (t - 0x005D4000u < 16384u) { entry = entries_0135[(t - 0x005D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D5E30:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D61A0:
    c.budget -= 2;
    { if (0ll >= 0ll) trap(c, 0x005D61A4u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D62C0:
    mmi::mult(c, 0, c.r[2].w[0], c.r[29].w[0]);
    c.r[11].d[0] = c.lo.d[0];
    c.r[12].d[0] = c.sa;
    c.r[12].d[0] = c.sa;
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x005D4000u < 16384u) { entry = entries_0135[(t - 0x005D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D62E8:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D64B8:
    if (c.r[3].d[0] == c.r[13].d[0]) trap(c, 0x005D64B8u);
    c.r[12].d[0] = c.r[13].d[0] << 21;
    c.r[12].d[0] = c.sa;
    c.r[12].d[0] = c.hi.d[0];
    set32(c.r[12], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[15], c.r[3].w[0] + c.r[13].w[0]);
    c.budget -= 6;
L_005D64D0:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D67A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; stop(c, 0x005D67ACu, "unsupported delay slot"); return; c.pc = t; if (t - 0x005D4000u < 16384u) { entry = entries_0135[(t - 0x005D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D67C0:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D68C8:
    c.r[12].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[13].w[0]);
    c.r[12].d[0] = c.lo.d[0];
    set32(c.r[12], c.r[29].w[0] << 31);
    c.r[12].d[0] = c.r[13].d[0] << (c.r[3].w[0] & 63u);
    if (c.r[2].sd[0] >= c.r[29].sd[0]) trap(c, 0x005D68D8u);
    set32(c.r[15], c.r[3].w[0] + c.r[13].w[0]);
    c.budget -= 6;
L_005D68E0:
    c.r[12].d[0] = c.r[29].d[0] << 18;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[12].d[0] = c.sa;  c.pc = t; if (t - 0x005D4000u < 16384u) { entry = entries_0135[(t - 0x005D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D6908:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D6AD0:
    c.budget -= 2;
    { mmi::divu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D6BA0:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D6C90:
    c.budget -= 2;
    { const bool t = c.r[24].sd[0] <= 0;  if (t) { goto L_005D7090; } }
    set32(c.r[4], 0u << 28);
    c.r[1].d[0] = c.r[16].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
L_005D6CA8:
    c.r[12].d[0] = c.r[3].d[0] & c.r[13].d[0];
    c.r[12].d[0] = c.sa;
    c.r[13].d[0] = c.hi.d[0];
    set32(c.r[13], c.r[2].w[0] + c.r[29].w[0]);
    c.r[13].d[0] = c.hi.d[0];
    c.r[15].d[0] = c.r[3].d[0] & c.r[13].d[0];
    c.budget -= 6;
L_005D6CC0:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D6DC8:
    if (c.r[3].sd[0] >= c.r[13].sd[0]) trap(c, 0x005D6DC8u);
    if (c.r[3].d[0] == c.r[13].d[0]) trap(c, 0x005D6DCCu);
    c.r[12].d[0] = c.r[3].d[0] + c.r[13].d[0];
    set32(c.r[13], c.r[29].w[0] << 19);
    if (c.r[2].sd[0] >= c.r[29].sd[0]) trap(c, 0x005D6DD8u);
    c.r[15].d[0] = c.r[3].d[0] & c.r[13].d[0];
    c.budget -= 6;
L_005D6DE0:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D6ED0:
    st64((c.r[24].w[0] + 255u), c.r[1].d[0]);
    set32(c.r[3], c.r[1].w[0] << 0);
    st64((c.r[24].w[0] + 50u), 0ull);
    c.budget -= 6;
L_005D6EE8:
    c.r[12].d[0] = c.r[13].d[0] << 22;
    set32(c.r[12], c.r[13].w[0] << 23);
    set32(c.r[13], c.r[2].w[0] + c.r[29].w[0]);
    c.r[12].d[0] = c.r[13].d[0] << 54;
    c.r[13].d[0] = c.hi.d[0];
    c.r[15].d[0] = c.r[3].d[0] & c.r[13].d[0];
    c.budget -= 6;
L_005D6F00:
    c.r[13].d[0] = c.r[29].d[0] << 10;
    c.r[13].d[0] = c.sa;
    c.r[13].d[0] = c.sa;
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x005D4000u < 16384u) { entry = entries_0135[(t - 0x005D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D6F28:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D7078:
    set32(c.r[12], c.r[13].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[13].d[0] = c.sa;  c.pc = t; if (t - 0x005D4000u < 16384u) { entry = entries_0135[(t - 0x005D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D7090:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D71C8:
    c.pc = 0x005D71CCu; syscall(c, 0x005D71C8u); if (c.pc != 0x005D71CCu) return;
    c.budget -= 1;
L_005D71CC:
    c.r[12].d[0] = c.hi.d[0];
    c.r[14].d[0] = c.hi.d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; if (c.r[2].sd[0] >= c.r[29].sd[0]) trap(c, 0x005D71D8u);  c.pc = t; if (t - 0x005D4000u < 16384u) { entry = entries_0135[(t - 0x005D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D72D0:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D7390:
    st64((c.r[24].w[0] + 255u), c.r[1].d[0]);
    set32(c.r[3], 0u << 12);
    st64((c.r[24].w[0] + 23u), 0ull);
    c.budget -= 6;
L_005D73A8:
    set32(c.r[12], c.r[3].w[0] + c.r[13].w[0]);
    c.r[12].d[0] = c.sa;
    c.r[14].d[0] = c.hi.d[0];
    c.r[12].d[0] = c.r[3].d[0] & c.r[13].d[0];
    c.r[14].d[0] = c.hi.d[0];
    c.budget -= 6;
L_005D73C0:
    c.r[14].d[0] = c.r[29].d[0] << 1;
    c.r[14].d[0] = c.sa;
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x005D4000u < 16384u) { entry = entries_0135[(t - 0x005D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D75B8:
    c.r[12].d[0] = c.r[3].d[0] + c.r[13].d[0];
    if (c.r[3].sd[0] >= c.r[13].sd[0]) trap(c, 0x005D75BCu);
    c.r[14].d[0] = c.sa;
    c.r[14].d[0] = c.hi.d[0];
    set32(c.r[14], c.r[2].w[0] + c.r[29].w[0]);
    c.r[15].d[0] = c.sa;
    c.budget -= 6;
L_005D75D0:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D79D0:
    st64((c.r[24].w[0] + 255u), c.r[1].d[0]);
    set32(c.r[3], 0u << 12);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_005D7E50; } }
    c.budget -= 1;
L_005D79E8:
    set32(c.r[12], c.r[13].w[0] << (c.r[3].w[0] & 31u));
    c.budget -= 1;
    c.pc = 0x005D79F0u; syscall(c, 0x005D79ECu); if (c.pc != 0x005D79F0u) return;
    c.budget -= 1;
L_005D79F0:
    set32(c.r[15], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[15].d[0] = c.hi.d[0];  c.pc = t; if (t - 0x005D4000u < 16384u) { entry = entries_0135[(t - 0x005D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D7A00:
    c.r[14].d[0] = c.r[29].d[0] << 22;
    c.r[15].d[0] = c.sa;
    c.r[14].d[0] = c.sa;
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x005D4000u < 16384u) { entry = entries_0135[(t - 0x005D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D7A28:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D7B10:
    c.budget -= 2;
    {  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D7BF8:
    c.r[12].d[0] = c.hi.d[0];
    c.r[12].d[0] = c.r[13].d[0] << (c.r[3].w[0] & 63u);
    c.r[15].d[0] = c.sa;
    c.r[15].d[0] = c.hi.d[0];
    set32(c.r[15], c.r[2].w[0] + c.r[29].w[0]);
    c.r[15].d[0] = c.r[3].d[0] + c.r[13].d[0];
    c.budget -= 6;
L_005D7C10:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D7E50:
    if (0ull == 0ull) trap(c, 0x005D7E50u);
    c.budget -= 4;
    {  c.pc = 0x04040000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005D7F00:
    c.budget -= 2;
    { mmi::multu(c, 0, 0u, 0u);  c.pc = 0x04000000u; [[clang::musttail]] return dispatch(c, 0u, depth); }
}

}
