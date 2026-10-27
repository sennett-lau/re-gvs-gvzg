#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_004F[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0,
    0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 44, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0,
    57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0,
    0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0,
    62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0,
    90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109,
    0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0,
    0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0,
    138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0,
    147, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0,
    0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0,
    0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0,
    172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0,
    0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 188, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0,
    192, 0, 0, 193, 0, 194, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0,
    201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 204, 205, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0,
};

void unit_004F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0023C000;
    case 2u: goto L_0023C008;
    case 3u: goto L_0023C038;
    case 4u: goto L_0023C050;
    case 5u: goto L_0023C0D0;
    case 6u: goto L_0023C0F0;
    case 7u: goto L_0023C154;
    case 8u: goto L_0023C164;
    case 9u: goto L_0023C190;
    case 10u: goto L_0023C1C0;
    case 11u: goto L_0023C1C8;
    case 12u: goto L_0023C298;
    case 13u: goto L_0023C2A8;
    case 14u: goto L_0023C2B8;
    case 15u: goto L_0023C30C;
    case 16u: goto L_0023C324;
    case 17u: goto L_0023C33C;
    case 18u: goto L_0023C3A0;
    case 19u: goto L_0023C3F8;
    case 20u: goto L_0023C428;
    case 21u: goto L_0023C448;
    case 22u: goto L_0023C468;
    case 23u: goto L_0023C494;
    case 24u: goto L_0023C4B4;
    case 25u: goto L_0023C588;
    case 26u: goto L_0023C5A8;
    case 27u: goto L_0023C604;
    case 28u: goto L_0023C650;
    case 29u: goto L_0023C678;
    case 30u: goto L_0023C68C;
    case 31u: goto L_0023C6E0;
    case 32u: goto L_0023C738;
    case 33u: goto L_0023C870;
    case 34u: goto L_0023C880;
    case 35u: goto L_0023C920;
    case 36u: goto L_0023C930;
    case 37u: goto L_0023C9C0;
    case 38u: goto L_0023C9D4;
    case 39u: goto L_0023CA0C;
    case 40u: goto L_0023CB40;
    case 41u: goto L_0023CB80;
    case 42u: goto L_0023CBAC;
    case 43u: goto L_0023CBBC;
    case 44u: goto L_0023CBC4;
    case 45u: goto L_0023CBCC;
    case 46u: goto L_0023CBD8;
    case 47u: goto L_0023CC20;
    case 48u: goto L_0023CC90;
    case 49u: goto L_0023CD10;
    case 50u: goto L_0023CD68;
    case 51u: goto L_0023CE00;
    case 52u: goto L_0023CE40;
    case 53u: goto L_0023CE70;
    case 54u: goto L_0023CEB8;
    case 55u: goto L_0023CF44;
    case 56u: goto L_0023CF64;
    case 57u: goto L_0023CF80;
    case 58u: goto L_0023D068;
    case 59u: goto L_0023D084;
    case 60u: goto L_0023D09C;
    case 61u: goto L_0023D0F0;
    case 62u: goto L_0023D100;
    case 63u: goto L_0023D110;
    case 64u: goto L_0023D130;
    case 65u: goto L_0023D194;
    case 66u: goto L_0023D1B0;
    case 67u: goto L_0023D1C0;
    case 68u: goto L_0023D1E0;
    case 69u: goto L_0023D220;
    case 70u: goto L_0023D240;
    case 71u: goto L_0023D260;
    case 72u: goto L_0023D270;
    case 73u: goto L_0023D310;
    case 74u: goto L_0023D334;
    case 75u: goto L_0023D340;
    case 76u: goto L_0023D364;
    case 77u: goto L_0023D3D8;
    case 78u: goto L_0023D3E8;
    case 79u: goto L_0023D468;
    case 80u: goto L_0023D588;
    case 81u: goto L_0023D5A0;
    case 82u: goto L_0023D5E8;
    case 83u: goto L_0023D6E0;
    case 84u: goto L_0023D730;
    case 85u: goto L_0023D778;
    case 86u: goto L_0023D7E0;
    case 87u: goto L_0023D838;
    case 88u: goto L_0023D848;
    case 89u: goto L_0023D86C;
    case 90u: goto L_0023D880;
    case 91u: goto L_0023D894;
    case 92u: goto L_0023D8E8;
    case 93u: goto L_0023D920;
    case 94u: goto L_0023D94C;
    case 95u: goto L_0023D960;
    case 96u: goto L_0023D974;
    case 97u: goto L_0023D99C;
    case 98u: goto L_0023D9C0;
    case 99u: goto L_0023DA00;
    case 100u: goto L_0023DA40;
    case 101u: goto L_0023DA60;
    case 102u: goto L_0023DD54;
    case 103u: goto L_0023DDA8;
    case 104u: goto L_0023DEB0;
    case 105u: goto L_0023DF50;
    case 106u: goto L_0023DF88;
    case 107u: goto L_0023DF9C;
    case 108u: goto L_0023DFDC;
    case 109u: goto L_0023DFFC;
    case 110u: goto L_0023E020;
    case 111u: goto L_0023E07C;
    case 112u: goto L_0023E100;
    case 113u: goto L_0023E118;
    case 114u: goto L_0023E180;
    case 115u: goto L_0023E198;
    case 116u: goto L_0023E200;
    case 117u: goto L_0023E2A8;
    case 118u: goto L_0023E2BC;
    case 119u: goto L_0023E2CC;
    case 120u: goto L_0023E338;
    case 121u: goto L_0023E3AC;
    case 122u: goto L_0023E4FC;
    case 123u: goto L_0023EE70;
    case 124u: goto L_0023EFE4;
    case 125u: goto L_0023F114;
    case 126u: goto L_0023F144;
    case 127u: goto L_0023F170;
    case 128u: goto L_0023F188;
    case 129u: goto L_0023F190;
    case 130u: goto L_0023F1DC;
    case 131u: goto L_0023F210;
    case 132u: goto L_0023F2B8;
    case 133u: goto L_0023F2CC;
    case 134u: goto L_0023F2DC;
    case 135u: goto L_0023F348;
    case 136u: goto L_0023F3BC;
    case 137u: goto L_0023F5E4;
    case 138u: goto L_0023F600;
    case 139u: goto L_0023F7B4;
    case 140u: goto L_0023F7E4;
    case 141u: goto L_0023F810;
    case 142u: goto L_0023F828;
    case 143u: goto L_0023F830;
    case 144u: goto L_0023F87C;
    case 145u: goto L_0023F8B0;
    case 146u: goto L_0023F8F0;
    case 147u: goto L_0023F900;
    case 148u: goto L_0023F910;
    case 149u: goto L_0023F920;
    case 150u: goto L_0023F970;
    case 151u: goto L_0023F9C0;
    case 152u: goto L_0023FA10;
    case 153u: goto L_0023FA24;
    case 154u: goto L_0023FA38;
    case 155u: goto L_0023FA40;
    case 156u: goto L_0023FA5C;
    case 157u: goto L_0023FA7C;
    case 158u: goto L_0023FAB4;
    case 159u: goto L_0023FAE4;
    case 160u: goto L_0023FB04;
    case 161u: goto L_0023FB24;
    case 162u: goto L_0023FB2C;
    case 163u: goto L_0023FB8C;
    case 164u: goto L_0023FBB4;
    case 165u: goto L_0023FBE0;
    case 166u: goto L_0023FBF0;
    case 167u: goto L_0023FC0C;
    case 168u: goto L_0023FC1C;
    case 169u: goto L_0023FC28;
    case 170u: goto L_0023FC44;
    case 171u: goto L_0023FC60;
    case 172u: goto L_0023FC80;
    case 173u: goto L_0023FD00;
    case 174u: goto L_0023FD20;
    case 175u: goto L_0023FD28;
    case 176u: goto L_0023FD44;
    case 177u: goto L_0023FD80;
    case 178u: goto L_0023FDD0;
    case 179u: goto L_0023FDF0;
    case 180u: goto L_0023FE10;
    case 181u: goto L_0023FE20;
    case 182u: goto L_0023FE34;
    case 183u: goto L_0023FE50;
    case 184u: goto L_0023FE90;
    case 185u: goto L_0023FEA4;
    case 186u: goto L_0023FEB0;
    case 187u: goto L_0023FEBC;
    case 188u: goto L_0023FEC4;
    case 189u: goto L_0023FED0;
    case 190u: goto L_0023FEE0;
    case 191u: goto L_0023FEF4;
    case 192u: goto L_0023FF00;
    case 193u: goto L_0023FF0C;
    case 194u: goto L_0023FF14;
    case 195u: goto L_0023FF20;
    case 196u: goto L_0023FF30;
    case 197u: goto L_0023FF44;
    case 198u: goto L_0023FF50;
    case 199u: goto L_0023FF5C;
    case 200u: goto L_0023FF64;
    case 201u: goto L_0023FF80;
    case 202u: goto L_0023FFB0;
    case 203u: goto L_0023FFC0;
    case 204u: goto L_0023FFD0;
    case 205u: goto L_0023FFD4;
    case 206u: goto L_0023FFE0;
    case 207u: goto L_0023FFEC;
    default: bad_entry(c, 0x0023C000u); return;
    }
L_0023C000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C008u); set32(c.r[4], ld32((c.r[6].w[0] + 4u)));  if (depth < kMaxDepth) unit_004E(c, 63u, depth + 1u); else { c.pc = 0x002389A0u; return; } if (c.pc != 0x0023C008u) [[unlikely]] return; }
L_0023C008:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].d[0] = c.r[4].d[0] & 31ull;  if (t) { goto L_0023C024; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023C024; } }
    set32(c.r[3], c.r[3].w[0] - 32u);
    c.budget -= 1;
L_0023C024:
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023BFA0u | kUnwind; return; } [[clang::musttail]] return unit_004E(c, 237u, depth); } }
L_0023C038:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0023C050:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 11104u)));
    set32(c.r[9], c.r[9].w[0] + 11104u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; c.r[8].d[0] = c.r[3].d[0] & 31ull;  if (t) { goto L_0023C078; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0023C078; } }
    set32(c.r[8], c.r[8].w[0] - 32u);
    c.budget -= 1;
L_0023C078:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 11108u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[3].d[0];  if (t) { goto L_0023C0C8; } }
    set32(c.r[3], ld32((c.r[9].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[9].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 40u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 44u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 48u), c.r[6].w[0]);
    st32((c.r[3].w[0] + 52u), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[9].w[0])));
    set32(c.r[4], c.r[3].w[0] + 1u);
    c.budget -= 11;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].d[0] = c.r[4].d[0] & 31ull;  if (t) { goto L_0023C0C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023C0C0; } }
    set32(c.r[3], c.r[3].w[0] - 32u);
    c.budget -= 1;
L_0023C0C0:
    st32((c.r[9].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_0023C0C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0023C0D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], c.r[16].w[0] + 11656u);
    c.budget -= 8;
L_0023C0F0:
    c.f[2] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0023C168; } }
    c.f[20] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[20] = fp::add(c.f[20], c.f[2]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0023C130; } }
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[1];  if (t) { goto L_0023C158; } }
    c.budget -= 1;
L_0023C130:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0023C158; } }
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = c.f[0];  if (t) { goto L_0023C158; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C154u); st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004E(c, 43u, depth + 1u); else { c.pc = 0x00238470u; return; } if (c.pc != 0x0023C154u) [[unlikely]] return; }
L_0023C154:
    c.budget -= 1;
L_0023C158:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C164u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_004F(c, 34u, depth + 1u); else { c.pc = 0x0023C880u; return; } if (c.pc != 0x0023C164u) [[unlikely]] return; }
L_0023C164:
    c.budget -= 1;
L_0023C168:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 36u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023C0F0u | kUnwind; return; } goto L_0023C0F0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0023C190:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[17].w[0] + 11104u);
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 12;
L_0023C1C0:
    set32(c.r[18], c.r[16].w[0] + 660u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0023C1C8:
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0023C340; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23920u)));
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[6].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0023C200; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023C210; } }
    c.budget -= 1;
L_0023C200:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 28u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023C340; } }
L_0023C210:
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023C340; } }
    st32((c.r[18].w[0]), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 28u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; set32(c.r[4], ld32((c.r[18].w[0] + 12u)));  if (t) { goto L_0023C2C0; } }
    set32(c.r[7], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], 0u + 4u);
    c.r[5].d[0] = ld16((c.r[7].w[0] + 2u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_0023C2B0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0023C2A0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0023C290; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0023C290; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0023C290; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023C340; } }
    c.budget -= 1;
