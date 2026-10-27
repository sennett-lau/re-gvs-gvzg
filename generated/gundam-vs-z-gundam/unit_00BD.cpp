#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00BD[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 5, 0, 6, 0, 0,
    0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0,
    15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 19, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 24, 0, 25, 0,
    0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0,
    0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0,
    0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0,
    0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0,
    0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63,
    0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0,
    0, 83, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0,
    90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0,
    0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0,
    116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 166, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0,
    0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0,
    188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 0, 0,
    0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0,
    0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00BD(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003F4000;
    case 2u: goto L_003F4020;
    case 3u: goto L_003F4050;
    case 4u: goto L_003F4060;
    case 5u: goto L_003F406C;
    case 6u: goto L_003F4074;
    case 7u: goto L_003F4088;
    case 8u: goto L_003F4094;
    case 9u: goto L_003F4138;
    case 10u: goto L_003F4148;
    case 11u: goto L_003F41D8;
    case 12u: goto L_003F4230;
    case 13u: goto L_003F4258;
    case 14u: goto L_003F4270;
    case 15u: goto L_003F4280;
    case 16u: goto L_003F4328;
    case 17u: goto L_003F43A8;
    case 18u: goto L_003F43B8;
    case 19u: goto L_003F43C4;
    case 20u: goto L_003F43CC;
    case 21u: goto L_003F43DC;
    case 22u: goto L_003F4454;
    case 23u: goto L_003F4464;
    case 24u: goto L_003F4470;
    case 25u: goto L_003F4478;
    case 26u: goto L_003F448C;
    case 27u: goto L_003F4498;
    case 28u: goto L_003F464C;
    case 29u: goto L_003F46E0;
    case 30u: goto L_003F470C;
    case 31u: goto L_003F471C;
    case 32u: goto L_003F47AC;
    case 33u: goto L_003F4978;
    case 34u: goto L_003F4984;
    case 35u: goto L_003F4A10;
    case 36u: goto L_003F4A1C;
    case 37u: goto L_003F4B80;
    case 38u: goto L_003F4BA0;
    case 39u: goto L_003F4BA8;
    case 40u: goto L_003F4BB8;
    case 41u: goto L_003F4CC0;
    case 42u: goto L_003F4CE8;
    case 43u: goto L_003F4D24;
    case 44u: goto L_003F4D30;
    case 45u: goto L_003F4D48;
    case 46u: goto L_003F4D50;
    case 47u: goto L_003F4D90;
    case 48u: goto L_003F4DC0;
    case 49u: goto L_003F4DE0;
    case 50u: goto L_003F4DEC;
    case 51u: goto L_003F4E04;
    case 52u: goto L_003F4E3C;
    case 53u: goto L_003F4E80;
    case 54u: goto L_003F4EC8;
    case 55u: goto L_003F4EE8;
    case 56u: goto L_003F4EF4;
    case 57u: goto L_003F4F0C;
    case 58u: goto L_003F4F44;
    case 59u: goto L_003F4F88;
    case 60u: goto L_003F4FF4;
    case 61u: goto L_003F5008;
    case 62u: goto L_003F5050;
    case 63u: goto L_003F507C;
    case 64u: goto L_003F5088;
    case 65u: goto L_003F50F8;
    case 66u: goto L_003F5190;
    case 67u: goto L_003F5218;
    case 68u: goto L_003F523C;
    case 69u: goto L_003F5250;
    case 70u: goto L_003F52A0;
    case 71u: goto L_003F5318;
    case 72u: goto L_003F5328;
    case 73u: goto L_003F5340;
    case 74u: goto L_003F53B8;
    case 75u: goto L_003F53F0;
    case 76u: goto L_003F53FC;
    case 77u: goto L_003F5480;
    case 78u: goto L_003F54A8;
    case 79u: goto L_003F5518;
    case 80u: goto L_003F5588;
    case 81u: goto L_003F55AC;
    case 82u: goto L_003F5674;
    case 83u: goto L_003F5684;
    case 84u: goto L_003F5694;
    case 85u: goto L_003F56A4;
    case 86u: goto L_003F56B4;
    case 87u: goto L_003F56C4;
    case 88u: goto L_003F56D4;
    case 89u: goto L_003F56E4;
    case 90u: goto L_003F5700;
    case 91u: goto L_003F5740;
    case 92u: goto L_003F576C;
    case 93u: goto L_003F577C;
    case 94u: goto L_003F580C;
    case 95u: goto L_003F59D8;
    case 96u: goto L_003F59E4;
    case 97u: goto L_003F5A70;
    case 98u: goto L_003F5A7C;
    case 99u: goto L_003F5BE0;
    case 100u: goto L_003F5C70;
    case 101u: goto L_003F5D14;
    case 102u: goto L_003F5EE0;
    case 103u: goto L_003F5EEC;
    case 104u: goto L_003F5F78;
    case 105u: goto L_003F5F84;
    case 106u: goto L_003F60E0;
    case 107u: goto L_003F6130;
    case 108u: goto L_003F6140;
    case 109u: goto L_003F614C;
    case 110u: goto L_003F6180;
    case 111u: goto L_003F61D0;
    case 112u: goto L_003F61E0;
    case 113u: goto L_003F61EC;
    case 114u: goto L_003F6220;
    case 115u: goto L_003F6270;
    case 116u: goto L_003F6280;
    case 117u: goto L_003F628C;
    case 118u: goto L_003F62C0;
    case 119u: goto L_003F6310;
    case 120u: goto L_003F6320;
    case 121u: goto L_003F632C;
    case 122u: goto L_003F6360;
    case 123u: goto L_003F638C;
    case 124u: goto L_003F63A4;
    case 125u: goto L_003F63B0;
    case 126u: goto L_003F63C0;
    case 127u: goto L_003F64C0;
    case 128u: goto L_003F64E8;
    case 129u: goto L_003F6520;
    case 130u: goto L_003F652C;
    case 131u: goto L_003F6544;
    case 132u: goto L_003F6550;
    case 133u: goto L_003F6588;
    case 134u: goto L_003F65A8;
    case 135u: goto L_003F65C4;
    case 136u: goto L_003F65D0;
    case 137u: goto L_003F65E8;
    case 138u: goto L_003F6620;
    case 139u: goto L_003F6670;
    case 140u: goto L_003F66B0;
    case 141u: goto L_003F66CC;
    case 142u: goto L_003F66D8;
    case 143u: goto L_003F66F0;
    case 144u: goto L_003F6728;
    case 145u: goto L_003F6778;
    case 146u: goto L_003F67B8;
    case 147u: goto L_003F67E4;
    case 148u: goto L_003F67F0;
    case 149u: goto L_003F6818;
    case 150u: goto L_003F68C0;
    case 151u: goto L_003F6950;
    case 152u: goto L_003F69D8;
    case 153u: goto L_003F69E8;
    case 154u: goto L_003F6A38;
    case 155u: goto L_003F6AB0;
    case 156u: goto L_003F6AC0;
    case 157u: goto L_003F6AD8;
    case 158u: goto L_003F6B58;
    case 159u: goto L_003F6B90;
    case 160u: goto L_003F6B9C;
    case 161u: goto L_003F6C20;
    case 162u: goto L_003F6C48;
    case 163u: goto L_003F6CB8;
    case 164u: goto L_003F6D18;
    case 165u: goto L_003F6D3C;
    case 166u: goto L_003F6E04;
    case 167u: goto L_003F6E14;
    case 168u: goto L_003F6E24;
    case 169u: goto L_003F6E34;
    case 170u: goto L_003F6E44;
    case 171u: goto L_003F6E54;
    case 172u: goto L_003F6E64;
    case 173u: goto L_003F6E74;
    case 174u: goto L_003F6E90;
    case 175u: goto L_003F6EAC;
    case 176u: goto L_003F6F00;
    case 177u: goto L_003F6F2C;
    case 178u: goto L_003F6F80;
    case 179u: goto L_003F6FD8;
    case 180u: goto L_003F706C;
    case 181u: goto L_003F7094;
    case 182u: goto L_003F7288;
    case 183u: goto L_003F7294;
    case 184u: goto L_003F7328;
    case 185u: goto L_003F7334;
    case 186u: goto L_003F74A0;
    case 187u: goto L_003F74F0;
    case 188u: goto L_003F7500;
    case 189u: goto L_003F750C;
    case 190u: goto L_003F7540;
    case 191u: goto L_003F7590;
    case 192u: goto L_003F75A0;
    case 193u: goto L_003F75AC;
    case 194u: goto L_003F75E0;
    case 195u: goto L_003F7630;
    case 196u: goto L_003F7640;
    case 197u: goto L_003F764C;
    case 198u: goto L_003F7680;
    case 199u: goto L_003F76D0;
    case 200u: goto L_003F76E0;
    case 201u: goto L_003F76EC;
    case 202u: goto L_003F7720;
    case 203u: goto L_003F7744;
    case 204u: goto L_003F7748;
    case 205u: goto L_003F775C;
    case 206u: goto L_003F7840;
    case 207u: goto L_003F7868;
    case 208u: goto L_003F7890;
    case 209u: goto L_003F78B0;
    case 210u: goto L_003F78E0;
    case 211u: goto L_003F78E8;
    case 212u: goto L_003F790C;
    case 213u: goto L_003F793C;
    case 214u: goto L_003F7948;
    case 215u: goto L_003F799C;
    case 216u: goto L_003F79A8;
    case 217u: goto L_003F79D8;
    case 218u: goto L_003F7A08;
    case 219u: goto L_003F7A3C;
    case 220u: goto L_003F7A48;
    case 221u: goto L_003F7A70;
    case 222u: goto L_003F7AB4;
    case 223u: goto L_003F7AE8;
    case 224u: goto L_003F7B04;
    case 225u: goto L_003F7B10;
    case 226u: goto L_003F7B54;
    case 227u: goto L_003F7B60;
    case 228u: goto L_003F7C44;
    case 229u: goto L_003F7C50;
    case 230u: goto L_003F7C74;
    case 231u: goto L_003F7D60;
    case 232u: goto L_003F7DDC;
    case 233u: goto L_003F7E28;
    case 234u: goto L_003F7E88;
    case 235u: goto L_003F7EC8;
    case 236u: goto L_003F7EE8;
    case 237u: goto L_003F7F20;
    case 238u: goto L_003F7F2C;
    case 239u: goto L_003F7FA4;
    case 240u: goto L_003F7FD0;
    default: bad_entry(c, 0x003F4000u); return;
    }
