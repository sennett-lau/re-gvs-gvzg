#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0075[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 80, 0, 81,
    0, 82, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 96, 0, 97, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 105, 0, 0, 0, 106, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    118, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0,
    124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130,
    0, 131, 0, 132, 0, 133, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 139,
    0, 140, 0, 141, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 158,
    0, 159, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 165, 0, 0, 166, 0,
    0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0075(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002D4000;
    case 2u: goto L_002D4050;
    case 3u: goto L_002D4080;
    case 4u: goto L_002D40A0;
    case 5u: goto L_002D41A8;
    case 6u: goto L_002D4260;
    case 7u: goto L_002D4290;
    case 8u: goto L_002D42C0;
    case 9u: goto L_002D42D0;
    case 10u: goto L_002D42E0;
    case 11u: goto L_002D4330;
    case 12u: goto L_002D4340;
    case 13u: goto L_002D4388;
    case 14u: goto L_002D43A0;
    case 15u: goto L_002D4460;
    case 16u: goto L_002D44A8;
    case 17u: goto L_002D44B8;
    case 18u: goto L_002D44F8;
    case 19u: goto L_002D454C;
    case 20u: goto L_002D4560;
    case 21u: goto L_002D4568;
    case 22u: goto L_002D45CC;
    case 23u: goto L_002D45F0;
    case 24u: goto L_002D4618;
    case 25u: goto L_002D46E0;
    case 26u: goto L_002D4770;
    case 27u: goto L_002D4810;
    case 28u: goto L_002D48F0;
    case 29u: goto L_002D4958;
    case 30u: goto L_002D4A1C;
    case 31u: goto L_002D4A30;
    case 32u: goto L_002D4A50;
    case 33u: goto L_002D4B08;
    case 34u: goto L_002D4B50;
    case 35u: goto L_002D4C40;
    case 36u: goto L_002D4CA0;
    case 37u: goto L_002D4D24;
    case 38u: goto L_002D4DA0;
    case 39u: goto L_002D4E40;
    case 40u: goto L_002D4E68;
    case 41u: goto L_002D4EC0;
    case 42u: goto L_002D4FB4;
    case 43u: goto L_002D4FC0;
    case 44u: goto L_002D5100;
    case 45u: goto L_002D5198;
    case 46u: goto L_002D51B0;
    case 47u: goto L_002D5228;
    case 48u: goto L_002D5234;
    case 49u: goto L_002D5250;
    case 50u: goto L_002D5344;
    case 51u: goto L_002D5350;
    case 52u: goto L_002D54F0;
    case 53u: goto L_002D5590;
    case 54u: goto L_002D55F0;
    case 55u: goto L_002D5624;
    case 56u: goto L_002D56DC;
    case 57u: goto L_002D5708;
    case 58u: goto L_002D5730;
    case 59u: goto L_002D5750;
    case 60u: goto L_002D5778;
    case 61u: goto L_002D57B0;
    case 62u: goto L_002D5810;
    case 63u: goto L_002D58A0;
    case 64u: goto L_002D58B0;
    case 65u: goto L_002D58E8;
    case 66u: goto L_002D5960;
    case 67u: goto L_002D5A40;
    case 68u: goto L_002D5B30;
    case 69u: goto L_002D5D10;
    case 70u: goto L_002D6134;
    case 71u: goto L_002D6150;
    case 72u: goto L_002D61AC;
    case 73u: goto L_002D6250;
    case 74u: goto L_002D6388;
    case 75u: goto L_002D6520;
    case 76u: goto L_002D6530;
    case 77u: goto L_002D6540;
    case 78u: goto L_002D6564;
    case 79u: goto L_002D656C;
    case 80u: goto L_002D6574;
    case 81u: goto L_002D657C;
    case 82u: goto L_002D6584;
    case 83u: goto L_002D658C;
    case 84u: goto L_002D65A0;
    case 85u: goto L_002D6630;
    case 86u: goto L_002D6668;
    case 87u: goto L_002D66B0;
    case 88u: goto L_002D66C4;
    case 89u: goto L_002D66E0;
    case 90u: goto L_002D6730;
    case 91u: goto L_002D673C;
    case 92u: goto L_002D6748;
    case 93u: goto L_002D6760;
    case 94u: goto L_002D67A4;
    case 95u: goto L_002D67B4;
    case 96u: goto L_002D67BC;
    case 97u: goto L_002D67C4;
    case 98u: goto L_002D67CC;
    case 99u: goto L_002D67D8;
    case 100u: goto L_002D67F0;
    case 101u: goto L_002D6820;
    case 102u: goto L_002D68AC;
    case 103u: goto L_002D68D0;
    case 104u: goto L_002D68F0;
    case 105u: goto L_002D6988;
    case 106u: goto L_002D6998;
    case 107u: goto L_002D69A0;
    case 108u: goto L_002D69B0;
    case 109u: goto L_002D69E8;
    case 110u: goto L_002D6A90;
    case 111u: goto L_002D6AD0;
    case 112u: goto L_002D6B20;
    case 113u: goto L_002D6C60;
    case 114u: goto L_002D6DC0;
    case 115u: goto L_002D6FF0;
    case 116u: goto L_002D7110;
    case 117u: goto L_002D7250;
    case 118u: goto L_002D7480;
    case 119u: goto L_002D7490;
    case 120u: goto L_002D74A0;
    case 121u: goto L_002D74CC;
    case 122u: goto L_002D74D4;
    case 123u: goto L_002D74E0;
    case 124u: goto L_002D7500;
    case 125u: goto L_002D752C;
    case 126u: goto L_002D7534;
    case 127u: goto L_002D753C;
    case 128u: goto L_002D7548;
    case 129u: goto L_002D7560;
    case 130u: goto L_002D757C;
    case 131u: goto L_002D7584;
    case 132u: goto L_002D758C;
    case 133u: goto L_002D7594;
    case 134u: goto L_002D759C;
    case 135u: goto L_002D75A8;
    case 136u: goto L_002D75C0;
    case 137u: goto L_002D75EC;
    case 138u: goto L_002D75F4;
    case 139u: goto L_002D75FC;
    case 140u: goto L_002D7604;
    case 141u: goto L_002D760C;
    case 142u: goto L_002D7614;
    case 143u: goto L_002D7620;
    case 144u: goto L_002D7640;
    case 145u: goto L_002D7668;
    case 146u: goto L_002D7720;
    case 147u: goto L_002D7740;
    case 148u: goto L_002D7760;
    case 149u: goto L_002D77D0;
    case 150u: goto L_002D785C;
    case 151u: goto L_002D7948;
    case 152u: goto L_002D7AB8;
    case 153u: goto L_002D7C20;
    case 154u: goto L_002D7C30;
    case 155u: goto L_002D7C40;
    case 156u: goto L_002D7C6C;
    case 157u: goto L_002D7C74;
    case 158u: goto L_002D7C7C;
    case 159u: goto L_002D7C84;
    case 160u: goto L_002D7C8C;
    case 161u: goto L_002D7C98;
    case 162u: goto L_002D7CB0;
    case 163u: goto L_002D7CDC;
    case 164u: goto L_002D7CE4;
    case 165u: goto L_002D7CEC;
    case 166u: goto L_002D7CF8;
    case 167u: goto L_002D7D10;
    case 168u: goto L_002D7D30;
    case 169u: goto L_002D7DC0;
    case 170u: goto L_002D7EA0;
    case 171u: goto L_002D7F70;
    default: bad_entry(c, 0x002D4000u); return;
    }
L_002D4000:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8696u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D4018; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 8696u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002D4018:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8696u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D4050; } }
    st8((c.r[17].w[0] + 8698u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 515u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[4].w[0] + 154u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 154u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_002D4050; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002D4050:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D3CE0u | kUnwind; return; } [[clang::musttail]] return unit_0074(c, 364u, depth); } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002D4080:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_002D4250; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 27856u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
L_002D40A0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002D4180; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[4].d[0];  if (t) { goto L_002D4180; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_002D4180; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.r[1].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D4180; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8661u)));
    set32(c.r[7], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 326u)));
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_002D4100; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8687u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002D4100; } }
    st8((c.r[6].w[0] + 8698u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 2;
L_002D4100:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8698u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002D4180; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8661u)));
    set32(c.r[7], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[9], c.r[7].w[0] + c.r[8].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 151u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[9].w[0] + 151u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[8].d[0] = ld8((c.r[6].w[0] + 8657u));
    c.r[7].d[0] = ld8((c.r[9].w[0] + 153u));
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[9].w[0] + 153u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1970u)));
    c.budget -= 14;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[10], c.r[9].w[0] + 140u);  if (t) { goto L_002D4150; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 2u);  if (t) { goto L_002D4170; } }
    c.budget -= 1;
L_002D4150:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8687u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[7], 0u + 4u);  if (t) { goto L_002D4168; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D4170; } }
    c.budget -= 1;
L_002D4168:
    set32(c.r[7], 0u + 1u);
    c.budget -= 2;
