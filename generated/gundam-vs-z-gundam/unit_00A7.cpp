#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00A7[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0,
    0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 0,
    28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0,
    0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0,
    0, 37, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0,
    42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 44, 0, 45, 0, 46, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0,
    0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 58, 0, 59, 0, 0, 0, 60, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0,
    0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0,
    86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0,
    0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    134, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    144, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 147, 0, 148, 0, 149, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0,
    159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0,
    166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0,
    0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186,
    0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0,
    0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0, 0, 203, 0, 0, 0,
    204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0,
    221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0, 243,
    0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 248, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    258, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 265,
    0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0,
    0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0,
    273, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0,
    0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0,
    0, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0,
    0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0,
    0, 0, 0, 314, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0,
    0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0,
    0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0,
    330, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 335, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0,
    340, 0, 0, 341, 0, 0, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 351, 0, 0, 0,
    0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0,
    0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0,
    0, 0, 0, 0, 0, 362, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 366, 0, 0, 0,
};

void unit_00A7(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0039C000;
    case 2u: goto L_0039C1E8;
    case 3u: goto L_0039C1F0;
    case 4u: goto L_0039C21C;
    case 5u: goto L_0039C234;
    case 6u: goto L_0039C23C;
    case 7u: goto L_0039C250;
    case 8u: goto L_0039C26C;
    case 9u: goto L_0039C290;
    case 10u: goto L_0039C2B0;
    case 11u: goto L_0039C2E8;
    case 12u: goto L_0039C340;
    case 13u: goto L_0039C360;
    case 14u: goto L_0039C590;
    case 15u: goto L_0039C5BC;
    case 16u: goto L_0039C5D4;
    case 17u: goto L_0039C5E8;
    case 18u: goto L_0039C604;
    case 19u: goto L_0039C620;
    case 20u: goto L_0039C640;
    case 21u: goto L_0039C678;
    case 22u: goto L_0039C6D8;
    case 23u: goto L_0039C6F0;
    case 24u: goto L_0039C920;
    case 25u: goto L_0039C94C;
    case 26u: goto L_0039C964;
    case 27u: goto L_0039C96C;
    case 28u: goto L_0039C980;
    case 29u: goto L_0039C9A0;
    case 30u: goto L_0039C9C0;
    case 31u: goto L_0039C9E0;
    case 32u: goto L_0039CA18;
    case 33u: goto L_0039CA74;
    case 34u: goto L_0039CA90;
    case 35u: goto L_0039CCC0;
    case 36u: goto L_0039CCEC;
    case 37u: goto L_0039CD04;
    case 38u: goto L_0039CD0C;
    case 39u: goto L_0039CD20;
    case 40u: goto L_0039CD40;
    case 41u: goto L_0039CD60;
    case 42u: goto L_0039CD80;
    case 43u: goto L_0039CDCC;
    case 44u: goto L_0039CE08;
    case 45u: goto L_0039CE10;
    case 46u: goto L_0039CE18;
    case 47u: goto L_0039CE20;
    case 48u: goto L_0039CE30;
    case 49u: goto L_0039CE50;
    case 50u: goto L_0039CEAC;
    case 51u: goto L_0039CEBC;
    case 52u: goto L_0039CEF0;
    case 53u: goto L_0039CF08;
    case 54u: goto L_0039D020;
    case 55u: goto L_0039D0F8;
    case 56u: goto L_0039D2A0;
    case 57u: goto L_0039D2A8;
    case 58u: goto L_0039D2B0;
    case 59u: goto L_0039D2B8;
    case 60u: goto L_0039D2C8;
    case 61u: goto L_0039D2D0;
    case 62u: goto L_0039D2DC;
    case 63u: goto L_0039D320;
    case 64u: goto L_0039D338;
    case 65u: goto L_0039D340;
    case 66u: goto L_0039D370;
    case 67u: goto L_0039D3B0;
    case 68u: goto L_0039D3C4;
    case 69u: goto L_0039D400;
    case 70u: goto L_0039D410;
    case 71u: goto L_0039D450;
    case 72u: goto L_0039D46C;
    case 73u: goto L_0039D490;
    case 74u: goto L_0039D4E4;
    case 75u: goto L_0039D514;
    case 76u: goto L_0039D540;
    case 77u: goto L_0039D560;
    case 78u: goto L_0039D610;
    case 79u: goto L_0039D630;
    case 80u: goto L_0039D644;
    case 81u: goto L_0039D6C0;
    case 82u: goto L_0039D6F0;
    case 83u: goto L_0039D700;
    case 84u: goto L_0039D760;
    case 85u: goto L_0039D778;
    case 86u: goto L_0039D780;
    case 87u: goto L_0039D790;
    case 88u: goto L_0039D7B8;
    case 89u: goto L_0039D7C8;
    case 90u: goto L_0039D7E8;
    case 91u: goto L_0039D818;
    case 92u: goto L_0039D830;
    case 93u: goto L_0039D850;
    case 94u: goto L_0039D860;
    case 95u: goto L_0039D874;
    case 96u: goto L_0039D88C;
    case 97u: goto L_0039D8A0;
    case 98u: goto L_0039D8B0;
    case 99u: goto L_0039D8B8;
    case 100u: goto L_0039D8C8;
    case 101u: goto L_0039D8EC;
    case 102u: goto L_0039D928;
    case 103u: goto L_0039D938;
    case 104u: goto L_0039D974;
    case 105u: goto L_0039D9A0;
    case 106u: goto L_0039D9B8;
    case 107u: goto L_0039D9D0;
    case 108u: goto L_0039D9E4;
    case 109u: goto L_0039DA20;
    case 110u: goto L_0039DA30;
    case 111u: goto L_0039DA40;
    case 112u: goto L_0039DA68;
    case 113u: goto L_0039DAA8;
    case 114u: goto L_0039DAC0;
    case 115u: goto L_0039DAD0;
    case 116u: goto L_0039DB48;
    case 117u: goto L_0039DB74;
    case 118u: goto L_0039DBA4;
    case 119u: goto L_0039DBE0;
    case 120u: goto L_0039DC48;
    case 121u: goto L_0039DC74;
    case 122u: goto L_0039DCA4;
    case 123u: goto L_0039DCB8;
    case 124u: goto L_0039DD18;
    case 125u: goto L_0039DD38;
    case 126u: goto L_0039DD50;
    case 127u: goto L_0039DD64;
    case 128u: goto L_0039DD90;
    case 129u: goto L_0039DDD8;
    case 130u: goto L_0039DDEC;
    case 131u: goto L_0039DE18;
    case 132u: goto L_0039DE48;
    case 133u: goto L_0039DE50;
    case 134u: goto L_0039DE80;
    case 135u: goto L_0039DE88;
    case 136u: goto L_0039DE98;
    case 137u: goto L_0039DED0;
    case 138u: goto L_0039DEE0;
    case 139u: goto L_0039DF14;
    case 140u: goto L_0039DF34;
    case 141u: goto L_0039DF40;
    case 142u: goto L_0039DF6C;
    case 143u: goto L_0039DFA8;
    case 144u: goto L_0039E000;
    case 145u: goto L_0039E014;
    case 146u: goto L_0039E020;
    case 147u: goto L_0039E088;
    case 148u: goto L_0039E090;
    case 149u: goto L_0039E098;
    case 150u: goto L_0039E0A0;
    case 151u: goto L_0039E0C4;
    case 152u: goto L_0039E0DC;
    case 153u: goto L_0039E0E8;
    case 154u: goto L_0039E128;
    case 155u: goto L_0039E168;
    case 156u: goto L_0039E1C0;
    case 157u: goto L_0039E1D4;
    case 158u: goto L_0039E1EC;
    case 159u: goto L_0039E200;
    case 160u: goto L_0039E230;
    case 161u: goto L_0039E240;
    case 162u: goto L_0039E2A8;
    case 163u: goto L_0039E2B8;
    case 164u: goto L_0039E2D0;
    case 165u: goto L_0039E2F8;
    case 166u: goto L_0039E300;
    case 167u: goto L_0039E318;
    case 168u: goto L_0039E330;
    case 169u: goto L_0039E370;
    case 170u: goto L_0039E390;
    case 171u: goto L_0039E3A8;
    case 172u: goto L_0039E3B8;
    case 173u: goto L_0039E3D8;
    case 174u: goto L_0039E3EC;
    case 175u: goto L_0039E428;
    case 176u: goto L_0039E438;
    case 177u: goto L_0039E44C;
    case 178u: goto L_0039E4A8;
    case 179u: goto L_0039E4EC;
    case 180u: goto L_0039E528;
    case 181u: goto L_0039E540;
    case 182u: goto L_0039E548;
    case 183u: goto L_0039E560;
    case 184u: goto L_0039E5B0;
    case 185u: goto L_0039E5E8;
    case 186u: goto L_0039E5FC;
    case 187u: goto L_0039E608;
    case 188u: goto L_0039E610;
    case 189u: goto L_0039E628;
    case 190u: goto L_0039E630;
    case 191u: goto L_0039E640;
    case 192u: goto L_0039E660;
    case 193u: goto L_0039E688;
    case 194u: goto L_0039E6C8;
    case 195u: goto L_0039E6E8;
    case 196u: goto L_0039E72C;
    case 197u: goto L_0039E73C;
    case 198u: goto L_0039E770;
    case 199u: goto L_0039E790;
    case 200u: goto L_0039E7CC;
    case 201u: goto L_0039E7D8;
    case 202u: goto L_0039E7E4;
    case 203u: goto L_0039E7F0;
    case 204u: goto L_0039E800;
    case 205u: goto L_0039E830;
    case 206u: goto L_0039E840;
    case 207u: goto L_0039E868;
    case 208u: goto L_0039E89C;
    case 209u: goto L_0039E8B8;
    case 210u: goto L_0039E8D0;
    case 211u: goto L_0039E910;
    case 212u: goto L_0039E980;
    case 213u: goto L_0039E9A0;
    case 214u: goto L_0039E9C0;
    case 215u: goto L_0039E9E0;
    case 216u: goto L_0039EA10;
    case 217u: goto L_0039EA30;
    case 218u: goto L_0039EA40;
    case 219u: goto L_0039EA54;
    case 220u: goto L_0039EA5C;
    case 221u: goto L_0039EA80;
    case 222u: goto L_0039EA90;
    case 223u: goto L_0039EAB4;
    case 224u: goto L_0039EAEC;
    case 225u: goto L_0039EB18;
    case 226u: goto L_0039EB30;
    case 227u: goto L_0039EB50;
    case 228u: goto L_0039EB84;
    case 229u: goto L_0039EBC8;
    case 230u: goto L_0039EBF8;
    case 231u: goto L_0039EC2C;
    case 232u: goto L_0039EC40;
    case 233u: goto L_0039EC60;
    case 234u: goto L_0039EC70;
    case 235u: goto L_0039ECA0;
    case 236u: goto L_0039ECA8;
    case 237u: goto L_0039ECBC;
    case 238u: goto L_0039ECD8;
    case 239u: goto L_0039ED10;
    case 240u: goto L_0039ED38;
    case 241u: goto L_0039ED58;
    case 242u: goto L_0039ED60;
    case 243u: goto L_0039ED7C;
    case 244u: goto L_0039ED88;
    case 245u: goto L_0039ED90;
    case 246u: goto L_0039EDAC;
    case 247u: goto L_0039EDBC;
    case 248u: goto L_0039EDCC;
    case 249u: goto L_0039EDD4;
    case 250u: goto L_0039EDF0;
    case 251u: goto L_0039EE18;
    case 252u: goto L_0039EE20;
    case 253u: goto L_0039EE40;
    case 254u: goto L_0039EE50;
    case 255u: goto L_0039EE78;
    case 256u: goto L_0039EEB0;
    case 257u: goto L_0039EED0;
    case 258u: goto L_0039EF00;
    case 259u: goto L_0039EF08;
    case 260u: goto L_0039EF2C;
    case 261u: goto L_0039EF60;
    case 262u: goto L_0039EFB0;
    case 263u: goto L_0039EFD0;
    case 264u: goto L_0039EFF4;
    case 265u: goto L_0039EFFC;
    case 266u: goto L_0039F010;
    case 267u: goto L_0039F044;
    case 268u: goto L_0039F06C;
    case 269u: goto L_0039F084;
    case 270u: goto L_0039F0A0;
    case 271u: goto L_0039F0D8;
    case 272u: goto L_0039F0F0;
    case 273u: goto L_0039F100;
    case 274u: goto L_0039F120;
    case 275u: goto L_0039F14C;
    case 276u: goto L_0039F154;
    case 277u: goto L_0039F180;
    case 278u: goto L_0039F1D8;
    case 279u: goto L_0039F204;
    case 280u: goto L_0039F220;
    case 281u: goto L_0039F238;
    case 282u: goto L_0039F288;
    case 283u: goto L_0039F2D0;
    case 284u: goto L_0039F2E4;
    case 285u: goto L_0039F320;
    case 286u: goto L_0039F354;
    case 287u: goto L_0039F380;
    case 288u: goto L_0039F3B0;
    case 289u: goto L_0039F3D0;
    case 290u: goto L_0039F410;
    case 291u: goto L_0039F430;
    case 292u: goto L_0039F484;
    case 293u: goto L_0039F4B4;
    case 294u: goto L_0039F4E0;
    case 295u: goto L_0039F510;
    case 296u: goto L_0039F578;
    case 297u: goto L_0039F59C;
    case 298u: goto L_0039F5C4;
    case 299u: goto L_0039F5E8;
    case 300u: goto L_0039F608;
    case 301u: goto L_0039F610;
    case 302u: goto L_0039F638;
    case 303u: goto L_0039F668;
    case 304u: goto L_0039F678;
    case 305u: goto L_0039F6A8;
    case 306u: goto L_0039F6C0;
    case 307u: goto L_0039F704;
    case 308u: goto L_0039F720;
    case 309u: goto L_0039F75C;
    case 310u: goto L_0039F770;
    case 311u: goto L_0039F784;
    case 312u: goto L_0039F7CC;
    case 313u: goto L_0039F7F4;
    case 314u: goto L_0039F80C;
    case 315u: goto L_0039F810;
    case 316u: goto L_0039F888;
    case 317u: goto L_0039F8C0;
    case 318u: goto L_0039F930;
    case 319u: goto L_0039F978;
    case 320u: goto L_0039F988;
    case 321u: goto L_0039F9A0;
    case 322u: goto L_0039F9C0;
    case 323u: goto L_0039F9D8;
    case 324u: goto L_0039F9F0;
    case 325u: goto L_0039FA04;
    case 326u: goto L_0039FA4C;
    case 327u: goto L_0039FA7C;
    case 328u: goto L_0039FAB0;
    case 329u: goto L_0039FAE0;
    case 330u: goto L_0039FB00;
    case 331u: goto L_0039FB20;
    case 332u: goto L_0039FB30;
    case 333u: goto L_0039FBB0;
    case 334u: goto L_0039FBD8;
    case 335u: goto L_0039FBE0;
    case 336u: goto L_0039FC18;
    case 337u: goto L_0039FC34;
    case 338u: goto L_0039FC40;
    case 339u: goto L_0039FC64;
    case 340u: goto L_0039FC80;
    case 341u: goto L_0039FC8C;
    case 342u: goto L_0039FC9C;
    case 343u: goto L_0039FCA4;
    case 344u: goto L_0039FCC8;
    case 345u: goto L_0039FCF0;
    case 346u: goto L_0039FD30;
    case 347u: goto L_0039FD60;
    case 348u: goto L_0039FD70;
    case 349u: goto L_0039FDD0;
    case 350u: goto L_0039FDE8;
    case 351u: goto L_0039FDF0;
    case 352u: goto L_0039FE0C;
    case 353u: goto L_0039FE40;
    case 354u: goto L_0039FE70;
    case 355u: goto L_0039FED0;
    case 356u: goto L_0039FEE0;
    case 357u: goto L_0039FF04;
    case 358u: goto L_0039FF18;
    case 359u: goto L_0039FF50;
    case 360u: goto L_0039FF54;
    case 361u: goto L_0039FF70;
    case 362u: goto L_0039FF94;
    case 363u: goto L_0039FF98;
    case 364u: goto L_0039FFD8;
    case 365u: goto L_0039FFE8;
    case 366u: goto L_0039FFF0;
    default: bad_entry(c, 0x0039C000u); return;
    }
