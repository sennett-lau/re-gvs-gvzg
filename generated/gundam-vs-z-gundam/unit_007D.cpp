#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_007D[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    10, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0,
    15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0,
    0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 39, 0, 40, 0,
    41, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 47, 0, 48, 0, 49, 0, 50,
    0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 55, 0, 56, 0, 57, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0,
    60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 65, 0, 0, 0,
    66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 75, 0, 76, 0, 77, 0, 78, 0,
    0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0,
    85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 88, 0, 89, 0, 90, 0, 91, 0, 92, 0,
    0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 95, 0, 96, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0,
    0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 109, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0,
    112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0,
    115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119,
    0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0,
    125, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 141,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0,
    153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 157, 0, 158,
    0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0,
    0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 0,
    167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0,
    178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0,
    184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    188, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193,
    0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0,
    206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0,
    0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0,
    228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 232, 0, 233, 0, 234, 0, 235, 0, 236, 0, 0, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    239, 0, 240, 0, 0, 0, 241, 0, 242, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0,
    0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0,
    0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0,
    271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 273, 0, 274, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 278, 0, 0, 279, 0, 280, 0, 281, 0, 282, 0, 283,
    0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 286, 0, 0, 287, 0, 288, 0, 289, 0, 290, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0,
    294, 0, 0, 295, 0, 296, 0, 297, 0, 298, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 302, 0, 0, 303, 0, 0, 0, 0, 0, 0,
    304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 307,
    0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 311, 0, 312, 0, 313, 0, 0, 0, 314,
    0, 0, 0, 0, 315, 0, 316, 0, 0, 317, 0, 318, 0, 319, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 324,
    0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 327, 0, 328,
};

void unit_007D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002F4000;
    case 2u: goto L_002F4044;
    case 3u: goto L_002F4078;
    case 4u: goto L_002F414C;
    case 5u: goto L_002F4160;
    case 6u: goto L_002F4190;
    case 7u: goto L_002F4270;
    case 8u: goto L_002F42C0;
    case 9u: goto L_002F42D4;
    case 10u: goto L_002F4300;
    case 11u: goto L_002F4308;
    case 12u: goto L_002F4318;
    case 13u: goto L_002F4330;
    case 14u: goto L_002F4360;
    case 15u: goto L_002F4380;
    case 16u: goto L_002F43C4;
    case 17u: goto L_002F44B8;
    case 18u: goto L_002F44D0;
    case 19u: goto L_002F4500;
    case 20u: goto L_002F45E0;
    case 21u: goto L_002F4630;
    case 22u: goto L_002F4644;
    case 23u: goto L_002F4670;
    case 24u: goto L_002F4678;
    case 25u: goto L_002F4688;
    case 26u: goto L_002F46A0;
    case 27u: goto L_002F46D0;
    case 28u: goto L_002F4700;
    case 29u: goto L_002F472C;
    case 30u: goto L_002F4740;
    case 31u: goto L_002F4760;
    case 32u: goto L_002F478C;
    case 33u: goto L_002F4800;
    case 34u: goto L_002F4808;
    case 35u: goto L_002F4820;
    case 36u: goto L_002F482C;
    case 37u: goto L_002F4860;
    case 38u: goto L_002F4868;
    case 39u: goto L_002F4870;
    case 40u: goto L_002F4878;
    case 41u: goto L_002F4880;
    case 42u: goto L_002F4888;
    case 43u: goto L_002F48A0;
    case 44u: goto L_002F48B0;
    case 45u: goto L_002F48D4;
    case 46u: goto L_002F48DC;
    case 47u: goto L_002F48E4;
    case 48u: goto L_002F48EC;
    case 49u: goto L_002F48F4;
    case 50u: goto L_002F48FC;
    case 51u: goto L_002F4904;
    case 52u: goto L_002F490C;
    case 53u: goto L_002F492C;
    case 54u: goto L_002F4934;
    case 55u: goto L_002F493C;
    case 56u: goto L_002F4944;
    case 57u: goto L_002F494C;
    case 58u: goto L_002F4958;
    case 59u: goto L_002F496C;
    case 60u: goto L_002F4980;
    case 61u: goto L_002F49B0;
    case 62u: goto L_002F49C0;
    case 63u: goto L_002F49E0;
    case 64u: goto L_002F49E8;
    case 65u: goto L_002F49F0;
    case 66u: goto L_002F4A00;
    case 67u: goto L_002F4A10;
    case 68u: goto L_002F4A3C;
    case 69u: goto L_002F4A4C;
    case 70u: goto L_002F4A5C;
    case 71u: goto L_002F4A6C;
    case 72u: goto L_002F4AB0;
    case 73u: goto L_002F4AC0;
    case 74u: goto L_002F4AD0;
    case 75u: goto L_002F4AE0;
    case 76u: goto L_002F4AE8;
    case 77u: goto L_002F4AF0;
    case 78u: goto L_002F4AF8;
    case 79u: goto L_002F4B10;
    case 80u: goto L_002F4B20;
    case 81u: goto L_002F4B40;
    case 82u: goto L_002F4B50;
    case 83u: goto L_002F4B58;
    case 84u: goto L_002F4B60;
    case 85u: goto L_002F4B80;
    case 86u: goto L_002F4BC0;
    case 87u: goto L_002F4BD0;
    case 88u: goto L_002F4BD8;
    case 89u: goto L_002F4BE0;
    case 90u: goto L_002F4BE8;
    case 91u: goto L_002F4BF0;
    case 92u: goto L_002F4BF8;
    case 93u: goto L_002F4C10;
    case 94u: goto L_002F4C20;
    case 95u: goto L_002F4C28;
    case 96u: goto L_002F4C30;
    case 97u: goto L_002F4C38;
    case 98u: goto L_002F4C40;
    case 99u: goto L_002F4C74;
    case 100u: goto L_002F4C88;
    case 101u: goto L_002F4C94;
    case 102u: goto L_002F4CA0;
    case 103u: goto L_002F4CAC;
    case 104u: goto L_002F4CC0;
    case 105u: goto L_002F4CF0;
    case 106u: goto L_002F4D1C;
    case 107u: goto L_002F4D30;
    case 108u: goto L_002F4D4C;
    case 109u: goto L_002F4D54;
    case 110u: goto L_002F4D5C;
    case 111u: goto L_002F4D70;
    case 112u: goto L_002F4D80;
    case 113u: goto L_002F4DC0;
    case 114u: goto L_002F4DF0;
    case 115u: goto L_002F4E00;
    case 116u: goto L_002F4E24;
    case 117u: goto L_002F4E2C;
    case 118u: goto L_002F4E40;
    case 119u: goto L_002F4E7C;
    case 120u: goto L_002F4E8C;
    case 121u: goto L_002F4EA0;
    case 122u: goto L_002F4EB0;
    case 123u: goto L_002F4ECC;
    case 124u: goto L_002F4EE4;
    case 125u: goto L_002F4F00;
    case 126u: goto L_002F4F10;
    case 127u: goto L_002F4F18;
    case 128u: goto L_002F4F30;
    case 129u: goto L_002F4F40;
    case 130u: goto L_002F4F60;
    case 131u: goto L_002F4FE4;
    case 132u: goto L_002F50E4;
    case 133u: goto L_002F5150;
    case 134u: goto L_002F5180;
    case 135u: goto L_002F51C4;
    case 136u: goto L_002F51E0;
    case 137u: goto L_002F5320;
    case 138u: goto L_002F5444;
    case 139u: goto L_002F545C;
    case 140u: goto L_002F5470;
    case 141u: goto L_002F547C;
    case 142u: goto L_002F5720;
    case 143u: goto L_002F57AC;
    case 144u: goto L_002F57C4;
    case 145u: goto L_002F58C8;
    case 146u: goto L_002F5918;
    case 147u: goto L_002F5A2C;
    case 148u: goto L_002F5AE0;
    case 149u: goto L_002F5B64;
    case 150u: goto L_002F5B7C;
    case 151u: goto L_002F5BE0;
    case 152u: goto L_002F5BF0;
    case 153u: goto L_002F5C00;
    case 154u: goto L_002F5C48;
    case 155u: goto L_002F5C64;
    case 156u: goto L_002F5C6C;
    case 157u: goto L_002F5C74;
    case 158u: goto L_002F5C7C;
    case 159u: goto L_002F5C8C;
    case 160u: goto L_002F5CCC;
    case 161u: goto L_002F5CF0;
    case 162u: goto L_002F5D10;
    case 163u: goto L_002F5D30;
    case 164u: goto L_002F5D80;
    case 165u: goto L_002F5DE4;
    case 166u: goto L_002F5DEC;
    case 167u: goto L_002F5E00;
    case 168u: goto L_002F5E94;
    case 169u: goto L_002F5F14;
    case 170u: goto L_002F5F50;
    case 171u: goto L_002F5FA0;
    case 172u: goto L_002F5FB0;
    case 173u: goto L_002F5FC0;
    case 174u: goto L_002F6008;
    case 175u: goto L_002F6024;
    case 176u: goto L_002F6040;
    case 177u: goto L_002F6060;
    case 178u: goto L_002F6080;
    case 179u: goto L_002F60A0;
    case 180u: goto L_002F6218;
    case 181u: goto L_002F6360;
    case 182u: goto L_002F644C;
    case 183u: goto L_002F645C;
    case 184u: goto L_002F6480;
    case 185u: goto L_002F6490;
    case 186u: goto L_002F64A0;
    case 187u: goto L_002F6570;
    case 188u: goto L_002F6680;
    case 189u: goto L_002F6688;
    case 190u: goto L_002F669C;
    case 191u: goto L_002F66B0;
    case 192u: goto L_002F66C0;
    case 193u: goto L_002F66FC;
    case 194u: goto L_002F6704;
    case 195u: goto L_002F6730;
    case 196u: goto L_002F674C;
    case 197u: goto L_002F675C;
    case 198u: goto L_002F6880;
    case 199u: goto L_002F68AC;
    case 200u: goto L_002F68BC;
    case 201u: goto L_002F68D0;
    case 202u: goto L_002F6904;
    case 203u: goto L_002F6920;
    case 204u: goto L_002F6958;
    case 205u: goto L_002F69E0;
    case 206u: goto L_002F6A00;
    case 207u: goto L_002F6A30;
    case 208u: goto L_002F6AB0;
    case 209u: goto L_002F6AC0;
    case 210u: goto L_002F6B1C;
    case 211u: goto L_002F6BE0;
    case 212u: goto L_002F6D10;
    case 213u: goto L_002F6D30;
    case 214u: goto L_002F6EC8;
    case 215u: goto L_002F6EE0;
    case 216u: goto L_002F704C;
    case 217u: goto L_002F7104;
    case 218u: goto L_002F7130;
    case 219u: goto L_002F7168;
    case 220u: goto L_002F71D0;
    case 221u: goto L_002F71F0;
    case 222u: goto L_002F720C;
    case 223u: goto L_002F7228;
    case 224u: goto L_002F7240;
    case 225u: goto L_002F72A8;
    case 226u: goto L_002F72B0;
    case 227u: goto L_002F72F0;
    case 228u: goto L_002F7300;
    case 229u: goto L_002F7310;
    case 230u: goto L_002F7348;
    case 231u: goto L_002F7398;
    case 232u: goto L_002F7408;
    case 233u: goto L_002F7410;
    case 234u: goto L_002F7418;
    case 235u: goto L_002F7420;
    case 236u: goto L_002F7428;
    case 237u: goto L_002F7438;
    case 238u: goto L_002F7440;
    case 239u: goto L_002F7480;
    case 240u: goto L_002F7488;
    case 241u: goto L_002F7498;
    case 242u: goto L_002F74A0;
    case 243u: goto L_002F74A8;
    case 244u: goto L_002F74C0;
    case 245u: goto L_002F74D8;
    case 246u: goto L_002F74E0;
    case 247u: goto L_002F7508;
    case 248u: goto L_002F7550;
    case 249u: goto L_002F7588;
    case 250u: goto L_002F75E4;
    case 251u: goto L_002F75F4;
    case 252u: goto L_002F7610;
    case 253u: goto L_002F7640;
    case 254u: goto L_002F76B0;
    case 255u: goto L_002F76D0;
    case 256u: goto L_002F76F0;
    case 257u: goto L_002F7730;
    case 258u: goto L_002F7794;
    case 259u: goto L_002F77B0;
    case 260u: goto L_002F77F8;
    case 261u: goto L_002F7810;
    case 262u: goto L_002F78E0;
    case 263u: goto L_002F7938;
    case 264u: goto L_002F7954;
    case 265u: goto L_002F7AD0;
    case 266u: goto L_002F7AE0;
    case 267u: goto L_002F7AF0;
    case 268u: goto L_002F7B48;
    case 269u: goto L_002F7B5C;
    case 270u: goto L_002F7B68;
    case 271u: goto L_002F7B80;
    case 272u: goto L_002F7BB0;
    case 273u: goto L_002F7C14;
    case 274u: goto L_002F7C1C;
    case 275u: goto L_002F7C24;
    case 276u: goto L_002F7C38;
    case 277u: goto L_002F7C48;
    case 278u: goto L_002F7C50;
    case 279u: goto L_002F7C5C;
    case 280u: goto L_002F7C64;
    case 281u: goto L_002F7C6C;
    case 282u: goto L_002F7C74;
    case 283u: goto L_002F7C7C;
    case 284u: goto L_002F7C90;
    case 285u: goto L_002F7CA0;
    case 286u: goto L_002F7CA8;
    case 287u: goto L_002F7CB4;
    case 288u: goto L_002F7CBC;
    case 289u: goto L_002F7CC4;
    case 290u: goto L_002F7CCC;
    case 291u: goto L_002F7CD4;
    case 292u: goto L_002F7CE8;
    case 293u: goto L_002F7CF8;
    case 294u: goto L_002F7D00;
    case 295u: goto L_002F7D0C;
    case 296u: goto L_002F7D14;
    case 297u: goto L_002F7D1C;
    case 298u: goto L_002F7D24;
    case 299u: goto L_002F7D2C;
    case 300u: goto L_002F7D40;
    case 301u: goto L_002F7D50;
    case 302u: goto L_002F7D58;
    case 303u: goto L_002F7D64;
    case 304u: goto L_002F7D80;
    case 305u: goto L_002F7DDC;
    case 306u: goto L_002F7DF0;
    case 307u: goto L_002F7DFC;
    case 308u: goto L_002F7E14;
    case 309u: goto L_002F7E44;
    case 310u: goto L_002F7ED4;
    case 311u: goto L_002F7EDC;
    case 312u: goto L_002F7EE4;
    case 313u: goto L_002F7EEC;
    case 314u: goto L_002F7EFC;
    case 315u: goto L_002F7F10;
    case 316u: goto L_002F7F18;
    case 317u: goto L_002F7F24;
    case 318u: goto L_002F7F2C;
    case 319u: goto L_002F7F34;
    case 320u: goto L_002F7F3C;
    case 321u: goto L_002F7F50;
    case 322u: goto L_002F7F60;
    case 323u: goto L_002F7F74;
    case 324u: goto L_002F7F7C;
    case 325u: goto L_002F7F88;
    case 326u: goto L_002F7FEC;
    case 327u: goto L_002F7FF4;
    case 328u: goto L_002F7FFC;
    default: bad_entry(c, 0x002F4000u); return;
    }