L_002D4170:
    c.r[8].d[0] = c.r[7].d[0] & 255ull;
    c.r[7].d[0] = ld8((c.r[10].w[0] + 12u));
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[10].w[0] + 12u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 4;
L_002D4180:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[7].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D40A0u | kUnwind; return; } goto L_002D40A0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 140u);
    set32(c.r[8], 0u + 2u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 6;
L_002D41A8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 11u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002D4240; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[7], c.r[5].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 326u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[9].d[0]; set32(c.r[10], c.r[9].w[0] << (c.r[3].w[0] & 31u));  if (t) { goto L_002D4218; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[8].d[0];  if (t) { goto L_002D41E0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D41E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D4240; } }
L_002D41E0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 12u)));
    c.r[5].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002D4240; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 12u));
    c.r[5].d[0] = c.r[5].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D4240; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 23788u)));
    c.r[6].d[0] = c.r[10].d[0] & 255ull;
    c.r[5].d[0] = ld8((c.r[7].w[0] + 234u));
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 234u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_002D4240; } }
L_002D4218:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 12u));
    c.r[5].d[0] = c.r[5].d[0] & 7ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D4240; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 23788u)));
    c.r[6].d[0] = c.r[10].d[0] & 255ull;
    c.r[5].d[0] = ld8((c.r[7].w[0] + 234u));
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[7].w[0] + 234u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 15u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_002D4240:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[5].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D41A8u | kUnwind; return; } goto L_002D41A8; } }
L_002D4250:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D4260:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 49u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D4288; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 144u)));
    st16((c.r[4].w[0] + 140u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_002D4288:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D4290:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], c.r[4].w[0] << 4);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0] + 142u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D42C0u); st16((c.r[2].w[0] + 140u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_00AC(c, 35u, depth + 1u); else { c.pc = 0x003B0330u; return; } if (c.pc != 0x002D42C0u) [[unlikely]] return; }
L_002D42C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002D42D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D42D0u);  if (depth < kMaxDepth) unit_0075(c, 6u, depth + 1u); else { c.pc = 0x002D4260u; return; } if (c.pc != 0x002D42D0u) [[unlikely]] return; }
L_002D42D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D42E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 49u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D42F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D4328; } }
L_002D42F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 155u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002D4318; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D4328; } }
L_002D4318:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 140u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 144u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
L_002D4328:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D4330:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002D4340:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], c.r[4].w[0] << 4);
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 49u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + 140u);  if (t) { goto L_002D4380; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D45D8; } }
L_002D4380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4388u);  if (depth < kMaxDepth) unit_0075(c, 11u, depth + 1u); else { c.pc = 0x002D4330u; return; } if (c.pc != 0x002D4388u) [[unlikely]] return; }
L_002D4388:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D4398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D45D8; } }
L_002D4398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D43A0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_007A(c, 209u, depth + 1u); else { c.pc = 0x002EA680u; return; } if (c.pc != 0x002D43A0u) [[unlikely]] return; }
L_002D43A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D43B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D45D8; } }
L_002D43B0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 7u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);  if (t) { goto L_002D43E0; } }
    set32(c.r[2], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8926u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D43E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D45D8; } }
    c.budget -= 1;
L_002D43E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 326u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002D44C8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D44C8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D4410; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D4508; } }
L_002D4410:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[18].w[0] & 31u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 235u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] << 4);  if (t) { goto L_002D44B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x1B4E0000u);
    set32(c.r[3], c.r[17].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 33205ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4460u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 23u, depth + 1u); else { c.pc = 0x002D45F0u; return; } if (c.pc != 0x002D4460u) [[unlikely]] return; }
L_002D4460:
    set32(c.r[5], 0u - c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x1B4E0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    c.r[2].d[0] = c.r[2].d[0] | 33205ull;
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D44A8u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003C(c, 139u, depth + 1u); else { c.pc = 0x001F12E0u; return; } if (c.pc != 0x002D44A8u) [[unlikely]] return; }
L_002D44A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D45D8; } }
L_002D44B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D44B8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 10u, depth + 1u); else { c.pc = 0x002D42E0u; return; } if (c.pc != 0x002D44B8u) [[unlikely]] return; }
L_002D44B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D4510; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));  if (t) { goto L_002D45D8; } }
L_002D44C8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << (c.r[18].w[0] & 31u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 235u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D44F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D45D8; } }
    c.budget -= 1;
L_002D44F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D44F8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 10u, depth + 1u); else { c.pc = 0x002D42E0u; return; } if (c.pc != 0x002D44F8u) [[unlikely]] return; }
L_002D44F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D4510; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));  if (t) { goto L_002D45D8; } }
L_002D4508:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D45D8; } }
L_002D4510:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D4530; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002D4530:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_002D4540; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002D4540:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D454Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 10u, depth + 1u); else { c.pc = 0x002D42E0u; return; } if (c.pc != 0x002D454Cu) [[unlikely]] return; }
L_002D454C:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002D4560; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4560u); set32(c.r[5], 0u + 200u);  if (depth < kMaxDepth) unit_003C(c, 139u, depth + 1u); else { c.pc = 0x001F12E0u; return; } if (c.pc != 0x002D4560u) [[unlikely]] return; }
L_002D4560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4568u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 10u, depth + 1u); else { c.pc = 0x002D42E0u; return; } if (c.pc != 0x002D4568u) [[unlikely]] return; }
L_002D4568:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D45D0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[18].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D45D0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 41u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D45C0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 27341u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 11;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_002D45D0; } }
    c.budget -= 1;
L_002D45C0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D45CCu); set32(c.r[5], 0u + 149u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002D45CCu) [[unlikely]] return; }
L_002D45CC:
    c.budget -= 1;
L_002D45D0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 2;
L_002D45D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D45F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], c.r[4].w[0] << 4);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4618u); set32(c.r[16], c.r[2].w[0] + 140u);  if (depth < kMaxDepth) unit_00AC(c, 36u, depth + 1u); else { c.pc = 0x003B0340u; return; } if (c.pc != 0x002D4618u) [[unlikely]] return; }
L_002D4618:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D4628; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D46C8; } }
L_002D4628:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D4668; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 243u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D4668; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 235u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002D4668; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D46C8; } }
    c.budget -= 1;
L_002D4668:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { goto L_002D4688; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002D4688; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D46B0; } }
L_002D4688:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_002D46B0; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[4].w[0] - c.r[17].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D46B0; } }
    set32(c.r[17], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 2;
L_002D46B0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    c.budget -= 6;
L_002D46C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D46E0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8693u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002D46F8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D4768; } }
L_002D46F8:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 515u));
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 326u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002D4750; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D4740; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D4730; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D4760; } }
    c.budget -= 1;
L_002D4730:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FA00000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D4768; } }
L_002D4740:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FA00000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D4768; } }
L_002D4750:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D4768; } }
L_002D4760:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 2;
L_002D4768:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D4770:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D4790; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D48E0; } }
L_002D4790:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D47A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D48E0; } }
L_002D47A8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D47C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D48E0; } }
L_002D47C0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8693u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D47D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D48E0; } }
    c.budget -= 1;
L_002D47D8:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 515u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 326u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D4808; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D4808; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D48A0; } }
    c.budget -= 1;
L_002D4808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4810u); c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (depth < kMaxDepth) unit_0075(c, 10u, depth + 1u); else { c.pc = 0x002D42E0u; return; } if (c.pc != 0x002D4810u) [[unlikely]] return; }
L_002D4810:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_002D4820; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D48E0; } }
L_002D4820:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1624u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 13u);  if (t) { goto L_002D4838; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1624u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002D48E0; } }
L_002D4838:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 8698u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 120u);
    st16((c.r[16].w[0] + 8696u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 1624u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 515u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 12u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002D4870; } }
    st8((c.r[16].w[0] + 785u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002D4870:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 515u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] + 154u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 154u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D48A8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002D48A8; } }
L_002D48A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D48E0; } }
L_002D48A8:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 515u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] + 154u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 154u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D48D8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002D48D8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_002D48E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D48F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 49u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D4A20; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D4A20; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 515u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 326u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002D4A20; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[5].d[0] = ld8((c.r[5].w[0] + 235u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D4A20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4958u);  if (depth < kMaxDepth) unit_0075(c, 10u, depth + 1u); else { c.pc = 0x002D42E0u; return; } if (c.pc != 0x002D4958u) [[unlikely]] return; }
L_002D4958:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002D4A20; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 515u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D4988; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1970u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D4A20; } }
    c.budget -= 1;
L_002D4988:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1625u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 128u);
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st32((c.r[16].w[0] + 1088u), c.r[2].w[0]);
    set32(c.r[2], 0u + 8u);
    st8((c.r[16].w[0] + 777u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 45u);
    st16((c.r[16].w[0] + 8696u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 515u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8657u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 155u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 515u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 154u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 500u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 496u)));
    c.budget -= 26;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_002D49F8; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_002D49F8:
    st16((c.r[16].w[0] + 498u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 498u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D4A10; } }
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 498u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002D4A10:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4A1Cu); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_003C(c, 81u, depth + 1u); else { c.pc = 0x001F08F0u; return; } if (c.pc != 0x002D4A1Cu) [[unlikely]] return; }
L_002D4A1C:
    c.budget -= 1;
L_002D4A20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D4A30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 29312u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002D4000u < 16384u) { entry = entries_0075[(t - 0x002D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002D4A50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 592u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002D4B38; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D4B38; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D4B38; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002D4B38; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8657u)));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 860u));
    c.r[3].d[0] = ~(c.r[3].d[0] | 0ull);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D4B38; } }
    c.r[5].d[0] = ld16((c.r[4].w[0] + 564u));
    c.r[3].d[0] = c.r[5].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[5].d[0] & 16ull;  if (t) { goto L_002D4B38; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D4B38; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 600u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D4B38; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4B08u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0075(c, 41u, depth + 1u); else { c.pc = 0x002D4EC0u; return; } if (c.pc != 0x002D4B08u) [[unlikely]] return; }
L_002D4B08:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8688u)));
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[16].w[0] + 8688u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8690u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 8690u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 8692u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
L_002D4B38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D4B50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 592u)));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D4C88; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D4C88; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 515u));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 515u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D4C88; } }
    c.r[4].d[0] = ld16((c.r[17].w[0] + 564u));
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] & 16ull;  if (t) { goto L_002D4C88; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D4C88; } }
    c.f[1] = ld32((c.r[17].w[0] + 1188u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002D4C28; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1192u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D4C28; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1193u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] + 29296u);
    set32(c.r[5], c.r[4].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] << 1);
    st8((c.r[17].w[0] + 1193u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1193u)));
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    st8((c.r[17].w[0] + 1193u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 767u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1194u)));
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[5].w[0] + 10u);  if (t) { goto L_002D4C10; } }
    c.r[5].d[0] = c.r[3].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 2;