L_0023C290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C298u); c.r[5].d[0] = ld8((c.r[7].w[0]));  if (depth < kMaxDepth) unit_004E(c, 147u, depth + 1u); else { c.pc = 0x0023A0B0u; return; } if (c.pc != 0x0023C298u) [[unlikely]] return; }
L_0023C298:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0023C340; } }
L_0023C2A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C2A8u); c.r[5].d[0] = ld8((c.r[7].w[0]));  if (depth < kMaxDepth) unit_004E(c, 130u, depth + 1u); else { c.pc = 0x00239B10u; return; } if (c.pc != 0x0023C2A8u) [[unlikely]] return; }
L_0023C2A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0023C340; } }
L_0023C2B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C2B8u); c.r[5].d[0] = ld8((c.r[7].w[0]));  if (depth < kMaxDepth) unit_004E(c, 98u, depth + 1u); else { c.pc = 0x00239120u; return; } if (c.pc != 0x0023C2B8u) [[unlikely]] return; }
L_0023C2B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0023C340; } }
L_0023C2C0:
    set32(c.r[7], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], 0u + 4u);
    c.r[5].d[0] = ld16((c.r[7].w[0] + 2u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_0023C330; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0023C318; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0023C300; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0023C300; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0023C300; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023C340; } }
    c.budget -= 1;
L_0023C300:
    set32(c.r[6], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C30Cu); c.r[5].d[0] = ld8((c.r[7].w[0]));  if (depth < kMaxDepth) unit_004E(c, 148u, depth + 1u); else { c.pc = 0x0023A0C0u; return; } if (c.pc != 0x0023C30Cu) [[unlikely]] return; }
L_0023C30C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0023C340; } }
    c.budget -= 1;
L_0023C318:
    set32(c.r[6], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C324u); c.r[5].d[0] = ld8((c.r[7].w[0]));  if (depth < kMaxDepth) unit_004E(c, 136u, depth + 1u); else { c.pc = 0x00239D10u; return; } if (c.pc != 0x0023C324u) [[unlikely]] return; }
L_0023C324:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0023C340; } }
    c.budget -= 1;
L_0023C330:
    set32(c.r[6], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C33Cu); c.r[5].d[0] = ld8((c.r[7].w[0]));  if (depth < kMaxDepth) unit_004E(c, 102u, depth + 1u); else { c.pc = 0x00239270u; return; } if (c.pc != 0x0023C33Cu) [[unlikely]] return; }
L_0023C33C:
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_0023C340:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023C1C8u | kUnwind; return; } goto L_0023C1C8; } }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023C1C0u | kUnwind; return; } goto L_0023C1C0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 28u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023C378; } }
    st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0023C378:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0023C3A0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11133u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[22], c.r[22].w[0] + 11104u);  if (t) { goto L_0023C3F0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 99u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023C440; } }
L_0023C3F0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0023C3F8:
    set32(c.r[4], ld32((c.r[22].w[0] + 1116u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], c.r[22].w[0] + 1108u);  if (t) { goto L_0023C428; } }
    st32((c.r[5].w[0] + 8u), 0u);
    set32(c.r[3], 0u + 255u);
    st32((c.r[5].w[0] + 12u), 0u);
    st32((c.r[5].w[0] + 4u), 0u);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[16].d[0] & 255ull;  if (t) { goto L_0023C428; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C428u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 117u, depth + 1u); else { c.pc = 0x00239690u; return; } if (c.pc != 0x0023C428u) [[unlikely]] return; }
L_0023C428:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023C3F8u | kUnwind; return; } goto L_0023C3F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023C618; } }
L_0023C440:
    c.r[23].d[0] = 0ull + 0ull;
    c.r[30].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 2;
L_0023C448:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 29u)));
    c.r[19].d[0] = 0ull + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[18].sd[0] < 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0023C4E0; } }
    set32(c.r[3], c.r[18].w[0] << 3);
    set32(c.r[16], c.r[22].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_0023C468:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 985u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[23].d[0]; set32(c.r[21], c.r[16].w[0] + 980u);  if (t) { goto L_0023C4D0; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_0023C4A0; } }
    set32(c.r[19], ld32((c.r[21].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 100u);
    c.r[20].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C494u); set32(c.r[4], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_004F(c, 36u, depth + 1u); else { c.pc = 0x0023C930u; return; } if (c.pc != 0x0023C494u) [[unlikely]] return; }
L_0023C494:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0023C4D0; } }
    c.budget -= 1;
L_0023C4A0:
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 100u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C4B4u); set32(c.r[4], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_004F(c, 36u, depth + 1u); else { c.pc = 0x0023C930u; return; } if (c.pc != 0x0023C4B4u) [[unlikely]] return; }
L_0023C4B4:
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023C4D0; } }
    set32(c.r[19], ld32((c.r[21].w[0])));
    c.r[20].d[0] = c.r[21].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
L_0023C4D0:
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] - 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023C468u | kUnwind; return; } goto L_0023C468; } }
    c.budget -= 1;
L_0023C4E0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0023C608; } }
    set32(c.r[3], ld32((c.r[30].w[0] + 1116u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[30].w[0] + 1108u);  if (t) { goto L_0023C5C8; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 23920u)));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0023C520; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 30u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023C540; } }
    c.budget -= 1;
L_0023C520:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 30u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023C540; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[3].d[0];  if (t) { goto L_0023C5B0; } }
    c.budget -= 1;
L_0023C540:
    st32((c.r[16].w[0] + 12u), c.r[19].w[0]);
    st32((c.r[16].w[0]), c.r[5].w[0]);
    set32(c.r[2], 0u + 2u);
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 30u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0023C590; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C588u); c.r[6].d[0] = c.r[23].d[0] & 255ull;  if (depth < kMaxDepth) unit_004E(c, 117u, depth + 1u); else { c.pc = 0x00239690u; return; } if (c.pc != 0x0023C588u) [[unlikely]] return; }
L_0023C588:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0023C5B0; } }
L_0023C590:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C5A8u); c.r[6].d[0] = c.r[23].d[0] & 255ull;  if (depth < kMaxDepth) unit_004E(c, 120u, depth + 1u); else { c.pc = 0x002397B0u; return; } if (c.pc != 0x0023C5A8u) [[unlikely]] return; }
L_0023C5A8:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0023C5B0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 30u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023C608; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[22].w[0] + 30u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0023C608; } }
L_0023C5C8:
    st32((c.r[16].w[0] + 12u), c.r[19].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 8256u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23920u)));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C604u); c.r[6].d[0] = c.r[23].d[0] & 255ull;  if (depth < kMaxDepth) unit_004E(c, 117u, depth + 1u); else { c.pc = 0x00239690u; return; } if (c.pc != 0x0023C604u) [[unlikely]] return; }
L_0023C604:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_0023C608:
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.r[3].d[0] = c.r[23].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[30], c.r[30].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023C448u | kUnwind; return; } goto L_0023C448; } }
L_0023C618:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0023C650:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], c.r[18].w[0] + 11656u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] + 28384u);
    c.budget -= 10;
L_0023C678:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0023C6A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C68Cu);  if (depth < kMaxDepth) unit_0061(c, 260u, depth + 1u); else { c.pc = 0x002862F0u; return; } if (c.pc != 0x0023C68Cu) [[unlikely]] return; }
L_0023C68C:
    st8((c.r[18].w[0] + 22u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 5u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 22u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023C6A8; } }
    st8((c.r[18].w[0] + 17u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0023C6A8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 36u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023C678u | kUnwind; return; } goto L_0023C678; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0023C6E0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 11140u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_0023C860; } }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[1].w[0] + 11140u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11135u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[9], c.r[9].w[0] + 11656u);  if (t) { goto L_0023C720; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st8((c.r[1].w[0] + 11135u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0023C720:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28384u);
    set32(c.r[13], 0u - 1u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[10], 0u + 5940u);
    c.budget -= 6;
L_0023C738:
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);  if (t) { goto L_0023C848; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11135u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[8], ld32((c.r[9].w[0] + 24u)));  if (t) { goto L_0023C758; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0023C758:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 22u)));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 23u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[11].d[0];  if (t) { goto L_0023C790; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_0023C790; } }
    st8((c.r[9].w[0] + 23u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull; st32((c.r[9].w[0] + 28u), c.r[5].w[0]);  if (t) { goto L_0023C788; } }
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0] + 21u), static_cast<std::uint8_t>(c.r[11].w[0]));  if (t) { goto L_0023C790; } }
L_0023C788:
    st8((c.r[9].w[0] + 21u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.budget -= 2;
L_0023C790:
    c.r[11].d[0] = c.r[6].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[11].d[0] != 0ull;  if (t) { goto L_0023C828; } }
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 17u)));
    c.budget -= 3;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_0023C828; } }
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_0023C7C0; } }
    set32(c.r[11], ld32((c.r[9].w[0] + 28u)));
    set32(c.r[11], c.r[11].w[0] + 1u);
    st32((c.r[9].w[0] + 28u), c.r[11].w[0]);
    c.budget -= 3;
L_0023C7C0:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0023C828; } }
    set32(c.r[11], ld32((c.r[9].w[0] + 28u)));
    set32(c.r[11], c.r[5].w[0] - c.r[11].w[0]);
    c.r[11].d[0] = c.r[11].d[0] << 48;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[11].sd[0] >= 0;  if (t) { goto L_0023C7E8; } }
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0023C7E8:
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    c.r[11].d[0] = c.r[11].d[0] << 48;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 48);
    c.r[1].d[0] = c.r[12].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023C828; } }
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 6u)));
    st8((c.r[9].w[0] + 21u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[11].d[0] != c.r[10].d[0];  if (t) { goto L_0023C820; } }
    st32((c.r[9].w[0] + 24u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0] + 21u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0023C828; } }
L_0023C820:
    set32(c.r[8], c.r[8].w[0] + 4u);
    st32((c.r[9].w[0] + 24u), c.r[8].w[0]);
    c.budget -= 2;
L_0023C828:
    c.r[6].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0023C848; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 17u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0023C848; } }
    st8((c.r[9].w[0] + 21u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0023C848:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[1].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 36u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023C738u | kUnwind; return; } goto L_0023C738; } }
    c.budget -= 1;
L_0023C860:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0023C870:
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[1].w[0] + 11135u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0023C880:
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 11104u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 556u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[3].w[0] + 552u);  if (t) { goto L_0023C8B8; } }
    c.f[12] = c.f[0];
    c.budget -= 2;
L_0023C8B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 28384u);
    st32((c.r[5].w[0]), c.f[12]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.f[0] = fp::cvt_w_s(c.f[12]);  if (t) { goto L_0023C920; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    set32(c.r[3], c.r[3].w[0] - 9616u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] & 127ull;
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C920u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0061(c, 308u, depth + 1u); else { c.pc = 0x00286BB0u; return; } if (c.pc != 0x0023C920u) [[unlikely]] return; }
L_0023C920:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0023C930:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.f[2] = c.r[2].w[0];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[0] = c.r[5].w[0];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 68u)));
    c.budget -= 19;
    { const bool t = c.r[2].sd[0] < 0; c.f[20] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0023CAA0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 41u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023C9A0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 42u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0023C9A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023C9A8; } }
L_0023C9A0:
    set32(c.r[16], 0u + 2u);
    c.budget -= 2;
L_0023C9A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 15360ull;
    c.r[1].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;
    c.f[21] = c.r[2].w[0];
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0023CA38; } }
L_0023C9C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 68u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C9D4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 40u, depth + 1u); else { c.pc = 0x0023CB40u; return; } if (c.pc != 0x0023C9D4u) [[unlikely]] return; }
L_0023C9D4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0023CA28; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 68u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023CA0Cu); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0023CA0Cu) [[unlikely]] return; }
L_0023CA0C:
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0023CA20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023CA24; } }
L_0023CA20:
    c.f[21] = c.f[0];
    c.budget -= 1;
L_0023CA24:
    c.budget -= 1;
L_0023CA28:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023C9C0u | kUnwind; return; } goto L_0023C9C0; } }
L_0023CA38:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[2] = c.f[20];  if (t) { goto L_0023CA58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023CAA0; } }
    c.budget -= 1;
L_0023CA58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[21], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[1].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0023CA88; } }
    set32(c.r[3], 0u + 127u);
    c.budget -= 2;
L_0023CA88:
    set32(c.r[2], 0u + 127u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.budget -= 6;
L_0023CAA0:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] < 0; set32(c.r[3], c.r[18].w[0] >> 1);  if (t) { goto L_0023CAB4; } }
    c.f[0] = c.r[18].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0023CACC; } }
L_0023CAB4:
    c.r[2].d[0] = c.r[18].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0023CACC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[2], c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0023CB00; } }
    set32(c.r[2], 0u + 127u);
    c.budget -= 2;
L_0023CB00:
    c.r[3].d[0] = c.r[19].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023CB18; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0023CB18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0023CB40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] >= 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0023CB60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0023CC00; } }