L_002F4000:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 17008u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] - 28888u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[17].w[0] + 304u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4044u); st32((c.r[4].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x002F4044u) [[unlikely]] return; }
L_002F4044:
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u + 9u);
    set32(c.r[2], c.r[2].w[0] - 27856u);
    c.r[12].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[10], c.r[10].w[0] - 11776u);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0xC1200000u);
    c.budget -= 13;
L_002F4078:
    st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[11].w[0]));
    set32(c.r[12], c.r[12].w[0] + 5u);
    st32((c.r[16].w[0] + 16u), c.r[9].w[0]);
    set32(c.r[6], c.r[11].w[0] + 15u);
    st32((c.r[16].w[0] + 20u), c.r[8].w[0]);
    set32(c.r[5], c.r[11].w[0] + 30u);
    c.r[7].d[0] = ld16((c.r[10].w[0]));
    set32(c.r[4], c.r[11].w[0] + 45u);
    set32(c.r[3], c.r[11].w[0] + 60u);
    c.r[2].d[0] = c.r[12].sd[0] < 10ll ? 1ull : 0ull;
    set32(c.r[11], c.r[11].w[0] + 75u);
    st32((c.r[16].w[0] + 24u), c.r[7].w[0]);
    st8((c.r[16].w[0] + 15u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 30u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 32u), c.r[9].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[8].w[0]);
    c.r[6].d[0] = ld16((c.r[10].w[0] + 2u));
    st32((c.r[16].w[0] + 40u), c.r[6].w[0]);
    st8((c.r[16].w[0] + 31u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 46u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 48u), c.r[9].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[8].w[0]);
    c.r[5].d[0] = ld16((c.r[10].w[0] + 4u));
    st32((c.r[16].w[0] + 56u), c.r[5].w[0]);
    st8((c.r[16].w[0] + 47u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 62u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 60u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 64u), c.r[9].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[8].w[0]);
    c.r[4].d[0] = ld16((c.r[10].w[0] + 6u));
    st32((c.r[16].w[0] + 72u), c.r[4].w[0]);
    st8((c.r[16].w[0] + 63u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 78u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 76u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 80u), c.r[9].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[8].w[0]);
    c.r[3].d[0] = ld16((c.r[10].w[0] + 8u));
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[10], c.r[10].w[0] + 10u);
    st8((c.r[16].w[0] + 79u), static_cast<std::uint8_t>(0u));
    c.budget -= 45;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 80u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F4078u | kUnwind; return; } goto L_002F4078; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x446F0000u);
    st32((c.r[17].w[0] + 32u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st32((c.r[17].w[0] + 36u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F414Cu); st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007D(c, 5u, depth + 1u); else { c.pc = 0x002F4160u; return; } if (c.pc != 0x002F414Cu) [[unlikely]] return; }
L_002F414C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F4160:
    set32(c.r[10], c.r[4].w[0] + 304u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[10].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3FAA0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F2A0000u);
    c.r[5].d[0] = c.r[5].d[0] | 43691ull;
    c.r[3].d[0] = c.r[3].d[0] | 43691ull;
    c.f[2] = c.r[5].w[0];
    set32(c.r[6], 0u + 1u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[5], 0u + 30u);
    c.budget -= 12;
L_002F4190:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 14u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; set32(c.r[9], c.r[7].w[0] + 12u);  if (t) { goto L_002F41E8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F41B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F4230; } }
    c.budget -= 1;
L_002F41B0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002F4230; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[9].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_002F4230; } }
    c.budget -= 1;
L_002F41E8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002F4218; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[9].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002F4230; } }
L_002F4218:
    c.f[0] = ld32((c.r[9].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[9].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[9].w[0] + 8u), c.f[0]);
    c.budget -= 6;
L_002F4230:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F4190u | kUnwind; return; } goto L_002F4190; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 158u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002F4260; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002F4268; } }
L_002F4260:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002F4268:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F4270:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[19], c.r[20].w[0] + 304u);  if (t) { goto L_002F4340; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002F4340; } }
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002F42C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 15u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[18], c.r[16].w[0] + 12u);  if (t) { goto L_002F4330; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F42D4u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002F42D4u) [[unlikely]] return; }
L_002F42D4:
    c.f[0] = c.r[17].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[12] = ld32((c.r[20].w[0] + 32u));
    c.f[13] = ld32((c.r[20].w[0] + 36u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4300u); c.f[14] = fp::add(c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002F4300u) [[unlikely]] return; }
L_002F4300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4308u); set32(c.r[4], ld32((c.r[18].w[0] + 12u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002F4308u) [[unlikely]] return; }
L_002F4308:
    c.f[13] = ld32((c.r[18].w[0] + 8u));
    c.f[14] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4318u); c.f[12] = ld32((c.r[18].w[0] + 4u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002F4318u) [[unlikely]] return; }
L_002F4318:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4330u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x002F4330u) [[unlikely]] return; }
L_002F4330:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F42C0u | kUnwind; return; } goto L_002F42C0; } }
L_002F4340:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002F4360:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 11744u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002F4000u < 16384u) { entry = entries_007D[(t - 0x002F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002F4380:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 17888u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] - 28888u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[17].w[0] + 304u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F43C4u); st32((c.r[4].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x002F43C4u) [[unlikely]] return; }
L_002F43C4:
    set32(c.r[14], ld32((c.r[17].w[0] + 176u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x446F0000u);
    set32(c.r[13], 0u + 9u);
    set32(c.r[10], c.r[10].w[0] - 27856u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[9], 0u + 15u);
    set32(c.r[8], 0u + 30u);
    set32(c.r[7], 0u + 45u);
    set32(c.r[6], 0u + 60u);
    st32((c.r[16].w[0]), c.r[14].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x44720000u);
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[13].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[17].w[0] + 24u), c.r[10].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 16u), c.r[12].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[11].w[0]);
    c.r[10].d[0] = ld16((c.r[1].w[0] - 11728u));
    st32((c.r[16].w[0] + 24u), c.r[10].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[16].w[0] + 15u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 30u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[9].w[0]));
    st32((c.r[16].w[0] + 32u), c.r[12].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[11].w[0]);
    c.r[9].d[0] = ld16((c.r[1].w[0] - 11726u));
    st32((c.r[16].w[0] + 40u), c.r[9].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[16].w[0] + 31u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 46u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[8].w[0]));
    st32((c.r[16].w[0] + 48u), c.r[12].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[11].w[0]);
    c.r[8].d[0] = ld16((c.r[1].w[0] - 11724u));
    st32((c.r[16].w[0] + 56u), c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[16].w[0] + 47u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 62u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 60u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st32((c.r[16].w[0] + 64u), c.r[12].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[11].w[0]);
    c.r[7].d[0] = ld16((c.r[1].w[0] - 11722u));
    st32((c.r[16].w[0] + 72u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[16].w[0] + 63u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 78u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 76u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 80u), c.r[12].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[11].w[0]);
    c.r[6].d[0] = ld16((c.r[1].w[0] - 11720u));
    st32((c.r[16].w[0] + 88u), c.r[6].w[0]);
    st8((c.r[16].w[0] + 79u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 32u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 36u), 0u);
    c.budget -= 61;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F44B8u); st32((c.r[17].w[0] + 40u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_007D(c, 5u, depth + 1u); else { c.pc = 0x002F4160u; return; } if (c.pc != 0x002F44B8u) [[unlikely]] return; }
L_002F44B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F44D0:
    set32(c.r[10], c.r[4].w[0] + 304u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[10].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xBFAA0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF2A0000u);
    c.r[5].d[0] = c.r[5].d[0] | 43691ull;
    c.r[3].d[0] = c.r[3].d[0] | 43691ull;
    c.f[2] = c.r[5].w[0];
    set32(c.r[6], 0u + 1u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[5], 0u + 30u);
    c.budget -= 12;
L_002F4500:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 14u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; set32(c.r[9], c.r[7].w[0] + 12u);  if (t) { goto L_002F4558; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F4520; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F45A0; } }
    c.budget -= 1;