L_0039C000:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_0039C168; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_0039C0B8; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_0039C058; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0039C038; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039C1E0; } }
    c.budget -= 1;
L_0039C038:
    set32(c.r[5], c.r[6].w[0] + 1u);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], 0u + 221u);
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[3].w[0] + 8u), 0u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), 0u);  if (t) { goto L_0039C1E0; } }
L_0039C058:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_0039C1E0; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0xC28C0000u);
    c.f[0] = c.r[5].w[0];
    set32(c.r[6], 0u + 39u);
    set32(c.r[5], c.r[7].w[0] + 1u);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), c.f[0]);  if (t) { goto L_0039C1E0; } }
    c.budget -= 1;
L_0039C0B8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[4] = ld32((c.r[3].w[0] + 12u));
    c.f[2] = ld32((c.r[3].w[0] + 8u));
    c.f[3] = c.r[5].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[5].w[0];
    c.f[2] = fp::add(c.f[2], c.f[4]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[3].w[0] + 8u), c.f[2]);
    c.f[2] = c.f[2];
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    st32((c.r[4].w[0] + 88u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 27;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { goto L_0039C1E0; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.f[0] = c.r[5].w[0];
    set32(c.r[6], 0u + 10u);
    set32(c.r[5], c.r[7].w[0] + 1u);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), c.f[0]);  if (t) { goto L_0039C1E0; } }
    c.budget -= 1;
L_0039C168:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[4] = ld32((c.r[3].w[0] + 12u));
    c.f[2] = ld32((c.r[3].w[0] + 8u));
    c.f[3] = c.r[5].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[5].w[0];
    c.f[2] = fp::add(c.f[2], c.f[4]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[3].w[0] + 8u), c.f[2]);
    c.f[2] = c.f[2];
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    st32((c.r[4].w[0] + 88u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 27;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { goto L_0039C1E0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 3;
L_0039C1E0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0039C1E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039C1F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[16].w[0] + 304u);  if (t) { goto L_0039C270; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C21Cu); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0039C21Cu) [[unlikely]] return; }
L_0039C21C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.f[12] = 0u;
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C234u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0039C234u) [[unlikely]] return; }
L_0039C234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C23Cu); set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0039C23Cu) [[unlikely]] return; }
L_0039C23C:
    c.f[12] = ld32((c.r[16].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C250u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0039C250u) [[unlikely]] return; }
L_0039C250:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C26Cu); c.f[12] = ld32((c.r[16].w[0] + 104u));  if (depth < kMaxDepth) unit_0068(c, 82u, depth + 1u); else { c.pc = 0x002A23A0u; return; } if (c.pc != 0x0039C26Cu) [[unlikely]] return; }
L_0039C26C:
    c.budget -= 1;
L_0039C270:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039C290:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 22064u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0039C000u < 16384u) { entry = entries_00A7[(t - 0x0039C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0039C2B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 28856u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[17].w[0] + 304u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C2E8u); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x0039C2E8u) [[unlikely]] return; }
L_0039C2E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[3], 0u + 18u);
    set32(c.r[2], c.r[2].w[0] - 14960u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 890u);
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[17].w[0] + 104u), 0u);
    set32(c.r[3], c.r[3].w[0] + 21952u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 21984u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C340u); st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A7(c, 13u, depth + 1u); else { c.pc = 0x0039C360u; return; } if (c.pc != 0x0039C340u) [[unlikely]] return; }
L_0039C340:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039C360:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18782u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + 304u);  if (t) { goto L_0039C580; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    c.r[1].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0039C398; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0039C580; } }
    c.budget -= 1;
L_0039C398:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0039C3C0; } }
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { goto L_0039C580; } }
    c.budget -= 1;
L_0039C3C0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { goto L_0039C490; } }
    set32(c.r[6], ld32((c.r[3].w[0] + 16u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[5].d[0] = c.r[5].d[0] | 55050ull;
    c.f[3] = c.r[5].w[0];
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] + 4u);
    st32((c.r[3].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 16u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.budget -= 18;
    { const bool t = c.r[6].sd[0] > 0;  if (t) { goto L_0039C438; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0039C580; } }
    c.budget -= 1;
L_0039C438:
    c.r[5].d[0] = c.r[7].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[3].w[0] + 16u)));
    c.f[1] = ld32((c.r[4].w[0] + 112u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = c.r[6].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 48u), c.f[0]);  if (t) { goto L_0039C4A0; } }
    c.budget -= 1;
L_0039C490:
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.budget -= 4;
L_0039C4A0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { goto L_0039C568; } }
    set32(c.r[6], ld32((c.r[3].w[0] + 20u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[5].d[0] = c.r[5].d[0] | 55050ull;
    c.f[3] = c.r[5].w[0];
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[5], c.r[5].w[0] + 4u);
    st32((c.r[3].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.budget -= 18;
    { const bool t = c.r[6].sd[0] > 0;  if (t) { goto L_0039C518; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0039C580; } }
    c.budget -= 1;
L_0039C518:
    c.r[5].d[0] = c.r[7].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.f[2] = c.r[5].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 108u), c.f[0]);  if (t) { goto L_0039C578; } }
    c.budget -= 1;
L_0039C568:
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.budget -= 4;
L_0039C578:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0039C580:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039C590:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[16].w[0] + 304u);  if (t) { goto L_0039C608; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C5BCu); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0039C5BCu) [[unlikely]] return; }
L_0039C5BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.f[12] = 0u;
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C5D4u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0039C5D4u) [[unlikely]] return; }
L_0039C5D4:
    c.f[12] = ld32((c.r[16].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C5E8u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0039C5E8u) [[unlikely]] return; }
L_0039C5E8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C604u); c.f[12] = ld32((c.r[16].w[0] + 104u));  if (depth < kMaxDepth) unit_0068(c, 82u, depth + 1u); else { c.pc = 0x002A23A0u; return; } if (c.pc != 0x0039C604u) [[unlikely]] return; }
L_0039C604:
    c.budget -= 1;