L_003F4000:
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_003F4038; } }
L_003F4020:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 6;
L_003F4038:
    c.r[17].d[0] = c.r[17].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    set32(c.r[2], c.r[17].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4050u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003F4050u) [[unlikely]] return; }
L_003F4050:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4060u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003F4060u) [[unlikely]] return; }
L_003F4060:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F406Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003F406Cu) [[unlikely]] return; }
L_003F406C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4074u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003F4074u) [[unlikely]] return; }
L_003F4074:
    c.f[1] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4088u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F4088u) [[unlikely]] return; }
L_003F4088:
    c.f[12] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4094u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F4094u) [[unlikely]] return; }
L_003F4094:
    set32(c.r[4], c.r[17].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] - 3095u);
    set32(c.r[5], c.r[4].w[0] + c.r[17].w[0]);
    c.r[1].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[5], c.r[3].w[0] + 5064u);
    set32(c.r[3], ld32((c.r[3].w[0] + 5064u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[18].w[0] + 80u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 80u));
    st32((c.r[18].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F40E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 80u), 0u);  if (t) { goto L_003F4100; } }
L_003F40E0:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 57345ull;  if (t) { goto L_003F4100; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 57344ull;  if (t) { goto L_003F4100; } }
    st32((c.r[18].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 1;
L_003F4100:
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 64u);  if (t) { goto L_003F4128; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003F4258; } }
L_003F4128:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003F4258; } }
    c.budget -= 1;
L_003F4138:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003F4258; } }
    c.budget -= 1;
L_003F4148:
    c.r[6].d[0] = c.r[17].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[9], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[4], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 5064u)));
    set32(c.r[7], c.r[4].w[0] + 5064u);
    set32(c.r[4], c.r[9].w[0] - c.r[6].w[0]);
    c.r[8].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[8].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] != 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_003F4190; } }
    c.r[4].d[0] = 0ull | 65504ull;
    c.r[4].d[0] = c.r[8].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003F41A0; } }
L_003F4190:
    st32((c.r[7].w[0]), c.r[9].w[0]);
    st32((c.r[18].w[0] + 92u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[10].w[0] + 1u);  if (t) { goto L_003F41B8; } }
L_003F41A0:
    set32(c.r[4], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    st32((c.r[7].w[0]), c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[7].w[0]));
    st32((c.r[7].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_003F41B8:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_003F4258; } }
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[3].w[0] + 80u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 97u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003F4258; } }
    c.budget -= 1;
L_003F41D8:
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[4].w[0] + 80u);  if (t) { goto L_003F4220; } }
    set32(c.r[3], 0u + 4u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 97u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 97u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F4258; } }
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[3], 0u + 30u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003F4258; } }
    c.budget -= 1;
L_003F4220:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003F4258; } }
    c.budget -= 1;
L_003F4230:
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[3].w[0] + 80u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 80u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F4250; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003F4258; } }
    c.budget -= 1;
L_003F4250:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003F4258:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003F4270:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F4280:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] << 56;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[18].w[0] + 8248u);
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[17], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], 0u + 3u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    c.budget -= 18;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[20].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003F4690; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003F4628; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003F4540; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003F42F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F46B8; } }
    c.budget -= 1;
L_003F42F0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F4530; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    set32(c.r[3], 0u + 1200u);
    c.f[12] = c.r[2].w[0];
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull | 32768ull;
    c.r[7].d[0] = 0ull | 32769ull;
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 12288u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4328u); c.r[10].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003F4328u) [[unlikely]] return; }
L_003F4328:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F46B8; } }
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F4378; } }
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 112u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 120u), c.f[0]);  if (t) { goto L_003F4390; } }
L_003F4378:
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.budget -= 6;
L_003F4390:
    c.r[19].d[0] = c.r[20].d[0] << 56;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    set32(c.r[2], c.r[19].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F43A8u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003F43A8u) [[unlikely]] return; }
L_003F43A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F43B8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003F43B8u) [[unlikely]] return; }
L_003F43B8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F43C4u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003F43C4u) [[unlikely]] return; }
L_003F43C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F43CCu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003F43CCu) [[unlikely]] return; }
L_003F43CC:
    set32(c.r[16], c.r[29].w[0] + 104u);
    c.f[13] = ld32((c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F43DCu); c.f[12] = ld32((c.r[29].w[0] + 96u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F43DCu) [[unlikely]] return; }
L_003F43DC:
    c.r[5].d[0] = c.r[2].d[0] << 48;
    set32(c.r[2], c.r[19].w[0] << 1);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[3], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[20], c.r[3].w[0] << 2);
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[20].w[0] + c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 5060u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 84u));
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 5060u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F4438; } }
    set32(c.r[2], 0u - 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_003F4440; } }
    c.budget -= 1;
L_003F4438:
    set32(c.r[2], 0u + 128u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 2;
L_003F4440:
    set32(c.r[2], c.r[19].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4454u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003F4454u) [[unlikely]] return; }
L_003F4454:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4464u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003F4464u) [[unlikely]] return; }
L_003F4464:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4470u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003F4470u) [[unlikely]] return; }
L_003F4470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4478u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003F4478u) [[unlikely]] return; }
L_003F4478:
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F448Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F448Cu) [[unlikely]] return; }
L_003F448C:
    c.f[12] = ld32((c.r[29].w[0] + 100u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4498u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F4498u) [[unlikely]] return; }
L_003F4498:
    set32(c.r[3], c.r[2].w[0] - 3095u);
    set32(c.r[5], c.r[20].w[0] + c.r[18].w[0]);
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = 0ull | 32768ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 5076u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 80u));
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[5].w[0] + 5076u);  if (t) { goto L_003F44D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 80u), 0u);  if (t) { goto L_003F44F8; } }
    c.budget -= 1;
L_003F44D8:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 57345ull;  if (t) { goto L_003F44F8; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 57344ull;  if (t) { goto L_003F44F8; } }
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 1;
L_003F44F8:
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 64u);  if (t) { goto L_003F4520; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003F46B8; } }
L_003F4520:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003F46B8; } }
    c.budget -= 1;
L_003F4530:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003F46B8; } }
    c.budget -= 1;
L_003F4540:
    c.r[5].d[0] = c.r[20].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[9], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] + c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 5060u)));
    set32(c.r[8], c.r[4].w[0] + 5060u);
    set32(c.r[4], c.r[9].w[0] - c.r[5].w[0]);
    c.r[7].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[7].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003F4588; } }
    c.r[4].d[0] = 0ull | 65472ull;
    c.r[4].d[0] = c.r[7].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003F4598; } }
L_003F4588:
    st32((c.r[8].w[0]), c.r[9].w[0]);
    st32((c.r[17].w[0] + 96u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { goto L_003F45B0; } }
L_003F4598:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st32((c.r[8].w[0]), c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[8].w[0]));
    st32((c.r[8].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_003F45B0:
    set32(c.r[4], c.r[6].w[0] + c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 5076u)));
    set32(c.r[7], c.r[4].w[0] + 5076u);
    set32(c.r[8], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[4], c.r[8].w[0] - c.r[5].w[0]);
    c.r[6].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[6].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = 0ull | 65504ull;  if (t) { goto L_003F45E0; } }
    c.r[4].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003F45F0; } }
L_003F45E0:
    st32((c.r[7].w[0]), c.r[8].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { goto L_003F4608; } }
L_003F45F0:
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st32((c.r[7].w[0]), c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[7].w[0]));
    st32((c.r[7].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_003F4608:
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_003F46B8; } }
    set32(c.r[3], c.r[19].w[0] + c.r[16].w[0]);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[3].w[0] + 80u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 97u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003F46B8; } }
L_003F4628:
    set32(c.r[3], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[18], c.r[3].w[0] + 80u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 80u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F4680; } }
    set32(c.r[2], 0u + 4u);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F464Cu); st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F464Cu) [[unlikely]] return; }
L_003F464C:
    set32(c.r[4], c.r[19].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 97u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 97u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_003F46B8; } }
    set32(c.r[3], 0u + 30u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003F46B8; } }
    c.budget -= 1;
L_003F4680:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003F46B8; } }
    c.budget -= 1;
L_003F4690:
    set32(c.r[3], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[3].w[0] + 80u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 80u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F46B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003F46B8; } }
    c.budget -= 1;
L_003F46B0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003F46B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003F46E0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F470Cu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x003F470Cu) [[unlikely]] return; }
L_003F470C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F4788; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F471Cu);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003F471Cu) [[unlikely]] return; }
L_003F471C:
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
    c.budget -= 27;
L_003F4788:
    c.f[3] = ld32((c.r[17].w[0] + 1856u));
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0] + 1864u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[21] = fp::sub(c.f[3], c.f[2]);
    c.f[20] = fp::sub(c.f[1], c.f[0]);
    c.f[12] = c.f[21];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F47ACu); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F47ACu) [[unlikely]] return; }
L_003F47AC:
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = 0ull | 63488ull;
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.r[5].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[5].sd[0] < 2049ll ? 1ull : 0ull;  if (t) { goto L_003F47D8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F4840; } }
    c.budget -= 1;
L_003F47D8:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003F47F0; } }
    set32(c.r[3], c.r[3].w[0] - 16u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003F4800; } }
L_003F47F0:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_003F4800; } }
    set32(c.r[3], c.r[3].w[0] + 16u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_003F4800:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003F4818; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_003F4920; } }
    c.budget -= 1;
L_003F4818:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_003F4830; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_003F4920; } }
L_003F4830:
    set32(c.r[3], 0u - 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_003F4920; } }
    c.budget -= 1;
L_003F4840:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F48B8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.r[3].d[0] = c.r[4].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 64u);  if (t) { goto L_003F4868; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003F4870; } }
L_003F4868:
    set32(c.r[3], c.r[4].w[0] + 16u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_003F4870:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.r[1].d[0] = 0ull | 61441ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_003F48A0; } }
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F48A0; } }
    c.r[3].d[0] = 0ull | 61440ull;
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_003F4920; } }
L_003F48A0:
    c.r[3].d[0] = c.r[5].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 8u);  if (t) { goto L_003F4920; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_003F4920; } }
    c.budget -= 1;