L_002D4C10:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[3], c.r[5].w[0] + 20u);  if (t) { goto L_002D4C28; } }
    c.r[5].d[0] = c.r[3].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 3;
L_002D4C28:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D4C70; } }
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4C40u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (depth < kMaxDepth) unit_0075(c, 41u, depth + 1u); else { c.pc = 0x002D4EC0u; return; } if (c.pc != 0x002D4C40u) [[unlikely]] return; }
L_002D4C40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8688u)));
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[16].w[0] + 8688u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8690u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st16((c.r[16].w[0] + 8690u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 8692u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
L_002D4C70:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    st8((c.r[17].w[0] + 1192u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[17].w[0] + 1188u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 767u)));
    st8((c.r[17].w[0] + 1194u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_002D4C88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D4CA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D4D88; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 1492u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D4D88; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D4D88; } }
    set32(c.r[16], ld32((c.r[4].w[0] + 592u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[5].d[0];  if (t) { goto L_002D4D88; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002D4D88; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D4D88; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 515u));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 515u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D4D88; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8656u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002D4D88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4D24u); set32(c.r[5], 0u + 40u);  if (depth < kMaxDepth) unit_0075(c, 41u, depth + 1u); else { c.pc = 0x002D4EC0u; return; } if (c.pc != 0x002D4D24u) [[unlikely]] return; }
L_002D4D24:
    c.r[6].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 754u));
    set32(c.r[4], c.r[4].w[0] + 29328u);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D4D58; } }
    set32(c.r[7], c.r[7].w[0] + 20u);
    c.budget -= 2;
L_002D4D58:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8688u)));
    c.r[6].d[0] = c.r[7].d[0] << 56;
    c.r[5].d[0] = c.r[7].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st8((c.r[16].w[0] + 8688u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8690u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st16((c.r[16].w[0] + 8690u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 8692u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 12;
L_002D4D88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D4DA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 584u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D4EB0; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 580u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_002D4EB0; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 515u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 515u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D4EB0; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 508u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D4EB0; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D4EB0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_002D4EB0; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D4EB0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D4EB0; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 1492u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002D4EB0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[16].d[0];  if (t) { goto L_002D4EB0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D4EB0; } }
    c.r[4].d[0] = ld16((c.r[5].w[0] + 556u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_002D4E40:
    c.r[3].d[0] = ld16((c.r[6].w[0] + 524u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D4EB0; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D4E40u | kUnwind; return; } goto L_002D4E40; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4E68u); set32(c.r[5], 0u + 40u);  if (depth < kMaxDepth) unit_0075(c, 41u, depth + 1u); else { c.pc = 0x002D4EC0u; return; } if (c.pc != 0x002D4E68u) [[unlikely]] return; }
L_002D4E68:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 564u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D4E80; } }
    set32(c.r[4], c.r[4].w[0] + 20u);
    c.budget -= 2;
L_002D4E80:
    c.r[6].d[0] = c.r[4].d[0] << 56;
    c.r[5].d[0] = c.r[4].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8688u)));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st8((c.r[16].w[0] + 8688u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8690u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st16((c.r[16].w[0] + 8690u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 8692u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 12;
L_002D4EB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D4EC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 49u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002D4EF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D50E0; } }
L_002D4EF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 8932u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D4F08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D50E0; } }
L_002D4F08:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002D4F20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D50E0; } }
L_002D4F20:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 496u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] > 0; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002D4F38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D50E0; } }
    c.budget -= 1;
L_002D4F38:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 498u)));
    set32(c.r[2], 0u + 32u);
    set32(c.r[3], c.r[3].w[0] << 5);
    mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D4F68; } }
    set32(c.r[5], 0u + 31u);
    c.budget -= 1;
L_002D4F68:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8663u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] + 20648u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 15;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));  if (t) { goto L_002D4FAC; } }
    set32(c.r[2], c.r[2].w[0] + 31u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_002D4FAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4FB4u); c.r[4].d[0] = ld8((c.r[17].w[0] + 515u));  if (depth < kMaxDepth) unit_0074(c, 335u, depth + 1u); else { c.pc = 0x002D37C0u; return; } if (c.pc != 0x002D4FB4u) [[unlikely]] return; }
L_002D4FB4:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 515u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D4FC0u); set32(c.r[18], c.r[2].w[0] << 5);  if (depth < kMaxDepth) unit_0074(c, 334u, depth + 1u); else { c.pc = 0x002D37A0u; return; } if (c.pc != 0x002D4FC0u) [[unlikely]] return; }
L_002D4FC0:
    mmi::div(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 32u);
    set32(c.r[5], c.r[2].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D4FE8; } }
    set32(c.r[5], 0u + 31u);
    c.budget -= 1;
L_002D4FE8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8663u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] + 22536u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 15;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));  if (t) { goto L_002D502C; } }
    set32(c.r[2], c.r[2].w[0] + 31u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_002D502C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 515u));
    set32(c.r[6], c.r[3].w[0] + 12u);
    set32(c.r[3], c.r[6].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[3].d[0] = c.r[4].d[0] ^ 1ull;  if (t) { goto L_002D50A0; } }
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D50A0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_002D5074; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 30052u)));  if (t) { goto L_002D5078; } }
L_002D5074:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 30051u)));
    c.budget -= 1;
L_002D5078:
    c.r[3].d[0] = c.r[2].d[0] & 31ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] + 22544u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));  if (t) { goto L_002D50A0; } }
    set32(c.r[2], c.r[2].w[0] + 31u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_002D50A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 8932u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_002D50E0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_002D50E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D5100:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 592u)));
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D5238; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8661u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8661u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D5238; } }
    set32(c.r[16], ld32((c.r[18].w[0] + 600u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002D5238; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 564u));
    c.r[3].d[0] = c.r[3].d[0] & 176ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D51B0; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[3].d[0] = c.r[2].d[0] | 34079ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 498u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_002D5190; } }
    set32(c.r[5], c.r[5].w[0] + 40u);
    c.budget -= 2;
L_002D5190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5198u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 49u, depth + 1u); else { c.pc = 0x002D5250u; return; } if (c.pc != 0x002D5198u) [[unlikely]] return; }
L_002D5198:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8693u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D51B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D51B0u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8661u)));  if (depth < kMaxDepth) unit_0075(c, 12u, depth + 1u); else { c.pc = 0x002D4340u; return; } if (c.pc != 0x002D51B0u) [[unlikely]] return; }
L_002D51B0:
    set32(c.r[3], ld32((c.r[18].w[0] + 584u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D5238; } }
    c.r[3].d[0] = ld16((c.r[3].w[0] + 560u));
    c.r[3].d[0] = c.r[3].d[0] & 448ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D5238; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 564u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D5238; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[3].d[0] = c.r[2].d[0] | 34079ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 498u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_002D5220; } }
    set32(c.r[5], c.r[5].w[0] + 10u);
    c.budget -= 2;
L_002D5220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5228u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 49u, depth + 1u); else { c.pc = 0x002D5250u; return; } if (c.pc != 0x002D5228u) [[unlikely]] return; }
L_002D5228:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8661u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5234u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 12u, depth + 1u); else { c.pc = 0x002D4340u; return; } if (c.pc != 0x002D5234u) [[unlikely]] return; }
L_002D5234:
    c.budget -= 1;
L_002D5238:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D5250:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 49u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002D5280; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D54D8; } }
L_002D5280:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 8932u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D5298; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D54D8; } }
L_002D5298:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 496u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] > 0; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002D52B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D54D8; } }
    c.budget -= 1;
L_002D52B0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002D52C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D54D8; } }
L_002D52C8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 498u)));
    set32(c.r[2], 0u + 32u);
    set32(c.r[3], c.r[3].w[0] << 5);
    mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D52F8; } }
    set32(c.r[5], 0u + 31u);
    c.budget -= 1;
L_002D52F8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8663u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] + 20648u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 15;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));  if (t) { goto L_002D533C; } }
    set32(c.r[2], c.r[2].w[0] + 31u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_002D533C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5344u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8661u)));  if (depth < kMaxDepth) unit_0074(c, 335u, depth + 1u); else { c.pc = 0x002D37C0u; return; } if (c.pc != 0x002D5344u) [[unlikely]] return; }
L_002D5344:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8661u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5350u); set32(c.r[18], c.r[2].w[0] << 5);  if (depth < kMaxDepth) unit_0074(c, 334u, depth + 1u); else { c.pc = 0x002D37A0u; return; } if (c.pc != 0x002D5350u) [[unlikely]] return; }
L_002D5350:
    mmi::div(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u + 32u);
    set32(c.r[7], c.r[2].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[7].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D5378; } }
    set32(c.r[7], 0u + 31u);
    c.budget -= 1;
L_002D5378:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8663u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] + 22536u);
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 15;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 5));  if (t) { goto L_002D53BC; } }
    set32(c.r[2], c.r[5].w[0] + 31u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_002D53BC:
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[9], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[9].d[0];  if (t) { goto L_002D5440; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[6], 0u + 1u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8661u)));
    set32(c.r[10], c.r[7].w[0] + 12u);
    set32(c.r[7], c.r[10].w[0] + c.r[8].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 8;
    { const bool t = c.r[7].d[0] != c.r[6].d[0]; c.r[6].d[0] = c.r[8].d[0] ^ 1ull;  if (t) { goto L_002D5440; } }
    set32(c.r[6], c.r[10].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[9].d[0];  if (t) { goto L_002D5440; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_002D5414; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 30052u)));  if (t) { goto L_002D5418; } }