L_0039C608:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039C620:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 22176u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0039C000u < 16384u) { entry = entries_00A7[(t - 0x0039C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0039C640:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 28856u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[17].w[0] + 304u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C678u); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x0039C678u) [[unlikely]] return; }
L_0039C678:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[3], 0u + 19u);
    set32(c.r[2], c.r[2].w[0] - 14048u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 890u);
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[17].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 22080u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[1].w[0] + 7284u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st32((c.r[1].w[0] + 7280u), 0u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C6D8u); st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A7(c, 23u, depth + 1u); else { c.pc = 0x0039C6F0u; return; } if (c.pc != 0x0039C6D8u) [[unlikely]] return; }
L_0039C6D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039C6F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18782u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + 304u);  if (t) { goto L_0039C918; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    c.r[1].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0039C728; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0039C918; } }
    c.budget -= 1;
L_0039C728:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0039C750; } }
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { goto L_0039C918; } }
    c.budget -= 1;
L_0039C750:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0; c.r[5].sd[0] = static_cast<std::int32_t>(0x3C230000u);  if (t) { goto L_0039C8D8; } }
    set32(c.r[8], ld32((c.r[3].w[0] + 8u)));
    c.r[6].d[0] = c.r[5].d[0] | 55050ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[2] = c.r[5].w[0];
    c.f[4] = c.r[6].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[5].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    c.f[1] = c.r[6].w[0];
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 2u)));
    c.f[3] = c.r[5].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[3] = fp::mul(c.f[4], c.f[3]);
    st32((c.r[4].w[0] + 112u), c.f[3]);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 4u)));
    c.f[3] = c.r[5].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    st32((c.r[4].w[0] + 88u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 6u)));
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[1].w[0] + 7280u), c.f[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] + 8u);
    st32((c.r[3].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.budget -= 43;
    { const bool t = c.r[6].sd[0] > 0;  if (t) { goto L_0039C828; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0039C918; } }
L_0039C828:
    c.r[5].d[0] = c.r[7].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 6u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0039C850; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0039C900; } }
L_0039C850:
    set32(c.r[5], 0u + 1u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[6], ld32((c.r[3].w[0] + 8u)));
    c.f[1] = ld32((c.r[4].w[0] + 112u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = c.r[6].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[2] = fp::mul(c.f[4], c.f[2]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 48u), c.f[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 8u)));
    c.f[1] = ld32((c.r[1].w[0] + 7280u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 6u)));
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = c.r[6].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 33;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.f[0]);  if (t) { goto L_0039C900; } }
    c.budget -= 1;
L_0039C8D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] + 7280u));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[1].w[0] + 7280u), c.f[0]);
    c.budget -= 10;
L_0039C900:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039C918; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0039C918:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039C920:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[16].w[0] + 304u);  if (t) { goto L_0039C9A0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C94Cu); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0039C94Cu) [[unlikely]] return; }
L_0039C94C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD4C0000u);
    c.f[12] = 0u;
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C964u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0039C964u) [[unlikely]] return; }
L_0039C964:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C96Cu); set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0039C96Cu) [[unlikely]] return; }
L_0039C96C:
    c.f[12] = ld32((c.r[16].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C980u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0039C980u) [[unlikely]] return; }
L_0039C980:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 184u)));
    c.f[12] = c.r[2].w[0];
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C9A0u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0068(c, 82u, depth + 1u); else { c.pc = 0x002A23A0u; return; } if (c.pc != 0x0039C9A0u) [[unlikely]] return; }
L_0039C9A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039C9C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 22240u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0039C000u < 16384u) { entry = entries_00A7[(t - 0x0039C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0039C9E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 28856u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[17].w[0] + 304u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CA18u); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x0039CA18u) [[unlikely]] return; }
L_0039CA18:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[2], 0u + 20u);
    set32(c.r[3], c.r[3].w[0] - 13120u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st32((c.r[17].w[0] + 168u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 890u);
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 22192u);
    st32((c.r[17].w[0] + 104u), 0u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[1].w[0] + 7292u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st32((c.r[1].w[0] + 7288u), 0u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CA74u); st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A7(c, 34u, depth + 1u); else { c.pc = 0x0039CA90u; return; } if (c.pc != 0x0039CA74u) [[unlikely]] return; }
L_0039CA74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039CA90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18782u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + 304u);  if (t) { goto L_0039CCB8; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    c.r[1].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0039CAC8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0039CCB8; } }
    c.budget -= 1;
L_0039CAC8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0039CAF0; } }
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { goto L_0039CCB8; } }
    c.budget -= 1;
L_0039CAF0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0; c.r[5].sd[0] = static_cast<std::int32_t>(0x3C230000u);  if (t) { goto L_0039CC78; } }
    set32(c.r[8], ld32((c.r[3].w[0] + 8u)));
    c.r[6].d[0] = c.r[5].d[0] | 55050ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[2] = c.r[5].w[0];
    c.f[4] = c.r[6].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[5].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    c.f[1] = c.r[6].w[0];
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 2u)));
    c.f[3] = c.r[5].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[3] = fp::mul(c.f[4], c.f[3]);
    st32((c.r[4].w[0] + 112u), c.f[3]);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 4u)));
    c.f[3] = c.r[5].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    st32((c.r[4].w[0] + 88u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 6u)));
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[1].w[0] + 7288u), c.f[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] + 8u);
    st32((c.r[3].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.budget -= 43;
    { const bool t = c.r[6].sd[0] > 0;  if (t) { goto L_0039CBC8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0039CCB8; } }
L_0039CBC8:
    c.r[5].d[0] = c.r[7].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 6u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0039CBF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0039CCA0; } }
L_0039CBF0:
    set32(c.r[5], 0u + 1u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[6], ld32((c.r[3].w[0] + 8u)));
    c.f[1] = ld32((c.r[4].w[0] + 112u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = c.r[6].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[2] = fp::mul(c.f[4], c.f[2]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 48u), c.f[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 8u)));
    c.f[1] = ld32((c.r[1].w[0] + 7288u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 6u)));
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = c.r[6].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 33;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.f[0]);  if (t) { goto L_0039CCA0; } }
    c.budget -= 1;
L_0039CC78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] + 7288u));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[1].w[0] + 7288u), c.f[0]);
    c.budget -= 10;
L_0039CCA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039CCB8; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0039CCB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039CCC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[16].w[0] + 304u);  if (t) { goto L_0039CD40; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CCECu); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0039CCECu) [[unlikely]] return; }
L_0039CCEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDCC0000u);
    c.f[12] = 0u;
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CD04u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0039CD04u) [[unlikely]] return; }
L_0039CD04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CD0Cu); set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0039CD0Cu) [[unlikely]] return; }
L_0039CD0C:
    c.f[12] = ld32((c.r[16].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CD20u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0039CD20u) [[unlikely]] return; }
L_0039CD20:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 184u)));
    c.f[12] = c.r[2].w[0];
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CD40u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0068(c, 82u, depth + 1u); else { c.pc = 0x002A23A0u; return; } if (c.pc != 0x0039CD40u) [[unlikely]] return; }
L_0039CD40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039CD60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 22256u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0039C000u < 16384u) { entry = entries_00A7[(t - 0x0039C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0039CD80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 22272u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] - 28856u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[17].w[0] + 304u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CDCCu); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x0039CDCCu) [[unlikely]] return; }
L_0039CDCC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[2], 0u + 23u);
    set32(c.r[3], c.r[3].w[0] - 12256u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 168u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 160u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 4u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x457A0000u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 48u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CE08u); st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A7(c, 63u, depth + 1u); else { c.pc = 0x0039D320u; return; } if (c.pc != 0x0039CE08u) [[unlikely]] return; }
L_0039CE08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CE10u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0039CE10u) [[unlikely]] return; }
L_0039CE10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CE18u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x0039CE18u) [[unlikely]] return; }
L_0039CE18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CE20u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0039CE20u) [[unlikely]] return; }
L_0039CE20:
    st8((c.r[16].w[0] + 161u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CE30u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_00A7(c, 49u, depth + 1u); else { c.pc = 0x0039CE50u; return; } if (c.pc != 0x0039CE30u) [[unlikely]] return; }
L_0039CE30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0039CE50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 18782u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_0039D000; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[1].d[0] = c.r[2].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0039CF00; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0039CF00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CEACu); st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A7(c, 69u, depth + 1u); else { c.pc = 0x0039D400u; return; } if (c.pc != 0x0039CEACu) [[unlikely]] return; }
L_0039CEAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0039CF00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CEBCu);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x0039CEBCu) [[unlikely]] return; }
L_0039CEBC:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 1ull;  if (t) { goto L_0039CED4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] + 3u);  if (t) { goto L_0039CED8; } }
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 1;
L_0039CED4:
    set32(c.r[3], c.r[2].w[0] + 3u);
    c.budget -= 1;
L_0039CED8:
    set32(c.r[2], 0u + 4u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CEF0u); set32(c.r[5], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_00A7(c, 78u, depth + 1u); else { c.pc = 0x0039D610u; return; } if (c.pc != 0x0039CEF0u) [[unlikely]] return; }
L_0039CEF0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0039CF00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CF08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 66u, depth + 1u); else { c.pc = 0x0039D370u; return; } if (c.pc != 0x0039CF08u) [[unlikely]] return; }
L_0039CF08:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 161u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0039CFC0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_0039CF88; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0039CF50; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039CF38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039CFF0; } }
L_0039CF38:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 161u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 360u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 162u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0039CFF0; } }
L_0039CF50:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0039CFF0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 161u)));
    set32(c.r[3], 0u + 560u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 161u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 162u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0039CFF0; } }
L_0039CF88:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0039CFF0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 161u)));
    set32(c.r[3], 0u + 80u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 161u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 162u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0039CFF0; } }
L_0039CFC0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0039CFF0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 161u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 161u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 162u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_0039CFF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 162u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0039D000; } }
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0039D000:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0039D020:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 464u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 17;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_0039D2F0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[29].w[0] + 112u);
    st8((c.r[1].w[0] + 20292u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20240u), c.r[3].w[0]);
    set32(c.r[3], c.r[28].w[0] - 27620u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20260u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] + 22288u);
    st32((c.r[1].w[0] + 20256u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] + 22304u);
    st32((c.r[1].w[0] + 20252u), c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 184u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20272u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20288u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 13624u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20276u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 184u)));
    c.budget -= 34;
    { const bool t = c.r[3].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0039D2F0; } }
    set32(c.r[20], c.r[29].w[0] + 186u);
    set32(c.r[19], c.r[29].w[0] + 188u);
    set32(c.r[18], c.r[29].w[0] + 190u);
    c.budget -= 3;
L_0039D0F8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0; c.r[5].d[0] = c.r[6].d[0] & 3ull;  if (t) { goto L_0039D2E0; } }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0;  if (t) { goto L_0039D118; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0039D118; } }
    set32(c.r[5], c.r[5].w[0] - 4u);
    c.budget -= 1;
L_0039D118:
    c.f[1] = c.r[5].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0039D154; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 184u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0039D170; } }
L_0039D154:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st16((c.r[29].w[0] + 184u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
L_0039D170:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 2));  if (t) { goto L_0039D180; } }
    set32(c.r[2], c.r[6].w[0] + 3u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_0039D180:
    c.f[1] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0039D1BC; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[5].w[0] + 1u);  if (t) { goto L_0039D1D8; } }
