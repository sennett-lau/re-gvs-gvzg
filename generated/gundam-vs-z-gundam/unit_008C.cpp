#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_008C[4096] = {
    1, 0, 2, 0, 3, 4, 0, 5, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 11, 0,
    12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0,
    0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0,
    27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0,
    0, 0, 0, 0, 38, 0, 39, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0,
    0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0,
    0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 64, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0,
    0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0,
    0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106,
    0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118,
    0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0,
    0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153,
    0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0,
    0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0,
    166, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0,
    0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0,
    197, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 204,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0,
    0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0,
    211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0,
    0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0,
    0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0,
    0, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0,
    0, 0, 0, 0, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256,
    0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_008C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00330000;
    case 2u: goto L_00330008;
    case 3u: goto L_00330010;
    case 4u: goto L_00330014;
    case 5u: goto L_0033001C;
    case 6u: goto L_00330020;
    case 7u: goto L_00330030;
    case 8u: goto L_00330048;
    case 9u: goto L_0033005C;
    case 10u: goto L_00330070;
    case 11u: goto L_00330078;
    case 12u: goto L_00330080;
    case 13u: goto L_00330090;
    case 14u: goto L_00330108;
    case 15u: goto L_0033018C;
    case 16u: goto L_003301A0;
    case 17u: goto L_003301DC;
    case 18u: goto L_00330230;
    case 19u: goto L_0033023C;
    case 20u: goto L_00330288;
    case 21u: goto L_003302A0;
    case 22u: goto L_003302D0;
    case 23u: goto L_00330324;
    case 24u: goto L_00330374;
    case 25u: goto L_00330390;
    case 26u: goto L_003303E8;
    case 27u: goto L_00330400;
    case 28u: goto L_003304A0;
    case 29u: goto L_00330508;
    case 30u: goto L_00330538;
    case 31u: goto L_00330568;
    case 32u: goto L_00330570;
    case 33u: goto L_00330598;
    case 34u: goto L_003305D0;
    case 35u: goto L_00330630;
    case 36u: goto L_00330730;
    case 37u: goto L_00330870;
    case 38u: goto L_00330890;
    case 39u: goto L_00330898;
    case 40u: goto L_003308A0;
    case 41u: goto L_003308B8;
    case 42u: goto L_003308F0;
    case 43u: goto L_00330908;
    case 44u: goto L_00330914;
    case 45u: goto L_00330958;
    case 46u: goto L_00330960;
    case 47u: goto L_00330990;
    case 48u: goto L_003309DC;
    case 49u: goto L_00330B80;
    case 50u: goto L_00330BE0;
    case 51u: goto L_00330C9C;
    case 52u: goto L_00330CF8;
    case 53u: goto L_00330D7C;
    case 54u: goto L_00330DE0;
    case 55u: goto L_00330F78;
    case 56u: goto L_00330F84;
    case 57u: goto L_00331000;
    case 58u: goto L_003310E8;
    case 59u: goto L_003311A0;
    case 60u: goto L_003311E4;
    case 61u: goto L_00331250;
    case 62u: goto L_003312D8;
    case 63u: goto L_003312F0;
    case 64u: goto L_003312F8;
    case 65u: goto L_00331330;
    case 66u: goto L_0033139C;
    case 67u: goto L_003313C0;
    case 68u: goto L_00331488;
    case 69u: goto L_00331494;
    case 70u: goto L_003314E8;
    case 71u: goto L_00331538;
    case 72u: goto L_00331544;
    case 73u: goto L_00331624;
    case 74u: goto L_003316A0;
    case 75u: goto L_0033174C;
    case 76u: goto L_003317B0;
    case 77u: goto L_00331868;
    case 78u: goto L_00331888;
    case 79u: goto L_003318D4;
    case 80u: goto L_003318E8;
    case 81u: goto L_00331938;
    case 82u: goto L_00331970;
    case 83u: goto L_003319BC;
    case 84u: goto L_003319C4;
    case 85u: goto L_003319DC;
    case 86u: goto L_003319E4;
    case 87u: goto L_00331A00;
    case 88u: goto L_00331A18;
    case 89u: goto L_00331A48;
    case 90u: goto L_00331A58;
    case 91u: goto L_00331A90;
    case 92u: goto L_00331AD0;
    case 93u: goto L_00331AF0;
    case 94u: goto L_00331B28;
    case 95u: goto L_00331B40;
    case 96u: goto L_00331B70;
    case 97u: goto L_00331B90;
    case 98u: goto L_00331C08;
    case 99u: goto L_00331C5C;
    case 100u: goto L_00331C98;
    case 101u: goto L_00331CD0;
    case 102u: goto L_00331CE0;
    case 103u: goto L_00331D28;
    case 104u: goto L_00331D78;
    case 105u: goto L_00331DE0;
    case 106u: goto L_00331DFC;
    case 107u: goto L_00331E10;
    case 108u: goto L_00331E24;
    case 109u: goto L_00331E38;
    case 110u: goto L_00331E4C;
    case 111u: goto L_00331E70;
    case 112u: goto L_00331E90;
    case 113u: goto L_00331EAC;
    case 114u: goto L_00331EC0;
    case 115u: goto L_00331EEC;
    case 116u: goto L_00331F2C;
    case 117u: goto L_00331F80;
    case 118u: goto L_0033207C;
    case 119u: goto L_00332084;
    case 120u: goto L_003320A0;
    case 121u: goto L_003320B0;
    case 122u: goto L_003320C0;
    case 123u: goto L_003320D0;
    case 124u: goto L_00332100;
    case 125u: goto L_00332130;
    case 126u: goto L_00332170;
    case 127u: goto L_00332280;
    case 128u: goto L_00332310;
    case 129u: goto L_00332328;
    case 130u: goto L_00332340;
    case 131u: goto L_00332390;
    case 132u: goto L_003323BC;
    case 133u: goto L_003323C4;
    case 134u: goto L_003323D8;
    case 135u: goto L_003323F0;
    case 136u: goto L_00332540;
    case 137u: goto L_00332588;
    case 138u: goto L_003325DC;
    case 139u: goto L_00332630;
    case 140u: goto L_00332648;
    case 141u: goto L_00332668;
    case 142u: goto L_0033269C;
    case 143u: goto L_003326D0;
    case 144u: goto L_00332744;
    case 145u: goto L_0033275C;
    case 146u: goto L_00332774;
    case 147u: goto L_0033278C;
    case 148u: goto L_003327A0;
    case 149u: goto L_00332814;
    case 150u: goto L_0033282C;
    case 151u: goto L_00332870;
    case 152u: goto L_003328E4;
    case 153u: goto L_003328FC;
    case 154u: goto L_0033291C;
    case 155u: goto L_00332934;
    case 156u: goto L_00332950;
    case 157u: goto L_003329C4;
    case 158u: goto L_003329DC;
    case 159u: goto L_003329F4;
    case 160u: goto L_00332A0C;
    case 161u: goto L_00332A20;
    case 162u: goto L_00332AA0;
    case 163u: goto L_00332AB8;
    case 164u: goto L_00332AE0;
    case 165u: goto L_00332AF0;
    case 166u: goto L_00332B00;
    case 167u: goto L_00332B10;
    case 168u: goto L_00332B20;
    case 169u: goto L_00332B60;
    case 170u: goto L_00332B8C;
    case 171u: goto L_00332BB0;
    case 172u: goto L_00332BCC;
    case 173u: goto L_00332BF0;
    case 174u: goto L_00332C10;
    case 175u: goto L_00332C2C;
    case 176u: goto L_00332C58;
    case 177u: goto L_00332C68;
    case 178u: goto L_00332C94;
    case 179u: goto L_00332D0C;
    case 180u: goto L_00332D68;
    case 181u: goto L_00332DCC;
    case 182u: goto L_00332DE0;
    case 183u: goto L_00332E30;
    case 184u: goto L_00332F40;
    case 185u: goto L_00332FB0;
    case 186u: goto L_003330B0;
    case 187u: goto L_00333250;
    case 188u: goto L_0033336C;
    case 189u: goto L_003333D0;
    case 190u: goto L_003333E0;
    case 191u: goto L_00333454;
    case 192u: goto L_00333480;
    case 193u: goto L_00333570;
    case 194u: goto L_00333578;
    case 195u: goto L_003335C0;
    case 196u: goto L_003335F4;
    case 197u: goto L_00333600;
    case 198u: goto L_00333610;
    case 199u: goto L_0033361C;
    case 200u: goto L_00333640;
    case 201u: goto L_003336A0;
    case 202u: goto L_003336DC;
    case 203u: goto L_003336EC;
    case 204u: goto L_003336FC;
    case 205u: goto L_003337F0;
    case 206u: goto L_00333810;
    case 207u: goto L_00333870;
    case 208u: goto L_003338D0;
    case 209u: goto L_003338E0;
    case 210u: goto L_003338F0;
    case 211u: goto L_00333900;
    case 212u: goto L_00333960;
    case 213u: goto L_003339C0;
    case 214u: goto L_003339E0;
    case 215u: goto L_00333A40;
    case 216u: goto L_00333A58;
    case 217u: goto L_00333A60;
    case 218u: goto L_00333AB0;
    case 219u: goto L_00333AE4;
    case 220u: goto L_00333B10;
    case 221u: goto L_00333B28;
    case 222u: goto L_00333B30;
    case 223u: goto L_00333B60;
    case 224u: goto L_00333B94;
    case 225u: goto L_00333BA8;
    case 226u: goto L_00333BB8;
    case 227u: goto L_00333C10;
    case 228u: goto L_00333C1C;
    case 229u: goto L_00333C2C;
    case 230u: goto L_00333C80;
    case 231u: goto L_00333CA0;
    case 232u: goto L_00333CC4;
    case 233u: goto L_00333CCC;
    case 234u: goto L_00333CE0;
    case 235u: goto L_00333D04;
    case 236u: goto L_00333D20;
    case 237u: goto L_00333D44;
    case 238u: goto L_00333D4C;
    case 239u: goto L_00333D60;
    case 240u: goto L_00333D84;
    case 241u: goto L_00333DA0;
    case 242u: goto L_00333DBC;
    case 243u: goto L_00333DDC;
    case 244u: goto L_00333DF0;
    case 245u: goto L_00333E14;
    case 246u: goto L_00333E1C;
    case 247u: goto L_00333E30;
    case 248u: goto L_00333E50;
    case 249u: goto L_00333E70;
    case 250u: goto L_00333E94;
    case 251u: goto L_00333E9C;
    case 252u: goto L_00333EBC;
    case 253u: goto L_00333EE0;
    case 254u: goto L_00333F54;
    case 255u: goto L_00333F5C;
    case 256u: goto L_00333F7C;
    case 257u: goto L_00333FA0;
    default: bad_entry(c, 0x00330000u); return;
    }
L_00330000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00330028; } }
L_00330008:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00330028; } }
L_00330010:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00330014:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00330028; } }
L_0033001C:
    c.budget -= 1;