L_002F4520:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002F45A0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[9].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_002F45A0; } }
    c.budget -= 1;
L_002F4558:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002F4588; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[9].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002F45A0; } }
L_002F4588:
    c.f[0] = ld32((c.r[9].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[9].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[9].w[0] + 8u), c.f[0]);
    c.budget -= 6;
L_002F45A0:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F4500u | kUnwind; return; } goto L_002F4500; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 78u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002F45D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002F45D8; } }
L_002F45D0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002F45D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F45E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[19], c.r[20].w[0] + 304u);  if (t) { goto L_002F46B0; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002F46B0; } }
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002F4630:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 15u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[18], c.r[16].w[0] + 12u);  if (t) { goto L_002F46A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4644u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002F4644u) [[unlikely]] return; }
L_002F4644:
    c.f[0] = c.r[17].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[12] = ld32((c.r[20].w[0] + 32u));
    c.f[13] = ld32((c.r[20].w[0] + 36u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4670u); c.f[14] = fp::add(c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002F4670u) [[unlikely]] return; }
L_002F4670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4678u); set32(c.r[4], ld32((c.r[18].w[0] + 12u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002F4678u) [[unlikely]] return; }
L_002F4678:
    c.f[13] = ld32((c.r[18].w[0] + 8u));
    c.f[14] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4688u); c.f[12] = ld32((c.r[18].w[0] + 4u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002F4688u) [[unlikely]] return; }
L_002F4688:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F46A0u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x002F46A0u) [[unlikely]] return; }
L_002F46A0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F4630u | kUnwind; return; } goto L_002F4630; } }
L_002F46B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002F46D0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 11696u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002F4000u < 16384u) { entry = entries_007D[(t - 0x002F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002F4700:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 11688u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F472Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F472Cu) [[unlikely]] return; }
L_002F472C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002F4740:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002F4760:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F478Cu); st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x002F478Cu) [[unlikely]] return; }
L_002F478C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[1].w[0] + 18776u), 0u);
    set32(c.r[5], 0u + 30u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st32((c.r[1].w[0] + 18780u), 0u);
    set32(c.r[2], c.r[2].w[0] - 12544u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[4], 0u + 2u);
    st16((c.r[1].w[0] + 18774u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st16((c.r[1].w[0] + 18772u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st16((c.r[1].w[0] + 18770u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st16((c.r[1].w[0] + 18768u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st32((c.r[1].w[0] + 18764u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st32((c.r[1].w[0] + 18760u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st32((c.r[1].w[0] + 18756u), 0u);
    st8((c.r[3].w[0] + 81u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st32((c.r[1].w[0] + 18752u), c.r[2].w[0]);
    st16((c.r[28].w[0] - 23844u), static_cast<std::uint16_t>(0u));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4800u); st16((c.r[28].w[0] - 23848u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0009(c, 167u, depth + 1u); else { c.pc = 0x00126260u; return; } if (c.pc != 0x002F4800u) [[unlikely]] return; }
L_002F4800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4808u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002F4808u) [[unlikely]] return; }
L_002F4808:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 9888u);
    set32(c.r[5], c.r[5].w[0] - 11712u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4820u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x00127690u; return; } if (c.pc != 0x002F4820u) [[unlikely]] return; }
L_002F4820:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F482Cu); set32(c.r[4], c.r[4].w[0] - 9584u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002F482Cu) [[unlikely]] return; }
L_002F482C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[5], c.r[5].w[0] - 9584u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[2].w[0] + 64u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st32((c.r[2].w[0] + 60u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 69u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4860u); st8((c.r[2].w[0] + 68u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0009(c, 167u, depth + 1u); else { c.pc = 0x00126260u; return; } if (c.pc != 0x002F4860u) [[unlikely]] return; }
L_002F4860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4868u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x002F4868u) [[unlikely]] return; }
L_002F4868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4870u);  if (depth < kMaxDepth) unit_000B(c, 24u, depth + 1u); else { c.pc = 0x0012C850u; return; } if (c.pc != 0x002F4870u) [[unlikely]] return; }
L_002F4870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4878u);  if (depth < kMaxDepth) unit_004D(c, 130u, depth + 1u); else { c.pc = 0x002362E0u; return; } if (c.pc != 0x002F4878u) [[unlikely]] return; }
L_002F4878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4880u);  if (depth < kMaxDepth) unit_0048(c, 170u, depth + 1u); else { c.pc = 0x00222740u; return; } if (c.pc != 0x002F4880u) [[unlikely]] return; }
L_002F4880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4888u);  if (depth < kMaxDepth) unit_0048(c, 190u, depth + 1u); else { c.pc = 0x00222B10u; return; } if (c.pc != 0x002F4888u) [[unlikely]] return; }
L_002F4888:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002F48A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F48B0u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x002F48B0u) [[unlikely]] return; }
L_002F48B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F4970; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F48D4u); st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0048(c, 197u, depth + 1u); else { c.pc = 0x00222B90u; return; } if (c.pc != 0x002F48D4u) [[unlikely]] return; }
L_002F48D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F48DCu);  if (depth < kMaxDepth) unit_000B(c, 35u, depth + 1u); else { c.pc = 0x0012CB40u; return; } if (c.pc != 0x002F48DCu) [[unlikely]] return; }
L_002F48DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F48E4u);  if (depth < kMaxDepth) unit_0046(c, 207u, depth + 1u); else { c.pc = 0x0021B5B0u; return; } if (c.pc != 0x002F48E4u) [[unlikely]] return; }
L_002F48E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F48ECu);  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x002F48ECu) [[unlikely]] return; }
L_002F48EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F48F4u);  if (depth < kMaxDepth) unit_0078(c, 152u, depth + 1u); else { c.pc = 0x002E1870u; return; } if (c.pc != 0x002F48F4u) [[unlikely]] return; }
L_002F48F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F48FCu);  if (depth < kMaxDepth) unit_0078(c, 17u, depth + 1u); else { c.pc = 0x002E0080u; return; } if (c.pc != 0x002F48FCu) [[unlikely]] return; }
L_002F48FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4904u);  if (depth < kMaxDepth) unit_0078(c, 224u, depth + 1u); else { c.pc = 0x002E2910u; return; } if (c.pc != 0x002F4904u) [[unlikely]] return; }
L_002F4904:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F490Cu);  if (depth < kMaxDepth) unit_0078(c, 154u, depth + 1u); else { c.pc = 0x002E18C0u; return; } if (c.pc != 0x002F490Cu) [[unlikely]] return; }
L_002F490C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x497F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.r[2].d[0] = c.r[2].d[0] | 65320ull;
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F492Cu);  if (depth < kMaxDepth) unit_005B(c, 98u, depth + 1u); else { c.pc = 0x0026CEC0u; return; } if (c.pc != 0x002F492Cu) [[unlikely]] return; }
L_002F492C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4934u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 384u, depth + 1u); else { c.pc = 0x0020F700u; return; } if (c.pc != 0x002F4934u) [[unlikely]] return; }
L_002F4934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F493Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 43u, depth + 1u); else { c.pc = 0x0021C390u; return; } if (c.pc != 0x002F493Cu) [[unlikely]] return; }
L_002F493C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4944u);  if (depth < kMaxDepth) unit_0045(c, 85u, depth + 1u); else { c.pc = 0x00214BD0u; return; } if (c.pc != 0x002F4944u) [[unlikely]] return; }
L_002F4944:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F494Cu);  if (depth < kMaxDepth) unit_004B(c, 22u, depth + 1u); else { c.pc = 0x0022C4E0u; return; } if (c.pc != 0x002F494Cu) [[unlikely]] return; }
L_002F494C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4958u); set32(c.r[4], c.r[4].w[0] + 15664u);  if (depth < kMaxDepth) unit_005B(c, 89u, depth + 1u); else { c.pc = 0x0026CD50u; return; } if (c.pc != 0x002F4958u) [[unlikely]] return; }
L_002F4958:
    set32(c.r[2], 0u + 8000u);
    c.r[4].d[0] = 0ull + 0ull;
    st16((c.r[28].w[0] - 23120u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F496Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x002F496Cu) [[unlikely]] return; }
L_002F496C:
    c.budget -= 1;
L_002F4970:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002F4980:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 11664u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002F4000u < 16384u) { entry = entries_007D[(t - 0x002F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002F49B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F49C0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x002F49C0u) [[unlikely]] return; }
L_002F49C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F49D8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002F49D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F49E0u);  if (depth < kMaxDepth) unit_0079(c, 110u, depth + 1u); else { c.pc = 0x002E6490u; return; } if (c.pc != 0x002F49E0u) [[unlikely]] return; }
L_002F49E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F49E8u);  if (depth < kMaxDepth) unit_007D(c, 86u, depth + 1u); else { c.pc = 0x002F4BC0u; return; } if (c.pc != 0x002F49E8u) [[unlikely]] return; }
L_002F49E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F49F0u);  if (depth < kMaxDepth) unit_007D(c, 93u, depth + 1u); else { c.pc = 0x002F4C10u; return; } if (c.pc != 0x002F49F0u) [[unlikely]] return; }
L_002F49F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002F4A00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4A10u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x002F4A10u) [[unlikely]] return; }
L_002F4A10:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 33632ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F4A70; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4A3Cu); st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x002F4A3Cu) [[unlikely]] return; }
L_002F4A3C:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4A4Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x002F4A4Cu) [[unlikely]] return; }
L_002F4A4C:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4A5Cu); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x002F4A5Cu) [[unlikely]] return; }
L_002F4A5C:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4A6Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x002F4A6Cu) [[unlikely]] return; }
L_002F4A6C:
    c.budget -= 1;