L_0039D1BC:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 7;
L_0039D1D8:
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st16((c.r[20].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0039D21C; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_0039D238; } }
L_0039D21C:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 7;
L_0039D238:
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0039D27C; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0039D298; } }
L_0039D27C:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
L_0039D298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D2A0u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0039D2A0u) [[unlikely]] return; }
L_0039D2A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D2A8u); c.r[4].d[0] = ld16((c.r[16].w[0] + 6u));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0039D2A8u) [[unlikely]] return; }
L_0039D2A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D2B0u); c.r[4].d[0] = ld16((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0039D2B0u) [[unlikely]] return; }
L_0039D2B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D2B8u); c.r[4].d[0] = ld16((c.r[16].w[0] + 8u));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0039D2B8u) [[unlikely]] return; }
L_0039D2B8:
    c.f[13] = ld32((c.r[17].w[0] + 52u));
    c.f[14] = ld32((c.r[17].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D2C8u); c.f[12] = ld32((c.r[17].w[0] + 48u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0039D2C8u) [[unlikely]] return; }
L_0039D2C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D2D0u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0039D2D0u) [[unlikely]] return; }
L_0039D2D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D2DCu); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x0039D2DCu) [[unlikely]] return; }
L_0039D2DC:
    c.budget -= 1;
L_0039D2E0:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[3].d[0] = c.r[21].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 10u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D0F8u | kUnwind; return; } goto L_0039D0F8; } }
L_0039D2F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0039D320:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[4].w[0] + 304u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_0039D338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D340u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 71u, depth + 1u); else { c.pc = 0x0039D450u; return; } if (c.pc != 0x0039D340u) [[unlikely]] return; }
L_0039D340:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 10u);
    c.r[3].d[0] = c.r[16].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D338u | kUnwind; return; } goto L_0039D338; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039D370:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].d[0] = c.r[17].sd[0] < 16ll ? 1ull : 0ull;
    set32(c.r[3], c.r[18].w[0] + 304u);
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0039D3D8; } }
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[19], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_0039D3B0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0039D3C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D3C4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 73u, depth + 1u); else { c.pc = 0x0039D490u; return; } if (c.pc != 0x0039D3C4u) [[unlikely]] return; }
L_0039D3C4:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_0039D3C8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 10u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D3B0u | kUnwind; return; } goto L_0039D3B0; } }
L_0039D3D8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0039D400:
    set32(c.r[4], c.r[4].w[0] + 304u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0039D430; } }
L_0039D410:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0039D428; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
L_0039D428:
    set32(c.r[4], c.r[4].w[0] + 10u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_0039D430:
    c.r[1].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0039D448; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D410u | kUnwind; return; } goto L_0039D410; } }
    c.budget -= 1;
L_0039D448:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039D450:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 10u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D46Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0039D46Cu) [[unlikely]] return; }
L_0039D46C:
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039D490:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0039D520; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u + 4u);
    set32(c.r[18], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[18].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0039D518; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D4E4u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x0039D4E4u) [[unlikely]] return; }
L_0039D4E4:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 1ull;  if (t) { goto L_0039D4FC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039D4FC; } }
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 1;
L_0039D4FC:
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[5], c.r[16].w[0] + 4u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D514u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 78u, depth + 1u); else { c.pc = 0x0039D610u; return; } if (c.pc != 0x0039D514u) [[unlikely]] return; }
L_0039D514:
    c.budget -= 1;
L_0039D518:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 2;
L_0039D520:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0039D540:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] << 48;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D560u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x0039D560u) [[unlikely]] return; }
L_0039D560:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0039D574; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0039D58C; } }
L_0039D574:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0039D58C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.f[0] = c.r[3].w[0];
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43800000u);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    c.f[2] = fp::mul(c.f[0], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 30;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039D610:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u - 90u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D630u); set32(c.r[5], 0u + 90u);  if (depth < kMaxDepth) unit_00A7(c, 76u, depth + 1u); else { c.pc = 0x0039D540u; return; } if (c.pc != 0x0039D630u) [[unlikely]] return; }
L_0039D630:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 360u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D644u); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (depth < kMaxDepth) unit_00A7(c, 76u, depth + 1u); else { c.pc = 0x0039D540u; return; } if (c.pc != 0x0039D644u) [[unlikely]] return; }
L_0039D644:
    c.f[1] = c.r[17].w[0];
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[3] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[4] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    c.f[0] = fp::mul(c.f[4], c.f[0]);
    fpu_div(c, 1u, c.f[1], c.f[3]);
    c.f[2] = c.r[3].w[0];
    fpu_div(c, 0u, c.f[0], c.f[3]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], c.f[0]);
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 31;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039D6C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st8((c.r[28].w[0] - 22528u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 22320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D6F0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039D6F0u) [[unlikely]] return; }
L_0039D6F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22528u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039D700:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 516u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0039D818; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0039D7E0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_0039D780; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0039D768; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0039D750; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039D818; } }
L_0039D750:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D760u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 83u, depth + 1u); else { c.pc = 0x00334FC0u; return; } if (c.pc != 0x0039D760u) [[unlikely]] return; }
L_0039D760:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039D818; } }
L_0039D768:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D778u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 19u, depth + 1u); else { c.pc = 0x003341C0u; return; } if (c.pc != 0x0039D778u) [[unlikely]] return; }
L_0039D778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D780u);  if (depth < kMaxDepth) unit_0095(c, 272u, depth + 1u); else { c.pc = 0x00356350u; return; } if (c.pc != 0x0039D780u) [[unlikely]] return; }
L_0039D780:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D790u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 56u, depth + 1u); else { c.pc = 0x00334D40u; return; } if (c.pc != 0x0039D790u) [[unlikely]] return; }
L_0039D790:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 5u);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D7B8u); st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A8(c, 308u, depth + 1u); else { c.pc = 0x003A2A90u; return; } if (c.pc != 0x0039D7B8u) [[unlikely]] return; }
L_0039D7B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[5], 0u + 50u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D7C8u); set32(c.r[4], c.r[4].w[0] + 17040u);  if (depth < kMaxDepth) unit_008D(c, 104u, depth + 1u); else { c.pc = 0x003352F0u; return; } if (c.pc != 0x0039D7C8u) [[unlikely]] return; }
L_0039D7C8:
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 19u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0039D818; } }
    c.budget -= 1;
L_0039D7E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D7E8u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x0039D7E8u) [[unlikely]] return; }
L_0039D7E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039D810; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2597u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_0039D810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D818u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 234u, depth + 1u); else { c.pc = 0x0039EC70u; return; } if (c.pc != 0x0039D818u) [[unlikely]] return; }
L_0039D818:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039D830:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 22336u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0039C000u < 16384u) { entry = entries_00A7[(t - 0x0039C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0039D850:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  goto L_0039EC70; }
L_0039D860:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D874u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 234u, depth + 1u); else { c.pc = 0x0039EC70u; return; } if (c.pc != 0x0039D874u) [[unlikely]] return; }
L_0039D874:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039D898; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D88Cu); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A8(c, 287u, depth + 1u); else { c.pc = 0x003A2780u; return; } if (c.pc != 0x0039D88Cu) [[unlikely]] return; }
L_0039D88C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039D9C0; } }
    c.budget -= 1;
L_0039D898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D8A0u);  if (depth < kMaxDepth) unit_0089(c, 28u, depth + 1u); else { c.pc = 0x00324360u; return; } if (c.pc != 0x0039D8A0u) [[unlikely]] return; }
L_0039D8A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039D9C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D8B0u);  if (depth < kMaxDepth) unit_00A8(c, 287u, depth + 1u); else { c.pc = 0x003A2780u; return; } if (c.pc != 0x0039D8B0u) [[unlikely]] return; }
L_0039D8B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D8B8u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0039D8B8u) [[unlikely]] return; }
L_0039D8B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0039D8D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D8C8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0039D8C8u) [[unlikely]] return; }
L_0039D8C8:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0039D9C0; } }
L_0039D8D8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_0039D9C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D8ECu);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0039D8ECu) [[unlikely]] return; }
L_0039D8EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039D930; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], 0u + 30u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D928u); st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0039D928u) [[unlikely]] return; }
L_0039D928:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039D9C0; } }
L_0039D930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D938u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0039D938u) [[unlikely]] return; }
L_0039D938:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039D980; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[3], 0u + 30u);
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[7].w[0] + 2600u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D974u); st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0039D974u) [[unlikely]] return; }
L_0039D974:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039D9C0; } }
    c.budget -= 1;
L_0039D980:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[16].w[0] + 11u);
    set32(c.r[6], 0u + 2u);
    st8((c.r[2].w[0] + 2601u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 20u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D9A0u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_008D(c, 20u, depth + 1u); else { c.pc = 0x003341D0u; return; } if (c.pc != 0x0039D9A0u) [[unlikely]] return; }
L_0039D9A0:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039D9C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D9B8u);  if (depth < kMaxDepth) unit_00A7(c, 261u, depth + 1u); else { c.pc = 0x0039EF60u; return; } if (c.pc != 0x0039D9B8u) [[unlikely]] return; }
L_0039D9B8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2601u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0039D9C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039D9D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D9E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 234u, depth + 1u); else { c.pc = 0x0039EC70u; return; } if (c.pc != 0x0039D9E4u) [[unlikely]] return; }
L_0039D9E4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039DA00; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0039DAC0; } }
    c.budget -= 1;
L_0039DA00:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 20508u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039DA28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DA20u);  if (depth < kMaxDepth) unit_00A8(c, 287u, depth + 1u); else { c.pc = 0x003A2780u; return; } if (c.pc != 0x0039DA20u) [[unlikely]] return; }
L_0039DA20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039DAC0; } }
L_0039DA28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DA30u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0039DA30u) [[unlikely]] return; }
L_0039DA30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0039DA60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DA40u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0039DA40u) [[unlikely]] return; }
L_0039DA40:
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 40u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0039DAC0; } }
L_0039DA60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DA68u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0039DA68u) [[unlikely]] return; }
L_0039DA68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039DAB0; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[7], 0u + 2u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 30u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[6].w[0] + 2600u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DAA8u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0039DAA8u) [[unlikely]] return; }
L_0039DAA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039DAC0; } }
L_0039DAB0:
    set32(c.r[4], c.r[16].w[0] + 10u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DAC0u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 20u, depth + 1u); else { c.pc = 0x003341D0u; return; } if (c.pc != 0x0039DAC0u) [[unlikely]] return; }
L_0039DAC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039DAD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0039DAF8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0039DD30; } }
    c.budget -= 1;
L_0039DAF8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 10u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0039DCF8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0039DC20; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039DB20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039DD30; } }
L_0039DB20:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039DBD8; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], 0u + 462u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DB48u); set32(c.r[4], c.r[2].w[0] + 4813u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0039DB48u) [[unlikely]] return; }
L_0039DB48:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 11u));
    set32(c.r[2], c.r[2].w[0] + 17040u);
    set32(c.r[6], 0u + 8u);
    set32(c.r[4], c.r[3].w[0] + 4814u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DB74u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x0039DB74u) [[unlikely]] return; }
L_0039DB74:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 11u));
    set32(c.r[2], c.r[2].w[0] + 17040u);
    set32(c.r[6], 0u + 16u);
    set32(c.r[4], c.r[3].w[0] + 4822u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DBA4u); set32(c.r[5], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x0039DBA4u) [[unlikely]] return; }
L_0039DBA4:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 3425u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039DBC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0039DBC8; } }
    c.budget -= 1;
L_0039DBC0:
    set32(c.r[2], 0u + 8u);
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0039DBC8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0039DD30; } }
    c.budget -= 1;