L_002D5414:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 30051u)));
    c.budget -= 1;
L_002D5418:
    c.r[7].d[0] = c.r[6].d[0] & 31ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], c.r[6].w[0] + 22544u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 8;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 5));  if (t) { goto L_002D5440; } }
    set32(c.r[2], c.r[6].w[0] + 31u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_002D5440:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 8932u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[7].d[0] = c.r[7].d[0] | 34079ull;
    set32(c.r[6], 0u + 2u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[7].w[0], c.r[2].w[0]);
    set32(c.r[7], c.r[2].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != c.r[6].d[0]; set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);  if (t) { goto L_002D54C8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[1].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002D54C8; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8684u)));
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + 14688u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 14;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_002D54C4; } }
    set32(c.r[2], c.r[3].w[0] + 31u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_002D54C4:
    c.budget -= 1;
L_002D54C8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_002D54D8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_002D54D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D54F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D5510; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D5580; } }
    c.budget -= 1;
L_002D5510:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 243u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D5528; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D5580; } }
L_002D5528:
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 1982u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8661u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.r[6].d[0] = c.r[3].d[0] | 128ull;
    c.r[3].d[0] = ld8((c.r[5].w[0] + 235u));
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[5].w[0] + 235u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 8657u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 236u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[5].w[0] + 236u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8661u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 148u)));
    st16((c.r[4].w[0] + 146u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 22;
L_002D5580:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D5590:
    st8((c.r[4].w[0] + 1982u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 1u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8661u)));
    set32(c.r[3], 0u + 128u);
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[6], c.r[6].w[0] << (c.r[7].w[0] & 31u));
    c.r[6].d[0] = ~(c.r[6].d[0] | c.r[3].d[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 235u));
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    st8((c.r[5].w[0] + 235u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8657u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].d[0] = ~(c.r[3].d[0] | 0ull);
    c.r[6].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = ld8((c.r[5].w[0] + 236u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    st8((c.r[5].w[0] + 236u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8661u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[3].w[0] + 146u), static_cast<std::uint16_t>(0u));  c.pc = t; return; }
L_002D55F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 1u);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5624u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x002D5624u) [[unlikely]] return; }
L_002D5624:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D5708; } }
    set32(c.r[7], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], 0u + 18u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 13u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[2], c.r[16].w[0] << 1);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[16], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + 32578u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] + 22320u);
    set32(c.r[2], c.r[2].w[0] + 32579u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 28;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { goto L_002D56A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D56B8; } }
    c.budget -= 1;
L_002D56A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    set32(c.r[2], c.r[2].w[0] + 26464u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 168u), c.r[2].w[0]);  if (t) { goto L_002D56C8; } }
L_002D56B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    set32(c.r[2], c.r[2].w[0] + 26336u);
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 4;
L_002D56C8:
    st32((c.r[17].w[0] + 24u), c.r[19].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D56DCu); st32((c.r[17].w[0] + 28u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x002D56DCu) [[unlikely]] return; }
L_002D56DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] + 32576u);
    set32(c.r[2], c.r[2].w[0] + 32577u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 176u)));
    c.r[6].d[0] = ld8((c.r[3].w[0]));
    c.r[7].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5708u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x002D5708u) [[unlikely]] return; }
L_002D5708:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002D5730:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] + 32720u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002D4000u < 16384u) { entry = entries_0075[(t - 0x002D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002D5750:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5778u); st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0075(c, 84u, depth + 1u); else { c.pc = 0x002D65A0u; return; } if (c.pc != 0x002D5778u) [[unlikely]] return; }
L_002D5778:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] + 32580u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002D57B0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D57B0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 54u, depth + 1u); else { c.pc = 0x002D55F0u; return; } if (c.pc != 0x002D57B0u) [[unlikely]] return; }
L_002D57B0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[6], c.r[6].w[0] + 32581u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D5810; } }
    st16((c.r[16].w[0] + 562u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = 0ull | 58369ull;
    st16((c.r[16].w[0] + 566u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5810u); c.r[6].d[0] = c.r[2].d[0] & 127ull;  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x002D5810u) [[unlikely]] return; }
L_002D5810:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 41u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + 304u);  if (t) { goto L_002D5850; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] + 32632u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_002D5898; } }
    c.budget -= 1;
L_002D5850:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] + 32624u);
    set32(c.r[3], c.r[3].w[0] + 32628u);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 18;
L_002D5898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D58A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 64u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002D58A0u) [[unlikely]] return; }
L_002D58A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D58B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 32736u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D58E8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D58E8u) [[unlikely]] return; }
L_002D58E8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002D5920; } }
    st8((c.r[17].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 750u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D5920; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_002D5920; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002D5940; } }
    c.budget -= 1;
L_002D5920:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D5940; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002D5940; } }
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002D5940:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D5960:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[5].w[0] + 850u));
    st8((c.r[4].w[0] + 285u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[18].w[0] + 304u);  if (t) { goto L_002D59A0; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D59E8; } }
L_002D59A0:
    set32(c.r[2], ld32((c.r[17].w[0] + 344u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002D59C8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 1236u)));
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D59D8; } }
L_002D59C8:
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 516u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002D5A18; } }
L_002D59D8:
    st8((c.r[18].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 516u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002D5A18; } }
    c.budget -= 1;
L_002D59E8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 1236u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D5A10; } }
    st8((c.r[18].w[0] + 7u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 516u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002D5A18; } }
L_002D5A10:
    st8((c.r[18].w[0] + 7u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 516u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_002D5A18:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_002D5A40; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D5A40; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 850u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002D5A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D5A40u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 85u, depth + 1u); else { c.pc = 0x002D6630u; return; } if (c.pc != 0x002D5A40u) [[unlikely]] return; }
L_002D5A40:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_002D5E00; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002D5DB0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002D5C68; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002D5BD0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D5A80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D5E00; } }
    c.budget -= 1;
L_002D5A80:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 850u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_002D5E00; } }
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.f[3] = ld32((c.r[2].w[0] + 16u));
    c.f[2] = ld32((c.r[2].w[0] + 20u));
    c.f[1] = ld32((c.r[2].w[0] + 24u));
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    st32((c.r[18].w[0] + 48u), c.f[3]);
    st32((c.r[18].w[0] + 52u), c.f[2]);
    st32((c.r[18].w[0] + 56u), c.f[1]);
    st32((c.r[18].w[0] + 60u), c.f[0]);
    c.f[3] = ld32((c.r[18].w[0] + 48u));
    c.f[2] = ld32((c.r[18].w[0] + 52u));
    c.f[1] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    st32((c.r[18].w[0] + 32u), c.f[3]);
    st32((c.r[18].w[0] + 36u), c.f[2]);
    st32((c.r[18].w[0] + 40u), c.f[1]);
    st32((c.r[18].w[0] + 44u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    st32((c.r[18].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4u)));
    st32((c.r[18].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 6u)));
    st32((c.r[18].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 41u)));
    c.budget -= 39;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002D5BD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002D5E00; } }
L_002D5B30:
    set32(c.r[2], c.r[3].w[0] - c.r[4].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 32u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.f[3] = ld32((c.r[18].w[0] + 48u));
    c.f[2] = ld32((c.r[18].w[0] + 52u));
    c.f[1] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    st32((c.r[18].w[0] + 32u), c.f[3]);
    st32((c.r[18].w[0] + 36u), c.f[2]);
    st32((c.r[18].w[0] + 40u), c.f[1]);
    st32((c.r[18].w[0] + 44u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.f[3] = ld32((c.r[2].w[0] + 16u));
    c.f[2] = ld32((c.r[2].w[0] + 20u));
    c.f[1] = ld32((c.r[2].w[0] + 24u));
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    st32((c.r[18].w[0] + 48u), c.f[3]);
    st32((c.r[18].w[0] + 52u), c.f[2]);
    st32((c.r[18].w[0] + 56u), c.f[1]);
    st32((c.r[18].w[0] + 60u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 92u)));
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    st32((c.r[18].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4u)));
    st32((c.r[18].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 6u)));
    st32((c.r[18].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 40;
L_002D5BD0:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], 0u + 9999u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 32u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D5C10; } }
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D5B30u | kUnwind; return; } goto L_002D5B30; } }
    c.budget -= 1;
L_002D5C10:
    set32(c.r[2], 0u + 19u);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 740u));
    st32((c.r[16].w[0]), c.f[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 749u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D5E00; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.f[0] = 0u;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D5C60; } }
    c.f[0] = ld32((c.r[17].w[0] + 8252u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.f[0]);  if (t) { goto L_002D5C68; } }
    c.budget -= 1;
