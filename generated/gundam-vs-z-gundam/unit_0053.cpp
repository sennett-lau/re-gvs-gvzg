#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0053[4096] = {
    1, 2, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0,
    19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0,
    0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0,
    45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0,
    0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0,
    69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0,
    0, 0, 79, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0,
    96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0,
    0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113,
    0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 127, 0, 128, 0, 129, 0, 0, 0, 130,
    0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 137,
    0, 138, 0, 0, 139, 0, 140, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 145, 0, 146, 0, 0,
    147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 153, 0, 154, 0, 0, 155, 0, 156, 0, 0, 157, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0,
    0, 164, 0, 165, 0, 0, 166, 0, 167, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 0, 172, 0, 173,
    0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0,
    0, 0, 182, 0, 183, 0, 184, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 193, 0, 0, 194, 0, 195, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0,
    0, 0, 198, 0, 199, 0, 0, 200, 0, 201, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204,
    0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0, 208, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217,
    0, 218, 0, 0, 219, 0, 220, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 224, 0, 0, 225, 0, 226, 0, 0,
    227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 237, 0, 0, 238, 0, 239, 0, 0, 240, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0,
    0, 246, 0, 247, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    251, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 256, 0, 257, 0, 0, 258,
    0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 263, 0, 264, 0, 0, 0, 265, 0, 0, 0,
    0, 0, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270,
    0, 0, 271, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0,
    0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0,
    295, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299,
    0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 302, 0, 303, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 306,
    0, 307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 314, 0, 0, 0, 315, 0, 0, 316, 0, 317, 0, 0, 0, 0, 0, 318, 0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 326, 0, 0, 0, 327, 0, 0, 328, 0,
    329, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 0, 333, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0,
    0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0,
    0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 345, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0053(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0024C000;
    case 2u: goto L_0024C004;
    case 3u: goto L_0024C008;
    case 4u: goto L_0024C020;
    case 5u: goto L_0024C050;
    case 6u: goto L_0024C058;
    case 7u: goto L_0024C070;
    case 8u: goto L_0024C0B4;
    case 9u: goto L_0024C0E8;
    case 10u: goto L_0024C100;
    case 11u: goto L_0024C110;
    case 12u: goto L_0024C120;
    case 13u: goto L_0024C238;
    case 14u: goto L_0024C250;
    case 15u: goto L_0024C270;
    case 16u: goto L_0024C2B4;
    case 17u: goto L_0024C3C8;
    case 18u: goto L_0024C3E0;
    case 19u: goto L_0024C400;
    case 20u: goto L_0024C440;
    case 21u: goto L_0024C454;
    case 22u: goto L_0024C4D8;
    case 23u: goto L_0024C528;
    case 24u: goto L_0024C5C8;
    case 25u: goto L_0024C5DC;
    case 26u: goto L_0024C5F4;
    case 27u: goto L_0024C604;
    case 28u: goto L_0024C63C;
    case 29u: goto L_0024C680;
    case 30u: goto L_0024C6AC;
    case 31u: goto L_0024C6BC;
    case 32u: goto L_0024C720;
    case 33u: goto L_0024C764;
    case 34u: goto L_0024C78C;
    case 35u: goto L_0024C7A4;
    case 36u: goto L_0024C7CC;
    case 37u: goto L_0024C7E4;
    case 38u: goto L_0024C800;
    case 39u: goto L_0024C810;
    case 40u: goto L_0024C81C;
    case 41u: goto L_0024C82C;
    case 42u: goto L_0024C840;
    case 43u: goto L_0024C860;
    case 44u: goto L_0024C86C;
    case 45u: goto L_0024C880;
    case 46u: goto L_0024C8A0;
    case 47u: goto L_0024C8C0;
    case 48u: goto L_0024C908;
    case 49u: goto L_0024C930;
    case 50u: goto L_0024C988;
    case 51u: goto L_0024C9A0;
    case 52u: goto L_0024CB18;
    case 53u: goto L_0024CB30;
    case 54u: goto L_0024CC90;
    case 55u: goto L_0024CCA8;
    case 56u: goto L_0024CD60;
    case 57u: goto L_0024CD70;
    case 58u: goto L_0024CD90;
    case 59u: goto L_0024CDB0;
    case 60u: goto L_0024CDCC;
    case 61u: goto L_0024CF00;
    case 62u: goto L_0024CF10;
    case 63u: goto L_0024CFE8;
    case 64u: goto L_0024D014;
    case 65u: goto L_0024D0C8;
    case 66u: goto L_0024D104;
    case 67u: goto L_0024D1CC;
    case 68u: goto L_0024D1F0;
    case 69u: goto L_0024D200;
    case 70u: goto L_0024D248;
    case 71u: goto L_0024D260;
    case 72u: goto L_0024D288;
    case 73u: goto L_0024D374;
    case 74u: goto L_0024D3B0;
    case 75u: goto L_0024D3C8;
    case 76u: goto L_0024D3D0;
    case 77u: goto L_0024D3E8;
    case 78u: goto L_0024D3F0;
    case 79u: goto L_0024D408;
    case 80u: goto L_0024D410;
    case 81u: goto L_0024D420;
    case 82u: goto L_0024D4B4;
    case 83u: goto L_0024D4E0;
    case 84u: goto L_0024D55C;
    case 85u: goto L_0024D608;
    case 86u: goto L_0024D620;
    case 87u: goto L_0024D660;
    case 88u: goto L_0024D6A0;
    case 89u: goto L_0024D728;
    case 90u: goto L_0024D968;
    case 91u: goto L_0024D9A8;
    case 92u: goto L_0024D9C0;
    case 93u: goto L_0024D9C8;
    case 94u: goto L_0024D9E0;
    case 95u: goto L_0024D9E8;
    case 96u: goto L_0024DA00;
    case 97u: goto L_0024DA08;
    case 98u: goto L_0024DA40;
    case 99u: goto L_0024DA50;
    case 100u: goto L_0024DAD4;
    case 101u: goto L_0024DAF0;
    case 102u: goto L_0024DB18;
    case 103u: goto L_0024DC64;
    case 104u: goto L_0024DC74;
    case 105u: goto L_0024DC84;
    case 106u: goto L_0024DCC0;
    case 107u: goto L_0024DD28;
    case 108u: goto L_0024DD38;
    case 109u: goto L_0024DD48;
    case 110u: goto L_0024DD58;
    case 111u: goto L_0024DD70;
    case 112u: goto L_0024DDC8;
    case 113u: goto L_0024DDFC;
    case 114u: goto L_0024DE0C;
    case 115u: goto L_0024DE44;
    case 116u: goto L_0024DEB0;
    case 117u: goto L_0024DF00;
    case 118u: goto L_0024DF0C;
    case 119u: goto L_0024DF2C;
    case 120u: goto L_0024DF38;
    case 121u: goto L_0024E000;
    case 122u: goto L_0024E044;
    case 123u: goto L_0024E060;
    case 124u: goto L_0024E0C0;
    case 125u: goto L_0024E144;
    case 126u: goto L_0024E14C;
    case 127u: goto L_0024E15C;
    case 128u: goto L_0024E164;
    case 129u: goto L_0024E16C;
    case 130u: goto L_0024E17C;
    case 131u: goto L_0024E184;
    case 132u: goto L_0024E1C8;
    case 133u: goto L_0024E26C;
    case 134u: goto L_0024E27C;
    case 135u: goto L_0024E2D8;
    case 136u: goto L_0024E2E8;
    case 137u: goto L_0024E2FC;
    case 138u: goto L_0024E304;
    case 139u: goto L_0024E310;
    case 140u: goto L_0024E318;
    case 141u: goto L_0024E324;
    case 142u: goto L_0024E334;
    case 143u: goto L_0024E358;
    case 144u: goto L_0024E360;
    case 145u: goto L_0024E36C;
    case 146u: goto L_0024E374;
    case 147u: goto L_0024E380;
    case 148u: goto L_0024E390;
    case 149u: goto L_0024E3CC;
    case 150u: goto L_0024E3DC;
    case 151u: goto L_0024E428;
    case 152u: goto L_0024E438;
    case 153u: goto L_0024E448;
    case 154u: goto L_0024E450;
    case 155u: goto L_0024E45C;
    case 156u: goto L_0024E464;
    case 157u: goto L_0024E470;
    case 158u: goto L_0024E568;
    case 159u: goto L_0024E570;
    case 160u: goto L_0024E5B0;
    case 161u: goto L_0024E644;
    case 162u: goto L_0024E654;
    case 163u: goto L_0024E660;
    case 164u: goto L_0024E684;
    case 165u: goto L_0024E68C;
    case 166u: goto L_0024E698;
    case 167u: goto L_0024E6A0;
    case 168u: goto L_0024E6AC;
    case 169u: goto L_0024E6BC;
    case 170u: goto L_0024E6E0;
    case 171u: goto L_0024E6E8;
    case 172u: goto L_0024E6F4;
    case 173u: goto L_0024E6FC;
    case 174u: goto L_0024E708;
    case 175u: goto L_0024E744;
    case 176u: goto L_0024E754;
    case 177u: goto L_0024E930;
    case 178u: goto L_0024E938;
    case 179u: goto L_0024E990;
    case 180u: goto L_0024E9F0;
    case 181u: goto L_0024E9F8;
    case 182u: goto L_0024EA08;
    case 183u: goto L_0024EA10;
    case 184u: goto L_0024EA18;
    case 185u: goto L_0024EA28;
    case 186u: goto L_0024EA30;
    case 187u: goto L_0024EA78;
    case 188u: goto L_0024EB1C;
    case 189u: goto L_0024EB2C;
    case 190u: goto L_0024EB88;
    case 191u: goto L_0024EB98;
    case 192u: goto L_0024EBAC;
    case 193u: goto L_0024EBB4;
    case 194u: goto L_0024EBC0;
    case 195u: goto L_0024EBC8;
    case 196u: goto L_0024EBD4;
    case 197u: goto L_0024EBE4;
    case 198u: goto L_0024EC08;
    case 199u: goto L_0024EC10;
    case 200u: goto L_0024EC1C;
    case 201u: goto L_0024EC24;
    case 202u: goto L_0024EC30;
    case 203u: goto L_0024EC40;
    case 204u: goto L_0024EC7C;
    case 205u: goto L_0024EC8C;
    case 206u: goto L_0024ECC0;
    case 207u: goto L_0024ECC8;
    case 208u: goto L_0024ECD4;
    case 209u: goto L_0024ECDC;
    case 210u: goto L_0024ECE8;
    case 211u: goto L_0024EDE0;
    case 212u: goto L_0024EDE8;
    case 213u: goto L_0024EE28;
    case 214u: goto L_0024EEBC;
    case 215u: goto L_0024EECC;
    case 216u: goto L_0024EED8;
    case 217u: goto L_0024EEFC;
    case 218u: goto L_0024EF04;
    case 219u: goto L_0024EF10;
    case 220u: goto L_0024EF18;
    case 221u: goto L_0024EF24;
    case 222u: goto L_0024EF34;
    case 223u: goto L_0024EF58;
    case 224u: goto L_0024EF60;
    case 225u: goto L_0024EF6C;
    case 226u: goto L_0024EF74;
    case 227u: goto L_0024EF80;
    case 228u: goto L_0024F0B0;
    case 229u: goto L_0024F0B8;
    case 230u: goto L_0024F110;
    case 231u: goto L_0024F12C;
    case 232u: goto L_0024F138;
    case 233u: goto L_0024F140;
    case 234u: goto L_0024F150;
    case 235u: goto L_0024F1B8;
    case 236u: goto L_0024F1C0;
    case 237u: goto L_0024F1D0;
    case 238u: goto L_0024F1DC;
    case 239u: goto L_0024F1E4;
    case 240u: goto L_0024F1F0;
    case 241u: goto L_0024F228;
    case 242u: goto L_0024F23C;
    case 243u: goto L_0024F244;
    case 244u: goto L_0024F268;
    case 245u: goto L_0024F278;
    case 246u: goto L_0024F284;
    case 247u: goto L_0024F28C;
    case 248u: goto L_0024F298;
    case 249u: goto L_0024F2A8;
    case 250u: goto L_0024F2B8;
    case 251u: goto L_0024F300;
    case 252u: goto L_0024F308;
    case 253u: goto L_0024F32C;
    case 254u: goto L_0024F34C;
    case 255u: goto L_0024F35C;
    case 256u: goto L_0024F368;
    case 257u: goto L_0024F370;
    case 258u: goto L_0024F37C;
    case 259u: goto L_0024F390;
    case 260u: goto L_0024F3A4;
    case 261u: goto L_0024F3BC;
    case 262u: goto L_0024F3CC;
    case 263u: goto L_0024F3D8;
    case 264u: goto L_0024F3E0;
    case 265u: goto L_0024F3F0;
    case 266u: goto L_0024F40C;
    case 267u: goto L_0024F414;
    case 268u: goto L_0024F434;
    case 269u: goto L_0024F46C;
    case 270u: goto L_0024F47C;
    case 271u: goto L_0024F488;
    case 272u: goto L_0024F490;
    case 273u: goto L_0024F49C;
    case 274u: goto L_0024F570;
    case 275u: goto L_0024F5A8;
    case 276u: goto L_0024F5D8;
    case 277u: goto L_0024F5F4;
    case 278u: goto L_0024F6C0;
    case 279u: goto L_0024F6E0;
    case 280u: goto L_0024F70C;
    case 281u: goto L_0024F720;
    case 282u: goto L_0024F758;
    case 283u: goto L_0024F784;
    case 284u: goto L_0024F798;
    case 285u: goto L_0024F7BC;
    case 286u: goto L_0024F7DC;
    case 287u: goto L_0024F7F0;
    case 288u: goto L_0024F814;
    case 289u: goto L_0024F840;
    case 290u: goto L_0024F850;
    case 291u: goto L_0024F868;
    case 292u: goto L_0024F8B0;
    case 293u: goto L_0024F8BC;
    case 294u: goto L_0024F8E0;
    case 295u: goto L_0024F900;
    case 296u: goto L_0024F924;
    case 297u: goto L_0024F950;
    case 298u: goto L_0024F960;
    case 299u: goto L_0024F97C;
    case 300u: goto L_0024F994;
    case 301u: goto L_0024F9A4;
    case 302u: goto L_0024F9B0;
    case 303u: goto L_0024F9B8;
    case 304u: goto L_0024F9C8;
    case 305u: goto L_0024F9D8;
    case 306u: goto L_0024F9FC;
    case 307u: goto L_0024FA04;
    case 308u: goto L_0024FA24;
    case 309u: goto L_0024FA68;
    case 310u: goto L_0024FAB0;
    case 311u: goto L_0024FABC;
    case 312u: goto L_0024FAE0;
    case 313u: goto L_0024FB40;
    case 314u: goto L_0024FB84;
    case 315u: goto L_0024FB94;
    case 316u: goto L_0024FBA0;
    case 317u: goto L_0024FBA8;
    case 318u: goto L_0024FBC0;
    case 319u: goto L_0024FBC8;
    case 320u: goto L_0024FBE4;
    case 321u: goto L_0024FC20;
    case 322u: goto L_0024FC88;
    case 323u: goto L_0024FCA0;
    case 324u: goto L_0024FCB4;
    case 325u: goto L_0024FCD4;
    case 326u: goto L_0024FCDC;
    case 327u: goto L_0024FCEC;
    case 328u: goto L_0024FCF8;
    case 329u: goto L_0024FD00;
    case 330u: goto L_0024FD0C;
    case 331u: goto L_0024FD28;
    case 332u: goto L_0024FD30;
    case 333u: goto L_0024FD40;
    case 334u: goto L_0024FD48;
    case 335u: goto L_0024FD64;
    case 336u: goto L_0024FDA0;
    case 337u: goto L_0024FDF8;
    case 338u: goto L_0024FE04;
    case 339u: goto L_0024FE24;
    case 340u: goto L_0024FE38;
    case 341u: goto L_0024FE4C;
    case 342u: goto L_0024FE5C;
    case 343u: goto L_0024FE70;
    case 344u: goto L_0024FE90;
    case 345u: goto L_0024FF04;
    case 346u: goto L_0024FF10;
    case 347u: goto L_0024FF38;
    case 348u: goto L_0024FF44;
    case 349u: goto L_0024FF58;
    case 350u: goto L_0024FF6C;
    case 351u: goto L_0024FFB0;
    case 352u: goto L_0024FFC0;
    default: bad_entry(c, 0x0024C000u); return;
    }