L_0023CB60:
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023CB80u); set32(c.r[4], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x0023CB80u) [[unlikely]] return; }
L_0023CB80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0023CBF8; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023CBACu); set32(c.r[6], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0023CBACu) [[unlikely]] return; }
L_0023CBAC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023CBBCu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0023CBBCu) [[unlikely]] return; }
L_0023CBBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023CBC4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 202u, depth + 1u); else { c.pc = 0x00127320u; return; } if (c.pc != 0x0023CBC4u) [[unlikely]] return; }
L_0023CBC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023CBCCu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 202u, depth + 1u); else { c.pc = 0x00127320u; return; } if (c.pc != 0x0023CBCCu) [[unlikely]] return; }
L_0023CBCC:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023CBD8u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x0023CBD8u) [[unlikely]] return; }
L_0023CBD8:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0023CC00; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023CC00; } }
L_0023CBF8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0023CC00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0023CC20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 41u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], 0u + 8u);  if (t) { goto L_0023CCF0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 42u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023CCF0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 68u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0023CCF0; } }
    c.f[0] = ld32((c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[5].w[0] + 15920u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023CC90u); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0067(c, 177u, depth + 1u); else { c.pc = 0x0029EDE0u; return; } if (c.pc != 0x0023CC90u) [[unlikely]] return; }
L_0023CC90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023CCF0; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0023CCB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023CCF0; } }
    c.budget -= 1;
L_0023CCB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44200000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[16], 0u + 15u);  if (t) { goto L_0023CCD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023CCF0; } }
L_0023CCD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 6;
L_0023CCF0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0023CD10:
    set32(c.r[29], c.r[29].w[0] - 512u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 272u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    set32(c.r[3], c.r[29].w[0] + 160u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    set32(c.r[6], c.r[6].w[0] + 11104u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[11].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.r[10].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 22;
L_0023CD68:
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[11], c.r[11].w[0] + 8u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(0u));
    c.r[7].d[0] = c.r[11].sd[0] < 97ll ? 1ull : 0ull;
    st8((c.r[10].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[10].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[9].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[8].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[10].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[9].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[8].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[10].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[8].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[10].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[9].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[8].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[10].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[9].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[8].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[10].w[0] + 7u), static_cast<std::uint8_t>(0u));
    st8((c.r[9].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[10], c.r[10].w[0] + 8u);
    st8((c.r[8].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[9], c.r[9].w[0] + 8u);
    c.budget -= 30;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023CD68u | kUnwind; return; } goto L_0023CD68; } }
    set32(c.r[7], c.r[11].w[0] + c.r[29].w[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st8((c.r[7].w[0] + 384u), static_cast<std::uint8_t>(0u));
    set32(c.r[11], c.r[6].w[0] + 12u);
    st8((c.r[7].w[0] + 272u), static_cast<std::uint8_t>(0u));
    st8((c.r[7].w[0] + 160u), static_cast<std::uint8_t>(0u));
    set32(c.r[8], 0u + 1u);
    set32(c.r[9], 0u - 1u);
    c.budget -= 8;
L_0023CE00:
    set32(c.r[7], c.r[11].w[0] + c.r[10].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[9].d[0];  if (t) { goto L_0023CE18; } }
    set32(c.r[7], c.r[7].w[0] + c.r[29].w[0]);
    st8((c.r[7].w[0] + 272u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 2;
L_0023CE18:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[7].d[0] = c.r[10].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023CE00u | kUnwind; return; } goto L_0023CE00; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 23784u)));
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[10], c.r[7].w[0] + 47u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[9], 0u - 1u);
    c.budget -= 6;
L_0023CE40:
    set32(c.r[7], c.r[10].w[0] + c.r[11].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[9].d[0];  if (t) { goto L_0023CE58; } }
    set32(c.r[7], c.r[7].w[0] + c.r[29].w[0]);
    st8((c.r[7].w[0] + 384u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 2;
L_0023CE58:
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.r[7].d[0] = c.r[11].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023CE40u | kUnwind; return; } goto L_0023CE40; } }
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1u);
    c.budget -= 2;
L_0023CE70:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0023CE88; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 1;
L_0023CE88:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[7].d[0] = c.r[10].sd[0] < 105ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023CE70u | kUnwind; return; } goto L_0023CE70; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[7].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0023CF10; } }
    set32(c.r[9], c.r[29].w[0] + 504u);
    set32(c.r[4], 0u - 1u);
    c.budget -= 2;
L_0023CEB8:
    set32(c.r[3], c.r[6].w[0] + c.r[7].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[8], c.r[3].w[0] + 12u);  if (t) { goto L_0023CED8; } }
    c.r[3].d[0] = c.r[7].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023CEF0; } }
    c.budget -= 1;
L_0023CED8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], c.r[5].w[0] + c.r[29].w[0]);  if (t) { goto L_0023CEF0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023CF00; } }
    c.budget -= 1;
L_0023CEF0:
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 4;
L_0023CF00:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023CEB8u | kUnwind; return; } goto L_0023CEB8; } }
L_0023CF10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01BB0000u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[20].d[0] = c.r[3].d[0] | 6144ull;  if (t) { goto L_0023CF68; } }
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], 0u + 3821u);
    st8((c.r[6].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    st8((c.r[6].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[6].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[6].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[6].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023CF44u); st8((c.r[6].w[0] + 15u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0045(c, 59u, depth + 1u); else { c.pc = 0x002147C0u; return; } if (c.pc != 0x0023CF44u) [[unlikely]] return; }
L_0023CF44:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00120000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01BB0000u);
    set32(c.r[4], c.r[4].w[0] + 13520u);
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = c.r[2].d[0] | 6144ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023CF64u); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_0044(c, 408u, depth + 1u); else { c.pc = 0x00213AE0u; return; } if (c.pc != 0x0023CF64u) [[unlikely]] return; }
L_0023CF64:
    set32(c.r[20], c.r[20].w[0] + c.r[18].w[0]);
    c.budget -= 1;
L_0023CF68:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[19].d[0] = 0ull + 0ull;
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[30], c.r[3].w[0] + 47u);  if (t) { goto L_0023D0A8; } }
    c.budget -= 1;
L_0023CF80:
    set32(c.r[3], c.r[30].w[0] + c.r[22].w[0]);
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[18].w[0] + c.r[29].w[0]);  if (t) { goto L_0023D0A0; } }
    set32(c.r[4], c.r[3].w[0] + 160u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023D0A0; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[16].w[0] + c.r[29].w[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull; c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 504u)));  if (t) { goto L_0023CFC8; } }
    c.r[3].d[0] = c.r[21].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023D0C0; } }
L_0023CFC8:
    c.r[1].d[0] = c.r[18].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);  if (t) { goto L_0023D000; } }
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 8240u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[21].w[0] + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] + 12304u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0023D060; } }
    c.budget -= 1;
L_0023D000:
    c.r[1].d[0] = c.r[18].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);  if (t) { goto L_0023D038; } }
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 8016u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] - 256u)));
    set32(c.r[3], c.r[21].w[0] + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] + 12288u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] - 64u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0023D060; } }
    c.budget -= 1;
L_0023D038:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 7952u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[21].w[0] + 3u);
    set32(c.r[4], ld32((c.r[4].w[0] - 320u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] + 12256u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st8((c.r[2].w[0] - 80u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
L_0023D060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D068u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 59u, depth + 1u); else { c.pc = 0x002147C0u; return; } if (c.pc != 0x0023D068u) [[unlikely]] return; }
L_0023D068:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00120000u);
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], c.r[21].w[0] + 3u);
    set32(c.r[4], c.r[4].w[0] + 13520u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D084u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 408u, depth + 1u); else { c.pc = 0x00213AE0u; return; } if (c.pc != 0x0023D084u) [[unlikely]] return; }
L_0023D084:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 11840u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D09Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0044(c, 408u, depth + 1u); else { c.pc = 0x00213AE0u; return; } if (c.pc != 0x0023D09Cu) [[unlikely]] return; }
L_0023D09C:
    set32(c.r[20], c.r[20].w[0] + c.r[23].w[0]);
    c.budget -= 1;
L_0023D0A0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 2;
L_0023D0A8:
    c.r[1].d[0] = c.r[19].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023D0C0; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023CF80u | kUnwind; return; } goto L_0023CF80; } }
    c.budget -= 1;
L_0023D0C0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 512u);  c.pc = t; return; }
L_0023D0F0:
    c.budget -= 2;
    { c.r[4].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023CD10u | kUnwind; return; } goto L_0023CD10; }
L_0023D100:
    c.budget -= 2;
    { set32(c.r[4], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023CD10u | kUnwind; return; } goto L_0023CD10; }
L_0023D110:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[8], c.r[8].w[0] + 11104u);
    set32(c.r[7], 0u + 3u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u - 1u);
    c.budget -= 8;
L_0023D130:
    set32(c.r[2], c.r[8].w[0] + c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[6].d[0]; set32(c.r[3], c.r[2].w[0] + 12u);  if (t) { goto L_0023D168; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & 31ull;
    set32(c.r[3], c.r[5].w[0] << (c.r[2].w[0] & 31u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));
    c.r[4].d[0] = ~(c.r[3].d[0] | 0ull);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 10;
L_0023D168:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D130u | kUnwind; return; } goto L_0023D130; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01BB0000u);
    st8((c.r[8].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 3823u);
    st8((c.r[8].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[2].d[0] | 6144ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D194u); st8((c.r[8].w[0] + 15u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0045(c, 59u, depth + 1u); else { c.pc = 0x002147C0u; return; } if (c.pc != 0x0023D194u) [[unlikely]] return; }
L_0023D194:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00120000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01BB0000u);
    set32(c.r[4], c.r[4].w[0] + 13520u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], 0u + 6u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D1B0u); c.r[6].d[0] = c.r[2].d[0] | 6144ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x0023D1B0u) [[unlikely]] return; }
L_0023D1B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0023D1C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[3].w[0] + 11116u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_0023D1E0:
    c.r[2].d[0] = c.r[4].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] + 40u);
    set32(c.r[2], 0u + 40u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 4768u);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  c.pc = t; return; }
L_0023D220:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 10512u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 10512u), c.r[3].w[0]);  c.pc = t; return; }
L_0023D240:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30368u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 10u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00240000u);  if (t) { goto L_0023D260; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D260u); set32(c.r[4], c.r[4].w[0] - 11744u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x0023D260u) [[unlikely]] return; }
L_0023D260:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0023D270:
    set32(c.r[8], ld32((c.r[28].w[0] - 23784u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[7], c.r[7].w[0] + 4112u);
    set32(c.r[6], c.r[6].w[0] + 4116u);
    set32(c.r[5], c.r[5].w[0] + 4120u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[4].w[0] + 624u), c.f[0]);
    set32(c.r[7], ld32((c.r[28].w[0] - 23784u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[4].w[0] + 628u), c.f[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 632u), c.f[0]);
    st32((c.r[4].w[0] + 636u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 592u), 0u);
    st32((c.r[4].w[0] + 596u), 0u);
    st32((c.r[4].w[0] + 600u), 0u);
    st32((c.r[4].w[0] + 604u), 0u);
    st32((c.r[4].w[0] + 608u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 612u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 616u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 620u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 37;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0023D310:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st32((c.r[28].w[0] - 23952u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_0023D338; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D334u); set32(c.r[4], c.r[4].w[0] + 20304u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x0023D334u) [[unlikely]] return; }
L_0023D334:
    c.budget -= 1;
L_0023D338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D340u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_004D(c, 63u, depth + 1u); else { c.pc = 0x002350D0u; return; } if (c.pc != 0x0023D340u) [[unlikely]] return; }
L_0023D340:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 4816u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D364u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0023D364u) [[unlikely]] return; }
L_0023D364:
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], c.r[4].w[0] - 30608u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[2], c.r[2].w[0] + 4112u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    st32((c.r[3].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30368u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[4].w[0] + 640u), c.f[3]);
    st32((c.r[4].w[0] + 644u), c.f[2]);
    st32((c.r[4].w[0] + 648u), c.f[1]);
    st32((c.r[4].w[0] + 652u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    c.budget -= 27;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[4].w[0] + 640u);  if (t) { goto L_0023D408; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D3D8u); set32(c.r[4], c.r[4].w[0] + 656u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0023D3D8u) [[unlikely]] return; }
L_0023D3D8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[4], c.r[2].w[0] + 672u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D3E8u); set32(c.r[5], c.r[2].w[0] + 640u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0023D3E8u) [[unlikely]] return; }
L_0023D3E8:
    set32(c.r[3], ld32((c.r[28].w[0] - 30368u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 676u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 676u), c.f[0]);
    c.budget -= 8;
L_0023D408:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23952u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 28752u)));  if (t) { goto L_0023D428; } }
    set32(c.r[3], 0u + 41u);
    c.budget -= 1;