L_003F48B8:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.r[1].d[0] = c.r[3].sd[0] < -63ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F48D8; } }
    set32(c.r[3], 0u - 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003F48E0; } }
    c.budget -= 1;
L_003F48D8:
    set32(c.r[3], c.r[3].w[0] - 16u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_003F48E0:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.r[3].d[0] = c.r[4].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_003F4908; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 4096u);  if (t) { goto L_003F4908; } }
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_003F4920; } }
L_003F4908:
    c.r[1].d[0] = 0ull | 61441ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_003F4920; } }
    st32((c.r[17].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 2;
L_003F4920:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_003F4B10; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003F4AC0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003F4948; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F4B58; } }
L_003F4948:
    c.f[1] = ld32((c.r[17].w[0] + 1860u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F49E8; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.f[1] = ld32((c.r[17].w[0] + 1860u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4978u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F4978u) [[unlikely]] return; }
L_003F4978:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4984u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F4984u) [[unlikely]] return; }
L_003F4984:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[2] = c.r[3].w[0];
    c.f[1] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F49C0; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F49D0; } }
    c.budget -= 1;
L_003F49C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
L_003F49D0:
    set32(c.r[3], 0u - 1u);
    fpu_div(c, 20u, c.f[20], c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[20]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003F4B58; } }
L_003F49E8:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F4A80; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4A10u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F4A10u) [[unlikely]] return; }
L_003F4A10:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4A1Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F4A1Cu) [[unlikely]] return; }
L_003F4A1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[2] = c.r[3].w[0];
    c.f[1] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F4A58; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F4A68; } }
    c.budget -= 1;
L_003F4A58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
L_003F4A68:
    set32(c.r[3], 0u + 1u);
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.f[0] = c.f[20] ^ fp::kSign;
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003F4B58; } }
L_003F4A80:
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003F4A98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_003F4B58; } }
    c.budget -= 1;
L_003F4A98:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F4AB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[4].w[0]);  if (t) { goto L_003F4B58; } }
L_003F4AB0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003F4B58; } }
    c.budget -= 1;
L_003F4AC0:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F4AE0; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_003F4B58; } }
L_003F4AE0:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[1].d[0] = 0ull | 64513ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_003F4B58; } }
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F4B58; } }
    c.r[3].d[0] = 0ull | 64512ull;
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_003F4B58; } }
L_003F4B10:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F4B30; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_003F4B58; } }
L_003F4B30:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[3].d[0] = c.r[4].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_003F4B58; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 1024u);  if (t) { goto L_003F4B58; } }
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 3;
L_003F4B58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F4B80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4BA0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x003F4BA0u) [[unlikely]] return; }
L_003F4BA0:
    set32(c.r[16], 0u + 52u);
    c.budget -= 2;
L_003F4BA8:
    c.r[5].d[0] = c.r[16].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4BB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 343u, depth + 1u); else { c.pc = 0x00217490u; return; } if (c.pc != 0x003F4BB8u) [[unlikely]] return; }
L_003F4BB8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[16].sd[0] < 62ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4BA8u | kUnwind; return; } goto L_003F4BA8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);  if (t) { goto L_003F4BE8; } }
    set32(c.r[3], c.r[3].w[0] + 9296u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 636u), c.r[3].w[0]);  if (t) { goto L_003F4BF8; } }
    c.budget -= 1;
L_003F4BE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], c.r[3].w[0] + 8528u);
    st32((c.r[17].w[0] + 636u), c.r[3].w[0]);
    c.budget -= 4;
L_003F4BF8:
    st16((c.r[17].w[0] + 316u), static_cast<std::uint16_t>(0u));
    st8((c.r[17].w[0] + 309u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_003F4C20; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003F4C28; } }
L_003F4C20:
    st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003F4C28:
    st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], 0u + 1800u);
    st8((c.r[16].w[0] + 33u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 3600u);
    st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[8], 0u + 5400u);
    st8((c.r[16].w[0] + 34u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], 0u + 7200u);
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], 0u + 9000u);
    st8((c.r[16].w[0] + 35u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    st16((c.r[16].w[0] + 22u), static_cast<std::uint16_t>(c.r[8].w[0]));
    set32(c.r[5], 0u + 10800u);
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 12600u);
    st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    st8((c.r[16].w[0] + 37u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 38u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 39u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 30u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 32u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 31;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006C0000u);  if (t) { goto L_003F50B8; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 14080u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003F4000u < 16384u) { entry = entries_00BD[(t - 0x003F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003F4CC0:
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003F50E0; } }
L_003F4CE8:
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4D24u); st32((c.r[17].w[0] + 104u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AB(c, 107u, depth + 1u); else { c.pc = 0x003AD450u; return; } if (c.pc != 0x003F4D24u) [[unlikely]] return; }
L_003F4D24:
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4D30u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 111u, depth + 1u); else { c.pc = 0x003AD550u; return; } if (c.pc != 0x003F4D30u) [[unlikely]] return; }
L_003F4D30:
    st32((c.r[16].w[0] + 56u), c.f[0]);
    set32(c.r[4], c.r[17].w[0] + 1856u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4D48u); set32(c.r[6], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003F4D48u) [[unlikely]] return; }
L_003F4D48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F50E0; } }
L_003F4D50:
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + 8192u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[28].w[0] - 25700u);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 1856u);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[5], c.r[17].w[0] + 32u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4D90u); set32(c.r[6], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0000(c, 239u, depth + 1u); else { c.pc = 0x00102678u; return; } if (c.pc != 0x003F4D90u) [[unlikely]] return; }
L_003F4D90:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 88u), 0u);
    st32((c.r[17].w[0] + 84u), 0u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 80u), 0u);  if (t) { goto L_003F50E0; } }
    c.budget -= 1;
L_003F4DC0:
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[8].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4DE0u); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AB(c, 107u, depth + 1u); else { c.pc = 0x003AD450u; return; } if (c.pc != 0x003F4DE0u) [[unlikely]] return; }
L_003F4DE0:
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4DECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 111u, depth + 1u); else { c.pc = 0x003AD550u; return; } if (c.pc != 0x003F4DECu) [[unlikely]] return; }
L_003F4DEC:
    st32((c.r[16].w[0] + 56u), c.f[0]);
    set32(c.r[4], c.r[17].w[0] + 1856u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4E04u); set32(c.r[6], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003F4E04u) [[unlikely]] return; }
L_003F4E04:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.f[12] = c.r[2].w[0];
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4E3Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F4E3Cu) [[unlikely]] return; }
L_003F4E3C:
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003F4E58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_003F4E78; } }
    c.budget -= 1;
L_003F4E58:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003F4E70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003F4E78; } }
L_003F4E70:
    set32(c.r[3], 0u - 1u);
    st32((c.r[17].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 2;
L_003F4E78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003F50E0; } }
L_003F4E80:
    set32(c.r[5], 0u + 1u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], c.r[4].w[0] + 8240u);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] + 8336u);
    st32((c.r[16].w[0] + 60u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_003F50E0; } }
    c.budget -= 1;
L_003F4EC8:
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4EE8u); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AB(c, 107u, depth + 1u); else { c.pc = 0x003AD450u; return; } if (c.pc != 0x003F4EE8u) [[unlikely]] return; }
L_003F4EE8:
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4EF4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 111u, depth + 1u); else { c.pc = 0x003AD550u; return; } if (c.pc != 0x003F4EF4u) [[unlikely]] return; }
L_003F4EF4:
    st32((c.r[16].w[0] + 56u), c.f[0]);
    set32(c.r[4], c.r[17].w[0] + 1856u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4F0Cu); set32(c.r[6], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003F4F0Cu) [[unlikely]] return; }
L_003F4F0C:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.f[12] = c.r[2].w[0];
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4F44u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F4F44u) [[unlikely]] return; }
L_003F4F44:
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003F4F60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_003F4F80; } }
    c.budget -= 1;
L_003F4F60:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003F4F78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003F4F80; } }
L_003F4F78:
    set32(c.r[3], 0u - 1u);
    st32((c.r[17].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 2;
L_003F4F80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003F50E0; } }
L_003F4F88:
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[2], 0u + 7500u);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], c.r[5].w[0] + 8368u);
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + 8432u);
    st32((c.r[16].w[0] + 60u), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[17].w[0] + 1856u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    st32((c.r[17].w[0] + 96u), 0u);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4FF4u); st32((c.r[17].w[0] + 100u), 0u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003F4FF4u) [[unlikely]] return; }
L_003F4FF4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 10064u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003F5170; } }
    c.budget -= 1;
L_003F5008:
    set32(c.r[5], 0u + 1u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], c.r[4].w[0] + 8448u);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] + 8512u);
    st32((c.r[16].w[0] + 60u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_003F50E0; } }
    c.budget -= 1;
L_003F5050:
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F507Cu); st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x003F507Cu) [[unlikely]] return; }
L_003F507C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F50E0; } }
    c.budget -= 1;
L_003F5088:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003F50E0; } }
    c.budget -= 1;
L_003F50B8:
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
L_003F50E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 284u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F50F8; } }
    set32(c.r[5], 0u + 15u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F50F8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x003F50F8u) [[unlikely]] return; }
L_003F50F8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], c.r[3].w[0] + 10064u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);  if (t) { goto L_003F5170; } }
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[17].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    st32((c.r[17].w[0] + 96u), 0u);
    st32((c.r[17].w[0] + 100u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[17].w[0] + 1856u), c.f[3]);
    st32((c.r[17].w[0] + 1860u), c.f[2]);
    st32((c.r[17].w[0] + 1864u), c.f[1]);
    st32((c.r[17].w[0] + 1868u), c.f[0]);
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 20;
L_003F5170:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F5190:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 310u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_003F52A8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 21u)));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F51D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 275u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003F51D0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F54A8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003F5220; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003F54A8; } }
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 15u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5218u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x003F5218u) [[unlikely]] return; }
L_003F5218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F54A8; } }
L_003F5220:
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F5248; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F523Cu);  if (depth < kMaxDepth) unit_00BD(c, 99u, depth + 1u); else { c.pc = 0x003F5BE0u; return; } if (c.pc != 0x003F523Cu) [[unlikely]] return; }
L_003F523C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F5250; } }
    c.budget -= 1;