L_0024C000:
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 1;
L_0024C004:
    c.budget -= 1;
L_0024C008:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0024C100; } }
L_0024C020:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 560u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_0024C038; } }
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0024C038:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0024C100; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C050u);  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x0024C050u) [[unlikely]] return; }
L_0024C050:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024C100; } }
L_0024C058:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024C078; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C070u);  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x0024C070u) [[unlikely]] return; }
L_0024C070:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024C100; } }
L_0024C078:
    set32(c.r[4], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024C100; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 515u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 515u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0024C100; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024C100; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0024C100; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C0B4u);  if (depth < kMaxDepth) unit_0025(c, 60u, depth + 1u); else { c.pc = 0x00195400u; return; } if (c.pc != 0x0024C0B4u) [[unlikely]] return; }
L_0024C0B4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0024C100; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024C100; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0024C100; } }
L_0024C0E8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024C100; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C100u);  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x0024C100u) [[unlikely]] return; }
L_0024C100:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024C110:
    set32(c.r[3], 0u + 6u);
    st8((c.r[4].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0024C120:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 17u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[8], 0u + 256u);  if (t) { goto L_0024C13C; } }
    set32(c.r[8], 0u + 768u);
    c.budget -= 1;
L_0024C13C:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1805u)));
    set32(c.r[6], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_0024C220; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0024C1E8; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_0024C188; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0024C170; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024C238; } }
    c.budget -= 1;
L_0024C170:
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 1808u));
    c.r[5].d[0] = c.r[8].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0024C238; } }
L_0024C188:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024C1E0; } }
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[5].d[0] = ld16((c.r[4].w[0] + 1808u));
    c.r[6].d[0] = c.r[8].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] - 5136u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8660u)));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024C238; } }
    c.budget -= 1;
L_0024C1E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0024C238; } }
L_0024C1E8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024C200; } }
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0024C238; } }
L_0024C200:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[8].d[0] & 65535ull;
    c.r[3].d[0] = ld16((c.r[4].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0024C238; } }
    c.budget -= 1;
L_0024C220:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024C238; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C238u);  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x0024C238u) [[unlikely]] return; }
L_0024C238:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0024C250:
    set32(c.r[3], 0u + 7u);
    st8((c.r[4].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0024C270:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1805u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_0024C388; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0024C338; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024C2A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024C3C8; } }
L_0024C2A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024C2C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C2B4u);  if (depth < kMaxDepth) unit_0052(c, 133u, depth + 1u); else { c.pc = 0x00249900u; return; } if (c.pc != 0x0024C2B4u) [[unlikely]] return; }
L_0024C2B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024C3C8; } }
    c.budget -= 1;
L_0024C2C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1806u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0024C318; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0024C308; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024C2E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024C3C8; } }
    c.budget -= 1;
L_0024C2E8:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 1926u));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0024C3C8; } }
    c.budget -= 1;
L_0024C308:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024C3C8; } }
    c.budget -= 1;
L_0024C318:
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 1926u));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0024C3C8; } }
    c.budget -= 1;
L_0024C338:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024C378; } }
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], 0u + 18u);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 45u);  if (t) { goto L_0024C368; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024C3C8; } }
    c.budget -= 1;
L_0024C368:
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024C3C8; } }
    c.budget -= 1;
L_0024C378:
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0024C3C8; } }
    c.budget -= 1;
L_0024C388:
    c.r[5].d[0] = ld16((c.r[4].w[0] + 1926u));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1812u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024C3C0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024C3C8; } }
L_0024C3C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C3C8u);  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x0024C3C8u) [[unlikely]] return; }
L_0024C3C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0024C3E0:
    set32(c.r[3], 0u + 8u);
    st8((c.r[4].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0024C400:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1805u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0024CD70; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 18176u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0024C000u < 16384u) { entry = entries_0053[(t - 0x0024C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0024C440:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024C460; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C454u);  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x0024C454u) [[unlikely]] return; }
L_0024C454:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024CD70; } }
    c.budget -= 1;
L_0024C460:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1806u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0024C4B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0024C4A8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024C488; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024CD70; } }
L_0024C488:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[18].w[0] + 1926u));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0024CD70; } }
    c.budget -= 1;
L_0024C4A8:
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024CD70; } }
    c.budget -= 1;
L_0024C4B8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = ld16((c.r[18].w[0] + 1926u));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0024CD70; } }
L_0024C4D8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_0024C518; } }
    set32(c.r[3], 0u + 18u);
    st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[18].w[0] + 8658u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 45u);  if (t) { goto L_0024C508; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024CD70; } }
    c.budget -= 1;
L_0024C508:
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024CD70; } }
    c.budget -= 1;
L_0024C518:
    st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0024CD70; } }
    c.budget -= 1;
L_0024C528:
    c.r[5].d[0] = ld16((c.r[18].w[0] + 1926u));
    c.r[4].d[0] = ld16((c.r[18].w[0] + 1808u));
    set32(c.r[3], 0u + 17u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[18].w[0] + 8658u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0024C620; } }
    set32(c.r[3], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0024C620; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1820u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024C620; } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], c.r[4].w[0] << 4);  if (t) { goto L_0024C58C; } }
    set32(c.r[3], c.r[4].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 14768u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 88u);  if (t) { goto L_0024C5A4; } }
L_0024C58C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 14768u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 96u);
    c.budget -= 6;
L_0024C5A4:
    c.f[12] = ld32((c.r[2].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 49152ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C5C8u); c.f[12] = fp::mul(c.f[12], c.f[0]);  if (depth < kMaxDepth) unit_0025(c, 99u, depth + 1u); else { c.pc = 0x00196000u; return; } if (c.pc != 0x0024C5C8u) [[unlikely]] return; }
L_0024C5C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024C610; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C5DCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 116u, depth + 1u); else { c.pc = 0x0024DEB0u; return; } if (c.pc != 0x0024C5DCu) [[unlikely]] return; }
L_0024C5DC:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0024C620; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C5F4u); st32((c.r[18].w[0] + 1920u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0053(c, 106u, depth + 1u); else { c.pc = 0x0024DCC0u; return; } if (c.pc != 0x0024C5F4u) [[unlikely]] return; }
L_0024C5F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0024C620; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C604u);  if (depth < kMaxDepth) unit_0053(c, 61u, depth + 1u); else { c.pc = 0x0024CF00u; return; } if (c.pc != 0x0024C604u) [[unlikely]] return; }
L_0024C604:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_0024C620; } }
    c.budget -= 1;
L_0024C610:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1820u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 1820u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0024C620:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0024C958; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1924u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0024C950; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C63Cu);  if (depth < kMaxDepth) unit_0026(c, 204u, depth + 1u); else { c.pc = 0x0019B410u; return; } if (c.pc != 0x0024C63Cu) [[unlikely]] return; }
L_0024C63C:
    set32(c.r[16], ld32((c.r[18].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0024C958; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0024C664; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));  if (t) { goto L_0024C66C; } }
L_0024C664:
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 2;
L_0024C66C:
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024C690; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C680u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 60u, depth + 1u); else { c.pc = 0x00195400u; return; } if (c.pc != 0x0024C680u) [[unlikely]] return; }
L_0024C680:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0024C6A0; } }
    c.budget -= 1;
L_0024C690:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[3], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0024C958; } }
L_0024C6A0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C6ACu); st32((c.r[18].w[0] + 1920u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0053(c, 106u, depth + 1u); else { c.pc = 0x0024DCC0u; return; } if (c.pc != 0x0024C6ACu) [[unlikely]] return; }
L_0024C6AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0024C958; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C6BCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 116u, depth + 1u); else { c.pc = 0x0024DEB0u; return; } if (c.pc != 0x0024C6BCu) [[unlikely]] return; }
L_0024C6BC:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024C958; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 8658u));
    set32(c.r[3], 0u + 37u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 23u);  if (t) { goto L_0024C8A8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0024C7D8; } }
    set32(c.r[3], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 17u);  if (t) { goto L_0024C798; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0024C758; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024C708; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024C8F8; } }
L_0024C708:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8659u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0024C8F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C720u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 141u, depth + 1u); else { c.pc = 0x00196C20u; return; } if (c.pc != 0x0024C720u) [[unlikely]] return; }
L_0024C720:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], 0u + 3u);  if (t) { goto L_0024C750; } }
    set32(c.r[3], 0u + 20u);
    st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[17], 0u + 1u);
    st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1819u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024C8F8; } }
L_0024C750:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u - 1u);  if (t) { goto L_0024C8F8; } }
L_0024C758:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C764u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 276u, depth + 1u); else { c.pc = 0x003C6520u; return; } if (c.pc != 0x0024C764u) [[unlikely]] return; }
L_0024C764:
    c.r[4].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0024C8F8; } }
    set32(c.r[2], 0u + 7u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C78Cu); st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0026(c, 188u, depth + 1u); else { c.pc = 0x0019B240u; return; } if (c.pc != 0x0024C78Cu) [[unlikely]] return; }
L_0024C78C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_0024C8F8; } }
    c.budget -= 1;
L_0024C798:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C7A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 276u, depth + 1u); else { c.pc = 0x003C6520u; return; } if (c.pc != 0x0024C7A4u) [[unlikely]] return; }
L_0024C7A4:
    c.r[4].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0024C8F8; } }
    set32(c.r[2], 0u + 3u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C7CCu); st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0026(c, 188u, depth + 1u); else { c.pc = 0x0019B240u; return; } if (c.pc != 0x0024C7CCu) [[unlikely]] return; }
L_0024C7CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_0024C8F8; } }
    c.budget -= 1;
L_0024C7D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C7E4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 276u, depth + 1u); else { c.pc = 0x003C6520u; return; } if (c.pc != 0x0024C7E4u) [[unlikely]] return; }
L_0024C7E4:
    c.r[4].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[18].w[0] + 2048u);  if (t) { goto L_0024C8F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C800u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0024C800u) [[unlikely]] return; }