L_002F4A70:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 23120u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F4AE0; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[28].w[0] - 23120u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_002F4AE0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4AB0u); st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x002F4AB0u) [[unlikely]] return; }
L_002F4AB0:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4AC0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x002F4AC0u) [[unlikely]] return; }
L_002F4AC0:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4AD0u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x002F4AD0u) [[unlikely]] return; }
L_002F4AD0:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4AE0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x002F4AE0u) [[unlikely]] return; }
L_002F4AE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4AE8u);  if (depth < kMaxDepth) unit_0079(c, 110u, depth + 1u); else { c.pc = 0x002E6490u; return; } if (c.pc != 0x002F4AE8u) [[unlikely]] return; }
L_002F4AE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4AF0u);  if (depth < kMaxDepth) unit_007D(c, 86u, depth + 1u); else { c.pc = 0x002F4BC0u; return; } if (c.pc != 0x002F4AF0u) [[unlikely]] return; }
L_002F4AF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4AF8u);  if (depth < kMaxDepth) unit_007D(c, 93u, depth + 1u); else { c.pc = 0x002F4C10u; return; } if (c.pc != 0x002F4AF8u) [[unlikely]] return; }
L_002F4AF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002F4B10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4B20u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x002F4B20u) [[unlikely]] return; }
L_002F4B20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F4B48; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st16((c.r[28].w[0] - 23120u), static_cast<std::uint16_t>(0u));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4B40u); st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004E(c, 5u, depth + 1u); else { c.pc = 0x00238040u; return; } if (c.pc != 0x002F4B40u) [[unlikely]] return; }
L_002F4B40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F4B68; } }
L_002F4B48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4B50u);  if (depth < kMaxDepth) unit_0079(c, 110u, depth + 1u); else { c.pc = 0x002E6490u; return; } if (c.pc != 0x002F4B50u) [[unlikely]] return; }
L_002F4B50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4B58u);  if (depth < kMaxDepth) unit_007D(c, 86u, depth + 1u); else { c.pc = 0x002F4BC0u; return; } if (c.pc != 0x002F4B58u) [[unlikely]] return; }
L_002F4B58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4B60u);  if (depth < kMaxDepth) unit_007D(c, 93u, depth + 1u); else { c.pc = 0x002F4C10u; return; } if (c.pc != 0x002F4B60u) [[unlikely]] return; }
L_002F4B60:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002F4B68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002F4B80:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 23120u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[28].w[0] - 23120u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_002F4BB0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_002F4BB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_002F4BC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4BD0u);  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x002F4BD0u) [[unlikely]] return; }
L_002F4BD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4BD8u);  if (depth < kMaxDepth) unit_006A(c, 139u, depth + 1u); else { c.pc = 0x002AA020u; return; } if (c.pc != 0x002F4BD8u) [[unlikely]] return; }
L_002F4BD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4BE0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x002F4BE0u) [[unlikely]] return; }
L_002F4BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4BE8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x002F4BE8u) [[unlikely]] return; }
L_002F4BE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4BF0u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x002F4BF0u) [[unlikely]] return; }
L_002F4BF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4BF8u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x002F4BF8u) [[unlikely]] return; }
L_002F4BF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002F4C10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4C20u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x002F4C20u) [[unlikely]] return; }
L_002F4C20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4C28u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x002F4C28u) [[unlikely]] return; }
L_002F4C28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4C30u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x002F4C30u) [[unlikely]] return; }
L_002F4C30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4C38u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x002F4C38u) [[unlikely]] return; }
L_002F4C38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4C40u);  if (depth < kMaxDepth) unit_0078(c, 154u, depth + 1u); else { c.pc = 0x002E18C0u; return; } if (c.pc != 0x002F4C40u) [[unlikely]] return; }
L_002F4C40:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[3], c.r[3].w[0] + 29024u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 51u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 64u), 0u);
    st32((c.r[3].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4C74u); st32((c.r[3].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_0045(c, 90u, depth + 1u); else { c.pc = 0x00214EF0u; return; } if (c.pc != 0x002F4C74u) [[unlikely]] return; }
L_002F4C74:
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[4], c.r[4].w[0] - 16432u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4C88u); st8((c.r[2].w[0] + 433u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002F4C88u) [[unlikely]] return; }
L_002F4C88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4C94u); set32(c.r[4], c.r[4].w[0] - 15136u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002F4C94u) [[unlikely]] return; }
L_002F4C94:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4CA0u); set32(c.r[4], c.r[4].w[0] - 928u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002F4CA0u) [[unlikely]] return; }
L_002F4CA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4CACu); set32(c.r[4], c.r[4].w[0] - 912u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002F4CACu) [[unlikely]] return; }
L_002F4CAC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002F4CC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 11648u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002F4000u < 16384u) { entry = entries_007D[(t - 0x002F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002F4CF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 11640u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4D1Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F4D1Cu) [[unlikely]] return; }
L_002F4D1C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002F4D30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4D4Cu); st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x002F4D4Cu) [[unlikely]] return; }
L_002F4D4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4D54u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x002F4D54u) [[unlikely]] return; }
L_002F4D54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4D5Cu);  if (depth < kMaxDepth) unit_0049(c, 4u, depth + 1u); else { c.pc = 0x00224070u; return; } if (c.pc != 0x002F4D5Cu) [[unlikely]] return; }
L_002F4D5C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002F4D70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4D80u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x002F4D80u) [[unlikely]] return; }
L_002F4D80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F4DA8; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 360u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[28].w[0] - 23124u), c.r[3].w[0]);
    c.budget -= 8;
L_002F4DA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002F4DC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 11632u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002F4000u < 16384u) { entry = entries_007D[(t - 0x002F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002F4DF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4E00u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x002F4E00u) [[unlikely]] return; }
L_002F4E00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F4E18; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002F4E18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4E24u); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002F4E24u) [[unlikely]] return; }
L_002F4E24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4E2Cu); set32(c.r[4], 0u + 26u);  if (depth < kMaxDepth) unit_004E(c, 35u, depth + 1u); else { c.pc = 0x002382B0u; return; } if (c.pc != 0x002F4E2Cu) [[unlikely]] return; }
L_002F4E2C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002F4E40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23124u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[28].w[0] - 23124u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23124u)));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002F4E80; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4E7Cu); st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x002F4E7Cu) [[unlikely]] return; }
L_002F4E7C:
    c.budget -= 1;
L_002F4E80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4E8Cu); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002F4E8Cu) [[unlikely]] return; }
L_002F4E8C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002F4EA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4EB0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x002F4EB0u) [[unlikely]] return; }
L_002F4EB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F4ED8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4ECCu); st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004E(c, 5u, depth + 1u); else { c.pc = 0x00238040u; return; } if (c.pc != 0x002F4ECCu) [[unlikely]] return; }
L_002F4ECC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F4EE8; } }
    c.budget -= 1;
L_002F4ED8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4EE4u); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x002F4EE4u) [[unlikely]] return; }
L_002F4EE4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F4EE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002F4F00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4F10u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002F4F10u) [[unlikely]] return; }
L_002F4F10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4F18u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 384u, depth + 1u); else { c.pc = 0x0020F700u; return; } if (c.pc != 0x002F4F18u) [[unlikely]] return; }
L_002F4F18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] - 28144u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4F30u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 32u, depth + 1u); else { c.pc = 0x002D8800u; return; } if (c.pc != 0x002F4F30u) [[unlikely]] return; }
L_002F4F30:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002F4F40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 1936u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002F4000u < 16384u) { entry = entries_007D[(t - 0x002F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002F4F60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 23552u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], 0u + 28u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    st8((c.r[4].w[0] + 312u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 313u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_002F4FC0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    set32(c.r[2], 0u + 29u);
    set32(c.r[3], c.r[3].w[0] - 20u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_002F4FC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 9u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 29104u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4FE4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x002F4FE4u) [[unlikely]] return; }
L_002F4FE4:
    set32(c.r[3], ld32((c.r[17].w[0] + 176u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 5760u);
    set32(c.r[7], c.r[7].w[0] - 5280u);
    set32(c.r[6], c.r[6].w[0] - 3504u);
    set32(c.r[5], c.r[5].w[0] - 2048u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[9], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[8], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[9].w[0])));
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(0u));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 17u)));
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[3].w[0] << 3);
    set32(c.r[3], ld32((c.r[8].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st16((c.r[16].w[0] + 22u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[3].w[0] << 5);
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 19u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[3].w[0] << 5);
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 64;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F50E4u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002F50E4u) [[unlikely]] return; }
L_002F50E4:
    st32((c.r[17].w[0] + 56u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[17].w[0] + 52u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[17].w[0] + 48u), 0u);
    set32(c.r[5], c.r[5].w[0] - 5280u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] - 3504u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 17u)));
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    st32((c.r[16].w[0] + 36u), 0u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 17u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5150u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002F5150u) [[unlikely]] return; }
L_002F5150:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    set32(c.r[3], c.r[3].w[0] - 2048u);
    set32(c.r[4], c.r[17].w[0] + 112u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5180u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002F5180u) [[unlikely]] return; }
L_002F5180:
    st16((c.r[16].w[0] + 30u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 5760u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 17u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F51C4u); st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_007D(c, 136u, depth + 1u); else { c.pc = 0x002F51E0u; return; } if (c.pc != 0x002F51C4u) [[unlikely]] return; }
L_002F51C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F51E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 324u)));
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_002F5580; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F5450; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 5760u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 16u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], c.r[7].w[0] - 1u);
    set32(c.r[18], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[5].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[19], c.r[6].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 2u)));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 20u)));
    c.budget -= 26;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_002F5410; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002F5310; } }
    c.f[1] = ld32((c.r[18].w[0] + 16u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 20u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 30;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 48u), c.f[0]);  if (t) { goto L_002F5390; } }
    c.budget -= 1;
L_002F5310:
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5320u); st16((c.r[16].w[0] + 80u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002F5320u) [[unlikely]] return; }
L_002F5320:
    c.f[1] = ld32((c.r[18].w[0] + 16u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 20u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 24u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 56u), c.f[0]);
    c.budget -= 28;
L_002F5390:
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002F5580; } }
    st16((c.r[16].w[0] + 80u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.f[1] = c.f[0] ^ fp::kSign;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.f[1] = c.f[0] ^ fp::kSign;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 68u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 28;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 72u), c.f[0]);  if (t) { goto L_002F5580; } }
    c.budget -= 1;
L_002F5410:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002F5430; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002F5BB8; } }
    c.budget -= 1;
L_002F5430:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 2u)));
    set32(c.r[5], c.r[19].w[0] + 16u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5444u); st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002F5444u) [[unlikely]] return; }
L_002F5444:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F5580; } }
    c.budget -= 1;
L_002F5450:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F545Cu); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x002F545Cu) [[unlikely]] return; }
L_002F545C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_002F5580; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5470u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002F5470u) [[unlikely]] return; }
L_002F5470:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F547Cu); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x002F547Cu) [[unlikely]] return; }
L_002F547C:
    c.f[2] = ld32((c.r[17].w[0] + 48u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F54A8; } }
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F5570; } }
    c.budget -= 1;
L_002F54A8:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F54D0; } }
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F5570; } }
    c.budget -= 1;
L_002F54D0:
    c.f[2] = ld32((c.r[17].w[0] + 52u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F54F8; } }
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F5570; } }
L_002F54F8:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F5520; } }
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F5570; } }
    c.budget -= 1;
L_002F5520:
    c.f[2] = ld32((c.r[17].w[0] + 56u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F5548; } }
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F5570; } }
L_002F5548:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F5580; } }
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F5580; } }
    c.budget -= 1;
L_002F5570:
    st16((c.r[16].w[0] + 80u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 56u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 48u), 0u);
    c.budget -= 4;