L_003F5248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5250u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 91u, depth + 1u); else { c.pc = 0x003F5740u; return; } if (c.pc != 0x003F5250u) [[unlikely]] return; }
L_003F5250:
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F52A0u); st32((c.r[17].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 73u, depth + 1u); else { c.pc = 0x00195590u; return; } if (c.pc != 0x003F52A0u) [[unlikely]] return; }
L_003F52A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F54A8; } }
L_003F52A8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F5488; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 21u)));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F52D0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 275u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003F52D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F5398; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003F5320; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_003F5398; } }
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 15u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5318u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x003F5318u) [[unlikely]] return; }
L_003F5318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F5398; } }
L_003F5320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5328u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 73u, depth + 1u); else { c.pc = 0x00195590u; return; } if (c.pc != 0x003F5328u) [[unlikely]] return; }
L_003F5328:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);  if (t) { goto L_003F5398; } }
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5340u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 117u, depth + 1u); else { c.pc = 0x003AD6C0u; return; } if (c.pc != 0x003F5340u) [[unlikely]] return; }
L_003F5340:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F5398; } }
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = 0ull | 65535ull;  if (t) { goto L_003F5380; } }
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F5398; } }
L_003F5380:
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 80u));
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 6;
L_003F5398:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003F53C0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F53B8u); set32(c.r[4], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003F53B8u) [[unlikely]] return; }
L_003F53B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F54A8; } }
L_003F53C0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F53F0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F53F0u) [[unlikely]] return; }
L_003F53F0:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F53FCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F53FCu) [[unlikely]] return; }
L_003F53FC:
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F5450; } }
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F54A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003F5440; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003F54A8; } }
    c.budget -= 1;
L_003F5440:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), 0u);  if (t) { goto L_003F54A8; } }
    c.budget -= 1;
L_003F5450:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F54A8; } }
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F54A8; } }
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5480u); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x003F5480u) [[unlikely]] return; }
L_003F5480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F56E8; } }
L_003F5488:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F54A8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[5], c.r[17].w[0] + 1856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F54A8u); set32(c.r[6], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0000(c, 236u, depth + 1u); else { c.pc = 0x00102610u; return; } if (c.pc != 0x003F54A8u) [[unlikely]] return; }
L_003F54A8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_003F5650; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 513u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F5650; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F5650; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003F5650; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003F55B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003F5530; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F5508; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F5650; } }
    c.budget -= 1;
L_003F5508:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5518u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 113u, depth + 1u); else { c.pc = 0x003AD5D0u; return; } if (c.pc != 0x003F5518u) [[unlikely]] return; }
L_003F5518:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F5650; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003F5650; } }
L_003F5530:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = ld32((c.r[16].w[0] + 72u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);  if (t) { goto L_003F5560; } }
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_003F5578; } }
    c.budget -= 1;
L_003F5560:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 6;
L_003F5578:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5588u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 117u, depth + 1u); else { c.pc = 0x003AD6C0u; return; } if (c.pc != 0x003F5588u) [[unlikely]] return; }
L_003F5588:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F5650; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F55ACu); st8((c.r[17].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0071(c, 43u, depth + 1u); else { c.pc = 0x002C4A90u; return; } if (c.pc != 0x003F55ACu) [[unlikely]] return; }
L_003F55AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F5650; } }
    c.budget -= 1;
L_003F55B8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F5610; } }
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F55F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_003F5650; } }
    c.budget -= 1;
L_003F55F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_003F5650; } }
    c.budget -= 1;
L_003F5610:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F5638; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_003F5650; } }
L_003F5638:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 6;
L_003F5650:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003F56E8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_003F56E8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5674u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 106u, depth + 1u); else { c.pc = 0x003F60E0u; return; } if (c.pc != 0x003F5674u) [[unlikely]] return; }
L_003F5674:
    set32(c.r[5], 0u + 5u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5684u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 106u, depth + 1u); else { c.pc = 0x003F60E0u; return; } if (c.pc != 0x003F5684u) [[unlikely]] return; }
L_003F5684:
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5694u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 110u, depth + 1u); else { c.pc = 0x003F6180u; return; } if (c.pc != 0x003F5694u) [[unlikely]] return; }
L_003F5694:
    set32(c.r[5], 0u + 6u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F56A4u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 110u, depth + 1u); else { c.pc = 0x003F6180u; return; } if (c.pc != 0x003F56A4u) [[unlikely]] return; }
L_003F56A4:
    set32(c.r[5], 0u + 4u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F56B4u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 114u, depth + 1u); else { c.pc = 0x003F6220u; return; } if (c.pc != 0x003F56B4u) [[unlikely]] return; }
L_003F56B4:
    set32(c.r[5], 0u + 7u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F56C4u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 114u, depth + 1u); else { c.pc = 0x003F6220u; return; } if (c.pc != 0x003F56C4u) [[unlikely]] return; }
L_003F56C4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F56D4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 118u, depth + 1u); else { c.pc = 0x003F62C0u; return; } if (c.pc != 0x003F56D4u) [[unlikely]] return; }
L_003F56D4:
    set32(c.r[5], 0u + 3u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F56E4u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 118u, depth + 1u); else { c.pc = 0x003F62C0u; return; } if (c.pc != 0x003F56E4u) [[unlikely]] return; }
L_003F56E4:
    c.budget -= 1;
L_003F56E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F5700:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003F5720; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003F5730; } }
L_003F5720:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_003F5730:
    set32(c.r[5], 0u + 15u);
    c.budget -= 3;
    { c.r[6].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023A1C0u | kUnwind; return; } [[clang::musttail]] return unit_004E(c, 153u, depth); }
L_003F5740:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[16], c.r[17].w[0] + 304u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F576Cu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x003F576Cu) [[unlikely]] return; }
L_003F576C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F57E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F577Cu);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003F577Cu) [[unlikely]] return; }
L_003F577C:
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
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
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 52u), 0u);
    c.budget -= 27;
L_003F57E8:
    c.f[3] = ld32((c.r[17].w[0] + 1856u));
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0] + 1864u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[21] = fp::sub(c.f[3], c.f[2]);
    c.f[20] = fp::sub(c.f[1], c.f[0]);
    c.f[12] = c.f[21];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F580Cu); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F580Cu) [[unlikely]] return; }
L_003F580C:
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = 0ull | 63488ull;
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.r[5].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[5].sd[0] < 2049ll ? 1ull : 0ull;  if (t) { goto L_003F5838; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F58A0; } }
    c.budget -= 1;
L_003F5838:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003F5850; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003F5860; } }
L_003F5850:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_003F5860; } }
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_003F5860:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003F5878; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_003F5980; } }
    c.budget -= 1;
L_003F5878:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_003F5890; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_003F5980; } }
L_003F5890:
    set32(c.r[3], 0u - 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_003F5980; } }
    c.budget -= 1;
L_003F58A0:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F5918; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.r[3].d[0] = c.r[4].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 64u);  if (t) { goto L_003F58C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003F58D0; } }
L_003F58C8:
    set32(c.r[3], c.r[4].w[0] + 2u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_003F58D0:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.r[1].d[0] = 0ull | 63489ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_003F5900; } }
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F5900; } }
    c.r[3].d[0] = 0ull | 63488ull;
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_003F5980; } }
L_003F5900:
    c.r[3].d[0] = c.r[5].sd[0] < 2048ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 8u);  if (t) { goto L_003F5980; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_003F5980; } }
    c.budget -= 1;
L_003F5918:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.r[1].d[0] = c.r[3].sd[0] < -63ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F5938; } }
    set32(c.r[3], 0u - 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003F5940; } }
    c.budget -= 1;
L_003F5938:
    set32(c.r[3], c.r[3].w[0] - 2u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_003F5940:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.r[3].d[0] = c.r[4].sd[0] < 2048ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_003F5968; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 2048u);  if (t) { goto L_003F5968; } }
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_003F5980; } }
L_003F5968:
    c.r[1].d[0] = 0ull | 63489ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_003F5980; } }
    st32((c.r[17].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 2;
L_003F5980:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 9u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_003F5B70; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003F5B20; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003F59A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F5BB8; } }
L_003F59A8:
    c.f[1] = ld32((c.r[17].w[0] + 1860u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F5A48; } }
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.f[1] = ld32((c.r[17].w[0] + 1860u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F59D8u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F59D8u) [[unlikely]] return; }
L_003F59D8:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F59E4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F59E4u) [[unlikely]] return; }
L_003F59E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[2] = c.r[3].w[0];
    c.f[1] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F5A20; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F5A30; } }
    c.budget -= 1;
L_003F5A20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
L_003F5A30:
    set32(c.r[3], 0u - 1u);
    fpu_div(c, 20u, c.f[20], c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[20]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003F5BB8; } }
L_003F5A48:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F5AE0; } }
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5A70u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F5A70u) [[unlikely]] return; }
L_003F5A70:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5A7Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F5A7Cu) [[unlikely]] return; }
L_003F5A7C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[2] = c.r[3].w[0];
    c.f[1] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F5AB8; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F5AC8; } }
    c.budget -= 1;
L_003F5AB8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
L_003F5AC8:
    set32(c.r[3], 0u + 1u);
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.f[0] = c.f[20] ^ fp::kSign;
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003F5BB8; } }
L_003F5AE0:
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003F5AF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_003F5BB8; } }
    c.budget -= 1;
L_003F5AF8:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F5B10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[4].w[0]);  if (t) { goto L_003F5BB8; } }
L_003F5B10:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003F5BB8; } }
    c.budget -= 1;
L_003F5B20:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F5B40; } }
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_003F5BB8; } }
L_003F5B40:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[1].d[0] = 0ull | 64513ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_003F5BB8; } }
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F5BB8; } }
    c.r[3].d[0] = 0ull | 64512ull;
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_003F5BB8; } }
L_003F5B70:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F5B90; } }
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_003F5BB8; } }
L_003F5B90:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[3].d[0] = c.r[4].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_003F5BB8; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 1024u);  if (t) { goto L_003F5BB8; } }
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 3;
L_003F5BB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F5BE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 312u)));
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_003F5C60; } }
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x45D70000u);
    c.r[3].d[0] = c.r[3].d[0] | 10240ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F5C58; } }
    st32((c.r[17].w[0] + 1236u), 0u);
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 100u), 0u);
    st32((c.r[17].w[0] + 96u), 0u);
    st32((c.r[17].w[0] + 92u), 0u);
    st32((c.r[17].w[0] + 56u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 48u), 0u);
    st32((c.r[17].w[0] + 88u), 0u);
    st32((c.r[17].w[0] + 84u), 0u);
    st32((c.r[17].w[0] + 80u), 0u);
    st32((c.r[17].w[0] + 104u), 0u);
    c.budget -= 12;