L_0023D428:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    set32(c.r[5], c.r[3].w[0] << 3);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 10528u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[7], 0u + 1u);
    c.f[4] = c.r[2].w[0];
    c.r[8].d[0] = c.r[7].d[0] << 32;
    c.r[7].d[0] = 0ull | 32768ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[7].d[0] = c.r[7].d[0] << 16;
    set32(c.r[3], c.r[3].w[0] + 2768u);
    set32(c.r[2], c.r[2].w[0] + 2096u);
    set32(c.r[12], 0u + 61u);
    c.r[9].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.budget -= 16;
L_0023D468:
    set32(c.r[7], c.r[5].w[0] << 2);
    set32(c.r[8], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.f[0] = ld32((c.r[8].w[0]));
    set32(c.r[7], c.r[5].w[0] << 1);
    set32(c.r[13], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[7].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 8u));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 12u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.f[5] = ld32((c.r[4].w[0] + 4u));
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[1] = fp::add(c.f[0], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[2] = fp::sub(c.f[3], c.f[5]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[3], c.f[5]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[4]);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[5] = ld32((c.r[4].w[0] + 12u));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = c.f[1] ^ fp::kSign;
    c.f[3] = c.f[3] ^ fp::kSign;
    c.f[1] = fp::mul(c.f[5], c.f[1]);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[5]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.r[10].d[0] = ld16((c.r[13].w[0] + 2u));
    c.r[8].d[0] = ld16((c.r[13].w[0] + 4u));
    c.r[11].d[0] = ld16((c.r[13].w[0]));
    c.r[10].d[0] = c.r[10].d[0] << 8;
    c.r[8].d[0] = c.r[8].d[0] << 16;
    c.r[10].d[0] = c.r[11].d[0] | c.r[10].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[10].d[0];
    st64((c.r[4].w[0] + 32u), c.r[8].d[0]);
    st64((c.r[4].w[0] + 40u), c.r[12].d[0]);
    c.r[10].d[0] = ld16((c.r[13].w[0] + 2u));
    c.r[8].d[0] = ld16((c.r[13].w[0] + 4u));
    c.r[11].d[0] = ld16((c.r[13].w[0]));
    c.r[10].d[0] = c.r[10].d[0] << 8;
    c.r[8].d[0] = c.r[8].d[0] << 16;
    c.r[10].d[0] = c.r[11].d[0] | c.r[10].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[10].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st64((c.r[4].w[0] + 24u), c.r[8].d[0]);
    c.budget -= 60;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D468u | kUnwind; return; } goto L_0023D468; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u + 13u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x007D0000u);  if (t) { goto L_0023D570; } }
    st64((c.r[1].w[0] + 10552u), c.r[9].d[0]);
    c.budget -= 1;
L_0023D570:
    set32(c.r[2], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    st8((c.r[1].w[0] + 10516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D588u); st8((c.r[1].w[0] + 10517u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_005B(c, 83u, depth + 1u); else { c.pc = 0x0026CC40u; return; } if (c.pc != 0x0023D588u) [[unlikely]] return; }
L_0023D588:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 31u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0023D5A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 28752u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 10528u);
    set32(c.r[6], c.r[3].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[8], 0u + 1u);
    c.f[4] = c.r[3].w[0];
    c.r[9].d[0] = c.r[8].d[0] << 32;
    c.r[8].d[0] = 0ull | 32768ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[8].d[0] = c.r[8].d[0] << 16;
    set32(c.r[4], c.r[4].w[0] + 2768u);
    set32(c.r[3], c.r[3].w[0] + 2096u);
    set32(c.r[13], 0u + 61u);
    c.r[10].d[0] = c.r[8].d[0] | c.r[9].d[0];
    c.budget -= 18;
L_0023D5E8:
    set32(c.r[8], c.r[6].w[0] << 2);
    set32(c.r[9], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.f[0] = ld32((c.r[9].w[0]));
    set32(c.r[8], c.r[6].w[0] << 1);
    set32(c.r[14], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[8].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0] + 4u));
    st32((c.r[5].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0] + 8u));
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0] + 12u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    c.f[5] = ld32((c.r[5].w[0] + 4u));
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[1] = fp::add(c.f[0], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[2] = fp::sub(c.f[3], c.f[5]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[3], c.f[5]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[4]);
    st32((c.r[5].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[5] = ld32((c.r[5].w[0] + 12u));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = c.f[1] ^ fp::kSign;
    c.f[3] = c.f[3] ^ fp::kSign;
    c.f[1] = fp::mul(c.f[5], c.f[1]);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[5]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 20u), c.f[0]);
    c.r[11].d[0] = ld16((c.r[14].w[0] + 2u));
    c.r[9].d[0] = ld16((c.r[14].w[0] + 4u));
    c.r[12].d[0] = ld16((c.r[14].w[0]));
    c.r[11].d[0] = c.r[11].d[0] << 8;
    c.r[9].d[0] = c.r[9].d[0] << 16;
    c.r[11].d[0] = c.r[12].d[0] | c.r[11].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[11].d[0];
    st64((c.r[5].w[0] + 32u), c.r[9].d[0]);
    st64((c.r[5].w[0] + 40u), c.r[13].d[0]);
    c.r[11].d[0] = ld16((c.r[14].w[0] + 2u));
    c.r[9].d[0] = ld16((c.r[14].w[0] + 4u));
    c.r[12].d[0] = ld16((c.r[14].w[0]));
    c.r[11].d[0] = c.r[11].d[0] << 8;
    c.r[9].d[0] = c.r[9].d[0] << 16;
    c.r[11].d[0] = c.r[12].d[0] | c.r[11].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[11].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st64((c.r[5].w[0] + 24u), c.r[9].d[0]);
    c.budget -= 60;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D5E8u | kUnwind; return; } goto L_0023D5E8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0023D6E0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0023D8E8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023D8E8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 31u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023D8E8; } }
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0023D74C; } }
L_0023D730:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D730u | kUnwind; return; } goto L_0023D730; } }
L_0023D74C:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0023D7F8; } }
    set32(c.r[3], c.r[18].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] - 27856u);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
L_0023D778:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 877u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 797u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].sd[0] < 77ll ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[6].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];  if (t) { goto L_0023D7C0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1940u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 4;
L_0023D7C0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0023D7D0; } }
    set32(c.r[19], 0u + 1u);
    c.budget -= 2;
L_0023D7D0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_0023D7E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D7E0u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0023D7E0u) [[unlikely]] return; }
L_0023D7E0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_0023D7E8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D778u | kUnwind; return; } goto L_0023D778; } }
L_0023D7F8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0023D8E8; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_0023D8E8; } }
    c.f[0] = c.r[17].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D838u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0023D838u) [[unlikely]] return; }
L_0023D838:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D848u); set32(c.r[5], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0023D848u) [[unlikely]] return; }
L_0023D848:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0023D8E8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[4], c.r[2].w[0] + 672u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D86Cu); set32(c.r[5], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0023D86Cu) [[unlikely]] return; }
L_0023D86C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D880u); set32(c.r[6], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0023D880u) [[unlikely]] return; }
L_0023D880:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D894u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x0023D894u) [[unlikely]] return; }
L_0023D894:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[29].w[0] + 96u);  if (t) { goto L_0023D8D8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30368u)));
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[3].w[0] + 656u), c.f[3]);
    st32((c.r[3].w[0] + 660u), c.f[2]);
    st32((c.r[3].w[0] + 664u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 668u), c.f[0]);  if (t) { goto L_0023D8E8; } }
    c.budget -= 1;
L_0023D8D8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D8E8u); set32(c.r[4], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0023D8E8u) [[unlikely]] return; }
L_0023D8E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023D978; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023D978; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_0023D978; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[4], c.r[2].w[0] + 688u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D920u); set32(c.r[5], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0023D920u) [[unlikely]] return; }
L_0023D920:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0023D978; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[2].w[0] + 688u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D94Cu); set32(c.r[6], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0023D94Cu) [[unlikely]] return; }
L_0023D94C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D960u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x0023D960u) [[unlikely]] return; }
L_0023D960:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[6], c.r[29].w[0] + 80u);
    set32(c.r[4], c.r[2].w[0] + 688u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D974u); set32(c.r[5], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x0023D974u) [[unlikely]] return; }
L_0023D974:
    c.budget -= 1;
L_0023D978:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 4976u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D99Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0023D99Cu) [[unlikely]] return; }
L_0023D99C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0023D9C0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23776u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 10552u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], c.r[4].w[0] + 5136u);
    set32(c.r[5], 0u + 22u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 433u)));
    c.r[6].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0]));
    c.budget -= 16;
    { st64((c.r[1].w[0] + 5152u), c.r[2].d[0]);  [[clang::musttail]] return unit_006B(c, 176u, depth); }
L_0023DA00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 10517u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[2], c.r[4].w[0] << 1);  if (t) { goto L_0023DA48; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[1].w[0] + 10517u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 10528u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DA40u); set32(c.r[4], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_006B(c, 176u, depth + 1u); else { c.pc = 0x002AE5D0u; return; } if (c.pc != 0x0023DA40u) [[unlikely]] return; }
L_0023DA40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0023DA50; } }
L_0023DA48:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0023DA50:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0023DA60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 24u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0023DD70; } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0023DD70; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0023DD70; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 34u);  if (t) { goto L_0023DD38; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0023DC50; } }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 16u);  if (t) { goto L_0023DAF0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0023DAD0; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0023DAD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023DF38; } }
L_0023DAD0:
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0023DF38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0023DF38; } }
L_0023DAF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x446D0000u);
    c.f[2] = ld32((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x44A60000u);  if (t) { goto L_0023DB68; } }
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0023DB68; } }
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44040000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x44230000u);  if (t) { goto L_0023DB68; } }
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0023DB68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0023DF38; } }
L_0023DB68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43980000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x443E0000u);  if (t) { goto L_0023DBD8; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0023DBD8; } }
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44850000u);
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x44950000u);  if (t) { goto L_0023DBD8; } }
    c.r[2].d[0] = c.r[2].d[0] | 24576ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0023DBD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0023DF38; } }
L_0023DBD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44940000u);
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x44A40000u);  if (t) { goto L_0023DF38; } }
    c.r[2].d[0] = c.r[2].d[0] | 24576ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0023DF38; } }
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44870000u);
    c.r[2].d[0] = c.r[2].d[0] | 40960ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x44C60000u);  if (t) { goto L_0023DF38; } }
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0023DF38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0023DF38; } }
    c.budget -= 1;
L_0023DC50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44040000u);
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x44480000u);  if (t) { goto L_0023DCC0; } }
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0023DCC0; } }
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44090000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x44A60000u);  if (t) { goto L_0023DCC0; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0023DCC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0023DF38; } }
    c.budget -= 1;
L_0023DCC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44480000u);
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x448D0000u);  if (t) { goto L_0023DF38; } }
    c.r[2].d[0] = c.r[2].d[0] | 40960ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0023DF38; } }
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44710000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x44C50000u);  if (t) { goto L_0023DF38; } }
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0023DF38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0023DF38; } }
    c.budget -= 1;
L_0023DD38:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0023DF38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DD54u);  if (depth < kMaxDepth) unit_0071(c, 75u, depth + 1u); else { c.pc = 0x002C52E0u; return; } if (c.pc != 0x0023DD54u) [[unlikely]] return; }
L_0023DD54:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 25u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0023DF38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0023DF38; } }
    c.budget -= 1;
L_0023DD70:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[8].sd[0] = static_cast<std::int32_t>(0x004C0000u);  if (t) { goto L_0023DD88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + 1280u);  if (t) { goto L_0023DDA8; } }
    c.budget -= 1;
L_0023DD88:
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[8].sd[0] = static_cast<std::int32_t>(0x004C0000u);  if (t) { goto L_0023DDA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + 1584u);  if (t) { goto L_0023DDA8; } }
    c.budget -= 1;
L_0023DDA0:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[8], c.r[8].w[0] + 1728u);
    c.budget -= 2;
L_0023DDA8:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = c.r[7].sd[0] < 0;  if (t) { goto L_0023DF38; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[2] = c.r[2].w[0];
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[0] = c.r[3].w[0];
    set32(c.r[8], c.r[8].w[0] + 4u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 2u)));
    c.f[11] = fp::add(c.f[2], c.f[0]);
    set32(c.r[8], c.r[8].w[0] + 4u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 2u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[8], c.r[8].w[0] + 4u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    c.f[10] = fp::add(c.f[2], c.f[0]);
    set32(c.r[8], c.r[8].w[0] + 2u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[9] = fp::add(c.f[2], c.f[1]);
    c.f[6] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[5].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[7] = c.f[6];
    c.f[8] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[11]));
    c.budget -= 36;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[6] = fp::add(c.f[6], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023DDA8u | kUnwind; return; } goto L_0023DDA8; } }
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[10]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023DDA8u | kUnwind; return; } goto L_0023DDA8; } }
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[7]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023DDA8u | kUnwind; return; } goto L_0023DDA8; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[6]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023DDA8u | kUnwind; return; } goto L_0023DDA8; } }
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[9]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023DDA8u | kUnwind; return; } goto L_0023DDA8; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[8]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[1].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023DDA8u | kUnwind; return; } goto L_0023DDA8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0023DEA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[4] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0023DEAC; } }
L_0023DEA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[4] = c.r[2].w[0];
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
L_0023DEAC:
    c.budget -= 1;