L_00330020:
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_00330028:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00330960; } }
L_00330030:
    set32(c.r[2], ld32((c.r[28].w[0] - 22812u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330048u); set32(c.r[8], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0084(c, 110u, depth + 1u); else { c.pc = 0x003105D0u; return; } if (c.pc != 0x00330048u) [[unlikely]] return; }
L_00330048:
    set32(c.r[8], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[3], c.r[3].w[0] - 208u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 5;
L_0033005C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] - 176u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 232u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 5;
L_00330070:
    st32((c.r[1].w[0] - 208u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 240u);
    c.budget -= 2;
L_00330078:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 2;
L_00330080:
    st32((c.r[1].w[0] - 204u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
L_00330090:
    st32((c.r[1].w[0] - 200u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 12096u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st32((c.r[1].w[0] - 188u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 11568u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st32((c.r[1].w[0] - 184u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 11312u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22840u)));
    st32((c.r[1].w[0] - 180u), c.r[3].w[0]);
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[6].d[0] = ld8((c.r[28].w[0] - 22856u));
    st16((c.r[1].w[0] - 232u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 144u)));
    st16((c.r[1].w[0] - 172u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 148u)));
    st16((c.r[1].w[0] - 230u), static_cast<std::uint16_t>(0u));
    c.r[7].d[0] = c.r[7].d[0] ^ 2ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 22844u));
    st16((c.r[1].w[0] - 228u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st16((c.r[1].w[0] - 226u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 30;
L_00330108:
    st16((c.r[1].w[0] - 224u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 12080u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] - 169u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] - 170u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] - 196u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] - 192u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; st16((c.r[1].w[0] - 240u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00330160; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st16((c.r[1].w[0] - 238u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 3024u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 236u), c.r[2].w[0]);  if (t) { goto L_00330178; } }
L_00330160:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st16((c.r[1].w[0] - 238u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[2], c.r[2].w[0] + 12080u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] - 236u), c.r[2].w[0]);
    c.budget -= 6;
L_00330178:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - 160u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033018Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0033018Cu) [[unlikely]] return; }
L_0033018C:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 22860u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] - 160u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00330960; } }
L_003301A0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003301C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00330960; } }
    c.budget -= 1;
L_003301C0:
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 22812u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11308u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003301DCu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0083(c, 415u, depth + 1u); else { c.pc = 0x0030FD90u; return; } if (c.pc != 0x003301DCu) [[unlikely]] return; }
L_003301DC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00330218; } }
    set32(c.r[2], 0u - 82u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00330960; } }
    c.budget -= 1;
L_00330218:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00330960; } }
    c.budget -= 1;
L_00330230:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033023Cu); st8((c.r[1].w[0] + 11308u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0084(c, 102u, depth + 1u); else { c.pc = 0x003104F0u; return; } if (c.pc != 0x0033023Cu) [[unlikely]] return; }
L_0033023C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00330278; } }
    set32(c.r[2], 0u - 82u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00330960; } }
    c.budget -= 1;
L_00330278:
    set32(c.r[2], 0u + 10u);
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330288u); set32(c.r[4], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_0084(c, 105u, depth + 1u); else { c.pc = 0x00310520u; return; } if (c.pc != 0x00330288u) [[unlikely]] return; }
L_00330288:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00330960; } }
L_003302A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11308u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[28].w[0] - 22812u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003302C8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_00330318; } }
    c.budget -= 1;
L_003302C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003302D0u);  if (depth < kMaxDepth) unit_0084(c, 115u, depth + 1u); else { c.pc = 0x00310700u; return; } if (c.pc != 0x003302D0u) [[unlikely]] return; }
L_003302D0:
    set32(c.r[3], ld32((c.r[28].w[0] - 22812u)));
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22812u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00330318; } }
    set32(c.r[2], 0u - 81u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00330960; } }
L_00330318:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330324u); set32(c.r[4], c.r[4].w[0] - 176u);  if (depth < kMaxDepth) unit_0084(c, 117u, depth + 1u); else { c.pc = 0x00310740u; return; } if (c.pc != 0x00330324u) [[unlikely]] return; }
L_00330324:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00330360; } }
    set32(c.r[2], 0u - 82u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00330960; } }
    c.budget -= 1;
L_00330360:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 10128u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330374u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00330374u) [[unlikely]] return; }
L_00330374:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[3], 0u + 119u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 2u);
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00330960; } }
L_00330390:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < 61ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u - 86u);  if (t) { goto L_003303D0; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00330960; } }
    c.budget -= 1;
L_003303D0:
    set32(c.r[2], c.r[8].w[0] + 1u);
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 59u);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00330960; } }
L_003303E8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < 61ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u - 86u);  if (t) { goto L_00330428; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00330400:
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00330960; } }
    c.budget -= 1;
L_00330428:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    set32(c.r[2], 0u + 60u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00330470; } }
    c.r[3].d[0] = ld8((c.r[1].w[0] + 11310u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 11308u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00330464; } }
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_00330464:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11308u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00330470:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00330490; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00330960; } }
    c.budget -= 1;
L_00330490:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 10128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003304A0u); st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0084(c, 128u, depth + 1u); else { c.pc = 0x00310A60u; return; } if (c.pc != 0x003304A0u) [[unlikely]] return; }
L_003304A0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003304D8; } }
    set32(c.r[2], 0u - 82u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00330960; } }
L_003304D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 10140u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00330838; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 3008u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00330000u < 16384u) { entry = entries_008C[(t - 0x00330000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00330508:
    set32(c.r[2], 0u + 12u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11310u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 11308u));
    c.r[1].d[0] = c.r[2].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 11u);  if (t) { goto L_00330860; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 11308u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00330860; } }
    c.budget -= 1;
L_00330538:
    set32(c.r[2], 0u + 60u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11310u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 11308u));
    c.r[1].d[0] = c.r[2].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 12u);  if (t) { goto L_00330860; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 11308u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00330860; } }
    c.budget -= 1;
L_00330568:
    set32(c.r[2], 0u + 70u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 2;
L_00330570:
    st8((c.r[1].w[0] + 11310u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 11308u));
    c.r[1].d[0] = c.r[2].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 60u);  if (t) { goto L_00330860; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 11308u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00330860; } }
    c.budget -= 1;
L_00330598:
    set32(c.r[2], 0u + 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11310u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 11308u));
    c.r[1].d[0] = c.r[2].sd[0] < 70ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 70u);  if (t) { goto L_003305C0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11308u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003305C0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00330860; } }
L_003305D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 10144u)));
    set32(c.r[2], 0u + 13u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_003307D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003307A8; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_00330778; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00330728; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 12u);  if (t) { goto L_003306D0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00330678; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00330628; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00330808; } }
    c.budget -= 1;
L_00330628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330630u);  if (depth < kMaxDepth) unit_008B(c, 290u, depth + 1u); else { c.pc = 0x0032FD30u; return; } if (c.pc != 0x00330630u) [[unlikely]] return; }
L_00330630:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00330648; } }
    set32(c.r[2], 0u + 99u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00330830; } }
    c.budget -= 1;
L_00330648:
    set32(c.r[2], 0u - 3u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00330830; } }
    c.budget -= 1;
L_00330678:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[21].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u - 2u);  if (t) { goto L_003306C0; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00330830; } }
    c.budget -= 1;
L_003306C0:
    set32(c.r[2], 0u + 99u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00330830; } }
    c.budget -= 1;
L_003306D0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u - 82u);  if (t) { goto L_00330718; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00330830; } }
    c.budget -= 1;
L_00330718:
    set32(c.r[2], 0u + 99u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00330830; } }
    c.budget -= 1;
L_00330728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330730u);  if (depth < kMaxDepth) unit_008B(c, 293u, depth + 1u); else { c.pc = 0x0032FDB0u; return; } if (c.pc != 0x00330730u) [[unlikely]] return; }
L_00330730:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00330748; } }
    set32(c.r[2], 0u + 99u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00330830; } }
    c.budget -= 1;
L_00330748:
    set32(c.r[2], 0u - 82u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00330830; } }
    c.budget -= 1;
L_00330778:
    set32(c.r[2], 0u - 5u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00330830; } }
    c.budget -= 1;
L_003307A8:
    set32(c.r[2], 0u - 85u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00330830; } }
    c.budget -= 1;
L_003307D8:
    set32(c.r[2], 0u - 2u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00330830; } }
    c.budget -= 1;
L_00330808:
    set32(c.r[2], 0u - 82u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[21].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 10;
L_00330830:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00330960; } }
L_00330838:
    set32(c.r[2], 0u - 82u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[21].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 10;
L_00330860:
    set32(c.r[2], 0u + 59u);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00330960; } }
L_00330870:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11310u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11308u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330890u); st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008B(c, 292u, depth + 1u); else { c.pc = 0x0032FD90u; return; } if (c.pc != 0x00330890u) [[unlikely]] return; }
L_00330890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330898u);  if (depth < kMaxDepth) unit_008B(c, 277u, depth + 1u); else { c.pc = 0x0032FAD0u; return; } if (c.pc != 0x00330898u) [[unlikely]] return; }
L_00330898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003308A0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 126u, depth + 1u); else { c.pc = 0x00310A10u; return; } if (c.pc != 0x003308A0u) [[unlikely]] return; }
L_003308A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[1].w[0] + 10128u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 22864u), c.r[3].w[0]);  if (t) { goto L_00330960; } }
    c.budget -= 1;
L_003308B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 11309u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_003308E8; } }
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 2u);
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00330960; } }
L_003308E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00330960; } }
L_003308F0:
    set32(c.r[2], c.r[8].w[0] + 1u);
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00330960; } }
L_00330908:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330914u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 76u, depth + 1u); else { c.pc = 0x003317B0u; return; } if (c.pc != 0x00330914u) [[unlikely]] return; }
L_00330914:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00330950; } }
    set32(c.r[2], 0u + 10u);
    st8((c.r[1].w[0] + 11308u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 180u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11310u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 5u);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00330960; } }
    c.budget -= 1;
L_00330950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00330960; } }
L_00330958:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00330960:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00330990:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003309DCu); c.r[16].d[0] = c.r[10].d[0] + 0ull;  if (depth < kMaxDepth) unit_008B(c, 285u, depth + 1u); else { c.pc = 0x0032FC60u; return; } if (c.pc != 0x003309DCu) [[unlikely]] return; }
L_003309DC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00330A18; } }
    set32(c.r[2], 0u - 81u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00331670; } }
    c.budget -= 1;
L_00330A18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 11308u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 11309u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00330A38; } }
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_00330A38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], 0u + 100u);
    st8((c.r[1].w[0] + 11309u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_00331618; } }
    set32(c.r[3], 0u + 99u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 31u);  if (t) { goto L_00331600; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003315C8; } }
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 24u);  if (t) { goto L_00331530; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003313E0; } }
    set32(c.r[3], 0u + 23u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 22u);  if (t) { goto L_00331238; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00331198; } }
    set32(c.r[3], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 20u);  if (t) { goto L_00331050; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 13u);  if (t) { goto L_00330FD0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00330E98; } }
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 11u);  if (t) { goto L_00330D48; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 10u);  if (t) { goto L_00330CF0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_00330C58; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00330BD0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00330B68; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00330B20; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00330AF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00331668; } }
    c.budget -= 1;
L_00330AF8:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull + 0ull;
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00331670; } }
    c.budget -= 1;
L_00330B20:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00330B40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00331670; } }
    c.budget -= 1;
L_00330B40:
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[1].w[0] + 11310u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11308u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00331670; } }
L_00330B68:
    set32(c.r[2], ld32((c.r[28].w[0] - 22812u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11308u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330B80u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0083(c, 415u, depth + 1u); else { c.pc = 0x0030FD90u; return; } if (c.pc != 0x00330B80u) [[unlikely]] return; }
L_00330B80:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00330BB8; } }
    set32(c.r[2], 0u - 82u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00331670; } }
L_00330BB8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00331670; } }
    c.budget -= 1;
L_00330BD0:
    set32(c.r[2], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330BE0u); st8((c.r[1].w[0] + 11308u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0084(c, 158u, depth + 1u); else { c.pc = 0x00310CD0u; return; } if (c.pc != 0x00330BE0u) [[unlikely]] return; }
L_00330BE0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00330C18; } }
    set32(c.r[2], 0u - 82u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00331670; } }
L_00330C18:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22840u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00330C48; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00330C38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00330C50; } }
    c.budget -= 1;
L_00330C38:
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00330C50; } }
    c.budget -= 1;
L_00330C48:
    set32(c.r[2], 0u + 10u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00330C50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00331670; } }
L_00330C58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 11308u));
    c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00330C78; } }
    st8((c.r[1].w[0] + 11308u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_00330C78:
    set32(c.r[3], ld32((c.r[28].w[0] - 22864u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 22868u)));
    set32(c.r[4], c.r[4].w[0] + 10112u);
    st32((c.r[1].w[0] + 10112u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330C9Cu); st32((c.r[1].w[0] + 10116u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0084(c, 160u, depth + 1u); else { c.pc = 0x00310D00u; return; } if (c.pc != 0x00330C9Cu) [[unlikely]] return; }
L_00330C9C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00330CD8; } }
    set32(c.r[2], 0u - 82u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00331670; } }
    c.budget -= 1;
L_00330CD8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00331670; } }
    c.budget -= 1;