L_003F5C58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F60C0; } }
L_003F5C60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5C70u);  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x003F5C70u) [[unlikely]] return; }
L_003F5C70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F5CF0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_003F5CA0; } }
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003F60C0; } }
    c.budget -= 1;
L_003F5CA0:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
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
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 52u), 0u);
    c.budget -= 20;
L_003F5CF0:
    c.f[3] = ld32((c.r[17].w[0] + 1856u));
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0] + 1864u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[21] = fp::sub(c.f[3], c.f[2]);
    c.f[20] = fp::sub(c.f[1], c.f[0]);
    c.f[12] = c.f[21];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5D14u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F5D14u) [[unlikely]] return; }
L_003F5D14:
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = 0ull | 63488ull;
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.r[5].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[5].sd[0] < 2049ll ? 1ull : 0ull;  if (t) { goto L_003F5D40; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F5DA8; } }
    c.budget -= 1;
L_003F5D40:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003F5D58; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003F5D68; } }
L_003F5D58:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_003F5D68; } }
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_003F5D68:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003F5D80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_003F5E88; } }
    c.budget -= 1;
L_003F5D80:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_003F5D98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_003F5E88; } }
L_003F5D98:
    set32(c.r[3], 0u - 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_003F5E88; } }
    c.budget -= 1;
L_003F5DA8:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F5E20; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.r[3].d[0] = c.r[4].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 64u);  if (t) { goto L_003F5DD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003F5DD8; } }
L_003F5DD0:
    set32(c.r[3], c.r[4].w[0] + 2u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_003F5DD8:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.r[1].d[0] = 0ull | 63489ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_003F5E08; } }
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F5E08; } }
    c.r[3].d[0] = 0ull | 63488ull;
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_003F5E88; } }
L_003F5E08:
    c.r[3].d[0] = c.r[5].sd[0] < 2048ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 8u);  if (t) { goto L_003F5E88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_003F5E88; } }
    c.budget -= 1;
L_003F5E20:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.r[1].d[0] = c.r[3].sd[0] < -63ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F5E40; } }
    set32(c.r[3], 0u - 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003F5E48; } }
    c.budget -= 1;
L_003F5E40:
    set32(c.r[3], c.r[3].w[0] - 2u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_003F5E48:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.r[3].d[0] = c.r[4].sd[0] < 2048ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_003F5E70; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 2048u);  if (t) { goto L_003F5E70; } }
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_003F5E88; } }
L_003F5E70:
    c.r[1].d[0] = 0ull | 63489ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_003F5E88; } }
    st32((c.r[17].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 2;
L_003F5E88:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 9u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_003F6078; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003F6028; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003F5EB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F60C0; } }
L_003F5EB0:
    c.f[1] = ld32((c.r[17].w[0] + 1860u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F5F50; } }
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.f[1] = ld32((c.r[17].w[0] + 1860u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5EE0u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F5EE0u) [[unlikely]] return; }
L_003F5EE0:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5EECu); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F5EECu) [[unlikely]] return; }
L_003F5EEC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[2] = c.r[3].w[0];
    c.f[1] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F5F28; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F5F38; } }
    c.budget -= 1;
L_003F5F28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
L_003F5F38:
    set32(c.r[3], 0u - 1u);
    fpu_div(c, 20u, c.f[20], c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[20]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003F60C0; } }
L_003F5F50:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F5FE8; } }
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5F78u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F5F78u) [[unlikely]] return; }
L_003F5F78:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5F84u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F5F84u) [[unlikely]] return; }
L_003F5F84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[2] = c.r[3].w[0];
    c.f[1] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F5FC0; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F5FD0; } }
    c.budget -= 1;
L_003F5FC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
L_003F5FD0:
    set32(c.r[3], 0u + 1u);
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.f[0] = c.f[20] ^ fp::kSign;
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003F60C0; } }
L_003F5FE8:
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003F6000; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_003F60C0; } }
    c.budget -= 1;
L_003F6000:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F6018; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[4].w[0]);  if (t) { goto L_003F60C0; } }
L_003F6018:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003F60C0; } }
    c.budget -= 1;
L_003F6028:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F6048; } }
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_003F60C0; } }
L_003F6048:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[1].d[0] = 0ull | 64513ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_003F60C0; } }
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F60C0; } }
    c.r[3].d[0] = 0ull | 64512ull;
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_003F60C0; } }
L_003F6078:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F6098; } }
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_003F60C0; } }
L_003F6098:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[3].d[0] = c.r[4].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_003F60C0; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 1024u);  if (t) { goto L_003F60C0; } }
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 3;
L_003F60C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F60E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 322u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[17].w[0] + 304u);  if (t) { goto L_003F6158; } }
    set32(c.r[3], 0u + 1800u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    st16((c.r[5].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 32767u);
    c.r[7].d[0] = 0ull | 32768ull;
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 12288u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6130u); set32(c.r[10], 0u + 10u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003F6130u) [[unlikely]] return; }
L_003F6130:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F6160; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6140u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F6140u) [[unlikely]] return; }
L_003F6140:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F614Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003F614Cu) [[unlikely]] return; }
L_003F614C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F6160; } }
    c.budget -= 1;
L_003F6158:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[5].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003F6160:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F6180:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 322u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[17].w[0] + 304u);  if (t) { goto L_003F61F8; } }
    set32(c.r[3], 0u + 1800u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    st16((c.r[5].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 16384u);
    c.r[7].d[0] = 0ull | 49152ull;
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F61D0u); set32(c.r[10], 0u + 10u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003F61D0u) [[unlikely]] return; }
L_003F61D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F6200; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F61E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F61E0u) [[unlikely]] return; }
L_003F61E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F61ECu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003F61ECu) [[unlikely]] return; }
L_003F61EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F6200; } }
    c.budget -= 1;
L_003F61F8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[5].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003F6200:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F6220:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 322u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[17].w[0] + 304u);  if (t) { goto L_003F6298; } }
    set32(c.r[3], 0u + 1800u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    st16((c.r[5].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull | 32768ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6270u); set32(c.r[10], 0u + 10u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003F6270u) [[unlikely]] return; }
L_003F6270:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F62A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6280u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F6280u) [[unlikely]] return; }
L_003F6280:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F628Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003F628Cu) [[unlikely]] return; }
L_003F628C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F62A0; } }
    c.budget -= 1;
L_003F6298:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[5].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003F62A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F62C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 322u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[17].w[0] + 304u);  if (t) { goto L_003F6338; } }
    set32(c.r[3], 0u + 1800u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    st16((c.r[5].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull | 32768ull;
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6310u); set32(c.r[10], 0u + 10u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003F6310u) [[unlikely]] return; }
L_003F6310:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F6340; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6320u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F6320u) [[unlikely]] return; }
L_003F6320:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F632Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003F632Cu) [[unlikely]] return; }
L_003F632C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F6340; } }
    c.budget -= 1;
L_003F6338:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[5].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003F6340:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F6360:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 11u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F6398; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F638Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x003F638Cu) [[unlikely]] return; }
L_003F638C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F63A8; } }
    c.budget -= 1;
L_003F6398:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F63A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x003F63A4u) [[unlikely]] return; }
L_003F63A4:
    c.budget -= 1;
L_003F63A8:
    set32(c.r[16], 0u + 52u);
    c.budget -= 2;
L_003F63B0:
    c.r[5].d[0] = c.r[16].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F63C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 343u, depth + 1u); else { c.pc = 0x00217490u; return; } if (c.pc != 0x003F63C0u) [[unlikely]] return; }
L_003F63C0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[16].sd[0] < 62ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F63B0u | kUnwind; return; } goto L_003F63B0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);  if (t) { goto L_003F63F0; } }
    set32(c.r[3], c.r[3].w[0] + 11264u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 636u), c.r[3].w[0]);  if (t) { goto L_003F6400; } }
    c.budget -= 1;
L_003F63F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], c.r[3].w[0] + 10496u);
    st32((c.r[17].w[0] + 636u), c.r[3].w[0]);
    c.budget -= 4;
L_003F6400:
    st8((c.r[17].w[0] + 315u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 316u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], 0u + 1800u);
    st8((c.r[17].w[0] + 309u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 3600u);
    st8((c.r[17].w[0] + 336u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 5400u);
    st16((c.r[17].w[0] + 320u), static_cast<std::uint16_t>(0u));
    set32(c.r[10], 0u + 7200u);
    st8((c.r[17].w[0] + 337u), static_cast<std::uint8_t>(0u));
    set32(c.r[9], 0u + 9000u);
    st16((c.r[17].w[0] + 322u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[8], 0u + 10800u);
    st8((c.r[17].w[0] + 338u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], 0u + 12600u);
    st16((c.r[17].w[0] + 324u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 2u);
    st8((c.r[17].w[0] + 339u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    st16((c.r[17].w[0] + 326u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[6].d[0] = c.r[3].d[0] | 39322ull;
    st8((c.r[17].w[0] + 340u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    st16((c.r[17].w[0] + 328u), static_cast<std::uint16_t>(c.r[10].w[0]));
    set32(c.r[4], 0u + 8u);
    st8((c.r[17].w[0] + 341u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 330u), static_cast<std::uint16_t>(c.r[9].w[0]));
    st8((c.r[17].w[0] + 342u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 332u), static_cast<std::uint16_t>(c.r[8].w[0]));
    st8((c.r[17].w[0] + 343u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 334u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[17].w[0] + 336u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 388u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 376u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 380u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 384u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 40;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_003F6880; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 14128u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x003F4000u < 16384u) { entry = entries_00BD[(t - 0x003F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003F64C0:
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003F68A8; } }
L_003F64E8:
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6520u); st32((c.r[17].w[0] + 104u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AB(c, 107u, depth + 1u); else { c.pc = 0x003AD450u; return; } if (c.pc != 0x003F6520u) [[unlikely]] return; }
L_003F6520:
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F652Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 111u, depth + 1u); else { c.pc = 0x003AD550u; return; } if (c.pc != 0x003F652Cu) [[unlikely]] return; }
L_003F652C:
    st32((c.r[16].w[0] + 56u), c.f[0]);
    set32(c.r[4], c.r[17].w[0] + 1856u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6544u); set32(c.r[6], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003F6544u) [[unlikely]] return; }
L_003F6544:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F68A8; } }
    c.budget -= 1;
L_003F6550:
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 10080u);
    set32(c.r[2], c.r[2].w[0] + 10144u);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 1856u);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6588u); set32(c.r[6], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0000(c, 239u, depth + 1u); else { c.pc = 0x00102678u; return; } if (c.pc != 0x003F6588u) [[unlikely]] return; }
L_003F6588:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003F68A8; } }
L_003F65A8:
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F65C4u); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_00AB(c, 107u, depth + 1u); else { c.pc = 0x003AD450u; return; } if (c.pc != 0x003F65C4u) [[unlikely]] return; }
L_003F65C4:
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F65D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 111u, depth + 1u); else { c.pc = 0x003AD550u; return; } if (c.pc != 0x003F65D0u) [[unlikely]] return; }
L_003F65D0:
    st32((c.r[16].w[0] + 56u), c.f[0]);
    set32(c.r[4], c.r[17].w[0] + 1856u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F65E8u); set32(c.r[6], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003F65E8u) [[unlikely]] return; }