L_0023DEB0:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[5] = fp::mul(c.f[0], c.f[4]);
    c.f[0] = fp::add(c.f[11], c.f[5]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = fp::sub(c.f[10], c.f[5]);  if (t) { goto L_0023DF20; } }
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0023DF20; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[7]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = fp::sub(c.f[6], c.f[5]);  if (t) { goto L_0023DF20; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0023DF20; } }
    c.f[0] = fp::add(c.f[9], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = fp::sub(c.f[8], c.f[5]);  if (t) { goto L_0023DF20; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0023DF20; } }
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[7].w[0] + c.r[2].w[0]);  if (t) { goto L_0023DF38; } }
L_0023DF20:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023DEB0u | kUnwind; return; } goto L_0023DEB0; } }
    c.budget -= 1;
L_0023DF38:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0023DF50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 15664u);  if (t) { goto L_0023DFC0; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[17], 0u + 4u);
    set32(c.r[18], c.r[18].w[0] + 20304u);
    c.budget -= 4;
L_0023DF88:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0023DFA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DF9Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 151u, depth + 1u); else { c.pc = 0x00240920u; return; } if (c.pc != 0x0023DF9Cu) [[unlikely]] return; }
L_0023DF9C:
    c.budget -= 1;
L_0023DFA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[3].d[0] | 20384ull;
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023DF88u | kUnwind; return; } goto L_0023DF88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023E000; } }
    c.budget -= 1;
L_0023DFC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[4], c.r[4].w[0] - 24848u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0023DFE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DFDCu);  if (depth < kMaxDepth) unit_0050(c, 157u, depth + 1u); else { c.pc = 0x00240A10u; return; } if (c.pc != 0x0023DFDCu) [[unlikely]] return; }
L_0023DFDC:
    c.budget -= 1;
L_0023DFE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00880000u);
    set32(c.r[4], c.r[4].w[0] + 15920u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0023E000; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DFFCu);  if (depth < kMaxDepth) unit_0050(c, 157u, depth + 1u); else { c.pc = 0x00240A10u; return; } if (c.pc != 0x0023DFFCu) [[unlikely]] return; }
L_0023DFFC:
    c.budget -= 1;
L_0023E000:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0023E020:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.f[0] = c.r[2].w[0];
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    fpu_div(c, 2u, c.f[12], c.f[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    fpu_div(c, 1u, c.f[13], c.f[0]);
    c.f[21] = c.f[15];
    c.f[0] = fp::mul(c.f[21], c.f[2]);
    st32((c.r[29].w[0]), c.f[20]);
    fpu_div(c, 23u, c.f[0], c.f[14]);
    c.f[20] = c.f[16];
    c.f[0] = fp::mul(c.f[21], c.f[1]);
    fpu_div(c, 22u, c.f[0], c.f[14]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E07Cu);  if (depth < kMaxDepth) unit_0000(c, 262u, depth + 1u); else { c.pc = 0x00102A28u; return; } if (c.pc != 0x0023E07Cu) [[unlikely]] return; }
L_0023E07C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[3] = c.r[5].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::mul(c.f[3], c.f[21]);
    c.f[2] = fp::add(c.f[23], c.f[23]);
    c.f[1] = fp::add(c.f[22], c.f[22]);
    fpu_div(c, 2u, c.f[3], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    st32((c.r[16].w[0]), c.f[2]);
    fpu_div(c, 1u, c.f[3], c.f[1]);
    st32((c.r[16].w[0] + 20u), c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    c.f[2] = fp::sub(c.f[20], c.f[21]);
    c.f[1] = fp::add(c.f[20], c.f[21]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 40u), c.f[1]);
    st32((c.r[16].w[0] + 56u), c.f[0]);
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 60u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 30;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0023E100:
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    set32(c.r[8], 0u + 6u);
    c.budget -= 6;
L_0023E118:
    set32(c.r[2], 0u + 63u);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[8]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 9u, 7u, c.vu0.vf[8].w[3]);
    vu::clip(c.vu0, 9u, 9u);
    set32(c.r[3], cfc2(c, 18u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023E170; } }
    set32(c.r[8], c.r[8].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull != c.r[8].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023E118u | kUnwind; return; } goto L_0023E118; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0023E170:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0023E180:
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    set32(c.r[8], 0u + 6u);
    c.budget -= 6;
L_0023E198:
    set32(c.r[2], 0u + 35u);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[8]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 9u, 7u, c.vu0.vf[8].w[3]);
    vu::clip(c.vu0, 9u, 9u);
    set32(c.r[3], cfc2(c, 18u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023E1F0; } }
    set32(c.r[8], c.r[8].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull != c.r[8].d[0]; set32(c.r[2], 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023E198u | kUnwind; return; } goto L_0023E198; } }
    c.budget -= 2;
    {  goto L_0023E1F8; }
L_0023E1F0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0023E1F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0023E200:
    set32(c.r[29], c.r[29].w[0] - 576u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.r[1].d[0] = c.r[1].d[0] | 4752ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[20].w[0] + c.r[1].w[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[23], c.r[23].w[0] - 8560u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] + 15664u);
    c.budget -= 25;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 192u), c.r[3].w[0]);  if (t) { goto L_0023F1E0; } }
    set32(c.r[3], 0u + 4080u);
    st32((c.r[20].w[0] + 640u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 652u), c.f[12]);
    st32((c.r[29].w[0] + 240u), 0u);
    st32((c.r[29].w[0] + 232u), 0u);
    st32((c.r[29].w[0] + 228u), 0u);
    c.budget -= 8;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[29].w[0] + 224u), 0u);  if (t) { goto L_0023E2D0; } }
    c.f[14] = ld32((c.r[5].w[0] + 4032u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x457F0000u);
    c.f[15] = ld32((c.r[5].w[0] + 4036u));
    c.r[2].d[0] = c.r[2].d[0] | 61440ull;
    c.f[16] = ld32((c.r[5].w[0] + 4040u));
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E2A8u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_004F(c, 110u, depth + 1u); else { c.pc = 0x0023E020u; return; } if (c.pc != 0x0023E2A8u) [[unlikely]] return; }
L_0023E2A8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    set32(c.r[4], c.r[29].w[0] + 384u);
    set32(c.r[6], c.r[20].w[0] + 208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E2BCu); set32(c.r[5], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0000(c, 215u, depth + 1u); else { c.pc = 0x00102180u; return; } if (c.pc != 0x0023E2BCu) [[unlikely]] return; }
L_0023E2BC:
    set32(c.r[4], c.r[29].w[0] + 512u);
    set32(c.r[5], c.r[29].w[0] + 448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E2CCu); set32(c.r[6], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_0000(c, 215u, depth + 1u); else { c.pc = 0x00102180u; return; } if (c.pc != 0x0023E2CCu) [[unlikely]] return; }
L_0023E2CC:
    c.budget -= 1;
L_0023E2D0:
    set32(c.r[3], c.r[22].w[0] << 1);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[22].w[0]);
    set32(c.r[7], c.r[3].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + 10544u);
    set32(c.r[6], c.r[5].w[0] + c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[4], c.r[4].w[0] + 10548u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    set32(c.r[5], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + 10528u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[3].w[0] + c.r[7].w[0]);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    set32(c.r[3], c.r[3].w[0] + 10532u);
    st32((c.r[29].w[0] + 256u), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[29].w[0] + 260u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[29].w[0] + 264u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 268u), c.f[0]);  if (t) { goto L_0023F1B8; } }
L_0023E338:
    set32(c.r[3], c.r[19].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] - c.r[19].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.r[1].d[0] = c.r[1].d[0] | 4784ull;
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    set32(c.r[3], 0u + 110u);
    set32(c.r[16], c.r[4].w[0] + c.r[1].w[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E3B0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0023E3B0; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x007D0000u);  if (t) { goto L_0023E3B0; } }
    set32(c.r[17], 0u + 1u);
    c.f[3] = ld32((c.r[1].w[0] + 10592u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    c.f[2] = ld32((c.r[1].w[0] + 10596u));
    st32((c.r[29].w[0] + 256u), c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    c.f[1] = ld32((c.r[1].w[0] + 10576u));
    st32((c.r[29].w[0] + 260u), c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    c.f[0] = ld32((c.r[1].w[0] + 10580u));
    st32((c.r[29].w[0] + 264u), c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E3ACu); st32((c.r[29].w[0] + 268u), c.f[0]);  if (depth < kMaxDepth) unit_004F(c, 99u, depth + 1u); else { c.pc = 0x0023DA00u; return; } if (c.pc != 0x0023E3ACu) [[unlikely]] return; }
L_0023E3AC:
    c.budget -= 1;
L_0023E3B0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_0023F1B0; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_0023EE40; } }
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[4].w[0] + 5488u);
    set32(c.r[3], c.r[3].w[0] + 5536u);
    set32(c.r[7], c.r[29].w[0] + 272u);
    st32((c.r[29].w[0] + 272u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    st32((c.r[29].w[0] + 276u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 72u));
    st32((c.r[29].w[0] + 280u), c.f[0]);
    st32((c.r[29].w[0] + 284u), c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.f[0] = ld32((c.r[16].w[0] + 76u));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[6] = fp::mul(c.f[0], c.f[1]);
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[7].w[0] + 16u) & ~15u, c.vu0.vf[4]);
    st128((c.r[7].w[0] + 32u) & ~15u, c.vu0.vf[4]);
    st128((c.r[7].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    st128((c.r[7].w[0] + 64u) & ~15u, c.vu0.vf[4]);
    st128((c.r[7].w[0] + 80u) & ~15u, c.vu0.vf[4]);
    st128((c.r[7].w[0] + 96u) & ~15u, c.vu0.vf[4]);
    set32(c.r[3], 0u + 2u);
    c.f[5] = ld32((c.r[29].w[0] + 288u));
    c.f[4] = ld32((c.r[29].w[0] + 304u));
    c.f[3] = ld32((c.r[29].w[0] + 324u));
    c.f[2] = ld32((c.r[29].w[0] + 340u));
    c.f[1] = ld32((c.r[29].w[0] + 360u));
    c.f[0] = ld32((c.r[29].w[0] + 376u));
    c.f[5] = fp::sub(c.f[5], c.f[6]);
    c.f[4] = fp::add(c.f[4], c.f[6]);
    c.f[3] = fp::sub(c.f[3], c.f[6]);
    c.f[2] = fp::add(c.f[2], c.f[6]);
    c.f[1] = fp::sub(c.f[1], c.f[6]);
    c.f[0] = fp::add(c.f[0], c.f[6]);
    st32((c.r[29].w[0] + 288u), c.f[5]);
    st32((c.r[29].w[0] + 304u), c.f[4]);
    st32((c.r[29].w[0] + 324u), c.f[3]);
    st32((c.r[29].w[0] + 340u), c.f[2]);
    st32((c.r[29].w[0] + 360u), c.f[1]);
    c.budget -= 49;
    { const bool t = c.r[21].d[0] != c.r[3].d[0]; st32((c.r[29].w[0] + 376u), c.f[0]);  if (t) { goto L_0023E4B8; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 109u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E4B8; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E4B8; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u + 52u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023E4E8; } }
L_0023E4B8:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 110u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E4F0; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E4F0; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u + 52u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E4F0; } }
L_0023E4E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_0023F038; } }
L_0023E4F0:
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E4FCu); set32(c.r[5], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_004F(c, 112u, depth + 1u); else { c.pc = 0x0023E100u; return; } if (c.pc != 0x0023E4FCu) [[unlikely]] return; }
L_0023E4FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023F038; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0023E540; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 109u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E540; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E540; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u + 49u);
    c.budget -= 3;
L_0023E540:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023E618; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 112u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E580; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E580; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u + 49u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023E610; } }
L_0023E580:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 112u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E5B0; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E5B0; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u + 50u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023E610; } }
L_0023E5B0:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 112u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E5E0; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E5E0; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u + 52u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023E610; } }
L_0023E5E0:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 80u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E618; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E618; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u + 51u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E618; } }
L_0023E610:
    set32(c.r[18], 0u + 1u);
    c.budget -= 2;