L_00330CF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330CF8u); c.r[4].d[0] = ld8((c.r[28].w[0] - 22856u));  if (depth < kMaxDepth) unit_0084(c, 162u, depth + 1u); else { c.pc = 0x00310D40u; return; } if (c.pc != 0x00330CF8u) [[unlikely]] return; }
L_00330CF8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00330D30; } }
    set32(c.r[2], 0u - 82u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00331670; } }
L_00330D30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00331670; } }
L_00330D48:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < 61ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u - 86u);  if (t) { goto L_00330D88; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 9;
L_00330D7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00331670; } }
    c.budget -= 1;
L_00330D88:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    set32(c.r[2], 0u + 60u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00330DD0; } }
    c.r[3].d[0] = ld8((c.r[1].w[0] + 11310u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 11308u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00330DC4; } }
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_00330DC4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11308u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00330DD0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330DE0u); st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0084(c, 164u, depth + 1u); else { c.pc = 0x00310D80u; return; } if (c.pc != 0x00330DE0u) [[unlikely]] return; }
L_00330DE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00330E30; } }
    set32(c.r[3], 0u + 70u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 11308u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11310u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 20u);  if (t) { goto L_00330E10; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11308u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00330E10:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    set32(c.r[3], 0u + 300u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00331670; } }
L_00330E30:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < 901ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00330E90; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u - 82u);  if (t) { goto L_00330E78; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00330E90; } }
L_00330E78:
    set32(c.r[2], 0u + 99u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
L_00330E90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00331670; } }
L_00330E98:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < 61ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u - 86u);  if (t) { goto L_00330ED8; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00331670; } }
    c.budget -= 1;
L_00330ED8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    set32(c.r[2], 0u + 60u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00330F20; } }
    c.r[3].d[0] = ld8((c.r[1].w[0] + 11310u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 11308u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00330F14; } }
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_00330F14:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11308u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00330F20:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00330F40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00331670; } }
    c.budget -= 1;
L_00330F40:
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[3], 0u + 100u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 11308u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11310u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].d[0] = c.r[2].sd[0] < 70ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 70u);  if (t) { goto L_00330F70; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11308u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00330F70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330F78u);  if (depth < kMaxDepth) unit_008B(c, 277u, depth + 1u); else { c.pc = 0x0032FAD0u; return; } if (c.pc != 0x00330F78u) [[unlikely]] return; }
L_00330F78:
    set32(c.r[5], ld32((c.r[28].w[0] - 22872u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330F84u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 175u, depth + 1u); else { c.pc = 0x00310EC0u; return; } if (c.pc != 0x00330F84u) [[unlikely]] return; }
L_00330F84:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00330FC0; } }
    set32(c.r[2], 0u - 82u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00331670; } }
    c.budget -= 1;
L_00330FC0:
    set32(c.r[2], 0u + 30u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00331670; } }
L_00330FD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 11308u));
    c.r[1].d[0] = c.r[2].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 11u);  if (t) { goto L_00330FF8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11308u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00330FF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331000u); c.r[4].d[0] = ld8((c.r[28].w[0] - 22856u));  if (depth < kMaxDepth) unit_0084(c, 162u, depth + 1u); else { c.pc = 0x00310D40u; return; } if (c.pc != 0x00331000u) [[unlikely]] return; }
L_00331000:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00331038; } }
    set32(c.r[2], 0u - 82u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00331670; } }
L_00331038:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00331670; } }
L_00331050:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < 61ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u - 86u);  if (t) { goto L_00331090; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00331670; } }
    c.budget -= 1;
L_00331090:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    set32(c.r[2], 0u + 60u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_003310D8; } }
    c.r[3].d[0] = ld8((c.r[1].w[0] + 11310u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 11308u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003310CC; } }
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_003310CC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11308u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003310D8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003310E8u); st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0084(c, 164u, depth + 1u); else { c.pc = 0x00310D80u; return; } if (c.pc != 0x003310E8u) [[unlikely]] return; }
L_003310E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00331130; } }
    set32(c.r[3], 0u + 60u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 11308u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11310u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 20u);  if (t) { goto L_00331118; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11308u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00331118:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00331670; } }
L_00331130:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < 901ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00331190; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u - 82u);  if (t) { goto L_00331178; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00331190; } }
L_00331178:
    set32(c.r[2], 0u + 99u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
L_00331190:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00331670; } }
L_00331198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003311A0u);  if (depth < kMaxDepth) unit_0084(c, 179u, depth + 1u); else { c.pc = 0x00310F50u; return; } if (c.pc != 0x003311A0u) [[unlikely]] return; }
L_003311A0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003311D8; } }
    set32(c.r[2], 0u - 82u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00331670; } }
L_003311D8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003311E4u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0084(c, 184u, depth + 1u); else { c.pc = 0x00310FB0u; return; } if (c.pc != 0x003311E4u) [[unlikely]] return; }
L_003311E4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00331220; } }
    set32(c.r[2], 0u - 82u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00331670; } }
    c.budget -= 1;
L_00331220:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00331670; } }
L_00331238:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < 61ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00331280; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331250u);  if (depth < kMaxDepth) unit_0084(c, 181u, depth + 1u); else { c.pc = 0x00310F80u; return; } if (c.pc != 0x00331250u) [[unlikely]] return; }
L_00331250:
    set32(c.r[2], 0u - 86u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00331670; } }
L_00331280:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    set32(c.r[2], 0u + 60u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_003312C8; } }
    c.r[3].d[0] = ld8((c.r[1].w[0] + 11310u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 11308u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003312BC; } }
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_003312BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11308u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003312C8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003312D8u); st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0084(c, 186u, depth + 1u); else { c.pc = 0x00310FE0u; return; } if (c.pc != 0x003312D8u) [[unlikely]] return; }
L_003312D8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00331350; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00331328; } }
L_003312F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003312F8u);  if (depth < kMaxDepth) unit_0084(c, 181u, depth + 1u); else { c.pc = 0x00310F80u; return; } if (c.pc != 0x003312F8u) [[unlikely]] return; }
L_003312F8:
    set32(c.r[3], 0u - 84u);
    set32(c.r[2], 0u + 2u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00331348; } }
    c.budget -= 1;
L_00331328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331330u);  if (depth < kMaxDepth) unit_0084(c, 181u, depth + 1u); else { c.pc = 0x00310F80u; return; } if (c.pc != 0x00331330u) [[unlikely]] return; }
L_00331330:
    set32(c.r[2], 0u + 99u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
L_00331348:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00331670; } }
L_00331350:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00331368; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003313D8; } }
    c.budget -= 1;
L_00331368:
    set32(c.r[2], 0u + 70u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11310u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 11308u));
    c.r[1].d[0] = c.r[2].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 60u);  if (t) { goto L_00331390; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11308u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00331390:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033139Cu); set32(c.r[4], c.r[4].w[0] + 10112u);  if (depth < kMaxDepth) unit_0084(c, 188u, depth + 1u); else { c.pc = 0x00311010u; return; } if (c.pc != 0x0033139Cu) [[unlikely]] return; }
L_0033139C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 10112u)));
    set32(c.r[4], c.r[4].w[0] + 10112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st32((c.r[28].w[0] - 22864u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 10116u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003313C0u); st32((c.r[28].w[0] - 22868u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0084(c, 160u, depth + 1u); else { c.pc = 0x00310D00u; return; } if (c.pc != 0x003313C0u) [[unlikely]] return; }
L_003313C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    set32(c.r[2], 0u + 180u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
L_003313D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00331670; } }
L_003313E0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    set32(c.r[2], 0u + 60u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00331428; } }
    c.r[3].d[0] = ld8((c.r[1].w[0] + 11310u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 11308u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0033141C; } }
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_0033141C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11308u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00331428:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00331450; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00331670; } }
L_00331450:
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[3], 0u + 100u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 11308u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11310u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].d[0] = c.r[2].sd[0] < 70ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 70u);  if (t) { goto L_00331480; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11308u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00331480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331488u);  if (depth < kMaxDepth) unit_008B(c, 277u, depth + 1u); else { c.pc = 0x0032FAD0u; return; } if (c.pc != 0x00331488u) [[unlikely]] return; }
L_00331488:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331494u); set32(c.r[4], c.r[4].w[0] + 10112u);  if (depth < kMaxDepth) unit_0084(c, 192u, depth + 1u); else { c.pc = 0x00311070u; return; } if (c.pc != 0x00331494u) [[unlikely]] return; }
L_00331494:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003314D0; } }
    set32(c.r[2], 0u - 82u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00331670; } }
    c.budget -= 1;
L_003314D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 10112u)));
    st32((c.r[28].w[0] - 22872u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 22872u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003314E8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 175u, depth + 1u); else { c.pc = 0x00310EC0u; return; } if (c.pc != 0x003314E8u) [[unlikely]] return; }
L_003314E8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00331520; } }
    set32(c.r[2], 0u - 82u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00331670; } }
L_00331520:
    set32(c.r[2], 0u + 30u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00331670; } }
L_00331530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331538u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 166u, depth + 1u); else { c.pc = 0x00310DB0u; return; } if (c.pc != 0x00331538u) [[unlikely]] return; }
L_00331538:
    set32(c.r[4], c.r[28].w[0] - 22904u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331544u); st32((c.r[28].w[0] - 22904u), 0u);  if (depth < kMaxDepth) unit_0084(c, 169u, depth + 1u); else { c.pc = 0x00310E20u; return; } if (c.pc != 0x00331544u) [[unlikely]] return; }
L_00331544:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00331558; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22904u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00331588; } }
L_00331558:
    set32(c.r[2], 0u - 83u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00331670; } }
L_00331588:
    set32(c.r[3], 0u + 100u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[1].w[0] + 11310u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11308u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00331670; } }
    c.budget -= 1;
L_003315C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 11309u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_003315F8; } }
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 2u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00331670; } }
L_003315F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00331670; } }
L_00331600:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00331670; } }
L_00331618:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331624u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 76u, depth + 1u); else { c.pc = 0x003317B0u; return; } if (c.pc != 0x00331624u) [[unlikely]] return; }
L_00331624:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00331660; } }
    set32(c.r[2], 0u + 10u);
    st8((c.r[1].w[0] + 11308u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 180u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11310u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 5u);
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00331670; } }
    c.budget -= 1;
L_00331660:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00331670; } }
L_00331668:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00331670:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003316A0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[1].w[0] + 11308u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 11309u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_003316FC; } }
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_003316FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[1].w[0] + 11309u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00331740; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00331728; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00331780; } }
    c.budget -= 1;
L_00331728:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00331788; } }
L_00331740:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033174Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 76u, depth + 1u); else { c.pc = 0x003317B0u; return; } if (c.pc != 0x0033174Cu) [[unlikely]] return; }
L_0033174C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00331778; } }
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 4u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00331788; } }
L_00331778:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00331788; } }
L_00331780:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00331788:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003317B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[4], 0u + 20u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00331D80; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00331D48; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00331D00; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00331C38; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00331BB0; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00331AE8; } }
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00331A88; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00331A28; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00331968; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00331910; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003318C8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00331860; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00331DB8; } }
    c.budget -= 1;
L_00331860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331868u);  if (depth < kMaxDepth) unit_0083(c, 406u, depth + 1u); else { c.pc = 0x0030FBF0u; return; } if (c.pc != 0x00331868u) [[unlikely]] return; }
L_00331868:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00331880; } }
    set32(c.r[2], 0u + 20u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_003318C0; } }
L_00331880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331888u);  if (depth < kMaxDepth) unit_0083(c, 406u, depth + 1u); else { c.pc = 0x0030FBF0u; return; } if (c.pc != 0x00331888u) [[unlikely]] return; }
L_00331888:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003318B0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00331DC0; } }
    c.budget -= 1;
