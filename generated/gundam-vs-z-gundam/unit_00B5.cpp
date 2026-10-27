#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B5[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 15, 0, 16, 0, 0, 0, 0, 17, 0,
    0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 19, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 26, 0, 27, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0,
    0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 83, 0, 84, 0, 85, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0,
    0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0,
    92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 96, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0,
    0, 101, 0, 102, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 112, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0,
    116, 0, 0, 117, 0, 118, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 128, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 133, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0,
    139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 144, 0, 145,
    0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 149, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153,
    0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0,
    0, 0, 159, 0, 0, 160, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 165, 0, 166, 0, 0, 0, 0,
    167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 176, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 181,
    0, 182, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 192, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0,
    0, 0, 196, 0, 0, 197, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 203, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 206, 0, 0, 0, 207, 0, 0, 208, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 213, 0, 214,
    0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0,
    0, 224, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 229, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0,
    232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00B5(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003D4000;
    case 2u: goto L_003D4020;
    case 3u: goto L_003D4058;
    case 4u: goto L_003D4068;
    case 5u: goto L_003D40F8;
    case 6u: goto L_003D4128;
    case 7u: goto L_003D4138;
    case 8u: goto L_003D4144;
    case 9u: goto L_003D4188;
    case 10u: goto L_003D41A8;
    case 11u: goto L_003D41E0;
    case 12u: goto L_003D42B8;
    case 13u: goto L_003D4340;
    case 14u: goto L_003D4350;
    case 15u: goto L_003D435C;
    case 16u: goto L_003D4364;
    case 17u: goto L_003D4378;
    case 18u: goto L_003D4388;
    case 19u: goto L_003D4508;
    case 20u: goto L_003D4518;
    case 21u: goto L_003D4524;
    case 22u: goto L_003D45B0;
    case 23u: goto L_003D4688;
    case 24u: goto L_003D4710;
    case 25u: goto L_003D4720;
    case 26u: goto L_003D472C;
    case 27u: goto L_003D4734;
    case 28u: goto L_003D4748;
    case 29u: goto L_003D4754;
    case 30u: goto L_003D48D0;
    case 31u: goto L_003D48E0;
    case 32u: goto L_003D48EC;
    case 33u: goto L_003D4980;
    case 34u: goto L_003D49AC;
    case 35u: goto L_003D4A14;
    case 36u: goto L_003D4A28;
    case 37u: goto L_003D4AB4;
    case 38u: goto L_003D4CA8;
    case 39u: goto L_003D4CB4;
    case 40u: goto L_003D4D40;
    case 41u: goto L_003D4D4C;
    case 42u: goto L_003D4F48;
    case 43u: goto L_003D4F54;
    case 44u: goto L_003D5010;
    case 45u: goto L_003D501C;
    case 46u: goto L_003D50E0;
    case 47u: goto L_003D5104;
    case 48u: goto L_003D5110;
    case 49u: goto L_003D5198;
    case 50u: goto L_003D5208;
    case 51u: goto L_003D5240;
    case 52u: goto L_003D526C;
    case 53u: goto L_003D5278;
    case 54u: goto L_003D52A4;
    case 55u: goto L_003D52B0;
    case 56u: goto L_003D52F0;
    case 57u: goto L_003D5320;
    case 58u: goto L_003D5350;
    case 59u: goto L_003D5360;
    case 60u: goto L_003D5388;
    case 61u: goto L_003D53B8;
    case 62u: goto L_003D53F0;
    case 63u: goto L_003D5458;
    case 64u: goto L_003D546C;
    case 65u: goto L_003D54A0;
    case 66u: goto L_003D54F0;
    case 67u: goto L_003D5540;
    case 68u: goto L_003D5580;
    case 69u: goto L_003D559C;
    case 70u: goto L_003D55D8;
    case 71u: goto L_003D55E4;
    case 72u: goto L_003D5610;
    case 73u: goto L_003D5638;
    case 74u: goto L_003D5688;
    case 75u: goto L_003D56D0;
    case 76u: goto L_003D5718;
    case 77u: goto L_003D5760;
    case 78u: goto L_003D57A8;
    case 79u: goto L_003D57F0;
    case 80u: goto L_003D5838;
    case 81u: goto L_003D5880;
    case 82u: goto L_003D58C8;
    case 83u: goto L_003D5910;
    case 84u: goto L_003D5918;
    case 85u: goto L_003D5920;
    case 86u: goto L_003D5928;
    case 87u: goto L_003D5930;
    case 88u: goto L_003D5990;
    case 89u: goto L_003D59F8;
    case 90u: goto L_003D5A1C;
    case 91u: goto L_003D5AE0;
    case 92u: goto L_003D5B00;
    case 93u: goto L_003D5BA8;
    case 94u: goto L_003D5C18;
    case 95u: goto L_003D5C28;
    case 96u: goto L_003D5C34;
    case 97u: goto L_003D5C3C;
    case 98u: goto L_003D5C4C;
    case 99u: goto L_003D5CE8;
    case 100u: goto L_003D5CF8;
    case 101u: goto L_003D5D04;
    case 102u: goto L_003D5D0C;
    case 103u: goto L_003D5D20;
    case 104u: goto L_003D5D2C;
    case 105u: goto L_003D5EB4;
    case 106u: goto L_003D5EC4;
    case 107u: goto L_003D5ED0;
    case 108u: goto L_003D5F10;
    case 109u: goto L_003D5FB8;
    case 110u: goto L_003D6028;
    case 111u: goto L_003D6038;
    case 112u: goto L_003D6044;
    case 113u: goto L_003D604C;
    case 114u: goto L_003D605C;
    case 115u: goto L_003D60F0;
    case 116u: goto L_003D6100;
    case 117u: goto L_003D610C;
    case 118u: goto L_003D6114;
    case 119u: goto L_003D6128;
    case 120u: goto L_003D6134;
    case 121u: goto L_003D62C4;
    case 122u: goto L_003D62D4;
    case 123u: goto L_003D62E0;
    case 124u: goto L_003D6320;
    case 125u: goto L_003D63C8;
    case 126u: goto L_003D6438;
    case 127u: goto L_003D6448;
    case 128u: goto L_003D6454;
    case 129u: goto L_003D645C;
    case 130u: goto L_003D646C;
    case 131u: goto L_003D6510;
    case 132u: goto L_003D6520;
    case 133u: goto L_003D652C;
    case 134u: goto L_003D6534;
    case 135u: goto L_003D6548;
    case 136u: goto L_003D6558;
    case 137u: goto L_003D66E4;
    case 138u: goto L_003D66F4;
    case 139u: goto L_003D6700;
    case 140u: goto L_003D6740;
    case 141u: goto L_003D67E8;
    case 142u: goto L_003D6858;
    case 143u: goto L_003D6868;
    case 144u: goto L_003D6874;
    case 145u: goto L_003D687C;
    case 146u: goto L_003D688C;
    case 147u: goto L_003D6920;
    case 148u: goto L_003D6930;
    case 149u: goto L_003D693C;
    case 150u: goto L_003D6944;
    case 151u: goto L_003D6958;
    case 152u: goto L_003D6968;
    case 153u: goto L_003D6AFC;
    case 154u: goto L_003D6B0C;
    case 155u: goto L_003D6B18;
    case 156u: goto L_003D6B60;
    case 157u: goto L_003D6C08;
    case 158u: goto L_003D6C78;
    case 159u: goto L_003D6C88;
    case 160u: goto L_003D6C94;
    case 161u: goto L_003D6C9C;
    case 162u: goto L_003D6CAC;
    case 163u: goto L_003D6D48;
    case 164u: goto L_003D6D58;
    case 165u: goto L_003D6D64;
    case 166u: goto L_003D6D6C;
    case 167u: goto L_003D6D80;
    case 168u: goto L_003D6D90;
    case 169u: goto L_003D6F24;
    case 170u: goto L_003D6F34;
    case 171u: goto L_003D6F40;
    case 172u: goto L_003D6F80;
    case 173u: goto L_003D7028;
    case 174u: goto L_003D7098;
    case 175u: goto L_003D70A8;
    case 176u: goto L_003D70B4;
    case 177u: goto L_003D70BC;
    case 178u: goto L_003D70CC;
    case 179u: goto L_003D7160;
    case 180u: goto L_003D7170;
    case 181u: goto L_003D717C;
    case 182u: goto L_003D7184;
    case 183u: goto L_003D7198;
    case 184u: goto L_003D71A4;
    case 185u: goto L_003D7334;
    case 186u: goto L_003D7344;
    case 187u: goto L_003D7350;
    case 188u: goto L_003D7390;
    case 189u: goto L_003D7438;
    case 190u: goto L_003D74A8;
    case 191u: goto L_003D74B8;
    case 192u: goto L_003D74C4;
    case 193u: goto L_003D74CC;
    case 194u: goto L_003D74DC;
    case 195u: goto L_003D7578;
    case 196u: goto L_003D7588;
    case 197u: goto L_003D7594;
    case 198u: goto L_003D759C;
    case 199u: goto L_003D75B0;
    case 200u: goto L_003D75C0;
    case 201u: goto L_003D775C;
    case 202u: goto L_003D776C;
    case 203u: goto L_003D7778;
    case 204u: goto L_003D77F0;
    case 205u: goto L_003D7898;
    case 206u: goto L_003D7908;
    case 207u: goto L_003D7918;
    case 208u: goto L_003D7924;
    case 209u: goto L_003D792C;
    case 210u: goto L_003D793C;
    case 211u: goto L_003D79D8;
    case 212u: goto L_003D79E8;
    case 213u: goto L_003D79F4;
    case 214u: goto L_003D79FC;
    case 215u: goto L_003D7A10;
    case 216u: goto L_003D7A1C;
    case 217u: goto L_003D7BB4;
    case 218u: goto L_003D7BC4;
    case 219u: goto L_003D7BD0;
    case 220u: goto L_003D7C50;
    case 221u: goto L_003D7CF8;
    case 222u: goto L_003D7D68;
    case 223u: goto L_003D7D78;
    case 224u: goto L_003D7D84;
    case 225u: goto L_003D7D8C;
    case 226u: goto L_003D7D9C;
    case 227u: goto L_003D7E38;
    case 228u: goto L_003D7E48;
    case 229u: goto L_003D7E54;
    case 230u: goto L_003D7E5C;
    case 231u: goto L_003D7E70;
    case 232u: goto L_003D7E80;
    default: bad_entry(c, 0x003D4000u); return;
    }
L_003D4000:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 53705ull;  if (t) { goto L_003D4020; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 53704ull;  if (t) { goto L_003D4020; } }
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_003D4020:
    set32(c.r[4], ld32((c.r[7].w[0])));
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[20].w[0] + c.r[17].w[0]);  if (t) { goto L_003D4048; } }
    set32(c.r[4], 0u - 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 308u), c.r[4].w[0]);  if (t) { goto L_003D41A8; } }
L_003D4048:
    set32(c.r[3], c.r[20].w[0] + c.r[17].w[0]);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 308u), c.r[4].w[0]);  if (t) { goto L_003D41A8; } }
L_003D4058:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003D41A8; } }
    c.budget -= 1;
L_003D4068:
    c.r[4].d[0] = c.r[18].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[5], c.r[20].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[8], ld32((c.r[5].w[0] + 140u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 5056u)));
    set32(c.r[6], c.r[3].w[0] + 5056u);
    set32(c.r[3], c.r[8].w[0] - c.r[4].w[0]);
    c.r[7].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[7].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65504ull;  if (t) { goto L_003D40B8; } }
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D40E0; } }
    c.budget -= 1;