L_002D5C60:
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 2;
L_002D5C68:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 749u));
    set32(c.r[2], 0u + 20u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D5E00; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.f[3] = ld32((c.r[2].w[0] + 16u));
    c.f[2] = ld32((c.r[2].w[0] + 20u));
    c.f[1] = ld32((c.r[2].w[0] + 24u));
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    st32((c.r[18].w[0] + 48u), c.f[3]);
    st32((c.r[18].w[0] + 52u), c.f[2]);
    st32((c.r[18].w[0] + 56u), c.f[1]);
    st32((c.r[18].w[0] + 60u), c.f[0]);
    c.f[3] = ld32((c.r[18].w[0] + 48u));
    c.f[2] = ld32((c.r[18].w[0] + 52u));
    c.f[1] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    st32((c.r[18].w[0] + 32u), c.f[3]);
    st32((c.r[18].w[0] + 36u), c.f[2]);
    st32((c.r[18].w[0] + 40u), c.f[1]);
    st32((c.r[18].w[0] + 44u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    st32((c.r[18].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4u)));
    st32((c.r[18].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 6u)));
    st32((c.r[18].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 38;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_002D5DB0; } }
L_002D5D10:
    set32(c.r[2], c.r[3].w[0] - c.r[4].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 32u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.f[3] = ld32((c.r[18].w[0] + 48u));
    c.f[2] = ld32((c.r[18].w[0] + 52u));
    c.f[1] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    st32((c.r[18].w[0] + 32u), c.f[3]);
    st32((c.r[18].w[0] + 36u), c.f[2]);
    st32((c.r[18].w[0] + 40u), c.f[1]);
    st32((c.r[18].w[0] + 44u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.f[3] = ld32((c.r[2].w[0] + 16u));
    c.f[2] = ld32((c.r[2].w[0] + 20u));
    c.f[1] = ld32((c.r[2].w[0] + 24u));
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    st32((c.r[18].w[0] + 48u), c.f[3]);
    st32((c.r[18].w[0] + 52u), c.f[2]);
    st32((c.r[18].w[0] + 56u), c.f[1]);
    st32((c.r[18].w[0] + 60u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 92u)));
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    st32((c.r[18].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4u)));
    st32((c.r[18].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 6u)));
    st32((c.r[18].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 40;
L_002D5DB0:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], 0u + 9999u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 32u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D5DF0; } }
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D5D10u | kUnwind; return; } goto L_002D5D10; } }
    c.budget -= 1;
L_002D5DF0:
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 740u));
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 4;
L_002D5E00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D5E90; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002D5E50; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D5E30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D5FA0; } }
    c.budget -= 1;
L_002D5E30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8513u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_002D5FA0; } }
    set32(c.r[2], 0u + 12u);
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002D5E50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8513u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D5FA0; } }
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 32578u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002D5FA0; } }
    c.budget -= 1;
L_002D5E90:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D5F20; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002D5EE0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D5EC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D5FA0; } }
    c.budget -= 1;
L_002D5EC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8513u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_002D5FA0; } }
    set32(c.r[2], 0u + 9u);
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002D5EE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8513u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D5FA0; } }
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 32578u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002D5FA0; } }
    c.budget -= 1;
L_002D5F20:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002D5FA0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002D5F68; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D5F48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D5FA0; } }
L_002D5F48:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8512u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002D5FA0; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], 0u + 12u);
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_002D5F68:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8512u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002D5FA0; } }
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 32578u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
L_002D5FA0:
    c.f[1] = ld32((c.r[17].w[0] + 8252u));
    c.f[4] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[4]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D6128; } }
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[4]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D6128; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D60E8; } }
    fpu_div(c, 2u, c.f[0], c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 48u));
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 52u));
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 40u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 8292u));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 68;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.f[0]);  if (t) { goto L_002D6128; } }
    c.budget -= 1;
L_002D60E8:
    c.f[3] = ld32((c.r[18].w[0] + 48u));
    c.f[2] = ld32((c.r[18].w[0] + 52u));
    c.f[1] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    st32((c.r[18].w[0] + 32u), c.f[3]);
    st32((c.r[18].w[0] + 36u), c.f[2]);
    st32((c.r[18].w[0] + 40u), c.f[1]);
    st32((c.r[18].w[0] + 44u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 92u)));
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), c.f[4]);
    c.budget -= 16;
L_002D6128:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6134u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 77u, depth + 1u); else { c.pc = 0x002D6540u; return; } if (c.pc != 0x002D6134u) [[unlikely]] return; }
L_002D6134:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D6150:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[5].w[0] + 850u));
    st8((c.r[4].w[0] + 285u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 15;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[16], c.r[18].w[0] + 304u);  if (t) { goto L_002D61B0; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002D61B0; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 850u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D61B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D61ACu);  if (depth < kMaxDepth) unit_0075(c, 87u, depth + 1u); else { c.pc = 0x002D66B0u; return; } if (c.pc != 0x002D61ACu) [[unlikely]] return; }
L_002D61AC:
    c.budget -= 1;
L_002D61B0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_002D6420; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D63D0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002D6330; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002D6298; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D61F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D6420; } }
    c.budget -= 1;
L_002D61F0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 850u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_002D6420; } }
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0]), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    st32((c.r[18].w[0] + 92u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    st32((c.r[18].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 41u)));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D6298; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002D6420; } }
    c.budget -= 1;
L_002D6250:
    set32(c.r[3], c.r[4].w[0] - c.r[5].w[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 6u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 92u)));
    st32((c.r[18].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    st32((c.r[18].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 100u)));
    st32((c.r[18].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    st32((c.r[18].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 18;
L_002D6298:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], 0u + 9999u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 6u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D62D8; } }
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D6250u | kUnwind; return; } goto L_002D6250; } }
    c.budget -= 1;
L_002D62D8:
    set32(c.r[3], 0u + 19u);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 740u));
    st32((c.r[16].w[0]), c.f[0]);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 749u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D6420; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.f[0] = 0u;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D6328; } }
    c.f[0] = ld32((c.r[17].w[0] + 8252u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.f[0]);  if (t) { goto L_002D6330; } }
    c.budget -= 1;
L_002D6328:
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 2;
L_002D6330:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 749u));
    set32(c.r[3], 0u + 20u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D6420; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0]), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    st32((c.r[18].w[0] + 92u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    st32((c.r[18].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_002D63D0; } }
    c.budget -= 1;
L_002D6388:
    set32(c.r[3], c.r[4].w[0] - c.r[5].w[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 6u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 92u)));
    st32((c.r[18].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    st32((c.r[18].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 100u)));
    st32((c.r[18].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    st32((c.r[18].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 18;
L_002D63D0:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], 0u + 9999u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 6u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D6410; } }
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D6388u | kUnwind; return; } goto L_002D6388; } }
    c.budget -= 1;
L_002D6410:
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 740u));
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 4;
L_002D6420:
    c.f[2] = ld32((c.r[17].w[0] + 8252u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D6500; } }
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D6500; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D64E8; } }
    fpu_div(c, 1u, c.f[1], c.f[2]);
    set32(c.r[4], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[18].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[18].w[0] + 88u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 8292u));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 36;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.f[0]);  if (t) { goto L_002D6500; } }
    c.budget -= 1;
L_002D64E8:
    set32(c.r[3], ld32((c.r[18].w[0] + 92u)));
    st32((c.r[18].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 100u)));
    st32((c.r[18].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 6;
L_002D6500:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D6520:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002D6530:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_002D6540:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6564u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002D6564u) [[unlikely]] return; }
L_002D6564:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D656Cu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x002D656Cu) [[unlikely]] return; }
L_002D656C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6574u); set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002D6574u) [[unlikely]] return; }
L_002D6574:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D657Cu); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002D657Cu) [[unlikely]] return; }
L_002D657C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6584u); set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x002D6584u) [[unlikely]] return; }
L_002D6584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D658Cu); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002D658Cu) [[unlikely]] return; }
L_002D658C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D65A0:
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x008D0000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 188u)));
    set32(c.r[8], 0u + 21728u);
    set32(c.r[7], c.r[7].w[0] - 1360u);
    set32(c.r[3], 0u + 5u);
    set32(c.r[9], ld32((c.r[6].w[0] + 176u)));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 4u));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 4u)));
    set32(c.r[5], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    mmi::mult(c, 0, c.r[9].w[0], c.r[8].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 96u));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 100u));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 104u));
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 24;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002D6618; } }
    st32((c.r[4].w[0] + 84u), 0u);
    set32(c.r[3], 0u - 1274u);
    st32((c.r[4].w[0] + 80u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_002D6628; } }
    c.budget -= 1;
L_002D6618:
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    c.budget -= 4;
L_002D6628:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D6630:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 32578u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6668u); st32((c.r[4].w[0] + 312u), 0u);  if (depth < kMaxDepth) unit_0075(c, 84u, depth + 1u); else { c.pc = 0x002D65A0u; return; } if (c.pc != 0x002D6668u) [[unlikely]] return; }
L_002D6668:
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    st32((c.r[4].w[0] + 56u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    st32((c.r[4].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    st32((c.r[4].w[0] + 100u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D66B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D66C4u); st32((c.r[4].w[0] + 312u), 0u);  if (depth < kMaxDepth) unit_0075(c, 84u, depth + 1u); else { c.pc = 0x002D65A0u; return; } if (c.pc != 0x002D66C4u) [[unlikely]] return; }
L_002D66C4:
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    st32((c.r[4].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    st32((c.r[4].w[0] + 100u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D66E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 850u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D6730; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 285u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D6730; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 1236u)));
    set32(c.r[5], c.r[5].w[0] << (c.r[6].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002D6748; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6730u);  if (depth < kMaxDepth) unit_0075(c, 85u, depth + 1u); else { c.pc = 0x002D6630u; return; } if (c.pc != 0x002D6730u) [[unlikely]] return; }
L_002D6730:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D673Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 77u, depth + 1u); else { c.pc = 0x002D6540u; return; } if (c.pc != 0x002D673Cu) [[unlikely]] return; }
L_002D673C:
    set32(c.r[5], ld32((c.r[17].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6748u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 89u, depth + 1u); else { c.pc = 0x002A25C0u; return; } if (c.pc != 0x002D6748u) [[unlikely]] return; }
L_002D6748:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D6760:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 850u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D67A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 285u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D67A8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002D67D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D67A4u);  if (depth < kMaxDepth) unit_0075(c, 87u, depth + 1u); else { c.pc = 0x002D66B0u; return; } if (c.pc != 0x002D67A4u) [[unlikely]] return; }
L_002D67A4:
    c.budget -= 1;
L_002D67A8:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D67B4u); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002D67B4u) [[unlikely]] return; }
L_002D67B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D67BCu); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x002D67BCu) [[unlikely]] return; }
L_002D67BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D67C4u); set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002D67C4u) [[unlikely]] return; }
L_002D67C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D67CCu); set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x002D67CCu) [[unlikely]] return; }
L_002D67CC:
    set32(c.r[5], ld32((c.r[17].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D67D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 89u, depth + 1u); else { c.pc = 0x002A25C0u; return; } if (c.pc != 0x002D67D8u) [[unlikely]] return; }
L_002D67D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D67F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6820u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x002D6820u) [[unlikely]] return; }
L_002D6820:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D68B0; } }
    set32(c.r[2], 0u + 1u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 18u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 14u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[8], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - 32766u);
    set32(c.r[3], c.r[3].w[0] - 32764u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    c.r[7].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] + 26832u);
    set32(c.r[5], c.r[3].w[0] + c.r[8].w[0]);
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] - 32768u);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[2].w[0] + c.r[8].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 32767u);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    st32((c.r[4].w[0] + 168u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[18].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[17].w[0]);
    c.r[7].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[18].w[0] + 176u)));
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D68ACu); c.r[6].d[0] = ld8((c.r[3].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x002D68ACu) [[unlikely]] return; }
L_002D68AC:
    c.budget -= 1;