L_003318B0:
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
L_003318C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00331DC0; } }
L_003318C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003318D4u); set32(c.r[4], c.r[4].w[0] + 10160u);  if (depth < kMaxDepth) unit_0084(c, 69u, depth + 1u); else { c.pc = 0x003101E0u; return; } if (c.pc != 0x003318D4u) [[unlikely]] return; }
L_003318D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 10160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003318E8u); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003318E8u) [[unlikely]] return; }
L_003318E8:
    set32(c.r[3], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st32((c.r[1].w[0] + 10160u), c.r[3].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00331DC0; } }
    c.budget -= 1;
L_00331910:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00331930; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00331DC0; } }
    c.budget -= 1;
L_00331930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331938u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0083(c, 406u, depth + 1u); else { c.pc = 0x0030FBF0u; return; } if (c.pc != 0x00331938u) [[unlikely]] return; }
L_00331938:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00331950; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00331960; } }
L_00331950:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00331960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00331DC0; } }
L_00331968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331970u);  if (depth < kMaxDepth) unit_0084(c, 93u, depth + 1u); else { c.pc = 0x00310370u; return; } if (c.pc != 0x00331970u) [[unlikely]] return; }
L_00331970:
    set32(c.r[2], ld32((c.r[28].w[0] - 22812u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00331A10; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22840u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003319F8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_003319D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003319B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00331A20; } }
    c.budget -= 1;
L_003319B0:
    set32(c.r[5], ld32((c.r[28].w[0] - 22872u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003319BCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 177u, depth + 1u); else { c.pc = 0x00310F10u; return; } if (c.pc != 0x003319BCu) [[unlikely]] return; }
L_003319BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003319C4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 167u, depth + 1u); else { c.pc = 0x00310DE0u; return; } if (c.pc != 0x003319C4u) [[unlikely]] return; }
L_003319C4:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00331A20; } }
L_003319D0:
    set32(c.r[5], ld32((c.r[28].w[0] - 22872u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003319DCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 177u, depth + 1u); else { c.pc = 0x00310F10u; return; } if (c.pc != 0x003319DCu) [[unlikely]] return; }
L_003319DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003319E4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 167u, depth + 1u); else { c.pc = 0x00310DE0u; return; } if (c.pc != 0x003319E4u) [[unlikely]] return; }
L_003319E4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00331A20; } }
    c.budget -= 1;
L_003319F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331A00u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 127u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00331A00u) [[unlikely]] return; }
L_00331A00:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00331A20; } }
    c.budget -= 1;
L_00331A10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331A18u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 127u, depth + 1u); else { c.pc = 0x00310A40u; return; } if (c.pc != 0x00331A18u) [[unlikely]] return; }
L_00331A18:
    set32(c.r[2], 0u + 6u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00331A20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00331DC0; } }
L_00331A28:
    set32(c.r[2], ld32((c.r[28].w[0] - 22864u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st32((c.r[1].w[0] + 10116u), 0u);
    set32(c.r[4], c.r[4].w[0] + 10112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331A48u); st32((c.r[1].w[0] + 10112u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0084(c, 194u, depth + 1u); else { c.pc = 0x003110A0u; return; } if (c.pc != 0x00331A48u) [[unlikely]] return; }
L_00331A48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00331A68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331A58u);  if (depth < kMaxDepth) unit_0084(c, 181u, depth + 1u); else { c.pc = 0x00310F80u; return; } if (c.pc != 0x00331A58u) [[unlikely]] return; }
L_00331A58:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00331A80; } }
L_00331A68:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], 0u + 600u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
L_00331A80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00331DC0; } }
L_00331A88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331A90u);  if (depth < kMaxDepth) unit_0084(c, 186u, depth + 1u); else { c.pc = 0x00310FE0u; return; } if (c.pc != 0x00331A90u) [[unlikely]] return; }
L_00331A90:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00331AC8; } }
    set32(c.r[3], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00331AC8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00331AC8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[2].w[0] - 1u);
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00331AE0; } }
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_00331AC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331AD0u);  if (depth < kMaxDepth) unit_0084(c, 181u, depth + 1u); else { c.pc = 0x00310F80u; return; } if (c.pc != 0x00331AD0u) [[unlikely]] return; }
L_00331AD0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
L_00331AE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00331DC0; } }
L_00331AE8:
    set32(c.r[3], ld32((c.r[28].w[0] - 22812u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00331AF0:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00331B40; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00331B20; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00331B20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00331BA8; } }
    c.budget -= 1;
L_00331B20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331B28u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 154u, depth + 1u); else { c.pc = 0x00310C70u; return; } if (c.pc != 0x00331B28u) [[unlikely]] return; }
L_00331B28:
    set32(c.r[2], 0u + 600u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00331BA8; } }
L_00331B40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22840u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00331B88; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00331B88; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00331B68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00331BA8; } }
L_00331B68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331B70u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 154u, depth + 1u); else { c.pc = 0x00310C70u; return; } if (c.pc != 0x00331B70u) [[unlikely]] return; }
L_00331B70:
    set32(c.r[2], 0u + 600u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00331BA8; } }
L_00331B88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331B90u);  if (depth < kMaxDepth) unit_0084(c, 171u, depth + 1u); else { c.pc = 0x00310E60u; return; } if (c.pc != 0x00331B90u) [[unlikely]] return; }
L_00331B90:
    set32(c.r[2], 0u + 60u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_00331BA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00331DC0; } }
L_00331BB0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[1].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00331BE0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00331C30; } }
L_00331BE0:
    set32(c.r[2], 0u + 60u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00331C30; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331C08u); set32(c.r[4], c.r[4].w[0] + 10128u);  if (depth < kMaxDepth) unit_0084(c, 128u, depth + 1u); else { c.pc = 0x00310A60u; return; } if (c.pc != 0x00331C08u) [[unlikely]] return; }
L_00331C08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 10140u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00331C20; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00331C30; } }
L_00331C20:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
L_00331C30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00331DC0; } }
L_00331C38:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00331C58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00331DC0; } }
    c.budget -= 1;
L_00331C58:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_00331C5C:
    set32(c.r[3], ld32((c.r[28].w[0] - 22812u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00331CA0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00331C90; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00331C90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00331CE0; } }
L_00331C90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331C98u);  if (depth < kMaxDepth) unit_0084(c, 156u, depth + 1u); else { c.pc = 0x00310CA0u; return; } if (c.pc != 0x00331C98u) [[unlikely]] return; }
L_00331C98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00331CE0; } }
L_00331CA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22840u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00331CD8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00331CD8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00331CC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00331CE0; } }
L_00331CC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331CD0u);  if (depth < kMaxDepth) unit_0084(c, 156u, depth + 1u); else { c.pc = 0x00310CA0u; return; } if (c.pc != 0x00331CD0u) [[unlikely]] return; }
L_00331CD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00331CE0; } }
L_00331CD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331CE0u);  if (depth < kMaxDepth) unit_0084(c, 173u, depth + 1u); else { c.pc = 0x00310E90u; return; } if (c.pc != 0x00331CE0u) [[unlikely]] return; }
L_00331CE0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[3], 0u + 20u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00331DC0; } }
    c.budget -= 1;
L_00331D00:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00331D20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00331DC0; } }
    c.budget -= 1;
L_00331D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331D28u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0084(c, 85u, depth + 1u); else { c.pc = 0x003102D0u; return; } if (c.pc != 0x00331D28u) [[unlikely]] return; }
L_00331D28:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[3], 0u + 20u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00331DC0; } }
    c.budget -= 1;
L_00331D48:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00331D68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00331DC0; } }
    c.budget -= 1;
L_00331D68:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00331DC0; } }
    goto L_00331D7C;
L_00331D78:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_00331D7C:
    c.budget -= 1;
L_00331D80:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00331DA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00331DC0; } }
    c.budget -= 1;
L_00331DA0:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00331DC0; } }
    c.budget -= 1;
L_00331DB8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00331DC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00331DE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 11296u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331DFCu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00331DFCu) [[unlikely]] return; }
L_00331DFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 11216u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331E10u); set32(c.r[6], 0u + 80u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00331E10u) [[unlikely]] return; }
L_00331E10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 10192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331E24u); set32(c.r[6], 0u + 1024u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00331E24u) [[unlikely]] return; }
L_00331E24:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 10128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331E38u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00331E38u) [[unlikely]] return; }
L_00331E38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 10160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331E4Cu); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00331E4Cu) [[unlikely]] return; }
L_00331E4C:
    set32(c.r[3], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st32((c.r[1].w[0] + 10160u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00331E70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[1].w[0] + 10160u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 10160u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331E90u); set32(c.r[5], c.r[29].w[0] + 24u);  if (depth < kMaxDepth) unit_0083(c, 425u, depth + 1u); else { c.pc = 0x0030FED0u; return; } if (c.pc != 0x00331E90u) [[unlikely]] return; }
L_00331E90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[1].w[0] + 10160u)));
    set32(c.r[5], c.r[29].w[0] + 24u);
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331EACu); st32((c.r[29].w[0] + 28u), 0u);  if (depth < kMaxDepth) unit_0083(c, 431u, depth + 1u); else { c.pc = 0x0030FF60u; return; } if (c.pc != 0x00331EACu) [[unlikely]] return; }
L_00331EAC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00331EC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331EECu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 317u, depth + 1u); else { c.pc = 0x00312260u; return; } if (c.pc != 0x00331EECu) [[unlikely]] return; }
L_00331EEC:
    set32(c.r[3], ld32((c.r[28].w[0] - 22812u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[2].d[0] | 34364ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st32((c.r[1].w[0] + 10136u), c.r[4].w[0]);
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00331F20; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00331F20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00331F30; } }
L_00331F20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331F2Cu); set32(c.r[4], c.r[4].w[0] + 10128u);  if (depth < kMaxDepth) unit_0084(c, 128u, depth + 1u); else { c.pc = 0x00310A60u; return; } if (c.pc != 0x00331F2Cu) [[unlikely]] return; }
L_00331F2C:
    c.budget -= 1;
L_00331F30:
    c.r[2].d[0] = c.r[19].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[6], c.r[2].w[0] - 2u);
    c.budget -= 5;
    { const bool t = c.r[6].sd[0] >= 0;  if (t) { goto L_00331F48; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00331F48:
    set32(c.r[3], c.r[6].w[0] << 1);
    c.r[5].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[10], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[6], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 1120u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st8((c.r[1].w[0] + 11275u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    set32(c.r[9], ld32((c.r[3].w[0])));
    c.budget -= 14;
L_00331F80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[7], 0u + 6u);
    set32(c.r[2], c.r[2].w[0] - 1116u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[17].w[0] + 5u);
    set32(c.r[8], c.r[10].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 10136u)));
    set32(c.r[2], c.r[2].w[0] - 1112u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[10].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11231u), static_cast<std::uint8_t>(c.r[9].w[0]));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    st8((c.r[1].w[0] + 11233u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[1].w[0] + 11235u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11234u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11243u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11226u), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11230u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11290u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11228u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11293u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11224u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11275u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11276u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11278u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11280u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11282u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11284u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11286u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11288u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 63;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033207Cu); st8((c.r[1].w[0] + 11292u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0005(c, 103u, depth + 1u); else { c.pc = 0x00116610u; return; } if (c.pc != 0x0033207Cu) [[unlikely]] return; }
L_0033207C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332084u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00312530u; return; } if (c.pc != 0x00332084u) [[unlikely]] return; }
L_00332084:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003320A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_003320B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003320C0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 92u);  if (t) { goto L_003320F8; } }
    set32(c.r[3], 0u + 47u);
    c.budget -= 1;
L_003320D0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003320E0; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003320E0:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003320D0u | kUnwind; return; } goto L_003320D0; } }
    c.budget -= 1;