L_0023E618:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E720; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 112u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E658; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[4], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0023E658; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 82u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0023E718; } }
L_0023E658:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 112u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E688; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E688; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u + 49u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023E718; } }
L_0023E688:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 112u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E6B8; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E6B8; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u + 52u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023E718; } }
L_0023E6B8:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 109u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E6E8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[4], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0023E6E8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 82u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0023E718; } }
    c.budget -= 1;
L_0023E6E8:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 112u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E720; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E720; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u + 50u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E720; } }
L_0023E718:
    set32(c.r[18], 0u + 1u);
    c.budget -= 2;
L_0023E720:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 39u);  if (t) { goto L_0023E740; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E808; } }
    c.budget -= 1;
L_0023E740:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 112u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E770; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[4], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0023E770; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 82u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0023E800; } }
    c.budget -= 1;
L_0023E770:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 112u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E7A0; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E7A0; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u + 49u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023E800; } }
L_0023E7A0:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 112u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E7D0; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E7D0; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u + 50u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023E800; } }
L_0023E7D0:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 112u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E808; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E808; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u + 51u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E808; } }
L_0023E800:
    set32(c.r[18], 0u + 1u);
    c.budget -= 2;
L_0023E808:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E888; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 112u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E850; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E850; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u + 50u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023E880; } }
    c.budget -= 1;
L_0023E850:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 112u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E888; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E888; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u + 51u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E888; } }
L_0023E880:
    set32(c.r[18], 0u + 1u);
    c.budget -= 2;
L_0023E888:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 21u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E968; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 112u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E8D0; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E8D0; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u + 54u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023E960; } }
    c.budget -= 1;
L_0023E8D0:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 112u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E900; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E900; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u + 50u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023E960; } }
L_0023E900:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 112u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E930; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E930; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u + 57u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023E960; } }
L_0023E930:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 112u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E968; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E968; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u + 52u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E968; } }
L_0023E960:
    set32(c.r[18], 0u + 1u);
    c.budget -= 2;
L_0023E968:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 11u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E9B0; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 112u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E9B0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[4], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0023E9B0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 82u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0023E9B0; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 2;
L_0023E9B0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 12u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EA28; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 112u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023E9F0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[4], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0023E9F0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 82u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0023EA20; } }
L_0023E9F0:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 112u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EA28; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EA28; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u + 49u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EA28; } }
L_0023EA20:
    set32(c.r[18], 0u + 1u);
    c.budget -= 2;
L_0023EA28:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 12u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EA40; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_0023EA40:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 19u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EAB8; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 112u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EA80; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[4], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0023EA80; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 82u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0023EAB0; } }
L_0023EA80:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 112u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EAB8; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EAB8; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u + 49u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EAB8; } }
L_0023EAB0:
    set32(c.r[18], 0u + 1u);
    c.budget -= 2;
L_0023EAB8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 16u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EB00; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 112u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EB00; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EB00; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u + 49u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EB00; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_0023EB00:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 4u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EB48; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 112u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EB48; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EB48; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u + 50u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EB48; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_0023EB48:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 17u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EB90; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 112u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EB90; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EB90; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u + 50u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EB90; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_0023EB90:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 17u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EBA8; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_0023EBA8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 18u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EC28; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 112u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EBF0; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EBF0; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u + 51u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023EC20; } }
    c.budget -= 1;
L_0023EBF0:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 112u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EC28; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EC28; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u + 54u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EC28; } }
L_0023EC20:
    set32(c.r[18], 0u + 1u);
    c.budget -= 2;
L_0023EC28:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 22u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EC70; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 112u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EC70; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EC70; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u + 50u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EC70; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_0023EC70:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 16u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023ECB8; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 112u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023ECB8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[4], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0023ECB8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 82u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0023ECB8; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 2;
L_0023ECB8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 22u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023ED00; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 112u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023ED00; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023ED00; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u + 53u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023ED00; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_0023ED00:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 25u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023ED80; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 112u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023ED48; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023ED48; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u + 49u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023ED78; } }
    c.budget -= 1;
L_0023ED48:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 112u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023ED80; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023ED80; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u + 51u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023ED80; } }
L_0023ED78:
    set32(c.r[18], 0u + 1u);
    c.budget -= 2;
L_0023ED80:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 30u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EDC8; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 112u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EDC8; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EDC8; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u + 54u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EDC8; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_0023EDC8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 30u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EDE0; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_0023EDE0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 29u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EDF8; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_0023EDF8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 26u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023F038; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 112u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023F038; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[4], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0023F038; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 82u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0023F038; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_0023F038; } }
L_0023EE40:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023F038; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 23u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EFC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EE70u);  if (depth < kMaxDepth) unit_0071(c, 75u, depth + 1u); else { c.pc = 0x002C52E0u; return; } if (c.pc != 0x0023EE70u) [[unlikely]] return; }
L_0023EE70:
    c.r[4].d[0] = ld8((c.r[2].w[0] + 25u));
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EEF8; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 119u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EEF8; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[3], 0u + 97u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EEF8; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u + 107u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EEF8; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 83u));
    set32(c.r[3], 0u + 117u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EEF8; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 84u));
    set32(c.r[3], 0u + 115u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EEF8; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 85u));
    set32(c.r[3], 0u + 101u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EEF8; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 86u));
    set32(c.r[3], 0u + 105u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EEF8; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0023EEF8:
    c.r[4].d[0] = ld8((c.r[2].w[0] + 25u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EFC8; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 119u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EF80; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[3], 0u + 97u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EF80; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u + 107u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EF80; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 83u));
    set32(c.r[3], 0u + 117u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EF80; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 84u));
    set32(c.r[3], 0u + 115u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EF80; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 85u));
    set32(c.r[3], 0u + 101u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EF80; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 86u));
    set32(c.r[3], 0u + 105u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EF80; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0023EF80:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 122u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EFC8; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[3], 0u + 101u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EFC8; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u + 100u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EFC8; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 83u));
    set32(c.r[3], 0u + 110u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023EFC8; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0023EFC8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 20u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023F038; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EFE4u);  if (depth < kMaxDepth) unit_0071(c, 75u, depth + 1u); else { c.pc = 0x002C52E0u; return; } if (c.pc != 0x0023EFE4u) [[unlikely]] return; }
L_0023EFE4:
    c.r[4].d[0] = ld8((c.r[2].w[0] + 25u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023F038; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 116u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023F038; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 81u));
    set32(c.r[3], 0u + 117u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023F038; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u + 107u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023F038; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 83u));
    set32(c.r[3], 0u + 105u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023F038; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0023F038:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], 0u + 120u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023F0B0; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 82u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x43940000u);  if (t) { goto L_0023F068; } }
    c.r[3].d[0] = c.r[3].d[0] | 42598ull;
    c.f[1] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023F078; } }
L_0023F068:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43950000u);
    c.r[3].d[0] = c.r[3].d[0] | 42598ull;
    c.f[1] = c.r[3].w[0];
    c.budget -= 4;
L_0023F078:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[3], c.r[3].w[0] + 29044u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 51u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0023F0B0; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0023F0B0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[3], c.r[29].w[0] + 208u);  if (t) { goto L_0023F198; } }
    set32(c.r[2], c.r[29].w[0] + 256u);
    st64((c.r[29].w[0]), c.r[3].d[0]);
    set32(c.r[5], c.r[20].w[0] + 80u);
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[3], c.r[20].w[0] + 640u);
    st64((c.r[29].w[0] + 16u), c.r[3].d[0]);
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[4], ld32((c.r[23].w[0] + 816u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[7], ld32((c.r[28].w[0] - 23776u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[6], c.r[20].w[0] + 144u);
    set32(c.r[8], c.r[20].w[0] + 336u);
    set32(c.r[9], c.r[20].w[0] + 400u);
    set32(c.r[10], c.r[20].w[0] + 464u);
    set32(c.r[11], c.r[20].w[0] + 528u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 11);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F114u); set32(c.r[4], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 247u, depth + 1u); else { c.pc = 0x00127A50u; return; } if (c.pc != 0x0023F114u) [[unlikely]] return; }
L_0023F114:
    set32(c.r[5], ld32((c.r[23].w[0] + 816u)));
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 11);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F144u); set32(c.r[5], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_004F(c, 145u, depth + 1u); else { c.pc = 0x0023F8B0u; return; } if (c.pc != 0x0023F144u) [[unlikely]] return; }
L_0023F144:
    set32(c.r[4], ld32((c.r[23].w[0] + 816u)));
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 11);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F170u); set32(c.r[4], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_006B(c, 171u, depth + 1u); else { c.pc = 0x002AE230u; return; } if (c.pc != 0x0023F170u) [[unlikely]] return; }
L_0023F170:
    set32(c.r[2], ld32((c.r[28].w[0] - 23904u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[30].d[0];  if (t) { goto L_0023F188; } }
    st32((c.r[28].w[0] - 23904u), c.r[30].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F188u); set32(c.r[4], ld32((c.r[28].w[0] - 23904u)));  if (depth < kMaxDepth) unit_006B(c, 174u, depth + 1u); else { c.pc = 0x002AE540u; return; } if (c.pc != 0x0023F188u) [[unlikely]] return; }
L_0023F188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F190u); set32(c.r[4], ld32((c.r[16].w[0] + 100u)));  if (depth < kMaxDepth) unit_006B(c, 167u, depth + 1u); else { c.pc = 0x002AE160u; return; } if (c.pc != 0x0023F190u) [[unlikely]] return; }
L_0023F190:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023F1B0; } }
L_0023F198:
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[4], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    st32((c.r[20].w[0] + 12u), c.r[4].w[0]);
    st8((c.r[3].w[0] + 16u), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.budget -= 6;
L_0023F1B0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_0023F1B8:
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023E338u | kUnwind; return; } goto L_0023E338; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0023F1E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F1DCu);  if (depth < kMaxDepth) unit_004F(c, 99u, depth + 1u); else { c.pc = 0x0023DA00u; return; } if (c.pc != 0x0023F1DCu) [[unlikely]] return; }
L_0023F1DC:
    c.budget -= 1;
L_0023F1E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 576u);  c.pc = t; return; }
L_0023F210:
    set32(c.r[29], c.r[29].w[0] - 576u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.r[1].d[0] = c.r[1].d[0] | 4752ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    set32(c.r[30], c.r[30].w[0] - 8560u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[20].w[0] + c.r[1].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] + 15664u);
    c.budget -= 25;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 192u), c.r[3].w[0]);  if (t) { goto L_0023F880; } }
    set32(c.r[3], 0u + 4080u);
    st32((c.r[20].w[0] + 640u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 652u), c.f[12]);
    st32((c.r[29].w[0] + 240u), 0u);
    st32((c.r[29].w[0] + 232u), 0u);
    st32((c.r[29].w[0] + 228u), 0u);
    c.budget -= 8;
    { const bool t = c.r[22].d[0] == 0ull; st32((c.r[29].w[0] + 224u), 0u);  if (t) { goto L_0023F2E0; } }
    c.f[14] = ld32((c.r[5].w[0] + 4032u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x457F0000u);
    c.f[15] = ld32((c.r[5].w[0] + 4036u));
    c.r[2].d[0] = c.r[2].d[0] | 61440ull;
    c.f[16] = ld32((c.r[5].w[0] + 4040u));
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F2B8u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_004F(c, 110u, depth + 1u); else { c.pc = 0x0023E020u; return; } if (c.pc != 0x0023F2B8u) [[unlikely]] return; }
L_0023F2B8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    set32(c.r[4], c.r[29].w[0] + 384u);
    set32(c.r[6], c.r[20].w[0] + 208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F2CCu); set32(c.r[5], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0000(c, 215u, depth + 1u); else { c.pc = 0x00102180u; return; } if (c.pc != 0x0023F2CCu) [[unlikely]] return; }
L_0023F2CC:
    set32(c.r[4], c.r[29].w[0] + 512u);
    set32(c.r[5], c.r[29].w[0] + 448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F2DCu); set32(c.r[6], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_0000(c, 215u, depth + 1u); else { c.pc = 0x00102180u; return; } if (c.pc != 0x0023F2DCu) [[unlikely]] return; }
L_0023F2DC:
    c.budget -= 1;
L_0023F2E0:
    set32(c.r[3], c.r[23].w[0] << 1);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[23].w[0]);
    set32(c.r[7], c.r[3].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + 10544u);
    set32(c.r[6], c.r[5].w[0] + c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[4], c.r[4].w[0] + 10548u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    set32(c.r[5], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + 10528u);
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[3].w[0] + c.r[7].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    set32(c.r[3], c.r[3].w[0] + 10532u);
    st32((c.r[29].w[0] + 256u), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[29].w[0] + 260u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[29].w[0] + 264u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 268u), c.f[0]);  if (t) { goto L_0023F858; } }