L_002F5580:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 22u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002F56A0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 22u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 22u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F5690; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 17u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], c.r[6].w[0] - 5280u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 17u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[3].w[0] - 1u);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[7], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st16((c.r[16].w[0] + 22u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 22u)));
    c.budget -= 20;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002F5620; } }
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.f[0]);  if (t) { goto L_002F56A0; } }
L_002F5620:
    set32(c.r[3], 0u - 2u);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 22u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002F56A0; } }
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 17u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st16((c.r[16].w[0] + 22u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.f[0]);  if (t) { goto L_002F56A0; } }
L_002F5690:
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.budget -= 4;
L_002F56A0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002F5850; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F57B8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], c.r[5].w[0] - 3504u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[3].w[0] - 1u);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[18], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 19;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[19], c.r[5].w[0] + c.r[4].w[0]);  if (t) { goto L_002F5798; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 48u);  if (t) { goto L_002F5720; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5720u); set32(c.r[5], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002F5720u) [[unlikely]] return; }
L_002F5720:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.f[1] = ld32((c.r[18].w[0] + 16u));
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 20u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 24u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 30;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.f[0]);  if (t) { goto L_002F57C8; } }
L_002F5798:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[19].w[0] + 16u);  if (t) { goto L_002F57C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F57ACu); set32(c.r[4], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002F57ACu) [[unlikely]] return; }
L_002F57AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F57C8; } }
    c.budget -= 1;
L_002F57B8:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F57C4u); set32(c.r[5], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x002F57C4u) [[unlikely]] return; }
L_002F57C4:
    c.budget -= 1;
L_002F57C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[3] = c.r[3].w[0];
    c.f[2] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 34;
L_002F5850:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002F5B80; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F5A38; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    set32(c.r[2], c.r[2].w[0] - 2048u);
    set32(c.r[6], 0u - 3u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[3].w[0] << 5);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 19u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[19], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 5);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.budget -= 22;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_002F5900; } }
L_002F58C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 19u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 5);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F58C8u | kUnwind; return; } goto L_002F58C8; } }
    c.budget -= 1;
L_002F5900:
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[4], c.r[17].w[0] + 112u);  if (t) { goto L_002F5A20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5918u); set32(c.r[5], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002F5918u) [[unlikely]] return; }
L_002F5918:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    st16((c.r[16].w[0] + 30u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 30u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F59A8; } }
    c.f[2] = ld32((c.r[18].w[0] + 16u));
    c.f[1] = ld32((c.r[19].w[0] + 16u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 144u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 20u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 30u)));
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 148u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 30u)));
    c.f[0] = ld32((c.r[19].w[0] + 24u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 29;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 152u), c.f[0]);  if (t) { goto L_002F5B80; } }
L_002F59A8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.f[1] = ld32((c.r[18].w[0] + 16u));
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 144u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 20u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 24u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 30;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 152u), c.f[0]);  if (t) { goto L_002F5B80; } }
L_002F5A20:
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5A2Cu); set32(c.r[4], c.r[17].w[0] + 112u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002F5A2Cu) [[unlikely]] return; }
L_002F5A2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F5B80; } }
    c.budget -= 1;
L_002F5A38:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] - 2048u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F5B70; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 30u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F5B80; } }
    set32(c.r[2], c.r[4].w[0] - 1u);
    st16((c.r[16].w[0] + 30u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 30u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F5B58; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[4], c.r[17].w[0] + 112u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[6].w[0] << 5);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[18], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[5], c.r[18].w[0] + 16u);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 28u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 2u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5AE0u); st16((c.r[16].w[0] + 30u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002F5AE0u) [[unlikely]] return; }
L_002F5AE0:
    c.f[1] = ld32((c.r[19].w[0] + 16u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 30u)));
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 144u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 20u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 30u)));
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 148u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 24u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 30u)));
    c.f[0] = ld32((c.r[18].w[0] + 24u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 30;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 152u), c.f[0]);  if (t) { goto L_002F5B80; } }
L_002F5B58:
    set32(c.r[4], c.r[17].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5B64u); set32(c.r[5], c.r[17].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x002F5B64u) [[unlikely]] return; }
L_002F5B64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F5B80; } }
    c.budget -= 1;
L_002F5B70:
    set32(c.r[4], c.r[17].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5B7Cu); set32(c.r[5], c.r[17].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x002F5B7Cu) [[unlikely]] return; }
L_002F5B7C:
    c.budget -= 1;
L_002F5B80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002F5B90; } }
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002F5B90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    set32(c.r[3], c.r[3].w[0] - 29376u);
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[3].w[0]), c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.budget -= 10;
L_002F5BB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002F5BE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002F5BF0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_002F5C00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_002F5CF0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002F5CF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5C48u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002F5C48u) [[unlikely]] return; }
L_002F5C48:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F5C90; } }
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5C64u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002F5C64u) [[unlikely]] return; }
L_002F5C64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5C6Cu); set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002F5C6Cu) [[unlikely]] return; }
L_002F5C6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5C74u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002F5C74u) [[unlikely]] return; }
L_002F5C74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5C7Cu); set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x002F5C7Cu) [[unlikely]] return; }
L_002F5C7C:
    c.f[13] = ld32((c.r[17].w[0] + 116u));
    c.f[14] = ld32((c.r[17].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5C8Cu); c.f[12] = ld32((c.r[17].w[0] + 112u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002F5C8Cu) [[unlikely]] return; }
L_002F5C8C:
    c.budget -= 1;
L_002F5C90:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65464ull;
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F5CD8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5CCCu); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_0068(c, 82u, depth + 1u); else { c.pc = 0x002A23A0u; return; } if (c.pc != 0x002F5CCCu) [[unlikely]] return; }
L_002F5CCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F5CF0; } }
    c.budget -= 1;
L_002F5CD8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5CF0u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x002F5CF0u) [[unlikely]] return; }
L_002F5CF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F5D10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 1488u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002F4000u < 16384u) { entry = entries_007D[(t - 0x002F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002F5D30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 24512u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] - 28896u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[17].w[0] + 304u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] - 18u);
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5D80u); st32((c.r[4].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x002F5D80u) [[unlikely]] return; }
L_002F5D80:
    set32(c.r[2], ld32((c.r[17].w[0] + 176u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], c.r[6].w[0] - 1504u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5DE4u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002F5DE4u) [[unlikely]] return; }
L_002F5DE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5DECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 167u, depth + 1u); else { c.pc = 0x002F5E00u; return; } if (c.pc != 0x002F5DECu) [[unlikely]] return; }
L_002F5DEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F5E00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 312u)));
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[17], c.r[18].w[0] + 304u);  if (t) { goto L_002F5F18; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F5F08; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], c.r[5].w[0] - 1504u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[3].w[0] - 1u);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[19], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0])));
    st16((c.r[17].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8u)));
    c.budget -= 19;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[16], c.r[5].w[0] + c.r[4].w[0]);  if (t) { goto L_002F5EF8; } }
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5E94u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002F5E94u) [[unlikely]] return; }
L_002F5E94:
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[2] = ld32((c.r[19].w[0] + 16u));
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[2] = ld32((c.r[19].w[0] + 20u));
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[2] = ld32((c.r[19].w[0] + 24u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 56u), c.f[0]);  if (t) { goto L_002F5F18; } }
    c.budget -= 1;
L_002F5EF8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002F5F80; } }
L_002F5F08:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5F14u); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x002F5F14u) [[unlikely]] return; }
L_002F5F14:
    c.budget -= 1;
L_002F5F18:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], 0u + 5u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 28u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F5F50; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5F50u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 293u, depth + 1u); else { c.pc = 0x002EF4F0u; return; } if (c.pc != 0x002F5F50u) [[unlikely]] return; }
L_002F5F50:
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[3] = ld32((c.r[18].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[2] = ld32((c.r[18].w[0] + 36u));
    set32(c.r[3], c.r[3].w[0] - 29376u);
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0] + 44u));
    st32((c.r[3].w[0]), c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.budget -= 12;
L_002F5F80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F5FA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002F5FB0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_002F5FC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_002F6040; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002F6040; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6008u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002F6008u) [[unlikely]] return; }
L_002F6008:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F6028; } }
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6024u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002F6024u) [[unlikely]] return; }
L_002F6024:
    c.budget -= 1;
L_002F6028:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6040u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x002F6040u) [[unlikely]] return; }
L_002F6040:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F6060:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 5216u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002F4000u < 16384u) { entry = entries_007D[(t - 0x002F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002F6080:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 5232u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002F4000u < 16384u) { entry = entries_007D[(t - 0x002F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002F60A0:
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4F0000u);
    c.r[8].d[0] = c.r[3].d[0] | 37196ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0xC31E0000u);
    set32(c.r[7], c.r[7].w[0] + 25760u);
    set32(c.r[5], 0u + 370u);
    set32(c.r[3], 0u + 24u);
    set32(c.r[10], c.r[10].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 168u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 328u), 0u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.budget -= 23;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[4].w[0] + 304u);  if (t) { goto L_002F6110; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[6].w[0] + 36u), 0u);
    set32(c.r[3], c.r[3].w[0] - 1472u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_002F6118; } }
L_002F6110:
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    st32((c.r[6].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 2;
L_002F6118:
    set32(c.r[5], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[3], 0u - 1u);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != c.r[3].d[0];  if (t) { goto L_002F6140; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002F6358; } }
    c.budget -= 1;
L_002F6140:
    set32(c.r[8], c.r[9].w[0] << 1);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] + 4960u);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.f[2] = ld32((c.r[7].w[0]));
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    st32((c.r[6].w[0] + 4u), c.f[2]);
    st32((c.r[6].w[0] + 8u), c.f[1]);
    st32((c.r[6].w[0] + 12u), c.f[0]);
    c.r[8].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[7], c.r[8].w[0] - 132u);
    c.r[1].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002F6198; } }
    set32(c.r[7], 0u + 137u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_002F61F0; } }
    c.budget -= 1;
L_002F6198:
    st32((c.r[4].w[0] + 32u), 0u);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[2] = c.r[3].w[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[7], c.r[7].w[0] + 4928u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    set32(c.r[5], c.r[5].w[0] + 26752u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    st32((c.r[6].w[0] + 32u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 168u), c.r[5].w[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002F6358; } }
    c.budget -= 1;
L_002F61F0:
    st32((c.r[6].w[0]), 0u);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[7].d[0] = c.r[9].d[0] & 128ull;
    c.r[7].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.r[7].d[0] = c.r[7].d[0] ^ 1ull;
    c.budget -= 7;
    { const bool t = c.r[7].d[0] == 0ull; c.r[10].sd[0] = static_cast<std::int32_t>(0x005E0000u);  if (t) { goto L_002F62B0; } }
    set32(c.r[12], 0u - 65u);
    set32(c.r[11], 0u + 1u);
    set32(c.r[10], c.r[10].w[0] + 4912u);
    c.budget -= 3;
L_002F6218:
    c.r[7].d[0] = c.r[3].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_002F6230; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002F6298; } }
L_002F6230:
    c.r[7].d[0] = c.r[9].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[7].d[0] = c.r[7].d[0] & 64ull;
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002F6258; } }
    c.r[7].d[0] = c.r[9].d[0] & c.r[12].d[0];
    c.r[8].d[0] = c.r[11].d[0] + 0ull;
    c.r[9].d[0] = c.r[7].d[0] << 56;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    c.budget -= 5;