L_003D40B8:
    set32(c.r[4], c.r[20].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[17].w[0]);
    st32((c.r[6].w[0]), c.r[8].w[0]);
    set32(c.r[4], 0u + 2u);
    st32((c.r[5].w[0] + 308u), 0u);
    set32(c.r[3], c.r[20].w[0] + c.r[17].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[3].w[0] + 497u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 518u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D41A8; } }
L_003D40E0:
    set32(c.r[3], ld32((c.r[5].w[0] + 308u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[6].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[3].w[0]);  if (t) { goto L_003D41A8; } }
L_003D40F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 497u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[7].w[0] + 497u);  if (t) { goto L_003D4178; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], c.r[20].w[0] << 2);  if (t) { goto L_003D4128; } }
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4128u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EF900u; return; } if (c.pc != 0x003D4128u) [[unlikely]] return; }
L_003D4128:
    c.r[5].d[0] = c.r[22].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4138u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003D4138u) [[unlikely]] return; }
L_003D4138:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4144u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003D4144u) [[unlikely]] return; }
L_003D4144:
    set32(c.r[4], c.r[20].w[0] + c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 518u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 518u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 518u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_003D41A8; } }
    set32(c.r[3], 0u + 30u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D41A8; } }
    c.budget -= 1;
L_003D4178:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D41A8; } }
    c.budget -= 1;
L_003D4188:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 497u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[7].w[0] + 497u);  if (t) { goto L_003D41A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D41A8; } }
    c.budget -= 1;
L_003D41A0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003D41A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003D41E0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] << 56;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 56);
    set32(c.r[17], c.r[19].w[0] + 8248u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[20].w[0] + c.r[17].w[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 476u)));
    set32(c.r[21], c.r[19].w[0] + 304u);
    c.budget -= 21;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[7].w[0] + 476u);  if (t) { goto L_003D4568; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003D44D8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003D4448; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003D4258; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D4588; } }
L_003D4258:
    set32(c.r[3], c.r[20].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[3].w[0] + 96u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 96u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D4438; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 600u);  if (t) { goto L_003D4288; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003D4290; } }
L_003D4288:
    set32(c.r[2], 0u + 1200u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003D4290:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43AF0000u);
    set32(c.r[5], 0u + 14336u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 18432u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D42B8u); c.r[10].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003D42B8u) [[unlikely]] return; }
L_003D42B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D4588; } }
    set32(c.r[20], c.r[20].w[0] << 2);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[21].w[0] + c.r[20].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D4310; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 144u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 152u), c.f[0]);  if (t) { goto L_003D4328; } }
L_003D4310:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.budget -= 6;
L_003D4328:
    c.r[16].d[0] = c.r[18].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    set32(c.r[2], c.r[16].w[0] << 6);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4340u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003D4340u) [[unlikely]] return; }
L_003D4340:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4350u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003D4350u) [[unlikely]] return; }
L_003D4350:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D435Cu); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D435Cu) [[unlikely]] return; }
L_003D435C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4364u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003D4364u) [[unlikely]] return; }
L_003D4364:
    c.f[1] = ld32((c.r[29].w[0] + 136u));
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4378u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D4378u) [[unlikely]] return; }
L_003D4378:
    c.f[13] = c.f[0];
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4388u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D4388u) [[unlikely]] return; }
L_003D4388:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[5], c.r[20].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[6], c.r[4].w[0] + 5056u);
    set32(c.r[4], ld32((c.r[4].w[0] + 5056u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    st32((c.r[5].w[0] + 140u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 140u));
    st32((c.r[5].w[0] + 140u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 140u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[5].w[0] + 140u);  if (t) { goto L_003D43E0; } }
    c.r[3].d[0] = c.r[4].sd[0] < 6371ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 6371u);  if (t) { goto L_003D43E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_003D43F8; } }
L_003D43E0:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D43F8; } }
    st32((c.r[7].w[0]), 0u);
    c.budget -= 2;
L_003D43F8:
    set32(c.r[5], ld32((c.r[7].w[0])));
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[20].w[0] + c.r[17].w[0]);  if (t) { goto L_003D4428; } }
    set32(c.r[4], 0u - 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 308u), c.r[4].w[0]);  if (t) { goto L_003D4588; } }
    c.budget -= 1;
L_003D4428:
    set32(c.r[3], c.r[20].w[0] + c.r[17].w[0]);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 308u), c.r[4].w[0]);  if (t) { goto L_003D4588; } }
L_003D4438:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003D4588; } }
    c.budget -= 1;
L_003D4448:
    c.r[4].d[0] = c.r[18].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[5], c.r[20].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[8], ld32((c.r[5].w[0] + 140u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 5056u)));
    set32(c.r[6], c.r[3].w[0] + 5056u);
    set32(c.r[3], c.r[8].w[0] - c.r[4].w[0]);
    c.r[7].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[7].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65504ull;  if (t) { goto L_003D4498; } }
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D44C0; } }
    c.budget -= 1;
L_003D4498:
    set32(c.r[4], c.r[20].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[17].w[0]);
    st32((c.r[6].w[0]), c.r[8].w[0]);
    set32(c.r[4], 0u + 2u);
    st32((c.r[5].w[0] + 308u), 0u);
    set32(c.r[3], c.r[20].w[0] + c.r[17].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[3].w[0] + 497u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 518u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D4588; } }
L_003D44C0:
    set32(c.r[3], ld32((c.r[5].w[0] + 308u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[6].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[3].w[0]);  if (t) { goto L_003D4588; } }
L_003D44D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 497u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[7].w[0] + 497u);  if (t) { goto L_003D4558; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], c.r[20].w[0] << 2);  if (t) { goto L_003D4508; } }
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4508u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EF900u; return; } if (c.pc != 0x003D4508u) [[unlikely]] return; }
L_003D4508:
    c.r[5].d[0] = c.r[22].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4518u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003D4518u) [[unlikely]] return; }
L_003D4518:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4524u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003D4524u) [[unlikely]] return; }
L_003D4524:
    set32(c.r[4], c.r[20].w[0] + c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 518u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 518u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 518u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_003D4588; } }
    set32(c.r[3], 0u + 30u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D4588; } }
    c.budget -= 1;
L_003D4558:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D4588; } }
    c.budget -= 1;
L_003D4568:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 497u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[7].w[0] + 497u);  if (t) { goto L_003D4580; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D4588; } }
    c.budget -= 1;
L_003D4580:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003D4588:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003D45B0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] << 56;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 56);
    set32(c.r[17], c.r[19].w[0] + 8248u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[20].w[0] + c.r[17].w[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 476u)));
    set32(c.r[21], c.r[19].w[0] + 304u);
    c.budget -= 21;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[7].w[0] + 476u);  if (t) { goto L_003D4930; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003D48A0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003D4810; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003D4628; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D4950; } }
L_003D4628:
    set32(c.r[3], c.r[20].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[3].w[0] + 96u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 96u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D4800; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 600u);  if (t) { goto L_003D4658; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003D4660; } }
L_003D4658:
    set32(c.r[2], 0u + 1200u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003D4660:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43AF0000u);
    c.r[5].d[0] = 0ull | 47104ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[6].d[0] = 0ull | 51200ull;
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4688u); c.r[10].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003D4688u) [[unlikely]] return; }
L_003D4688:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D4950; } }
    set32(c.r[20], c.r[20].w[0] << 2);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[21].w[0] + c.r[20].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D46E0; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 144u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 152u), c.f[0]);  if (t) { goto L_003D46F8; } }
L_003D46E0:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.budget -= 6;
L_003D46F8:
    c.r[16].d[0] = c.r[18].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    set32(c.r[2], c.r[16].w[0] << 6);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4710u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003D4710u) [[unlikely]] return; }
L_003D4710:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4720u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003D4720u) [[unlikely]] return; }
L_003D4720:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D472Cu); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D472Cu) [[unlikely]] return; }
L_003D472C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4734u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003D4734u) [[unlikely]] return; }
L_003D4734:
    c.f[1] = ld32((c.r[29].w[0] + 136u));
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4748u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D4748u) [[unlikely]] return; }
L_003D4748:
    c.f[12] = ld32((c.r[29].w[0] + 132u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4754u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D4754u) [[unlikely]] return; }
L_003D4754:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[5], c.r[20].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[6], c.r[4].w[0] + 5056u);
    set32(c.r[4], ld32((c.r[4].w[0] + 5056u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    st32((c.r[5].w[0] + 140u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 140u));
    st32((c.r[5].w[0] + 140u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 140u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[5].w[0] + 140u);  if (t) { goto L_003D47A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), 0u);  if (t) { goto L_003D47C0; } }
L_003D47A0:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 59166ull;  if (t) { goto L_003D47C0; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 59165ull;  if (t) { goto L_003D47C0; } }
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_003D47C0:
    set32(c.r[5], ld32((c.r[7].w[0])));
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[20].w[0] + c.r[17].w[0]);  if (t) { goto L_003D47F0; } }
    set32(c.r[4], 0u - 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 308u), c.r[4].w[0]);  if (t) { goto L_003D4950; } }
    c.budget -= 1;
L_003D47F0:
    set32(c.r[3], c.r[20].w[0] + c.r[17].w[0]);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 308u), c.r[4].w[0]);  if (t) { goto L_003D4950; } }
L_003D4800:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003D4950; } }
    c.budget -= 1;
L_003D4810:
    c.r[4].d[0] = c.r[18].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[5], c.r[20].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[8], ld32((c.r[5].w[0] + 140u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 5056u)));
    set32(c.r[6], c.r[3].w[0] + 5056u);
    set32(c.r[3], c.r[8].w[0] - c.r[4].w[0]);
    c.r[7].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[7].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65504ull;  if (t) { goto L_003D4860; } }
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D4888; } }
    c.budget -= 1;
L_003D4860:
    set32(c.r[4], c.r[20].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[17].w[0]);
    st32((c.r[6].w[0]), c.r[8].w[0]);
    set32(c.r[4], 0u + 2u);
    st32((c.r[5].w[0] + 308u), 0u);
    set32(c.r[3], c.r[20].w[0] + c.r[17].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[3].w[0] + 497u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 518u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D4950; } }
L_003D4888:
    set32(c.r[3], ld32((c.r[5].w[0] + 308u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[6].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[3].w[0]);  if (t) { goto L_003D4950; } }
L_003D48A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 497u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[7].w[0] + 497u);  if (t) { goto L_003D4920; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], c.r[20].w[0] << 2);  if (t) { goto L_003D48D0; } }
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D48D0u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EF900u; return; } if (c.pc != 0x003D48D0u) [[unlikely]] return; }
L_003D48D0:
    c.r[5].d[0] = c.r[22].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D48E0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003D48E0u) [[unlikely]] return; }
L_003D48E0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D48ECu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003D48ECu) [[unlikely]] return; }
L_003D48EC:
    set32(c.r[4], c.r[20].w[0] + c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 518u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 518u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 518u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_003D4950; } }
    set32(c.r[3], 0u + 30u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D4950; } }
    c.budget -= 1;
L_003D4920:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D4950; } }
    c.budget -= 1;
L_003D4930:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 497u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[7].w[0] + 497u);  if (t) { goto L_003D4948; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D4950; } }
    c.budget -= 1;
L_003D4948:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003D4950:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003D4980:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D49ACu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x003D49ACu) [[unlikely]] return; }
L_003D49AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D4A90; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_003D4A20; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003D4A20; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003D4A20; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003D4A20; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003D49F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D4A20; } }
    c.budget -= 1;
L_003D49F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 138u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003D4A20; } }
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4A14u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x003D4A14u) [[unlikely]] return; }
L_003D4A14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D50B8; } }
    c.budget -= 1;