L_003320F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00332100:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11240u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st32((c.r[1].w[0] + 11236u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 11240u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[1].w[0] + 11278u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00332130:
    c.r[3].d[0] = c.r[4].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], c.r[3].w[0] << 4);
    set32(c.r[10], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], c.r[4].w[0] + 9472u);
    set32(c.r[3], c.r[3].w[0] + 9536u);
    set32(c.r[9], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[8], c.r[3].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 9408u);
    set32(c.r[3], c.r[3].w[0] + 10096u);
    set32(c.r[7], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    c.budget -= 16;
L_00332170:
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[3], c.r[3].w[0] + 10080u);
    set32(c.r[4], c.r[3].w[0] + c.r[10].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 10064u);
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    c.r[12].d[0] = ld16((c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[4].d[0] = c.r[12].d[0] & 15360ull;
    set32(c.r[3], c.r[3].w[0] + 10048u);
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    c.r[14].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = c.r[6].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 15360ull;
    c.r[11].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 15360ull;
    c.r[10].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    c.r[12].d[0] = c.r[12].d[0] ^ c.r[3].d[0];
    c.r[13].d[0] = c.r[12].d[0] & 65535ull;
    c.r[3].d[0] = c.r[14].d[0] & 15360ull;
    c.r[12].d[0] = c.r[3].d[0] & 65535ull;
    c.r[11].d[0] = c.r[13].d[0] | c.r[11].d[0];
    c.r[12].d[0] = c.r[14].d[0] ^ c.r[12].d[0];
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[11].d[0] = c.r[12].d[0] & 65535ull;
    c.r[10].d[0] = c.r[11].d[0] | c.r[10].d[0];
    st16((c.r[9].w[0] + 2u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[11].d[0] = ld16((c.r[9].w[0] + 2u));
    c.r[10].d[0] = ld16((c.r[9].w[0]));
    c.r[11].d[0] = ~(c.r[11].d[0] | 0ull);
    c.r[10].d[0] = c.r[11].d[0] & c.r[10].d[0];
    st16((c.r[9].w[0] + 4u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[11].d[0] = ld16((c.r[9].w[0]));
    c.r[10].d[0] = ld16((c.r[9].w[0] + 2u));
    c.r[11].d[0] = ~(c.r[11].d[0] | 0ull);
    c.r[10].d[0] = c.r[11].d[0] & c.r[10].d[0];
    st16((c.r[9].w[0] + 8u), static_cast<std::uint16_t>(c.r[10].w[0]));
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[8].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[6].d[0] = ld16((c.r[8].w[0] + 2u));
    c.r[5].d[0] = ld16((c.r[8].w[0]));
    c.r[6].d[0] = ~(c.r[6].d[0] | 0ull);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st16((c.r[8].w[0] + 4u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[6].d[0] = ld16((c.r[8].w[0]));
    c.r[5].d[0] = ld16((c.r[8].w[0] + 2u));
    c.r[6].d[0] = ~(c.r[6].d[0] | 0ull);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st16((c.r[8].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[7].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[7].w[0] + 2u));
    c.r[3].d[0] = ld16((c.r[7].w[0]));
    c.r[4].d[0] = ~(c.r[4].d[0] | 0ull);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[7].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[7].w[0]));
    c.r[3].d[0] = ld16((c.r[7].w[0] + 2u));
    c.r[4].d[0] = ~(c.r[4].d[0] | 0ull);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 66;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[7].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00332280:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 9686u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 9684u)));
    c.r[2].d[0] = c.r[3].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003322B0; } }
    c.r[2].d[0] = c.r[4].d[0] | 1024ull;
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (t) { goto L_003322C8; } }
    c.budget -= 1;
L_003322B0:
    c.r[1].d[0] = c.r[3].sd[0] < -63ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[4].d[0] | 2048ull;  if (t) { goto L_003322C8; } }
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 3;
L_003322C8:
    c.r[3].d[0] = c.r[5].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[4].d[0] | 4096ull;  if (t) { goto L_003322E8; } }
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (t) { goto L_00332300; } }
L_003322E8:
    c.r[1].d[0] = c.r[3].sd[0] < -63ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[4].d[0] | 8192ull;  if (t) { goto L_00332300; } }
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 3;
L_00332300:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] & 65535ull;  c.pc = t; return; }
L_00332310:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = ld16((c.r[1].w[0] + 9600u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332328u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 130u, depth + 1u); else { c.pc = 0x002AD610u; return; } if (c.pc != 0x00332328u) [[unlikely]] return; }
L_00332328:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00332340:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11230u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00332360; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11226u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00332368; } }
L_00332360:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00332380; } }
L_00332368:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11232u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11233u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
L_00332380:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00332390:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld16((c.r[28].w[0] - 22920u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11231u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003323D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003323BCu);  if (depth < kMaxDepth) unit_008C(c, 128u, depth + 1u); else { c.pc = 0x00332310u; return; } if (c.pc != 0x003323BCu) [[unlikely]] return; }
L_003323BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003323C4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 127u, depth + 1u); else { c.pc = 0x00332280u; return; } if (c.pc != 0x003323C4u) [[unlikely]] return; }
L_003323C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = ld16((c.r[1].w[0] + 9600u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003323D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 135u, depth + 1u); else { c.pc = 0x003323F0u; return; } if (c.pc != 0x003323D8u) [[unlikely]] return; }
L_003323D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003323F0:
    set32(c.r[3], 0u - 2u);
    set32(c.r[7], 0u - 15361u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[6].d[0] = c.r[6].d[0] & 15360ull;
    c.r[3].d[0] = ld8((c.r[28].w[0] - 22956u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];  if (t) { goto L_00332418; } }
    c.r[5].d[0] = c.r[5].d[0] | 1ull;
    c.budget -= 1;
L_00332418:
    c.r[7].d[0] = ld16((c.r[28].w[0] - 22920u));
    set32(c.r[6], ld32((c.r[28].w[0] - 27864u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[3], c.r[3].w[0] + 7824u);
    set32(c.r[7], c.r[7].w[0] << 3);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);  if (t) { goto L_00332480; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 22908u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_00332480; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 22912u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00332480; } }
    c.r[7].d[0] = ld16((c.r[28].w[0] - 22916u));
    c.r[6].d[0] = ld8((c.r[28].w[0] - 24116u));
    set32(c.r[7], c.r[7].w[0] << 8);
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | 32768ull;
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[7], c.r[6].w[0] << 8);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 8));
    c.r[7].d[0] = c.r[7].d[0] & 65280ull;
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));  if (t) { goto L_003324F8; } }
L_00332480:
    c.r[6].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[7], c.r[6].w[0] << 8);
    c.r[10].d[0] = ld16((c.r[28].w[0] - 22916u));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 8));
    c.r[7].d[0] = c.r[7].d[0] & 65280ull;
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    c.r[8].d[0] = c.r[5].d[0] & 65535ull;
    c.r[9].d[0] = c.r[7].d[0] | c.r[6].d[0];
    set32(c.r[6], c.r[8].w[0] << 8);
    c.r[7].d[0] = c.r[6].d[0] & 65280ull;
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 8));
    c.r[10].d[0] = c.r[10].d[0] & 32767ull;
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    set32(c.r[7], c.r[10].w[0] << 8);
    c.r[8].d[0] = c.r[7].d[0] & 65280ull;
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 8));
    c.r[7].d[0] = c.r[7].d[0] & 255ull;
    c.r[7].d[0] = c.r[8].d[0] | c.r[7].d[0];
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[7].d[0] = ld16((c.r[28].w[0] - 24116u));
    set32(c.r[8], c.r[7].w[0] << 8);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 8));
    c.r[8].d[0] = c.r[8].d[0] & 65280ull;
    c.r[7].d[0] = c.r[7].d[0] & 255ull;
    c.r[7].d[0] = c.r[8].d[0] | c.r[7].d[0];
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 30;
L_003324F8:
    st32((c.r[28].w[0] - 22908u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st32((c.r[28].w[0] - 22912u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[1].w[0] + 11216u)));
    c.r[5].d[0] = ld16((c.r[28].w[0] - 22920u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11232u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st16((c.r[28].w[0] - 22920u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[1].w[0] + 11216u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[1].w[0] + 11232u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00332540:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld16((c.r[28].w[0] - 22920u));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003325F8; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[16], c.r[16].w[0] + 7824u);
    c.budget -= 3;
L_00332588:
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], 0u + 2u);  if (t) { goto L_003325B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003325C0; } }
    c.budget -= 1;
L_003325B8:
    set32(c.r[17], 0u + 8u);
    c.budget -= 2;
L_003325C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[3], c.r[19].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] + 10192u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003325DCu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x003325DCu) [[unlikely]] return; }
L_003325DC:
    c.r[2].d[0] = ld16((c.r[28].w[0] - 22920u));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00332588u | kUnwind; return; } goto L_00332588; } }
    c.budget -= 1;
L_003325F8:
    c.r[2].d[0] = c.r[20].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[4], c.r[19].w[0] + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].d[0] = c.r[2].d[0] | 32ull;
    st8((c.r[1].w[0] + 10192u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[2], c.r[2].w[0] + 10192u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[1].w[0] + 10193u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332630u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00332630u) [[unlikely]] return; }
L_00332630:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[6].d[0] = ld8((c.r[1].w[0] + 10192u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332648u); set32(c.r[5], c.r[5].w[0] + 10192u);  if (depth < kMaxDepth) unit_008C(c, 189u, depth + 1u); else { c.pc = 0x003333D0u; return; } if (c.pc != 0x00332648u) [[unlikely]] return; }
L_00332648:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00332670; } }
    c.r[3].d[0] = ld8((c.r[1].w[0] + 10192u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00332670; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332668u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_008C(c, 124u, depth + 1u); else { c.pc = 0x00332100u; return; } if (c.pc != 0x00332668u) [[unlikely]] return; }
L_00332668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_003326A0; } }
L_00332670:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 11264u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[4], c.r[4].w[0] + 10192u);
    st16((c.r[28].w[0] - 22920u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033269Cu); st16((c.r[1].w[0] + 11264u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0084(c, 320u, depth + 1u); else { c.pc = 0x003122C0u; return; } if (c.pc != 0x0033269Cu) [[unlikely]] return; }
L_0033269C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003326A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003326D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = c.r[5].d[0] << 56;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] < 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00332700; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11226u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00332708; } }
L_00332700:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00332790; } }
L_00332708:
    c.r[2].d[0] = c.r[3].d[0] | 48ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 10193u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 10196u);
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 10192u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 10194u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332744u); st8((c.r[1].w[0] + 10195u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00332744u) [[unlikely]] return; }
L_00332744:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[6].d[0] = ld8((c.r[1].w[0] + 10192u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033275Cu); set32(c.r[5], c.r[5].w[0] + 10192u);  if (depth < kMaxDepth) unit_008C(c, 189u, depth + 1u); else { c.pc = 0x003333D0u; return; } if (c.pc != 0x0033275Cu) [[unlikely]] return; }
L_0033275C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 10192u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00332780; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332774u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_008C(c, 124u, depth + 1u); else { c.pc = 0x00332100u; return; } if (c.pc != 0x00332774u) [[unlikely]] return; }
L_00332774:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00332790; } }
    c.budget -= 1;
L_00332780:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033278Cu); set32(c.r[4], c.r[4].w[0] + 10192u);  if (depth < kMaxDepth) unit_0084(c, 320u, depth + 1u); else { c.pc = 0x003122C0u; return; } if (c.pc != 0x0033278Cu) [[unlikely]] return; }
L_0033278C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00332790:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003327A0:
    c.r[3].d[0] = c.r[5].d[0] << 56;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003327C8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11226u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003327D0; } }
