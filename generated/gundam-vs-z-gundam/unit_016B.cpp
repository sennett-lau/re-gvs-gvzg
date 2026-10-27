#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_016B[4096] = {
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
    0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0,
    0, 0, 0, 0, 5, 6, 7, 8, 9, 0, 0, 0, 0, 0, 0, 0, 10, 11, 12, 0, 0, 0, 0, 0, 13, 14, 15, 0, 0, 0, 0, 0,
    16, 0, 0, 0, 17, 18, 19, 20, 21, 0, 0, 0, 0, 0, 0, 0, 22, 23, 24, 25, 0, 0, 0, 0, 26, 27, 0, 0, 0, 0, 0, 0,
    28, 29, 30, 31, 32, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0,
    35, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 40, 41, 42, 43, 44, 45, 46, 47, 0, 0, 0, 48, 49, 50, 51,
    52, 53, 54, 55, 56, 0, 0, 0, 0, 0, 0, 0, 57, 58, 59, 0, 0, 0, 0, 0, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71,
    72, 73, 74, 75, 76, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 79, 80, 81, 82, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 85, 86, 87,
    88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 0, 0, 0, 0, 0, 0, 0, 109, 110, 0, 0,
    0, 0, 0, 0, 111, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 115, 116, 117, 0, 0, 0, 118, 119, 120, 121, 122, 123, 124, 0, 0, 0, 0, 0,
    125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 129, 130, 131, 132, 133, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 137, 0, 0, 0, 138, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163,
    164, 165, 166, 167, 168, 169, 170, 171, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 175, 0,
    176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 178, 179, 180,
    181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 182, 0, 183, 184, 185, 186, 187, 0, 0, 0, 0, 0, 0, 0, 188, 189, 190, 191, 192, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_016B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_006AD920;
    case 2u: goto L_006AE768;
    case 3u: goto L_006AE7E8;
    case 4u: goto L_006AE7F8;
    case 5u: goto L_006AE810;
    case 6u: goto L_006AE814;
    case 7u: goto L_006AE818;
    case 8u: goto L_006AE81C;
    case 9u: goto L_006AE820;
    case 10u: goto L_006AE840;
    case 11u: goto L_006AE844;
    case 12u: goto L_006AE848;
    case 13u: goto L_006AE860;
    case 14u: goto L_006AE864;
    case 15u: goto L_006AE868;
    case 16u: goto L_006AE880;
    case 17u: goto L_006AE890;
    case 18u: goto L_006AE894;
    case 19u: goto L_006AE898;
    case 20u: goto L_006AE89C;
    case 21u: goto L_006AE8A0;
    case 22u: goto L_006AE8C0;
    case 23u: goto L_006AE8C4;
    case 24u: goto L_006AE8C8;
    case 25u: goto L_006AE8CC;
    case 26u: goto L_006AE8E0;
    case 27u: goto L_006AE8E4;
    case 28u: goto L_006AE900;
    case 29u: goto L_006AE904;
    case 30u: goto L_006AE908;
    case 31u: goto L_006AE90C;
    case 32u: goto L_006AE910;
    case 33u: goto L_006AE914;
    case 34u: goto L_006AE970;
    case 35u: goto L_006AE980;
    case 36u: goto L_006AE990;
    case 37u: goto L_006AE9A0;
    case 38u: goto L_006AE9C0;
    case 39u: goto L_006AEA40;
    case 40u: goto L_006AEA44;
    case 41u: goto L_006AEA48;
    case 42u: goto L_006AEA4C;
    case 43u: goto L_006AEA50;
    case 44u: goto L_006AEA54;
    case 45u: goto L_006AEA58;
    case 46u: goto L_006AEA5C;
    case 47u: goto L_006AEA60;
    case 48u: goto L_006AEA70;
    case 49u: goto L_006AEA74;
    case 50u: goto L_006AEA78;
    case 51u: goto L_006AEA7C;
    case 52u: goto L_006AEA80;
    case 53u: goto L_006AEA84;
    case 54u: goto L_006AEA88;
    case 55u: goto L_006AEA8C;
    case 56u: goto L_006AEA90;
    case 57u: goto L_006AEAB0;
    case 58u: goto L_006AEAB4;
    case 59u: goto L_006AEAB8;
    case 60u: goto L_006AEAD0;
    case 61u: goto L_006AEAD4;
    case 62u: goto L_006AEAD8;
    case 63u: goto L_006AEADC;
    case 64u: goto L_006AEAE0;
    case 65u: goto L_006AEAE4;
    case 66u: goto L_006AEAE8;
    case 67u: goto L_006AEAEC;
    case 68u: goto L_006AEAF0;
    case 69u: goto L_006AEAF4;
    case 70u: goto L_006AEAF8;
    case 71u: goto L_006AEAFC;
    case 72u: goto L_006AEB00;
    case 73u: goto L_006AEB04;
    case 74u: goto L_006AEB08;
    case 75u: goto L_006AEB0C;
    case 76u: goto L_006AEB10;
    case 77u: goto L_006AEB14;
    case 78u: goto L_006AEB40;
    case 79u: goto L_006AEB44;
    case 80u: goto L_006AEB48;
    case 81u: goto L_006AEB4C;
    case 82u: goto L_006AEB50;
    case 83u: goto L_006AEB54;
    case 84u: goto L_006AEBF0;
    case 85u: goto L_006AEBF4;
    case 86u: goto L_006AEBF8;
    case 87u: goto L_006AEBFC;
    case 88u: goto L_006AEC00;
    case 89u: goto L_006AEC04;
    case 90u: goto L_006AEC08;
    case 91u: goto L_006AEC0C;
    case 92u: goto L_006AEC10;
    case 93u: goto L_006AEC14;
    case 94u: goto L_006AEC18;
    case 95u: goto L_006AEC1C;
    case 96u: goto L_006AEC20;
    case 97u: goto L_006AEC24;
    case 98u: goto L_006AEC28;
    case 99u: goto L_006AEC2C;
    case 100u: goto L_006AEC30;
    case 101u: goto L_006AEC34;
    case 102u: goto L_006AEC38;
    case 103u: goto L_006AEC3C;
    case 104u: goto L_006AEC40;
    case 105u: goto L_006AEC44;
    case 106u: goto L_006AEC48;
    case 107u: goto L_006AEC4C;
    case 108u: goto L_006AEC50;
    case 109u: goto L_006AEC70;
    case 110u: goto L_006AEC74;
    case 111u: goto L_006AEC90;
    case 112u: goto L_006AEC94;
    case 113u: goto L_006AECB0;
    case 114u: goto L_006AED30;
    case 115u: goto L_006AED38;
    case 116u: goto L_006AED3C;
    case 117u: goto L_006AED40;
    case 118u: goto L_006AED50;
    case 119u: goto L_006AED54;
    case 120u: goto L_006AED58;
    case 121u: goto L_006AED5C;
    case 122u: goto L_006AED60;
    case 123u: goto L_006AED64;
    case 124u: goto L_006AED68;
    case 125u: goto L_006AED80;
    case 126u: goto L_006AEDB0;
    case 127u: goto L_006AEDC0;
    case 128u: goto L_006AEDC4;
    case 129u: goto L_006AEFA0;
    case 130u: goto L_006AEFA4;
    case 131u: goto L_006AEFA8;
    case 132u: goto L_006AEFAC;
    case 133u: goto L_006AEFB0;
    case 134u: goto L_006AEFB4;
    case 135u: goto L_006AF418;
    case 136u: goto L_006AF428;
    case 137u: goto L_006AF430;
    case 138u: goto L_006AF440;
    case 139u: goto L_006AF444;
    case 140u: goto L_006AF4A0;
    case 141u: goto L_006AF4A4;
    case 142u: goto L_006AF4A8;
    case 143u: goto L_006AF4AC;
    case 144u: goto L_006AF4B0;
    case 145u: goto L_006AF4B4;
    case 146u: goto L_006AF4B8;
    case 147u: goto L_006AF4BC;
    case 148u: goto L_006AF4C0;
    case 149u: goto L_006AF4C4;
    case 150u: goto L_006AF4C8;
    case 151u: goto L_006AF4CC;
    case 152u: goto L_006AF4D0;
    case 153u: goto L_006AF4D4;
    case 154u: goto L_006AF4D8;
    case 155u: goto L_006AF4DC;
    case 156u: goto L_006AF4E0;
    case 157u: goto L_006AF4E4;
    case 158u: goto L_006AF4E8;
    case 159u: goto L_006AF4EC;
    case 160u: goto L_006AF4F0;
    case 161u: goto L_006AF4F4;
    case 162u: goto L_006AF4F8;
    case 163u: goto L_006AF4FC;
    case 164u: goto L_006AF500;
    case 165u: goto L_006AF504;
    case 166u: goto L_006AF508;
    case 167u: goto L_006AF50C;
    case 168u: goto L_006AF510;
    case 169u: goto L_006AF514;
    case 170u: goto L_006AF518;
    case 171u: goto L_006AF51C;
    case 172u: goto L_006AF520;
    case 173u: goto L_006AF660;
    case 174u: goto L_006AF668;
    case 175u: goto L_006AF678;
    case 176u: goto L_006AF680;
    case 177u: goto L_006AFB70;
    case 178u: goto L_006AFB74;
    case 179u: goto L_006AFB78;
    case 180u: goto L_006AFB7C;
    case 181u: goto L_006AFB80;
    case 182u: goto L_006AFD88;
    case 183u: goto L_006AFD90;
    case 184u: goto L_006AFD94;
    case 185u: goto L_006AFD98;
    case 186u: goto L_006AFD9C;
    case 187u: goto L_006AFDA0;
    case 188u: goto L_006AFDC0;
    case 189u: goto L_006AFDC4;
    case 190u: goto L_006AFDC8;
    case 191u: goto L_006AFDCC;
    case 192u: goto L_006AFDD0;
    case 193u: goto L_006AFDD4;
    default: bad_entry(c, 0x006AC000u); return;
    }