L_0039DBD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DBE0u);  if (depth < kMaxDepth) unit_00A8(c, 319u, depth + 1u); else { c.pc = 0x003A2B30u; return; } if (c.pc != 0x0039DBE0u) [[unlikely]] return; }
L_0039DBE0:
    set32(c.r[2], 0u + 6u);
    set32(c.r[4], 0u + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2597u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(0u));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22404u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0039DD30; } }
L_0039DC20:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039DCB0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], 0u + 462u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DC48u); set32(c.r[4], c.r[2].w[0] + 4813u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0039DC48u) [[unlikely]] return; }
L_0039DC48:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 11u));
    set32(c.r[2], c.r[2].w[0] + 17040u);
    set32(c.r[6], 0u + 8u);
    set32(c.r[4], c.r[3].w[0] + 4814u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DC74u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x0039DC74u) [[unlikely]] return; }
L_0039DC74:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 11u));
    set32(c.r[2], c.r[2].w[0] + 17040u);
    set32(c.r[6], 0u + 16u);
    set32(c.r[4], c.r[3].w[0] + 4822u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DCA4u); set32(c.r[5], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x0039DCA4u) [[unlikely]] return; }
L_0039DCA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0039DD30; } }
    c.budget -= 1;
L_0039DCB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DCB8u);  if (depth < kMaxDepth) unit_00A8(c, 298u, depth + 1u); else { c.pc = 0x003A2A10u; return; } if (c.pc != 0x0039DCB8u) [[unlikely]] return; }
L_0039DCB8:
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2590u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2597u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(0u));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22404u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0039DD30; } }
L_0039DCF8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 20508u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039DD20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DD18u);  if (depth < kMaxDepth) unit_00A8(c, 287u, depth + 1u); else { c.pc = 0x003A2780u; return; } if (c.pc != 0x0039DD18u) [[unlikely]] return; }
L_0039DD18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039DD30; } }
L_0039DD20:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0039DD30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DD38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 234u, depth + 1u); else { c.pc = 0x0039EC70u; return; } if (c.pc != 0x0039DD38u) [[unlikely]] return; }
L_0039DD38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039DD50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DD64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 234u, depth + 1u); else { c.pc = 0x0039EC70u; return; } if (c.pc != 0x0039DD64u) [[unlikely]] return; }
L_0039DD64:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0039E1A8; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 30640u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0039C000u < 16384u) { entry = entries_00A7[(t - 0x0039C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0039DD90:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], 0u + 15u);
    set32(c.r[2], c.r[2].w[0] + 17040u);
    set32(c.r[4], 0u + 60u);
    st8((c.r[5].w[0] + 3419u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 11u));
    set32(c.r[5], c.r[3].w[0] + 3419u);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DDD8u); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_009E(c, 44u, depth + 1u); else { c.pc = 0x00378C00u; return; } if (c.pc != 0x0039DDD8u) [[unlikely]] return; }
L_0039DDD8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 154u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DDECu); set32(c.r[4], c.r[2].w[0] + 4659u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0039DDECu) [[unlikely]] return; }
L_0039DDEC:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 11u));
    set32(c.r[2], c.r[2].w[0] + 17040u);
    set32(c.r[6], 0u + 8u);
    set32(c.r[4], c.r[3].w[0] + 4660u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DE18u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x0039DE18u) [[unlikely]] return; }
L_0039DE18:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 11u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[2].w[0] + 17040u);
    set32(c.r[6], 0u + 16u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[5].w[0] + 4668u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DE48u); set32(c.r[5], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x0039DE48u) [[unlikely]] return; }
L_0039DE48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039E1A8; } }
L_0039DE50:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0039E1A8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0039E1A8; } }
    c.budget -= 1;
L_0039DE80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DE88u);  if (depth < kMaxDepth) unit_008D(c, 48u, depth + 1u); else { c.pc = 0x00334A60u; return; } if (c.pc != 0x0039DE88u) [[unlikely]] return; }
L_0039DE88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0039DED8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DE98u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0039DE98u) [[unlikely]] return; }
L_0039DE98:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], 0u + 15u);
    set32(c.r[4], 0u + 60u);
    st8((c.r[3].w[0] + 2528u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DED0u); st8((c.r[2].w[0] + 3420u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x0039DED0u) [[unlikely]] return; }
L_0039DED0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039E1A8; } }
L_0039DED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DEE0u);  if (depth < kMaxDepth) unit_008D(c, 47u, depth + 1u); else { c.pc = 0x00334A20u; return; } if (c.pc != 0x0039DEE0u) [[unlikely]] return; }
L_0039DEE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039DF20; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], 0u + 30u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 3420u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DF14u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0039DF14u) [[unlikely]] return; }
L_0039DF14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039E1A8; } }
    c.budget -= 1;
L_0039DF20:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DF34u); set32(c.r[4], c.r[2].w[0] + 3419u);  if (depth < kMaxDepth) unit_008D(c, 29u, depth + 1u); else { c.pc = 0x00334480u; return; } if (c.pc != 0x0039DF34u) [[unlikely]] return; }
L_0039DF34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039E1A8; } }
    c.budget -= 1;
L_0039DF40:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0039E1A8; } }
    set32(c.r[2], 0u + 15u);
    set32(c.r[4], 0u + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DF6Cu); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x0039DF6Cu) [[unlikely]] return; }
L_0039DF6C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 3419u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_0039DF88; } }
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0039E1A8; } }
L_0039DF88:
    set32(c.r[3], 0u + 6u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2528u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0039E1A8; } }
L_0039DFA8:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], 0u + 50u);
    set32(c.r[6], c.r[6].w[0] + 17040u);
    st8((c.r[3].w[0] + 2528u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 11u));
    set32(c.r[5], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E000u); set32(c.r[6], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0039E000u) [[unlikely]] return; }
L_0039E000:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 19392u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E014u); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0039E014u) [[unlikely]] return; }
L_0039E014:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 20u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E020u); c.r[4].d[0] = ld8((c.r[16].w[0] + 11u));  if (depth < kMaxDepth) unit_00A8(c, 295u, depth + 1u); else { c.pc = 0x003A2960u; return; } if (c.pc != 0x0039E020u) [[unlikely]] return; }
L_0039E020:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 20u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 20u));
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0039E050; } }
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0039E080; } }
    c.budget -= 1;
L_0039E050:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 11u));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] - 1u);  if (t) { goto L_0039E080; } }
    st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 11u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 19u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0039E080; } }
    st8((c.r[16].w[0] + 19u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0039E080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E088u);  if (depth < kMaxDepth) unit_008D(c, 111u, depth + 1u); else { c.pc = 0x00335410u; return; } if (c.pc != 0x0039E088u) [[unlikely]] return; }
L_0039E088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E090u);  if (depth < kMaxDepth) unit_008D(c, 54u, depth + 1u); else { c.pc = 0x00334D00u; return; } if (c.pc != 0x0039E090u) [[unlikely]] return; }
L_0039E090:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039E1A8; } }
L_0039E098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E0A0u);  if (depth < kMaxDepth) unit_008D(c, 114u, depth + 1u); else { c.pc = 0x00335440u; return; } if (c.pc != 0x0039E0A0u) [[unlikely]] return; }
L_0039E0A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039E1A8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; st8((c.r[3].w[0] + 2528u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0039E0D0; } }
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E0C4u); st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 56u, depth + 1u); else { c.pc = 0x00334D40u; return; } if (c.pc != 0x0039E0C4u) [[unlikely]] return; }
L_0039E0C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039E1A8; } }
    c.budget -= 1;
L_0039E0D0:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E0DCu); st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 55u, depth + 1u); else { c.pc = 0x00334D20u; return; } if (c.pc != 0x0039E0DCu) [[unlikely]] return; }
L_0039E0DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039E1A8; } }
    c.budget -= 1;
L_0039E0E8:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 5u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0039E170; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0039E130; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039E110; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039E1A8; } }
L_0039E110:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 131u);
    set32(c.r[2], 0u + 135u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E128u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x003788A0u; return; } if (c.pc != 0x0039E128u) [[unlikely]] return; }
L_0039E128:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039E1A8; } }
L_0039E130:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0039E1A8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 5u));
    set32(c.r[2], 0u + 15u);
    set32(c.r[4], 0u + 131u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E168u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x0039E168u) [[unlikely]] return; }
L_0039E168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039E1A8; } }
L_0039E170:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0039E1A8; } }
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
L_0039E1A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039E1C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E1D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 184u, depth + 1u); else { c.pc = 0x0039E5B0u; return; } if (c.pc != 0x0039E1D4u) [[unlikely]] return; }
L_0039E1D4:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039E1F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E1ECu);  if (depth < kMaxDepth) unit_00A7(c, 234u, depth + 1u); else { c.pc = 0x0039EC70u; return; } if (c.pc != 0x0039E1ECu) [[unlikely]] return; }
L_0039E1EC:
    c.budget -= 1;
L_0039E1F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039E200:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st8((c.r[28].w[0] - 22528u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 22368u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E230u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039E230u) [[unlikely]] return; }
L_0039E230:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22528u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039E240:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 516u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0039E358; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0039E328; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_0039E300; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0039E2E8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0039E298; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039E358; } }
    c.budget -= 1;
L_0039E298:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E2A8u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 83u, depth + 1u); else { c.pc = 0x00334FC0u; return; } if (c.pc != 0x0039E2A8u) [[unlikely]] return; }
L_0039E2A8:
    st8((c.r[28].w[0] - 22404u), static_cast<std::uint8_t>(0u));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_0039E2B8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 154u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E2D0u); set32(c.r[4], c.r[2].w[0] + 4813u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0039E2D0u) [[unlikely]] return; }
L_0039E2D0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 154u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E2B8u | kUnwind; return; } goto L_0039E2B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039E358; } }
L_0039E2E8:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E2F8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 19u, depth + 1u); else { c.pc = 0x003341C0u; return; } if (c.pc != 0x0039E2F8u) [[unlikely]] return; }
L_0039E2F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E300u);  if (depth < kMaxDepth) unit_0095(c, 272u, depth + 1u); else { c.pc = 0x00356350u; return; } if (c.pc != 0x0039E300u) [[unlikely]] return; }
L_0039E300:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E318u); st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A8(c, 298u, depth + 1u); else { c.pc = 0x003A2A10u; return; } if (c.pc != 0x0039E318u) [[unlikely]] return; }
L_0039E318:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0039E358; } }
    c.budget -= 1;
L_0039E328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E330u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x0039E330u) [[unlikely]] return; }
L_0039E330:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039E358; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2597u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_0039E358:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039E370:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 22408u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0039C000u < 16384u) { entry = entries_00A7[(t - 0x0039C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0039E390:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E3A8u); st8((c.r[28].w[0] - 22528u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0089(c, 28u, depth + 1u); else { c.pc = 0x00324360u; return; } if (c.pc != 0x0039E3A8u) [[unlikely]] return; }
L_0039E3A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039E540; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E3B8u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0039E3B8u) [[unlikely]] return; }
L_0039E3B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039E430; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 9u));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0039E3F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E3D8u);  if (depth < kMaxDepth) unit_00A8(c, 273u, depth + 1u); else { c.pc = 0x003A2510u; return; } if (c.pc != 0x0039E3D8u) [[unlikely]] return; }
L_0039E3D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039E3F8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E3ECu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0039E3ECu) [[unlikely]] return; }
L_0039E3EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039E548; } }
    c.budget -= 1;