L_003D4A20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4A28u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003D4A28u) [[unlikely]] return; }
L_003D4A28:
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
    c.budget -= 26;
L_003D4A90:
    c.f[3] = ld32((c.r[17].w[0] + 1856u));
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0] + 1864u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[21] = fp::sub(c.f[3], c.f[2]);
    c.f[20] = fp::sub(c.f[1], c.f[0]);
    c.f[12] = c.f[21];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4AB4u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D4AB4u) [[unlikely]] return; }
L_003D4AB4:
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = 0ull | 63488ull;
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.r[5].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[5].sd[0] < 2049ll ? 1ull : 0ull;  if (t) { goto L_003D4AE0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D4B48; } }
    c.budget -= 1;
L_003D4AE0:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003D4AF8; } }
    set32(c.r[3], c.r[3].w[0] - 16u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003D4B08; } }
L_003D4AF8:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_003D4B08; } }
    set32(c.r[3], c.r[3].w[0] + 16u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_003D4B08:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003D4B20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_003D4C28; } }
    c.budget -= 1;
L_003D4B20:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_003D4B38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_003D4C28; } }
L_003D4B38:
    set32(c.r[3], 0u - 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_003D4C28; } }
    c.budget -= 1;
L_003D4B48:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D4BC0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.r[3].d[0] = c.r[4].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 64u);  if (t) { goto L_003D4B70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003D4B78; } }
L_003D4B70:
    set32(c.r[3], c.r[4].w[0] + 16u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_003D4B78:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.r[1].d[0] = 0ull | 61441ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_003D4BA8; } }
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D4BA8; } }
    c.r[3].d[0] = 0ull | 61440ull;
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_003D4C28; } }
L_003D4BA8:
    c.r[3].d[0] = c.r[5].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 8u);  if (t) { goto L_003D4C28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_003D4C28; } }
    c.budget -= 1;
L_003D4BC0:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.r[1].d[0] = c.r[3].sd[0] < -63ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D4BE0; } }
    set32(c.r[3], 0u - 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003D4BE8; } }
    c.budget -= 1;
L_003D4BE0:
    set32(c.r[3], c.r[3].w[0] - 16u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_003D4BE8:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.r[3].d[0] = c.r[4].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_003D4C10; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 4096u);  if (t) { goto L_003D4C10; } }
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_003D4C28; } }
L_003D4C10:
    c.r[1].d[0] = 0ull | 61441ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_003D4C28; } }
    st32((c.r[17].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 2;
L_003D4C28:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 2ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D4C48; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 568u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003D4C48:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D4E88; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_003D4E40; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003D4DF0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003D4C78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D50B8; } }
L_003D4C78:
    c.f[1] = ld32((c.r[17].w[0] + 1860u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D4D18; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.f[1] = ld32((c.r[17].w[0] + 1860u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4CA8u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D4CA8u) [[unlikely]] return; }
L_003D4CA8:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4CB4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D4CB4u) [[unlikely]] return; }
L_003D4CB4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[2] = c.r[3].w[0];
    c.f[1] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D4CF0; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D4D00; } }
    c.budget -= 1;
L_003D4CF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
L_003D4D00:
    set32(c.r[3], 0u - 1u);
    fpu_div(c, 20u, c.f[20], c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[20]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003D50B8; } }
L_003D4D18:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D4DB0; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4D40u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D4D40u) [[unlikely]] return; }
L_003D4D40:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4D4Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D4D4Cu) [[unlikely]] return; }
L_003D4D4C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[2] = c.r[3].w[0];
    c.f[1] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D4D88; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D4D98; } }
    c.budget -= 1;
L_003D4D88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
L_003D4D98:
    set32(c.r[3], 0u + 1u);
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.f[0] = c.f[20] ^ fp::kSign;
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003D50B8; } }
L_003D4DB0:
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003D4DC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_003D50B8; } }
    c.budget -= 1;
L_003D4DC8:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D4DE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[4].w[0]);  if (t) { goto L_003D50B8; } }
L_003D4DE0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003D50B8; } }
    c.budget -= 1;
L_003D4DF0:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D4E10; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_003D50B8; } }
L_003D4E10:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[1].d[0] = 0ull | 64513ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_003D50B8; } }
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D50B8; } }
    c.r[3].d[0] = 0ull | 64512ull;
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_003D50B8; } }
L_003D4E40:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D4E60; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_003D50B8; } }
L_003D4E60:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[3].d[0] = c.r[4].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_003D50B8; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 1024u);  if (t) { goto L_003D50B8; } }
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_003D50B8; } }
L_003D4E88:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_003D4FF8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003D4F30; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003D4EB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D50B8; } }
L_003D4EB0:
    c.f[1] = ld32((c.r[17].w[0] + 1860u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D4ED8; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003D50B8; } }
    c.budget -= 1;
L_003D4ED8:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D4EF0; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[4].w[0]);  if (t) { goto L_003D50B8; } }
L_003D4EF0:
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003D4F08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_003D50B8; } }
    c.budget -= 1;
L_003D4F08:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D4F20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[4].w[0]);  if (t) { goto L_003D50B8; } }
L_003D4F20:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003D50B8; } }
    c.budget -= 1;
L_003D4F30:
    c.f[1] = ld32((c.r[17].w[0] + 1860u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4F48u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D4F48u) [[unlikely]] return; }
L_003D4F48:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D4F54u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D4F54u) [[unlikely]] return; }
L_003D4F54:
    c.f[2] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D4F88; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D4F98; } }
    c.budget -= 1;
L_003D4F88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
L_003D4F98:
    fpu_div(c, 20u, c.f[20], c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[20]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D4FC8; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_003D50B8; } }
    c.budget -= 1;
L_003D4FC8:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[1].d[0] = 0ull | 64513ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_003D50B8; } }
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D50B8; } }
    c.r[3].d[0] = 0ull | 64512ull;
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_003D50B8; } }
L_003D4FF8:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5010u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D5010u) [[unlikely]] return; }
L_003D5010:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D501Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D501Cu) [[unlikely]] return; }
L_003D501C:
    c.f[2] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D5050; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D5060; } }
    c.budget -= 1;
L_003D5050:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
L_003D5060:
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.f[0] = c.f[20] ^ fp::kSign;
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D5090; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_003D50B8; } }
L_003D5090:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[3].d[0] = c.r[4].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_003D50B8; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 1024u);  if (t) { goto L_003D50B8; } }
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 3;
L_003D50B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D50E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5104u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x003D5104u) [[unlikely]] return; }
L_003D5104:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5110u); set32(c.r[5], 0u + 92u);  if (depth < kMaxDepth) unit_0045(c, 343u, depth + 1u); else { c.pc = 0x00217490u; return; } if (c.pc != 0x003D5110u) [[unlikely]] return; }
L_003D5110:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);  if (t) { goto L_003D5130; } }
    set32(c.r[2], c.r[2].w[0] - 25408u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 636u), c.r[2].w[0]);  if (t) { goto L_003D5140; } }
    c.budget -= 1;
L_003D5130:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[2], c.r[2].w[0] - 28288u);
    st32((c.r[17].w[0] + 636u), c.r[2].w[0]);
    c.budget -= 4;
L_003D5140:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[17].w[0] + 8248u);  if (t) { goto L_003D5188; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8662u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] - 28560u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[17].w[0] + 500u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 498u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 496u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 13;
L_003D5188:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_003D5198:
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[5].w[0] + 120u);
    set32(c.r[2], c.r[5].w[0] + 240u);
    st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 7u);
    st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[5].w[0] + 360u);
    st16((c.r[4].w[0] + 58u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[5].w[0] + 480u);
    st16((c.r[4].w[0] + 60u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[5].w[0] + 600u);
    set32(c.r[2], c.r[5].w[0] + 720u);
    st16((c.r[4].w[0] + 62u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 64u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 840u);
    c.r[2].d[0] = c.r[6].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 14u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D5198u | kUnwind; return; } goto L_003D5198; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006C0000u);  if (t) { goto L_003D53D0; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 13696u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003D4000u < 16384u) { entry = entries_00B5[(t - 0x003D4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003D5208:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[2], c.r[2].w[0] - 28512u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 338u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 336u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003D53D0; } }
L_003D5240:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[17].w[0] + 1856u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[17].w[0] + 32u);
    st8((c.r[16].w[0] + 338u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 336u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D526Cu); set32(c.r[6], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003D526Cu) [[unlikely]] return; }
L_003D526C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D53D0; } }
    c.budget -= 1;
L_003D5278:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[17].w[0] + 1856u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[17].w[0] + 32u);
    st8((c.r[16].w[0] + 338u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 336u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D52A4u); set32(c.r[6], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003D52A4u) [[unlikely]] return; }
L_003D52A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D53D0; } }
    c.budget -= 1;
L_003D52B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[2], c.r[2].w[0] - 28432u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[2], c.r[2].w[0] - 28320u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 336u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 337u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 338u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003D53D0; } }
    c.budget -= 1;
L_003D52F0:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 336u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x432A0000u);
    st8((c.r[16].w[0] + 337u), static_cast<std::uint8_t>(0u));
    c.f[12] = c.r[2].w[0];
    st8((c.r[16].w[0] + 338u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5320u); st8((c.r[2].w[0] + 31u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_00AB(c, 113u, depth + 1u); else { c.pc = 0x003AD5D0u; return; } if (c.pc != 0x003D5320u) [[unlikely]] return; }
L_003D5320:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D5338; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_003D5340; } }
L_003D5338:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 2;
L_003D5340:
    st32((c.r[17].w[0] + 52u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5350u); st32((c.r[16].w[0] + 328u), 0u);  if (depth < kMaxDepth) unit_00AB(c, 111u, depth + 1u); else { c.pc = 0x003AD550u; return; } if (c.pc != 0x003D5350u) [[unlikely]] return; }
L_003D5350:
    st32((c.r[16].w[0] + 332u), c.f[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003D53D0; } }
L_003D5360:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x432A0000u);
    st8((c.r[16].w[0] + 336u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 337u), static_cast<std::uint8_t>(0u));
    c.f[12] = c.r[2].w[0];
    st8((c.r[16].w[0] + 338u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5388u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 113u, depth + 1u); else { c.pc = 0x003AD5D0u; return; } if (c.pc != 0x003D5388u) [[unlikely]] return; }
L_003D5388:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D53A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_003D53A8; } }
L_003D53A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 2;
L_003D53A8:
    st32((c.r[17].w[0] + 52u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D53B8u); st32((c.r[16].w[0] + 328u), 0u);  if (depth < kMaxDepth) unit_00AB(c, 111u, depth + 1u); else { c.pc = 0x003AD550u; return; } if (c.pc != 0x003D53B8u) [[unlikely]] return; }
L_003D53B8:
    st32((c.r[16].w[0] + 332u), c.f[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 339u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 31u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_003D53D0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 6u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003D53F0; } }
    set32(c.r[5], 0u + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D53F0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x003D53F0u) [[unlikely]] return; }
L_003D53F0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);  if (t) { goto L_003D5448; } }
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    st32((c.r[17].w[0] + 96u), 0u);
    st32((c.r[17].w[0] + 100u), 0u);
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
    c.budget -= 19;
L_003D5448:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[18].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 1236u), c.r[2].w[0]);
    c.budget -= 4;
L_003D5458:
    set32(c.r[2], c.r[18].w[0] + 61u);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D546Cu); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_003D(c, 283u, depth + 1u); else { c.pc = 0x001F6BC0u; return; } if (c.pc != 0x003D546Cu) [[unlikely]] return; }