L_002F6258:
    c.r[7].d[0] = c.r[8].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[8], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[7].d[0] = c.r[9].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[9], c.r[10].w[0] + c.r[8].w[0]);
    set32(c.r[8], c.r[7].w[0] << 2);
    set32(c.r[7], ld32((c.r[9].w[0])));
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.f[1] = ld32((c.r[7].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0]), c.f[0]);
    c.budget -= 16;
L_002F6298:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[7].d[0] = c.r[9].d[0] & 128ull;
    c.r[7].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.r[7].d[0] = c.r[7].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6218u | kUnwind; return; } goto L_002F6218; } }
L_002F62B0:
    c.r[3].d[0] = c.r[9].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[5].d[0] = c.r[3].d[0] & 1ull;
    st8((c.r[6].w[0] + 20u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[4] = ld32((c.r[6].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[2] = ld32((c.r[6].w[0] + 8u));
    set32(c.r[5], c.r[5].w[0] + 4928u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[3] = c.r[3].w[0];
    c.f[2] = fp::mul(c.f[4], c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[4].w[0] + 32u), c.f[1]);
    c.f[2] = ld32((c.r[6].w[0] + 12u));
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 32u), c.f[1]);
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    st32((c.r[4].w[0] + 112u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0] + 32u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 35;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);  if (t) { goto L_002F6358; } }
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
L_002F6358:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F6360:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[5], c.r[16].w[0] + 304u);  if (t) { goto L_002F63A0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002F6468; } }
    c.budget -= 1;
L_002F63A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[5].w[0] + 24u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[1].d[0] = c.r[4].sd[0] < 311ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 370u);  if (t) { goto L_002F63E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C880000u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 34953ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 24u), c.f[0]);  if (t) { goto L_002F6410; } }
L_002F63E0:
    c.r[1].d[0] = c.r[4].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F6410; } }
    c.f[0] = c.r[4].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C880000u);
    c.r[2].d[0] = c.r[2].d[0] | 34953ull;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 24u), c.f[0]);
    c.budget -= 9;
L_002F6410:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002F6450; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_002F6450; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 36u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F644Cu); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_007D(c, 203u, depth + 1u); else { c.pc = 0x002F6920u; return; } if (c.pc != 0x002F644Cu) [[unlikely]] return; }
L_002F644C:
    c.budget -= 1;
L_002F6450:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F645Cu); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x002F645Cu) [[unlikely]] return; }
L_002F645C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002F6468:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F6480:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002F6490:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_002F64A0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    set32(c.r[5], 0u + 10u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[1] = c.r[3].w[0];
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[20], c.r[21].w[0] + 304u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[22], c.r[22].w[0] + 20320u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[29].w[0] + 176u), c.r[5].w[0]);
    c.f[20] = 0u;
    c.f[0] = ld32((c.r[4].w[0] + 328u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 212u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 336u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 216u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 336u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 220u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 336u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 224u), c.f[0]);
    set32(c.r[19], ld32((c.r[4].w[0] + 320u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[4].d[0] = c.r[3].d[0] & 128ull;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 51;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002F6848; } }
    set32(c.r[30], c.r[29].w[0] + 228u);
    c.budget -= 1;
L_002F6570:
    c.r[4].d[0] = c.r[18].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[4].d[0] = c.r[4].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F6590; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_002F6830; } }
L_002F6590:
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[2], 0u + 99u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002F65A8; } }
    set32(c.r[3], 0u + 20u);
    set32(c.r[23], 0u + 1u);
    c.budget -= 2;
L_002F65A8:
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002F65D0; } }
    set32(c.r[2], 0u - 65u);
    set32(c.r[4], 0u + 1u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
L_002F65D0:
    c.r[16].d[0] = c.r[4].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.r[17].d[0] = c.r[3].d[0] << 56;
    set32(c.r[2], c.r[16].w[0] << 4);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[6], c.r[17].w[0] >> 31);
    set32(c.r[2], 0u + 6u);
    set32(c.r[4], 0u + 1u);
    mmi::div(c, 0, c.r[17].w[0], c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x2AAA0000u);
    st32((c.r[30].w[0]), c.r[3].w[0]);
    c.r[7].d[0] = c.r[2].d[0] | 43691ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42180000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E80000u);
    c.f[14] = c.r[3].w[0];
    c.f[15] = c.r[2].w[0];
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.f[0] = c.r[2].w[0];
    mmi::mult(c, 0, c.r[7].w[0], c.r[17].w[0]);
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.f[0] = c.r[2].w[0];
    c.budget -= 44;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6680u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x002F6680u) [[unlikely]] return; }
L_002F6680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6688u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002F6688u) [[unlikely]] return; }
L_002F6688:
    c.f[0] = ld32((c.r[21].w[0] + 32u));
    c.f[13] = ld32((c.r[21].w[0] + 36u));
    c.f[14] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F669Cu); c.f[12] = fp::add(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002F669Cu) [[unlikely]] return; }
L_002F669C:
    c.f[12] = ld32((c.r[21].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F66B0u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002F66B0u) [[unlikely]] return; }
L_002F66B0:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F66C0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002F66C0u) [[unlikely]] return; }
L_002F66C0:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_002F6760; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2840000u);
    set32(c.r[3], c.r[22].w[0] + 256u);
    c.f[12] = c.r[2].w[0];
    st32((c.r[30].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42180000u);
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42AE0000u);
    c.f[13] = c.r[2].w[0];
    c.f[14] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E80000u);
    c.f[15] = c.r[2].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F66FCu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x002F66FCu) [[unlikely]] return; }
L_002F66FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6704u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002F6704u) [[unlikely]] return; }
L_002F6704:
    c.f[3] = ld32((c.r[21].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[21].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.f[0] = c.r[2].w[0];
    c.f[14] = 0u;
    c.f[3] = fp::add(c.f[3], c.f[20]);
    c.f[12] = fp::add(c.f[2], c.f[3]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6730u); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002F6730u) [[unlikely]] return; }
L_002F6730:
    c.f[13] = ld32((c.r[21].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F674Cu); c.f[12] = fp::mul(c.f[0], c.f[13]);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002F674Cu) [[unlikely]] return; }
L_002F674C:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F675Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002F675Cu) [[unlikely]] return; }
L_002F675C:
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F6760:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));  if (t) { goto L_002F67A8; } }
    c.r[4].d[0] = c.r[5].d[0] << 56;
    set32(c.r[3], 0u + 21u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 24u);  if (t) { goto L_002F6788; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002F67A8; } }
    c.budget -= 1;
L_002F6788:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 4920u)));
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { goto L_002F6820; } }
    c.budget -= 1;
L_002F67A8:
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 21u);  if (t) { goto L_002F67F0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_002F67D0; } }
    set32(c.r[3], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_002F67F0; } }
    c.budget -= 1;
L_002F67D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 4920u)));
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { goto L_002F6820; } }
    c.budget -= 1;
L_002F67F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 4912u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.f[1] = ld32((c.r[20].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 12;
L_002F6820:
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[3].d[0] << 56;
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.budget -= 4;
L_002F6830:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[4].d[0] = c.r[3].d[0] & 128ull;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6570u | kUnwind; return; } goto L_002F6570; } }
L_002F6848:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_002F6880:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 320u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F68ACu); set32(c.r[17], c.r[18].w[0] + 304u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002F68ACu) [[unlikely]] return; }
L_002F68AC:
    c.f[13] = ld32((c.r[18].w[0] + 36u));
    c.f[14] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F68BCu); c.f[12] = ld32((c.r[18].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002F68BCu) [[unlikely]] return; }
L_002F68BC:
    c.f[12] = ld32((c.r[18].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F68D0u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002F68D0u) [[unlikely]] return; }
L_002F68D0:
    c.r[2].d[0] = c.r[16].d[0] << 56;
    set32(c.r[5], 0u + 9u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[4], c.r[2].w[0] + 2u);
    set32(c.r[3], c.r[4].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 20320u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6904u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002F6904u) [[unlikely]] return; }
L_002F6904:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F6920:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8u)));
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6958u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x002F6958u) [[unlikely]] return; }
L_002F6958:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F69B8; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[6], 0u + 18u);
    set32(c.r[5], 0u + 7u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 24672u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 340u), c.r[18].w[0]);
    c.budget -= 16;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[2].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_002F69A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 50u);  if (t) { goto L_002F69B0; } }
L_002F69A8:
    set32(c.r[17], c.r[17].w[0] + 25u);
    c.budget -= 2;
L_002F69B0:
    st32((c.r[2].w[0] + 28u), c.r[17].w[0]);
    c.budget -= 2;
L_002F69B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F69E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 5504u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002F4000u < 16384u) { entry = entries_007D[(t - 0x002F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002F6A00:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 4528u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 168u), 0u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 320u), c.r[2].w[0]);
    c.budget -= 12;
    { st8((c.r[4].w[0] + 325u), static_cast<std::uint8_t>(0u));  goto L_002F6A30; }
L_002F6A30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[19].w[0] + 304u);  if (t) { goto L_002F6CE8; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002F6A90; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002F6CE8; } }
    c.budget -= 1;
L_002F6A90:
    st32((c.r[19].w[0] + 132u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F6CB0; } }
    c.budget -= 1;
L_002F6AB0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6AC0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x002F6AC0u) [[unlikely]] return; }
L_002F6AC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002F6C98; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[7], 0u + 18u);
    set32(c.r[6], 0u + 7u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 24672u);
    set32(c.r[2], c.r[2].w[0] + 5248u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 21u)));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6B1Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002F6B1Cu) [[unlikely]] return; }
L_002F6B1C:
    c.f[4] = ld32((c.r[19].w[0] + 128u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[3] = ld32((c.r[19].w[0] + 132u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x418B0000u);
    c.f[1] = ld32((c.r[19].w[0] + 136u));
    c.r[3].d[0] = c.r[3].d[0] | 13108ull;
    c.f[0] = ld32((c.r[19].w[0] + 140u));
    set32(c.r[6], c.r[6].w[0] + 4960u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[5], c.r[16].w[0] + 304u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 128u), c.f[4]);
    st32((c.r[16].w[0] + 132u), c.f[3]);
    st32((c.r[16].w[0] + 136u), c.f[1]);
    st32((c.r[16].w[0] + 140u), c.f[0]);
    st32((c.r[16].w[0] + 28u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[19].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[3] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[16].w[0] + 308u), c.f[3]);
    st32((c.r[16].w[0] + 312u), c.f[1]);
    st32((c.r[16].w[0] + 316u), c.f[0]);
    st32((c.r[16].w[0] + 320u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 304u), 0u);
    c.f[1] = ld32((c.r[19].w[0] + 132u));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 312u));
    c.f[0] = ld32((c.r[19].w[0] + 132u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 132u), c.f[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[6].d[0] = c.r[8].d[0] & 128ull;
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    c.budget -= 45;
    { const bool t = c.r[6].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002F6C78; } }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[11], 0u - 65u);
    set32(c.r[10], 0u + 1u);
    set32(c.r[9], c.r[9].w[0] + 4912u);
    c.budget -= 4;
L_002F6BE0:
    c.r[6].d[0] = c.r[3].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002F6BF8; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002F6C60; } }