L_0039E3F8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], 0u + 30u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E428u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0039E428u) [[unlikely]] return; }
L_0039E428:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039E540; } }
L_0039E430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E438u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0039E438u) [[unlikely]] return; }
L_0039E438:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039E4A0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E44Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0039E44Cu) [[unlikely]] return; }
L_0039E44C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 22404u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0039E490; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0039E480; } }
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0039E540; } }
L_0039E480:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0039E540; } }
    c.budget -= 1;
L_0039E490:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0039E540; } }
    c.budget -= 1;
L_0039E4A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E4A8u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0039E4A8u) [[unlikely]] return; }
L_0039E4A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039E530; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 9u));
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0039E4E0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], 0u + 154u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4813u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0039E4F8; } }
    c.budget -= 1;
L_0039E4E0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E4ECu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0039E4ECu) [[unlikely]] return; }
L_0039E4EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039E540; } }
    c.budget -= 1;
L_0039E4F8:
    set32(c.r[2], 0u + 8u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], 0u + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 30u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E528u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0039E528u) [[unlikely]] return; }
L_0039E528:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039E540; } }
L_0039E530:
    set32(c.r[4], c.r[16].w[0] + 9u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E540u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 20u, depth + 1u); else { c.pc = 0x003341D0u; return; } if (c.pc != 0x0039E540u) [[unlikely]] return; }
L_0039E540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E548u);  if (depth < kMaxDepth) unit_00A7(c, 333u, depth + 1u); else { c.pc = 0x0039FBB0u; return; } if (c.pc != 0x0039E548u) [[unlikely]] return; }
L_0039E548:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039E560:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0039E5A8; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 9u));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0039E598; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0039E5A0; } }
L_0039E598:
    st8((c.r[4].w[0] + 21u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0039E5A0:
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0039E5A8:
    c.budget -= 2;
    {  goto L_0039FBB0; }
L_0039E5B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0039E758; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 30672u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0039C000u < 16384u) { entry = entries_00A7[(t - 0x0039C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0039E5E8:
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E5FCu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x0039E5FCu) [[unlikely]] return; }
L_0039E5FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039E758; } }
    c.budget -= 1;
L_0039E608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E610u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x0039E610u) [[unlikely]] return; }
L_0039E610:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039E758; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E628u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x0039E628u) [[unlikely]] return; }
L_0039E628:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039E758; } }
L_0039E630:
    set32(c.r[3], 0u - 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22528u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0039E758; } }
    c.budget -= 1;
L_0039E640:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0039E758; } }
L_0039E660:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039E758; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E688u); st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A8(c, 319u, depth + 1u); else { c.pc = 0x003A2B30u; return; } if (c.pc != 0x0039E688u) [[unlikely]] return; }
L_0039E688:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 3425u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039E6A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0039E6A8; } }
L_0039E6A0:
    set32(c.r[3], 0u + 8u);
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0039E6A8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 2590u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0039E758; } }
    c.budget -= 1;
L_0039E6C8:
    set32(c.r[3], 0u + 5u);
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0039E758; } }
L_0039E6E8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039E758; } }
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E72Cu); st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_00A8(c, 308u, depth + 1u); else { c.pc = 0x003A2A90u; return; } if (c.pc != 0x0039E72Cu) [[unlikely]] return; }
L_0039E72C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[5], 0u + 50u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E73Cu); set32(c.r[4], c.r[4].w[0] + 17040u);  if (depth < kMaxDepth) unit_008D(c, 104u, depth + 1u); else { c.pc = 0x003352F0u; return; } if (c.pc != 0x0039E73Cu) [[unlikely]] return; }
L_0039E73C:
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 19u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
L_0039E758:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039E770:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 22416u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0039C000u < 16384u) { entry = entries_00A7[(t - 0x0039C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0039E790:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 15u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u + 2u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 11u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 25u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E7CCu); st8((c.r[2].w[0] + 2601u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x0039E7CCu) [[unlikely]] return; }
L_0039E7CC:
    set32(c.r[4], 0u + 25u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E7D8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x0039E7D8u) [[unlikely]] return; }
L_0039E7D8:
    set32(c.r[4], 0u + 25u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E7E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x0039E7E4u) [[unlikely]] return; }
L_0039E7E4:
    set32(c.r[4], 0u + 26u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E7F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x0039E7F0u) [[unlikely]] return; }
L_0039E7F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039E800:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0039E828; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0039E8B8; } }
    c.budget -= 1;
L_0039E828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E830u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0039E830u) [[unlikely]] return; }
L_0039E830:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0039E860; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E840u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0039E840u) [[unlikely]] return; }
L_0039E840:
    set32(c.r[3], 0u + 4u);
    set32(c.r[4], 0u + 15u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0039E8B8; } }
    c.budget -= 1;
L_0039E860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E868u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0039E868u) [[unlikely]] return; }
L_0039E868:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039E8A8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], 0u + 30u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[3].w[0] + 2601u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E89Cu); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0039E89Cu) [[unlikely]] return; }
L_0039E89C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039E8B8; } }
    c.budget -= 1;
L_0039E8A8:
    set32(c.r[4], c.r[16].w[0] + 11u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E8B8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_008D(c, 20u, depth + 1u); else { c.pc = 0x003341D0u; return; } if (c.pc != 0x0039E8B8u) [[unlikely]] return; }
L_0039E8B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039E8D0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039E8E8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0039E908; } }
L_0039E8E8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[3], 0u + 18u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
L_0039E908:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039E910:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039E928; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0039E978; } }
L_0039E928:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 11u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039E948; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0039E958; } }
    c.budget -= 1;
L_0039E948:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0039E958:
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 154u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 9u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 4813u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_0039E978:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039E980:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0039E9A0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 22448u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0039C000u < 16384u) { entry = entries_00A7[(t - 0x0039C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0039E9C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E9E0u); st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 56u, depth + 1u); else { c.pc = 0x00334D40u; return; } if (c.pc != 0x0039E9E0u) [[unlikely]] return; }
L_0039E9E0:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], 0u + 5u);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 17040u);
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 50u);
    st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EA10u); st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 104u, depth + 1u); else { c.pc = 0x003352F0u; return; } if (c.pc != 0x0039EA10u) [[unlikely]] return; }
L_0039EA10:
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 19u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039EA30:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  [[clang::musttail]] return unit_00A8(c, 308u, depth); }
L_0039EA40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EA54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 234u, depth + 1u); else { c.pc = 0x0039EC70u; return; } if (c.pc != 0x0039EA54u) [[unlikely]] return; }
L_0039EA54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EA5Cu);  if (depth < kMaxDepth) unit_00A8(c, 287u, depth + 1u); else { c.pc = 0x003A2780u; return; } if (c.pc != 0x0039EA5Cu) [[unlikely]] return; }
L_0039EA5C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039EA78; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0039EB38; } }
    c.budget -= 1;
L_0039EA78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EA80u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0039EA80u) [[unlikely]] return; }
L_0039EA80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0039EAA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EA90u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0039EA90u) [[unlikely]] return; }
L_0039EA90:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0039EB38; } }
L_0039EAA0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_0039EB38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EAB4u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0039EAB4u) [[unlikely]] return; }
L_0039EAB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039EAF8; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], 0u + 30u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[6].w[0] + 2600u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EAECu); st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0039EAECu) [[unlikely]] return; }
L_0039EAEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039EB38; } }
    c.budget -= 1;
L_0039EAF8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[16].w[0] + 11u);
    set32(c.r[6], 0u + 2u);
    st8((c.r[2].w[0] + 2601u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 20u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EB18u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_008D(c, 20u, depth + 1u); else { c.pc = 0x003341D0u; return; } if (c.pc != 0x0039EB18u) [[unlikely]] return; }
L_0039EB18:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039EB38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EB30u);  if (depth < kMaxDepth) unit_00A7(c, 261u, depth + 1u); else { c.pc = 0x0039EF60u; return; } if (c.pc != 0x0039EB30u) [[unlikely]] return; }
L_0039EB30:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2601u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0039EB38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039EB50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 21u));
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 20508u));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0039EB90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EB84u);  if (depth < kMaxDepth) unit_00A8(c, 287u, depth + 1u); else { c.pc = 0x003A2780u; return; } if (c.pc != 0x0039EB84u) [[unlikely]] return; }
L_0039EB84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039EC40; } }
    c.budget -= 1;
L_0039EB90:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0039EC38; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[6], 0u + 154u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EBC8u); set32(c.r[4], c.r[2].w[0] + 4813u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0039EBC8u) [[unlikely]] return; }
L_0039EBC8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 11u));
    set32(c.r[2], c.r[2].w[0] + 17040u);
    set32(c.r[6], 0u + 8u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[3].w[0] + 4814u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EBF8u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x0039EBF8u) [[unlikely]] return; }
L_0039EBF8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 11u));
    set32(c.r[2], c.r[2].w[0] + 17040u);
    set32(c.r[6], 0u + 16u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[3].w[0] + 4822u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EC2Cu); set32(c.r[5], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x0039EC2Cu) [[unlikely]] return; }
L_0039EC2C:
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0039EC38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EC40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 234u, depth + 1u); else { c.pc = 0x0039EC70u; return; } if (c.pc != 0x0039EC40u) [[unlikely]] return; }
L_0039EC40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039EC60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039EC70:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039ECA0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x0039ECA0u) [[unlikely]] return; }
L_0039ECA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039ECA8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x0039ECA8u) [[unlikely]] return; }
L_0039ECA8:
    c.r[6].d[0] = ld8((c.r[21].w[0] + 20u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039ECBCu); set32(c.r[5], c.r[5].w[0] + 30736u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0039ECBCu) [[unlikely]] return; }
L_0039ECBC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43E80000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039ECD8u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0039ECD8u) [[unlikely]] return; }
L_0039ECD8:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039EEF0; } }
    c.r[19].d[0] = c.r[2].d[0] & 255ull;
    c.r[1].d[0] = c.r[19].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = ld8((c.r[21].w[0] + 19u));  if (t) { goto L_0039ECFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);  if (t) { goto L_0039ED04; } }
L_0039ECFC:
    set32(c.r[19], 0u + 12u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.budget -= 2;
L_0039ED04:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039ED10u);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x0039ED10u) [[unlikely]] return; }
L_0039ED10:
    c.r[1].d[0] = 0ll < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0039EF30; } }
    set32(c.r[3], c.r[20].w[0] << 1);
    set32(c.r[17], 0u + 96u);
    set32(c.r[4], c.r[3].w[0] + c.r[20].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 17040u);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
L_0039ED38:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 20u));
    c.r[1].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0039EF30; } }
    set32(c.r[6], c.r[20].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039ED58u); set32(c.r[5], c.r[5].w[0] + 30752u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0039ED58u) [[unlikely]] return; }
L_0039ED58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039ED60u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x0039ED60u) [[unlikely]] return; }
L_0039ED60:
    c.f[0] = c.r[17].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039ED7Cu); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0039ED7Cu) [[unlikely]] return; }
L_0039ED7C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039ED88u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0099(c, 26u, depth + 1u); else { c.pc = 0x00364550u; return; } if (c.pc != 0x0039ED88u) [[unlikely]] return; }
L_0039ED88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039ED90u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x0039ED90u) [[unlikely]] return; }
L_0039ED90:
    c.f[0] = c.r[17].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EDACu); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0039EDACu) [[unlikely]] return; }