L_003327C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00332858; } }
L_003327D0:
    c.r[2].d[0] = c.r[3].d[0] | 112ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 10193u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 10192u);
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 10192u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld16((c.r[28].w[0] - 22916u));
    c.r[6].d[0] = ld8((c.r[1].w[0] + 10192u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 10195u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332814u); st8((c.r[1].w[0] + 10194u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008C(c, 189u, depth + 1u); else { c.pc = 0x003333D0u; return; } if (c.pc != 0x00332814u) [[unlikely]] return; }
L_00332814:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 10192u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00332838; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033282Cu); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_008C(c, 124u, depth + 1u); else { c.pc = 0x00332100u; return; } if (c.pc != 0x0033282Cu) [[unlikely]] return; }
L_0033282C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00332858; } }
    c.budget -= 1;
L_00332838:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 11264u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11264u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
L_00332858:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00332870:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = c.r[5].d[0] << 56;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] < 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003328A0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11226u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003328A8; } }
L_003328A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00332938; } }
L_003328A8:
    c.r[2].d[0] = c.r[3].d[0] | 144ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 10193u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 10196u);
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 10192u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 10194u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003328E4u); st8((c.r[1].w[0] + 10195u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003328E4u) [[unlikely]] return; }
L_003328E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[6].d[0] = ld8((c.r[1].w[0] + 10192u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003328FCu); set32(c.r[5], c.r[5].w[0] + 10192u);  if (depth < kMaxDepth) unit_008C(c, 189u, depth + 1u); else { c.pc = 0x003333D0u; return; } if (c.pc != 0x003328FCu) [[unlikely]] return; }
L_003328FC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00332928; } }
    c.r[3].d[0] = ld8((c.r[1].w[0] + 10192u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00332928; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033291Cu); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_008C(c, 124u, depth + 1u); else { c.pc = 0x00332100u; return; } if (c.pc != 0x0033291Cu) [[unlikely]] return; }
L_0033291C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00332938; } }
    c.budget -= 1;
L_00332928:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332934u); set32(c.r[4], c.r[4].w[0] + 10192u);  if (depth < kMaxDepth) unit_0084(c, 320u, depth + 1u); else { c.pc = 0x003122C0u; return; } if (c.pc != 0x00332934u) [[unlikely]] return; }
L_00332934:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00332938:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00332950:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = c.r[5].d[0] << 56;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] < 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00332980; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11226u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00332988; } }
L_00332980:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00332A10; } }
L_00332988:
    c.r[2].d[0] = c.r[3].d[0] | 16ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 10193u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 10196u);
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 10192u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 10194u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003329C4u); st8((c.r[1].w[0] + 10195u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003329C4u) [[unlikely]] return; }
L_003329C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[6].d[0] = ld8((c.r[1].w[0] + 10192u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003329DCu); set32(c.r[5], c.r[5].w[0] + 10192u);  if (depth < kMaxDepth) unit_008C(c, 189u, depth + 1u); else { c.pc = 0x003333D0u; return; } if (c.pc != 0x003329DCu) [[unlikely]] return; }
L_003329DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 10192u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00332A00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003329F4u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_008C(c, 124u, depth + 1u); else { c.pc = 0x00332100u; return; } if (c.pc != 0x003329F4u) [[unlikely]] return; }
L_003329F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00332A10; } }
    c.budget -= 1;
L_00332A00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332A0Cu); set32(c.r[4], c.r[4].w[0] + 10192u);  if (depth < kMaxDepth) unit_0084(c, 320u, depth + 1u); else { c.pc = 0x003122C0u; return; } if (c.pc != 0x00332A0Cu) [[unlikely]] return; }
L_00332A0C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00332A10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00332A20:
    c.r[3].d[0] = c.r[5].d[0] << 56;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00332A48; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11226u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00332A50; } }
L_00332A48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00332AC8; } }
L_00332A50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 10195u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = c.r[3].d[0] | 80ull;
    st8((c.r[1].w[0] + 10196u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 10193u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 10192u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 10194u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 10197u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[6].d[0] = ld8((c.r[1].w[0] + 10192u));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332AA0u); set32(c.r[5], c.r[5].w[0] + 10192u);  if (depth < kMaxDepth) unit_008C(c, 189u, depth + 1u); else { c.pc = 0x003333D0u; return; } if (c.pc != 0x00332AA0u) [[unlikely]] return; }
L_00332AA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 10192u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00332AC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332AB8u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_008C(c, 124u, depth + 1u); else { c.pc = 0x00332100u; return; } if (c.pc != 0x00332AB8u) [[unlikely]] return; }
L_00332AB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00332AC8; } }
L_00332AC0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00332AC8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00332AE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332AF0u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00312530u; return; } if (c.pc != 0x00332AF0u) [[unlikely]] return; }
L_00332AF0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00332B00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332B10u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00312530u; return; } if (c.pc != 0x00332B10u) [[unlikely]] return; }
L_00332B10:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00332B20:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[1].d[0] = c.r[6].sd[0] < 900ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00332B68; } }
    set32(c.r[4], 0u + 19u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332B60u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_008C(c, 124u, depth + 1u); else { c.pc = 0x00332100u; return; } if (c.pc != 0x00332B60u) [[unlikely]] return; }
L_00332B60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00332E00; } }
L_00332B68:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 22972u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00332B90; } }
    c.r[6].d[0] = c.r[2].d[0] << 48;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332B8Cu); set32(c.r[5], c.r[5].w[0] + 5808u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00332B8Cu) [[unlikely]] return; }
L_00332B8C:
    c.budget -= 1;
L_00332B90:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 22972u)));
    set32(c.r[2], 0u + 900u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[5], c.r[21].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = c.r[2].d[0] << 48;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332BB0u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);  if (depth < kMaxDepth) unit_0084(c, 65u, depth + 1u); else { c.pc = 0x003101B0u; return; } if (c.pc != 0x00332BB0u) [[unlikely]] return; }
L_00332BB0:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 33u);
    c.budget -= 4;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { goto L_00332BD8; } }
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332BCCu); set32(c.r[4], 0u + 19u);  if (depth < kMaxDepth) unit_008C(c, 124u, depth + 1u); else { c.pc = 0x00332100u; return; } if (c.pc != 0x00332BCCu) [[unlikely]] return; }
L_00332BCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00332E00; } }
    c.budget -= 1;
L_00332BD8:
    set32(c.r[2], 0u - 16u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { goto L_00332BF8; } }
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332BF0u); set32(c.r[4], 0u + 19u);  if (depth < kMaxDepth) unit_008C(c, 124u, depth + 1u); else { c.pc = 0x00332100u; return; } if (c.pc != 0x00332BF0u) [[unlikely]] return; }
L_00332BF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00332E00; } }
L_00332BF8:
    set32(c.r[2], 0u - 34u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { goto L_00332C18; } }
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332C10u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_008C(c, 124u, depth + 1u); else { c.pc = 0x00332100u; return; } if (c.pc != 0x00332C10u) [[unlikely]] return; }
L_00332C10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00332E00; } }
L_00332C18:
    c.budget -= 2;
    { const bool t = c.r[22].sd[0] >= 0;  if (t) { goto L_00332C38; } }
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332C2Cu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_008C(c, 124u, depth + 1u); else { c.pc = 0x00332100u; return; } if (c.pc != 0x00332C2Cu) [[unlikely]] return; }
L_00332C2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00332E00; } }
    c.budget -= 1;
L_00332C38:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 22972u)));
    set32(c.r[20], c.r[22].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_00332C60; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332C58u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00332C58u) [[unlikely]] return; }
L_00332C58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00332E00; } }
L_00332C60:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00332C68:
    set32(c.r[18], c.r[20].w[0] - c.r[19].w[0]);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00332DA8; } }
    set32(c.r[17], c.r[21].w[0] + c.r[19].w[0]);
    c.r[4].d[0] = ld8((c.r[17].w[0]));
    c.r[1].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00332CA0; } }
    set32(c.r[4], 0u + 21u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332C94u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008C(c, 124u, depth + 1u); else { c.pc = 0x00332100u; return; } if (c.pc != 0x00332C94u) [[unlikely]] return; }
L_00332C94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00332E00; } }
    c.budget -= 1;
L_00332CA0:
    set32(c.r[2], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00332D18; } }
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00332D18; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[2], 0u + 144u);
    c.r[3].d[0] = c.r[3].d[0] & 240ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00332D18; } }
    set32(c.r[2], 0u + 112u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00332D18; } }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00332D18; } }
    set32(c.r[2], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00332D18; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00332D18; } }
    set32(c.r[4], 0u + 21u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332D0Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_008C(c, 124u, depth + 1u); else { c.pc = 0x00332100u; return; } if (c.pc != 0x00332D0Cu) [[unlikely]] return; }
L_00332D0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00332E00; } }
    c.budget -= 1;
L_00332D18:
    set32(c.r[2], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00332D88; } }
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00332DA8; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 4u));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 5u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00332DA8; } }
    set32(c.r[2], c.r[19].w[0] + 2u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332D68u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 196u, depth + 1u); else { c.pc = 0x0011AA48u; return; } if (c.pc != 0x00332D68u) [[unlikely]] return; }
L_00332D68:
    set32(c.r[3], c.r[16].w[0] + 2u);
    set32(c.r[2], 0u + 96u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[19], c.r[19].w[0] + c.r[3].w[0]);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00332C68u | kUnwind; return; } goto L_00332C68; } }
    c.budget -= 1;
L_00332D88:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00332DA8; } }
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00332DA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00332C68u | kUnwind; return; } goto L_00332C68; } }
L_00332DA8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_00332DB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 22972u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00332DD0; } }
L_00332DB8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[5], c.r[21].w[0] + c.r[19].w[0]);
    set32(c.r[4], c.r[4].w[0] + 5808u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332DCCu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00332DCCu) [[unlikely]] return; }
L_00332DCC:
    st16((c.r[28].w[0] - 22972u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.budget -= 1;
L_00332DD0:
    set32(c.r[4], c.r[21].w[0] + c.r[19].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332DE0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00332DE0u) [[unlikely]] return; }
L_00332DE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[4].d[0] = c.r[22].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 11268u)));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11268u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
L_00332E00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00332E30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[10].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = ld8((c.r[6].w[0] + 1u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 10164u)));
    c.r[9].d[0] = ld8((c.r[6].w[0]));
    c.r[3].d[0] = c.r[16].d[0] & 240ull;
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.r[8].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] != 0ull; c.r[6].d[0] = c.r[16].d[0] & 15ull;  if (t) { goto L_00332E90; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    c.r[7].d[0] = ld16((c.r[1].w[0] + 11224u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00332EB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00332EB8; } }
    c.budget -= 1;
L_00332E90:
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00332EB0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11226u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00332EB8; } }
    c.budget -= 1;
L_00332EB0:
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00332EB8:
    c.r[7].d[0] = c.r[8].d[0] & 255ull;
    set32(c.r[3], 0u + 192u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 144u);  if (t) { goto L_00333378; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_003331F0; } }
    set32(c.r[3], 0u + 112u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 32u);  if (t) { goto L_003331C8; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_00333068; } }
    set32(c.r[3], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_00333028; } }
    set32(c.r[2], 0u + 80u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 16u);  if (t) { goto L_00332F88; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[2].d[0];  if (t) { goto L_003333B8; } }
    set32(c.r[2], 0u + 96u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 240u);  if (t) { goto L_00332F30; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[2].d[0];  if (t) { goto L_003333B8; } }
    set32(c.r[2], 0u + 176u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[2].d[0];  if (t) { goto L_003333B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003333B0; } }
    c.budget -= 1;
L_00332F30:
    set32(c.r[5], c.r[10].w[0] + 2u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332F40u); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00332F40u) [[unlikely]] return; }
L_00332F40:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 34u));
    set32(c.r[2], 0u + 4146u);
    set32(c.r[4], c.r[3].w[0] << 8);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));
    c.r[4].d[0] = c.r[4].d[0] & 65280ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4129u);  if (t) { goto L_00332F80; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00332F78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003333B8; } }
    c.budget -= 1;
L_00332F78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 8464u);  if (t) { goto L_003333B8; } }
L_00332F80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 12816u);  if (t) { goto L_003333B8; } }
L_00332F88:
    c.r[3].d[0] = ld8((c.r[10].w[0] + 2u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00332FB8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00332FA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003333B8; } }