L_002D68B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002D68D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 32064u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002D4000u < 16384u) { entry = entries_0075[(t - 0x002D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002D68F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x008D0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[8], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 21728u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] - 1360u);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[3], ld32((c.r[3].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 188u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 4u));
    mmi::mult(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 96u));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 100u));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 104u));
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 31;
    { const bool t = c.r[3].d[0] == c.r[8].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002D6978; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002D6998; } }
L_002D6978:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6988u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0075(c, 100u, depth + 1u); else { c.pc = 0x002D67F0u; return; } if (c.pc != 0x002D6988u) [[unlikely]] return; }
L_002D6988:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D6998u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0075(c, 100u, depth + 1u); else { c.pc = 0x002D67F0u; return; } if (c.pc != 0x002D6998u) [[unlikely]] return; }
L_002D6998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D69A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 108u, depth + 1u); else { c.pc = 0x002D69B0u; return; } if (c.pc != 0x002D69A0u) [[unlikely]] return; }
L_002D69A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D69B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 32048u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002D69E8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002D69E8u) [[unlikely]] return; }
L_002D69E8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_002D6A00; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002D6A20; } }
L_002D6A00:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_002D6A50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002D6A70; } }
    c.budget -= 1;
L_002D6A20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D6A50; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 750u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D6A50; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D6A50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002D6A70; } }
L_002D6A50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D6A70; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002D6A70; } }
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002D6A70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D6A90:
    set32(c.r[3], ld32((c.r[5].w[0] + 1236u)));
    set32(c.r[6], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[5], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D6AB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_002D6AC0; } }
    c.budget -= 1;
L_002D6AB8:
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002D6AC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D6AD0:
    set32(c.r[6], ld32((c.r[5].w[0] + 1236u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D6B10; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D6B10; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8512u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002D6B10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002D6B18; } }
    c.budget -= 1;
L_002D6B10:
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002D6B18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D6B20:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    c.r[6].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + 304u);  if (t) { goto L_002D6B38; } }
    set32(c.r[6], 0u + 3u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 2;
L_002D6B38:
    set32(c.r[6], ld32((c.r[4].w[0] + 28u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 7u)));
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002D6B58; } }
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002D6B58:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[6], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; set32(c.r[8], 0u + 2u);  if (t) { goto L_002D6EC0; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[8].d[0]; set32(c.r[6], 0u + 1u);  if (t) { goto L_002D6E20; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_002D6CC0; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002D6B88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D6EC8; } }
L_002D6B88:
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(0u));
    st32((c.r[3].w[0] + 8u), 0u);
    c.f[0] = 0u;
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 821u)));
    set32(c.r[6], 0u + 36u);
    c.budget -= 7;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_002D6EC8; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[4].w[0] + 28u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 7u)));
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23780u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 42u)));
    c.budget -= 12;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002D6C00; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[8].d[0]; c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_002D6BF0; } }
    set32(c.r[6], c.r[6].w[0] - 32560u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), c.r[6].w[0]);  if (t) { goto L_002D6C28; } }
    c.budget -= 1;
L_002D6BF0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 32544u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), c.r[6].w[0]);  if (t) { goto L_002D6C28; } }
L_002D6C00:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[8].d[0]; c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_002D6C18; } }
    set32(c.r[6], c.r[6].w[0] - 32720u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), c.r[6].w[0]);  if (t) { goto L_002D6C28; } }
L_002D6C18:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 32640u);
    st32((c.r[3].w[0] + 12u), c.r[6].w[0]);
    c.budget -= 4;
L_002D6C28:
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    st32((c.r[4].w[0] + 92u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 80u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));
    st32((c.r[4].w[0] + 96u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 84u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 6u)));
    st32((c.r[4].w[0] + 100u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 88u), c.r[6].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), 0u);  if (t) { goto L_002D6CC0; } }
L_002D6C60:
    set32(c.r[6], c.r[7].w[0] - c.r[8].w[0]);
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[3].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 92u)));
    st32((c.r[4].w[0] + 80u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    st32((c.r[4].w[0] + 92u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 96u)));
    st32((c.r[4].w[0] + 84u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));
    st32((c.r[4].w[0] + 96u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 100u)));
    st32((c.r[4].w[0] + 88u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 6u)));
    st32((c.r[4].w[0] + 100u), c.r[6].w[0]);
    c.budget -= 24;
L_002D6CC0:
    set32(c.r[8], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[6], 0u + 9999u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_002D6D00; } }
    c.f[0] = ld32((c.r[3].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[1].d[0] = c.r[6].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D6C60u | kUnwind; return; } goto L_002D6C60; } }
    c.budget -= 1;
L_002D6D00:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.f[1] = ld32((c.r[3].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | 15360ull;
    c.f[0] = c.r[6].w[0];
    st32((c.r[3].w[0] + 4u), c.f[1]);
    c.f[2] = ld32((c.r[5].w[0] + 8252u));
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[3].w[0]), c.f[1]);  if (t) { goto L_002D6D38; } }
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 2;
L_002D6D38:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 821u)));
    set32(c.r[6], 0u + 36u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_002D6EC8; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[3].w[0] + 4u), 0u);
    st32((c.r[3].w[0]), 0u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 9;
    { const bool t = c.r[7].d[0] != c.r[6].d[0]; c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_002D6D78; } }
    set32(c.r[6], c.r[6].w[0] - 32672u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), c.r[6].w[0]);  if (t) { goto L_002D6D88; } }
L_002D6D78:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 32592u);
    st32((c.r[3].w[0] + 12u), c.r[6].w[0]);
    c.budget -= 4;
L_002D6D88:
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    st32((c.r[4].w[0] + 92u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 80u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));
    st32((c.r[4].w[0] + 96u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 84u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 6u)));
    st32((c.r[4].w[0] + 100u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 88u), c.r[6].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), 0u);  if (t) { goto L_002D6E20; } }
L_002D6DC0:
    set32(c.r[6], c.r[7].w[0] - c.r[8].w[0]);
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[3].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 92u)));
    st32((c.r[4].w[0] + 80u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    st32((c.r[4].w[0] + 92u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 96u)));
    st32((c.r[4].w[0] + 84u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));
    st32((c.r[4].w[0] + 96u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 100u)));
    st32((c.r[4].w[0] + 88u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 6u)));
    st32((c.r[4].w[0] + 100u), c.r[6].w[0]);
    c.budget -= 24;
L_002D6E20:
    set32(c.r[8], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[6], 0u + 9999u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_002D6E60; } }
    c.f[0] = ld32((c.r[3].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[1].d[0] = c.r[6].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D6DC0u | kUnwind; return; } goto L_002D6DC0; } }
    c.budget -= 1;
L_002D6E60:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.f[1] = ld32((c.r[3].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | 15360ull;
    c.f[0] = c.r[6].w[0];
    st32((c.r[3].w[0] + 4u), c.f[1]);
    c.f[2] = ld32((c.r[5].w[0] + 8252u));
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[3].w[0]), c.f[1]);  if (t) { goto L_002D6E98; } }
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 2;
L_002D6E98:
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D6EC8; } }
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002D6EC8; } }
    c.budget -= 1;
L_002D6EC0:
    st32((c.r[3].w[0] + 8u), 0u);
    c.budget -= 2;
L_002D6EC8:
    c.f[2] = ld32((c.r[5].w[0] + 8252u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D6FE8; } }
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D6FE8; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D6FC8; } }
    fpu_div(c, 1u, c.f[1], c.f[2]);
    set32(c.r[7], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[7], c.r[7].w[0] - c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] << 16);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 16));
    c.f[0] = c.r[7].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[4].w[0] + 80u), c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[7], c.r[7].w[0] - c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] << 16);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 16));
    c.f[0] = c.r[7].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[4].w[0] + 84u), c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 100u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[7], c.r[7].w[0] - c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] << 16);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 16));
    c.f[0] = c.r[7].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[4].w[0] + 88u), c.r[6].w[0]);
    c.f[1] = ld32((c.r[5].w[0] + 8292u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 50;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { goto L_002D6FE8; } }
    c.budget -= 1;
L_002D6FC8:
    set32(c.r[5], ld32((c.r[4].w[0] + 92u)));
    st32((c.r[4].w[0] + 80u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 96u)));
    st32((c.r[4].w[0] + 84u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 100u)));
    st32((c.r[4].w[0] + 88u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 8;
L_002D6FE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D6FF0:
    set32(c.r[7], ld32((c.r[5].w[0] + 1236u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 304u);  if (t) { goto L_002D7030; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 822u)));
    c.r[6].d[0] = c.r[6].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002D7030; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8512u)));
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0]; set32(c.r[6], 0u + 1u);  if (t) { goto L_002D7030; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_002D7038; } }
    c.budget -= 1;