L_003D546C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[18].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D5458u | kUnwind; return; } goto L_003D5458; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D54A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8250u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 8248u);  if (t) { goto L_003D5548; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 21u)));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D54E0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 275u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003D54E0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003D5638; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D54F0u);  if (depth < kMaxDepth) unit_00B6(c, 56u, depth + 1u); else { c.pc = 0x003D8EB0u; return; } if (c.pc != 0x003D54F0u) [[unlikely]] return; }
L_003D54F0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5540u); st32((c.r[17].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 73u, depth + 1u); else { c.pc = 0x00195590u; return; } if (c.pc != 0x003D5540u) [[unlikely]] return; }
L_003D5540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D5638; } }
L_003D5548:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 338u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D5618; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 21u)));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D5570; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 275u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003D5570:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003D5580; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5580u);  if (depth < kMaxDepth) unit_0025(c, 73u, depth + 1u); else { c.pc = 0x00195590u; return; } if (c.pc != 0x003D5580u) [[unlikely]] return; }
L_003D5580:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 339u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D55A8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D559Cu); set32(c.r[4], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003D559Cu) [[unlikely]] return; }
L_003D559C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D5638; } }
    c.budget -= 1;
L_003D55A8:
    c.f[5] = ld32((c.r[17].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0] + 128u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 136u));
    c.f[3] = ld32((c.r[17].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 132u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D55D8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D55D8u) [[unlikely]] return; }
L_003D55D8:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D55E4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D55E4u) [[unlikely]] return; }
L_003D55E4:
    c.f[1] = ld32((c.r[16].w[0] + 328u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 328u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 332u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D5638; } }
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5610u); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x003D5610u) [[unlikely]] return; }
L_003D5610:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D5AC0; } }
L_003D5618:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D5638; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[5], c.r[17].w[0] + 1856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5638u); set32(c.r[6], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x003D5638u) [[unlikely]] return; }
L_003D5638:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003D5930; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D5688; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_003D5680; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003D5680; } }
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[2], 0u - 25u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1236u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[2].w[0]);  if (t) { goto L_003D5688; } }
L_003D5680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5688u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 92u, depth + 1u); else { c.pc = 0x003D5B00u; return; } if (c.pc != 0x003D5688u) [[unlikely]] return; }
L_003D5688:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D56D0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_003D56C8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003D56C8; } }
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[2], 0u - 97u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1236u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[2].w[0]);  if (t) { goto L_003D56D0; } }
    c.budget -= 1;
L_003D56C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D56D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 108u, depth + 1u); else { c.pc = 0x003D5F10u; return; } if (c.pc != 0x003D56D0u) [[unlikely]] return; }
L_003D56D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D5718; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_003D5710; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003D5710; } }
    st32((c.r[16].w[0] + 20u), 0u);
    set32(c.r[2], 0u - 385u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1236u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[2].w[0]);  if (t) { goto L_003D5718; } }
    c.budget -= 1;
L_003D5710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5718u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 124u, depth + 1u); else { c.pc = 0x003D6320u; return; } if (c.pc != 0x003D5718u) [[unlikely]] return; }
L_003D5718:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D5760; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_003D5758; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003D5758; } }
    st32((c.r[16].w[0] + 24u), 0u);
    set32(c.r[2], 0u - 1537u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1236u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[2].w[0]);  if (t) { goto L_003D5760; } }
    c.budget -= 1;
L_003D5758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5760u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 140u, depth + 1u); else { c.pc = 0x003D6740u; return; } if (c.pc != 0x003D5760u) [[unlikely]] return; }
L_003D5760:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D57A8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_003D57A0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003D57A0; } }
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[2], 0u - 6145u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1236u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[2].w[0]);  if (t) { goto L_003D57A8; } }
    c.budget -= 1;
L_003D57A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D57A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 156u, depth + 1u); else { c.pc = 0x003D6B60u; return; } if (c.pc != 0x003D57A8u) [[unlikely]] return; }
L_003D57A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D57F0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_003D57E8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003D57E8; } }
    st32((c.r[16].w[0] + 32u), 0u);
    set32(c.r[2], 0u - 24577u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1236u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[2].w[0]);  if (t) { goto L_003D57F0; } }
    c.budget -= 1;
L_003D57E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D57F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 172u, depth + 1u); else { c.pc = 0x003D6F80u; return; } if (c.pc != 0x003D57F0u) [[unlikely]] return; }
L_003D57F0:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D5838; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_003D5830; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003D5830; } }
    st32((c.r[16].w[0] + 36u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1236u)));
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[2].w[0]);  if (t) { goto L_003D5838; } }
L_003D5830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5838u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 188u, depth + 1u); else { c.pc = 0x003D7390u; return; } if (c.pc != 0x003D5838u) [[unlikely]] return; }
L_003D5838:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D5880; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_003D5878; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003D5878; } }
    st32((c.r[16].w[0] + 40u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF90000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1236u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[2].w[0]);  if (t) { goto L_003D5880; } }
L_003D5878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5880u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 204u, depth + 1u); else { c.pc = 0x003D77F0u; return; } if (c.pc != 0x003D5880u) [[unlikely]] return; }
L_003D5880:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D58C8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_003D58C0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003D58C0; } }
    st32((c.r[16].w[0] + 44u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFE70000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1236u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[2].w[0]);  if (t) { goto L_003D58C8; } }
L_003D58C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D58C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 220u, depth + 1u); else { c.pc = 0x003D7C50u; return; } if (c.pc != 0x003D58C8u) [[unlikely]] return; }
L_003D58C8:
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D5910; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_003D5908; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003D5908; } }
    st32((c.r[16].w[0] + 48u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF9F0000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1236u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[2].w[0]);  if (t) { goto L_003D5910; } }
L_003D5908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5910u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 8u, depth + 1u); else { c.pc = 0x003D80B0u; return; } if (c.pc != 0x003D5910u) [[unlikely]] return; }
L_003D5910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5918u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 24u, depth + 1u); else { c.pc = 0x003D8510u; return; } if (c.pc != 0x003D5918u) [[unlikely]] return; }
L_003D5918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5920u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 35u, depth + 1u); else { c.pc = 0x003D8830u; return; } if (c.pc != 0x003D5920u) [[unlikely]] return; }
L_003D5920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5928u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 46u, depth + 1u); else { c.pc = 0x003D8B50u; return; } if (c.pc != 0x003D5928u) [[unlikely]] return; }
L_003D5928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5930u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 51u, depth + 1u); else { c.pc = 0x003D8D00u; return; } if (c.pc != 0x003D5930u) [[unlikely]] return; }
L_003D5930:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_003D5AC0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 513u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D5AC0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 336u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D5AC0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 337u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003D5A28; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003D59A8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D5980; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D5AC0; } }
L_003D5980:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x432A0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5990u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 113u, depth + 1u); else { c.pc = 0x003AD5D0u; return; } if (c.pc != 0x003D5990u) [[unlikely]] return; }
L_003D5990:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D5AC0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 337u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 337u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D5AC0; } }
L_003D59A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D59D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_003D59E8; } }
L_003D59D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 6;
L_003D59E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A50000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D59F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 117u, depth + 1u); else { c.pc = 0x003AD6C0u; return; } if (c.pc != 0x003D59F8u) [[unlikely]] return; }
L_003D59F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D5AC0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 337u)));
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 337u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5A1Cu); st8((c.r[17].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0071(c, 43u, depth + 1u); else { c.pc = 0x002C4A90u; return; } if (c.pc != 0x003D5A1Cu) [[unlikely]] return; }
L_003D5A1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D5AC0; } }
    c.budget -= 1;
L_003D5A28:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D5A80; } }
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003D5A60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_003D5AC0; } }
    c.budget -= 1;
L_003D5A60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_003D5AC0; } }
    c.budget -= 1;
L_003D5A80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003D5AA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_003D5AC0; } }
L_003D5AA8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 6;
L_003D5AC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D5AE0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 36u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023A1C0u | kUnwind; return; } [[clang::musttail]] return unit_004E(c, 153u, depth); }
L_003D5B00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8520u)));
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[17], c.r[18].w[0] + 8248u);  if (t) { goto L_003D5ED8; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_003D5E90; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003D5DD0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003D5B50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D5EF8; } }
L_003D5B50:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D5DC0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 300u);  if (t) { goto L_003D5B78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003D5B80; } }
    c.budget -= 1;
L_003D5B78:
    set32(c.r[2], 0u + 600u);
    st16((c.r[17].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003D5B80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 18432u);
    c.r[7].d[0] = 0ull | 47104ull;
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5BA8u); set32(c.r[10], 0u + 3u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003D5BA8u) [[unlikely]] return; }
L_003D5BA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D5EF8; } }
    st32((c.r[17].w[0] + 340u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D5BF8; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_003D5C10; } }
L_003D5BF8:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 6;
L_003D5C10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5C18u); set32(c.r[4], c.r[18].w[0] + 2176u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003D5C18u) [[unlikely]] return; }
L_003D5C18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5C28u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003D5C28u) [[unlikely]] return; }
L_003D5C28:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5C34u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D5C34u) [[unlikely]] return; }
L_003D5C34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5C3Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003D5C3Cu) [[unlikely]] return; }
L_003D5C3C:
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.f[13] = ld32((c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5C4Cu); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D5C4Cu) [[unlikely]] return; }
L_003D5C4C:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 5096u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 128u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 128u));
    st32((c.r[17].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 128u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D5C90; } }
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 16384u);  if (t) { goto L_003D5C90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 128u), c.r[2].w[0]);  if (t) { goto L_003D5CB0; } }
L_003D5C90:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 49153ull;  if (t) { goto L_003D5CB0; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull | 49152ull;  if (t) { goto L_003D5CB0; } }
    st32((c.r[17].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 1;
L_003D5CB0:
    set32(c.r[4], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 5096u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 128u);  if (t) { goto L_003D5CD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 224u), c.r[2].w[0]);  if (t) { goto L_003D5CE0; } }
L_003D5CD8:
    set32(c.r[2], 0u + 128u);
    st32((c.r[17].w[0] + 224u), c.r[2].w[0]);
    c.budget -= 2;
L_003D5CE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5CE8u); set32(c.r[4], c.r[18].w[0] + 2240u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003D5CE8u) [[unlikely]] return; }
L_003D5CE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5CF8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003D5CF8u) [[unlikely]] return; }
L_003D5CF8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5D04u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D5D04u) [[unlikely]] return; }
L_003D5D04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5D0Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003D5D0Cu) [[unlikely]] return; }
L_003D5D0C:
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5D20u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D5D20u) [[unlikely]] return; }
L_003D5D20:
    c.f[12] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5D2Cu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D5D2Cu) [[unlikely]] return; }
L_003D5D2C:
    set32(c.r[3], ld32((c.r[18].w[0] + 5112u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 80u));
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D5D68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 80u), 0u);  if (t) { goto L_003D5D88; } }
    c.budget -= 1;
L_003D5D68:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 56435ull;  if (t) { goto L_003D5D88; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 56434ull;  if (t) { goto L_003D5D88; } }
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 1;
L_003D5D88:
    set32(c.r[4], ld32((c.r[18].w[0] + 5112u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 64u);  if (t) { goto L_003D5DB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 176u), c.r[3].w[0]);  if (t) { goto L_003D5EF8; } }
L_003D5DB0:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 176u), c.r[3].w[0]);  if (t) { goto L_003D5EF8; } }
    c.budget -= 1;
L_003D5DC0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003D5EF8; } }
    c.budget -= 1;
L_003D5DD0:
    set32(c.r[6], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5096u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003D5E00; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D5E10; } }
    c.budget -= 1;