L_002F6BF8:
    c.r[6].d[0] = c.r[8].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[6].d[0] = c.r[6].d[0] & 64ull;
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002F6C20; } }
    c.r[6].d[0] = c.r[8].d[0] & c.r[11].d[0];
    c.r[7].d[0] = c.r[10].d[0] + 0ull;
    c.r[8].d[0] = c.r[6].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
L_002F6C20:
    c.r[6].d[0] = c.r[7].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[7], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[6].d[0] = c.r[8].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[8], c.r[9].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[6].w[0] << 2);
    set32(c.r[6], ld32((c.r[8].w[0])));
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[1] = ld32((c.r[6].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 16;
L_002F6C60:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[6].d[0] = c.r[8].d[0] & 128ull;
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6BE0u | kUnwind; return; } goto L_002F6BE0; } }
L_002F6C78:
    c.r[5].d[0] = c.r[8].d[0] & 255ull;
    set32(c.r[3], 0u + 129u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002F6C90; } }
    set32(c.r[4], c.r[4].w[0] + 25u);
    c.budget -= 2;
L_002F6C90:
    set32(c.r[17], c.r[4].w[0] + 25u);
    c.budget -= 2;
L_002F6C98:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6AB0u | kUnwind; return; } goto L_002F6AB0; } }
L_002F6CB0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 2u));
    set32(c.r[3], c.r[17].w[0] + 25u);
    set32(c.r[5], c.r[5].w[0] << 8);
    c.r[5].d[0] = c.r[5].d[0] & 65280ull;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 166u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st16((c.r[19].w[0] + 166u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 21u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[18].w[0] + 21u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[18].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 14;
L_002F6CE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F6D10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 5520u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002F4000u < 16384u) { entry = entries_007D[(t - 0x002F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002F6D30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], c.r[7].w[0] + 25760u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[6], 0u + 250u);
    set32(c.r[5], 0u + 132u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[7].w[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[4].w[0] + 320u)));
    c.r[6].d[0] = ld8((c.r[6].w[0] + 1u));
    c.budget -= 16;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[3], c.r[4].w[0] + 304u);  if (t) { goto L_002F6D80; } }
    set32(c.r[5], 0u + 133u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_002F6DB0; } }
    c.budget -= 1;
L_002F6D80:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[1] = c.r[5].w[0];
    set32(c.r[6], c.r[6].w[0] + 4928u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[5], c.r[5].w[0] + 26752u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    st32((c.r[3].w[0] + 32u), c.r[6].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 168u), c.r[5].w[0]);  if (t) { goto L_002F6EC8; } }
L_002F6DB0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F6E18; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002F6DD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F6E38; } }
    c.budget -= 1;
L_002F6DD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[4] = ld32((c.r[3].w[0]));
    c.f[3] = ld32((c.r[3].w[0] + 8u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[2] = c.r[2].w[0];
    c.f[3] = fp::mul(c.f[4], c.f[3]);
    fpu_div(c, 1u, c.f[3], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 32u), c.f[0]);  if (t) { goto L_002F6E38; } }
L_002F6E18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.budget -= 8;
L_002F6E38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[7], c.r[7].w[0] + 4928u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], c.r[6].w[0] + 5472u);
    c.f[1] = c.r[5].w[0];
    set32(c.r[2], c.r[2].w[0] + 5473u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] + 32u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6EC8u); st32((c.r[4].w[0] + 52u), c.f[0]);  if (depth < kMaxDepth) unit_007D(c, 215u, depth + 1u); else { c.pc = 0x002F6EE0u; return; } if (c.pc != 0x002F6EC8u) [[unlikely]] return; }
L_002F6EC8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002F6EE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[17].w[0] + 304u);
    set32(c.r[4], 0u + 4u);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002F70B8; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_002F7058; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_002F6FF0; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_002F6F50; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002F6F38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F7108; } }
L_002F6F38:
    set32(c.r[4], c.r[5].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], 0u + 50u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[3].w[0] + 24u), 0u);
    c.budget -= 6;
L_002F6F50:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { goto L_002F7108; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[4].w[0];
    set32(c.r[5], 0u + 35u);
    set32(c.r[4], c.r[6].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 28u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 32;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 36u), c.f[0]);  if (t) { goto L_002F7108; } }
    c.budget -= 1;
L_002F6FF0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[16], 0u + 1u);  if (t) { goto L_002F7030; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[5], 0u + 165u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 24u), c.r[4].w[0]);  if (t) { goto L_002F7108; } }
    c.budget -= 1;
L_002F7030:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.f[1] = ld32((c.r[3].w[0] + 28u));
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F704Cu); st32((c.r[3].w[0] + 24u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x002F704Cu) [[unlikely]] return; }
L_002F704C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F7108; } }
    c.budget -= 1;
L_002F7058:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[16], 0u + 1u);  if (t) { goto L_002F7108; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[4].w[0];
    set32(c.r[5], 0u + 50u);
    set32(c.r[4], c.r[6].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 28u), c.f[0]);  if (t) { goto L_002F7108; } }
    c.budget -= 1;
L_002F70B8:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[16], 0u + 1u);  if (t) { goto L_002F70E8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 24u), 0u);  if (t) { goto L_002F7118; } }
L_002F70E8:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.f[1] = ld32((c.r[3].w[0] + 28u));
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7104u); st32((c.r[3].w[0] + 24u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x002F7104u) [[unlikely]] return; }
L_002F7104:
    c.budget -= 1;
L_002F7108:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002F7118; } }
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002F7118:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F7130:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = c.r[5].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002F71B0; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7168u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x002F7168u) [[unlikely]] return; }
L_002F7168:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F71B0; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[6], 0u + 19u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] + 29136u);
    set32(c.r[3], c.r[3].w[0] + 29456u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 28u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 16;
L_002F71B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F71D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 5536u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002F4000u < 16384u) { entry = entries_007D[(t - 0x002F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002F71F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 10u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F720Cu); st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x002F720Cu) [[unlikely]] return; }
L_002F720C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7228u); st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_007D(c, 224u, depth + 1u); else { c.pc = 0x002F7240u; return; } if (c.pc != 0x002F7228u) [[unlikely]] return; }
L_002F7228:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F7240:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.f[0] = ld32((c.r[2].w[0] + 2160u));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2164u));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2168u));
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 20;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_002F72A0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002F72A0:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002F72A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F72B0u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x002F72B0u) [[unlikely]] return; }
L_002F72B0:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[3].d[0] & 3ull;
    st32((c.r[16].w[0]), c.r[4].w[0]);
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F72A8u | kUnwind; return; } goto L_002F72A8; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F72F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002F7300:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_002F7310:
    set32(c.r[29], c.r[29].w[0] - 464u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] + 5680u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[5], c.r[29].w[0] + 272u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 6u);
    c.budget -= 14;
L_002F7348:
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 32u);
    st128((c.r[5].w[0] + 16u) & ~15u, c.r[2]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F7348u | kUnwind; return; } goto L_002F7348; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[29].w[0] + 208u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[28].w[0] - 28384u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[16], c.r[18].w[0] + 304u);
    st32((c.r[1].w[0] + 20240u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20260u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7398u); st32((c.r[1].w[0] + 20288u), 0u);  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x002F7398u) [[unlikely]] return; }
L_002F7398:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 5600u);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[2].w[0]);
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[1].w[0] + 20292u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 5552u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[1].w[0] + 20252u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7408u); st32((c.r[1].w[0] + 20256u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002F7408u) [[unlikely]] return; }
L_002F7408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7410u); set32(c.r[4], c.r[17].w[0] + 2112u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x002F7410u) [[unlikely]] return; }
L_002F7410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7418u); set32(c.r[4], 0u - 16384u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x002F7418u) [[unlikely]] return; }
L_002F7418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7420u); set32(c.r[4], ld32((c.r[18].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002F7420u) [[unlikely]] return; }
L_002F7420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7428u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002F7428u) [[unlikely]] return; }
L_002F7428:
    c.r[21].d[0] = 0ull + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[29].w[0] + 132u);
    set32(c.r[22], c.r[29].w[0] + 136u);
    c.budget -= 4;
L_002F7438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7440u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002F7440u) [[unlikely]] return; }
L_002F7440:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 272u));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 276u));
    st32((c.r[19].w[0]), c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7480u); st32((c.r[22].w[0]), 0u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x002F7480u) [[unlikely]] return; }
L_002F7480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7488u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002F7488u) [[unlikely]] return; }
L_002F7488:
    c.f[13] = ld32((c.r[17].w[0] + 2164u));
    c.f[14] = ld32((c.r[17].w[0] + 2168u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7498u); c.f[12] = ld32((c.r[17].w[0] + 2160u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002F7498u) [[unlikely]] return; }
L_002F7498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F74A0u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x002F74A0u) [[unlikely]] return; }
L_002F74A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F74A8u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x002F74A8u) [[unlikely]] return; }
L_002F74A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F74C0u); set32(c.r[4], ld32((c.r[2].w[0] + 280u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x002F74C0u) [[unlikely]] return; }
L_002F74C0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F74D8u); set32(c.r[4], ld32((c.r[2].w[0] + 284u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002F74D8u) [[unlikely]] return; }
L_002F74D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F74E0u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002F74E0u) [[unlikely]] return; }
L_002F74E0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] + 5648u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7508u); st32((c.r[1].w[0] + 20272u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x002F7508u) [[unlikely]] return; }
L_002F7508:
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + 16u);
    c.r[3].d[0] = c.r[21].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F7438u | kUnwind; return; } goto L_002F7438; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 464u);  c.pc = t; return; }
L_002F7550:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[6].w[0] << (c.r[16].w[0] & 31u));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 188u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F75F8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7588u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x002F7588u) [[unlikely]] return; }
L_002F7588:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F75F8; } }
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[9], 0u + 21u);
    set32(c.r[8], 0u + 59u);
    set32(c.r[7], c.r[7].w[0] + 30384u);
    set32(c.r[3], c.r[3].w[0] + 31472u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], c.r[10].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 268u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 28u), c.r[2].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F75E4u); st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_007D(c, 252u, depth + 1u); else { c.pc = 0x002F7610u; return; } if (c.pc != 0x002F75E4u) [[unlikely]] return; }
L_002F75E4:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F75F4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_007D(c, 252u, depth + 1u); else { c.pc = 0x002F7610u; return; } if (c.pc != 0x002F75F4u) [[unlikely]] return; }
L_002F75F4:
    c.budget -= 1;