L_002D7030:
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002D7038:
    set32(c.r[7], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[8], 0u + 1u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[8].d[0];  if (t) { goto L_002D7058; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[8].d[0];  if (t) { goto L_002D7060; } }
L_002D7058:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D7478; } }
L_002D7060:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002D7478; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[6], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; set32(c.r[6], 0u + 2u);  if (t) { goto L_002D7350; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_002D72B0; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[8].d[0];  if (t) { goto L_002D7170; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002D70A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D7358; } }
    c.budget -= 1;
L_002D70A0:
    st32((c.r[3].w[0] + 8u), 0u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 821u)));
    c.f[0] = 0u;
    set32(c.r[6], 0u + 36u);
    c.budget -= 6;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_002D7358; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 32528u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    st32((c.r[3].w[0]), c.f[0]);
    st32((c.r[3].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    st32((c.r[4].w[0] + 92u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 80u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));
    st32((c.r[4].w[0] + 96u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 84u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 6u)));
    st32((c.r[4].w[0] + 100u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 88u), c.r[6].w[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { goto L_002D7170; } }
L_002D7110:
    set32(c.r[6], c.r[7].w[0] - c.r[8].w[0]);
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[3].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 92u)));
    st32((c.r[4].w[0] + 80u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    st32((c.r[4].w[0] + 92u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 96u)));
    st32((c.r[4].w[0] + 84u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));
    st32((c.r[4].w[0] + 96u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 100u)));
    st32((c.r[4].w[0] + 88u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 6u)));
    st32((c.r[4].w[0] + 100u), c.r[6].w[0]);
    c.budget -= 24;
L_002D7170:
    set32(c.r[8], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[6], 0u + 9999u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_002D71B0; } }
    c.f[0] = ld32((c.r[3].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[1].d[0] = c.r[6].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D7110u | kUnwind; return; } goto L_002D7110; } }
    c.budget -= 1;
L_002D71B0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.f[1] = ld32((c.r[3].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | 15360ull;
    c.f[0] = c.r[6].w[0];
    st32((c.r[3].w[0] + 4u), c.f[1]);
    c.f[2] = ld32((c.r[5].w[0] + 8252u));
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[3].w[0]), c.f[1]);  if (t) { goto L_002D71E8; } }
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 2;
L_002D71E8:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 821u)));
    set32(c.r[6], 0u + 36u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_002D7358; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 32528u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[3].w[0] + 4u), 0u);
    st32((c.r[3].w[0]), 0u);
    st32((c.r[3].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    st32((c.r[4].w[0] + 92u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 80u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));
    st32((c.r[4].w[0] + 96u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 84u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 6u)));
    st32((c.r[4].w[0] + 100u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 88u), c.r[6].w[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), 0u);  if (t) { goto L_002D72B0; } }
L_002D7250:
    set32(c.r[6], c.r[7].w[0] - c.r[8].w[0]);
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[3].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 92u)));
    st32((c.r[4].w[0] + 80u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    st32((c.r[4].w[0] + 92u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 96u)));
    st32((c.r[4].w[0] + 84u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));
    st32((c.r[4].w[0] + 96u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 100u)));
    st32((c.r[4].w[0] + 88u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 6u)));
    st32((c.r[4].w[0] + 100u), c.r[6].w[0]);
    c.budget -= 24;
L_002D72B0:
    set32(c.r[8], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[6], 0u + 9999u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_002D72F0; } }
    c.f[0] = ld32((c.r[3].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[1].d[0] = c.r[6].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D7250u | kUnwind; return; } goto L_002D7250; } }
    c.budget -= 1;
L_002D72F0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.f[1] = ld32((c.r[3].w[0]));
    c.r[6].d[0] = c.r[6].d[0] | 15360ull;
    c.f[0] = c.r[6].w[0];
    st32((c.r[3].w[0] + 4u), c.f[1]);
    c.f[2] = ld32((c.r[5].w[0] + 8252u));
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[3].w[0]), c.f[1]);  if (t) { goto L_002D7328; } }
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 2;
L_002D7328:
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002D7358; } }
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002D7358; } }
    c.budget -= 1;
L_002D7350:
    st32((c.r[3].w[0] + 8u), 0u);
    c.budget -= 2;
L_002D7358:
    c.f[2] = ld32((c.r[5].w[0] + 8252u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D7478; } }
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D7478; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D7458; } }
    fpu_div(c, 1u, c.f[1], c.f[2]);
    set32(c.r[7], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[7], c.r[7].w[0] - c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] << 16);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 16));
    c.f[0] = c.r[7].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[4].w[0] + 80u), c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[7], c.r[7].w[0] - c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] << 16);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 16));
    c.f[0] = c.r[7].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[4].w[0] + 84u), c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 100u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[7], c.r[7].w[0] - c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] << 16);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 16));
    c.f[0] = c.r[7].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[4].w[0] + 88u), c.r[6].w[0]);
    c.f[1] = ld32((c.r[5].w[0] + 8292u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 50;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { goto L_002D7478; } }
    c.budget -= 1;
L_002D7458:
    set32(c.r[5], ld32((c.r[4].w[0] + 92u)));
    st32((c.r[4].w[0] + 80u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 96u)));
    st32((c.r[4].w[0] + 84u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 100u)));
    st32((c.r[4].w[0] + 88u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 8;
L_002D7478:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7480:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002D7490:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_002D74A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D74CCu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002D74CCu) [[unlikely]] return; }
L_002D74CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D74D4u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x002D74D4u) [[unlikely]] return; }
L_002D74D4:
    set32(c.r[5], ld32((c.r[17].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D74E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 89u, depth + 1u); else { c.pc = 0x002A25C0u; return; } if (c.pc != 0x002D74E0u) [[unlikely]] return; }
L_002D74E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D7500:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D752Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002D752Cu) [[unlikely]] return; }
L_002D752C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7534u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x002D7534u) [[unlikely]] return; }
L_002D7534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D753Cu); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002D753Cu) [[unlikely]] return; }
L_002D753C:
    set32(c.r[5], ld32((c.r[17].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7548u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 89u, depth + 1u); else { c.pc = 0x002A25C0u; return; } if (c.pc != 0x002D7548u) [[unlikely]] return; }
L_002D7548:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D7560:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D757Cu); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002D757Cu) [[unlikely]] return; }
L_002D757C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7584u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x002D7584u) [[unlikely]] return; }
L_002D7584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D758Cu); set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002D758Cu) [[unlikely]] return; }
L_002D758C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7594u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002D7594u) [[unlikely]] return; }
L_002D7594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D759Cu); set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x002D759Cu) [[unlikely]] return; }
L_002D759C:
    set32(c.r[5], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D75A8u); set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  if (depth < kMaxDepth) unit_0068(c, 89u, depth + 1u); else { c.pc = 0x002A25C0u; return; } if (c.pc != 0x002D75A8u) [[unlikely]] return; }
L_002D75A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002D75C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D75ECu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002D75ECu) [[unlikely]] return; }
L_002D75EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D75F4u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x002D75F4u) [[unlikely]] return; }
L_002D75F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D75FCu); set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002D75FCu) [[unlikely]] return; }
L_002D75FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7604u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002D7604u) [[unlikely]] return; }
L_002D7604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D760Cu); set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x002D760Cu) [[unlikely]] return; }
L_002D760C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7614u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002D7614u) [[unlikely]] return; }
L_002D7614:
    set32(c.r[5], ld32((c.r[17].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7620u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 89u, depth + 1u); else { c.pc = 0x002A25C0u; return; } if (c.pc != 0x002D7620u) [[unlikely]] return; }
L_002D7620:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D7640:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7668u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x002D7668u) [[unlikely]] return; }
L_002D7668:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002D7720; } }
    set32(c.r[2], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 18u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 15u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[5].w[0] - 21046u);
    set32(c.r[3], c.r[3].w[0] + 30528u);
    set32(c.r[2], c.r[2].w[0] - 21045u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = ld8((c.r[5].w[0]));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 25;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x002D0000u);  if (t) { goto L_002D76E0; } }
    set32(c.r[2], c.r[2].w[0] + 31808u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 168u), c.r[2].w[0]);  if (t) { goto L_002D76F0; } }
L_002D76E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    set32(c.r[2], c.r[2].w[0] + 31920u);
    st32((c.r[4].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 4;
L_002D76F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 21048u);
    st32((c.r[4].w[0] + 24u), c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = ld8((c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 21047u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7720u); set32(c.r[5], ld32((c.r[17].w[0] + 176u)));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x002D7720u) [[unlikely]] return; }
L_002D7720:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D7740:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 20976u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002D4000u < 16384u) { entry = entries_0075[(t - 0x002D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002D7760:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x008D0000u);
    set32(c.r[7], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[6], 0u + 21728u);
    set32(c.r[5], c.r[5].w[0] - 1360u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[7].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 188u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 4u));
    mmi::mult(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 96u));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 100u));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 104u));
    c.budget -= 26;
    { st32((c.r[4].w[0] + 40u), c.f[0]);  goto L_002D77D0; }
L_002D77D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 1236u)));
    set32(c.r[4], c.r[5].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D7810; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 7u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_002D7818; } }
    c.budget -= 1;
L_002D7810:
    st8((c.r[17].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002D7818:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D7848; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 750u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002D7848; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_002D7848; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002D7C08; } }
L_002D7848:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002D7868; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D785Cu);  if (depth < kMaxDepth) unit_0039(c, 176u, depth + 1u); else { c.pc = 0x001E6BB0u; return; } if (c.pc != 0x002D785Cu) [[unlikely]] return; }
L_002D785C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D7BE8; } }
    c.budget -= 1;