L_003F65E8:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.f[12] = c.r[2].w[0];
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6620u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F6620u) [[unlikely]] return; }
L_003F6620:
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003F6638; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_003F6668; } }
L_003F6638:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F6658; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003F6668; } }
    c.budget -= 1;
L_003F6658:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], 0u - c.r[3].w[0]);
    st32((c.r[17].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 4;
L_003F6668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003F68A8; } }
L_003F6670:
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 10160u);
    st32((c.r[16].w[0] + 60u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], c.r[4].w[0] + 10256u);
    st32((c.r[16].w[0] + 64u), c.r[4].w[0]);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003F68A8; } }
L_003F66B0:
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F66CCu); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_00AB(c, 107u, depth + 1u); else { c.pc = 0x003AD450u; return; } if (c.pc != 0x003F66CCu) [[unlikely]] return; }
L_003F66CC:
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F66D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 111u, depth + 1u); else { c.pc = 0x003AD550u; return; } if (c.pc != 0x003F66D8u) [[unlikely]] return; }
L_003F66D8:
    st32((c.r[16].w[0] + 56u), c.f[0]);
    set32(c.r[4], c.r[17].w[0] + 1856u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F66F0u); set32(c.r[6], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003F66F0u) [[unlikely]] return; }
L_003F66F0:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.f[12] = c.r[2].w[0];
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6728u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F6728u) [[unlikely]] return; }
L_003F6728:
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003F6740; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_003F6770; } }
L_003F6740:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F6760; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003F6770; } }
    c.budget -= 1;
L_003F6760:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], 0u - c.r[3].w[0]);
    st32((c.r[17].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 4;
L_003F6770:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003F68A8; } }
L_003F6778:
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 10288u);
    st32((c.r[16].w[0] + 60u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[4], c.r[4].w[0] + 10384u);
    st32((c.r[16].w[0] + 64u), c.r[4].w[0]);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003F68A8; } }
L_003F67B8:
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F67E4u); st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x003F67E4u) [[unlikely]] return; }
L_003F67E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F68A8; } }
    c.budget -= 1;
L_003F67F0:
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003F68A8; } }
L_003F6818:
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 10416u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    st32((c.r[16].w[0] + 60u), c.r[4].w[0]);
    set32(c.r[6], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[4], c.r[4].w[0] + 10480u);
    st32((c.r[16].w[0] + 64u), c.r[4].w[0]);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 32u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 104u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 72u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 76u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[4].w[0]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003F68A8; } }
    c.budget -= 1;
L_003F6880:
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
L_003F68A8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 284u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F68C0; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F68C0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x003F68C0u) [[unlikely]] return; }
L_003F68C0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], c.r[3].w[0] + 12032u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[17].w[0] + 1236u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);  if (t) { goto L_003F6938; } }
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[17].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    st32((c.r[17].w[0] + 96u), 0u);
    st32((c.r[17].w[0] + 100u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[17].w[0] + 1856u), c.f[3]);
    st32((c.r[17].w[0] + 1860u), c.f[2]);
    st32((c.r[17].w[0] + 1864u), c.f[1]);
    st32((c.r[17].w[0] + 1868u), c.f[0]);
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 20;
L_003F6938:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F6950:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 310u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_003F6A40; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 21u)));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F6990; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 275u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003F6990:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F6C48; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003F69E0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003F6C48; } }
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F69D8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x003F69D8u) [[unlikely]] return; }
L_003F69D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F6C48; } }
L_003F69E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F69E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 176u, depth + 1u); else { c.pc = 0x003F6F00u; return; } if (c.pc != 0x003F69E8u) [[unlikely]] return; }
L_003F69E8:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6A38u); st32((c.r[17].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 73u, depth + 1u); else { c.pc = 0x00195590u; return; } if (c.pc != 0x003F6A38u) [[unlikely]] return; }
L_003F6A38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F6C48; } }
L_003F6A40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F6C28; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 21u)));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F6A68; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 275u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003F6A68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F6B38; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003F6AB8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_003F6B38; } }
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6AB0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x003F6AB0u) [[unlikely]] return; }
L_003F6AB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F6B38; } }
L_003F6AB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6AC0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 73u, depth + 1u); else { c.pc = 0x00195590u; return; } if (c.pc != 0x003F6AC0u) [[unlikely]] return; }
L_003F6AC0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);  if (t) { goto L_003F6B38; } }
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6AD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 117u, depth + 1u); else { c.pc = 0x003AD6C0u; return; } if (c.pc != 0x003F6AD8u) [[unlikely]] return; }
L_003F6AD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F6B38; } }
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_003F6B20; } }
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F6B38; } }
L_003F6B20:
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 80u));
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 6;
L_003F6B38:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003F6B60; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6B58u); set32(c.r[4], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003F6B58u) [[unlikely]] return; }
L_003F6B58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F6C48; } }
L_003F6B60:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6B90u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F6B90u) [[unlikely]] return; }
L_003F6B90:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6B9Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F6B9Cu) [[unlikely]] return; }
L_003F6B9C:
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F6BF0; } }
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F6C48; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003F6BE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003F6C48; } }
    c.budget -= 1;
L_003F6BE0:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), 0u);  if (t) { goto L_003F6C48; } }
    c.budget -= 1;
L_003F6BF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F6C48; } }
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F6C48; } }
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6C20u); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x003F6C20u) [[unlikely]] return; }
L_003F6C20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F6E78; } }
L_003F6C28:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F6C48; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[5], c.r[17].w[0] + 1856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6C48u); set32(c.r[6], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0000(c, 236u, depth + 1u); else { c.pc = 0x00102610u; return; } if (c.pc != 0x003F6C48u) [[unlikely]] return; }
L_003F6C48:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_003F6DE0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 513u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F6DE0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F6DE0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003F6DE0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003F6D48; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003F6CD0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F6CA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F6DE0; } }
    c.budget -= 1;
L_003F6CA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6CB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 113u, depth + 1u); else { c.pc = 0x003AD5D0u; return; } if (c.pc != 0x003F6CB8u) [[unlikely]] return; }
L_003F6CB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F6DE0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003F6DE0; } }
L_003F6CD0:
    c.f[0] = ld32((c.r[16].w[0] + 84u));
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F6CF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_003F6D08; } }
    c.budget -= 1;
L_003F6CF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 6;
L_003F6D08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6D18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 117u, depth + 1u); else { c.pc = 0x003AD6C0u; return; } if (c.pc != 0x003F6D18u) [[unlikely]] return; }
L_003F6D18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F6DE0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6D3Cu); st8((c.r[17].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0071(c, 43u, depth + 1u); else { c.pc = 0x002C4A90u; return; } if (c.pc != 0x003F6D3Cu) [[unlikely]] return; }
L_003F6D3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F6DE0; } }
    c.budget -= 1;
L_003F6D48:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F6DA0; } }
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F6D80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_003F6DE0; } }
    c.budget -= 1;
L_003F6D80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_003F6DE0; } }
    c.budget -= 1;
L_003F6DA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F6DC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_003F6DE0; } }
L_003F6DC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 6;
L_003F6DE0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003F6E78; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_003F6E78; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6E04u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 186u, depth + 1u); else { c.pc = 0x003F74A0u; return; } if (c.pc != 0x003F6E04u) [[unlikely]] return; }
L_003F6E04:
    set32(c.r[5], 0u + 5u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6E14u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 186u, depth + 1u); else { c.pc = 0x003F74A0u; return; } if (c.pc != 0x003F6E14u) [[unlikely]] return; }
L_003F6E14:
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6E24u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 190u, depth + 1u); else { c.pc = 0x003F7540u; return; } if (c.pc != 0x003F6E24u) [[unlikely]] return; }
L_003F6E24:
    set32(c.r[5], 0u + 6u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6E34u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 190u, depth + 1u); else { c.pc = 0x003F7540u; return; } if (c.pc != 0x003F6E34u) [[unlikely]] return; }
L_003F6E34:
    set32(c.r[5], 0u + 4u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6E44u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 194u, depth + 1u); else { c.pc = 0x003F75E0u; return; } if (c.pc != 0x003F6E44u) [[unlikely]] return; }
L_003F6E44:
    set32(c.r[5], 0u + 7u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6E54u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 194u, depth + 1u); else { c.pc = 0x003F75E0u; return; } if (c.pc != 0x003F6E54u) [[unlikely]] return; }
L_003F6E54:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6E64u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 198u, depth + 1u); else { c.pc = 0x003F7680u; return; } if (c.pc != 0x003F6E64u) [[unlikely]] return; }
L_003F6E64:
    set32(c.r[5], 0u + 3u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6E74u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 198u, depth + 1u); else { c.pc = 0x003F7680u; return; } if (c.pc != 0x003F6E74u) [[unlikely]] return; }
L_003F6E74:
    c.budget -= 1;
L_003F6E78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F6E90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 16u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6EACu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 153u, depth + 1u); else { c.pc = 0x0023A1C0u; return; } if (c.pc != 0x003F6EACu) [[unlikely]] return; }
L_003F6EAC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 11u);  if (t) { goto L_003F6EC8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003F6ED8; } }
    c.budget -= 1;