L_003D5E00:
    st32((c.r[18].w[0] + 5096u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 224u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003D5E28; } }
L_003D5E10:
    set32(c.r[3], ld32((c.r[17].w[0] + 224u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5096u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5096u));
    st32((c.r[18].w[0] + 5096u), c.r[3].w[0]);
    c.budget -= 6;
L_003D5E28:
    set32(c.r[6], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5112u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65504ull;  if (t) { goto L_003D5E50; } }
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D5E60; } }
L_003D5E50:
    st32((c.r[18].w[0] + 5112u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 176u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003D5E78; } }
L_003D5E60:
    set32(c.r[3], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5112u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5112u));
    st32((c.r[18].w[0] + 5112u), c.r[3].w[0]);
    c.budget -= 6;
L_003D5E78:
    c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003D5EF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D5EF8; } }
    c.budget -= 1;
L_003D5E90:
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 30u);
    st8((c.r[17].w[0] + 286u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003D5EB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5EB4u); set32(c.r[5], ld32((c.r[17].w[0] + 340u)));  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EF900u; return; } if (c.pc != 0x003D5EB4u) [[unlikely]] return; }
L_003D5EB4:
    c.budget -= 1;
L_003D5EB8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5EC4u); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003D5EC4u) [[unlikely]] return; }
L_003D5EC4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5ED0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003D5ED0u) [[unlikely]] return; }
L_003D5ED0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D5EF8; } }
L_003D5ED8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 286u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D5EF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D5EF8; } }
    c.budget -= 1;
L_003D5EF0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[17].w[0] + 286u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003D5EF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003D5F10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8521u)));
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[17], c.r[18].w[0] + 8248u);  if (t) { goto L_003D62E8; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_003D62A0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003D61E0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003D5F60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D6308; } }
L_003D5F60:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 54u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D61D0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 300u);  if (t) { goto L_003D5F88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 54u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003D5F90; } }
    c.budget -= 1;
L_003D5F88:
    set32(c.r[2], 0u + 600u);
    st16((c.r[17].w[0] + 54u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003D5F90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 10240u);
    c.r[7].d[0] = 0ull | 64512ull;
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D5FB8u); set32(c.r[10], 0u + 5u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003D5FB8u) [[unlikely]] return; }
L_003D5FB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D6308; } }
    st32((c.r[17].w[0] + 344u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 273u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D6008; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_003D6020; } }
L_003D6008:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 6;
L_003D6020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6028u); set32(c.r[4], c.r[18].w[0] + 2368u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003D6028u) [[unlikely]] return; }
L_003D6028:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6038u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003D6038u) [[unlikely]] return; }
L_003D6038:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6044u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D6044u) [[unlikely]] return; }
L_003D6044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D604Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003D604Cu) [[unlikely]] return; }
L_003D604C:
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.f[13] = ld32((c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D605Cu); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D605Cu) [[unlikely]] return; }
L_003D605C:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 5132u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 132u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 132u));
    st32((c.r[17].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 132u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D60A0; } }
    c.r[2].d[0] = c.r[3].sd[0] < 9102ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 9102u);  if (t) { goto L_003D60A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 132u), c.r[2].w[0]);  if (t) { goto L_003D60B8; } }
L_003D60A0:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D60B8; } }
    st32((c.r[17].w[0] + 132u), 0u);
    c.budget -= 2;
L_003D60B8:
    set32(c.r[4], ld32((c.r[17].w[0] + 132u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 5132u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 64u);  if (t) { goto L_003D60E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 228u), c.r[2].w[0]);  if (t) { goto L_003D60E8; } }
L_003D60E0:
    set32(c.r[2], 0u + 64u);
    st32((c.r[17].w[0] + 228u), c.r[2].w[0]);
    c.budget -= 2;
L_003D60E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D60F0u); set32(c.r[4], c.r[18].w[0] + 2304u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003D60F0u) [[unlikely]] return; }
L_003D60F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6100u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003D6100u) [[unlikely]] return; }
L_003D6100:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D610Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D610Cu) [[unlikely]] return; }
L_003D610C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6114u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003D6114u) [[unlikely]] return; }
L_003D6114:
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6128u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D6128u) [[unlikely]] return; }
L_003D6128:
    c.f[12] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6134u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D6134u) [[unlikely]] return; }
L_003D6134:
    set32(c.r[3], ld32((c.r[18].w[0] + 5124u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 84u));
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[4].sd[0] < 16384ll ? 1ull : 0ull;  if (t) { goto L_003D6178; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D6178; } }
    set32(c.r[3], 0u + 16384u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_003D6198; } }
L_003D6178:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 49153ull;  if (t) { goto L_003D6198; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 49152ull;  if (t) { goto L_003D6198; } }
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 1;
L_003D6198:
    set32(c.r[4], ld32((c.r[18].w[0] + 5124u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 84u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 128u);  if (t) { goto L_003D61C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 180u), c.r[3].w[0]);  if (t) { goto L_003D6308; } }
L_003D61C0:
    set32(c.r[3], 0u + 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 180u), c.r[3].w[0]);  if (t) { goto L_003D6308; } }
    c.budget -= 1;
L_003D61D0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 54u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003D6308; } }
    c.budget -= 1;
L_003D61E0:
    set32(c.r[6], ld32((c.r[17].w[0] + 132u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5132u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003D6210; } }
    c.r[3].d[0] = 0ull | 65504ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D6220; } }
    c.budget -= 1;
L_003D6210:
    st32((c.r[18].w[0] + 5132u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 228u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003D6238; } }
L_003D6220:
    set32(c.r[3], ld32((c.r[17].w[0] + 228u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5132u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5132u));
    st32((c.r[18].w[0] + 5132u), c.r[3].w[0]);
    c.budget -= 6;
L_003D6238:
    set32(c.r[6], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5124u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65472ull;  if (t) { goto L_003D6260; } }
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D6270; } }
L_003D6260:
    st32((c.r[18].w[0] + 5124u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 180u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003D6288; } }
L_003D6270:
    set32(c.r[3], ld32((c.r[17].w[0] + 180u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5124u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5124u));
    st32((c.r[18].w[0] + 5124u), c.r[3].w[0]);
    c.budget -= 6;
L_003D6288:
    c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003D6308; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 273u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D6308; } }
    c.budget -= 1;
L_003D62A0:
    st8((c.r[17].w[0] + 273u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 30u);
    st8((c.r[17].w[0] + 287u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003D62C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D62C4u); set32(c.r[5], ld32((c.r[17].w[0] + 344u)));  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EF900u; return; } if (c.pc != 0x003D62C4u) [[unlikely]] return; }
L_003D62C4:
    c.budget -= 1;
L_003D62C8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D62D4u); set32(c.r[5], 0u + 25u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003D62D4u) [[unlikely]] return; }
L_003D62D4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D62E0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003D62E0u) [[unlikely]] return; }
L_003D62E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D6308; } }
L_003D62E8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 287u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D6300; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 273u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D6308; } }
    c.budget -= 1;
L_003D6300:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[17].w[0] + 287u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003D6308:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003D6320:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8522u)));
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[17], c.r[18].w[0] + 8248u);  if (t) { goto L_003D6708; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_003D66C0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003D6600; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003D6370; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D6728; } }
L_003D6370:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D65F0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 300u);  if (t) { goto L_003D6398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 56u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003D63A0; } }
    c.budget -= 1;
L_003D6398:
    set32(c.r[2], 0u + 600u);
    st16((c.r[17].w[0] + 56u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003D63A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    set32(c.r[5], 0u + 14336u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[6].d[0] = 0ull | 51200ull;
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D63C8u); set32(c.r[10], 0u + 7u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003D63C8u) [[unlikely]] return; }
L_003D63C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D6728; } }
    st32((c.r[17].w[0] + 348u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D6418; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_003D6430; } }
L_003D6418:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 6;
L_003D6430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6438u); set32(c.r[4], c.r[18].w[0] + 2432u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003D6438u) [[unlikely]] return; }
L_003D6438:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6448u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003D6448u) [[unlikely]] return; }
L_003D6448:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6454u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D6454u) [[unlikely]] return; }
L_003D6454:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D645Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003D645Cu) [[unlikely]] return; }
L_003D645C:
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.f[13] = ld32((c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D646Cu); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D646Cu) [[unlikely]] return; }
L_003D646C:
    set32(c.r[3], c.r[2].w[0] + 32767u);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 5144u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 136u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 136u));
    st32((c.r[17].w[0] + 136u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 136u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D64B8; } }
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 16384u);  if (t) { goto L_003D64B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 136u), c.r[2].w[0]);  if (t) { goto L_003D64D8; } }
    c.budget -= 1;
L_003D64B8:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 49153ull;  if (t) { goto L_003D64D8; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull | 49152ull;  if (t) { goto L_003D64D8; } }
    st32((c.r[17].w[0] + 136u), c.r[2].w[0]);
    c.budget -= 1;
L_003D64D8:
    set32(c.r[4], ld32((c.r[17].w[0] + 136u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 5144u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 128u);  if (t) { goto L_003D6500; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 232u), c.r[2].w[0]);  if (t) { goto L_003D6508; } }
L_003D6500:
    set32(c.r[2], 0u + 128u);
    st32((c.r[17].w[0] + 232u), c.r[2].w[0]);
    c.budget -= 2;
L_003D6508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6510u); set32(c.r[4], c.r[18].w[0] + 2496u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003D6510u) [[unlikely]] return; }
L_003D6510:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6520u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003D6520u) [[unlikely]] return; }
L_003D6520:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D652Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D652Cu) [[unlikely]] return; }
L_003D652C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6534u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003D6534u) [[unlikely]] return; }
L_003D6534:
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6548u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D6548u) [[unlikely]] return; }
L_003D6548:
    c.f[13] = c.f[0];
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6558u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D6558u) [[unlikely]] return; }
L_003D6558:
    set32(c.r[3], ld32((c.r[18].w[0] + 5160u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 88u));
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[4].sd[0] < 9102ll ? 1ull : 0ull;  if (t) { goto L_003D65A0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D65A0; } }
    set32(c.r[3], 0u + 9102u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_003D65B8; } }
    c.budget -= 1;
L_003D65A0:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D65B8; } }
    st32((c.r[17].w[0] + 88u), 0u);
    c.budget -= 2;
L_003D65B8:
    set32(c.r[4], ld32((c.r[18].w[0] + 5160u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 88u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 64u);  if (t) { goto L_003D65E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 184u), c.r[3].w[0]);  if (t) { goto L_003D6728; } }
L_003D65E0:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 184u), c.r[3].w[0]);  if (t) { goto L_003D6728; } }
    c.budget -= 1;
L_003D65F0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 56u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003D6728; } }
    c.budget -= 1;
L_003D6600:
    set32(c.r[6], ld32((c.r[17].w[0] + 136u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5144u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003D6630; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D6640; } }
    c.budget -= 1;
L_003D6630:
    st32((c.r[18].w[0] + 5144u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 232u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003D6658; } }
L_003D6640:
    set32(c.r[3], ld32((c.r[17].w[0] + 232u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5144u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5144u));
    st32((c.r[18].w[0] + 5144u), c.r[3].w[0]);
    c.budget -= 6;
L_003D6658:
    set32(c.r[6], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5160u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65504ull;  if (t) { goto L_003D6680; } }
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D6690; } }
L_003D6680:
    st32((c.r[18].w[0] + 5160u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 184u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003D66A8; } }
L_003D6690:
    set32(c.r[3], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5160u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5160u));
    st32((c.r[18].w[0] + 5160u), c.r[3].w[0]);
    c.budget -= 6;