L_006AD920:
    set32(c.r[2], ld32((c.r[20].w[0] + 25730u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0] - 27518u)));
    mtc0(c, 18u, c.r[1].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] - 32480u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[7].w[0];  c.pc = t; if (t - 0x006AC000u < 16384u) { entry = entries_016B[(t - 0x006AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006AE768:
    c.budget -= 2;
    { const std::uint32_t t = 0u;  c.pc = t; if (t - 0x006AC000u < 16384u) { entry = entries_016B[(t - 0x006AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006AE7E8:
    c.r[10].d[0] = c.r[17].sd[0] < 10794ll ? 1ull : 0ull;
    c.r[10].d[0] = c.r[17].sd[0] < 10794ll ? 1ull : 0ull;
    c.r[5].d[0] = 0ll < 0ll ? 1ull : 0ull;
    c.budget -= 4;
L_006AE7F8:
    c.r[19].d[0] = c.r[19].d[0] ^ 26209ull;
    c.r[16].d[0] = c.r[17].d[0] & 12079ull;
    c.r[6].d[0] = 0ull - 0ull;
    c.budget -= 6;
L_006AE810:
    c.r[14].d[0] = c.sa;
    c.budget -= 1;
L_006AE814:
    set32(c.r[14], c.r[17].w[0] << 14);
    c.budget -= 1;
L_006AE818:
    set32(c.r[14], c.r[17].w[0] << 15);
    c.budget -= 1;
L_006AE81C:
    if (c.r[1].sd[0] >= c.r[17].sd[0]) trap(c, 0x006AE81Cu);
    c.budget -= 1;
L_006AE820:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; set32(c.r[14], c.r[1].w[0] + c.r[17].w[0]);  c.pc = t; if (t - 0x006AC000u < 16384u) { entry = entries_016B[(t - 0x006AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006AE840:
    set32(c.r[14], c.r[1].w[0] + c.r[17].w[0]);
    c.budget -= 1;
L_006AE844:
    mmi::mult(c, 0, c.r[1].w[0], c.r[17].w[0]);
    c.r[14].d[0] = c.lo.d[0];
    c.budget -= 1;
L_006AE848:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; c.r[14].d[0] = c.hi.d[0];  c.pc = t; if (t - 0x006AC000u < 16384u) { entry = entries_016B[(t - 0x006AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006AE860:
    mmi::mult(c, 0, c.r[1].w[0], c.r[17].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    c.budget -= 1;
L_006AE864:
    c.r[15].d[0] = c.sa;
    c.budget -= 1;
L_006AE868:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; mmi::mult(c, 0, c.r[1].w[0], c.r[17].w[0]); c.r[15].d[0] = c.lo.d[0];  c.pc = t; if (t - 0x006AC000u < 16384u) { entry = entries_016B[(t - 0x006AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006AE880:
    c.r[19].d[0] = c.r[19].d[0] ^ 26209ull;
    c.r[16].d[0] = c.r[17].d[0] & 12079ull;
    c.r[6].d[0] = 0ull - 0ull;
    c.budget -= 4;
L_006AE890:
    mmi::mult(c, 0, c.r[1].w[0], c.r[17].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    c.budget -= 1;
L_006AE894:
    c.r[15].d[0] = c.r[17].d[0] << 12;
    c.budget -= 1;
L_006AE898:
    if (c.r[1].sd[0] >= c.r[17].sd[0]) trap(c, 0x006AE898u);
    c.budget -= 1;
L_006AE89C:
    set32(c.r[15], c.r[1].w[0] + c.r[17].w[0]);
    c.budget -= 1;
L_006AE8A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; mmi::mult(c, 0, c.r[1].w[0], c.r[17].w[0]); c.r[15].d[0] = c.lo.d[0];  c.pc = t; if (t - 0x006AC000u < 16384u) { entry = entries_016B[(t - 0x006AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006AE8C0:
    c.r[16].d[0] = c.r[17].d[0] << 3;
    c.budget -= 1;
L_006AE8C4:
    mmi::mult(c, 0, c.r[1].w[0], c.r[17].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.budget -= 1;
L_006AE8C8:
    c.r[16].d[0] = c.sa;
    c.budget -= 1;
L_006AE8CC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; mmi::mult(c, 0, c.r[1].w[0], c.r[17].w[0]); c.r[16].d[0] = c.lo.d[0];  c.pc = t; if (t - 0x006AC000u < 16384u) { entry = entries_016B[(t - 0x006AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006AE8E0:
    c.r[16].d[0] = c.sa;
    c.budget -= 1;
L_006AE8E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; mmi::mult(c, 0, c.r[1].w[0], c.r[17].w[0]); c.r[16].d[0] = c.lo.d[0];  c.pc = t; if (t - 0x006AC000u < 16384u) { entry = entries_016B[(t - 0x006AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006AE900:
    c.r[17].d[0] = c.r[17].d[0] << 26;
    c.budget -= 1;
L_006AE904:
    c.r[17].d[0] = c.sa;
    c.budget -= 1;
L_006AE908:
    c.r[17].d[0] = c.r[17].d[0] << 27;
    c.budget -= 1;
L_006AE90C:
    c.r[17].d[0] = c.sa;
    c.budget -= 1;
L_006AE910:
    mmi::mult(c, 0, c.r[1].w[0], c.r[17].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    c.budget -= 1;
L_006AE914:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; mmi::mult(c, 0, c.r[1].w[0], c.r[17].w[0]); c.r[17].d[0] = c.lo.d[0];  c.pc = t; if (t - 0x006AC000u < 16384u) { entry = entries_016B[(t - 0x006AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006AE970:
    c.r[19].d[0] = c.r[19].d[0] ^ 26209ull;
    c.r[16].d[0] = c.r[17].d[0] & 12079ull;
    c.r[6].d[0] = 0ull - 0ull;
    c.budget -= 4;
L_006AE980:
    c.r[19].d[0] = c.r[19].d[0] ^ 26209ull;
    c.r[16].d[0] = c.r[17].d[0] & 12079ull;
    c.r[6].d[0] = 0ull - 0ull;
    c.budget -= 4;
L_006AE990:
    c.r[19].d[0] = c.r[19].d[0] ^ 26209ull;
    c.r[16].d[0] = c.r[17].d[0] & 12079ull;
    c.r[7].d[0] = 0ull - 0ull;
    c.budget -= 4;
L_006AE9A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; c.r[20].d[0] = c.r[17].d[0] << 10;  c.pc = t; if (t - 0x006AC000u < 16384u) { entry = entries_016B[(t - 0x006AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006AE9C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; set32(c.r[22], c.r[17].w[0] << 24);  c.pc = t; if (t - 0x006AC000u < 16384u) { entry = entries_016B[(t - 0x006AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006AEA40:
    c.r[26].d[0] = c.sa;
    c.budget -= 1;
L_006AEA44:
    set32(c.r[26], c.r[1].w[0] + c.r[17].w[0]);
    c.budget -= 1;
L_006AEA48:
    c.r[26].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006AEA4C:
    c.r[26].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006AEA50:
    set32(c.r[26], c.r[17].w[0] << 31);
    c.budget -= 1;
L_006AEA54:
    mmi::mult(c, 0, c.r[1].w[0], c.r[17].w[0]);
    c.r[27].d[0] = c.lo.d[0];
    c.budget -= 1;
L_006AEA58:
    set32(c.r[27], c.r[17].w[0] << 1);
    c.budget -= 1;
L_006AEA5C:
    set32(c.r[27], c.r[1].w[0] + c.r[17].w[0]);
    c.budget -= 1;
L_006AEA60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; if (c.r[1].sd[0] >= c.r[17].sd[0]) trap(c, 0x006AEA64u);  c.pc = t; if (t - 0x006AC000u < 16384u) { entry = entries_016B[(t - 0x006AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006AEA70:
    c.r[29].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006AEA74:
    if (c.r[1].sd[0] >= c.r[17].sd[0]) trap(c, 0x006AEA74u);
    c.budget -= 1;
L_006AEA78:
    if (c.r[1].sd[0] >= c.r[17].sd[0]) trap(c, 0x006AEA78u);
    c.budget -= 1;
L_006AEA7C:
    mmi::mult(c, 0, c.r[1].w[0], c.r[17].w[0]);
    c.r[29].d[0] = c.lo.d[0];
    c.budget -= 1;
L_006AEA80:
    mmi::mult(c, 0, c.r[1].w[0], c.r[17].w[0]);
    c.r[29].d[0] = c.lo.d[0];
    c.budget -= 1;
L_006AEA84:
    c.r[29].d[0] = c.sa;
    c.budget -= 1;
L_006AEA88:
    c.r[29].d[0] = c.r[17].d[0] << 20;
    c.budget -= 1;
L_006AEA8C:
    set32(c.r[29], c.r[17].w[0] << 25);
    c.budget -= 1;
L_006AEA90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; c.r[30].d[0] = c.sa;  c.pc = t; if (t - 0x006AC000u < 16384u) { entry = entries_016B[(t - 0x006AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006AEAB0:
    mmi::mult(c, 0, c.r[1].w[0], c.r[17].w[0]);
    c.r[31].d[0] = c.lo.d[0];
    c.budget -= 1;
L_006AEAB4:
    set32(c.r[31], c.r[17].w[0] << 18);
    c.budget -= 1;
L_006AEAB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; if (c.r[1].sd[0] >= c.r[17].sd[0]) trap(c, 0x006AEABCu);  c.pc = t; if (t - 0x006AC000u < 16384u) { entry = entries_016B[(t - 0x006AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006AEAD0:
    c.r[1].d[0] = c.sa;
    c.budget -= 1;
L_006AEAD4:
    mmi::mult(c, 0, c.r[1].w[0], c.r[18].w[0]);
    c.r[1].d[0] = c.lo.d[0];
    c.budget -= 1;
L_006AEAD8:
    c.r[1].d[0] = c.sa;
    c.budget -= 1;
L_006AEADC:
    set32(c.r[1], c.r[18].w[0] << 26);
    c.budget -= 1;
L_006AEAE0:
    set32(c.r[1], c.r[18].w[0] << 27);
    c.budget -= 1;
L_006AEAE4:
    if (c.r[1].sd[0] >= c.r[18].sd[0]) trap(c, 0x006AEAE4u);
    c.budget -= 1;
L_006AEAE8:
    c.budget -= 1;
L_006AEAEC:
    c.budget -= 1;
L_006AEAF0:
    set32(c.r[2], c.r[1].w[0] + c.r[18].w[0]);
    c.budget -= 1;
L_006AEAF4:
    set32(c.r[2], c.r[18].w[0] << 18);
    c.budget -= 1;
L_006AEAF8:
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006AEAFC:
    c.r[2].d[0] = c.r[18].d[0] << 19;
    c.budget -= 1;
L_006AEB00:
    mmi::mult(c, 0, c.r[1].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_006AEB04:
    mmi::mult(c, 0, c.r[1].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_006AEB08:
    c.r[2].d[0] = c.r[18].d[0] << 21;
    c.budget -= 1;
L_006AEB0C:
    c.budget -= 1;
L_006AEB10:
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006AEB14:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; set32(c.r[2], c.r[1].w[0] + c.r[18].w[0]);  c.pc = t; if (t - 0x006AC000u < 16384u) { entry = entries_016B[(t - 0x006AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006AEB40:
    mmi::mult(c, 0, c.r[1].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 1;
L_006AEB44:
    mmi::mult(c, 0, c.r[1].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 1;
L_006AEB48:
    mmi::mult(c, 0, c.r[1].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 1;
L_006AEB4C:
    c.r[3].d[0] = c.sa;
    c.budget -= 1;
L_006AEB50:
    c.r[3].d[0] = c.r[18].d[0] << 13;
    c.budget -= 1;
L_006AEB54:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; c.r[3].d[0] = c.r[18].d[0] << 13;  c.pc = t; if (t - 0x006AC000u < 16384u) { entry = entries_016B[(t - 0x006AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006AEBF0:
    c.r[6].d[0] = c.sa;
    c.budget -= 1;
L_006AEBF4:
    if (c.r[1].sd[0] >= c.r[18].sd[0]) trap(c, 0x006AEBF4u);
    c.budget -= 1;
L_006AEBF8:
    c.r[6].d[0] = c.sa;
    c.budget -= 1;
L_006AEBFC:
    if (c.r[1].sd[0] >= c.r[18].sd[0]) trap(c, 0x006AEBFCu);
    c.budget -= 1;
L_006AEC00:
    if (c.r[1].sd[0] >= c.r[18].sd[0]) trap(c, 0x006AEC00u);
    c.budget -= 1;
L_006AEC04:
    if (c.r[1].sd[0] >= c.r[18].sd[0]) trap(c, 0x006AEC04u);
    c.budget -= 1;
L_006AEC08:
    if (c.r[1].sd[0] >= c.r[18].sd[0]) trap(c, 0x006AEC08u);
    c.budget -= 1;
L_006AEC0C:
    c.r[6].d[0] = c.sa;
    c.budget -= 1;
L_006AEC10:
    if (c.r[1].sd[0] >= c.r[18].sd[0]) trap(c, 0x006AEC10u);
    c.budget -= 1;
L_006AEC14:
    set32(c.r[6], c.r[1].w[0] + c.r[18].w[0]);
    c.budget -= 1;
L_006AEC18:
    if (c.r[1].sd[0] >= c.r[18].sd[0]) trap(c, 0x006AEC18u);
    c.budget -= 1;
L_006AEC1C:
    set32(c.r[6], c.r[1].w[0] + c.r[18].w[0]);
    c.budget -= 1;
L_006AEC20:
    set32(c.r[6], c.r[1].w[0] + c.r[18].w[0]);
    c.budget -= 1;
L_006AEC24:
    set32(c.r[6], c.r[1].w[0] + c.r[18].w[0]);
    c.budget -= 1;
L_006AEC28:
    c.r[6].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006AEC2C:
    if (c.r[1].sd[0] >= c.r[18].sd[0]) trap(c, 0x006AEC2Cu);
    c.budget -= 1;
L_006AEC30:
    mmi::mult(c, 0, c.r[1].w[0], c.r[18].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 1;
L_006AEC34:
    if (c.r[1].sd[0] >= c.r[18].sd[0]) trap(c, 0x006AEC34u);
    c.budget -= 1;
L_006AEC38:
    set32(c.r[6], c.r[1].w[0] + c.r[18].w[0]);
    c.budget -= 1;
L_006AEC3C:
    c.r[6].d[0] = c.r[18].d[0] << 11;
    c.budget -= 1;
L_006AEC40:
    set32(c.r[6], c.r[18].w[0] << 13);
    c.budget -= 1;
L_006AEC44:
    set32(c.r[6], c.r[18].w[0] << 14);
    c.budget -= 1;
L_006AEC48:
    c.budget -= 1;
L_006AEC4C:
    c.budget -= 1;
L_006AEC50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; c.r[6].d[0] = c.r[18].d[0] << 18;  c.pc = t; if (t - 0x006AC000u < 16384u) { entry = entries_016B[(t - 0x006AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006AEC70:
    if (c.r[1].sd[0] >= c.r[18].sd[0]) trap(c, 0x006AEC70u);
    c.budget -= 1;
L_006AEC74:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; c.r[6].d[0] = c.r[18].d[0] << 19;  c.pc = t; if (t - 0x006AC000u < 16384u) { entry = entries_016B[(t - 0x006AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006AEC90:
    c.r[7].d[0] = c.r[18].d[0] << 10;
    c.budget -= 1;
L_006AEC94:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; mmi::mult(c, 0, c.r[1].w[0], c.r[18].w[0]); c.r[7].d[0] = c.lo.d[0];  c.pc = t; if (t - 0x006AC000u < 16384u) { entry = entries_016B[(t - 0x006AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006AECB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; mmi::mult(c, 0, c.r[1].w[0], c.r[18].w[0]); c.r[8].d[0] = c.lo.d[0];  c.pc = t; if (t - 0x006AC000u < 16384u) { entry = entries_016B[(t - 0x006AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006AED30:
    set32(c.r[7], c.vu0.vi[9]);
    c.budget -= 2;
L_006AED38:
    c.pc = 0x006AED3Cu; syscall(c, 0x006AED38u); if (c.pc != 0x006AED3Cu) return;
    c.budget -= 1;
L_006AED3C:
    c.budget -= 1;
L_006AED40:
    c.budget -= 4;
L_006AED50:
    set32(c.r[9], c.r[18].w[0] << 20);
    c.budget -= 1;
L_006AED54:
    if (c.r[1].sd[0] >= c.r[18].sd[0]) trap(c, 0x006AED54u);
    c.budget -= 1;
L_006AED58:
    c.r[9].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006AED5C:
    c.r[9].d[0] = c.sa;
    c.budget -= 1;
L_006AED60:
    c.r[9].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006AED64:
    if (c.r[1].sd[0] >= c.r[18].sd[0]) trap(c, 0x006AED64u);
    c.budget -= 1;
L_006AED68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; set32(c.r[9], c.r[1].w[0] + c.r[18].w[0]);  c.pc = t; if (t - 0x006AC000u < 16384u) { entry = entries_016B[(t - 0x006AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006AED80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; if (c.r[1].sd[0] >= c.r[18].sd[0]) trap(c, 0x006AED84u);  c.pc = t; if (t - 0x006AC000u < 16384u) { entry = entries_016B[(t - 0x006AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006AEDB0:
    c.r[16].d[0] = c.r[1].d[0] & 12337ull;
    c.budget -= 4;
L_006AEDC0:
    c.r[12].d[0] = c.sa;
    c.budget -= 1;
L_006AEDC4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; set32(c.r[13], c.r[1].w[0] + c.r[18].w[0]);  c.pc = t; if (t - 0x006AC000u < 16384u) { entry = entries_016B[(t - 0x006AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006AEFA0:
    set32(c.r[25], c.r[1].w[0] + c.r[18].w[0]);
    c.budget -= 1;
L_006AEFA4:
    if (c.r[1].sd[0] >= c.r[18].sd[0]) trap(c, 0x006AEFA4u);
    c.budget -= 1;
L_006AEFA8:
    set32(c.r[25], c.r[18].w[0] << 10);
    c.budget -= 1;
L_006AEFAC:
    c.r[25].d[0] = c.r[18].d[0] << 10;
    c.budget -= 1;
L_006AEFB0:
    c.r[25].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006AEFB4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; mmi::mult(c, 0, c.r[1].w[0], c.r[18].w[0]); c.r[25].d[0] = c.lo.d[0];  c.pc = t; if (t - 0x006AC000u < 16384u) { entry = entries_016B[(t - 0x006AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006AF418:
    c.r[12].d[0] = c.r[20].d[0] + static_cast<std::uint64_t>(28050ll);
    st32((c.r[12].w[0] - 22398u), c.r[2].w[0]);
    set32(c.r[29], 0u >> 10);
    c.budget -= 4;
L_006AF428:
    c.budget -= 2;
L_006AF430:
    c.budget -= 4;
L_006AF440:
    c.budget -= 1;
L_006AF444:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0];  c.pc = t; if (t - 0x006AC000u < 16384u) { entry = entries_016B[(t - 0x006AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006AF4A0:
    c.r[9].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006AF4A4:
    c.r[9].d[0] = c.r[19].d[0] << 28;
    c.budget -= 1;
L_006AF4A8:
    c.r[9].d[0] = c.r[19].d[0] << 28;
    c.budget -= 1;
L_006AF4AC:
    c.r[9].d[0] = c.sa;
    c.budget -= 1;
L_006AF4B0:
    c.r[9].d[0] = c.sa;
    c.budget -= 1;
L_006AF4B4:
    c.r[9].d[0] = c.sa;
    c.budget -= 1;
L_006AF4B8:
    c.r[9].d[0] = c.sa;
    c.budget -= 1;
L_006AF4BC:
    c.r[9].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006AF4C0:
    set32(c.r[9], c.r[19].w[0] << 30);
    c.budget -= 1;
L_006AF4C4:
    set32(c.r[9], c.r[19].w[0] << 30);
    c.budget -= 1;
L_006AF4C8:
    mmi::mult(c, 0, c.r[1].w[0], c.r[19].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    c.budget -= 1;
L_006AF4CC:
    c.budget -= 1;
L_006AF4D0:
    c.r[14].d[0] = 0ull | 0ull;
    c.budget -= 1;
L_006AF4D4:
    c.budget -= 1;
L_006AF4D8:
    c.budget -= 1;
L_006AF4DC:
    c.budget -= 1;
L_006AF4E0:
    if (c.r[1].sd[0] >= c.r[19].sd[0]) trap(c, 0x006AF4E0u);
    c.budget -= 1;
L_006AF4E4:
    set32(c.r[10], c.r[19].w[0] << 18);
    c.budget -= 1;
L_006AF4E8:
    c.r[10].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006AF4EC:
    set32(c.r[10], c.r[19].w[0] << 19);
    c.budget -= 1;
L_006AF4F0:
    c.r[10].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006AF4F4:
    set32(c.r[10], c.r[1].w[0] + c.r[19].w[0]);
    c.budget -= 1;
L_006AF4F8:
    c.budget -= 1;
L_006AF4FC:
    c.budget -= 1;
L_006AF500:
    if (c.r[1].sd[0] >= c.r[19].sd[0]) trap(c, 0x006AF500u);
    c.budget -= 1;
L_006AF504:
    set32(c.r[10], c.r[19].w[0] << 21);
    c.budget -= 1;
L_006AF508:
    c.r[10].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006AF50C:
    set32(c.r[10], c.r[19].w[0] << 22);
    c.budget -= 1;
L_006AF510:
    c.r[10].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006AF514:
    set32(c.r[10], c.r[1].w[0] + c.r[19].w[0]);
    c.budget -= 1;
L_006AF518:
    c.budget -= 1;
L_006AF51C:
    c.budget -= 1;
L_006AF520:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; c.r[12].d[0] = c.r[19].d[0] << 4;  c.pc = t; if (t - 0x006AC000u < 16384u) { entry = entries_016B[(t - 0x006AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006AF660:
    mmi::psllh(c.r[13], c.r[16], 1u);
    c.sa = c.r[1].w[0] & 15u;
    c.budget -= 2;
L_006AF668:
    mmi::psllh(c.r[13], c.r[16], 1u);
    c.r[17].d[0] = c.r[1].d[0] & 15721ull;
    c.budget -= 4;
L_006AF678:
    c.budget -= 2;
L_006AF680:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; c.r[14].d[0] = c.r[19].d[0] << 1;  c.pc = t; if (t - 0x006AC000u < 16384u) { entry = entries_016B[(t - 0x006AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006AFB70:
    if (c.r[1].sd[0] >= c.r[19].sd[0]) trap(c, 0x006AFB70u);
    c.budget -= 1;
L_006AFB74:
    c.r[14].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006AFB78:
    c.r[14].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006AFB7C:
    mmi::mult(c, 0, c.r[1].w[0], c.r[19].w[0]);
    c.r[14].d[0] = c.lo.d[0];
    c.budget -= 1;
L_006AFB80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; c.r[14].d[0] = c.hi.d[0];  c.pc = t; if (t - 0x006AC000u < 16384u) { entry = entries_016B[(t - 0x006AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006AFD88:
    c.r[14].d[0] = 0ull | 0ull;
    c.budget -= 2;
L_006AFD90:
    set32(c.r[19], c.r[1].w[0] + c.r[19].w[0]);
    c.budget -= 1;
L_006AFD94:
    c.r[19].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006AFD98:
    c.r[19].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006AFD9C:
    set32(c.r[19], c.r[19].w[0] << 8);
    c.budget -= 1;
L_006AFDA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; mmi::mult(c, 0, c.r[1].w[0], c.r[19].w[0]); c.r[19].d[0] = c.lo.d[0];  c.pc = t; if (t - 0x006AC000u < 16384u) { entry = entries_016B[(t - 0x006AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_006AFDC0:
    set32(c.r[19], c.r[19].w[0] << 18);
    c.budget -= 1;
L_006AFDC4:
    mmi::mult(c, 0, c.r[1].w[0], c.r[19].w[0]);
    c.r[19].d[0] = c.lo.d[0];
    c.budget -= 1;
L_006AFDC8:
    c.r[19].d[0] = c.r[19].d[0] << 18;
    c.budget -= 1;
L_006AFDCC:
    c.r[19].d[0] = c.hi.d[0];
    c.budget -= 1;
L_006AFDD0:
    c.r[19].d[0] = c.sa;
    c.budget -= 1;
L_006AFDD4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[1].w[0]; c.r[13].d[0] = c.r[3].d[0] & 28530ull;  c.pc = t; if (t - 0x006AC000u < 16384u) { entry = entries_016B[(t - 0x006AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
}

}