L_00332FA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332FB0u); c.r[7].d[0] = ld8((c.r[10].w[0] + 3u));  if (depth < kMaxDepth) unit_008C(c, 161u, depth + 1u); else { c.pc = 0x00332A20u; return; } if (c.pc != 0x00332FB0u) [[unlikely]] return; }
L_00332FB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003333B8; } }
L_00332FB8:
    c.r[3].d[0] = ld8((c.r[10].w[0] + 4u));
    c.r[2].d[0] = c.r[5].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003333B8; } }
    c.r[8].d[0] = ld8((c.r[10].w[0] + 3u));
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[5], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 7680u);
    set32(c.r[2], c.r[2].w[0] + 7664u);
    set32(c.r[7], c.r[7].w[0] + 7632u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[8].w[0] << 1);
    set32(c.r[6], ld32((c.r[28].w[0] - 22932u)));
    set32(c.r[5], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[4], c.r[6].w[0] - c.r[4].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003333B8; } }
L_00333028:
    c.r[3].d[0] = ld8((c.r[10].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00333040; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003333B8; } }
    c.budget -= 1;
L_00333040:
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 11228u));
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 11228u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003333B8; } }
    c.budget -= 1;
L_00333068:
    c.r[2].d[0] = c.r[9].d[0] & 65535ull;
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[8], 0u + 2u);  if (t) { goto L_003333B8; } }
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[2], c.r[2].w[0] + 7984u);
    set32(c.r[4], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[6].w[0] << 9);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[2], c.r[2].w[0] + 8000u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[2], c.r[2].w[0] + 11216u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[2].w[0] + 54u);
    c.budget -= 14;
L_003330B0:
    set32(c.r[2], c.r[10].w[0] + c.r[8].w[0]);
    c.r[7].d[0] = ld16((c.r[2].w[0]));
    c.r[12].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[11], c.r[7].w[0] << 8);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 8));
    set32(c.r[6], c.r[12].w[0] << 3);
    c.r[11].d[0] = c.r[11].d[0] & 65280ull;
    c.r[7].d[0] = c.r[7].d[0] & 255ull;
    c.r[7].d[0] = c.r[11].d[0] | c.r[7].d[0];
    c.r[11].d[0] = c.r[7].d[0] & 65535ull;
    c.r[7].d[0] = c.r[11].d[0] & 32768ull;
    c.budget -= 13;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);  if (t) { goto L_00333128; } }
    c.budget -= 2;
    { const bool t = c.r[12].d[0] != 0ull; set32(c.r[2], c.r[12].w[0] - 1u);  if (t) { goto L_003330F0; } }
    set32(c.r[2], 0u + 63u);
    c.budget -= 1;
L_003330F0:
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 8));
    set32(c.r[2], c.r[2].w[0] << 3);
    c.r[7].d[0] = c.r[7].d[0] & 127ull;
    set32(c.r[12], c.r[4].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = c.r[7].d[0] | 32768ull;
    c.r[2].d[0] = c.r[11].d[0] & 255ull;
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[11].d[0] = ld16((c.r[12].w[0] + 2u));
    set32(c.r[7], 0u + 2u);
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[11].w[0]));
    st16((c.r[6].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[12].w[0] + 6u));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st16((c.r[6].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00333180; } }
L_00333128:
    c.r[12].d[0] = ld8((c.r[2].w[0]));
    c.r[11].d[0] = ld8((c.r[2].w[0] + 1u));
    set32(c.r[7], 0u + 8u);
    set32(c.r[12], c.r[12].w[0] << 8);
    c.r[11].d[0] = c.r[12].d[0] | c.r[11].d[0];
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[12].d[0] = ld8((c.r[2].w[0] + 2u));
    c.r[11].d[0] = ld8((c.r[2].w[0] + 3u));
    set32(c.r[12], c.r[12].w[0] << 8);
    c.r[11].d[0] = c.r[12].d[0] | c.r[11].d[0];
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[12].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[11].d[0] = ld8((c.r[2].w[0] + 5u));
    set32(c.r[12], c.r[12].w[0] << 8);
    c.r[11].d[0] = c.r[12].d[0] | c.r[11].d[0];
    st16((c.r[6].w[0] + 4u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[2].w[0] + 6u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 7u));
    set32(c.r[11], c.r[11].w[0] << 8);
    c.r[2].d[0] = c.r[11].d[0] | c.r[2].d[0];
    st16((c.r[6].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 22;
L_00333180:
    c.r[2].d[0] = ld16((c.r[5].w[0]));
    c.r[6].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[8], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[9].w[0] - c.r[6].w[0]);
    c.r[9].d[0] = c.r[6].d[0] & 65535ull;
    c.r[1].d[0] = c.r[9].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[5].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003330B0u | kUnwind; return; } goto L_003330B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003333B8; } }
    c.budget -= 1;
L_003331C8:
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[2], c.r[2].w[0] + 7808u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003333B8; } }
    c.budget -= 1;
L_003331F0:
    c.r[4].d[0] = ld16((c.r[28].w[0] - 22936u));
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[8], c.r[28].w[0] - 22940u);
    set32(c.r[6], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[2], c.r[6].w[0] << (c.r[2].w[0] & 31u));
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[8].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[28].w[0] - 22936u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[10].w[0] + 2u));
    c.r[11].d[0] = c.r[3].d[0] & 15ull;
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[3].d[0] = ld8((c.r[10].w[0] + 2u));
    c.r[7].d[0] = ld16((c.r[1].w[0] + 11224u));
    c.r[2].d[0] = ld16((c.r[28].w[0] - 22936u));
    c.r[3].d[0] = c.r[3].d[0] & 240ull;
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.budget -= 20;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));  if (t) { goto L_003333B8; } }
    c.r[9].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[11].d[0] & 255ull;
    set32(c.r[4], 0u + 4u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
L_00333250:
    set32(c.r[2], c.r[6].w[0] << (c.r[9].w[0] & 31u));
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00333288; } }
    c.r[2].d[0] = ld8((c.r[8].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_00333298; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00333280; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_00333298; } }
    c.budget -= 1;
L_00333280:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00333298; } }
L_00333288:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[2].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00333250u | kUnwind; return; } goto L_00333250; } }
L_00333298:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[2].d[0]; c.r[3].d[0] = c.r[11].d[0] & 255ull;  if (t) { goto L_003332B0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00333358; } }
L_003332B0:
    c.r[3].d[0] = c.r[11].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_003332F8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11235u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11233u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003332E8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 11233u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003332F0; } }
L_003332E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11233u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003332F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22944u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00333338; } }
L_003332F8:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00333338; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11234u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11233u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00333330; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 11233u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00333338; } }
    c.budget -= 1;
L_00333330:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 11233u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00333338:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11233u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 11276u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00333358; } }
    st16((c.r[1].w[0] + 11276u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00333358:
    set32(c.r[4], c.r[28].w[0] - 22940u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033336Cu); st16((c.r[28].w[0] - 22936u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0033336Cu) [[unlikely]] return; }
L_0033336C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003333B8; } }
    c.budget -= 1;
L_00333378:
    c.r[3].d[0] = ld8((c.r[10].w[0] + 2u));
    c.r[2].d[0] = c.r[5].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_003333B8; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 11274u));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003333B8; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 11274u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003333B8; } }
    c.budget -= 1;
L_003333B0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003333B8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003333D0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00310150u | kUnwind; return; } [[clang::musttail]] return unit_0084(c, 54u, depth); }
L_003333E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[4].w[0] << 9);
    c.r[8].d[0] = ld16((c.r[1].w[0] + 11224u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << (c.r[16].w[0] & 31u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    set32(c.r[6], 0u + 512u);
    c.r[9].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[2], c.r[2].w[0] + 8000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = ld16((c.r[1].w[0] + 11228u));
    c.r[3].d[0] = c.r[8].d[0] & c.r[9].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = c.r[7].d[0] & c.r[9].d[0];
    st16((c.r[1].w[0] + 11224u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11228u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 11224u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333454u); st16((c.r[1].w[0] + 11280u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00333454u) [[unlikely]] return; }
L_00333454:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + 7984u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00333480:
    set32(c.r[6], 0u + 10u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    mmi::div(c, 0, c.r[5].w[0], c.r[6].w[0]);
    c.r[10].d[0] = c.r[2].d[0] | 26215ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10620000u);
    c.r[9].d[0] = c.r[7].d[0] | 34079ull;
    c.r[8].d[0] = c.r[2].d[0] | 19923ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x68DB0000u);
    set32(c.r[3], c.r[5].w[0] >> 31);
    c.r[7].d[0] = c.r[7].d[0] | 35757ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.r[11].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[10].w[0], c.r[5].w[0]);
    set32(c.r[10], c.r[11].w[0] + 48u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] + 3u);
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 2));
    set32(c.r[10], c.r[10].w[0] + c.r[3].w[0]);
    mmi::div(c, 0, c.r[10].w[0], c.r[6].w[0]);
    c.r[10].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[9].w[0], c.r[5].w[0]);
    set32(c.r[9], c.r[10].w[0] + 48u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = c.hi.d[0];
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 5));
    set32(c.r[9], c.r[9].w[0] + c.r[3].w[0]);
    mmi::div(c, 0, c.r[9].w[0], c.r[6].w[0]);
    c.r[9].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[8].w[0], c.r[5].w[0]);
    set32(c.r[8], c.r[9].w[0] + 48u);
    st8((c.r[4].w[0] - 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] - 2u);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 6));
    set32(c.r[8], c.r[8].w[0] + c.r[3].w[0]);
    mmi::div(c, 0, c.r[8].w[0], c.r[6].w[0]);
    c.r[8].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[7].w[0], c.r[5].w[0]);
    set32(c.r[5], c.r[8].w[0] + 48u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 12));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] + 48u);
    c.budget -= 58;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] - 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00333570:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00333578:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[5].sd[0] < 58ll ? 1ull : 0ull;  if (t) { goto L_003335A0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] - 48u);  if (t) { goto L_003335A0; } }
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_003335A0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00333578u | kUnwind; return; } goto L_00333578; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003335C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[13].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[13].d[0] == 0ull; c.r[8].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003335E0; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_003335E8; } }
    c.budget -= 1;
L_003335E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00333628; } }
L_003335E8:
    c.r[7].d[0] = c.r[6].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003335F4u); c.r[4].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 193u, depth + 1u); else { c.pc = 0x00333570u; return; } if (c.pc != 0x003335F4u) [[unlikely]] return; }
L_003335F4:
    set32(c.r[4], c.r[8].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333600u); set32(c.r[8], c.r[7].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_008C(c, 193u, depth + 1u); else { c.pc = 0x00333570u; return; } if (c.pc != 0x00333600u) [[unlikely]] return; }
L_00333600:
    set32(c.r[12], c.r[7].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333610u); c.r[4].d[0] = c.r[13].d[0] + 0ull;  if (depth < kMaxDepth) unit_008C(c, 192u, depth + 1u); else { c.pc = 0x00333480u; return; } if (c.pc != 0x00333610u) [[unlikely]] return; }
L_00333610:
    c.r[5].d[0] = c.r[12].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033361Cu); set32(c.r[4], c.r[13].w[0] + 5u);  if (depth < kMaxDepth) unit_008C(c, 192u, depth + 1u); else { c.pc = 0x00333480u; return; } if (c.pc != 0x0033361Cu) [[unlikely]] return; }
L_0033361C:
    st8((c.r[13].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00333628:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00333640:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] < 0; set32(c.r[5], c.r[4].w[0] >> 1);  if (t) { goto L_0033365C; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00333674; } }
L_0033365C:
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00333674:
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[28].w[0] - 22608u), 0u);
    st32((c.r[28].w[0] - 22612u), c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 22604u), c.f[0]);  c.pc = t; return; }