L_0024C800:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C810u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x0024C810u) [[unlikely]] return; }
L_0024C810:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C81Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0024C81Cu) [[unlikely]] return; }
L_0024C81C:
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.f[13] = ld32((c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C82Cu); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0024C82Cu) [[unlikely]] return; }
L_0024C82C:
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C840u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x0024C840u) [[unlikely]] return; }
L_0024C840:
    c.r[1].d[0] = c.r[2].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024C8F8; } }
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C860u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0024C860u) [[unlikely]] return; }
L_0024C860:
    c.f[12] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C86Cu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0024C86Cu) [[unlikely]] return; }
L_0024C86C:
    set32(c.r[2], 0u - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2048u);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C880u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x0024C880u) [[unlikely]] return; }
L_0024C880:
    c.r[1].d[0] = c.r[2].sd[0] < 8192ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024C8F8; } }
    set32(c.r[2], 0u + 4u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C8A0u); st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0026(c, 188u, depth + 1u); else { c.pc = 0x0019B240u; return; } if (c.pc != 0x0024C8A0u) [[unlikely]] return; }
L_0024C8A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_0024C8F8; } }
L_0024C8A8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8659u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0024C8F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C8C0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 141u, depth + 1u); else { c.pc = 0x00196C20u; return; } if (c.pc != 0x0024C8C0u) [[unlikely]] return; }
L_0024C8C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x425C0000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], 0u + 3u);  if (t) { goto L_0024C8F0; } }
    set32(c.r[3], 0u + 20u);
    st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[17], 0u + 1u);
    st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1819u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024C8F8; } }
L_0024C8F0:
    set32(c.r[17], 0u - 1u);
    c.budget -= 2;
L_0024C8F8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0024C938; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C908u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 276u, depth + 1u); else { c.pc = 0x003C6520u; return; } if (c.pc != 0x0024C908u) [[unlikely]] return; }
L_0024C908:
    c.r[4].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0024C938; } }
    set32(c.r[2], 0u + 3u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[18].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C930u); st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0026(c, 188u, depth + 1u); else { c.pc = 0x0019B240u; return; } if (c.pc != 0x0024C930u) [[unlikely]] return; }
L_0024C930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_0024C958; } }
L_0024C938:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_0024C958; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0024C958; } }
    c.budget -= 1;
L_0024C950:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 1924u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0024C958:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0024CD70; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024C980; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024C990; } }
    c.budget -= 1;
L_0024C980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024C988u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x0024C988u) [[unlikely]] return; }
L_0024C988:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024CD70; } }
L_0024C990:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024CD70; } }
    c.budget -= 1;
L_0024C9A0:
    c.r[4].d[0] = ld16((c.r[18].w[0] + 1926u));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1819u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024CB20; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1806u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_0024CAD0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0024CA80; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0024CA40; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0024C9F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024CD70; } }
    c.budget -= 1;
L_0024C9F0:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8659u)));
    c.r[1].d[0] = c.r[7].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024CA10; } }
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0024CA10:
    c.r[6].d[0] = ld8((c.r[18].w[0] + 8658u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 5376u);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024CD70; } }
L_0024CA40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024CA60; } }
    st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], 0u + 60u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024CD70; } }
    c.budget -= 1;
L_0024CA60:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1812u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024CD70; } }
    c.budget -= 1;
L_0024CA80:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024CAA0; } }
    st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], 0u + 45u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024CD70; } }
L_0024CAA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024CAC0; } }
    st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], 0u + 45u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024CD70; } }
    c.budget -= 1;
L_0024CAC0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024CD70; } }
    c.budget -= 1;
L_0024CAD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024CAE8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0024CAE8:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[3].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] & 128ull;  if (t) { goto L_0024CD70; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024CB10; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024CD70; } }
    c.budget -= 1;
L_0024CB10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CB18u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x0024CB18u) [[unlikely]] return; }
L_0024CB18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024CD70; } }
L_0024CB20:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1819u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024CD70; } }
    c.budget -= 1;
L_0024CB30:
    c.r[4].d[0] = ld16((c.r[18].w[0] + 1926u));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1819u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024CC98; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1806u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_0024CC48; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[6], 0u + 1u);  if (t) { goto L_0024CBF8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0024CBB8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024CB80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024CD70; } }
    c.budget -= 1;
L_0024CB80:
    c.r[4].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] - 5136u);
    c.r[4].d[0] = c.r[4].d[0] | 768ull;
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[18].w[0] + 8658u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8660u)));
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_0024CD70; } }
L_0024CBB8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024CBD8; } }
    st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], 0u + 60u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024CD70; } }
    c.budget -= 1;
L_0024CBD8:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1812u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024CD70; } }
    c.budget -= 1;
L_0024CBF8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024CC18; } }
    st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], 0u + 45u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024CD70; } }
L_0024CC18:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024CC38; } }
    st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], 0u + 45u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024CD70; } }
    c.budget -= 1;
L_0024CC38:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024CD70; } }
    c.budget -= 1;
L_0024CC48:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024CC60; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0024CC60:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[3].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] & 128ull;  if (t) { goto L_0024CD70; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024CC88; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024CD70; } }
    c.budget -= 1;
L_0024CC88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CC90u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x0024CC90u) [[unlikely]] return; }
L_0024CC90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024CD70; } }
L_0024CC98:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1819u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024CD70; } }
    c.budget -= 1;
L_0024CCA8:
    c.r[4].d[0] = ld16((c.r[18].w[0] + 1926u));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1819u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024CD68; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1806u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0024CD30; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0024CD00; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0024CCF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024CD70; } }
    c.budget -= 1;
L_0024CCF0:
    st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 30u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024CD70; } }
L_0024CD00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024CD28; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[18].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0024CD70; } }
    c.budget -= 1;
L_0024CD28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1806u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0024CD70; } }
L_0024CD30:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[3].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] & 128ull;  if (t) { goto L_0024CD70; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024CD58; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024CD70; } }
    c.budget -= 1;
L_0024CD58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CD60u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x0024CD60u) [[unlikely]] return; }
L_0024CD60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024CD70; } }
L_0024CD68:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[18].w[0] + 1819u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0024CD70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0024CD90:
    set32(c.r[3], 0u + 9u);
    st8((c.r[4].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0024CDB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 744u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024CDD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CDCCu);  if (depth < kMaxDepth) unit_0052(c, 133u, depth + 1u); else { c.pc = 0x00249900u; return; } if (c.pc != 0x0024CDCCu) [[unlikely]] return; }
L_0024CDCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024CEF0; } }
    c.budget -= 1;
L_0024CDD8:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 1808u));
    set32(c.r[6], 0u + 2u);
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1805u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_0024CEB0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0024CE80; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024CE10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024CEF0; } }
    c.budget -= 1;
L_0024CE10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1806u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0024CE68; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0024CE58; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024CE38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024CEF0; } }
    c.budget -= 1;
L_0024CE38:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 1926u));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0024CEF0; } }
    c.budget -= 1;
L_0024CE58:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024CEF0; } }
    c.budget -= 1;
L_0024CE68:
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 1926u));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0024CEF0; } }
L_0024CE80:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 4160ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024CEA0; } }
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], 0u + 30u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1813u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024CEF0; } }
L_0024CEA0:
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0024CEF0; } }
    c.budget -= 1;
L_0024CEB0:
    c.r[5].d[0] = ld16((c.r[4].w[0] + 1926u));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1813u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024CEE8; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], 0u + 3u);
    st8((c.r[4].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 5u);
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024CEF0; } }
L_0024CEE8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0] + 1813u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0024CEF0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0024CF00:
    set32(c.r[3], 0u + 10u);
    st8((c.r[4].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0024CF10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld16((c.r[4].w[0] + 1926u));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st16((c.r[4].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1805u)));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0024D120; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0024D0D0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0024CF60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024D1D0; } }
    c.budget -= 1;
L_0024CF60:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = ld32((c.r[17].w[0] + 8308u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 856u)));
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::add(c.f[0], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024CFA8; } }
    c.f[1] = ld32((c.r[17].w[0] + 740u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024D0B0; } }
L_0024CFA8:
    set32(c.r[16], ld32((c.r[17].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0024D1D0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));  if (t) { goto L_0024CFD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;  if (t) { goto L_0024CFD8; } }
L_0024CFD0:
    set32(c.r[3], 0u + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0024CFD8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0024CFF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024CFE8u);  if (depth < kMaxDepth) unit_0025(c, 60u, depth + 1u); else { c.pc = 0x00195400u; return; } if (c.pc != 0x0024CFE8u) [[unlikely]] return; }
L_0024CFE8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0024D008; } }
    c.budget -= 1;
L_0024CFF8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[3], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0024D1D0; } }
L_0024D008:
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D014u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0024D014u) [[unlikely]] return; }
L_0024D014:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[3], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_0024D044; } }
    set32(c.r[4], c.r[5].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14768u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 88u);  if (t) { goto L_0024D048; } }
L_0024D044:
    set32(c.r[3], c.r[3].w[0] - 13352u);
    c.budget -= 1;
L_0024D048:
    c.f[1] = ld32((c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[2] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], 0u + 1u);  if (t) { goto L_0024D1D0; } }
    set32(c.r[3], 0u + 11u);
    st8((c.r[17].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0024D090; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0024D0A0; } }
L_0024D090:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 384ull;
    st16((c.r[17].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0024D0A0:
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024D1D0; } }
    c.budget -= 1;
L_0024D0B0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024D1D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D0C8u);  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x0024D0C8u) [[unlikely]] return; }
L_0024D0C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024D1D0; } }
L_0024D0D0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024D0F0; } }
    st8((c.r[17].w[0] + 1805u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1812u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0024D1D0; } }
    c.budget -= 1;
L_0024D0F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024D110; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D104u);  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x0024D104u) [[unlikely]] return; }
L_0024D104:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024D1D0; } }
    c.budget -= 1;
L_0024D110:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024D1D0; } }
    c.budget -= 1;
L_0024D120:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 560u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024D1A8; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 558u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1812u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0024D1A8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_0024D154; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 580u)));  if (t) { goto L_0024D15C; } }
L_0024D154:
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 2;
L_0024D15C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0024D1A8; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 515u));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 515u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0024D1A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024D1A8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0024D1A8; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[17].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 558u));
    st8((c.r[17].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_0024D1A8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024D1D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0024D1D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D1CCu);  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x0024D1CCu) [[unlikely]] return; }
L_0024D1CC:
    c.budget -= 1;
L_0024D1D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024D1F0:
    set32(c.r[3], 0u + 11u);
    st8((c.r[4].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0024D200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1805u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0024D2C8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0024D280; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0024D258; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0024D240; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024D410; } }
L_0024D240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D248u);  if (depth < kMaxDepth) unit_0026(c, 150u, depth + 1u); else { c.pc = 0x0019ADA0u; return; } if (c.pc != 0x0024D248u) [[unlikely]] return; }
L_0024D248:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024D410; } }
    c.budget -= 1;
L_0024D258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D260u);  if (depth < kMaxDepth) unit_0026(c, 150u, depth + 1u); else { c.pc = 0x0019ADA0u; return; } if (c.pc != 0x0024D260u) [[unlikely]] return; }
L_0024D260:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 1808u));
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u + 45u);
    c.r[5].d[0] = c.r[5].d[0] | 384ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024D410; } }
L_0024D280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D288u);  if (depth < kMaxDepth) unit_0026(c, 150u, depth + 1u); else { c.pc = 0x0019ADA0u; return; } if (c.pc != 0x0024D288u) [[unlikely]] return; }
L_0024D288:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024D2A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024D2B8; } }
    c.budget -= 1;
L_0024D2A8:
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0024D410; } }
L_0024D2B8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024D410; } }
    c.budget -= 1;
L_0024D2C8:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 560u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024D350; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 558u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0024D350; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0024D300; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 580u)));  if (t) { goto L_0024D308; } }
L_0024D300:
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 2;
L_0024D308:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0024D350; } }
    c.r[4].d[0] = ld8((c.r[6].w[0] + 515u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 515u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0024D350; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024D350; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0024D350; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 558u));
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_0024D350:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024D410; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024D410; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D374u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0024D374u) [[unlikely]] return; }
L_0024D374:
    c.r[4].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0024D3F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0024D3D8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0024D3B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024D3A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024D410; } }
L_0024D3A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D3B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x0024D3B0u) [[unlikely]] return; }
L_0024D3B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024D410; } }
L_0024D3B8:
    set32(c.r[2], 0u + 4096u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D3C8u); st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0053(c, 18u, depth + 1u); else { c.pc = 0x0024C3E0u; return; } if (c.pc != 0x0024D3C8u) [[unlikely]] return; }
L_0024D3C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D3D0u);  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x0019B170u; return; } if (c.pc != 0x0024D3D0u) [[unlikely]] return; }
L_0024D3D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024D410; } }
L_0024D3D8:
    set32(c.r[2], 0u + 2048u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D3E8u); st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0053(c, 18u, depth + 1u); else { c.pc = 0x0024C3E0u; return; } if (c.pc != 0x0024D3E8u) [[unlikely]] return; }