L_0023F348:
    set32(c.r[4], c.r[18].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] - c.r[18].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.r[1].d[0] = c.r[1].d[0] | 4784ull;
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    set32(c.r[3], 0u + 110u);
    set32(c.r[17], c.r[4].w[0] + c.r[1].w[0]);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 80u));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0023F3C0; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_0023F3C0; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x007D0000u);  if (t) { goto L_0023F3C0; } }
    set32(c.r[21], 0u + 1u);
    c.f[3] = ld32((c.r[1].w[0] + 10592u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    c.f[2] = ld32((c.r[1].w[0] + 10596u));
    st32((c.r[29].w[0] + 256u), c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    c.f[1] = ld32((c.r[1].w[0] + 10576u));
    st32((c.r[29].w[0] + 260u), c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    c.f[0] = ld32((c.r[1].w[0] + 10580u));
    st32((c.r[29].w[0] + 264u), c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F3BCu); st32((c.r[29].w[0] + 268u), c.f[0]);  if (depth < kMaxDepth) unit_004F(c, 99u, depth + 1u); else { c.pc = 0x0023DA00u; return; } if (c.pc != 0x0023F3BCu) [[unlikely]] return; }
L_0023F3BC:
    c.budget -= 1;
L_0023F3C0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_0023F850; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_0023F6C0; } }
    c.f[0] = ld32((c.r[17].w[0] + 64u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[4].w[0] + 5488u);
    set32(c.r[3], c.r[3].w[0] + 5536u);
    set32(c.r[8], c.r[29].w[0] + 272u);
    st32((c.r[29].w[0] + 272u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 68u));
    st32((c.r[29].w[0] + 276u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 72u));
    st32((c.r[29].w[0] + 280u), c.f[0]);
    st32((c.r[29].w[0] + 284u), c.r[7].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.f[0] = ld32((c.r[17].w[0] + 76u));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[6] = fp::mul(c.f[0], c.f[1]);
    ld128((c.r[8].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[8].w[0] + 16u) & ~15u, c.vu0.vf[4]);
    st128((c.r[8].w[0] + 32u) & ~15u, c.vu0.vf[4]);
    st128((c.r[8].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    st128((c.r[8].w[0] + 64u) & ~15u, c.vu0.vf[4]);
    st128((c.r[8].w[0] + 80u) & ~15u, c.vu0.vf[4]);
    st128((c.r[8].w[0] + 96u) & ~15u, c.vu0.vf[4]);
    set32(c.r[3], 0u + 2u);
    c.f[5] = ld32((c.r[29].w[0] + 288u));
    c.f[4] = ld32((c.r[29].w[0] + 304u));
    c.f[3] = ld32((c.r[29].w[0] + 324u));
    c.f[2] = ld32((c.r[29].w[0] + 340u));
    c.f[1] = ld32((c.r[29].w[0] + 360u));
    c.f[0] = ld32((c.r[29].w[0] + 376u));
    c.f[5] = fp::sub(c.f[5], c.f[6]);
    c.f[4] = fp::add(c.f[4], c.f[6]);
    c.f[3] = fp::sub(c.f[3], c.f[6]);
    c.f[2] = fp::add(c.f[2], c.f[6]);
    c.f[1] = fp::sub(c.f[1], c.f[6]);
    c.f[0] = fp::add(c.f[0], c.f[6]);
    st32((c.r[29].w[0] + 288u), c.f[5]);
    st32((c.r[29].w[0] + 304u), c.f[4]);
    st32((c.r[29].w[0] + 324u), c.f[3]);
    st32((c.r[29].w[0] + 340u), c.f[2]);
    st32((c.r[29].w[0] + 360u), c.f[1]);
    c.budget -= 49;
    { const bool t = c.r[22].d[0] != c.r[3].d[0]; st32((c.r[29].w[0] + 376u), c.f[0]);  if (t) { goto L_0023F4C8; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 80u));
    set32(c.r[3], 0u + 109u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023F4C8; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023F4C8; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 82u));
    set32(c.r[3], 0u + 52u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023F5C8; } }
L_0023F4C8:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 80u));
    set32(c.r[3], 0u + 110u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023F4F8; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023F4F8; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 82u));
    set32(c.r[3], 0u + 52u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023F5C8; } }
L_0023F4F8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023F540; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 80u));
    set32(c.r[3], 0u + 109u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023F540; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023F540; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 82u));
    set32(c.r[3], 0u + 49u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023F5C8; } }
    c.budget -= 1;
L_0023F540:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 27u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023F580; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 80u));
    set32(c.r[3], 0u + 109u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023F580; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 81u));
    set32(c.r[4], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0023F580; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 82u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0023F5C8; } }
L_0023F580:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 32u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023F5D8; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 80u));
    set32(c.r[3], 0u + 109u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023F5D8; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023F5D8; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 82u));
    set32(c.r[3], 0u + 49u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023F5D8; } }
    c.budget -= 1;
L_0023F5C8:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0023F6C0; } }
    c.budget -= 1;
L_0023F5D8:
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F5E4u); set32(c.r[5], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_004F(c, 112u, depth + 1u); else { c.pc = 0x0023E100u; return; } if (c.pc != 0x0023F5E4u) [[unlikely]] return; }
L_0023F5E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023F5F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0023F6C0; } }
    c.budget -= 1;
L_0023F5F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F600u); set32(c.r[5], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_004F(c, 114u, depth + 1u); else { c.pc = 0x0023E180u; return; } if (c.pc != 0x0023F600u) [[unlikely]] return; }
L_0023F600:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023F658; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 15u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[16].d[0] = 0ull | 32776ull;  if (t) { goto L_0023F6C0; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 80u));
    set32(c.r[3], 0u + 109u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023F6C0; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023F6C0; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 82u));
    set32(c.r[3], 0u + 49u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023F6C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0023F6C0; } }
    c.budget -= 1;
L_0023F658:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0023F6B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023F6B0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 39u);  if (t) { goto L_0023F6B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023F6B0; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_0023F6B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0023F6B0; } }
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 19u);  if (t) { goto L_0023F6B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023F6B8; } }
    c.budget -= 1;
L_0023F6B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull | 32776ull;  if (t) { goto L_0023F6C0; } }
L_0023F6B8:
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_0023F6C0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 34u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023F750; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 80u));
    set32(c.r[3], 0u + 120u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[6], 0u + 1u);  if (t) { goto L_0023F750; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 82u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x43940000u);  if (t) { goto L_0023F708; } }
    c.r[3].d[0] = c.r[3].d[0] | 42598ull;
    c.f[1] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023F718; } }
    c.budget -= 1;
L_0023F708:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43950000u);
    c.r[3].d[0] = c.r[3].d[0] | 42598ull;
    c.f[1] = c.r[3].w[0];
    c.budget -= 4;
L_0023F718:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[3], c.r[3].w[0] + 29044u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 51u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0023F750; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0023F750:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[3], c.r[29].w[0] + 208u);  if (t) { goto L_0023F838; } }
    set32(c.r[2], c.r[29].w[0] + 256u);
    st64((c.r[29].w[0]), c.r[3].d[0]);
    set32(c.r[5], c.r[20].w[0] + 80u);
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[3], c.r[20].w[0] + 640u);
    st64((c.r[29].w[0] + 16u), c.r[3].d[0]);
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[4], ld32((c.r[30].w[0] + 816u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[7], ld32((c.r[28].w[0] - 23776u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[6], c.r[20].w[0] + 144u);
    set32(c.r[8], c.r[20].w[0] + 336u);
    set32(c.r[9], c.r[20].w[0] + 400u);
    set32(c.r[10], c.r[20].w[0] + 464u);
    set32(c.r[11], c.r[20].w[0] + 528u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 11);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F7B4u); set32(c.r[4], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 247u, depth + 1u); else { c.pc = 0x00127A50u; return; } if (c.pc != 0x0023F7B4u) [[unlikely]] return; }
L_0023F7B4:
    set32(c.r[5], ld32((c.r[30].w[0] + 816u)));
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 11);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F7E4u); set32(c.r[5], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_004F(c, 145u, depth + 1u); else { c.pc = 0x0023F8B0u; return; } if (c.pc != 0x0023F7E4u) [[unlikely]] return; }
L_0023F7E4:
    set32(c.r[4], ld32((c.r[30].w[0] + 816u)));
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 11);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F810u); set32(c.r[4], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_006B(c, 171u, depth + 1u); else { c.pc = 0x002AE230u; return; } if (c.pc != 0x0023F810u) [[unlikely]] return; }
L_0023F810:
    set32(c.r[2], ld32((c.r[28].w[0] - 23904u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_0023F828; } }
    st32((c.r[28].w[0] - 23904u), c.r[16].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F828u); set32(c.r[4], ld32((c.r[28].w[0] - 23904u)));  if (depth < kMaxDepth) unit_006B(c, 174u, depth + 1u); else { c.pc = 0x002AE540u; return; } if (c.pc != 0x0023F828u) [[unlikely]] return; }
L_0023F828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F830u); set32(c.r[4], ld32((c.r[17].w[0] + 100u)));  if (depth < kMaxDepth) unit_006B(c, 167u, depth + 1u); else { c.pc = 0x002AE160u; return; } if (c.pc != 0x0023F830u) [[unlikely]] return; }
L_0023F830:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023F850; } }
L_0023F838:
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[4], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    st32((c.r[20].w[0] + 12u), c.r[4].w[0]);
    st8((c.r[3].w[0] + 16u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 6;
L_0023F850:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_0023F858:
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023F348u | kUnwind; return; } goto L_0023F348; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0023F880; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F87Cu);  if (depth < kMaxDepth) unit_004F(c, 99u, depth + 1u); else { c.pc = 0x0023DA00u; return; } if (c.pc != 0x0023F87Cu) [[unlikely]] return; }
L_0023F87C:
    c.budget -= 1;
L_0023F880:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 576u);  c.pc = t; return; }
L_0023F8B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 11u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_0023F908; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0023F8F8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0023F8E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023F910; } }
    c.budget -= 1;
L_0023F8E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F8F0u);  if (depth < kMaxDepth) unit_004F(c, 149u, depth + 1u); else { c.pc = 0x0023F920u; return; } if (c.pc != 0x0023F8F0u) [[unlikely]] return; }
L_0023F8F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023F910; } }
L_0023F8F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F900u);  if (depth < kMaxDepth) unit_004F(c, 150u, depth + 1u); else { c.pc = 0x0023F970u; return; } if (c.pc != 0x0023F900u) [[unlikely]] return; }
L_0023F900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023F910; } }
L_0023F908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F910u);  if (depth < kMaxDepth) unit_004F(c, 151u, depth + 1u); else { c.pc = 0x0023F9C0u; return; } if (c.pc != 0x0023F910u) [[unlikely]] return; }
L_0023F910:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0023F920:
    c.r[6].d[0] = ld8((c.r[4].w[0] + 80u));
    set32(c.r[3], 0u + 112u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_0023F960; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 81u));
    set32(c.r[6], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_0023F960; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 82u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0023F960; } }
    st32((c.r[5].w[0] + 532u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 23936u));
    st32((c.r[5].w[0] + 512u), c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 23940u));
    st32((c.r[5].w[0] + 516u), c.f[0]);
    c.budget -= 5;
L_0023F960:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0023F970:
    c.r[6].d[0] = ld8((c.r[4].w[0] + 80u));
    set32(c.r[3], 0u + 112u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_0023F9B8; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_0023F9B8; } }
    c.r[4].d[0] = ld8((c.r[4].w[0] + 82u));
    set32(c.r[3], 0u + 52u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0023F9B8; } }
    st32((c.r[5].w[0] + 532u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 23936u));
    st32((c.r[5].w[0] + 512u), c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 23940u));
    st32((c.r[5].w[0] + 516u), c.f[0]);
    c.budget -= 6;
L_0023F9B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0023F9C0:
    c.r[6].d[0] = ld8((c.r[4].w[0] + 80u));
    set32(c.r[3], 0u + 112u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_0023FA08; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 81u));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_0023FA08; } }
    c.r[4].d[0] = ld8((c.r[4].w[0] + 82u));
    set32(c.r[3], 0u + 49u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0023FA08; } }
    st32((c.r[5].w[0] + 532u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 23936u));
    st32((c.r[5].w[0] + 512u), c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 23940u));
    st32((c.r[5].w[0] + 516u), c.f[0]);
    c.budget -= 6;
L_0023FA08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0023FA10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FA24u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_004F(c, 105u, depth + 1u); else { c.pc = 0x0023DF50u; return; } if (c.pc != 0x0023FA24u) [[unlikely]] return; }
L_0023FA24:
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 433u)));
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FA38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004F(c, 99u, depth + 1u); else { c.pc = 0x0023DA00u; return; } if (c.pc != 0x0023FA38u) [[unlikely]] return; }
L_0023FA38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FA40u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0069(c, 73u, depth + 1u); else { c.pc = 0x002A5300u; return; } if (c.pc != 0x0023FA40u) [[unlikely]] return; }
L_0023FA40:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_0023FA60; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FA5Cu); set32(c.r[4], c.r[4].w[0] - 16864u);  if (depth < kMaxDepth) unit_006B(c, 176u, depth + 1u); else { c.pc = 0x002AE5D0u; return; } if (c.pc != 0x0023FA5Cu) [[unlikely]] return; }
L_0023FA5C:
    c.budget -= 1;