L_002F75F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F7610:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 5u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7640u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x002F7640u) [[unlikely]] return; }
L_002F7640:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F7690; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[6], 0u + 21u);
    set32(c.r[5], 0u + 59u);
    set32(c.r[4], c.r[4].w[0] + 30416u);
    set32(c.r[3], c.r[3].w[0] + 32128u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[2].w[0] + 268u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 28u), c.r[2].w[0]);
    st16((c.r[2].w[0] + 166u), static_cast<std::uint16_t>(c.r[18].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 18;
L_002F7690:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F76B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 6096u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002F4000u < 16384u) { entry = entries_007D[(t - 0x002F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002F76D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 6112u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002F4000u < 16384u) { entry = entries_007D[(t - 0x002F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002F76F0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 5u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    st8((c.r[4].w[0] + 304u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 306u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 15;
    { st8((c.r[4].w[0] + 305u), static_cast<std::uint8_t>(c.r[2].w[0]));  goto L_002F7810; }
L_002F7730:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 12;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_002F77F8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 40u), 0u);
    st32((c.r[17].w[0] + 36u), 0u);
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[17].w[0] + 84u), 0u);
    st32((c.r[17].w[0] + 80u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F77A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7794u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x002F7794u) [[unlikely]] return; }
L_002F7794:
    c.r[2].d[0] = c.r[2].d[0] & 8191ull;
    set32(c.r[2], c.r[2].w[0] + 4096u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_002F77C0; } }
    c.budget -= 1;
L_002F77A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F77B0u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x002F77B0u) [[unlikely]] return; }
L_002F77B0:
    c.r[2].d[0] = c.r[2].d[0] & 8191ull;
    set32(c.r[2], c.r[2].w[0] + 20480u);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 4;
L_002F77C0:
    set32(c.r[2], 0u + 20u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 34u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 35u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F77F8u); st8((c.r[16].w[0] + 33u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_007D(c, 262u, depth + 1u); else { c.pc = 0x002F78E0u; return; } if (c.pc != 0x002F77F8u) [[unlikely]] return; }
L_002F77F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F7810:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 304u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[4].w[0] + 304u);  if (t) { goto L_002F7878; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002F7830; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F78C8; } }
L_002F7830:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 5u);
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[6].w[0] + 8u), 0u);
    st32((c.r[6].w[0] + 16u), 0u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[6].w[0] + 20u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 28u), c.f[0]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 24u), c.f[0]);  if (t) { goto L_002F78C8; } }
L_002F7878:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002F78A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002F78D0; } }
    c.budget -= 1;
L_002F78A8:
    c.f[1] = ld32((c.r[6].w[0] + 24u));
    c.f[0] = ld32((c.r[6].w[0] + 16u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 28u));
    c.f[0] = ld32((c.r[6].w[0] + 20u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 20u), c.f[0]);
    c.budget -= 8;
L_002F78C8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002F78D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F78E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 14;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[18], c.r[19].w[0] + 304u);  if (t) { goto L_002F7928; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002F7AA8; } }
L_002F7928:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] + 6080u);
    c.budget -= 4;
L_002F7938:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F7A88; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002F7960; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7954u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x002F7954u) [[unlikely]] return; }
L_002F7954:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002F7960:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002F7A58; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[7], c.r[5].w[0] + c.r[4].w[0]);  if (t) { goto L_002F7A50; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 12u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[7].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 12u), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 24u), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 12u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.f[0] = ld32((c.r[7].w[0] + 12u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 42;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 28u), c.f[0]);  if (t) { goto L_002F7A88; } }
L_002F7A50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002F7A88; } }
L_002F7A58:
    c.f[1] = ld32((c.r[18].w[0] + 12u));
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 28u));
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.budget -= 12;
L_002F7A88:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 32u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F7938u | kUnwind; return; } goto L_002F7938; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002F7AA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F7AD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002F7AE0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_002F7AF0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 268u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 51u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[4], c.r[4].w[0] + 29024u);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 7);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 17;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002F7D68; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[2].w[0] + 400u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7B48u); set32(c.r[6], c.r[2].w[0] + 384u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x002F7B48u) [[unlikely]] return; }
L_002F7B48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7B5Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x002F7B5Cu) [[unlikely]] return; }
L_002F7B5C:
    c.f[13] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7B68u); c.f[12] = ld32((c.r[29].w[0] + 48u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x002F7B68u) [[unlikely]] return; }
L_002F7B68:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7B80u); set32(c.r[5], c.r[2].w[0] + 384u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x002F7B80u) [[unlikely]] return; }
L_002F7B80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[29].w[0] + 64u);
    st8((c.r[1].w[0] + 20292u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20240u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 28380u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20260u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7BB0u); st32((c.r[1].w[0] + 20288u), 0u);  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x002F7BB0u) [[unlikely]] return; }
L_002F7BB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 6144u);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[2].w[0]);
    set32(c.r[16], c.r[17].w[0] + 304u);
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] + 6128u);
    st32((c.r[1].w[0] + 20256u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[1].w[0] + 20252u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 6160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7C14u); st32((c.r[1].w[0] + 20272u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002F7C14u) [[unlikely]] return; }
L_002F7C14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7C1Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x002F7C1Cu) [[unlikely]] return; }
L_002F7C1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7C24u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002F7C24u) [[unlikely]] return; }
L_002F7C24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = ld32((c.r[16].w[0] + 20u));
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7C38u); c.f[12] = ld32((c.r[16].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002F7C38u) [[unlikely]] return; }
L_002F7C38:
    c.f[12] = ld32((c.r[16].w[0] + 8u));
    c.f[13] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7C48u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002F7C48u) [[unlikely]] return; }
L_002F7C48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7C50u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002F7C50u) [[unlikely]] return; }
L_002F7C50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7C5Cu); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x002F7C5Cu) [[unlikely]] return; }
L_002F7C5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7C64u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002F7C64u) [[unlikely]] return; }
L_002F7C64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7C6Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x002F7C6Cu) [[unlikely]] return; }
L_002F7C6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7C74u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002F7C74u) [[unlikely]] return; }
L_002F7C74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7C7Cu); set32(c.r[4], 0u + 16384u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002F7C7Cu) [[unlikely]] return; }
L_002F7C7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = ld32((c.r[16].w[0] + 20u));
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7C90u); c.f[12] = ld32((c.r[16].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002F7C90u) [[unlikely]] return; }
L_002F7C90:
    c.f[12] = ld32((c.r[16].w[0] + 8u));
    c.f[13] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7CA0u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002F7CA0u) [[unlikely]] return; }
L_002F7CA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7CA8u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002F7CA8u) [[unlikely]] return; }
L_002F7CA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7CB4u); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x002F7CB4u) [[unlikely]] return; }
L_002F7CB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7CBCu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002F7CBCu) [[unlikely]] return; }
L_002F7CBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7CC4u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x002F7CC4u) [[unlikely]] return; }
L_002F7CC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7CCCu); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002F7CCCu) [[unlikely]] return; }
L_002F7CCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7CD4u); c.r[4].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002F7CD4u) [[unlikely]] return; }
L_002F7CD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = ld32((c.r[16].w[0] + 20u));
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7CE8u); c.f[12] = ld32((c.r[16].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002F7CE8u) [[unlikely]] return; }
L_002F7CE8:
    c.f[12] = ld32((c.r[16].w[0] + 8u));
    c.f[13] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7CF8u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002F7CF8u) [[unlikely]] return; }
L_002F7CF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7D00u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002F7D00u) [[unlikely]] return; }
L_002F7D00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7D0Cu); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x002F7D0Cu) [[unlikely]] return; }
L_002F7D0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7D14u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002F7D14u) [[unlikely]] return; }
L_002F7D14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7D1Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x002F7D1Cu) [[unlikely]] return; }
L_002F7D1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7D24u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002F7D24u) [[unlikely]] return; }
L_002F7D24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7D2Cu); c.r[4].d[0] = 0ull | 49152ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002F7D2Cu) [[unlikely]] return; }
L_002F7D2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = ld32((c.r[16].w[0] + 20u));
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7D40u); c.f[12] = ld32((c.r[16].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002F7D40u) [[unlikely]] return; }
L_002F7D40:
    c.f[12] = ld32((c.r[16].w[0] + 8u));
    c.f[13] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7D50u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002F7D50u) [[unlikely]] return; }
L_002F7D50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7D58u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002F7D58u) [[unlikely]] return; }
L_002F7D58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7D64u); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x002F7D64u) [[unlikely]] return; }
L_002F7D64:
    c.budget -= 1;
L_002F7D68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002F7D80:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 268u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 51u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[4], c.r[4].w[0] + 29024u);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 7);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 18;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_007E(c, 6u, depth); } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[2].w[0] + 400u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7DDCu); set32(c.r[6], c.r[2].w[0] + 384u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x002F7DDCu) [[unlikely]] return; }
L_002F7DDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7DF0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x002F7DF0u) [[unlikely]] return; }
L_002F7DF0:
    c.f[13] = ld32((c.r[29].w[0] + 72u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7DFCu); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x002F7DFCu) [[unlikely]] return; }
L_002F7DFC:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7E14u); set32(c.r[5], c.r[2].w[0] + 384u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x002F7E14u) [[unlikely]] return; }
L_002F7E14:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[29].w[0] + 80u);
    st8((c.r[1].w[0] + 20292u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20240u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 28376u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20260u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7E44u); st32((c.r[1].w[0] + 20288u), 0u);  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x002F7E44u) [[unlikely]] return; }
L_002F7E44:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[3].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 307u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[18].w[0] + 304u);  if (t) { goto L_002F7F88; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 6176u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] + 6272u);
    set32(c.r[2], c.r[2].w[0] + 6368u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[1].w[0] + 20256u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[1].w[0] + 20252u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7ED4u); st32((c.r[1].w[0] + 20272u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002F7ED4u) [[unlikely]] return; }
L_002F7ED4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7EDCu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x002F7EDCu) [[unlikely]] return; }
L_002F7EDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7EE4u); set32(c.r[4], ld32((c.r[18].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002F7EE4u) [[unlikely]] return; }
L_002F7EE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7EECu); set32(c.r[4], ld32((c.r[18].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002F7EECu) [[unlikely]] return; }
L_002F7EEC:
    c.f[12] = ld32((c.r[17].w[0] + 8u));
    c.f[13] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7EFCu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002F7EFCu) [[unlikely]] return; }
L_002F7EFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7F10u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002F7F10u) [[unlikely]] return; }
L_002F7F10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7F18u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002F7F18u) [[unlikely]] return; }
L_002F7F18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7F24u); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x002F7F24u) [[unlikely]] return; }
L_002F7F24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7F2Cu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002F7F2Cu) [[unlikely]] return; }
L_002F7F2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7F34u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x002F7F34u) [[unlikely]] return; }
L_002F7F34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7F3Cu); set32(c.r[4], ld32((c.r[18].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002F7F3Cu) [[unlikely]] return; }
L_002F7F3C:
    set32(c.r[2], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7F50u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002F7F50u) [[unlikely]] return; }
L_002F7F50:
    c.f[12] = ld32((c.r[17].w[0] + 8u));
    c.f[13] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7F60u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002F7F60u) [[unlikely]] return; }
L_002F7F60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7F74u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002F7F74u) [[unlikely]] return; }
L_002F7F74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7F7Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002F7F7Cu) [[unlikely]] return; }
L_002F7F7C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7F88u); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x002F7F88u) [[unlikely]] return; }
L_002F7F88:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 35u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 32u);  if (t) { [[clang::musttail]] return unit_007E(c, 6u, depth); } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 6176u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] + 6272u);
    set32(c.r[2], c.r[2].w[0] + 6368u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[1].w[0] + 20256u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[1].w[0] + 20252u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7FECu); st32((c.r[1].w[0] + 20272u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002F7FECu) [[unlikely]] return; }
L_002F7FEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7FF4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x002F7FF4u) [[unlikely]] return; }
L_002F7FF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7FFCu); set32(c.r[4], ld32((c.r[18].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002F7FFCu) [[unlikely]] return; }
L_002F7FFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8004u); set32(c.r[4], ld32((c.r[18].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002F8004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_007E(c, 2u, depth);
}

}