L_0024D3E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D3F0u);  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x0019B170u; return; } if (c.pc != 0x0024D3F0u) [[unlikely]] return; }
L_0024D3F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024D410; } }
L_0024D3F8:
    set32(c.r[2], 0u + 1024u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D408u); st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0053(c, 18u, depth + 1u); else { c.pc = 0x0024C3E0u; return; } if (c.pc != 0x0024D408u) [[unlikely]] return; }
L_0024D408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D410u);  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x0019B170u; return; } if (c.pc != 0x0024D410u) [[unlikely]] return; }
L_0024D410:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024D420:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1805u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0024D5F0; } }
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0024D5C8; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0024D490; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024D468; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024D608; } }
    c.budget -= 1;
L_0024D468:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024D608; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0024D608; } }
    c.budget -= 1;
L_0024D490:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1496u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024D518; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D4B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 276u, depth + 1u); else { c.pc = 0x003C6520u; return; } if (c.pc != 0x0024D4B4u) [[unlikely]] return; }
L_0024D4B4:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    set32(c.r[5], 0u + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0024D4D8; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0024D608; } }
L_0024D4D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D4E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 276u, depth + 1u); else { c.pc = 0x003C6520u; return; } if (c.pc != 0x0024D4E0u) [[unlikely]] return; }
L_0024D4E0:
    c.r[4].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0024D508; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0024D608; } }
    c.budget -= 1;
L_0024D508:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024D608; } }
    c.budget -= 1;
L_0024D518:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1932u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024D530; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_0024D608; } }
    c.budget -= 1;
L_0024D530:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 1932u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1920u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024D608; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    set32(c.r[5], c.r[3].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D55Cu); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_002E(c, 141u, depth + 1u); else { c.pc = 0x001B9D00u; return; } if (c.pc != 0x0024D55Cu) [[unlikely]] return; }
L_0024D55C:
    c.f[1] = ld32((c.r[16].w[0] + 976u));
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024D580; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0024D590; } }
L_0024D580:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0024D590:
    c.f[1] = ld32((c.r[16].w[0] + 980u));
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024D5B8; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0024D608; } }
    c.budget -= 1;
L_0024D5B8:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0024D608; } }
L_0024D5C8:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024D608; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0024D608; } }
    c.budget -= 1;
L_0024D5F0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024D608; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D608u);  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x0024D608u) [[unlikely]] return; }
L_0024D608:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024D620:
    set32(c.r[3], 0u + 13u);
    st8((c.r[4].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 3120u);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    st16((c.r[4].w[0] + 1952u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1818u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0024D660:
    set32(c.r[3], 0u + 13u);
    set32(c.r[5], 0u + 1u);
    st8((c.r[4].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st8((c.r[4].w[0] + 1806u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] - 3120u);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    st16((c.r[4].w[0] + 1952u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1818u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0024D6A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1805u)));
    c.budget -= 7;
    { const bool t = c.r[7].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0024D950; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_0024D8A8; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[4].d[0]; set32(c.r[6], 0u + 1u);  if (t) { goto L_0024D770; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_0024D708; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0024D6E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024DA28; } }
L_0024D6E8:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 1952u));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 1808u));
    set32(c.r[3], 0u + 45u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024DA28; } }
L_0024D708:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024D738; } }
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D728u); st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0024D728u) [[unlikely]] return; }
L_0024D728:
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1813u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024DA28; } }
L_0024D738:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024D750; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0024DA28; } }
    c.budget -= 1;
L_0024D750:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 1952u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0024DA28; } }
    c.budget -= 1;
L_0024D770:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024D788; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0024DA28; } }
L_0024D788:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1806u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024D810; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024D7F0; } }
    set32(c.r[3], 0u + 30u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 760u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024D7C0; } }
    st8((c.r[16].w[0] + 1813u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0024D7C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1813u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024D7E0; } }
    set32(c.r[3], 0u + 4u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0024DA28; } }
    c.budget -= 1;
L_0024D7E0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1813u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024DA28; } }
    c.budget -= 1;
L_0024D7F0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 1952u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0024DA28; } }
    c.budget -= 1;
L_0024D810:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 564u));
    c.r[3].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 16ull;  if (t) { goto L_0024D868; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024D868; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], 0u + 24u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 28u);  if (t) { goto L_0024D840; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0024D858; } }
L_0024D840:
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0024DA28; } }
    c.budget -= 1;
L_0024D858:
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024DA28; } }
L_0024D868:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024D888; } }
    set32(c.r[3], 0u + 4u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0024DA28; } }
    c.budget -= 1;
L_0024D888:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 1952u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0024DA28; } }
    c.budget -= 1;
L_0024D8A8:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 560u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024D930; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 558u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0024D930; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0024D8E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 580u)));  if (t) { goto L_0024D8E8; } }
L_0024D8E0:
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 2;
L_0024D8E8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0024D930; } }
    c.r[4].d[0] = ld8((c.r[6].w[0] + 515u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 515u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0024D930; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024D930; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0024D930; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 558u));
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_0024D930:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024DA28; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024DA28; } }
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0024D950:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024DA28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D968u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0024D968u) [[unlikely]] return; }
L_0024D968:
    c.r[4].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0024D9F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0024D9D0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0024D9B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024D9A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024DA08; } }
    c.budget -= 1;
L_0024D9A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D9A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 163u, depth + 1u); else { c.pc = 0x0019AF80u; return; } if (c.pc != 0x0024D9A8u) [[unlikely]] return; }
L_0024D9A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024DA08; } }
L_0024D9B0:
    set32(c.r[2], 0u + 4096u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D9C0u); st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0053(c, 18u, depth + 1u); else { c.pc = 0x0024C3E0u; return; } if (c.pc != 0x0024D9C0u) [[unlikely]] return; }
L_0024D9C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D9C8u);  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x0019B170u; return; } if (c.pc != 0x0024D9C8u) [[unlikely]] return; }
L_0024D9C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024DA08; } }
L_0024D9D0:
    set32(c.r[2], 0u + 2048u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D9E0u); st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0053(c, 18u, depth + 1u); else { c.pc = 0x0024C3E0u; return; } if (c.pc != 0x0024D9E0u) [[unlikely]] return; }
L_0024D9E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024D9E8u);  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x0019B170u; return; } if (c.pc != 0x0024D9E8u) [[unlikely]] return; }
L_0024D9E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024DA08; } }
L_0024D9F0:
    set32(c.r[2], 0u + 1024u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DA00u); st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0053(c, 18u, depth + 1u); else { c.pc = 0x0024C3E0u; return; } if (c.pc != 0x0024DA00u) [[unlikely]] return; }
L_0024DA00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DA08u);  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x0019B170u; return; } if (c.pc != 0x0024DA08u) [[unlikely]] return; }
L_0024DA08:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1806u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024DA28; } }
    st16((c.r[16].w[0] + 1924u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = 0ull << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    st16((c.r[16].w[0] + 1820u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 1806u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_0024DA28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024DA40:
    set32(c.r[3], 0u + 4u);
    st8((c.r[4].w[0] + 1804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0024DA50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1805u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[6].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0024DC00; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0024DBA0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024DA90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024DCA0; } }
    c.budget -= 1;
L_0024DA90:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[4].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = 0ull << 48;  if (t) { goto L_0024DAC0; } }
    st16((c.r[16].w[0] + 1928u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    st8((c.r[16].w[0] + 1819u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1818u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1816u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0024DCA0; } }
    c.budget -= 1;
L_0024DAC0:
    c.r[3].d[0] = c.r[4].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024DCA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DAD4u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0024DAD4u) [[unlikely]] return; }
L_0024DAD4:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0024DB90; } }
    set32(c.r[2], 0u + 30u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DAF0u); st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0024DAF0u) [[unlikely]] return; }
L_0024DAF0:
    c.r[4].d[0] = c.r[2].d[0] & 7ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DB18u); st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0024DB18u) [[unlikely]] return; }
L_0024DB18:
    c.r[4].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0024DB80; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0024DB70; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0024DB60; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024DB50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024DCA0; } }
    c.budget -= 1;
L_0024DB50:
    set32(c.r[3], 0u + 2048u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0024DCA0; } }
    c.budget -= 1;
L_0024DB60:
    set32(c.r[3], 0u + 1024u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0024DCA0; } }
    c.budget -= 1;
L_0024DB70:
    set32(c.r[3], 0u + 8192u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0024DCA0; } }
    c.budget -= 1;
L_0024DB80:
    set32(c.r[3], 0u + 4096u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0024DCA0; } }
    c.budget -= 1;
L_0024DB90:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024DCA0; } }
    c.budget -= 1;
L_0024DBA0:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 1926u));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 1808u));
    set32(c.r[3], 0u + 12u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 568u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0024DC00; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024DBD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_0024DC00; } }
    c.budget -= 1;
L_0024DBD8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 860u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024DC00; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024DC00; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0024DC00:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[4].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] & 16384ull;  if (t) { goto L_0024DCA0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = 0ull << 48;  if (t) { goto L_0024DCA0; } }
    st16((c.r[16].w[0] + 1928u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], 0u + 17u);
    st8((c.r[16].w[0] + 1819u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 1818u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 18u);  if (t) { goto L_0024DC90; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0024DC90; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1941u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024DC90; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = 0ull | 49152ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DC64u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0025(c, 99u, depth + 1u); else { c.pc = 0x00196000u; return; } if (c.pc != 0x0024DC64u) [[unlikely]] return; }
L_0024DC64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024DC90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DC74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 238u, depth + 1u); else { c.pc = 0x0019BA20u; return; } if (c.pc != 0x0024DC74u) [[unlikely]] return; }
L_0024DC74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0024DC90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DC84u); st32((c.r[16].w[0] + 1920u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0053(c, 98u, depth + 1u); else { c.pc = 0x0024DA40u; return; } if (c.pc != 0x0024DC84u) [[unlikely]] return; }
L_0024DC84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024DCA0; } }
    c.budget -= 1;
L_0024DC90:
    st8((c.r[16].w[0] + 1804u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 1816u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
L_0024DCA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024DCC0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1920u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0024DE70; } }
    c.f[5] = ld32((c.r[2].w[0] + 32u));
    c.f[4] = ld32((c.r[20].w[0] + 32u));
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    c.f[3] = ld32((c.r[2].w[0] + 36u));
    c.f[2] = ld32((c.r[20].w[0] + 36u));
    c.f[22] = fp::sub(c.f[5], c.f[4]);
    c.f[20] = fp::sub(c.f[1], c.f[0]);
    c.f[21] = fp::sub(c.f[3], c.f[2]);
    c.f[12] = c.f[22];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DD28u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0024DD28u) [[unlikely]] return; }
L_0024DD28:
    c.facc = fp::mul(c.f[22], c.f[22]);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DD38u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0024DD38u) [[unlikely]] return; }
L_0024DD38:
    c.f[20] = c.f[0];
    c.f[12] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DD48u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0024DD48u) [[unlikely]] return; }
L_0024DD48:
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DD58u); c.f[12] = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0024DD58u) [[unlikely]] return; }
L_0024DD58:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[17].d[0] = c.r[17].d[0] & 65535ull;
    c.f[23] = c.f[0];
    c.r[16].d[0] = c.r[16].d[0] & 65535ull;
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[18].w[0] - 27856u);
    c.budget -= 6;
L_0024DD70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024DE58; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 515u));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 515u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024DE58; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[20].d[0];  if (t) { goto L_0024DE58; } }
    c.f[5] = ld32((c.r[18].w[0] + 32u));
    c.f[4] = ld32((c.r[20].w[0] + 32u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    c.f[3] = ld32((c.r[18].w[0] + 36u));
    c.f[2] = ld32((c.r[20].w[0] + 36u));
    c.f[22] = fp::sub(c.f[5], c.f[4]);
    c.f[20] = fp::sub(c.f[1], c.f[0]);
    c.f[21] = fp::sub(c.f[3], c.f[2]);
    c.f[12] = c.f[22];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DDC8u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0024DDC8u) [[unlikely]] return; }
L_0024DDC8:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 1025ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024DDF0; } }
    c.r[2].d[0] = 0ull | 64512ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024DE58; } }
L_0024DDF0:
    c.facc = fp::mul(c.f[22], c.f[22]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DDFCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0024DDFCu) [[unlikely]] return; }
L_0024DDFC:
    c.f[20] = c.f[0];
    c.f[12] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DE0Cu); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0024DE0Cu) [[unlikely]] return; }
L_0024DE0C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 1025ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024DE38; } }
    c.r[2].d[0] = 0ull | 64512ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024DE58; } }
    c.budget -= 1;
L_0024DE38:
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DE44u); c.f[12] = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0024DE44u) [[unlikely]] return; }
L_0024DE44:
    fpu_compare(c, fp::key(c.f[23]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024DE58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024DE78; } }