L_0039EDAC:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EDBCu); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0039EDBCu) [[unlikely]] return; }
L_0039EDBC:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[16].w[0] + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EDCCu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x0039EDCCu) [[unlikely]] return; }
L_0039EDCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EDD4u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x0039EDD4u) [[unlikely]] return; }
L_0039EDD4:
    c.f[0] = c.r[17].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43700000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EDF0u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0039EDF0u) [[unlikely]] return; }
L_0039EDF0:
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    c.r[2].d[0] = c.r[6].sd[0] < 10000ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039EE08; } }
    set32(c.r[6], 0u + 9999u);
    c.budget -= 2;
L_0039EE08:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EE18u); set32(c.r[5], c.r[5].w[0] + 30760u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0039EE18u) [[unlikely]] return; }
L_0039EE18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EE20u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x0039EE20u) [[unlikely]] return; }
L_0039EE20:
    c.f[0] = c.r[17].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43E00000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EE40u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0039EE40u) [[unlikely]] return; }
L_0039EE40:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EE50u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0039EE50u) [[unlikely]] return; }
L_0039EE50:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 20407u));
    c.budget -= 6;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0039EE80; } }
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[5].w[0] + 30768u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EE78u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x0039EE78u) [[unlikely]] return; }
L_0039EE78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039EEB0; } }
L_0039EE80:
    set32(c.r[2], c.r[3].w[0] + c.r[20].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 20507u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 22480u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EEB0u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x0039EEB0u) [[unlikely]] return; }
L_0039EEB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44020000u);
    c.f[0] = c.r[17].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EED0u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0039EED0u) [[unlikely]] return; }
L_0039EED0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 24u);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] + 48u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039ED38u | kUnwind; return; } goto L_0039ED38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039EF30; } }
L_0039EEF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EF00u);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x0039EF00u) [[unlikely]] return; }
L_0039EF00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EF08u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x0039EF08u) [[unlikely]] return; }
L_0039EF08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43680000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43580000u);
    c.f[12] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.f[13] = c.r[3].w[0];
    set32(c.r[2], ld32((c.r[1].w[0] - 2836u)));
    c.f[14] = 0u;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EF2Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0039EF2Cu) [[unlikely]] return; }
L_0039EF2C:
    c.budget -= 1;
L_0039EF30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0039EF60:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 19u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 11u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0039EF80; } }
    st8((c.r[4].w[0] + 19u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0039EFA8; } }
L_0039EF80:
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039EFA0; } }
    set32(c.r[3], c.r[3].w[0] - 11u);
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 19u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0039EFA8; } }
L_0039EFA0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0039EFA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039EFB0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 22496u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0039C000u < 16384u) { entry = entries_00A7[(t - 0x0039C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0039EFD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 21u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EFF4u); set32(c.r[4], c.r[2].w[0] + 2u);  if (depth < kMaxDepth) unit_008D(c, 178u, depth + 1u); else { c.pc = 0x003360D0u; return; } if (c.pc != 0x0039EFF4u) [[unlikely]] return; }
L_0039EFF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EFFCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 336u, depth + 1u); else { c.pc = 0x0038AE10u; return; } if (c.pc != 0x0039EFFCu) [[unlikely]] return; }
L_0039EFFC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039F010:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 154u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], 0u + 6u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[4].w[0] + 21u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F044u); set32(c.r[4], c.r[2].w[0] + 4814u);  if (depth < kMaxDepth) unit_008D(c, 191u, depth + 1u); else { c.pc = 0x003361D0u; return; } if (c.pc != 0x0039F044u) [[unlikely]] return; }
L_0039F044:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039F0D8; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F06Cu); st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A2(c, 336u, depth + 1u); else { c.pc = 0x0038AE10u; return; } if (c.pc != 0x0039F06Cu) [[unlikely]] return; }
L_0039F06C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 17u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F084u); set32(c.r[4], c.r[2].w[0] + 4822u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0039F084u) [[unlikely]] return; }
L_0039F084:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[4].w[0] + 17040u);
    set32(c.r[5], 0u + 50u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F0A0u); set32(c.r[6], c.r[2].w[0] + 4814u);  if (depth < kMaxDepth) unit_008D(c, 108u, depth + 1u); else { c.pc = 0x00335380u; return; } if (c.pc != 0x0039F0A0u) [[unlikely]] return; }
L_0039F0A0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[2].w[0] << 1);  if (t) { goto L_0039F0D8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], 0u + 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 17040u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[2].w[0] + 8u);
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F0D8u); set32(c.r[4], c.r[2].w[0] + 4822u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x0039F0D8u) [[unlikely]] return; }
L_0039F0D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039F0F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039F100:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 22512u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0039C000u < 16384u) { entry = entries_00A7[(t - 0x0039C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0039F120:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 15u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F14Cu); set32(c.r[4], 0u + 100u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x003788A0u; return; } if (c.pc != 0x0039F14Cu) [[unlikely]] return; }
L_0039F14C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F154u); st8((c.r[16].w[0] + 21u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2620u; return; } if (c.pc != 0x0039F154u) [[unlikely]] return; }
L_0039F154:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 4839u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 4993u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 5147u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039F180:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0039F208; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 21u));
    set32(c.r[5], 0u + 154u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 4813u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039F1E0; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F1D8u); c.r[4].d[0] = ld8((c.r[4].w[0] + 21u));  if (depth < kMaxDepth) unit_0088(c, 278u, depth + 1u); else { c.pc = 0x003224C0u; return; } if (c.pc != 0x0039F1D8u) [[unlikely]] return; }
L_0039F1D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039F208; } }
L_0039F1E0:
    set32(c.r[3], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 21u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 21u));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0039F208; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F204u); st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A8(c, 284u, depth + 1u); else { c.pc = 0x003A26D0u; return; } if (c.pc != 0x0039F204u) [[unlikely]] return; }
L_0039F204:
    c.budget -= 1;
L_0039F208:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039F220:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F238u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00A7(c, 331u, depth + 1u); else { c.pc = 0x0039FB20u; return; } if (c.pc != 0x0039F238u) [[unlikely]] return; }
L_0039F238:
    c.r[16].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], 0u + 2u);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0039F298; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_0039F268; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0039F2F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039F2F0; } }
    c.budget -= 1;
L_0039F268:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 21u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], 0u + 154u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[4].w[0] + 8291u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F288u); set32(c.r[4], c.r[2].w[0] + 4839u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0039F288u) [[unlikely]] return; }
L_0039F288:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0039F2F0; } }
L_0039F298:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 21u));
    set32(c.r[2], 0u + 154u);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] << 6);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + 4839u);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F2D0u); set32(c.r[5], c.r[2].w[0] + 5286u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0039F2D0u) [[unlikely]] return; }
L_0039F2D0:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F2E4u); c.r[4].d[0] = ld8((c.r[17].w[0] + 21u));  if (depth < kMaxDepth) unit_00A7(c, 332u, depth + 1u); else { c.pc = 0x0039FB30u; return; } if (c.pc != 0x0039F2E4u) [[unlikely]] return; }
L_0039F2E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039F2F0; } }
    set32(c.r[16], 0u + 3u);
    c.budget -= 1;
L_0039F2F0:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 21u));
    set32(c.r[4], 0u + 154u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 4813u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039F320:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 21u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 21u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0039F360; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F354u); st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A8(c, 284u, depth + 1u); else { c.pc = 0x003A26D0u; return; } if (c.pc != 0x0039F354u) [[unlikely]] return; }
L_0039F354:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039F370; } }
    c.budget -= 1;
L_0039F360:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 30u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0039F370:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039F380:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] > 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0039F3F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F3B0u); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x0039F3B0u) [[unlikely]] return; }
L_0039F3B0:
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 8;
L_0039F3D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4813u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0039F3E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0039F3F8; } }
    c.budget -= 1;
L_0039F3E8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 154u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039F3D0u | kUnwind; return; } goto L_0039F3D0; } }
L_0039F3F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039F410:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 22544u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0039C000u < 16384u) { entry = entries_00A7[(t - 0x0039C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0039F430:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0039F460; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0039F4C8; } }
    c.budget -= 1;
L_0039F460:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 3u));
    c.r[16].d[0] = ld8((c.r[18].w[0] + 9u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F484u); st8((c.r[2].w[0] + 3420u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A7(c, 332u, depth + 1u); else { c.pc = 0x0039FB30u; return; } if (c.pc != 0x0039F484u) [[unlikely]] return; }
L_0039F484:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], c.r[16].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[5], c.r[18].w[0] + 10u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F4B4u); set32(c.r[6], c.r[2].w[0] + 5286u);  if (depth < kMaxDepth) unit_009E(c, 50u, depth + 1u); else { c.pc = 0x00378DC0u; return; } if (c.pc != 0x0039F4B4u) [[unlikely]] return; }
L_0039F4B4:
    set32(c.r[4], 0u + 15u);
    set32(c.r[3], 0u + 1u);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 17u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 5;
L_0039F4C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0039F4E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0039F508; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0039F6A8; } }
L_0039F508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F510u); c.r[16].d[0] = ld8((c.r[17].w[0] + 9u));  if (depth < kMaxDepth) unit_008D(c, 47u, depth + 1u); else { c.pc = 0x00334A20u; return; } if (c.pc != 0x0039F510u) [[unlikely]] return; }
L_0039F510:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039F5E0; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 10u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039F5A8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[16].w[0] << 6);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5285u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0039F590; } }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 5280u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039F590; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 3u));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F578u); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0039F578u) [[unlikely]] return; }
L_0039F578:
    set32(c.r[3], 0u + 60u);
    set32(c.r[4], 0u + 1u);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3420u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0039F6A8; } }
L_0039F590:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F59Cu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0039F59Cu) [[unlikely]] return; }
L_0039F59C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039F6A8; } }
    c.budget -= 1;
L_0039F5A8:
    set32(c.r[2], 0u + 5u);
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 2u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F5C4u); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0039F5C4u) [[unlikely]] return; }
L_0039F5C4:
    set32(c.r[3], 0u + 60u);
    set32(c.r[4], 0u + 1u);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3420u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0039F6A8; } }
    c.budget -= 1;
L_0039F5E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F5E8u);  if (depth < kMaxDepth) unit_008D(c, 48u, depth + 1u); else { c.pc = 0x00334A60u; return; } if (c.pc != 0x0039F5E8u) [[unlikely]] return; }
L_0039F5E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_0039F618; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F608u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0039F608u) [[unlikely]] return; }
L_0039F608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F610u); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x0039F610u) [[unlikely]] return; }
L_0039F610:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039F6A8; } }
L_0039F618:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 17u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039F6A8; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 10u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 8192u);  if (t) { goto L_0039F670; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F638u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0039F638u) [[unlikely]] return; }
L_0039F638:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039F658; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[3], 0u + 82u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 1630u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0039F6A8; } }
    c.budget -= 1;
L_0039F658:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F668u); st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0039F668u) [[unlikely]] return; }
L_0039F668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039F6A8; } }
L_0039F670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F678u); set32(c.r[4], 0u + 4096u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0039F678u) [[unlikely]] return; }
L_0039F678:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039F698; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[3], 0u + 81u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 1630u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0039F6A8; } }
    c.budget -= 1;
L_0039F698:
    set32(c.r[5], 0u + 1u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F6A8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0039F6A8u) [[unlikely]] return; }