L_003D66A8:
    c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003D6728; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D6728; } }
    c.budget -= 1;
L_003D66C0:
    st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 30u);
    st8((c.r[17].w[0] + 288u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003D66E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D66E4u); set32(c.r[5], ld32((c.r[17].w[0] + 348u)));  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EF900u; return; } if (c.pc != 0x003D66E4u) [[unlikely]] return; }
L_003D66E4:
    c.budget -= 1;
L_003D66E8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D66F4u); set32(c.r[5], 0u + 27u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003D66F4u) [[unlikely]] return; }
L_003D66F4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6700u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003D6700u) [[unlikely]] return; }
L_003D6700:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D6728; } }
L_003D6708:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 288u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D6720; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D6728; } }
    c.budget -= 1;
L_003D6720:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[17].w[0] + 288u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003D6728:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003D6740:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8523u)));
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[17], c.r[18].w[0] + 8248u);  if (t) { goto L_003D6B20; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_003D6AD8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003D6A18; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003D6790; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D6B40; } }
L_003D6790:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 58u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D6A08; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 300u);  if (t) { goto L_003D67B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 58u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003D67C0; } }
    c.budget -= 1;
L_003D67B8:
    set32(c.r[2], 0u + 600u);
    st16((c.r[17].w[0] + 58u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003D67C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    set32(c.r[5], 0u + 22528u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[6].d[0] = 0ull | 33792ull;
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D67E8u); set32(c.r[10], 0u + 9u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003D67E8u) [[unlikely]] return; }
L_003D67E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D6B40; } }
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 275u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D6838; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_003D6850; } }
L_003D6838:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 6;
L_003D6850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6858u); set32(c.r[4], c.r[18].w[0] + 2624u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003D6858u) [[unlikely]] return; }
L_003D6858:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6868u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003D6868u) [[unlikely]] return; }
L_003D6868:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6874u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D6874u) [[unlikely]] return; }
L_003D6874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D687Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003D687Cu) [[unlikely]] return; }
L_003D687C:
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.f[13] = ld32((c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D688Cu); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D688Cu) [[unlikely]] return; }
L_003D688C:
    set32(c.r[3], c.r[2].w[0] + 32767u);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 5180u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 140u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 140u));
    st32((c.r[17].w[0] + 140u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 140u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D68C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 140u), 0u);  if (t) { goto L_003D68E8; } }
L_003D68C8:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 56435ull;  if (t) { goto L_003D68E8; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull | 56434ull;  if (t) { goto L_003D68E8; } }
    st32((c.r[17].w[0] + 140u), c.r[2].w[0]);
    c.budget -= 1;
L_003D68E8:
    set32(c.r[4], ld32((c.r[17].w[0] + 140u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 5180u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 64u);  if (t) { goto L_003D6910; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 236u), c.r[2].w[0]);  if (t) { goto L_003D6918; } }
L_003D6910:
    set32(c.r[2], 0u + 64u);
    st32((c.r[17].w[0] + 236u), c.r[2].w[0]);
    c.budget -= 2;
L_003D6918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6920u); set32(c.r[4], c.r[18].w[0] + 2560u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003D6920u) [[unlikely]] return; }
L_003D6920:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6930u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003D6930u) [[unlikely]] return; }
L_003D6930:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D693Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D693Cu) [[unlikely]] return; }
L_003D693C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6944u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003D6944u) [[unlikely]] return; }
L_003D6944:
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6958u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D6958u) [[unlikely]] return; }
L_003D6958:
    c.f[13] = c.f[0];
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6968u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D6968u) [[unlikely]] return; }
L_003D6968:
    set32(c.r[3], ld32((c.r[18].w[0] + 5172u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[17].w[0] + 92u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 92u));
    st32((c.r[17].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[4].sd[0] < 16384ll ? 1ull : 0ull;  if (t) { goto L_003D69B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D69B0; } }
    set32(c.r[3], 0u + 16384u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003D69D0; } }
    c.budget -= 1;
L_003D69B0:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 49153ull;  if (t) { goto L_003D69D0; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 49152ull;  if (t) { goto L_003D69D0; } }
    st32((c.r[17].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 1;
L_003D69D0:
    set32(c.r[4], ld32((c.r[18].w[0] + 5172u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 92u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 128u);  if (t) { goto L_003D69F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 188u), c.r[3].w[0]);  if (t) { goto L_003D6B40; } }
L_003D69F8:
    set32(c.r[3], 0u + 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 188u), c.r[3].w[0]);  if (t) { goto L_003D6B40; } }
    c.budget -= 1;
L_003D6A08:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 58u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003D6B40; } }
    c.budget -= 1;
L_003D6A18:
    set32(c.r[6], ld32((c.r[17].w[0] + 140u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5180u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003D6A48; } }
    c.r[3].d[0] = 0ull | 65504ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D6A58; } }
    c.budget -= 1;
L_003D6A48:
    st32((c.r[18].w[0] + 5180u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 236u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003D6A70; } }
L_003D6A58:
    set32(c.r[3], ld32((c.r[17].w[0] + 236u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5180u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5180u));
    st32((c.r[18].w[0] + 5180u), c.r[3].w[0]);
    c.budget -= 6;
L_003D6A70:
    set32(c.r[6], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5172u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65472ull;  if (t) { goto L_003D6A98; } }
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D6AA8; } }
L_003D6A98:
    st32((c.r[18].w[0] + 5172u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 188u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003D6AC0; } }
L_003D6AA8:
    set32(c.r[3], ld32((c.r[17].w[0] + 188u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5172u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5172u));
    st32((c.r[18].w[0] + 5172u), c.r[3].w[0]);
    c.budget -= 6;
L_003D6AC0:
    c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003D6B40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 275u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D6B40; } }
    c.budget -= 1;
L_003D6AD8:
    st8((c.r[17].w[0] + 275u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 30u);
    st8((c.r[17].w[0] + 289u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003D6B00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6AFCu); set32(c.r[5], ld32((c.r[17].w[0] + 352u)));  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EF900u; return; } if (c.pc != 0x003D6AFCu) [[unlikely]] return; }
L_003D6AFC:
    c.budget -= 1;
L_003D6B00:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6B0Cu); set32(c.r[5], 0u + 28u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003D6B0Cu) [[unlikely]] return; }
L_003D6B0C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6B18u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003D6B18u) [[unlikely]] return; }
L_003D6B18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D6B40; } }
L_003D6B20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 289u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D6B38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 275u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D6B40; } }
    c.budget -= 1;
L_003D6B38:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[17].w[0] + 289u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003D6B40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003D6B60:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8524u)));
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[17], c.r[18].w[0] + 8248u);  if (t) { goto L_003D6F48; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_003D6F00; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003D6E40; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003D6BB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D6F68; } }
L_003D6BB0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D6E30; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 300u);  if (t) { goto L_003D6BD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 60u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003D6BE0; } }
    c.budget -= 1;
L_003D6BD8:
    set32(c.r[2], 0u + 600u);
    st16((c.r[17].w[0] + 60u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003D6BE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    set32(c.r[5], 0u + 31744u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[6].d[0] = 0ull | 43008ull;
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6C08u); set32(c.r[10], 0u + 11u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003D6C08u) [[unlikely]] return; }
L_003D6C08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D6F68; } }
    st32((c.r[17].w[0] + 356u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 276u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D6C58; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_003D6C70; } }
L_003D6C58:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 6;
L_003D6C70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6C78u); set32(c.r[4], c.r[18].w[0] + 2752u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003D6C78u) [[unlikely]] return; }
L_003D6C78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6C88u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003D6C88u) [[unlikely]] return; }
L_003D6C88:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6C94u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D6C94u) [[unlikely]] return; }
L_003D6C94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6C9Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003D6C9Cu) [[unlikely]] return; }
L_003D6C9C:
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.f[13] = ld32((c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6CACu); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D6CACu) [[unlikely]] return; }
L_003D6CAC:
    set32(c.r[3], c.r[2].w[0] + 32767u);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 5204u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 144u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 144u));
    st32((c.r[17].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 144u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D6CF8; } }
    c.r[2].d[0] = c.r[3].sd[0] < 9102ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 9102u);  if (t) { goto L_003D6CF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 144u), c.r[2].w[0]);  if (t) { goto L_003D6D10; } }
    c.budget -= 1;
L_003D6CF8:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D6D10; } }
    st32((c.r[17].w[0] + 144u), 0u);
    c.budget -= 2;
L_003D6D10:
    set32(c.r[4], ld32((c.r[17].w[0] + 144u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 5204u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 64u);  if (t) { goto L_003D6D38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 240u), c.r[2].w[0]);  if (t) { goto L_003D6D40; } }
L_003D6D38:
    set32(c.r[2], 0u + 64u);
    st32((c.r[17].w[0] + 240u), c.r[2].w[0]);
    c.budget -= 2;
L_003D6D40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6D48u); set32(c.r[4], c.r[18].w[0] + 2688u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003D6D48u) [[unlikely]] return; }
L_003D6D48:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6D58u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003D6D58u) [[unlikely]] return; }
L_003D6D58:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6D64u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D6D64u) [[unlikely]] return; }
L_003D6D64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6D6Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003D6D6Cu) [[unlikely]] return; }
L_003D6D6C:
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6D80u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D6D80u) [[unlikely]] return; }
L_003D6D80:
    c.f[13] = c.f[0];
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6D90u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D6D90u) [[unlikely]] return; }
L_003D6D90:
    set32(c.r[3], ld32((c.r[18].w[0] + 5196u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 96u));
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[4].sd[0] < 16384ll ? 1ull : 0ull;  if (t) { goto L_003D6DD8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D6DD8; } }
    set32(c.r[3], 0u + 16384u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003D6DF8; } }
    c.budget -= 1;
L_003D6DD8:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 49153ull;  if (t) { goto L_003D6DF8; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 49152ull;  if (t) { goto L_003D6DF8; } }
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 1;
L_003D6DF8:
    set32(c.r[4], ld32((c.r[18].w[0] + 5196u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 96u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 128u);  if (t) { goto L_003D6E20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 192u), c.r[3].w[0]);  if (t) { goto L_003D6F68; } }
L_003D6E20:
    set32(c.r[3], 0u + 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 192u), c.r[3].w[0]);  if (t) { goto L_003D6F68; } }
    c.budget -= 1;
L_003D6E30:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 60u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003D6F68; } }
    c.budget -= 1;
L_003D6E40:
    set32(c.r[6], ld32((c.r[17].w[0] + 144u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5204u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003D6E70; } }
    c.r[3].d[0] = 0ull | 65504ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D6E80; } }
    c.budget -= 1;
L_003D6E70:
    st32((c.r[18].w[0] + 5204u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 240u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003D6E98; } }
L_003D6E80:
    set32(c.r[3], ld32((c.r[17].w[0] + 240u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5204u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5204u));
    st32((c.r[18].w[0] + 5204u), c.r[3].w[0]);
    c.budget -= 6;
L_003D6E98:
    set32(c.r[6], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5196u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65472ull;  if (t) { goto L_003D6EC0; } }
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D6ED0; } }
L_003D6EC0:
    st32((c.r[18].w[0] + 5196u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 192u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003D6EE8; } }
L_003D6ED0:
    set32(c.r[3], ld32((c.r[17].w[0] + 192u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5196u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5196u));
    st32((c.r[18].w[0] + 5196u), c.r[3].w[0]);
    c.budget -= 6;
L_003D6EE8:
    c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003D6F68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 276u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D6F68; } }
    c.budget -= 1;