L_0024DE58:
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.r[19].d[0] = c.r[2].d[0] << 56;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    c.r[2].d[0] = c.r[19].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024DD70u | kUnwind; return; } goto L_0024DD70; } }
L_0024DE70:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0024DE78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0024DEB0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[20], c.r[29].w[0] + 132u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[19], c.r[29].w[0] + 136u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[4], c.r[16].w[0] + 8592u);
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[29].w[0] + 128u), 0u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DF00u); st32((c.r[19].w[0]), 0u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0024DF00u) [[unlikely]] return; }
L_0024DF00:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DF0Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0024DF0Cu) [[unlikely]] return; }
L_0024DF0C:
    set32(c.r[4], c.r[17].w[0] + 8592u);
    st32((c.r[29].w[0] + 112u), 0u);
    set32(c.r[18], c.r[29].w[0] + 116u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[17], c.r[29].w[0] + 120u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DF2Cu); st32((c.r[17].w[0]), 0u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0024DF2Cu) [[unlikely]] return; }
L_0024DF2C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024DF38u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0024DF38u) [[unlikely]] return; }
L_0024DF38:
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024DF70; } }
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 21u, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024DF78; } }
L_0024DF70:
    c.f[21] = 0u;
    c.budget -= 2;
L_0024DF78:
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[1] = ld32((c.r[20].w[0]));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024DFB0; } }
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024DFB8; } }
L_0024DFB0:
    c.f[20] = 0u;
    c.budget -= 2;
L_0024DFB8:
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[19].w[0]));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024DFF0; } }
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 22u, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024DFF8; } }
L_0024DFF0:
    c.f[22] = 0u;
    c.budget -= 2;
L_0024DFF8:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0024E000:
    set32(c.r[2], 0u + 2u);
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.f[0] = fp::add(c.f[0], c.f[21]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    st32((c.r[20].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[22]);
    st32((c.r[19].w[0]), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024E058; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 515u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E044u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_003B(c, 297u, depth + 1u); else { c.pc = 0x001EF230u; return; } if (c.pc != 0x0024E044u) [[unlikely]] return; }
L_0024E044:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024E070; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024E090; } }
    c.budget -= 1;
L_0024E058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E060u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_003B(c, 292u, depth + 1u); else { c.pc = 0x001EF0F0u; return; } if (c.pc != 0x0024E060u) [[unlikely]] return; }
L_0024E060:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024E070; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024E090; } }
L_0024E070:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024E000u | kUnwind; return; } goto L_0024E000; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 514u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_0024E090:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0024E0C0:
    set32(c.r[29], c.r[29].w[0] - 352u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 29024u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[5], c.r[5].w[0] << 7);
    c.budget -= 23;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_0024E128; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 792u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024E130; } }
L_0024E128:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024E950; } }
L_0024E130:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1928u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024E940; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E144u);  if (depth < kMaxDepth) unit_0026(c, 230u, depth + 1u); else { c.pc = 0x0019B870u; return; } if (c.pc != 0x0024E144u) [[unlikely]] return; }
L_0024E144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E14Cu); set32(c.r[4], c.r[16].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0024E14Cu) [[unlikely]] return; }
L_0024E14C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E15Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x0024E15Cu) [[unlikely]] return; }
L_0024E15C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E164u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0024E164u) [[unlikely]] return; }
L_0024E164:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E16Cu); set32(c.r[4], c.r[17].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0024E16Cu) [[unlikely]] return; }
L_0024E16C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E17Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x0024E17Cu) [[unlikely]] return; }
L_0024E17C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E184u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0024E184u) [[unlikely]] return; }
L_0024E184:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 860u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024E5A0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23836u)));
    set32(c.r[2], c.r[28].w[0] - 23804u);
    c.r[4].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_0024E5A0; } }
    c.r[30].d[0] = 0ull + 0ull;
    set32(c.r[20], c.r[29].w[0] + 340u);
    set32(c.r[19], c.r[29].w[0] + 344u);
    set32(c.r[21], c.r[29].w[0] + 324u);
    set32(c.r[22], c.r[29].w[0] + 328u);
    c.budget -= 5;
L_0024E1C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[3], c.r[4].w[0] << 10);
    set32(c.r[2], c.r[2].w[0] + 26976u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[30].w[0] + c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0024E578; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024E578; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 516u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024E578; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_0024E578; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_0024E578; } }
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    set32(c.r[2], c.r[29].w[0] + 336u);
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[3], c.r[29].w[0] + 304u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 336u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 68u));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[20].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 72u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[19].w[0]), c.f[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[29].w[0] + 336u));
    c.f[1] = ld32((c.r[19].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E26Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0024E26Cu) [[unlikely]] return; }
L_0024E26C:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.f[0] = ld32((c.r[20].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E27Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0024E27Cu) [[unlikely]] return; }
L_0024E27C:
    c.f[20] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024E578; } }
    c.f[1] = ld32((c.r[17].w[0] + 80u));
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 320u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 84u));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[21].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 88u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[22].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 320u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E2D8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0024E2D8u) [[unlikely]] return; }
L_0024E2D8:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.f[0] = ld32((c.r[21].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E2E8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0024E2E8u) [[unlikely]] return; }
L_0024E2E8:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 336u);  if (t) { goto L_0024E578; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E2FCu);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0024E2FCu) [[unlikely]] return; }
L_0024E2FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E304u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0024E304u) [[unlikely]] return; }
L_0024E304:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E310u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0024E310u) [[unlikely]] return; }
L_0024E310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E318u); set32(c.r[4], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0024E318u) [[unlikely]] return; }
L_0024E318:
    c.f[13] = ld32((c.r[19].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E324u); c.f[12] = ld32((c.r[29].w[0] + 336u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0024E324u) [[unlikely]] return; }
L_0024E324:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E334u); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (depth < kMaxDepth) unit_0026(c, 225u, depth + 1u); else { c.pc = 0x0019B790u; return; } if (c.pc != 0x0024E334u) [[unlikely]] return; }
L_0024E334:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);
    c.r[18].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 5;
    { const bool t = c.r[18].sd[0] < 0; c.r[1].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;  if (t) { goto L_0024E578; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 320u);  if (t) { goto L_0024E578; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E358u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0024E358u) [[unlikely]] return; }
L_0024E358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E360u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0024E360u) [[unlikely]] return; }
L_0024E360:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E36Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0024E36Cu) [[unlikely]] return; }
L_0024E36C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E374u); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0024E374u) [[unlikely]] return; }
L_0024E374:
    c.f[13] = ld32((c.r[19].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E380u); c.f[12] = ld32((c.r[29].w[0] + 336u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0024E380u) [[unlikely]] return; }
L_0024E380:
    c.f[12] = ld32((c.r[29].w[0] + 320u));
    c.f[13] = ld32((c.r[22].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E390u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0024E390u) [[unlikely]] return; }
L_0024E390:
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024E3C0; } }
    c.r[2].d[0] = 0ull | 65520ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024E578; } }
    c.budget -= 1;
L_0024E3C0:
    c.f[13] = ld32((c.r[20].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E3CCu); c.f[12] = ld32((c.r[29].w[0] + 336u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0024E3CCu) [[unlikely]] return; }
L_0024E3CC:
    c.f[12] = ld32((c.r[29].w[0] + 320u));
    c.f[13] = ld32((c.r[21].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E3DCu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0024E3DCu) [[unlikely]] return; }
L_0024E3DC:
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024E408; } }
    c.r[2].d[0] = 0ull | 65520ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024E578; } }
L_0024E408:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0024E440; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E428u);  if (depth < kMaxDepth) unit_0026(c, 242u, depth + 1u); else { c.pc = 0x0019BAB0u; return; } if (c.pc != 0x0024E428u) [[unlikely]] return; }
L_0024E428:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0024E440; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E438u);  if (depth < kMaxDepth) unit_0053(c, 87u, depth + 1u); else { c.pc = 0x0024D660u; return; } if (c.pc != 0x0024E438u) [[unlikely]] return; }
L_0024E438:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024E950; } }
L_0024E440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E448u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0024E448u) [[unlikely]] return; }
L_0024E448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E450u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0024E450u) [[unlikely]] return; }
L_0024E450:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E45Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0024E45Cu) [[unlikely]] return; }
L_0024E45C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E464u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0024E464u) [[unlikely]] return; }
L_0024E464:
    c.f[13] = ld32((c.r[29].w[0] + 312u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E470u); c.f[12] = ld32((c.r[29].w[0] + 304u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0024E470u) [[unlikely]] return; }
L_0024E470:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024E498; } }
    c.r[2].d[0] = 0ull | 57344ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024E4C0; } }
L_0024E498:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[18].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 2048u);  if (t) { goto L_0024E4B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0024E560; } }
L_0024E4B0:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0024E560; } }
    c.budget -= 1;
L_0024E4C0:
    c.r[2].d[0] = c.r[3].sd[0] < 24576ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 40961ull;  if (t) { goto L_0024E500; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024E500; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[18].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_0024E4F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0024E560; } }
L_0024E4F0:
    set32(c.r[2], 0u + 2048u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0024E560; } }
    c.budget -= 1;
L_0024E500:
    c.r[1].d[0] = c.r[3].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 24576ll ? 1ull : 0ull;  if (t) { goto L_0024E540; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024E540; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[18].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 4096u);  if (t) { goto L_0024E530; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0024E560; } }
    c.budget -= 1;
L_0024E530:
    set32(c.r[2], 0u + 8192u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0024E560; } }
    c.budget -= 1;
L_0024E540:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[18].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 8192u);  if (t) { goto L_0024E558; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0024E560; } }
L_0024E558:
    set32(c.r[2], 0u + 4096u);
    st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0024E560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E568u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 18u, depth + 1u); else { c.pc = 0x0024C3E0u; return; } if (c.pc != 0x0024E568u) [[unlikely]] return; }
L_0024E568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E570u);  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x0019B170u; return; } if (c.pc != 0x0024E570u) [[unlikely]] return; }
L_0024E570:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024E950; } }
L_0024E578:
    set32(c.r[3], ld32((c.r[28].w[0] - 23836u)));
    set32(c.r[2], c.r[28].w[0] - 23804u);
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.r[4].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[23].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[30], c.r[30].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024E1C8u | kUnwind; return; } goto L_0024E1C8; } }
L_0024E5A0:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 860u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0024E948; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024E5B0:
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024E5D0; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024E5B0u | kUnwind; return; } goto L_0024E5B0; } }
L_0024E5D0:
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[29].w[0] + 340u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[2], c.r[2].w[0] - 27856u);
    set32(c.r[18], c.r[29].w[0] + 344u);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[2], c.r[29].w[0] + 336u);
    c.f[1] = ld32((c.r[19].w[0] + 32u));
    set32(c.r[3], c.r[29].w[0] + 304u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 336u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 36u));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[29].w[0] + 336u));
    c.f[1] = ld32((c.r[18].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E644u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0024E644u) [[unlikely]] return; }
L_0024E644:
    c.f[1] = ld32((c.r[17].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E654u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0024E654u) [[unlikely]] return; }
L_0024E654:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E660u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 129u, depth + 1u); else { c.pc = 0x00196800u; return; } if (c.pc != 0x0024E660u) [[unlikely]] return; }
L_0024E660:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024E948; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 336u);  if (t) { goto L_0024E948; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E684u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0024E684u) [[unlikely]] return; }
L_0024E684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E68Cu); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0024E68Cu) [[unlikely]] return; }
L_0024E68C:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E698u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0024E698u) [[unlikely]] return; }
L_0024E698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E6A0u); set32(c.r[4], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0024E6A0u) [[unlikely]] return; }
L_0024E6A0:
    c.f[12] = ld32((c.r[29].w[0] + 336u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E6ACu); c.f[13] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0024E6ACu) [[unlikely]] return; }
L_0024E6AC:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E6BCu); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (depth < kMaxDepth) unit_0026(c, 225u, depth + 1u); else { c.pc = 0x0019B790u; return; } if (c.pc != 0x0024E6BCu) [[unlikely]] return; }
L_0024E6BC:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;  if (t) { goto L_0024E948; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 304u);  if (t) { goto L_0024E948; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E6E0u); st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0024E6E0u) [[unlikely]] return; }
L_0024E6E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E6E8u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0024E6E8u) [[unlikely]] return; }
L_0024E6E8:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E6F4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0024E6F4u) [[unlikely]] return; }
L_0024E6F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E6FCu); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0024E6FCu) [[unlikely]] return; }
L_0024E6FC:
    c.f[13] = ld32((c.r[29].w[0] + 312u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E708u); c.f[12] = ld32((c.r[29].w[0] + 304u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0024E708u) [[unlikely]] return; }
L_0024E708:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (t) { goto L_0024E880; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0024E760; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E744u);  if (depth < kMaxDepth) unit_0026(c, 242u, depth + 1u); else { c.pc = 0x0019BAB0u; return; } if (c.pc != 0x0024E744u) [[unlikely]] return; }
L_0024E744:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0024E760; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E754u);  if (depth < kMaxDepth) unit_0053(c, 86u, depth + 1u); else { c.pc = 0x0024D620u; return; } if (c.pc != 0x0024E754u) [[unlikely]] return; }
L_0024E754:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024E950; } }
    c.budget -= 1;
L_0024E760:
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; c.r[2].d[0] = c.r[3].sd[0] < 12288ll ? 1ull : 0ull;  if (t) { goto L_0024E778; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024E790; } }
    c.budget -= 1;
L_0024E778:
    c.r[2].d[0] = c.r[3].sd[0] < 20480ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 32768ull;  if (t) { goto L_0024E7A0; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024E7A0; } }