L_0039F6A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039F6C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0039F710; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[2], 0u + 135u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F704u); set32(c.r[4], 0u + 52u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x003788A0u; return; } if (c.pc != 0x0039F704u) [[unlikely]] return; }
L_0039F704:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 3420u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0039F710:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039F720:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 9u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0039F760; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F75Cu); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0088(c, 290u, depth + 1u); else { c.pc = 0x003226F0u; return; } if (c.pc != 0x0039F75Cu) [[unlikely]] return; }
L_0039F75C:
    c.budget -= 1;
L_0039F760:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039F770:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F784u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 331u, depth + 1u); else { c.pc = 0x0039FB20u; return; } if (c.pc != 0x0039F784u) [[unlikely]] return; }
L_0039F784:
    c.r[4].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0039F7D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0039F7B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039F7F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039F7F8; } }
L_0039F7B0:
    set32(c.r[2], 0u + 5u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 76u);
    set32(c.r[2], 0u + 45u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F7CCu); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x0039F7CCu) [[unlikely]] return; }
L_0039F7CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039F7F8; } }
    c.budget -= 1;
L_0039F7D8:
    set32(c.r[2], 0u + 6u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 76u);
    set32(c.r[2], 0u + 45u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F7F4u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x0039F7F4u) [[unlikely]] return; }
L_0039F7F4:
    c.budget -= 1;
L_0039F7F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039F80C:
    c.budget -= 1;
L_0039F810:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_0039F8F8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0039F8C8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0039F890; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0039F848; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039F918; } }
L_0039F848:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0039F918; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 4u));
    set32(c.r[2], 0u + 135u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 20u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F888u); set32(c.r[5], c.r[2].w[0] + 8291u);  if (depth < kMaxDepth) unit_009E(c, 53u, depth + 1u); else { c.pc = 0x00378EA0u; return; } if (c.pc != 0x0039F888u) [[unlikely]] return; }
L_0039F888:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039F918; } }
L_0039F890:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0039F918; } }
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], 0u + 15u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F8C0u); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x0039F8C0u) [[unlikely]] return; }
L_0039F8C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039F918; } }
L_0039F8C8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0039F918; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0039F918; } }
    c.budget -= 1;
L_0039F8F8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 3420u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_0039F918:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039F930:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0039F9A8; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0039F980; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0039F968; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039F9D8; } }
L_0039F968:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F978u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x0039F978u) [[unlikely]] return; }
L_0039F978:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039F9D8; } }
L_0039F980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F988u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x0039F988u) [[unlikely]] return; }
L_0039F988:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039F9D8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F9A0u); st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x0039F9A0u) [[unlikely]] return; }
L_0039F9A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039F9D8; } }
L_0039F9A8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2576u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039F9C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F9C0u); c.r[4].d[0] = ld8((c.r[16].w[0] + 9u));  if (depth < kMaxDepth) unit_0088(c, 296u, depth + 1u); else { c.pc = 0x00322850u; return; } if (c.pc != 0x0039F9C0u) [[unlikely]] return; }
L_0039F9C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039F9D8; } }
L_0039F9C8:
    set32(c.r[2], 0u + 7u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F9D8u); st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0088(c, 285u, depth + 1u); else { c.pc = 0x00322610u; return; } if (c.pc != 0x0039F9D8u) [[unlikely]] return; }
L_0039F9D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039F9F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FA04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 331u, depth + 1u); else { c.pc = 0x0039FB20u; return; } if (c.pc != 0x0039FA04u) [[unlikely]] return; }
L_0039FA04:
    c.r[4].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0039FA58; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0039FA30; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039FAA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039FAA0; } }
L_0039FA30:
    set32(c.r[2], 0u + 6u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 76u);
    set32(c.r[2], 0u + 45u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FA4Cu); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x0039FA4Cu) [[unlikely]] return; }
L_0039FA4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039FAA0; } }
    c.budget -= 1;
L_0039FA58:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2529u)));
    st8((c.r[28].w[0] - 22416u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2530u)));
    st8((c.r[28].w[0] - 22415u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2531u)));
    st8((c.r[28].w[0] - 22414u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FA7Cu); c.r[4].d[0] = ld8((c.r[16].w[0] + 9u));  if (depth < kMaxDepth) unit_0088(c, 296u, depth + 1u); else { c.pc = 0x00322850u; return; } if (c.pc != 0x0039FA7Cu) [[unlikely]] return; }
L_0039FA7C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22416u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2529u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22415u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2530u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22414u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2531u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 9;
L_0039FAA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039FAB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 154u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[2].w[0] + 4814u);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039FB08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FAE0u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0039FAE0u) [[unlikely]] return; }
L_0039FAE0:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0039FB08; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[5], c.r[3].w[0] + 560u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FB00u); set32(c.r[4], c.r[2].w[0] + 4814u);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x0039FB00u) [[unlikely]] return; }
L_0039FB00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_0039FB10; } }
L_0039FB08:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0039FB10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039FB20:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5275u)));  c.pc = t; return; }
L_0039FB30:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[4].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5285u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0039FB68; } }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 5280u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039FB70; } }
L_0039FB68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0039FBA8; } }
L_0039FB70:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 16012u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);  if (t) { goto L_0039FBA0; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 5282u));
    c.r[2].d[0] = ld8((c.r[1].w[0] + 16016u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0039FBA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039FBA8; } }
    c.budget -= 1;
L_0039FBA0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0039FBA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039FBB0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 10;
L_0039FBD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FBE0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 328u, depth + 1u); else { c.pc = 0x0039FAB0u; return; } if (c.pc != 0x0039FBE0u) [[unlikely]] return; }
L_0039FBE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039FCF8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[3].w[0] + c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4813u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0039FCF8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4839u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039FCF8; } }
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FC18u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0039FC18u) [[unlikely]] return; }
L_0039FC18:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[5].w[0] + 30776u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FC34u); set32(c.r[6], c.r[2].w[0] + 4814u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0039FC34u) [[unlikely]] return; }
L_0039FC34:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FC40u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0099(c, 26u, depth + 1u); else { c.pc = 0x00364550u; return; } if (c.pc != 0x0039FC40u) [[unlikely]] return; }
L_0039FC40:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4822u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0039FC70; } }
    set32(c.r[6], c.r[3].w[0] + 4822u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FC64u); set32(c.r[5], c.r[5].w[0] + 30784u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0039FC64u) [[unlikely]] return; }
L_0039FC64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039FC80; } }
    c.budget -= 1;
L_0039FC70:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FC80u); set32(c.r[5], c.r[5].w[0] + 30808u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0039FC80u) [[unlikely]] return; }
L_0039FC80:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FC8Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x0039FC8Cu) [[unlikely]] return; }
L_0039FC8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FC9Cu);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x0039FC9Cu) [[unlikely]] return; }
L_0039FC9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FCA4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x0039FCA4u) [[unlikely]] return; }
L_0039FCA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    set32(c.r[16], c.r[17].w[0] << 1);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[14] = 0u;
    set32(c.r[2], c.r[16].w[0] + 208u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FCC8u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0039FCC8u) [[unlikely]] return; }
L_0039FCC8:
    set32(c.r[2], c.r[16].w[0] + 228u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = c.r[3].w[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.f[13] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.f[14] = 0u;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FCF0u); set32(c.r[4], c.r[2].w[0] + 4839u);  if (depth < kMaxDepth) unit_0089(c, 122u, depth + 1u); else { c.pc = 0x00325650u; return; } if (c.pc != 0x0039FCF0u) [[unlikely]] return; }
L_0039FCF0:
    set32(c.r[17], c.r[17].w[0] + 20u);
    c.budget -= 2;
L_0039FCF8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 154u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039FBD8u | kUnwind; return; } goto L_0039FBD8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0039FD30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st8((c.r[28].w[0] - 22528u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 22576u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FD60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039FD60u) [[unlikely]] return; }
L_0039FD60:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22528u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039FD70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 516u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0039FE60; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0039FE38; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_0039FDF0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0039FDD8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0039FDC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039FE60; } }
L_0039FDC0:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FDD0u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 83u, depth + 1u); else { c.pc = 0x00334FC0u; return; } if (c.pc != 0x0039FDD0u) [[unlikely]] return; }
L_0039FDD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039FE60; } }
L_0039FDD8:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FDE8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 19u, depth + 1u); else { c.pc = 0x003341C0u; return; } if (c.pc != 0x0039FDE8u) [[unlikely]] return; }
L_0039FDE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FDF0u);  if (depth < kMaxDepth) unit_0095(c, 272u, depth + 1u); else { c.pc = 0x00356350u; return; } if (c.pc != 0x0039FDF0u) [[unlikely]] return; }
L_0039FDF0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FE0Cu); st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A8(c, 319u, depth + 1u); else { c.pc = 0x003A2B30u; return; } if (c.pc != 0x0039FE0Cu) [[unlikely]] return; }
L_0039FE0C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 3425u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039FE28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0039FE60; } }
    c.budget -= 1;
L_0039FE28:
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0039FE60; } }
    c.budget -= 1;
L_0039FE38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FE40u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x0039FE40u) [[unlikely]] return; }
L_0039FE40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039FE60; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_0039FE60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039FE70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00A8(c, 18u, depth); } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { [[clang::musttail]] return unit_00A8(c, 11u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0039FEC8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0039FEB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00A8(c, 20u, depth); } }
L_0039FEB0:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(0u));  if (t) { [[clang::musttail]] return unit_00A8(c, 20u, depth); } }
L_0039FEC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FED0u);  if (depth < kMaxDepth) unit_0089(c, 28u, depth + 1u); else { c.pc = 0x00324360u; return; } if (c.pc != 0x0039FED0u) [[unlikely]] return; }
L_0039FED0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 64u);  if (t) { [[clang::musttail]] return unit_00A8(c, 20u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FEE0u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0039FEE0u) [[unlikely]] return; }
L_0039FEE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039FF10; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FF04u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0039FF04u) [[unlikely]] return; }
L_0039FF04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00A8(c, 20u, depth); } }
    c.budget -= 1;
L_0039FF10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FF18u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x0039FF18u) [[unlikely]] return; }
L_0039FF18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039FF58; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[6], 0u + 30u);
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st32((c.r[2].w[0] + 2612u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FF50u); st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x0039FF50u) [[unlikely]] return; }
L_0039FF50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00A8(c, 20u, depth); } }
    goto L_0039FF58;
L_0039FF54:
    c.budget -= 1;
L_0039FF58:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 44u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FF70u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 20u, depth + 1u); else { c.pc = 0x003341D0u; return; } if (c.pc != 0x0039FF70u) [[unlikely]] return; }
L_0039FF70:
    set32(c.r[4], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { [[clang::musttail]] return unit_00A8(c, 20u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0039FFF0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0039FF98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00A8(c, 20u, depth); } }
    goto L_0039FF98;
L_0039FF94:
    c.budget -= 1;
L_0039FF98:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 9u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0039FFB8; } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0039FFC0; } }
    c.budget -= 1;
L_0039FFB8:
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0039FFC0:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 9u));
    c.r[1].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00A8(c, 20u, depth); } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 3425u));
    c.budget -= 2;
L_0039FFD8:
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039FF98u | kUnwind; return; } goto L_0039FF98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00A8(c, 20u, depth); } }
    goto L_0039FFEC;
L_0039FFE8:
    c.budget -= 1;
L_0039FFEC:
    c.budget -= 1;
L_0039FFF0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 9u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 4;
    [[clang::musttail]] return unit_00A8(c, 1u, depth);
}

}