L_003D6F00:
    st8((c.r[17].w[0] + 276u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 30u);
    st8((c.r[17].w[0] + 290u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003D6F28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6F24u); set32(c.r[5], ld32((c.r[17].w[0] + 356u)));  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EF900u; return; } if (c.pc != 0x003D6F24u) [[unlikely]] return; }
L_003D6F24:
    c.budget -= 1;
L_003D6F28:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6F34u); set32(c.r[5], 0u + 29u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003D6F34u) [[unlikely]] return; }
L_003D6F34:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D6F40u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003D6F40u) [[unlikely]] return; }
L_003D6F40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D6F68; } }
L_003D6F48:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 290u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D6F60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 276u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D6F68; } }
    c.budget -= 1;
L_003D6F60:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[17].w[0] + 290u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003D6F68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003D6F80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8525u)));
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[17], c.r[18].w[0] + 8248u);  if (t) { goto L_003D7358; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_003D7310; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003D7250; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003D6FD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D7378; } }
L_003D6FD0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 62u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D7240; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 300u);  if (t) { goto L_003D6FF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 62u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003D7000; } }
    c.budget -= 1;
L_003D6FF8:
    set32(c.r[2], 0u + 600u);
    st16((c.r[17].w[0] + 62u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003D7000:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1024u);
    c.r[7].d[0] = 0ull | 55296ull;
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7028u); set32(c.r[10], 0u + 13u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003D7028u) [[unlikely]] return; }
L_003D7028:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D7378; } }
    st32((c.r[17].w[0] + 360u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 277u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D7078; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_003D7090; } }
L_003D7078:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 6;
L_003D7090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7098u); set32(c.r[4], c.r[18].w[0] + 2880u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003D7098u) [[unlikely]] return; }
L_003D7098:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D70A8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003D70A8u) [[unlikely]] return; }
L_003D70A8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D70B4u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D70B4u) [[unlikely]] return; }
L_003D70B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D70BCu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003D70BCu) [[unlikely]] return; }
L_003D70BC:
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.f[13] = ld32((c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D70CCu); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D70CCu) [[unlikely]] return; }
L_003D70CC:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 5228u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 148u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 148u));
    st32((c.r[17].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 148u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D7108; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 148u), 0u);  if (t) { goto L_003D7128; } }
    c.budget -= 1;
L_003D7108:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 56435ull;  if (t) { goto L_003D7128; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull | 56434ull;  if (t) { goto L_003D7128; } }
    st32((c.r[17].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 1;
L_003D7128:
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 5228u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 64u);  if (t) { goto L_003D7150; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 244u), c.r[2].w[0]);  if (t) { goto L_003D7158; } }
L_003D7150:
    set32(c.r[2], 0u + 64u);
    st32((c.r[17].w[0] + 244u), c.r[2].w[0]);
    c.budget -= 2;
L_003D7158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7160u); set32(c.r[4], c.r[18].w[0] + 2816u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003D7160u) [[unlikely]] return; }
L_003D7160:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7170u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003D7170u) [[unlikely]] return; }
L_003D7170:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D717Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D717Cu) [[unlikely]] return; }
L_003D717C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7184u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003D7184u) [[unlikely]] return; }
L_003D7184:
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7198u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D7198u) [[unlikely]] return; }
L_003D7198:
    c.f[12] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D71A4u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D71A4u) [[unlikely]] return; }
L_003D71A4:
    set32(c.r[3], ld32((c.r[18].w[0] + 5220u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[17].w[0] + 100u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 100u));
    st32((c.r[17].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[4].sd[0] < 16384ll ? 1ull : 0ull;  if (t) { goto L_003D71E8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D71E8; } }
    set32(c.r[3], 0u + 16384u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_003D7208; } }
L_003D71E8:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 49153ull;  if (t) { goto L_003D7208; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 49152ull;  if (t) { goto L_003D7208; } }
    st32((c.r[17].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 1;
L_003D7208:
    set32(c.r[4], ld32((c.r[18].w[0] + 5220u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 100u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 128u);  if (t) { goto L_003D7230; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 196u), c.r[3].w[0]);  if (t) { goto L_003D7378; } }
L_003D7230:
    set32(c.r[3], 0u + 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 196u), c.r[3].w[0]);  if (t) { goto L_003D7378; } }
    c.budget -= 1;
L_003D7240:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 62u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003D7378; } }
    c.budget -= 1;
L_003D7250:
    set32(c.r[6], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5228u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003D7280; } }
    c.r[3].d[0] = 0ull | 65504ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D7290; } }
    c.budget -= 1;
L_003D7280:
    st32((c.r[18].w[0] + 5228u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 244u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003D72A8; } }
L_003D7290:
    set32(c.r[3], ld32((c.r[17].w[0] + 244u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5228u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5228u));
    st32((c.r[18].w[0] + 5228u), c.r[3].w[0]);
    c.budget -= 6;
L_003D72A8:
    set32(c.r[6], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5220u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65472ull;  if (t) { goto L_003D72D0; } }
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D72E0; } }
L_003D72D0:
    st32((c.r[18].w[0] + 5220u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 196u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003D72F8; } }
L_003D72E0:
    set32(c.r[3], ld32((c.r[17].w[0] + 196u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5220u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5220u));
    st32((c.r[18].w[0] + 5220u), c.r[3].w[0]);
    c.budget -= 6;
L_003D72F8:
    c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003D7378; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 277u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D7378; } }
    c.budget -= 1;
L_003D7310:
    st8((c.r[17].w[0] + 277u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 30u);
    st8((c.r[17].w[0] + 291u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003D7338; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7334u); set32(c.r[5], ld32((c.r[17].w[0] + 360u)));  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EF900u; return; } if (c.pc != 0x003D7334u) [[unlikely]] return; }
L_003D7334:
    c.budget -= 1;
L_003D7338:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7344u); set32(c.r[5], 0u + 26u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003D7344u) [[unlikely]] return; }
L_003D7344:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7350u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003D7350u) [[unlikely]] return; }
L_003D7350:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D7378; } }
L_003D7358:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 291u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D7370; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 277u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D7378; } }
    c.budget -= 1;
L_003D7370:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[17].w[0] + 291u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003D7378:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003D7390:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8526u)));
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[17], c.r[18].w[0] + 8248u);  if (t) { goto L_003D77B8; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003D7730; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003D7668; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003D73E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D77D8; } }
    c.budget -= 1;
L_003D73E0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D7658; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 600u);  if (t) { goto L_003D7408; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 64u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003D7410; } }
    c.budget -= 1;
L_003D7408:
    set32(c.r[2], 0u + 1200u);
    st16((c.r[17].w[0] + 64u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003D7410:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull | 34816ull;
    c.r[7].d[0] = 0ull | 63488ull;
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7438u); set32(c.r[10], 0u + 15u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003D7438u) [[unlikely]] return; }
L_003D7438:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D77D8; } }
    st32((c.r[17].w[0] + 364u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 278u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D7488; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_003D74A0; } }
L_003D7488:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 6;
L_003D74A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D74A8u); set32(c.r[4], c.r[18].w[0] + 2944u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003D74A8u) [[unlikely]] return; }
L_003D74A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D74B8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003D74B8u) [[unlikely]] return; }
L_003D74B8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D74C4u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D74C4u) [[unlikely]] return; }
L_003D74C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D74CCu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003D74CCu) [[unlikely]] return; }
L_003D74CC:
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.f[13] = ld32((c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D74DCu); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D74DCu) [[unlikely]] return; }
L_003D74DC:
    set32(c.r[3], c.r[2].w[0] - 16384u);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 5240u)));
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 152u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 152u));
    st32((c.r[17].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 152u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D7520; } }
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 16384u);  if (t) { goto L_003D7520; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 152u), c.r[2].w[0]);  if (t) { goto L_003D7540; } }
L_003D7520:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 49153ull;  if (t) { goto L_003D7540; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull | 49152ull;  if (t) { goto L_003D7540; } }
    st32((c.r[17].w[0] + 152u), c.r[2].w[0]);
    c.budget -= 1;
L_003D7540:
    set32(c.r[4], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 5240u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 128u);  if (t) { goto L_003D7568; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 248u), c.r[2].w[0]);  if (t) { goto L_003D7570; } }
L_003D7568:
    set32(c.r[2], 0u + 128u);
    st32((c.r[17].w[0] + 248u), c.r[2].w[0]);
    c.budget -= 2;
L_003D7570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7578u); set32(c.r[4], c.r[18].w[0] + 3008u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003D7578u) [[unlikely]] return; }
L_003D7578:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7588u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003D7588u) [[unlikely]] return; }
L_003D7588:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7594u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D7594u) [[unlikely]] return; }
L_003D7594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D759Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003D759Cu) [[unlikely]] return; }
L_003D759C:
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D75B0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D75B0u) [[unlikely]] return; }
L_003D75B0:
    c.f[13] = c.f[0];
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D75C0u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D75C0u) [[unlikely]] return; }
L_003D75C0:
    set32(c.r[4], ld32((c.r[18].w[0] + 5248u)));
    set32(c.r[3], c.r[2].w[0] + 3095u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    st32((c.r[17].w[0] + 104u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 104u));
    st32((c.r[17].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[4].sd[0] < 8192ll ? 1ull : 0ull;  if (t) { goto L_003D7608; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D7608; } }
    set32(c.r[3], 0u + 8192u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_003D7620; } }
    c.budget -= 1;
L_003D7608:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D7620; } }
    st32((c.r[17].w[0] + 104u), 0u);
    c.budget -= 2;
L_003D7620:
    set32(c.r[4], ld32((c.r[18].w[0] + 5248u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 104u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 64u);  if (t) { goto L_003D7648; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 200u), c.r[3].w[0]);  if (t) { goto L_003D77D8; } }
L_003D7648:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 200u), c.r[3].w[0]);  if (t) { goto L_003D77D8; } }
    c.budget -= 1;
L_003D7658:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 64u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003D77D8; } }
    c.budget -= 1;
L_003D7668:
    set32(c.r[6], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5240u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003D7698; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D76A8; } }
    c.budget -= 1;
L_003D7698:
    st32((c.r[18].w[0] + 5240u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 248u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003D76C0; } }
L_003D76A8:
    set32(c.r[3], ld32((c.r[17].w[0] + 248u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5240u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5240u));
    st32((c.r[18].w[0] + 5240u), c.r[3].w[0]);
    c.budget -= 6;
L_003D76C0:
    set32(c.r[6], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5248u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65504ull;  if (t) { goto L_003D76E8; } }
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D76F8; } }
L_003D76E8:
    st32((c.r[18].w[0] + 5248u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 200u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003D7710; } }
L_003D76F8:
    set32(c.r[3], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5248u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5248u));
    st32((c.r[18].w[0] + 5248u), c.r[3].w[0]);
    c.budget -= 6;
L_003D7710:
    c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003D77D8; } }
    st8((c.r[17].w[0] + 278u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 292u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 306u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D77D8; } }
    c.budget -= 1;
L_003D7730:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 292u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D77A8; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[17].w[0] + 292u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003D7760; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D775Cu); set32(c.r[5], ld32((c.r[17].w[0] + 364u)));  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EF900u; return; } if (c.pc != 0x003D775Cu) [[unlikely]] return; }
L_003D775C:
    c.budget -= 1;
L_003D7760:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D776Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003D776Cu) [[unlikely]] return; }
L_003D776C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7778u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003D7778u) [[unlikely]] return; }
L_003D7778:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 306u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 306u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 306u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_003D77D8; } }
    set32(c.r[3], 0u + 30u);
    st8((c.r[17].w[0] + 278u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 292u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D77D8; } }
    c.budget -= 1;
L_003D77A8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 292u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D77D8; } }
    c.budget -= 1;