L_0023FA60:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00860000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[4], c.r[4].w[0] - 24832u);
    set32(c.r[5], c.r[5].w[0] - 24768u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FA7Cu); st32((c.r[1].w[0] - 24836u), 0u);  if (depth < kMaxDepth) unit_0065(c, 281u, depth + 1u); else { c.pc = 0x00297560u; return; } if (c.pc != 0x0023FA7Cu) [[unlikely]] return; }
L_0023FA7C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0023FA90; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23952u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023FAC0; } }
L_0023FA90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[20] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[4], c.r[4].w[0] - 24848u);
    c.r[5].d[0] = 0ull | 32771ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FAB4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_004F(c, 116u, depth + 1u); else { c.pc = 0x0023E200u; return; } if (c.pc != 0x0023FAB4u) [[unlikely]] return; }
L_0023FAB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023FAE8; } }
    c.budget -= 1;
L_0023FAC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[20] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[4], c.r[4].w[0] - 24848u);
    c.r[5].d[0] = 0ull | 32772ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FAE4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_004F(c, 116u, depth + 1u); else { c.pc = 0x0023E200u; return; } if (c.pc != 0x0023FAE4u) [[unlikely]] return; }
L_0023FAE4:
    c.budget -= 1;
L_0023FAE8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_0023FB08; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FB04u); set32(c.r[4], c.r[4].w[0] - 16880u);  if (depth < kMaxDepth) unit_006B(c, 176u, depth + 1u); else { c.pc = 0x002AE5D0u; return; } if (c.pc != 0x0023FB04u) [[unlikely]] return; }
L_0023FB04:
    c.budget -= 1;
L_0023FB08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] + 20320u);
    set32(c.r[5], c.r[5].w[0] + 20384u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FB24u); st32((c.r[1].w[0] + 20316u), 0u);  if (depth < kMaxDepth) unit_0065(c, 281u, depth + 1u); else { c.pc = 0x00297560u; return; } if (c.pc != 0x0023FB24u) [[unlikely]] return; }
L_0023FB24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FB2Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0069(c, 73u, depth + 1u); else { c.pc = 0x002A5300u; return; } if (c.pc != 0x0023FB2Cu) [[unlikely]] return; }
L_0023FB2C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u + 21u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 17u);  if (t) { goto L_0023FB70; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0023FB70; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] - 29u);  if (t) { goto L_0023FB70; } }
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0023FB70; } }
    set32(c.r[2], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0023FB98; } }
    c.budget -= 1;
L_0023FB70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] + 20304u);
    c.r[5].d[0] = 0ull | 32771ull;
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FB8Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_004F(c, 116u, depth + 1u); else { c.pc = 0x0023E200u; return; } if (c.pc != 0x0023FB8Cu) [[unlikely]] return; }
L_0023FB8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023FBB8; } }
    c.budget -= 1;
L_0023FB98:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] + 20304u);
    c.r[5].d[0] = 0ull | 32771ull;
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FBB4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_004F(c, 131u, depth + 1u); else { c.pc = 0x0023F210u; return; } if (c.pc != 0x0023FBB4u) [[unlikely]] return; }
L_0023FBB4:
    c.budget -= 1;
L_0023FBB8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023FBD8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], 0u + 26u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0023FC20; } }
L_0023FBD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FBE0u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0069(c, 73u, depth + 1u); else { c.pc = 0x002A5300u; return; } if (c.pc != 0x0023FBE0u) [[unlikely]] return; }
L_0023FBE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FBF0u); set32(c.r[4], c.r[4].w[0] - 16832u);  if (depth < kMaxDepth) unit_006B(c, 176u, depth + 1u); else { c.pc = 0x002AE5D0u; return; } if (c.pc != 0x0023FBF0u) [[unlikely]] return; }
L_0023FBF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00880000u);
    c.r[5].d[0] = 0ull | 32772ull;
    set32(c.r[4], c.r[4].w[0] + 15920u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FC0Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_004F(c, 116u, depth + 1u); else { c.pc = 0x0023E200u; return; } if (c.pc != 0x0023FC0Cu) [[unlikely]] return; }
L_0023FC0C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FC1Cu); set32(c.r[4], c.r[4].w[0] - 16848u);  if (depth < kMaxDepth) unit_006B(c, 176u, depth + 1u); else { c.pc = 0x002AE5D0u; return; } if (c.pc != 0x0023FC1Cu) [[unlikely]] return; }
L_0023FC1C:
    c.budget -= 1;
L_0023FC20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FC28u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0069(c, 73u, depth + 1u); else { c.pc = 0x002A5300u; return; } if (c.pc != 0x0023FC28u) [[unlikely]] return; }
L_0023FC28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[4], c.r[4].w[0] - 4448u);
    set32(c.r[5], c.r[5].w[0] - 4384u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FC44u); st32((c.r[1].w[0] - 4452u), 0u);  if (depth < kMaxDepth) unit_0065(c, 281u, depth + 1u); else { c.pc = 0x00297560u; return; } if (c.pc != 0x0023FC44u) [[unlikely]] return; }
L_0023FC44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[4], c.r[4].w[0] - 4464u);
    c.r[5].d[0] = 0ull | 32773ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FC60u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004F(c, 116u, depth + 1u); else { c.pc = 0x0023E200u; return; } if (c.pc != 0x0023FC60u) [[unlikely]] return; }
L_0023FC60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0023FC80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x019A0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[1].w[0] + 4100u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00880000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00090000u);
    c.r[1].d[0] = c.r[1].d[0] | 1ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 15920u);  if (t) { goto L_0023FCC0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x019A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4096u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0023FD60; } }
    c.budget -= 1;
L_0023FCC0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x019A0000u);  if (t) { goto L_0023FCD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4096u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0023FD60; } }
L_0023FCD0:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x019A0000u);
    st8((c.r[1].w[0] + 4096u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x019A0000u);
    st16((c.r[1].w[0] + 4116u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x019A0000u);
    st16((c.r[1].w[0] + 4118u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x019A0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FD00u); c.r[4].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_0050(c, 197u, depth + 1u); else { c.pc = 0x002413A0u; return; } if (c.pc != 0x0023FD00u) [[unlikely]] return; }
L_0023FD00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x019A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x019A0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 4100u)));
    c.r[4].d[0] = c.r[2].d[0] | 20544ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01A20000u);
    c.r[5].d[0] = c.r[2].d[0] | 21584ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FD20u); set32(c.r[6], c.r[3].w[0] - 16u);  if (depth < kMaxDepth) unit_0050(c, 198u, depth + 1u); else { c.pc = 0x002413F0u; return; } if (c.pc != 0x0023FD20u) [[unlikely]] return; }
L_0023FD20:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0023FD28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x019A0000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 20144u)));
    c.r[6].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FD44u); c.r[4].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_0050(c, 211u, depth + 1u); else { c.pc = 0x002415C0u; return; } if (c.pc != 0x0023FD44u) [[unlikely]] return; }
L_0023FD44:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023FD28u | kUnwind; return; } goto L_0023FD28; } }
    st32((c.r[28].w[0] - 23944u), 0u);
    st32((c.r[28].w[0] - 23948u), 0u);
    c.budget -= 3;
L_0023FD60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0023FD80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0023FDE0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[5].d[0] = c.r[3].d[0] << 48;
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 22u)));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023FDE0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23944u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FDD0u); st32((c.r[28].w[0] - 23944u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0050(c, 203u, depth + 1u); else { c.pc = 0x002414C0u; return; } if (c.pc != 0x0023FDD0u) [[unlikely]] return; }
L_0023FDD0:
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 1u);
    st32((c.r[28].w[0] - 23948u), c.r[3].w[0]);
    c.budget -= 4;
L_0023FDE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0023FDF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23948u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023FE10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x019A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FE10u); c.r[4].d[0] = c.r[2].d[0] | 4096ull;  if (depth < kMaxDepth) unit_0050(c, 222u, depth + 1u); else { c.pc = 0x00241890u; return; } if (c.pc != 0x0023FE10u) [[unlikely]] return; }
L_0023FE10:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0023FE20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FE34u); set32(c.r[4], c.r[4].w[0] - 4464u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x0023FE34u) [[unlikely]] return; }
L_0023FE34:
    st32((c.r[28].w[0] - 23936u), 0u);
    st32((c.r[28].w[0] - 23940u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0023FE50:
    c.f[2] = ld32((c.r[28].w[0] - 23936u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3A030000u);
    c.r[4].d[0] = c.r[4].d[0] | 4719ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[28].w[0] - 23936u), c.f[1]);  if (t) { goto L_0023FE80; } }
    st32((c.r[28].w[0] - 23936u), 0u);
    c.budget -= 1;
L_0023FE80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0023FE90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FEA4u); set32(c.r[4], c.r[4].w[0] - 24848u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x0023FEA4u) [[unlikely]] return; }
L_0023FEA4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FEB0u); set32(c.r[4], c.r[4].w[0] - 4464u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x0023FEB0u) [[unlikely]] return; }
L_0023FEB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00880000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FEBCu); set32(c.r[4], c.r[4].w[0] + 15920u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x0023FEBCu) [[unlikely]] return; }
L_0023FEBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FEC4u);  if (depth < kMaxDepth) unit_004F(c, 172u, depth + 1u); else { c.pc = 0x0023FC80u; return; } if (c.pc != 0x0023FEC4u) [[unlikely]] return; }
L_0023FEC4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0023FED0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x019A0000u);
    c.budget -= 3;
    { c.r[4].d[0] = c.r[2].d[0] | 4096ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023FD80u | kUnwind; return; } goto L_0023FD80; }
L_0023FEE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FEF4u); set32(c.r[4], c.r[4].w[0] - 24848u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x0023FEF4u) [[unlikely]] return; }
L_0023FEF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FF00u); set32(c.r[4], c.r[4].w[0] - 4464u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x0023FF00u) [[unlikely]] return; }
L_0023FF00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00880000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FF0Cu); set32(c.r[4], c.r[4].w[0] + 15920u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x0023FF0Cu) [[unlikely]] return; }
L_0023FF0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FF14u);  if (depth < kMaxDepth) unit_004F(c, 172u, depth + 1u); else { c.pc = 0x0023FC80u; return; } if (c.pc != 0x0023FF14u) [[unlikely]] return; }
L_0023FF14:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0023FF20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x019A0000u);
    c.budget -= 3;
    { c.r[4].d[0] = c.r[2].d[0] | 4096ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023FD80u | kUnwind; return; } goto L_0023FD80; }
L_0023FF30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FF44u); set32(c.r[4], c.r[4].w[0] - 24848u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x0023FF44u) [[unlikely]] return; }
L_0023FF44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FF50u); set32(c.r[4], c.r[4].w[0] - 4464u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x0023FF50u) [[unlikely]] return; }
L_0023FF50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00880000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FF5Cu); set32(c.r[4], c.r[4].w[0] + 15920u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x0023FF5Cu) [[unlikely]] return; }
L_0023FF5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FF64u);  if (depth < kMaxDepth) unit_0045(c, 311u, depth + 1u); else { c.pc = 0x00216A10u; return; } if (c.pc != 0x0023FF64u) [[unlikely]] return; }
L_0023FF64:
    st32((c.r[28].w[0] - 23936u), 0u);
    st32((c.r[28].w[0] - 23940u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0023FF80:
    c.f[2] = ld32((c.r[28].w[0] - 23940u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[4].d[0] = c.r[4].d[0] | 4719ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[28].w[0] - 23940u), c.f[1]);  if (t) { goto L_0023FFB0; } }
    st32((c.r[28].w[0] - 23940u), 0u);
    c.budget -= 1;
L_0023FFB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0023FFC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FFD4u); set32(c.r[4], c.r[4].w[0] - 24848u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x0023FFD4u) [[unlikely]] return; }
    goto L_0023FFD4;
L_0023FFD0:
    set32(c.r[4], c.r[4].w[0] - 24848u);
    c.budget -= 1;
L_0023FFD4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FFE0u); set32(c.r[4], c.r[4].w[0] - 4464u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x0023FFE0u) [[unlikely]] return; }
L_0023FFE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00880000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FFECu); set32(c.r[4], c.r[4].w[0] + 15920u);  if (depth < kMaxDepth) unit_004F(c, 72u, depth + 1u); else { c.pc = 0x0023D270u; return; } if (c.pc != 0x0023FFECu) [[unlikely]] return; }
L_0023FFEC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
}

}