L_003F6EC8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003F6EE8; } }
L_003F6ED8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003F6EE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F6F00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[16], c.r[17].w[0] + 304u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6F2Cu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0025(c, 124u, depth + 1u); else { c.pc = 0x00196720u; return; } if (c.pc != 0x003F6F2Cu) [[unlikely]] return; }
L_003F6F2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F7040; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003F6FD0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003F6F60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F6FD0; } }
L_003F6F60:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[6].sd[0] = static_cast<std::int32_t>(0x00840000u);  if (t) { goto L_003F6FD0; } }
    st16((c.r[17].w[0] + 498u), static_cast<std::uint16_t>(0u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 27856u);
    c.budget -= 4;
L_003F6F80:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003F6FB0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F6FB0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F6FB0; } }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 2;
L_003F6FB0:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6F80u | kUnwind; return; } goto L_003F6F80; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003F6FD0; } }
    st32((c.r[17].w[0] + 592u), c.r[5].w[0]);
    c.budget -= 2;
L_003F6FD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6FD8u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003F6FD8u) [[unlikely]] return; }
L_003F6FD8:
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
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
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 52u), 0u);
    c.budget -= 26;
L_003F7040:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003F7070; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F7070; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F706Cu);  if (depth < kMaxDepth) unit_00AB(c, 98u, depth + 1u); else { c.pc = 0x003AD1B0u; return; } if (c.pc != 0x003F706Cu) [[unlikely]] return; }
L_003F706C:
    c.budget -= 1;
L_003F7070:
    c.f[3] = ld32((c.r[17].w[0] + 1856u));
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0] + 1864u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[21] = fp::sub(c.f[3], c.f[2]);
    c.f[20] = fp::sub(c.f[1], c.f[0]);
    c.f[12] = c.f[21];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7094u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003F7094u) [[unlikely]] return; }
L_003F7094:
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = 0ull | 63488ull;
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.r[5].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[5].sd[0] < 2049ll ? 1ull : 0ull;  if (t) { goto L_003F70C0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F7140; } }
    c.budget -= 1;
L_003F70C0:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_003F70E0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003F70F8; } }
    c.budget -= 1;
L_003F70E0:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_003F70F8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 4;
L_003F70F8:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003F7110; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_003F7230; } }
    c.budget -= 1;
L_003F7110:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F7130; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_003F7230; } }
    c.budget -= 1;
L_003F7130:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_003F7230; } }
L_003F7140:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F71C8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.r[3].d[0] = c.r[4].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 64u);  if (t) { goto L_003F7168; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003F7178; } }
L_003F7168:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 4;
L_003F7178:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.r[1].d[0] = 0ull | 63489ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_003F71A8; } }
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F71A8; } }
    c.r[3].d[0] = 0ull | 63488ull;
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_003F7230; } }
L_003F71A8:
    c.r[3].d[0] = c.r[5].sd[0] < 2048ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F7230; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_003F7230; } }
    c.budget -= 1;
L_003F71C8:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.r[1].d[0] = c.r[4].sd[0] < -63ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u - 64u);  if (t) { goto L_003F71E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003F71F0; } }
L_003F71E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 4;
L_003F71F0:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.r[3].d[0] = c.r[4].sd[0] < 2048ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_003F7218; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 2048u);  if (t) { goto L_003F7218; } }
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_003F7230; } }
L_003F7218:
    c.r[1].d[0] = 0ull | 63489ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F7230; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    st32((c.r[17].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 2;
L_003F7230:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 9u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003F7438; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003F73E8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003F7258; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F7480; } }
L_003F7258:
    c.f[1] = ld32((c.r[17].w[0] + 1860u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F7300; } }
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.f[1] = ld32((c.r[17].w[0] + 1860u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7288u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F7288u) [[unlikely]] return; }
L_003F7288:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7294u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F7294u) [[unlikely]] return; }
L_003F7294:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[2] = c.r[3].w[0];
    c.f[1] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F72D0; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F72E0; } }
    c.budget -= 1;
L_003F72D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
L_003F72E0:
    fpu_div(c, 20u, c.f[20], c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[20]);
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003F7480; } }
    c.budget -= 1;
L_003F7300:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F73A0; } }
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7328u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F7328u) [[unlikely]] return; }
L_003F7328:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7334u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F7334u) [[unlikely]] return; }
L_003F7334:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[2] = c.r[3].w[0];
    c.f[1] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F7370; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F7380; } }
    c.budget -= 1;
L_003F7370:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
L_003F7380:
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.f[0] = c.f[20] ^ fp::kSign;
    st32((c.r[17].w[0] + 52u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003F7480; } }
    c.budget -= 1;
L_003F73A0:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003F73B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_003F7480; } }
    c.budget -= 1;
L_003F73B8:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F73D8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003F7480; } }
    c.budget -= 1;
L_003F73D8:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_003F7480; } }
L_003F73E8:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F7408; } }
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_003F7480; } }
L_003F7408:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[1].d[0] = 0ull | 64513ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_003F7480; } }
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F7480; } }
    c.r[3].d[0] = 0ull | 64512ull;
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_003F7480; } }
L_003F7438:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1860u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F7458; } }
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_003F7480; } }
L_003F7458:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[3].d[0] = c.r[4].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_003F7480; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 1024u);  if (t) { goto L_003F7480; } }
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 3;
L_003F7480:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F74A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 322u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[17].w[0] + 304u);  if (t) { goto L_003F7518; } }
    set32(c.r[3], 0u + 1800u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    st16((c.r[5].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 32767u);
    c.r[7].d[0] = 0ull | 32768ull;
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 12288u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F74F0u); set32(c.r[10], 0u + 10u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003F74F0u) [[unlikely]] return; }
L_003F74F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F7520; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7500u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F7500u) [[unlikely]] return; }
L_003F7500:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F750Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003F750Cu) [[unlikely]] return; }
L_003F750C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F7520; } }
    c.budget -= 1;
L_003F7518:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[5].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003F7520:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F7540:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 322u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[17].w[0] + 304u);  if (t) { goto L_003F75B8; } }
    set32(c.r[3], 0u + 1800u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    st16((c.r[5].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 16384u);
    c.r[7].d[0] = 0ull | 49152ull;
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7590u); set32(c.r[10], 0u + 10u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003F7590u) [[unlikely]] return; }
L_003F7590:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F75C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F75A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F75A0u) [[unlikely]] return; }
L_003F75A0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F75ACu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003F75ACu) [[unlikely]] return; }
L_003F75AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F75C0; } }
    c.budget -= 1;
L_003F75B8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[5].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003F75C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F75E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 322u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[17].w[0] + 304u);  if (t) { goto L_003F7658; } }
    set32(c.r[3], 0u + 1800u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    st16((c.r[5].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull | 32768ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7630u); set32(c.r[10], 0u + 10u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003F7630u) [[unlikely]] return; }
L_003F7630:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F7660; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7640u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F7640u) [[unlikely]] return; }
L_003F7640:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F764Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003F764Cu) [[unlikely]] return; }
L_003F764C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F7660; } }
    c.budget -= 1;
L_003F7658:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[5].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003F7660:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F7680:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 322u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[17].w[0] + 304u);  if (t) { goto L_003F76F8; } }
    set32(c.r[3], 0u + 1800u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    st16((c.r[5].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull | 32768ull;
    c.r[8].d[0] = 0ull | 65535ull;
    set32(c.r[9], 0u + 8192u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F76D0u); set32(c.r[10], 0u + 10u);  if (depth < kMaxDepth) unit_0025(c, 119u, depth + 1u); else { c.pc = 0x00196520u; return; } if (c.pc != 0x003F76D0u) [[unlikely]] return; }
L_003F76D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F7700; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F76E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003F76E0u) [[unlikely]] return; }
L_003F76E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F76ECu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 158u, depth + 1u); else { c.pc = 0x0023A2A0u; return; } if (c.pc != 0x003F76ECu) [[unlikely]] return; }
L_003F76EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F7700; } }
    c.budget -= 1;
L_003F76F8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[5].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003F7700:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F7720:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7744u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x003F7744u) [[unlikely]] return; }
L_003F7744:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F7748:
    set32(c.r[2], c.r[16].w[0] + 80u);
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F775Cu); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (depth < kMaxDepth) unit_0045(c, 343u, depth + 1u); else { c.pc = 0x00217490u; return; } if (c.pc != 0x003F775Cu) [[unlikely]] return; }
L_003F775C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F7748u | kUnwind; return; } goto L_003F7748; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);  if (t) { goto L_003F7788; } }
    set32(c.r[3], c.r[3].w[0] + 15744u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 636u), c.r[3].w[0]);  if (t) { goto L_003F7798; } }
L_003F7788:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], c.r[3].w[0] + 12480u);
    st32((c.r[18].w[0] + 636u), c.r[3].w[0]);
    c.budget -= 4;
L_003F7798:
    st8((c.r[18].w[0] + 316u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 317u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u - 1u);
    st8((c.r[18].w[0] + 318u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 319u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[18].w[0] + 304u);  if (t) { goto L_003F7C90; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[5].w[0] << 3);  if (t) { goto L_003F77F8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8662u)));
    set32(c.r[3], c.r[3].w[0] + 12048u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 2));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[18].w[0] + 500u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 498u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 496u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 11;
L_003F77F8:
    st16((c.r[16].w[0] + 80u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 300u);
    set32(c.r[4], 0u + 600u);
    st16((c.r[16].w[0] + 82u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 900u);
    st16((c.r[16].w[0] + 84u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 86u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(14ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006C0000u);  if (t) { goto L_003F7BB8; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 14192u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003F4000u < 16384u) { entry = entries_00BD[(t - 0x003F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003F7840:
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 90u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 95u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 91u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 117u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 116u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 118u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 119u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003F7BB8; } }
L_003F7868:
    set32(c.r[3], 0u + 2u);
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 90u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 95u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 91u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 117u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 116u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 118u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 119u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003F7BB8; } }
L_003F7890:
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[18].w[0] + 1856u);
    st8((c.r[16].w[0] + 90u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[18].w[0] + 32u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F78B0u); set32(c.r[6], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003F78B0u) [[unlikely]] return; }
L_003F78B0:
    st8((c.r[16].w[0] + 95u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 91u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[16].w[0] + 117u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 31u);
    st8((c.r[16].w[0] + 116u), static_cast<std::uint8_t>(0u));
    c.r[6].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 118u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 119u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F78E0u); st8((c.r[18].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x003F78E0u) [[unlikely]] return; }
L_003F78E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F7BB8; } }
L_003F78E8:
    set32(c.r[2], 0u + 2u);
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[18].w[0] + 1856u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    st8((c.r[16].w[0] + 90u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F790Cu); set32(c.r[6], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003F790Cu) [[unlikely]] return; }
L_003F790C:
    st8((c.r[16].w[0] + 95u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 91u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[16].w[0] + 117u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 31u);
    st8((c.r[16].w[0] + 116u), static_cast<std::uint8_t>(0u));
    c.r[6].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 118u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 119u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F793Cu); st8((c.r[18].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x003F793Cu) [[unlikely]] return; }