L_003D77B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 292u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D77D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 278u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D77D8; } }
    c.budget -= 1;
L_003D77D0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[17].w[0] + 292u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003D77D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003D77F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8527u)));
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[17], c.r[18].w[0] + 8248u);  if (t) { goto L_003D7C10; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003D7B88; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003D7AC0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003D7840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D7C30; } }
    c.budget -= 1;
L_003D7840:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 66u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D7AB0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 600u);  if (t) { goto L_003D7868; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 66u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003D7870; } }
    c.budget -= 1;
L_003D7868:
    set32(c.r[2], 0u + 1200u);
    st16((c.r[17].w[0] + 66u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003D7870:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 2048u);
    set32(c.r[7], 0u + 30720u);
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7898u); set32(c.r[10], 0u + 17u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003D7898u) [[unlikely]] return; }
L_003D7898:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D7C30; } }
    st32((c.r[17].w[0] + 368u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 279u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D78E8; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_003D7900; } }
L_003D78E8:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 6;
L_003D7900:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7908u); set32(c.r[4], c.r[18].w[0] + 3072u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003D7908u) [[unlikely]] return; }
L_003D7908:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7918u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003D7918u) [[unlikely]] return; }
L_003D7918:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7924u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D7924u) [[unlikely]] return; }
L_003D7924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D792Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003D792Cu) [[unlikely]] return; }
L_003D792C:
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.f[13] = ld32((c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D793Cu); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D793Cu) [[unlikely]] return; }
L_003D793C:
    set32(c.r[3], c.r[2].w[0] + 16384u);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 5264u)));
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 156u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 156u));
    st32((c.r[17].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 156u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D7980; } }
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 16384u);  if (t) { goto L_003D7980; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 156u), c.r[2].w[0]);  if (t) { goto L_003D79A0; } }
L_003D7980:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 49153ull;  if (t) { goto L_003D79A0; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull | 49152ull;  if (t) { goto L_003D79A0; } }
    st32((c.r[17].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 1;
L_003D79A0:
    set32(c.r[4], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 5264u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 128u);  if (t) { goto L_003D79C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 252u), c.r[2].w[0]);  if (t) { goto L_003D79D0; } }
L_003D79C8:
    set32(c.r[2], 0u + 128u);
    st32((c.r[17].w[0] + 252u), c.r[2].w[0]);
    c.budget -= 2;
L_003D79D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D79D8u); set32(c.r[4], c.r[18].w[0] + 3136u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003D79D8u) [[unlikely]] return; }
L_003D79D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D79E8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003D79E8u) [[unlikely]] return; }
L_003D79E8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D79F4u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D79F4u) [[unlikely]] return; }
L_003D79F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D79FCu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003D79FCu) [[unlikely]] return; }
L_003D79FC:
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7A10u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D7A10u) [[unlikely]] return; }
L_003D7A10:
    c.f[12] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7A1Cu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D7A1Cu) [[unlikely]] return; }
L_003D7A1C:
    set32(c.r[4], ld32((c.r[18].w[0] + 5272u)));
    set32(c.r[3], c.r[2].w[0] - 3095u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    st32((c.r[17].w[0] + 108u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 108u));
    st32((c.r[17].w[0] + 108u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 108u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D7A58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 108u), 0u);  if (t) { goto L_003D7A78; } }
    c.budget -= 1;
L_003D7A58:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 8193ll ? 1ull : 0ull;  if (t) { goto L_003D7A78; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 8192u);  if (t) { goto L_003D7A78; } }
    st32((c.r[17].w[0] + 108u), c.r[3].w[0]);
    c.budget -= 2;
L_003D7A78:
    set32(c.r[4], ld32((c.r[18].w[0] + 5272u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 108u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 64u);  if (t) { goto L_003D7AA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 204u), c.r[3].w[0]);  if (t) { goto L_003D7C30; } }
L_003D7AA0:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 204u), c.r[3].w[0]);  if (t) { goto L_003D7C30; } }
    c.budget -= 1;
L_003D7AB0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 66u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003D7C30; } }
    c.budget -= 1;
L_003D7AC0:
    set32(c.r[6], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5264u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003D7AF0; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D7B00; } }
    c.budget -= 1;
L_003D7AF0:
    st32((c.r[18].w[0] + 5264u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 252u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003D7B18; } }
L_003D7B00:
    set32(c.r[3], ld32((c.r[17].w[0] + 252u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5264u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5264u));
    st32((c.r[18].w[0] + 5264u), c.r[3].w[0]);
    c.budget -= 6;
L_003D7B18:
    set32(c.r[6], ld32((c.r[17].w[0] + 108u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5272u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65504ull;  if (t) { goto L_003D7B40; } }
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D7B50; } }
L_003D7B40:
    st32((c.r[18].w[0] + 5272u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 204u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003D7B68; } }
L_003D7B50:
    set32(c.r[3], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5272u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5272u));
    st32((c.r[18].w[0] + 5272u), c.r[3].w[0]);
    c.budget -= 6;
L_003D7B68:
    c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003D7C30; } }
    st8((c.r[17].w[0] + 279u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 293u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 307u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D7C30; } }
    c.budget -= 1;
L_003D7B88:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 293u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D7C00; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[17].w[0] + 293u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003D7BB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7BB4u); set32(c.r[5], ld32((c.r[17].w[0] + 368u)));  if (depth < kMaxDepth) unit_003B(c, 332u, depth + 1u); else { c.pc = 0x001EF900u; return; } if (c.pc != 0x003D7BB4u) [[unlikely]] return; }
L_003D7BB4:
    c.budget -= 1;
L_003D7BB8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7BC4u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003D7BC4u) [[unlikely]] return; }
L_003D7BC4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7BD0u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003D7BD0u) [[unlikely]] return; }
L_003D7BD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 307u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 307u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 307u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_003D7C30; } }
    set32(c.r[3], 0u + 30u);
    st8((c.r[17].w[0] + 279u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 293u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D7C30; } }
    c.budget -= 1;
L_003D7C00:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 293u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003D7C30; } }
    c.budget -= 1;
L_003D7C10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 293u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D7C28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 279u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003D7C30; } }
    c.budget -= 1;
L_003D7C28:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[17].w[0] + 293u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003D7C30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003D7C50:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8528u)));
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[17], c.r[18].w[0] + 8248u);  if (t) { [[clang::musttail]] return unit_00B6(c, 6u, depth); } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003D7FF0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003D7F28; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003D7CA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00B6(c, 7u, depth); } }
    c.budget -= 1;
L_003D7CA0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D7F18; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 600u);  if (t) { goto L_003D7CC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 68u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003D7CD0; } }
    c.budget -= 1;
L_003D7CC8:
    set32(c.r[2], 0u + 1200u);
    st16((c.r[17].w[0] + 68u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003D7CD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull | 34816ull;
    c.r[7].d[0] = 0ull | 63488ull;
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7CF8u); set32(c.r[10], 0u + 19u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003D7CF8u) [[unlikely]] return; }
L_003D7CF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00B6(c, 7u, depth); } }
    st32((c.r[17].w[0] + 372u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 280u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D7D48; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_003D7D60; } }
L_003D7D48:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 6;
L_003D7D60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7D68u); set32(c.r[4], c.r[18].w[0] + 3200u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003D7D68u) [[unlikely]] return; }
L_003D7D68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7D78u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003D7D78u) [[unlikely]] return; }
L_003D7D78:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7D84u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D7D84u) [[unlikely]] return; }
L_003D7D84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7D8Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003D7D8Cu) [[unlikely]] return; }
L_003D7D8C:
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.f[13] = ld32((c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7D9Cu); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D7D9Cu) [[unlikely]] return; }
L_003D7D9C:
    set32(c.r[3], c.r[2].w[0] - 16384u);
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 5288u)));
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 160u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 160u));
    st32((c.r[17].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 160u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D7DE0; } }
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 16384u);  if (t) { goto L_003D7DE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_003D7E00; } }
L_003D7DE0:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 49153ull;  if (t) { goto L_003D7E00; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull | 49152ull;  if (t) { goto L_003D7E00; } }
    st32((c.r[17].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 1;
L_003D7E00:
    set32(c.r[4], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 5288u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 128u);  if (t) { goto L_003D7E28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 256u), c.r[2].w[0]);  if (t) { goto L_003D7E30; } }
L_003D7E28:
    set32(c.r[2], 0u + 128u);
    st32((c.r[17].w[0] + 256u), c.r[2].w[0]);
    c.budget -= 2;
L_003D7E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7E38u); set32(c.r[4], c.r[18].w[0] + 3264u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003D7E38u) [[unlikely]] return; }
L_003D7E38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7E48u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003D7E48u) [[unlikely]] return; }
L_003D7E48:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7E54u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003D7E54u) [[unlikely]] return; }
L_003D7E54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7E5Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003D7E5Cu) [[unlikely]] return; }
L_003D7E5C:
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7E70u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003D7E70u) [[unlikely]] return; }
L_003D7E70:
    c.f[13] = c.f[0];
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D7E80u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003D7E80u) [[unlikely]] return; }
L_003D7E80:
    set32(c.r[4], ld32((c.r[18].w[0] + 5296u)));
    set32(c.r[3], c.r[2].w[0] + 3095u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    st32((c.r[17].w[0] + 112u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 112u));
    st32((c.r[17].w[0] + 112u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 112u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[4].sd[0] < 8192ll ? 1ull : 0ull;  if (t) { goto L_003D7EC8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D7EC8; } }
    set32(c.r[3], 0u + 8192u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 112u), c.r[3].w[0]);  if (t) { goto L_003D7EE0; } }
    c.budget -= 1;
L_003D7EC8:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D7EE0; } }
    st32((c.r[17].w[0] + 112u), 0u);
    c.budget -= 2;
L_003D7EE0:
    set32(c.r[4], ld32((c.r[18].w[0] + 5296u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 112u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 64u);  if (t) { goto L_003D7F08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 208u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_00B6(c, 7u, depth); } }
L_003D7F08:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 208u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_00B6(c, 7u, depth); } }
    c.budget -= 1;
L_003D7F18:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 68u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_00B6(c, 7u, depth); } }
    c.budget -= 1;
L_003D7F28:
    set32(c.r[6], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5288u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003D7F58; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D7F68; } }
    c.budget -= 1;
L_003D7F58:
    st32((c.r[18].w[0] + 5288u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 256u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003D7F80; } }
L_003D7F68:
    set32(c.r[3], ld32((c.r[17].w[0] + 256u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5288u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5288u));
    st32((c.r[18].w[0] + 5288u), c.r[3].w[0]);
    c.budget -= 6;
L_003D7F80:
    set32(c.r[6], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 5296u)));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 65504ull;  if (t) { goto L_003D7FA8; } }
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D7FB8; } }
L_003D7FA8:
    st32((c.r[18].w[0] + 5296u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 208u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_003D7FD0; } }
L_003D7FB8:
    set32(c.r[3], ld32((c.r[17].w[0] + 208u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 5296u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 5296u));
    st32((c.r[18].w[0] + 5296u), c.r[3].w[0]);
    c.budget -= 6;
L_003D7FD0:
    c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { [[clang::musttail]] return unit_00B6(c, 7u, depth); } }
    st8((c.r[17].w[0] + 280u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 294u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 308u), static_cast<std::uint8_t>(0u));  if (t) { [[clang::musttail]] return unit_00B6(c, 7u, depth); } }
    c.budget -= 1;
L_003D7FF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 294u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_00B6(c, 5u, depth); } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
    [[clang::musttail]] return unit_00B6(c, 1u, depth);
}

}