L_002D7868:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], c.r[17].w[0] + 304u);  if (t) { goto L_002D7B48; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_002D7A90; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_002D7A20; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_002D7920; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002D78A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D7B48; } }
L_002D78A8:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 850u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] + 1u);  if (t) { goto L_002D7B48; } }
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[3].w[0] + 4u), 0u);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 41u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D78E0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 20992u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), c.r[4].w[0]);  if (t) { goto L_002D78F0; } }
L_002D78E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 21024u);
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    c.budget -= 4;
L_002D78F0:
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    st32((c.r[17].w[0] + 92u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 8u), 0u);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 41u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[4], 0u + 4u);  if (t) { goto L_002D7920; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002D7B48; } }
    c.budget -= 1;
L_002D7920:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 850u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D7980; } }
    c.f[0] = 0u;
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 80u), 0u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { goto L_002D7B48; } }
L_002D7948:
    set32(c.r[4], c.r[5].w[0] - c.r[6].w[0]);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + 4u);
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    st32((c.r[17].w[0] + 80u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    st32((c.r[17].w[0] + 92u), c.r[4].w[0]);
    c.budget -= 14;
L_002D7980:
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], 0u + 9999u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_002D79C0; } }
    c.f[0] = ld32((c.r[3].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D7948u | kUnwind; return; } goto L_002D7948; } }
    c.budget -= 1;
L_002D79C0:
    set32(c.r[4], 0u + 19u);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8292u));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 749u));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_002D7B48; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.f[0] = 0u;
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D7A18; } }
    c.f[0] = ld32((c.r[16].w[0] + 8252u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { goto L_002D7A20; } }
    c.budget -= 1;
L_002D7A18:
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 2;
L_002D7A20:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 850u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D7A48; } }
    c.f[0] = 0u;
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 80u), 0u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { goto L_002D7B48; } }
L_002D7A48:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 749u));
    set32(c.r[4], 0u + 20u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_002D7B48; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 21008u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[3].w[0] + 4u), 0u);
    st32((c.r[3].w[0]), 0u);
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    st32((c.r[17].w[0] + 92u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 8u), 0u);
    c.budget -= 14;
L_002D7A90:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 850u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002D7AF0; } }
    c.f[0] = 0u;
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 80u), 0u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { goto L_002D7B48; } }
L_002D7AB8:
    set32(c.r[4], c.r[5].w[0] - c.r[6].w[0]);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + 4u);
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    st32((c.r[17].w[0] + 80u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    st32((c.r[17].w[0] + 92u), c.r[4].w[0]);
    c.budget -= 14;
L_002D7AF0:
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], 0u + 9999u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_002D7B30; } }
    c.f[0] = ld32((c.r[3].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002D7AB8u | kUnwind; return; } goto L_002D7AB8; } }
    c.budget -= 1;
L_002D7B30:
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8292u));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 6;
L_002D7B48:
    c.f[2] = ld32((c.r[16].w[0] + 8252u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D7BE8; } }
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D7BE8; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002D7BD8; } }
    fpu_div(c, 0u, c.f[1], c.f[2]);
    set32(c.r[5], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[5], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] << 16);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[4].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8292u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { goto L_002D7BE8; } }
    c.budget -= 1;
L_002D7BD8:
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    st32((c.r[17].w[0] + 80u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 4;
L_002D7BE8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002D7C08; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002D7C08; } }
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002D7C08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D7C20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002D7C30:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_002D7C40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7C6Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002D7C6Cu) [[unlikely]] return; }
L_002D7C6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7C74u); set32(c.r[4], c.r[16].w[0] + 928u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x002D7C74u) [[unlikely]] return; }
L_002D7C74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7C7Cu); set32(c.r[4], ld32((c.r[16].w[0] + 916u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002D7C7Cu) [[unlikely]] return; }
L_002D7C7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7C84u); set32(c.r[4], ld32((c.r[16].w[0] + 912u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002D7C84u) [[unlikely]] return; }
L_002D7C84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7C8Cu); set32(c.r[4], ld32((c.r[16].w[0] + 908u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x002D7C8Cu) [[unlikely]] return; }
L_002D7C8C:
    set32(c.r[5], ld32((c.r[17].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7C98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 89u, depth + 1u); else { c.pc = 0x002A25C0u; return; } if (c.pc != 0x002D7C98u) [[unlikely]] return; }
L_002D7C98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D7CB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7CDCu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002D7CDCu) [[unlikely]] return; }
L_002D7CDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7CE4u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x002D7CE4u) [[unlikely]] return; }
L_002D7CE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7CECu); set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x002D7CECu) [[unlikely]] return; }
L_002D7CEC:
    set32(c.r[5], ld32((c.r[17].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7CF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 89u, depth + 1u); else { c.pc = 0x002A25C0u; return; } if (c.pc != 0x002D7CF8u) [[unlikely]] return; }
L_002D7CF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002D7D10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C10000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 30448u);
    st32((c.r[28].w[0] - 23280u), c.r[2].w[0]);
    set32(c.r[2], 0u + 256u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002D7D30u); st32((c.r[28].w[0] - 23284u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 182u, depth + 1u); else { c.pc = 0x002253C0u; return; } if (c.pc != 0x002D7D30u) [[unlikely]] return; }
L_002D7D30:
    set32(c.r[3], c.r[2].w[0] << 3);
    st32((c.r[28].w[0] - 23260u), 0u);
    set32(c.r[4], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[28].w[0] - 23268u), 0u);
    set32(c.r[3], c.r[4].w[0] << 2);
    st32((c.r[28].w[0] - 23276u), 0u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[5], c.r[3].w[0] << 12);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BE0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[4], c.r[4].w[0] - 5872u);
    set32(c.r[3], c.r[3].w[0] - 28720u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[28].w[0] - 23292u), c.r[3].w[0]);
    set32(c.r[3], 0u + 48u);
    st32((c.r[28].w[0] - 23288u), c.r[4].w[0]);
    st32((c.r[28].w[0] - 23296u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[3], c.r[3].w[0] - 29872u);
    st32((c.r[28].w[0] - 23300u), c.r[3].w[0]);
    set32(c.r[3], 0u + 96u);
    st32((c.r[28].w[0] - 23304u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], c.r[3].w[0] + 5520u);
    st32((c.r[28].w[0] - 23256u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], c.r[3].w[0] + 3920u);
    st32((c.r[28].w[0] - 23264u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], c.r[3].w[0] + 2320u);
    st32((c.r[28].w[0] - 23272u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 34;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002D7DC0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23284u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_002D7DD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D7E98; } }
    c.budget -= 1;
L_002D7DD8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[28].w[0] - 23284u), c.r[2].w[0]);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23280u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 23288u)));
    set32(c.r[6], c.r[2].w[0] + 384u);
    st32((c.r[28].w[0] - 23280u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23288u)));
    set32(c.r[5], c.r[5].w[0] + 336u);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st32((c.r[28].w[0] - 23288u), c.r[5].w[0]);  if (t) { goto L_002D7E78; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D7E50; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D7E28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D7E98; } }
    c.budget -= 1;
L_002D7E28:
    set32(c.r[3], ld32((c.r[28].w[0] - 23256u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23256u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23260u)));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[28].w[0] - 23256u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 23260u), c.r[3].w[0]);  if (t) { goto L_002D7E98; } }
    c.budget -= 1;
L_002D7E50:
    set32(c.r[3], ld32((c.r[28].w[0] - 23264u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23264u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23268u)));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[28].w[0] - 23264u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 23268u), c.r[3].w[0]);  if (t) { goto L_002D7E98; } }
    c.budget -= 1;
L_002D7E78:
    set32(c.r[3], ld32((c.r[28].w[0] - 23272u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23272u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23276u)));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[28].w[0] - 23272u), c.r[4].w[0]);
    st32((c.r[28].w[0] - 23276u), c.r[3].w[0]);
    c.budget -= 8;
L_002D7E98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7EA0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23296u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_002D7EB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002D7F60; } }
    c.budget -= 1;
L_002D7EB8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[28].w[0] - 23296u), c.r[2].w[0]);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23292u)));
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st32((c.r[28].w[0] - 23292u), c.r[5].w[0]);  if (t) { goto L_002D7F40; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D7F18; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D7EF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002D7F60; } }
L_002D7EF0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23256u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23256u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23260u)));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[28].w[0] - 23256u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 23260u), c.r[3].w[0]);  if (t) { goto L_002D7F60; } }
    c.budget -= 1;
L_002D7F18:
    set32(c.r[3], ld32((c.r[28].w[0] - 23264u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23264u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23268u)));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[28].w[0] - 23264u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 23268u), c.r[3].w[0]);  if (t) { goto L_002D7F60; } }
    c.budget -= 1;
L_002D7F40:
    set32(c.r[3], ld32((c.r[28].w[0] - 23272u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23272u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23276u)));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[28].w[0] - 23272u), c.r[4].w[0]);
    st32((c.r[28].w[0] - 23276u), c.r[3].w[0]);
    c.budget -= 8;
L_002D7F60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002D7F70:
    set32(c.r[2], ld32((c.r[28].w[0] - 23304u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_002D7F88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0076(c, 3u, depth); } }
    c.budget -= 1;
L_002D7F88:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[28].w[0] - 23304u), c.r[2].w[0]);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23300u)));
    set32(c.r[5], c.r[2].w[0] + 12u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st32((c.r[28].w[0] - 23300u), c.r[5].w[0]);  if (t) { [[clang::musttail]] return unit_0076(c, 2u, depth); } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002D7FE8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002D7FC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0076(c, 3u, depth); } }
L_002D7FC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23256u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23256u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23260u)));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[28].w[0] - 23256u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 23260u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_0076(c, 3u, depth); } }
    c.budget -= 1;
L_002D7FE8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23264u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23264u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23268u)));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    [[clang::musttail]] return unit_0076(c, 1u, depth);
}

}