L_0024E790:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1926u)));
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0024E7F0; } }
L_0024E7A0:
    c.r[2].d[0] = 0ull | 53248ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0024E7C0; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024E7E0; } }
    c.budget -= 1;
L_0024E7C0:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 45056ull;  if (t) { goto L_0024E7F0; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024E7F0; } }
    c.budget -= 1;
L_0024E7E0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1926u)));
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0024E7F0:
    c.r[2].d[0] = c.r[3].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;  if (t) { goto L_0024E808; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024E828; } }
    c.budget -= 1;
L_0024E808:
    c.r[2].d[0] = 0ull | 49152ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 61440ull;  if (t) { goto L_0024E838; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024E838; } }
    c.budget -= 1;
L_0024E828:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1926u)));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0024E928; } }
L_0024E838:
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 28672ll ? 1ull : 0ull;  if (t) { goto L_0024E850; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024E870; } }
    c.budget -= 1;
L_0024E850:
    c.r[2].d[0] = 0ull | 36864ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 49152ull;  if (t) { goto L_0024E928; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024E928; } }
    c.budget -= 1;
L_0024E870:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1926u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0024E928; } }
L_0024E880:
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; c.r[1].d[0] = c.r[3].sd[0] < 8193ll ? 1ull : 0ull;  if (t) { goto L_0024E898; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024E8B8; } }
    c.budget -= 1;
L_0024E898:
    c.r[2].d[0] = 0ull | 57344ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0024E8C8; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024E8C8; } }
    c.budget -= 1;
L_0024E8B8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1926u)));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0024E928; } }
L_0024E8C8:
    c.r[2].d[0] = c.r[3].sd[0] < 24576ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 40961ull;  if (t) { goto L_0024E8F0; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024E8F0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1926u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0024E928; } }
L_0024E8F0:
    c.r[1].d[0] = c.r[3].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 24576ll ? 1ull : 0ull;  if (t) { goto L_0024E918; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024E918; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1926u)));
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0024E928; } }
    c.budget -= 1;
L_0024E918:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1926u)));
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0024E928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E930u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 18u, depth + 1u); else { c.pc = 0x0024C3E0u; return; } if (c.pc != 0x0024E930u) [[unlikely]] return; }
L_0024E930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E938u);  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x0019B170u; return; } if (c.pc != 0x0024E938u) [[unlikely]] return; }
L_0024E938:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024E950; } }
L_0024E940:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1928u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0024E948:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0024E950:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_0024E990:
    set32(c.r[29], c.r[29].w[0] - 352u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 29024u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 1928u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 7);
    c.budget -= 22;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_0024F0C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E9F0u);  if (depth < kMaxDepth) unit_0026(c, 230u, depth + 1u); else { c.pc = 0x0019B870u; return; } if (c.pc != 0x0024E9F0u) [[unlikely]] return; }
L_0024E9F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024E9F8u); set32(c.r[4], c.r[16].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0024E9F8u) [[unlikely]] return; }
L_0024E9F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EA08u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x0024EA08u) [[unlikely]] return; }
L_0024EA08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EA10u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0024EA10u) [[unlikely]] return; }
L_0024EA10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EA18u); set32(c.r[4], c.r[17].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0024EA18u) [[unlikely]] return; }
L_0024EA18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EA28u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x0024EA28u) [[unlikely]] return; }
L_0024EA28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EA30u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0024EA30u) [[unlikely]] return; }
L_0024EA30:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 860u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024EE18; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23836u)));
    set32(c.r[2], c.r[28].w[0] - 23804u);
    c.r[4].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_0024EE18; } }
    c.r[30].d[0] = 0ull + 0ull;
    set32(c.r[20], c.r[29].w[0] + 340u);
    set32(c.r[19], c.r[29].w[0] + 344u);
    set32(c.r[21], c.r[29].w[0] + 324u);
    set32(c.r[22], c.r[29].w[0] + 328u);
    c.budget -= 6;
L_0024EA78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[3], c.r[4].w[0] << 10);
    set32(c.r[2], c.r[2].w[0] + 26976u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[30].w[0] + c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0024EDF0; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024EDF0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 516u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024EDF0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_0024EDF0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_0024EDF0; } }
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    set32(c.r[2], c.r[29].w[0] + 336u);
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[3], c.r[29].w[0] + 304u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 336u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 68u));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[20].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 72u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[19].w[0]), c.f[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[29].w[0] + 336u));
    c.f[1] = ld32((c.r[19].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EB1Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0024EB1Cu) [[unlikely]] return; }
L_0024EB1C:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.f[0] = ld32((c.r[20].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EB2Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0024EB2Cu) [[unlikely]] return; }
L_0024EB2C:
    c.f[20] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024EDF0; } }
    c.f[1] = ld32((c.r[17].w[0] + 80u));
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 320u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 84u));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[21].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 88u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[22].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 320u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EB88u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0024EB88u) [[unlikely]] return; }
L_0024EB88:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.f[0] = ld32((c.r[21].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EB98u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0024EB98u) [[unlikely]] return; }
L_0024EB98:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 336u);  if (t) { goto L_0024EDF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EBACu);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0024EBACu) [[unlikely]] return; }
L_0024EBAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EBB4u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0024EBB4u) [[unlikely]] return; }
L_0024EBB4:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EBC0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0024EBC0u) [[unlikely]] return; }
L_0024EBC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EBC8u); set32(c.r[4], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0024EBC8u) [[unlikely]] return; }
L_0024EBC8:
    c.f[13] = ld32((c.r[19].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EBD4u); c.f[12] = ld32((c.r[29].w[0] + 336u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0024EBD4u) [[unlikely]] return; }
L_0024EBD4:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EBE4u); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (depth < kMaxDepth) unit_0026(c, 225u, depth + 1u); else { c.pc = 0x0019B790u; return; } if (c.pc != 0x0024EBE4u) [[unlikely]] return; }
L_0024EBE4:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);
    c.r[18].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 5;
    { const bool t = c.r[18].sd[0] < 0; c.r[1].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;  if (t) { goto L_0024EDF0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 320u);  if (t) { goto L_0024EDF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EC08u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0024EC08u) [[unlikely]] return; }
L_0024EC08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EC10u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0024EC10u) [[unlikely]] return; }
L_0024EC10:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EC1Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0024EC1Cu) [[unlikely]] return; }
L_0024EC1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EC24u); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0024EC24u) [[unlikely]] return; }
L_0024EC24:
    c.f[13] = ld32((c.r[19].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EC30u); c.f[12] = ld32((c.r[29].w[0] + 336u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0024EC30u) [[unlikely]] return; }
L_0024EC30:
    c.f[12] = ld32((c.r[29].w[0] + 320u));
    c.f[13] = ld32((c.r[22].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EC40u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0024EC40u) [[unlikely]] return; }
L_0024EC40:
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024EC70; } }
    c.r[2].d[0] = 0ull | 65520ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024EDF0; } }
    c.budget -= 1;
L_0024EC70:
    c.f[13] = ld32((c.r[20].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EC7Cu); c.f[12] = ld32((c.r[29].w[0] + 336u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0024EC7Cu) [[unlikely]] return; }
L_0024EC7C:
    c.f[12] = ld32((c.r[29].w[0] + 320u));
    c.f[13] = ld32((c.r[21].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EC8Cu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0024EC8Cu) [[unlikely]] return; }
L_0024EC8C:
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024ECB8; } }
    c.r[2].d[0] = 0ull | 65520ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024EDF0; } }
L_0024ECB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ECC0u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0024ECC0u) [[unlikely]] return; }
L_0024ECC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ECC8u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0024ECC8u) [[unlikely]] return; }
L_0024ECC8:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ECD4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0024ECD4u) [[unlikely]] return; }
L_0024ECD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ECDCu); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0024ECDCu) [[unlikely]] return; }
L_0024ECDC:
    c.f[13] = ld32((c.r[29].w[0] + 312u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ECE8u); c.f[12] = ld32((c.r[29].w[0] + 304u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0024ECE8u) [[unlikely]] return; }
L_0024ECE8:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024ED10; } }
    c.r[2].d[0] = 0ull | 57344ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024ED38; } }
L_0024ED10:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[18].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 2048u);  if (t) { goto L_0024ED28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0024EDD8; } }
L_0024ED28:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0024EDD8; } }
    c.budget -= 1;
L_0024ED38:
    c.r[2].d[0] = c.r[3].sd[0] < 24576ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 40961ull;  if (t) { goto L_0024ED78; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024ED78; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[18].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_0024ED68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0024EDD8; } }
L_0024ED68:
    set32(c.r[2], 0u + 2048u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0024EDD8; } }
    c.budget -= 1;
L_0024ED78:
    c.r[1].d[0] = c.r[3].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 24576ll ? 1ull : 0ull;  if (t) { goto L_0024EDB8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024EDB8; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[18].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 4096u);  if (t) { goto L_0024EDA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0024EDD8; } }
    c.budget -= 1;
L_0024EDA8:
    set32(c.r[2], 0u + 8192u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0024EDD8; } }
    c.budget -= 1;
L_0024EDB8:
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[18].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 8192u);  if (t) { goto L_0024EDD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0024EDD8; } }
L_0024EDD0:
    set32(c.r[2], 0u + 4096u);
    st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0024EDD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EDE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 58u, depth + 1u); else { c.pc = 0x0024CD90u; return; } if (c.pc != 0x0024EDE0u) [[unlikely]] return; }
L_0024EDE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EDE8u);  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x0019B170u; return; } if (c.pc != 0x0024EDE8u) [[unlikely]] return; }
L_0024EDE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024F0D0; } }
L_0024EDF0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23836u)));
    set32(c.r[2], c.r[28].w[0] - 23804u);
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.r[4].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[23].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[30], c.r[30].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024EA78u | kUnwind; return; } goto L_0024EA78; } }
L_0024EE18:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 860u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0024F0C8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024EE28:
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024EE48; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024EE28u | kUnwind; return; } goto L_0024EE28; } }
L_0024EE48:
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[29].w[0] + 340u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[2], c.r[2].w[0] - 27856u);
    set32(c.r[18], c.r[29].w[0] + 344u);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[2], c.r[29].w[0] + 336u);
    c.f[1] = ld32((c.r[19].w[0] + 32u));
    set32(c.r[3], c.r[29].w[0] + 304u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 336u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 36u));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[29].w[0] + 336u));
    c.f[1] = ld32((c.r[18].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EEBCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0024EEBCu) [[unlikely]] return; }
L_0024EEBC:
    c.f[1] = ld32((c.r[17].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EECCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0024EECCu) [[unlikely]] return; }
L_0024EECC:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EED8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 129u, depth + 1u); else { c.pc = 0x00196800u; return; } if (c.pc != 0x0024EED8u) [[unlikely]] return; }
L_0024EED8:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024F0C8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 336u);  if (t) { goto L_0024F0C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EEFCu);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0024EEFCu) [[unlikely]] return; }
L_0024EEFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EF04u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0024EF04u) [[unlikely]] return; }
L_0024EF04:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EF10u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0024EF10u) [[unlikely]] return; }
L_0024EF10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EF18u); set32(c.r[4], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0024EF18u) [[unlikely]] return; }
L_0024EF18:
    c.f[12] = ld32((c.r[29].w[0] + 336u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EF24u); c.f[13] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0024EF24u) [[unlikely]] return; }
L_0024EF24:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EF34u); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (depth < kMaxDepth) unit_0026(c, 225u, depth + 1u); else { c.pc = 0x0019B790u; return; } if (c.pc != 0x0024EF34u) [[unlikely]] return; }
L_0024EF34:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;  if (t) { goto L_0024F0C8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 304u);  if (t) { goto L_0024F0C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EF58u); st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0024EF58u) [[unlikely]] return; }
L_0024EF58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EF60u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0024EF60u) [[unlikely]] return; }
L_0024EF60:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EF6Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0024EF6Cu) [[unlikely]] return; }
L_0024EF6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EF74u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0024EF74u) [[unlikely]] return; }
L_0024EF74:
    c.f[13] = ld32((c.r[29].w[0] + 312u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024EF80u); c.f[12] = ld32((c.r[29].w[0] + 304u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0024EF80u) [[unlikely]] return; }
L_0024EF80:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0024EFA0; } }
    c.r[2].d[0] = c.r[3].sd[0] < 12288ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024EFB8; } }
L_0024EFA0:
    c.r[2].d[0] = c.r[3].sd[0] < 20480ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 32768ull;  if (t) { goto L_0024EFC8; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024EFC8; } }
L_0024EFB8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1926u)));
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0024F018; } }
L_0024EFC8:
    c.r[2].d[0] = 0ull | 53248ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0024EFE8; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024F008; } }
    c.budget -= 1;
L_0024EFE8:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 45056ull;  if (t) { goto L_0024F018; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024F018; } }
    c.budget -= 1;
L_0024F008:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1926u)));
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0024F018:
    c.r[2].d[0] = c.r[3].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;  if (t) { goto L_0024F030; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024F050; } }
    c.budget -= 1;
L_0024F030:
    c.r[2].d[0] = 0ull | 49152ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 61440ull;  if (t) { goto L_0024F060; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024F060; } }
    c.budget -= 1;