L_003F793C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F7BB8; } }
    c.budget -= 1;
L_003F7948:
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 12256u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[5], 0u + 31u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00670000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 12352u);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 93u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 90u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 95u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 91u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 117u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 116u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 118u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 119u), static_cast<std::uint8_t>(0u));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F799Cu); st8((c.r[18].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x003F799Cu) [[unlikely]] return; }
L_003F799C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F7BB8; } }
    c.budget -= 1;
L_003F79A8:
    set32(c.r[2], 0u + 2u);
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 95u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    st8((c.r[16].w[0] + 90u), static_cast<std::uint8_t>(0u));
    c.f[12] = c.r[2].w[0];
    st8((c.r[16].w[0] + 91u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[16].w[0] + 92u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F79D8u); st8((c.r[16].w[0] + 116u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_00AB(c, 113u, depth + 1u); else { c.pc = 0x003AD5D0u; return; } if (c.pc != 0x003F79D8u) [[unlikely]] return; }
L_003F79D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F79F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_003F79F8; } }
L_003F79F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[18].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 2;
L_003F79F8:
    st32((c.r[18].w[0] + 52u), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7A08u); st32((c.r[16].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_00AB(c, 107u, depth + 1u); else { c.pc = 0x003AD450u; return; } if (c.pc != 0x003F7A08u) [[unlikely]] return; }
L_003F7A08:
    st32((c.r[16].w[0] + 108u), c.f[0]);
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 119u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 117u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[16].w[0] + 118u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 31u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[6].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0] + 31u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7A3Cu); st8((c.r[18].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x003F7A3Cu) [[unlikely]] return; }
L_003F7A3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F7BB8; } }
    c.budget -= 1;
L_003F7A48:
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 90u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 95u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 91u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 117u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 116u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 118u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 119u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003F7BB8; } }
    c.budget -= 1;
L_003F7A70:
    set32(c.r[2], 0u + 2u);
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 95u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    st8((c.r[16].w[0] + 90u), static_cast<std::uint8_t>(0u));
    c.f[12] = c.r[2].w[0];
    st8((c.r[16].w[0] + 91u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[16].w[0] + 92u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 116u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 117u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 118u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 119u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7AB4u); st8((c.r[2].w[0] + 31u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_00AB(c, 113u, depth + 1u); else { c.pc = 0x003AD5D0u; return; } if (c.pc != 0x003F7AB4u) [[unlikely]] return; }
L_003F7AB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F7AD0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_003F7AD8; } }
    c.budget -= 1;
L_003F7AD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[18].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 2;
L_003F7AD8:
    st32((c.r[18].w[0] + 52u), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7AE8u); st32((c.r[16].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_00AB(c, 111u, depth + 1u); else { c.pc = 0x003AD550u; return; } if (c.pc != 0x003F7AE8u) [[unlikely]] return; }
L_003F7AE8:
    st32((c.r[16].w[0] + 112u), c.f[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 31u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7B04u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x003F7B04u) [[unlikely]] return; }
L_003F7B04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F7BB8; } }
    c.budget -= 1;
L_003F7B10:
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[16].w[0] + 95u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 31u);
    st8((c.r[16].w[0] + 90u), static_cast<std::uint8_t>(0u));
    c.r[6].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 91u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 92u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 117u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 116u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 118u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 119u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 31u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7B54u); st8((c.r[18].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x003F7B54u) [[unlikely]] return; }
L_003F7B54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F7BB8; } }
    c.budget -= 1;
L_003F7B60:
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + 12384u);
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], c.r[3].w[0] + 12448u);
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 93u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 4800u);
    st8((c.r[16].w[0] + 90u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 95u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 91u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 117u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 116u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 118u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 140u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 104u), 0u);
    st8((c.r[16].w[0] + 119u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[18].w[0] + 104u), 0u);
    st32((c.r[18].w[0] + 52u), 0u);
    c.budget -= 22;
L_003F7BB8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], c.r[3].w[0] + 19008u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[18].w[0] + 1236u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 95u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);  if (t) { goto L_003F7C30; } }
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[18].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 92u), 0u);
    st32((c.r[18].w[0] + 96u), 0u);
    st32((c.r[18].w[0] + 100u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 93u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[18].w[0] + 1856u), c.f[3]);
    st32((c.r[18].w[0] + 1860u), c.f[2]);
    st32((c.r[18].w[0] + 1864u), c.f[1]);
    st32((c.r[18].w[0] + 1868u), c.f[0]);
    st8((c.r[16].w[0] + 94u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 92u), static_cast<std::uint8_t>(0u));
    c.budget -= 20;
L_003F7C30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003F7D40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7C44u); set32(c.r[5], 0u + 52u);  if (depth < kMaxDepth) unit_003D(c, 283u, depth + 1u); else { c.pc = 0x001F6BC0u; return; } if (c.pc != 0x003F7C44u) [[unlikely]] return; }
L_003F7C44:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[17], c.r[16].w[0] + 4u);
    set32(c.r[16], 0u + 1u);
    c.budget -= 3;
L_003F7C50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    set32(c.r[2], c.r[16].w[0] + 52u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7C74u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_003D(c, 283u, depth + 1u); else { c.pc = 0x001F6BC0u; return; } if (c.pc != 0x003F7C74u) [[unlikely]] return; }
L_003F7C74:
    set32(c.r[16], c.r[16].w[0] + 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F7C50u | kUnwind; return; } goto L_003F7C50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F7D40; } }
L_003F7C90:
    set32(c.r[3], 0u + 1000u);
    st16((c.r[18].w[0] + 496u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 498u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 500u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 80u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 82u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 84u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 86u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_003F7CE8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + 19008u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003F7D10; } }
    c.budget -= 1;
L_003F7CE8:
    set32(c.r[3], 0u + 4u);
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00670000u);
    set32(c.r[3], c.r[3].w[0] + 19008u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[18].w[0] + 1236u), c.r[3].w[0]);
    c.budget -= 10;
L_003F7D10:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 240u);  if (t) { goto L_003F7D28; } }
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 21u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003F7D28:
    set32(c.r[3], 0u - 9284u);
    st32((c.r[18].w[0] + 5124u), c.r[3].w[0]);
    set32(c.r[3], 0u + 20206u);
    st32((c.r[18].w[0] + 5136u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 104u), 0u);
    st32((c.r[18].w[0] + 52u), 0u);
    c.budget -= 6;
L_003F7D40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F7D60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[18].w[0] + 304u);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_00BE(c, 13u, depth); } }
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003F7DE8; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 140u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003F7DE8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] - 1u);  if (t) { goto L_003F7DE0; } }
    st16((c.r[17].w[0] + 140u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 140u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F7DE0; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], 0u + 31u);
    st8((c.r[18].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7DDCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x003F7DDCu) [[unlikely]] return; }
L_003F7DDC:
    c.budget -= 1;
L_003F7DE0:
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_003F7DE8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003F7FD0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 95u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F7E90; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 21u)));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F7E18; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 275u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003F7E18:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003F7FD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7E28u);  if (depth < kMaxDepth) unit_00BE(c, 32u, depth + 1u); else { c.pc = 0x003F85C0u; return; } if (c.pc != 0x003F7E28u) [[unlikely]] return; }
L_003F7E28:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 119u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F7E80; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 80u));
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 84u));
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 88u));
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 19;
L_003F7E80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7E88u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 73u, depth + 1u); else { c.pc = 0x00195590u; return; } if (c.pc != 0x003F7E88u) [[unlikely]] return; }
L_003F7E88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F7FD0; } }
L_003F7E90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F7FB0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 21u)));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F7EB8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 275u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003F7EB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003F7EC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7EC8u);  if (depth < kMaxDepth) unit_0025(c, 73u, depth + 1u); else { c.pc = 0x00195590u; return; } if (c.pc != 0x003F7EC8u) [[unlikely]] return; }
L_003F7EC8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 117u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003F7EF0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7EE8u); set32(c.r[4], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003F7EE8u) [[unlikely]] return; }
L_003F7EE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F7FD0; } }
L_003F7EF0:
    c.f[5] = ld32((c.r[18].w[0] + 32u));
    c.f[4] = ld32((c.r[18].w[0] + 128u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0] + 136u));
    c.f[3] = ld32((c.r[18].w[0] + 36u));
    c.f[2] = ld32((c.r[18].w[0] + 132u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7F20u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F7F20u) [[unlikely]] return; }
L_003F7F20:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7F2Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003F7F2Cu) [[unlikely]] return; }
L_003F7F2C:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 118u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F7F80; } }
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = ld32((c.r[17].w[0] + 108u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F7FD0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 117u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003F7F70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 117u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003F7FD0; } }
    c.budget -= 1;
L_003F7F70:
    st8((c.r[17].w[0] + 116u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 104u), 0u);  if (t) { goto L_003F7FD0; } }
    c.budget -= 1;
L_003F7F80:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = ld32((c.r[17].w[0] + 112u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F7FD0; } }
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7FA4u); st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x003F7FA4u) [[unlikely]] return; }
L_003F7FA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00BE(c, 25u, depth); } }
    c.budget -= 1;
L_003F7FB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 90u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F7FD0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[4], c.r[18].w[0] + 32u);
    set32(c.r[5], c.r[18].w[0] + 1856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7FD0u); set32(c.r[6], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x003F7FD0u) [[unlikely]] return; }
L_003F7FD0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { [[clang::musttail]] return unit_00BE(c, 9u, depth); } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { [[clang::musttail]] return unit_00BE(c, 9u, depth); } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00BE(c, 3u, depth); } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { [[clang::musttail]] return unit_00BE(c, 2u, depth); } }
    [[clang::musttail]] return unit_00BE(c, 1u, depth);
}

}