L_003336A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 516u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003337C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003336DCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008C(c, 205u, depth + 1u); else { c.pc = 0x003337F0u; return; } if (c.pc != 0x003336DCu) [[unlikely]] return; }
L_003336DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003337C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003336ECu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_008C(c, 205u, depth + 1u); else { c.pc = 0x003337F0u; return; } if (c.pc != 0x003336ECu) [[unlikely]] return; }
L_003336EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00333708; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003336FCu);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003336FCu) [[unlikely]] return; }
L_003336FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003337C8; } }
    c.budget -= 1;
L_00333708:
    set32(c.r[3], c.r[28].w[0] - 22608u);
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[19].sd[0] < 0; st32((c.r[2].w[0] + 24u), c.r[16].w[0]);  if (t) { goto L_00333728; } }
    c.f[0] = c.r[19].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00333744; } }
L_00333728:
    set32(c.r[4], c.r[19].w[0] >> 1);
    c.r[3].d[0] = c.r[19].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_00333744:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] < 0; st32((c.r[16].w[0] + 32u), c.f[0]);  if (t) { goto L_00333758; } }
    c.f[0] = c.r[18].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00333774; } }
L_00333758:
    set32(c.r[4], c.r[18].w[0] >> 1);
    c.r[3].d[0] = c.r[18].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_00333774:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = c.r[17].sd[0] < 0; st32((c.r[16].w[0] + 36u), c.f[0]);  if (t) { goto L_00333790; } }
    c.f[0] = c.r[17].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003337AC; } }
L_00333790:
    set32(c.r[4], c.r[17].w[0] >> 1);
    c.r[3].d[0] = c.r[17].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_003337AC:
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[28].w[0] - 22608u), 0u);
    st32((c.r[28].w[0] - 22612u), c.r[3].w[0]);
    st32((c.r[28].w[0] - 22604u), c.f[0]);
    c.budget -= 7;
L_003337C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003337F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333810u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x00333810u) [[unlikely]] return; }
L_00333810:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00333860; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[5], 0u + 20u);
    set32(c.r[4], 0u + 48u);
    set32(c.r[3], c.r[3].w[0] + 14784u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 212u)));
    st32((c.r[2].w[0] + 304u), c.r[3].w[0]);
    c.budget -= 18;
L_00333860:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00333870:
    c.f[2] = ld32((c.r[28].w[0] - 22608u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003338B0; } }
    c.f[1] = ld32((c.r[28].w[0] - 22604u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[28].w[0] - 22608u), c.f[1]);  if (t) { goto L_003338B0; } }
    st32((c.r[28].w[0] - 22608u), c.f[0]);
    c.budget -= 1;
L_003338B0:
    c.f[1] = ld32((c.r[28].w[0] - 22612u));
    c.f[0] = ld32((c.r[28].w[0] - 22608u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003338C8; } }
    st32((c.r[28].w[0] - 22608u), c.f[1]);
    c.budget -= 1;
L_003338C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003338D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 22608u), c.r[3].w[0]);  c.pc = t; return; }
L_003338E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 22608u), c.r[3].w[0]);  c.pc = t; return; }
L_003338F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[28].w[0] - 22608u));  c.pc = t; return; }
L_00333900:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[28].w[0] - 22612u), c.f[12]);  if (t) { goto L_00333918; } }
    st32((c.r[28].w[0] - 22612u), c.f[0]);
    c.budget -= 1;
L_00333918:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = ld32((c.r[28].w[0] - 22612u));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00333938; } }
    st32((c.r[28].w[0] - 22612u), c.f[0]);
    c.budget -= 1;
L_00333938:
    c.f[1] = ld32((c.r[28].w[0] - 22612u));
    c.f[0] = ld32((c.r[28].w[0] - 22608u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00333950; } }
    st32((c.r[28].w[0] - 22608u), c.f[1]);
    c.budget -= 1;
L_00333950:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00333960:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[28].w[0] - 22608u), c.f[12]);  if (t) { goto L_00333978; } }
    st32((c.r[28].w[0] - 22608u), c.f[0]);
    c.budget -= 1;
L_00333978:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = ld32((c.r[28].w[0] - 22608u));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00333998; } }
    st32((c.r[28].w[0] - 22608u), c.f[0]);
    c.budget -= 1;
L_00333998:
    c.f[1] = ld32((c.r[28].w[0] - 22612u));
    c.f[0] = ld32((c.r[28].w[0] - 22608u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003339B0; } }
    st32((c.r[28].w[0] - 22608u), c.f[1]);
    c.budget -= 1;
L_003339B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003339C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 1048u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00330000u < 16384u) { entry = entries_008C[(t - 0x00330000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003339E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00330000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] + 15520u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = c.r[6].w[0];
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], 0u + 7u);
    set32(c.r[7], c.r[7].w[0] + 36u);
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 19;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00333A80; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333A40u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_0005(c, 46u, depth + 1u); else { c.pc = 0x001158E0u; return; } if (c.pc != 0x00333A40u) [[unlikely]] return; }
L_00333A40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0600000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] | 57344ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333A58u); mmi::pcpyld(c.r[4], c.r[0], c.r[2]);  if (depth < kMaxDepth) unit_0005(c, 55u, depth + 1u); else { c.pc = 0x00115D18u; return; } if (c.pc != 0x00333A58u) [[unlikely]] return; }
L_00333A58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333A60u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 92u, depth + 1u); else { c.pc = 0x00116498u; return; } if (c.pc != 0x00333A60u) [[unlikely]] return; }
L_00333A60:
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    st32((c.r[16].w[0] + 112u), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 116u), c.r[3].w[0]);  if (t) { goto L_00333A90; } }
    c.budget -= 1;
L_00333A80:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 112u), c.f[0]);
    st32((c.r[16].w[0] + 116u), c.f[0]);
    c.budget -= 4;
L_00333A90:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00333AB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00333AF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333AE4u);  if (depth < kMaxDepth) unit_008D(c, 11u, depth + 1u); else { c.pc = 0x003340F0u; return; } if (c.pc != 0x00333AE4u) [[unlikely]] return; }
L_00333AE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00333B48; } }
    c.budget -= 1;
L_00333AF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[17], ld32((c.r[16].w[0] + 24u)));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333B10u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_0005(c, 46u, depth + 1u); else { c.pc = 0x001158E0u; return; } if (c.pc != 0x00333B10u) [[unlikely]] return; }
L_00333B10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0600000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] | 57344ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333B28u); mmi::pcpyld(c.r[4], c.r[0], c.r[2]);  if (depth < kMaxDepth) unit_0005(c, 55u, depth + 1u); else { c.pc = 0x00115D18u; return; } if (c.pc != 0x00333B28u) [[unlikely]] return; }
L_00333B28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333B30u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 92u, depth + 1u); else { c.pc = 0x00116498u; return; } if (c.pc != 0x00333B30u) [[unlikely]] return; }
L_00333B30:
    st32((c.r[16].w[0] + 32u), c.f[0]);
    set32(c.r[3], 0u + 2u);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_00333B48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00333B60:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 28u)));
    c.f[1] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00333BA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333B94u);  if (depth < kMaxDepth) unit_008D(c, 11u, depth + 1u); else { c.pc = 0x003340F0u; return; } if (c.pc != 0x00333B94u) [[unlikely]] return; }
L_00333B94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00333C88; } }
    c.budget -= 1;
L_00333BA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333BA8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00333BA8u) [[unlikely]] return; }
L_00333BA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333BB8u);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x00333BB8u) [[unlikely]] return; }
L_00333BB8:
    c.f[1] = ld32((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00333BE4; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00333BFC; } }
L_00333BE4:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 6;
L_00333BFC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[6].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333C10u); set32(c.r[5], c.r[5].w[0] - 2968u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x00333C10u) [[unlikely]] return; }
L_00333C10:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333C1Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0099(c, 26u, depth + 1u); else { c.pc = 0x00364550u; return; } if (c.pc != 0x00333C1Cu) [[unlikely]] return; }
L_00333C1C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333C2Cu); set32(c.r[5], c.r[5].w[0] - 2960u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x00333C2Cu) [[unlikely]] return; }
L_00333C2C:
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[5], 0u + 272u);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    set32(c.r[3], 0u + 212u);
    c.f[14] = 0u;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.f[0]);
    c.f[0] = c.r[5].w[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.f[12] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.f[0] = c.r[3].w[0];
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333C80u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 94u, depth + 1u); else { c.pc = 0x00335170u; return; } if (c.pc != 0x00333C80u) [[unlikely]] return; }
L_00333C80:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00333C88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00333CA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333CC4u); set32(c.r[16], c.r[18].w[0] + 304u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00333CC4u) [[unlikely]] return; }
L_00333CC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333CCCu); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x00333CCCu) [[unlikely]] return; }
L_00333CCC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = ld32((c.r[18].w[0] + 116u));
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333CE0u); c.f[12] = ld32((c.r[18].w[0] + 112u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00333CE0u) [[unlikely]] return; }
L_00333CE0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[17].w[0] << 4);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333D04u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 32u, depth + 1u); else { c.pc = 0x002D8800u; return; } if (c.pc != 0x00333D04u) [[unlikely]] return; }
L_00333D04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00333D20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = ld8((c.r[4].w[0] + 310u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333D44u); set32(c.r[16], c.r[18].w[0] + 304u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00333D44u) [[unlikely]] return; }
L_00333D44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333D4Cu); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x00333D4Cu) [[unlikely]] return; }
L_00333D4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = ld32((c.r[18].w[0] + 116u));
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333D60u); c.f[12] = ld32((c.r[18].w[0] + 112u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00333D60u) [[unlikely]] return; }
L_00333D60:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[17].w[0] << 4);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333D84u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 32u, depth + 1u); else { c.pc = 0x002D8800u; return; } if (c.pc != 0x00333D84u) [[unlikely]] return; }
L_00333D84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00333DA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = ld8((c.r[4].w[0] + 310u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333DBCu); set32(c.r[16], c.r[4].w[0] + 304u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00333DBCu) [[unlikely]] return; }
L_00333DBC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[17].w[0] << 4);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[6], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333DDCu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00333DDCu) [[unlikely]] return; }
L_00333DDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00333DF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = ld8((c.r[4].w[0] + 310u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333E14u); set32(c.r[16], c.r[18].w[0] + 304u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00333E14u) [[unlikely]] return; }
L_00333E14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333E1Cu); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x00333E1Cu) [[unlikely]] return; }
L_00333E1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = ld32((c.r[18].w[0] + 116u));
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333E30u); c.f[12] = ld32((c.r[18].w[0] + 112u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00333E30u) [[unlikely]] return; }
L_00333E30:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[17].w[0] << 4);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[6], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333E50u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00333E50u) [[unlikely]] return; }
L_00333E50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00333E70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = ld8((c.r[4].w[0] + 310u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333E94u); set32(c.r[16], c.r[18].w[0] + 304u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00333E94u) [[unlikely]] return; }
L_00333E94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333E9Cu); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x00333E9Cu) [[unlikely]] return; }
L_00333E9C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[17].w[0] << 4);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[6], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333EBCu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00333EBCu) [[unlikely]] return; }
L_00333EBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00333EE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 312u));
    c.r[17].d[0] = ld8((c.r[4].w[0] + 310u));
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[16], c.r[18].w[0] + 304u);  if (t) { goto L_00333F18; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00333F34; } }
L_00333F18:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_00333F34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333F54u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00333F54u) [[unlikely]] return; }
L_00333F54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333F5Cu); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x00333F5Cu) [[unlikely]] return; }
L_00333F5C:
    set32(c.r[2], c.r[17].w[0] << 4);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[3], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.f[12] = c.f[20];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333F7Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 18u, depth + 1u); else { c.pc = 0x002D8380u; return; } if (c.pc != 0x00333F7Cu) [[unlikely]] return; }
L_00333F7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00333FA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 312u));
    c.r[17].d[0] = ld8((c.r[4].w[0] + 310u));
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[16], c.r[18].w[0] + 304u);  if (t) { goto L_00333FD8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00333FF4; } }
L_00333FD8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_00333FF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    [[clang::musttail]] return unit_008D(c, 1u, depth);
}

}