L_0024F050:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1926u)));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0024F0A8; } }
L_0024F060:
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 28672ll ? 1ull : 0ull;  if (t) { goto L_0024F078; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024F098; } }
    c.budget -= 1;
L_0024F078:
    c.r[2].d[0] = 0ull | 36864ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = 0ull | 49152ull;  if (t) { goto L_0024F0A8; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024F0A8; } }
    c.budget -= 1;
L_0024F098:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1926u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    st16((c.r[16].w[0] + 1926u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0024F0A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F0B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 58u, depth + 1u); else { c.pc = 0x0024CD90u; return; } if (c.pc != 0x0024F0B0u) [[unlikely]] return; }
L_0024F0B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F0B8u);  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x0019B170u; return; } if (c.pc != 0x0024F0B8u) [[unlikely]] return; }
L_0024F0B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0024F0D0; } }
L_0024F0C0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1928u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0024F0C8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0024F0D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_0024F110:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], c.r[4].w[0] + 8592u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 20u), c.f[13]);
    st32((c.r[29].w[0] + 16u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F12Cu); st32((c.r[29].w[0] + 24u), c.f[12]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0024F12Cu) [[unlikely]] return; }
L_0024F12C:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F138u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0024F138u) [[unlikely]] return; }
L_0024F138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F140u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_003B(c, 292u, depth + 1u); else { c.pc = 0x001EF0F0u; return; } if (c.pc != 0x0024F140u) [[unlikely]] return; }
L_0024F140:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024F150:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 29024u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1935u)));
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 7);
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[5].w[0] + c.r[6].w[0]);  if (t) { goto L_0024F1A0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1935u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024F548; } }
L_0024F1A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1940u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0024F200; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F1B8u); set32(c.r[5], c.r[18].w[0] + 1856u);  if (depth < kMaxDepth) unit_0053(c, 336u, depth + 1u); else { c.pc = 0x0024FDA0u; return; } if (c.pc != 0x0024F1B8u) [[unlikely]] return; }
L_0024F1B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F1C0u); set32(c.r[4], c.r[17].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0024F1C0u) [[unlikely]] return; }
L_0024F1C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F1D0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x0024F1D0u) [[unlikely]] return; }
L_0024F1D0:
    set32(c.r[4], c.r[18].w[0] + 1856u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F1DCu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0024F1DCu) [[unlikely]] return; }
L_0024F1DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F1E4u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0024F1E4u) [[unlikely]] return; }
L_0024F1E4:
    c.f[13] = ld32((c.r[29].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F1F0u); c.f[12] = ld32((c.r[29].w[0] + 96u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0024F1F0u) [[unlikely]] return; }
L_0024F1F0:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] & 65535ull;  if (t) { goto L_0024F4A8; } }
L_0024F200:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1938u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_0024F4A8; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 18208u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0024C000u < 16384u) { entry = entries_0053[(t - 0x0024C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0024F228:
    set32(c.r[5], ld32((c.r[18].w[0] + 1920u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0024F4A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F23Cu);  if (depth < kMaxDepth) unit_0053(c, 313u, depth + 1u); else { c.pc = 0x0024FB40u; return; } if (c.pc != 0x0024F23Cu) [[unlikely]] return; }
L_0024F23C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F244u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 321u, depth + 1u); else { c.pc = 0x0024FC20u; return; } if (c.pc != 0x0024F244u) [[unlikely]] return; }
L_0024F244:
    c.f[0] = ld32((c.r[18].w[0] + 1856u));
    set32(c.r[16], c.r[29].w[0] + 104u);
    set32(c.r[4], c.r[17].w[0] + 144u);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1860u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1864u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F268u); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0024F268u) [[unlikely]] return; }
L_0024F268:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F278u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x0024F278u) [[unlikely]] return; }
L_0024F278:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F284u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0024F284u) [[unlikely]] return; }
L_0024F284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F28Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0024F28Cu) [[unlikely]] return; }
L_0024F28C:
    c.f[12] = ld32((c.r[29].w[0] + 96u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F298u); c.f[13] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0024F298u) [[unlikely]] return; }
L_0024F298:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] & 65535ull;  if (t) { goto L_0024F4A8; } }
L_0024F2A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] - 27856u);
    c.budget -= 4;
L_0024F2B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024F2D8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024F2D8; } }
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_0024F2D8:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024F2B8u | kUnwind; return; } goto L_0024F2B8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0024F4A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    set32(c.r[4], c.r[6].w[0] + 8592u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F300u); st32((c.r[18].w[0] + 1824u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0024F300u) [[unlikely]] return; }
L_0024F300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F308u); set32(c.r[4], ld32((c.r[18].w[0] + 1832u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0024F308u) [[unlikely]] return; }
L_0024F308:
    st32((c.r[29].w[0] + 96u), 0u);
    set32(c.r[19], c.r[29].w[0] + 100u);
    st32((c.r[19].w[0]), 0u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[0] = ld32((c.r[18].w[0] + 1824u));
    set32(c.r[16], c.r[29].w[0] + 104u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F32Cu); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0024F32Cu) [[unlikely]] return; }
L_0024F32C:
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[4], c.r[17].w[0] + 144u);
    st32((c.r[18].w[0] + 1856u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0]));
    st32((c.r[18].w[0] + 1860u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F34Cu); st32((c.r[18].w[0] + 1864u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0024F34Cu) [[unlikely]] return; }
L_0024F34C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F35Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x0024F35Cu) [[unlikely]] return; }
L_0024F35C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F368u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0024F368u) [[unlikely]] return; }
L_0024F368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F370u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0024F370u) [[unlikely]] return; }
L_0024F370:
    c.f[12] = ld32((c.r[29].w[0] + 96u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F37Cu); c.f[13] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0024F37Cu) [[unlikely]] return; }
L_0024F37C:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] & 65535ull;  if (t) { goto L_0024F4A8; } }
    c.budget -= 1;
L_0024F390:
    set32(c.r[20], ld32((c.r[18].w[0] + 1920u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0024F4A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F3A4u);  if (depth < kMaxDepth) unit_0025(c, 42u, depth + 1u); else { c.pc = 0x00194EC0u; return; } if (c.pc != 0x0024F3A4u) [[unlikely]] return; }
L_0024F3A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024F4A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    set32(c.r[4], c.r[19].w[0] + 8592u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F3BCu); st32((c.r[18].w[0] + 1824u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0024F3BCu) [[unlikely]] return; }
L_0024F3BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F3CCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x0024F3CCu) [[unlikely]] return; }
L_0024F3CC:
    set32(c.r[4], c.r[20].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F3D8u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0024F3D8u) [[unlikely]] return; }
L_0024F3D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F3E0u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0024F3E0u) [[unlikely]] return; }
L_0024F3E0:
    set32(c.r[20], c.r[29].w[0] + 104u);
    c.f[13] = ld32((c.r[20].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F3F0u); c.f[12] = ld32((c.r[29].w[0] + 96u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0024F3F0u) [[unlikely]] return; }
L_0024F3F0:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    set32(c.r[4], c.r[19].w[0] + 8592u);
    set32(c.r[2], ld32((c.r[18].w[0] + 1832u)));
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.r[16].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F40Cu); set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0024F40Cu) [[unlikely]] return; }
L_0024F40C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F414u); c.r[4].d[0] = c.r[16].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0024F414u) [[unlikely]] return; }
L_0024F414:
    st32((c.r[29].w[0] + 96u), 0u);
    set32(c.r[16], c.r[29].w[0] + 100u);
    st32((c.r[16].w[0]), 0u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[0] = ld32((c.r[18].w[0] + 1824u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F434u); st32((c.r[20].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0024F434u) [[unlikely]] return; }
L_0024F434:
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[4], c.r[17].w[0] + 144u);
    st32((c.r[18].w[0] + 1856u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[18].w[0] + 1860u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0]));
    st32((c.r[18].w[0] + 1864u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1856u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1860u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1864u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F46Cu); st32((c.r[20].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0024F46Cu) [[unlikely]] return; }
L_0024F46C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F47Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x0024F47Cu) [[unlikely]] return; }
L_0024F47C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F488u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0024F488u) [[unlikely]] return; }
L_0024F488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F490u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0024F490u) [[unlikely]] return; }
L_0024F490:
    c.f[12] = ld32((c.r[29].w[0] + 96u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F49Cu); c.f[13] = ld32((c.r[20].w[0]));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0024F49Cu) [[unlikely]] return; }
L_0024F49C:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.r[16].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 3;
L_0024F4A8:
    c.r[1].d[0] = c.r[16].sd[0] < 12289ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull | 53248ull;  if (t) { goto L_0024F4C0; } }
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024F4D0; } }
L_0024F4C0:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0024F4F8; } }
L_0024F4D0:
    c.r[3].d[0] = c.r[16].sd[0] < 20480ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 45057ull;  if (t) { goto L_0024F4F8; } }
    c.r[1].d[0] = c.r[16].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024F4F8; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0024F4F8:
    c.r[3].d[0] = c.r[16].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 28673ll ? 1ull : 0ull;  if (t) { goto L_0024F520; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024F520; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0024F548; } }
    c.budget -= 1;
L_0024F520:
    c.r[3].d[0] = 0ull | 36864ull;
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 61441ull;  if (t) { goto L_0024F548; } }
    c.r[1].d[0] = c.r[16].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024F548; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    st16((c.r[18].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0024F548:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0024F570:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1940u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0024F5B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F5A8u); set32(c.r[5], c.r[16].w[0] + 1856u);  if (depth < kMaxDepth) unit_0053(c, 336u, depth + 1u); else { c.pc = 0x0024FDA0u; return; } if (c.pc != 0x0024F5A8u) [[unlikely]] return; }
L_0024F5A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024FB18; } }
L_0024F5B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1938u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_0024FA48; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 18272u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0024C000u < 16384u) { entry = entries_0053[(t - 0x0024C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0024F5D8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0024F718; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0024F718; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F5F4u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0024F5F4u) [[unlikely]] return; }
L_0024F5F4:
    c.r[8].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8659u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] - 7760u);
    set32(c.r[5], c.r[5].w[0] - 7776u);
    set32(c.r[2], 0u + 17u);
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 1824u), c.f[0]);
    c.f[0] = c.f[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 1824u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.budget -= 28;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024F680; } }
    c.f[0] = ld32((c.r[16].w[0] + 1824u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1824u), c.f[0]);  if (t) { goto L_0024F6A8; } }
L_0024F680:
    set32(c.r[2], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024F6A8; } }
    c.f[0] = ld32((c.r[16].w[0] + 1824u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 1824u), c.f[0]);
    c.budget -= 7;
L_0024F6A8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0024F6D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F6C0u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0024F6C0u) [[unlikely]] return; }
L_0024F6C0:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[2], c.r[2].w[0] << 12);
    st32((c.r[16].w[0] + 1832u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1832u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1832u), c.r[2].w[0]);  if (t) { goto L_0024F700; } }
L_0024F6D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F6E0u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0024F6E0u) [[unlikely]] return; }
L_0024F6E0:
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    st32((c.r[16].w[0] + 1832u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1832u)));
    set32(c.r[2], c.r[2].w[0] + 16384u);
    st32((c.r[16].w[0] + 1832u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1832u));
    st32((c.r[16].w[0] + 1832u), c.r[2].w[0]);
    c.budget -= 8;
L_0024F700:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F70Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 313u, depth + 1u); else { c.pc = 0x0024FB40u; return; } if (c.pc != 0x0024F70Cu) [[unlikely]] return; }
L_0024F70C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024FA48; } }
    c.budget -= 1;
L_0024F718:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_0024FA48; } }
L_0024F720:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0024F790; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024F790; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] - 3744u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F758u); st32((c.r[16].w[0] + 1824u), c.f[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0024F758u) [[unlikely]] return; }
L_0024F758:
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 1832u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1832u)));
    set32(c.r[2], c.r[2].w[0] + 16384u);
    st32((c.r[16].w[0] + 1832u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1832u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F784u); st32((c.r[16].w[0] + 1832u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0053(c, 313u, depth + 1u); else { c.pc = 0x0024FB40u; return; } if (c.pc != 0x0024F784u) [[unlikely]] return; }
L_0024F784:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024FA48; } }
    c.budget -= 1;
L_0024F790:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_0024FA48; } }
L_0024F798:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0024F7E8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024F7E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F7BCu); st32((c.r[16].w[0] + 1824u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0024F7BCu) [[unlikely]] return; }
L_0024F7BC:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 12);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 1832u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1832u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F7DCu); st32((c.r[16].w[0] + 1832u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0053(c, 313u, depth + 1u); else { c.pc = 0x0024FB40u; return; } if (c.pc != 0x0024F7DCu) [[unlikely]] return; }
L_0024F7DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024FA48; } }
    c.budget -= 1;
L_0024F7E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_0024FA48; } }
L_0024F7F0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0024F848; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024F848; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F814u); st32((c.r[16].w[0] + 1824u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0024F814u) [[unlikely]] return; }
L_0024F814:
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 1832u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1832u)));
    set32(c.r[2], c.r[2].w[0] + 16384u);
    st32((c.r[16].w[0] + 1832u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1832u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F840u); st32((c.r[16].w[0] + 1832u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0053(c, 313u, depth + 1u); else { c.pc = 0x0024FB40u; return; } if (c.pc != 0x0024F840u) [[unlikely]] return; }
L_0024F840:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024FA48; } }
L_0024F848:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_0024FA48; } }
L_0024F850:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] - 27856u);
    c.budget -= 6;
L_0024F868:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024F888; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024F888; } }
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_0024F888:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024F868u | kUnwind; return; } goto L_0024F868; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0024FA48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    set32(c.r[4], c.r[6].w[0] + 8592u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F8B0u); st32((c.r[16].w[0] + 1824u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0024F8B0u) [[unlikely]] return; }
L_0024F8B0:
    st32((c.r[16].w[0] + 1832u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F8BCu); set32(c.r[4], ld32((c.r[16].w[0] + 1832u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0024F8BCu) [[unlikely]] return; }
L_0024F8BC:
    st32((c.r[29].w[0] + 96u), 0u);
    set32(c.r[18], c.r[29].w[0] + 100u);
    st32((c.r[18].w[0]), 0u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[0] = ld32((c.r[16].w[0] + 1824u));
    set32(c.r[17], c.r[29].w[0] + 104u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F8E0u); st32((c.r[17].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0024F8E0u) [[unlikely]] return; }
L_0024F8E0:
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[16].w[0] + 1856u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    st32((c.r[16].w[0] + 1860u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1864u), c.f[0]);  if (t) { goto L_0024FA48; } }
    c.budget -= 1;
L_0024F900:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0024F958; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024F958; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F924u); st32((c.r[16].w[0] + 1824u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0024F924u) [[unlikely]] return; }
L_0024F924:
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 1832u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1832u)));
    set32(c.r[2], c.r[2].w[0] + 16384u);
    st32((c.r[16].w[0] + 1832u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 1832u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F950u); st32((c.r[16].w[0] + 1832u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0053(c, 313u, depth + 1u); else { c.pc = 0x0024FB40u; return; } if (c.pc != 0x0024F950u) [[unlikely]] return; }
L_0024F950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024FA48; } }
L_0024F958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_0024FA48; } }
L_0024F960:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0024FA40; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0024FA40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F97Cu);  if (depth < kMaxDepth) unit_0025(c, 42u, depth + 1u); else { c.pc = 0x00194EC0u; return; } if (c.pc != 0x0024F97Cu) [[unlikely]] return; }
L_0024F97C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024FA48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    set32(c.r[4], c.r[17].w[0] + 8592u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F994u); st32((c.r[16].w[0] + 1824u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0024F994u) [[unlikely]] return; }
L_0024F994:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F9A4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x0024F9A4u) [[unlikely]] return; }
L_0024F9A4:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F9B0u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0024F9B0u) [[unlikely]] return; }
L_0024F9B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F9B8u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0024F9B8u) [[unlikely]] return; }
L_0024F9B8:
    set32(c.r[18], c.r[29].w[0] + 104u);
    c.f[13] = ld32((c.r[18].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F9C8u); c.f[12] = ld32((c.r[29].w[0] + 96u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0024F9C8u) [[unlikely]] return; }
L_0024F9C8:
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F9D8u); c.r[20].d[0] = c.r[20].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0024F9D8u) [[unlikely]] return; }
L_0024F9D8:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[4], c.r[17].w[0] + 8592u);
    set32(c.r[2], c.r[2].w[0] << 10);
    set32(c.r[2], c.r[2].w[0] - 8192u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[16].w[0] + 1832u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1832u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024F9FCu); set32(c.r[20], c.r[20].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0024F9FCu) [[unlikely]] return; }
L_0024F9FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FA04u); c.r[4].d[0] = c.r[20].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0024FA04u) [[unlikely]] return; }
L_0024FA04:
    st32((c.r[29].w[0] + 96u), 0u);
    set32(c.r[17], c.r[29].w[0] + 100u);
    st32((c.r[17].w[0]), 0u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[0] = ld32((c.r[16].w[0] + 1824u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FA24u); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0024FA24u) [[unlikely]] return; }
L_0024FA24:
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[16].w[0] + 1856u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[16].w[0] + 1860u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1864u), c.f[0]);  if (t) { goto L_0024FA48; } }
L_0024FA40:
    set32(c.r[19], 0u + 1u);
    c.budget -= 2;
L_0024FA48:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[3], 0u + 60u);  if (t) { goto L_0024FB18; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[5].d[0] = 0ull + 0ull;
    st16((c.r[16].w[0] + 1822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 27856u);
    c.budget -= 6;
L_0024FA68:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024FA88; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024FA88; } }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 2;
L_0024FA88:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024FA68u | kUnwind; return; } goto L_0024FA68; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0024FB00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    set32(c.r[4], c.r[5].w[0] + 8592u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FAB0u); st32((c.r[16].w[0] + 1824u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0024FAB0u) [[unlikely]] return; }
L_0024FAB0:
    st32((c.r[16].w[0] + 1832u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FABCu); set32(c.r[4], ld32((c.r[16].w[0] + 1832u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0024FABCu) [[unlikely]] return; }
L_0024FABC:
    st32((c.r[29].w[0] + 96u), 0u);
    set32(c.r[18], c.r[29].w[0] + 100u);
    st32((c.r[18].w[0]), 0u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[0] = ld32((c.r[16].w[0] + 1824u));
    set32(c.r[17], c.r[29].w[0] + 104u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FAE0u); st32((c.r[17].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0024FAE0u) [[unlikely]] return; }
L_0024FAE0:
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[16].w[0] + 1856u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    st32((c.r[16].w[0] + 1860u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1864u), c.f[0]);  if (t) { goto L_0024FB18; } }
    c.budget -= 1;
L_0024FB00:
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    st32((c.r[16].w[0] + 1856u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    st32((c.r[16].w[0] + 1860u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    st32((c.r[16].w[0] + 1864u), c.f[0]);
    c.budget -= 6;
L_0024FB18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0024FB40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 29024u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 7);
    c.budget -= 15;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0024FC00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FB84u); set32(c.r[4], c.r[18].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0024FB84u) [[unlikely]] return; }
L_0024FB84:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FB94u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x0024FB94u) [[unlikely]] return; }
L_0024FB94:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FBA0u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0024FBA0u) [[unlikely]] return; }
L_0024FBA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FBA8u); set32(c.r[4], c.r[18].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0024FBA8u) [[unlikely]] return; }
L_0024FBA8:
    set32(c.r[16], c.r[29].w[0] + 72u);
    set32(c.r[18], c.r[29].w[0] + 68u);
    c.f[13] = ld32((c.r[18].w[0]));
    c.f[14] = ld32((c.r[16].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FBC0u); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0024FBC0u) [[unlikely]] return; }
L_0024FBC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FBC8u); set32(c.r[4], ld32((c.r[17].w[0] + 1832u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0024FBC8u) [[unlikely]] return; }
L_0024FBC8:
    st32((c.r[29].w[0] + 64u), 0u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    st32((c.r[18].w[0]), 0u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[17].w[0] + 1824u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FBE4u); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0024FBE4u) [[unlikely]] return; }
L_0024FBE4:
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[17].w[0] + 1856u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    st32((c.r[17].w[0] + 1860u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[17].w[0] + 1864u), c.f[0]);
    c.budget -= 7;
L_0024FC00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0024FC20:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 29024u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1940u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[4], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 7);
    c.budget -= 18;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[18], c.r[5].w[0] + c.r[4].w[0]);  if (t) { goto L_0024FD80; } }
    set32(c.r[19], ld32((c.r[20].w[0] + 1920u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0024FD80; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[20].w[0] + 1856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FC88u); set32(c.r[5], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0024FC88u) [[unlikely]] return; }
L_0024FC88:
    set32(c.r[17], c.r[29].w[0] + 104u);
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.f[1] = ld32((c.r[17].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FCA0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0024FCA0u) [[unlikely]] return; }
L_0024FCA0:
    c.facc = fp::mul(c.f[0], c.f[0]);
    set32(c.r[16], c.r[29].w[0] + 100u);
    c.f[0] = ld32((c.r[16].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FCB4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0024FCB4u) [[unlikely]] return; }
L_0024FCB4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_0024FD80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FCD4u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0024FCD4u) [[unlikely]] return; }
L_0024FCD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FCDCu); set32(c.r[4], c.r[18].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0024FCDCu) [[unlikely]] return; }
L_0024FCDC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FCECu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x0024FCECu) [[unlikely]] return; }
L_0024FCEC:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FCF8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0024FCF8u) [[unlikely]] return; }
L_0024FCF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FD00u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x0024FD00u) [[unlikely]] return; }
L_0024FD00:
    c.f[13] = ld32((c.r[17].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FD0Cu); c.f[12] = ld32((c.r[29].w[0] + 96u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0024FD0Cu) [[unlikely]] return; }
L_0024FD0C:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    set32(c.r[4], c.r[19].w[0] + 32u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FD28u); st32((c.r[20].w[0] + 1832u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0024FD28u) [[unlikely]] return; }
L_0024FD28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FD30u); set32(c.r[4], c.r[18].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0024FD30u) [[unlikely]] return; }
L_0024FD30:
    c.f[13] = ld32((c.r[16].w[0]));
    c.f[14] = ld32((c.r[17].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FD40u); c.f[12] = ld32((c.r[29].w[0] + 96u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0024FD40u) [[unlikely]] return; }
L_0024FD40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FD48u); set32(c.r[4], ld32((c.r[20].w[0] + 1832u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0024FD48u) [[unlikely]] return; }
L_0024FD48:
    st32((c.r[29].w[0] + 96u), 0u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    st32((c.r[16].w[0]), 0u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[20].w[0] + 1824u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FD64u); st32((c.r[17].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0024FD64u) [[unlikely]] return; }
L_0024FD64:
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[20].w[0] + 1856u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[20].w[0] + 1860u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[20].w[0] + 1864u), c.f[0]);
    c.budget -= 7;
L_0024FD80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0024FDA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 1888u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0024FE10; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC4160000u);
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[3], c.r[3].w[0] + 29024u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FDF8u); set32(c.r[5], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0024FDF8u) [[unlikely]] return; }
L_0024FDF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FE04u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0024FE04u) [[unlikely]] return; }
L_0024FE04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024FE50; } }
    c.budget -= 1;
L_0024FE10:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[17].w[0] + 1888u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FE24u); set32(c.r[6], c.r[2].w[0] + 640u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0024FE24u) [[unlikely]] return; }
L_0024FE24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FE38u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x0024FE38u) [[unlikely]] return; }
L_0024FE38:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FE4Cu); set32(c.r[6], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x0024FE4Cu) [[unlikely]] return; }
L_0024FE4C:
    c.budget -= 1;
L_0024FE50:
    set32(c.r[4], c.r[17].w[0] + 1904u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FE5Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0024FE5Cu) [[unlikely]] return; }
L_0024FE5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0024FE70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1804u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 13072u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0024C000u < 16384u) { entry = entries_0053[(t - 0x0024C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0024FE90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1805u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0024FF20; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024FEC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024FFB0; } }
L_0024FEC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024FEE0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024FFB0; } }
    c.budget -= 1;
L_0024FEE0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1816u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024FF10; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 30u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FF04u); st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 144u, depth + 1u); else { c.pc = 0x00196C90u; return; } if (c.pc != 0x0024FF04u) [[unlikely]] return; }
L_0024FF04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024FFB0; } }
    c.budget -= 1;
L_0024FF10:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1816u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0024FFB0; } }
    c.budget -= 1;
L_0024FF20:
    set32(c.r[3], ld32((c.r[16].w[0] + 1920u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] + 32u);  if (t) { goto L_0024FF78; } }
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FF38u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0024FF38u) [[unlikely]] return; }
L_0024FF38:
    c.f[13] = ld32((c.r[29].w[0] + 40u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FF44u); c.f[12] = ld32((c.r[29].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0024FF44u) [[unlikely]] return; }
L_0024FF44:
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FF58u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 158u, depth + 1u); else { c.pc = 0x001260A0u; return; } if (c.pc != 0x0024FF58u) [[unlikely]] return; }
L_0024FF58:
    c.r[1].d[0] = c.r[2].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0024FF78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FF6Cu);  if (depth < kMaxDepth) unit_0053(c, 352u, depth + 1u); else { c.pc = 0x0024FFC0u; return; } if (c.pc != 0x0024FF6Cu) [[unlikely]] return; }
L_0024FF6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024FFB0; } }
    c.budget -= 1;
L_0024FF78:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1812u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024FFA8; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1808u));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1808u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0024FFB0; } }
    c.budget -= 1;
L_0024FFA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024FFB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 352u, depth + 1u); else { c.pc = 0x0024FFC0u; return; } if (c.pc != 0x0024FFB0u) [[unlikely]] return; }
L_0024FFB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024FFC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 1804u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 1805u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0024FFF8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1805u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st8((c.r[16].w[0] + 1805u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0024FFF8:
    set32(c.r[2], 0u + 300u);
    st16((c.r[16].w[0] + 1822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
    [[clang::musttail]] return unit_0054(c, 1u, depth);
}

}
