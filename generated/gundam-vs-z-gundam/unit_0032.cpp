#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0032[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0,
    10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 15, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0,
    17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0,
    0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0,
    0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0,
    47, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0,
    53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 69, 0, 0, 0, 0, 70, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 79, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 83, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0,
    86, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0,
    0, 0, 0, 96, 0, 97, 0, 0, 98, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0,
    103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0,
    107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127,
    0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0,
    0, 0, 131, 0, 132, 0, 0, 0, 133, 0, 134, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 147, 0, 148, 0, 149, 0,
    0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0,
    164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0,
    171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187,
    0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0,
    0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0,
    0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0,
    206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0,
    0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0032(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001C8000;
    case 2u: goto L_001C8008;
    case 3u: goto L_001C8020;
    case 4u: goto L_001C8068;
    case 5u: goto L_001C8070;
    case 6u: goto L_001C80C0;
    case 7u: goto L_001C80D0;
    case 8u: goto L_001C80D8;
    case 9u: goto L_001C80F8;
    case 10u: goto L_001C8100;
    case 11u: goto L_001C8120;
    case 12u: goto L_001C815C;
    case 13u: goto L_001C81E8;
    case 14u: goto L_001C81F0;
    case 15u: goto L_001C81F8;
    case 16u: goto L_001C8264;
    case 17u: goto L_001C8280;
    case 18u: goto L_001C82B4;
    case 19u: goto L_001C82F4;
    case 20u: goto L_001C8324;
    case 21u: goto L_001C8330;
    case 22u: goto L_001C8360;
    case 23u: goto L_001C8438;
    case 24u: goto L_001C8458;
    case 25u: goto L_001C8478;
    case 26u: goto L_001C8488;
    case 27u: goto L_001C84A8;
    case 28u: goto L_001C8530;
    case 29u: goto L_001C8570;
    case 30u: goto L_001C8620;
    case 31u: goto L_001C8670;
    case 32u: goto L_001C8714;
    case 33u: goto L_001C8880;
    case 34u: goto L_001C8990;
    case 35u: goto L_001C89A8;
    case 36u: goto L_001C89E0;
    case 37u: goto L_001C89F0;
    case 38u: goto L_001C8A10;
    case 39u: goto L_001C8A18;
    case 40u: goto L_001C8A28;
    case 41u: goto L_001C8A30;
    case 42u: goto L_001C8A60;
    case 43u: goto L_001C8A70;
    case 44u: goto L_001C8AAC;
    case 45u: goto L_001C8AE4;
    case 46u: goto L_001C8AEC;
    case 47u: goto L_001C8B00;
    case 48u: goto L_001C8B10;
    case 49u: goto L_001C8B18;
    case 50u: goto L_001C8B40;
    case 51u: goto L_001C8B60;
    case 52u: goto L_001C8B70;
    case 53u: goto L_001C8B80;
    case 54u: goto L_001C8BA8;
    case 55u: goto L_001C8BDC;
    case 56u: goto L_001C8C00;
    case 57u: goto L_001C8C40;
    case 58u: goto L_001C8C60;
    case 59u: goto L_001C8C9C;
    case 60u: goto L_001C8CD0;
    case 61u: goto L_001C8CF0;
    case 62u: goto L_001C8D2C;
    case 63u: goto L_001C8DBC;
    case 64u: goto L_001C8DC4;
    case 65u: goto L_001C8E80;
    case 66u: goto L_001C8F20;
    case 67u: goto L_001C8F54;
    case 68u: goto L_001C8F5C;
    case 69u: goto L_001C8F64;
    case 70u: goto L_001C8F78;
    case 71u: goto L_001C8FC0;
    case 72u: goto L_001C9018;
    case 73u: goto L_001C9070;
    case 74u: goto L_001C90C8;
    case 75u: goto L_001C9120;
    case 76u: goto L_001C9178;
    case 77u: goto L_001C91E0;
    case 78u: goto L_001C91E8;
    case 79u: goto L_001C91F8;
    case 80u: goto L_001C9210;
    case 81u: goto L_001C92C4;
    case 82u: goto L_001C92CC;
    case 83u: goto L_001C92D4;
    case 84u: goto L_001C92DC;
    case 85u: goto L_001C92E4;
    case 86u: goto L_001C9300;
    case 87u: goto L_001C9308;
    case 88u: goto L_001C9310;
    case 89u: goto L_001C9330;
    case 90u: goto L_001C9368;
    case 91u: goto L_001C9370;
    case 92u: goto L_001C93C0;
    case 93u: goto L_001C94A0;
    case 94u: goto L_001C955C;
    case 95u: goto L_001C9574;
    case 96u: goto L_001C958C;
    case 97u: goto L_001C9594;
    case 98u: goto L_001C95A0;
    case 99u: goto L_001C95B0;
    case 100u: goto L_001C95B8;
    case 101u: goto L_001C95D8;
    case 102u: goto L_001C95E8;
    case 103u: goto L_001C9600;
    case 104u: goto L_001C9638;
    case 105u: goto L_001C9650;
    case 106u: goto L_001C9678;
    case 107u: goto L_001C9680;
    case 108u: goto L_001C9694;
    case 109u: goto L_001C96C4;
    case 110u: goto L_001C96D8;
    case 111u: goto L_001C9710;
    case 112u: goto L_001C9730;
    case 113u: goto L_001C9744;
    case 114u: goto L_001C9784;
    case 115u: goto L_001C978C;
    case 116u: goto L_001C97C0;
    case 117u: goto L_001C97E0;
    case 118u: goto L_001C9818;
    case 119u: goto L_001C9840;
    case 120u: goto L_001C9854;
    case 121u: goto L_001C9860;
    case 122u: goto L_001C9868;
    case 123u: goto L_001C98A0;
    case 124u: goto L_001C98C0;
    case 125u: goto L_001C9948;
    case 126u: goto L_001C9954;
    case 127u: goto L_001C997C;
    case 128u: goto L_001C9988;
    case 129u: goto L_001C9A78;
    case 130u: goto L_001C9AF0;
    case 131u: goto L_001C9B08;
    case 132u: goto L_001C9B10;
    case 133u: goto L_001C9B20;
    case 134u: goto L_001C9B28;
    case 135u: goto L_001C9B34;
    case 136u: goto L_001C9B44;
    case 137u: goto L_001C9B54;
    case 138u: goto L_001C9B64;
    case 139u: goto L_001C9C58;
    case 140u: goto L_001C9C9C;
    case 141u: goto L_001C9CA8;
    case 142u: goto L_001C9CB0;
    case 143u: goto L_001C9CD0;
    case 144u: goto L_001C9D3C;
    case 145u: goto L_001C9DD8;
    case 146u: goto L_001C9DE0;
    case 147u: goto L_001C9DE8;
    case 148u: goto L_001C9DF0;
    case 149u: goto L_001C9DF8;
    case 150u: goto L_001C9E14;
    case 151u: goto L_001C9E20;
    case 152u: goto L_001C9E28;
    case 153u: goto L_001C9E40;
    case 154u: goto L_001C9F18;
    case 155u: goto L_001C9F20;
    case 156u: goto L_001C9F48;
    case 157u: goto L_001CA034;
    case 158u: goto L_001CA090;
    case 159u: goto L_001CA0A0;
    case 160u: goto L_001CA0A8;
    case 161u: goto L_001CA0D0;
    case 162u: goto L_001CA0F0;
    case 163u: goto L_001CA0F8;
    case 164u: goto L_001CA100;
    case 165u: goto L_001CA110;
    case 166u: goto L_001CA138;
    case 167u: goto L_001CA158;
    case 168u: goto L_001CA188;
    case 169u: goto L_001CA1A8;
    case 170u: goto L_001CA1E0;
    case 171u: goto L_001CA200;
    case 172u: goto L_001CA210;
    case 173u: goto L_001CA228;
    case 174u: goto L_001CA230;
    case 175u: goto L_001CA240;
    case 176u: goto L_001CA254;
    case 177u: goto L_001CA2B4;
    case 178u: goto L_001CA2D0;
    case 179u: goto L_001CA314;
    case 180u: goto L_001CA330;
    case 181u: goto L_001CA360;
    case 182u: goto L_001CA378;
    case 183u: goto L_001CA4A0;
    case 184u: goto L_001CA4E0;
    case 185u: goto L_001CA578;
    case 186u: goto L_001CA5E4;
    case 187u: goto L_001CA5FC;
    case 188u: goto L_001CA604;
    case 189u: goto L_001CA618;
    case 190u: goto L_001CA660;
    case 191u: goto L_001CA6B8;
    case 192u: goto L_001CA794;
    case 193u: goto L_001CA79C;
    case 194u: goto L_001CA7B0;
    case 195u: goto L_001CA850;
    case 196u: goto L_001CA868;
    case 197u: goto L_001CA88C;
    case 198u: goto L_001CA89C;
    case 199u: goto L_001CA8C4;
    case 200u: goto L_001CA8D4;
    case 201u: goto L_001CA950;
    case 202u: goto L_001CA96C;
    case 203u: goto L_001CA990;
    case 204u: goto L_001CA9E8;
    case 205u: goto L_001CA9F4;
    case 206u: goto L_001CAA00;
    case 207u: goto L_001CAA10;
    case 208u: goto L_001CAA2C;
    case 209u: goto L_001CAAA0;
    case 210u: goto L_001CAB04;
    case 211u: goto L_001CAB20;
    case 212u: goto L_001CAB48;
    case 213u: goto L_001CAB58;
    case 214u: goto L_001CABD4;
    case 215u: goto L_001CABF4;
    case 216u: goto L_001CAC10;
    case 217u: goto L_001CACCC;
    case 218u: goto L_001CAD30;
    case 219u: goto L_001CADF0;
    case 220u: goto L_001CAE40;
    case 221u: goto L_001CAECC;
    case 222u: goto L_001CAEE0;
    case 223u: goto L_001CAF50;
    case 224u: goto L_001CAF60;
    case 225u: goto L_001CAFB8;
    case 226u: goto L_001CB0D4;
    case 227u: goto L_001CB0E4;
    case 228u: goto L_001CB114;
    case 229u: goto L_001CB124;
    case 230u: goto L_001CB130;
    case 231u: goto L_001CB150;
    case 232u: goto L_001CB174;
    case 233u: goto L_001CB1BC;
    case 234u: goto L_001CB1FC;
    case 235u: goto L_001CB250;
    case 236u: goto L_001CB2C0;
    case 237u: goto L_001CB2F8;
    case 238u: goto L_001CB378;
    case 239u: goto L_001CB3D0;
    case 240u: goto L_001CB4CC;
    case 241u: goto L_001CB554;
    case 242u: goto L_001CB5A0;
    case 243u: goto L_001CB5E0;
    case 244u: goto L_001CB5EC;
    case 245u: goto L_001CB61C;
    case 246u: goto L_001CB6B0;
    case 247u: goto L_001CB72C;
    case 248u: goto L_001CB7B0;
    case 249u: goto L_001CB82C;
    case 250u: goto L_001CB8AC;
    case 251u: goto L_001CB924;
    case 252u: goto L_001CB9A8;
    case 253u: goto L_001CBA28;
    case 254u: goto L_001CBAA0;
    case 255u: goto L_001CBB14;
    case 256u: goto L_001CBB8C;
    case 257u: goto L_001CBC0C;
    case 258u: goto L_001CBC80;
    case 259u: goto L_001CBCF4;
    case 260u: goto L_001CBD6C;
    case 261u: goto L_001CBDE8;
    case 262u: goto L_001CBE60;
    case 263u: goto L_001CBEDC;
    case 264u: goto L_001CBF10;
    case 265u: goto L_001CBF48;
    case 266u: goto L_001CBF54;
    case 267u: goto L_001CBF80;
    case 268u: goto L_001CBFC0;
    default: bad_entry(c, 0x001C8000u); return;
    }
L_001C8000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C8330; } }
L_001C8008:
    set32(c.r[17], ld32((c.r[20].w[0] + 1260u)));
    set32(c.r[16], ld32((c.r[20].w[0] + 1264u)));
    c.r[2].d[0] = 0ull & 255ull;
    set32(c.r[21], ld32((c.r[20].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 6;
L_001C8020:
    st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 756u), static_cast<std::uint8_t>(0u));
    st32((c.r[20].w[0] + 1256u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 1264u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 1260u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 749u));
    set32(c.r[2], c.r[2].w[0] - 7u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(14ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_001C81F0; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 15824u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001C8000u < 16384u) { entry = entries_0032[(t - 0x001C8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001C8068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8070u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 34u, depth + 1u); else { c.pc = 0x001C8990u; return; } if (c.pc != 0x001C8070u) [[unlikely]] return; }
L_001C8070:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 793u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C80A0; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_001C8090; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001C8258; } }
    c.budget -= 1;
L_001C8090:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001C8258; } }
    c.budget -= 1;
L_001C80A0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], 0u + 13u);  if (t) { goto L_001C80B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001C8258; } }
L_001C80B0:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001C8258; } }
    c.budget -= 1;
L_001C80C0:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001C8258; } }
    c.budget -= 1;
L_001C80D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C80D8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 34u, depth + 1u); else { c.pc = 0x001C8990u; return; } if (c.pc != 0x001C80D8u) [[unlikely]] return; }
L_001C80D8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], 0u + 14u);  if (t) { goto L_001C80E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001C8258; } }
L_001C80E8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001C8258; } }
    c.budget -= 1;
L_001C80F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8100u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 34u, depth + 1u); else { c.pc = 0x001C8990u; return; } if (c.pc != 0x001C8100u) [[unlikely]] return; }
L_001C8100:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_001C8110; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001C8258; } }
L_001C8110:
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001C8258; } }
    c.budget -= 1;
L_001C8120:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 765u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C81F0; } }
    c.f[1] = ld32((c.r[20].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C81F0; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001C8168; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C815Cu);  if (depth < kMaxDepth) unit_0032(c, 34u, depth + 1u); else { c.pc = 0x001C8990u; return; } if (c.pc != 0x001C815Cu) [[unlikely]] return; }
L_001C815C:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001C8258; } }
L_001C8168:
    set32(c.r[2], 0u + 11u);
    st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 1264u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 14));  if (t) { goto L_001C8184; } }
    set32(c.r[2], c.r[3].w[0] + 16383u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    c.budget -= 2;
L_001C8184:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 755u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[18].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 2u));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C81E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C8330; } }
    c.budget -= 1;
L_001C81E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C81E8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 34u, depth + 1u); else { c.pc = 0x001C8990u; return; } if (c.pc != 0x001C81E8u) [[unlikely]] return; }
L_001C81E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 756u), static_cast<std::uint8_t>(c.r[18].w[0]));  if (t) { goto L_001C8258; } }
L_001C81F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C81F8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 34u, depth + 1u); else { c.pc = 0x001C8990u; return; } if (c.pc != 0x001C81F8u) [[unlikely]] return; }
L_001C81F8:
    c.f[1] = ld32((c.r[20].w[0] + 1072u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 6u);  if (t) { goto L_001C8218; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001C8258; } }
L_001C8218:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_001C8228; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001C8258; } }
L_001C8228:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 749u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001C8240; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C8250; } }
L_001C8240:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001C8258; } }
    c.budget -= 1;
L_001C8250:
    st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001C8258:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8264u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 31u, depth + 1u); else { c.pc = 0x001C8670u; return; } if (c.pc != 0x001C8264u) [[unlikely]] return; }
L_001C8264:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001C8300; } }
    c.r[5].d[0] = ld16((c.r[20].w[0] + 680u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8280u); set32(c.r[6], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_0039(c, 54u, depth + 1u); else { c.pc = 0x001E49D0u; return; } if (c.pc != 0x001C8280u) [[unlikely]] return; }
L_001C8280:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C82A8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 14));  if (t) { goto L_001C829C; } }
    set32(c.r[2], c.r[3].w[0] + 16383u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    c.budget -= 2;
L_001C829C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 3;
L_001C82A8:
    set32(c.r[5], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C82B4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 152u, depth + 1u); else { c.pc = 0x001EB8D0u; return; } if (c.pc != 0x001C82B4u) [[unlikely]] return; }
L_001C82B4:
    set32(c.r[2], ld32((c.r[20].w[0] + 1504u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 1488u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 1516u)));
    st32((c.r[20].w[0] + 504u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 1516u)));
    st32((c.r[20].w[0] + 508u), c.r[2].w[0]);
    c.f[3] = ld32((c.r[20].w[0] + 1344u));
    c.f[2] = ld32((c.r[20].w[0] + 1348u));
    c.f[1] = ld32((c.r[20].w[0] + 1352u));
    c.f[0] = ld32((c.r[20].w[0] + 1356u));
    st32((c.r[20].w[0] + 1296u), c.f[3]);
    st32((c.r[20].w[0] + 1300u), c.f[2]);
    st32((c.r[20].w[0] + 1304u), c.f[1]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C82F4u); st32((c.r[20].w[0] + 1308u), c.f[0]);  if (depth < kMaxDepth) unit_003C(c, 101u, depth + 1u); else { c.pc = 0x001F0D10u; return; } if (c.pc != 0x001C82F4u) [[unlikely]] return; }
L_001C82F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C8310; } }
    c.budget -= 1;
L_001C8300:
    st32((c.r[20].w[0] + 1260u), c.r[17].w[0]);
    st32((c.r[20].w[0] + 1264u), c.r[16].w[0]);
    st32((c.r[20].w[0] + 96u), c.r[21].w[0]);
    c.budget -= 4;
L_001C8310:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 754u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001C8328; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8324u);  if (depth < kMaxDepth) unit_003B(c, 11u, depth + 1u); else { c.pc = 0x001EC290u; return; } if (c.pc != 0x001C8324u) [[unlikely]] return; }
L_001C8324:
    c.budget -= 1;
L_001C8328:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_001C8330:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001C8360:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 8u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 749u));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001C83A8; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 792u));
    c.r[1].d[0] = c.r[2].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C83C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C8650; } }
L_001C83A8:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 792u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C83C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C8650; } }
    c.budget -= 1;
L_001C83C0:
    set32(c.r[18], ld32((c.r[20].w[0] + 1260u)));
    set32(c.r[17], ld32((c.r[20].w[0] + 1264u)));
    c.r[2].d[0] = 0ull & 255ull;
    set32(c.r[16], ld32((c.r[20].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 756u), static_cast<std::uint8_t>(0u));
    st32((c.r[20].w[0] + 1256u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 1264u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 1260u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_001C8408; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001C8600; } }
L_001C8408:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 749u));
    set32(c.r[2], c.r[2].w[0] - 7u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(14ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_001C8530; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 15888u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001C8000u < 16384u) { entry = entries_0032[(t - 0x001C8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001C8438:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[2], 0u + 13u);  if (t) { goto L_001C8448; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001C8560; } }
L_001C8448:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001C8560; } }
    c.budget -= 1;
L_001C8458:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_001C8468; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001C8560; } }
L_001C8468:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001C8560; } }
    c.budget -= 1;
L_001C8478:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001C8560; } }
    c.budget -= 1;
L_001C8488:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[2], 0u + 14u);  if (t) { goto L_001C8498; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001C8560; } }
L_001C8498:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001C8560; } }
    c.budget -= 1;
L_001C84A8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_001C84B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001C8560; } }
L_001C84B8:
    set32(c.r[2], 0u + 11u);
    st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 1264u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 14));  if (t) { goto L_001C84D4; } }
    set32(c.r[2], c.r[3].w[0] + 16383u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    c.budget -= 2;
L_001C84D4:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = 0ull | 65535ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[20].w[0] + 756u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld8((c.r[20].w[0] + 755u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 756u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 2u));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C8560; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C8650; } }
    c.budget -= 1;
L_001C8530:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_001C8540; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001C8560; } }
L_001C8540:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 15360ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C8558; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001C8560; } }
L_001C8558:
    set32(c.r[2], 0u + 2u);
    st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001C8560:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8570u); st32((c.r[20].w[0] + 1260u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_003B(c, 22u, depth + 1u); else { c.pc = 0x001EC600u; return; } if (c.pc != 0x001C8570u) [[unlikely]] return; }
L_001C8570:
    set32(c.r[3], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_001C85D8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_001C85D8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001C85B8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001C85A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C85F0; } }
    c.budget -= 1;
L_001C85A0:
    set32(c.r[2], 0u + 16384u);
    st32((c.r[20].w[0] + 1264u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 1260u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 756u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001C8600; } }
    c.budget -= 1;
L_001C85B8:
    set32(c.r[2], 0u - 16384u);
    st32((c.r[20].w[0] + 1260u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull | 49152ull;
    st32((c.r[20].w[0] + 1264u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 756u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001C8600; } }
    c.budget -= 1;
L_001C85D8:
    c.r[3].d[0] = 0ull | 32768ull;
    st32((c.r[20].w[0] + 1264u), c.r[3].w[0]);
    set32(c.r[2], 0u + 3u);
    st32((c.r[20].w[0] + 1260u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 756u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001C8600; } }
L_001C85F0:
    st32((c.r[20].w[0] + 1264u), 0u);
    st32((c.r[20].w[0] + 1260u), 0u);
    st8((c.r[20].w[0] + 756u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001C8600:
    st8((c.r[20].w[0] + 770u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 961u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[20].w[0] + 1472u), 0u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 1476u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8620u); st32((c.r[20].w[0] + 1480u), 0u);  if (depth < kMaxDepth) unit_0032(c, 31u, depth + 1u); else { c.pc = 0x001C8670u; return; } if (c.pc != 0x001C8620u) [[unlikely]] return; }
L_001C8620:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001C8640; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 822u)));
    set32(c.r[3], 0u - 197u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001C8650; } }
L_001C8640:
    st32((c.r[20].w[0] + 1260u), c.r[18].w[0]);
    st32((c.r[20].w[0] + 1264u), c.r[17].w[0]);
    st32((c.r[20].w[0] + 96u), c.r[16].w[0]);
    c.budget -= 4;
L_001C8650:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001C8670:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull | 65535ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[4].w[0] + 755u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 756u)));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 2u));
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C86D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C8860; } }
    c.budget -= 1;
L_001C86D0:
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[2], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[17].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C8708; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 814u)));
    st16((c.r[17].w[0] + 816u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    st16((c.r[17].w[0] + 814u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
L_001C8708:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 753u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8714u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 96u, depth + 1u); else { c.pc = 0x001F0BA0u; return; } if (c.pc != 0x001C8714u) [[unlikely]] return; }
L_001C8714:
    c.r[1].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C8728; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001C8728:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 820u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_001C87B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001C87B0; } }
    c.r[3].d[0] = c.r[4].sd[0] < 51ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 56ll ? 1ull : 0ull;  if (t) { goto L_001C8758; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C8758; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C8758:
    set32(c.r[3], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001C8788; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[3], c.r[4].w[0] - 48u);  if (t) { goto L_001C8788; } }
    set32(c.r[5], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 56u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 820u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001C8790; } }
L_001C8788:
    st8((c.r[17].w[0] + 820u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_001C8790:
    st32((c.r[17].w[0] + 704u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    st8((c.r[17].w[0] + 704u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    st8((c.r[17].w[0] + 754u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 8516u), 0u);
    st8((c.r[17].w[0] + 792u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_001C87B0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 821u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_001C8850; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001C8850; } }
    c.r[3].d[0] = c.r[5].sd[0] < 51ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[5].sd[0] < 56ll ? 1ull : 0ull;  if (t) { goto L_001C87E0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C87E0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C87E0:
    set32(c.r[3], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001C8810; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[4], c.r[2].w[0] - 1u);  if (t) { goto L_001C8810; } }
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[5].w[0] - 48u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 56u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 821u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001C8818; } }
L_001C8810:
    st8((c.r[17].w[0] + 821u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 2;
L_001C8818:
    st32((c.r[17].w[0] + 708u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.f[0] = 0u;
    st8((c.r[17].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 9u)));
    st8((c.r[17].w[0] + 754u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 793u), static_cast<std::uint8_t>(0u));
    c.f[1] = ld32((c.r[17].w[0] + 108u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C8858; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 108u), c.f[0]);  if (t) { goto L_001C8858; } }
L_001C8850:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001C8860; } }
L_001C8858:
    set32(c.r[2], 0u + 2u);
    c.budget -= 2;
L_001C8860:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C8880:
    st8((c.r[4].w[0] + 756u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[8], c.r[3].w[0] << 1);
    set32(c.r[7], c.r[8].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld16((c.r[7].w[0] + 2u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[9], c.r[7].w[0] + 2u);  if (t) { goto L_001C88B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001C8980; } }
    c.budget -= 1;
L_001C88B8:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    set32(c.r[3], 0u - 4u);
    set32(c.r[2], 0u - 1u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st16((c.r[4].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st16((c.r[4].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C88F8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 814u)));
    st16((c.r[4].w[0] + 816u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    st16((c.r[4].w[0] + 814u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001C88F8:
    set32(c.r[6], c.r[8].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C8928; } }
    st8((c.r[4].w[0] + 820u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 704u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 5u)));
    st8((c.r[4].w[0] + 704u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 8516u), 0u);
    st8((c.r[4].w[0] + 792u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
L_001C8928:
    set32(c.r[5], c.r[8].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 7u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C8970; } }
    st8((c.r[4].w[0] + 821u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = 0u;
    st32((c.r[4].w[0] + 708u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8u)));
    st8((c.r[4].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 793u), static_cast<std::uint8_t>(0u));
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C8978; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 108u), c.f[0]);  if (t) { goto L_001C8978; } }
L_001C8970:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001C8980; } }
L_001C8978:
    set32(c.r[2], 0u + 2u);
    c.budget -= 2;
L_001C8980:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C8990:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld16((c.r[4].w[0] + 680u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C89A8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x001C89A8u) [[unlikely]] return; }
L_001C89A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C89D0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1264u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 14));  if (t) { goto L_001C89C4; } }
    set32(c.r[2], c.r[3].w[0] + 16383u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    c.budget -= 2;
L_001C89C4:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 756u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001C89D0:
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 764u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C89E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 183u, depth + 1u); else { c.pc = 0x001EBFA0u; return; } if (c.pc != 0x001C89E0u) [[unlikely]] return; }
L_001C89E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C89F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[16], c.r[16].w[0] - 27856u);
    c.budget -= 8;
L_001C8A10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8A18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 42u, depth + 1u); else { c.pc = 0x001C8A60u; return; } if (c.pc != 0x001C8A18u) [[unlikely]] return; }
L_001C8A18:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8A28u); st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001C8A28u) [[unlikely]] return; }
L_001C8A28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8A30u); set32(c.r[4], c.r[16].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C8A30u) [[unlikely]] return; }
L_001C8A30:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C8A10u | kUnwind; return; } goto L_001C8A10; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C8A60:
    set32(c.r[2], c.r[4].w[0] + 8656u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { set32(c.r[6], c.r[2].w[0] - c.r[4].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011AB50u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 201u, depth); }
L_001C8A70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], c.r[4].w[0] << 4);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 27856u);
    set32(c.r[3], c.r[3].w[0] << 9);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 8704u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8AACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x001C8AACu) [[unlikely]] return; }
L_001C8AAC:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 1u);
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 1376u);
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 1368u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st8((c.r[16].w[0] + 8656u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8AE4u); st8((c.r[16].w[0] + 8657u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001C8AE4u) [[unlikely]] return; }
L_001C8AE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8AECu); set32(c.r[4], c.r[16].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001C8AECu) [[unlikely]] return; }
L_001C8AEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001C8B00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_001C8B10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8B18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 43u, depth + 1u); else { c.pc = 0x001C8A70u; return; } if (c.pc != 0x001C8B18u) [[unlikely]] return; }
L_001C8B18:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C8B10u | kUnwind; return; } goto L_001C8B10; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C8B40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C8B68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8B60u);  if (depth < kMaxDepth) unit_0056(c, 330u, depth + 1u); else { c.pc = 0x0025BF10u; return; } if (c.pc != 0x001C8B60u) [[unlikely]] return; }
L_001C8B60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C8B70; } }
L_001C8B68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8B70u);  if (depth < kMaxDepth) unit_0032(c, 53u, depth + 1u); else { c.pc = 0x001C8B80u; return; } if (c.pc != 0x001C8B70u) [[unlikely]] return; }
L_001C8B70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001C8B80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[16], c.r[16].w[0] - 27856u);
    c.budget -= 10;
L_001C8BA8:
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001C8BE0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[3].d[0] = c.r[3].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001C8BE0; } }
    set32(c.r[2], c.r[4].w[0] << (c.r[17].w[0] & 31u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8BDCu); c.r[18].d[0] = c.r[18].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_00AB(c, 44u, depth + 1u); else { c.pc = 0x003AC540u; return; } if (c.pc != 0x001C8BDCu) [[unlikely]] return; }
L_001C8BDC:
    c.budget -= 1;
L_001C8BE0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C8BA8u | kUnwind; return; } goto L_001C8BA8; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] - 27856u);
    c.budget -= 4;
L_001C8C00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_001C8C40; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[3].d[0] = c.r[4].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 80ll ? 1ull : 0ull;  if (t) { goto L_001C8C40; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] << (c.r[16].w[0] & 31u));  if (t) { goto L_001C8C40; } }
    c.r[3].d[0] = c.r[18].d[0] & c.r[4].d[0];
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001C8C40; } }
    c.r[18].d[0] = c.r[18].d[0] | c.r[4].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8C40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 118u, depth + 1u); else { c.pc = 0x001B5B60u; return; } if (c.pc != 0x001C8C40u) [[unlikely]] return; }
L_001C8C40:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C8C00u | kUnwind; return; } goto L_001C8C00; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] - 27856u);
    c.budget -= 4;
L_001C8C60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001C8CA0; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[1].d[0] = c.r[3].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C8CA0; } }
    set32(c.r[4], c.r[4].w[0] << (c.r[16].w[0] & 31u));
    c.r[3].d[0] = c.r[18].d[0] & c.r[4].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001C8CA0; } }
    c.r[18].d[0] = c.r[18].d[0] | c.r[4].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8C9Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 60u, depth + 1u); else { c.pc = 0x001C8CD0u; return; } if (c.pc != 0x001C8C9Cu) [[unlikely]] return; }
L_001C8C9C:
    c.budget -= 1;
L_001C8CA0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C8C60u | kUnwind; return; } goto L_001C8C60; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001C8CD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 1360u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001C8000u < 16384u) { entry = entries_0032[(t - 0x001C8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001C8CF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 747u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 275u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 769u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 803u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 796u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8D2Cu); st8((c.r[4].w[0] + 771u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_003A(c, 60u, depth + 1u); else { c.pc = 0x001E9450u; return; } if (c.pc != 0x001C8D2Cu) [[unlikely]] return; }
L_001C8D2C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[8], c.r[8].w[0] + 18064u);
    set32(c.r[2], c.r[2].w[0] + 12304u);
    set32(c.r[5], c.r[5].w[0] + 16272u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[16].w[0] + 8524u), c.r[3].w[0]);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8659u)));
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[8], ld32((c.r[8].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[16].w[0] + 8520u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    st8((c.r[16].w[0] + 271u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[8].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8680u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8659u)));
    set32(c.r[8], c.r[8].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8DBCu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x001C8DBCu) [[unlikely]] return; }
L_001C8DBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8DC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 130u, depth + 1u); else { c.pc = 0x0021DDA0u; return; } if (c.pc != 0x001C8DC4u) [[unlikely]] return; }
L_001C8DC4:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8680u)));
    set32(c.r[3], c.r[3].w[0] + 17168u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C8E08; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8659u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8664u), c.r[2].w[0]);  if (t) { goto L_001C8E10; } }
    c.budget -= 1;
L_001C8E08:
    st32((c.r[16].w[0] + 8664u), 0u);
    c.budget -= 2;
L_001C8E10:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] - 3728u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 8668u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C8E50; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 321u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C8E50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 750u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001C8E90; } }
L_001C8E50:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 39u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001C8E68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 750u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001C8E90; } }
L_001C8E68:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C8E88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8E80u);  if (depth < kMaxDepth) unit_0071(c, 57u, depth + 1u); else { c.pc = 0x002C4EA0u; return; } if (c.pc != 0x001C8E80u) [[unlikely]] return; }
L_001C8E80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 750u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001C8E90; } }
L_001C8E88:
    st8((c.r[16].w[0] + 750u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001C8E90:
    set32(c.r[5], ld32((c.r[16].w[0] + 1608u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[3].w[0] - 25760u);
    set32(c.r[2], c.r[2].w[0] - 25756u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 109u)));
    st8((c.r[16].w[0] + 8681u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 1608u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 110u)));
    st8((c.r[16].w[0] + 8682u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8661u)));
    st8((c.r[16].w[0] + 515u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 1208u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 1212u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1608u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 100u)));
    st16((c.r[16].w[0] + 834u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 832u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 1608u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 102u)));
    st16((c.r[16].w[0] + 836u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 1608u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 104u)));
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8F20u); st8((c.r[16].w[0] + 502u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 135u, depth + 1u); else { c.pc = 0x002A9EB0u; return; } if (c.pc != 0x001C8F20u) [[unlikely]] return; }
L_001C8F20:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = 0ull | 62464ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 268u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    st8((c.r[16].w[0] + 269u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    st8((c.r[16].w[0] + 270u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 264u), c.r[16].w[0]);
    st16((c.r[16].w[0] + 562u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8F54u); st16((c.r[16].w[0] + 566u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0036(c, 145u, depth + 1u); else { c.pc = 0x001DB830u; return; } if (c.pc != 0x001C8F54u) [[unlikely]] return; }
L_001C8F54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8F5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 148u, depth + 1u); else { c.pc = 0x001DB900u; return; } if (c.pc != 0x001C8F5Cu) [[unlikely]] return; }
L_001C8F5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8F64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 270u, depth + 1u); else { c.pc = 0x001F3570u; return; } if (c.pc != 0x001C8F64u) [[unlikely]] return; }
L_001C8F64:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 8864u);
    c.budget -= 5;
L_001C8F78:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001C8F98; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C8F78u | kUnwind; return; } goto L_001C8F78; } }
    c.budget -= 1;
L_001C8F98:
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006A0000u);  if (t) { goto L_001C91D0; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 15952u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001C8000u < 16384u) { entry = entries_0032[(t - 0x001C8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001C8FC0:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 4064u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] - 2720u);
    st32((c.r[16].w[0] + 1612u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 1616u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1620u), c.r[2].w[0]);  if (t) { goto L_001C91D0; } }
L_001C9018:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 3840u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] - 2496u);
    st32((c.r[16].w[0] + 1612u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 1616u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1620u), c.r[2].w[0]);  if (t) { goto L_001C91D0; } }
L_001C9070:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 3616u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] - 2272u);
    st32((c.r[16].w[0] + 1612u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 1616u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1620u), c.r[2].w[0]);  if (t) { goto L_001C91D0; } }
L_001C90C8:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 3392u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] - 2048u);
    st32((c.r[16].w[0] + 1612u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 1616u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1620u), c.r[2].w[0]);  if (t) { goto L_001C91D0; } }
L_001C9120:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 3168u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] - 1824u);
    st32((c.r[16].w[0] + 1612u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 1616u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1620u), c.r[2].w[0]);  if (t) { goto L_001C91D0; } }
L_001C9178:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 2944u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] - 1600u);
    st32((c.r[16].w[0] + 1612u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 1616u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 1620u), c.r[2].w[0]);
    c.budget -= 22;
L_001C91D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 1612u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C91E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C91E0u) [[unlikely]] return; }
L_001C91E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C91E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 80u, depth + 1u); else { c.pc = 0x001C9210u; return; } if (c.pc != 0x001C91E8u) [[unlikely]] return; }
L_001C91E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C91F8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x001C91F8u) [[unlikely]] return; }
L_001C91F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C9210:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 1344u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = ld32((c.r[4].w[0] + 128u));
    c.f[2] = ld32((c.r[4].w[0] + 132u));
    c.f[1] = ld32((c.r[4].w[0] + 136u));
    c.f[0] = ld32((c.r[4].w[0] + 140u));
    st32((c.r[4].w[0] + 144u), c.f[3]);
    st32((c.r[4].w[0] + 148u), c.f[2]);
    st32((c.r[4].w[0] + 152u), c.f[1]);
    st32((c.r[4].w[0] + 156u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    st32((c.r[4].w[0] + 128u), c.f[3]);
    st32((c.r[4].w[0] + 132u), c.f[2]);
    st32((c.r[4].w[0] + 136u), c.f[1]);
    st32((c.r[4].w[0] + 140u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    st32((c.r[4].w[0] + 1272u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    st32((c.r[4].w[0] + 1276u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    st32((c.r[4].w[0] + 1280u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8328u)));
    st32((c.r[4].w[0] + 8568u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8332u)));
    st32((c.r[4].w[0] + 8572u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8264u));
    st32((c.r[4].w[0] + 8272u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8304u));
    st32((c.r[4].w[0] + 8312u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8268u));
    st32((c.r[4].w[0] + 8276u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8308u));
    st32((c.r[4].w[0] + 8316u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 45;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C92C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C92C4u) [[unlikely]] return; }
L_001C92C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C92CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 55u, depth + 1u); else { c.pc = 0x001DC4B0u; return; } if (c.pc != 0x001C92CCu) [[unlikely]] return; }
L_001C92CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C92D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 171u, depth + 1u); else { c.pc = 0x001DBCC0u; return; } if (c.pc != 0x001C92D4u) [[unlikely]] return; }
L_001C92D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C92DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 373u, depth + 1u); else { c.pc = 0x001E3AE0u; return; } if (c.pc != 0x001C92DCu) [[unlikely]] return; }
L_001C92DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C92E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 352u, depth + 1u); else { c.pc = 0x001BB820u; return; } if (c.pc != 0x001C92E4u) [[unlikely]] return; }
L_001C92E4:
    set32(c.r[3], ld32((c.r[16].w[0] + 1608u)));
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 124u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001C9300; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9300u);  if (depth < kMaxDepth) unit_0039(c, 176u, depth + 1u); else { c.pc = 0x001E6BB0u; return; } if (c.pc != 0x001C9300u) [[unlikely]] return; }
L_001C9300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9308u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 466u, depth + 1u); else { c.pc = 0x001C5810u; return; } if (c.pc != 0x001C9308u) [[unlikely]] return; }
L_001C9308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9310u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 459u, depth + 1u); else { c.pc = 0x001C57C0u; return; } if (c.pc != 0x001C9310u) [[unlikely]] return; }
L_001C9310:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001C9320; } }
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001C9320:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C9330:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 796u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    st8((c.r[4].w[0] + 796u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 803u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9368u); st8((c.r[4].w[0] + 803u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0032(c, 194u, depth + 1u); else { c.pc = 0x001CA7B0u; return; } if (c.pc != 0x001C9368u) [[unlikely]] return; }
L_001C9368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9370u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 201u, depth + 1u); else { c.pc = 0x001CA950u; return; } if (c.pc != 0x001C9370u) [[unlikely]] return; }
L_001C9370:
    set32(c.r[2], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    st8((c.r[16].w[0] + 747u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 17216u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 15u);
    st32((c.r[16].w[0] + 80u), 0u);
    set32(c.r[2], 0u + 255u);
    st32((c.r[16].w[0] + 88u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 104u), 0u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 168u), c.r[4].w[0]);
    st8((c.r[16].w[0] + 503u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 520u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 523u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 556u), static_cast<std::uint16_t>(0u));
    c.budget -= 20;
L_001C93C0:
    st16((c.r[5].w[0] + 524u), static_cast<std::uint16_t>(0u));
    st16((c.r[5].w[0] + 526u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], c.r[6].w[0] + 8u);
    st16((c.r[5].w[0] + 528u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[6].sd[0] < 16ll ? 1ull : 0ull;
    st16((c.r[5].w[0] + 530u), static_cast<std::uint16_t>(0u));
    st16((c.r[5].w[0] + 532u), static_cast<std::uint16_t>(0u));
    st16((c.r[5].w[0] + 534u), static_cast<std::uint16_t>(0u));
    st16((c.r[5].w[0] + 536u), static_cast<std::uint16_t>(0u));
    st16((c.r[5].w[0] + 538u), static_cast<std::uint16_t>(0u));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C93C0u | kUnwind; return; } goto L_001C93C0; } }
    st32((c.r[16].w[0] + 672u), 0u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 558u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 560u), static_cast<std::uint16_t>(0u));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 559u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 564u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 517u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 570u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    st8((c.r[16].w[0] + 268u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    st8((c.r[16].w[0] + 269u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    st8((c.r[16].w[0] + 270u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 264u), c.r[16].w[0]);
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 767u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 757u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 838u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 816u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 814u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 820u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 704u), 0u);
    st32((c.r[16].w[0] + 708u), 0u);
    st32((c.r[16].w[0] + 1256u), 0u);
    st8((c.r[16].w[0] + 811u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 797u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 800u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 808u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 765u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 791u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 790u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 789u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 777u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 801u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 773u), static_cast<std::uint8_t>(0u));
    c.budget -= 44;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C94A0u); st8((c.r[16].w[0] + 775u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0039(c, 251u, depth + 1u); else { c.pc = 0x001E7BE0u; return; } if (c.pc != 0x001C94A0u) [[unlikely]] return; }
L_001C94A0:
    st8((c.r[16].w[0] + 849u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 255u);
    st32((c.r[16].w[0] + 1264u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 1260u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 92u), 0u);
    st8((c.r[16].w[0] + 963u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 778u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 8412u), 0u);
    st32((c.r[16].w[0] + 8408u), 0u);
    st32((c.r[16].w[0] + 8404u), 0u);
    st32((c.r[16].w[0] + 8400u), 0u);
    st32((c.r[16].w[0] + 8420u), 0u);
    st32((c.r[16].w[0] + 8416u), 0u);
    st32((c.r[16].w[0] + 8428u), 0u);
    st32((c.r[16].w[0] + 8424u), 0u);
    st32((c.r[16].w[0] + 8332u), 0u);
    st32((c.r[16].w[0] + 8328u), 0u);
    st32((c.r[16].w[0] + 8436u), 0u);
    st32((c.r[16].w[0] + 8432u), 0u);
    st32((c.r[16].w[0] + 8472u), 0u);
    st32((c.r[16].w[0] + 8468u), 0u);
    st32((c.r[16].w[0] + 8464u), 0u);
    st32((c.r[16].w[0] + 8456u), 0u);
    st32((c.r[16].w[0] + 8452u), 0u);
    st32((c.r[16].w[0] + 8448u), 0u);
    st8((c.r[16].w[0] + 8567u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 8566u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 860u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 764u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 1488u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 1608u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    st32((c.r[16].w[0] + 1236u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 8563u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 8562u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 780u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 781u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 953u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 952u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 1608u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 124u)));
    c.budget -= 45;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001C9560; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C955Cu);  if (depth < kMaxDepth) unit_0039(c, 176u, depth + 1u); else { c.pc = 0x001E6BB0u; return; } if (c.pc != 0x001C955Cu) [[unlikely]] return; }
L_001C955C:
    c.budget -= 1;
L_001C9560:
    st8((c.r[16].w[0] + 1626u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1627u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9574u); st8((c.r[16].w[0] + 1625u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0036(c, 144u, depth + 1u); else { c.pc = 0x001DB7F0u; return; } if (c.pc != 0x001C9574u) [[unlikely]] return; }
L_001C9574:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C958Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x001C958Cu) [[unlikely]] return; }
L_001C958C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9594u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 139u, depth + 1u); else { c.pc = 0x001DCFF0u; return; } if (c.pc != 0x001C9594u) [[unlikely]] return; }
L_001C9594:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8658u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C95A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 303u, depth + 1u); else { c.pc = 0x00167D70u; return; } if (c.pc != 0x001C95A0u) [[unlikely]] return; }
L_001C95A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C95B0u); st32((c.r[16].w[0] + 1088u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0039(c, 117u, depth + 1u); else { c.pc = 0x001E56A0u; return; } if (c.pc != 0x001C95B0u) [[unlikely]] return; }
L_001C95B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C95B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 364u, depth + 1u); else { c.pc = 0x001E38C0u; return; } if (c.pc != 0x001C95B8u) [[unlikely]] return; }
L_001C95B8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C95D0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8687u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C95D8; } }
L_001C95D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C95D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0025(c, 11u, depth + 1u); else { c.pc = 0x001946A0u; return; } if (c.pc != 0x001C95D8u) [[unlikely]] return; }
L_001C95D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 1612u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C95E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C95E8u) [[unlikely]] return; }
L_001C95E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C9600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001C9640; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 516u));
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001C9630; } }
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001C9630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9638u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 364u, depth + 1u); else { c.pc = 0x001E38C0u; return; } if (c.pc != 0x001C9638u) [[unlikely]] return; }
L_001C9638:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 798u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001C9640:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 1088u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9650u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 2u, depth + 1u); else { c.pc = 0x001CC0B0u; return; } if (c.pc != 0x001C9650u) [[unlikely]] return; }
L_001C9650:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C9670; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 877u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C9678; } }
    c.budget -= 1;
L_001C9670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9678u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 368u, depth + 1u); else { c.pc = 0x001E3960u; return; } if (c.pc != 0x001C9678u) [[unlikely]] return; }
L_001C9678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9680u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 161u, depth + 1u); else { c.pc = 0x001CA0D0u; return; } if (c.pc != 0x001C9680u) [[unlikely]] return; }
L_001C9680:
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 747u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9694u); st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0039(c, 117u, depth + 1u); else { c.pc = 0x001E56A0u; return; } if (c.pc != 0x001C9694u) [[unlikely]] return; }
L_001C9694:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001C96D8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 877u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C96D8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C96C4u); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0038(c, 364u, depth + 1u); else { c.pc = 0x001E38C0u; return; } if (c.pc != 0x001C96C4u) [[unlikely]] return; }
L_001C96C4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 1872u);  if (t) { goto L_001C96D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C96D8u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001C96D8u) [[unlikely]] return; }
L_001C96D8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_001C9718; } }
    set32(c.r[2], 0u + 255u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 516u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001C9708; } }
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001C9708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9710u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 364u, depth + 1u); else { c.pc = 0x001E38C0u; return; } if (c.pc != 0x001C9710u) [[unlikely]] return; }
L_001C9710:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 798u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001C9718:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C9730:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9744u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 62u, depth + 1u); else { c.pc = 0x001E9AF0u; return; } if (c.pc != 0x001C9744u) [[unlikely]] return; }
L_001C9744:
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 747u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 796u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 796u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 803u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1088u), c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9784u); st8((c.r[16].w[0] + 798u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0039(c, 117u, depth + 1u); else { c.pc = 0x001E56A0u; return; } if (c.pc != 0x001C9784u) [[unlikely]] return; }
L_001C9784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C978Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x001C978Cu) [[unlikely]] return; }
L_001C978C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_001C97C8; } }
    set32(c.r[2], 0u + 255u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 516u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001C97B8; } }
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001C97B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C97C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 364u, depth + 1u); else { c.pc = 0x001E38C0u; return; } if (c.pc != 0x001C97C0u) [[unlikely]] return; }
L_001C97C0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 798u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001C97C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C97E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001C9820; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 516u));
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001C9810; } }
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001C9810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9818u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 364u, depth + 1u); else { c.pc = 0x001E38C0u; return; } if (c.pc != 0x001C9818u) [[unlikely]] return; }
L_001C9818:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 798u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001C9820:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C9838; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8687u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C9840; } }
L_001C9838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9840u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 9u, depth + 1u); else { c.pc = 0x0019C050u; return; } if (c.pc != 0x001C9840u) [[unlikely]] return; }
L_001C9840:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 797u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001C9858; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9854u);  if (depth < kMaxDepth) unit_0033(c, 130u, depth + 1u); else { c.pc = 0x001CD470u; return; } if (c.pc != 0x001C9854u) [[unlikely]] return; }
L_001C9854:
    c.budget -= 1;
L_001C9858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9860u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 368u, depth + 1u); else { c.pc = 0x001E3960u; return; } if (c.pc != 0x001C9860u) [[unlikely]] return; }
L_001C9860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9868u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 161u, depth + 1u); else { c.pc = 0x001CA0D0u; return; } if (c.pc != 0x001C9868u) [[unlikely]] return; }
L_001C9868:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_001C98A8; } }
    set32(c.r[2], 0u + 255u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 516u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001C9898; } }
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001C9898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C98A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 364u, depth + 1u); else { c.pc = 0x001E38C0u; return; } if (c.pc != 0x001C98A0u) [[unlikely]] return; }
L_001C98A0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 798u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001C98A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C98C0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 275u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001C9A28; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 21u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_001C9900; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001C9A28; } }
L_001C9900:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.f[0] = ld32((c.r[16].w[0] + 2032u));
    set32(c.r[18], c.r[29].w[0] + 164u);
    set32(c.r[17], c.r[29].w[0] + 168u);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2036u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2040u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2000u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2004u));
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2008u));
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.f[12] = ld32((c.r[16].w[0] + 260u));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9948u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001C9948u) [[unlikely]] return; }
L_001C9948:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9954u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x001C9954u) [[unlikely]] return; }
L_001C9954:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 51u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C997Cu); set32(c.r[4], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001C997Cu) [[unlikely]] return; }
L_001C997C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9988u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001C9988u) [[unlikely]] return; }
L_001C9988:
    c.f[5] = ld32((c.r[17].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C9A28; } }
    c.f[2] = ld32((c.r[18].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.f[3] = ld32((c.r[29].w[0] + 160u));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = ld32((c.r[16].w[0] + 256u));
    c.f[4] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.f[2] = fp::mul(c.f[4], c.f[2]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[3] = fp::mul(c.f[4], c.f[3]);
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    fpu_div(c, 4u, c.f[1], c.f[5]);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 3u, c.f[3], c.f[5]);
    c.f[1] = fp::add(c.f[0], c.f[4]);
    c.f[0] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 19;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; fpu_div(c, 2u, c.f[2], c.f[5]);  if (t) { goto L_001C9A28; } }
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x3D990000u);  if (t) { goto L_001C9A28; } }
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[0], c.f[4]);
    c.f[0] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C9A28; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C9A28; } }
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001C9A28:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 21u)));
    c.r[1].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001C9A48; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 275u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001C9CB0; } }
L_001C9A48:
    c.r[2].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C9C88; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001C9BB0; } }
    set32(c.r[3], c.r[29].w[0] + 128u);
    set32(c.r[2], c.r[2].w[0] - 1312u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9A78u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_000C(c, 333u, depth + 1u); else { c.pc = 0x00133EE0u; return; } if (c.pc != 0x001C9A78u) [[unlikely]] return; }
L_001C9A78:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 797u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C9AC0; } }
    st32((c.r[16].w[0] + 108u), 0u);
    c.f[1] = 0u;
    st32((c.r[16].w[0] + 104u), 0u);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001C9AC0; } }
    st32((c.r[16].w[0] + 52u), c.f[1]);
    c.budget -= 2;
L_001C9AC0:
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 84u)));
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[5].w[0]), c.f[3]);
    st32((c.r[5].w[0] + 4u), c.f[2]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9AF0u); st32((c.r[5].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x001C9AF0u) [[unlikely]] return; }
L_001C9AF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[18].d[0] = 0ull + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.budget -= 6;
L_001C9B08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9B10u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001C9B10u) [[unlikely]] return; }
L_001C9B10:
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9B20u); set32(c.r[4], c.r[2].w[0] - 4096u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C9B20u) [[unlikely]] return; }
L_001C9B20:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001C9B28:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9B34u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001C9B34u) [[unlikely]] return; }
L_001C9B34:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9B44u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x001C9B44u) [[unlikely]] return; }
L_001C9B44:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9B54u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0012(c, 159u, depth + 1u); else { c.pc = 0x00149A80u; return; } if (c.pc != 0x001C9B54u) [[unlikely]] return; }
L_001C9B54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 4096u);  if (t) { goto L_001C9B78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9B64u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001C9B64u) [[unlikely]] return; }
L_001C9B64:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C9B28u | kUnwind; return; } goto L_001C9B28; } }
    c.budget -= 1;
L_001C9B78:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[19].w[0] + 4096u);  if (t) { goto L_001C9B98; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = c.r[18].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C9B08u | kUnwind; return; } goto L_001C9B08; } }
L_001C9B98:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[19].d[0] << 48;  if (t) { goto L_001C9BB0; } }
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 3;
L_001C9BB0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C9C88; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[3].w[0] + 29024u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 51u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 41u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 7);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_001C9C18; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 82u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C9C88; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C9C88; } }
    st8((c.r[16].w[0] + 838u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 769u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001C9C88; } }
L_001C9C18:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 82u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8661u)));
    set32(c.r[2], c.r[2].w[0] - 19195u);
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001C9C78; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[17].w[0] + 16u);  if (t) { goto L_001C9C88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9C58u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001C9C58u) [[unlikely]] return; }
L_001C9C58:
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001C9C88; } }
L_001C9C78:
    st8((c.r[16].w[0] + 838u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 769u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001C9C88:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 797u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001C9CA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9C9Cu);  if (depth < kMaxDepth) unit_0033(c, 130u, depth + 1u); else { c.pc = 0x001CD470u; return; } if (c.pc != 0x001C9C9Cu) [[unlikely]] return; }
L_001C9C9C:
    c.budget -= 1;
L_001C9CA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9CA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 368u, depth + 1u); else { c.pc = 0x001E3960u; return; } if (c.pc != 0x001C9CA8u) [[unlikely]] return; }
L_001C9CA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9CB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 161u, depth + 1u); else { c.pc = 0x001CA0D0u; return; } if (c.pc != 0x001C9CB0u) [[unlikely]] return; }
L_001C9CB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001C9CD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 20u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001C9D48; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 21u)));
    c.r[2].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] << 56;  if (t) { goto L_001C9D48; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8661u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C9D48; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 27u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C9D48; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_001C9D48; } }
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9D3Cu); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0032(c, 153u, depth + 1u); else { c.pc = 0x001C9E40u; return; } if (c.pc != 0x001C9D3Cu) [[unlikely]] return; }
L_001C9D3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C9E30; } }
    c.budget -= 1;
L_001C9D48:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[3] = ld32((c.r[16].w[0] + 128u));
    c.f[2] = ld32((c.r[16].w[0] + 132u));
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    c.f[0] = ld32((c.r[16].w[0] + 140u));
    st32((c.r[16].w[0] + 144u), c.f[3]);
    st32((c.r[16].w[0] + 148u), c.f[2]);
    st32((c.r[16].w[0] + 152u), c.f[1]);
    st32((c.r[16].w[0] + 156u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[16].w[0] + 128u), c.f[3]);
    st32((c.r[16].w[0] + 132u), c.f[2]);
    st32((c.r[16].w[0] + 136u), c.f[1]);
    st32((c.r[16].w[0] + 140u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    st32((c.r[16].w[0] + 1272u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[16].w[0] + 1276u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    st32((c.r[16].w[0] + 1280u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8328u)));
    st32((c.r[16].w[0] + 8568u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8332u)));
    st32((c.r[16].w[0] + 8572u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8264u));
    st32((c.r[16].w[0] + 8272u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8304u));
    st32((c.r[16].w[0] + 8312u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8268u));
    st32((c.r[16].w[0] + 8276u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8308u));
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9DD8u); st32((c.r[16].w[0] + 8316u), c.f[0]);  if (depth < kMaxDepth) unit_0032(c, 117u, depth + 1u); else { c.pc = 0x001C97E0u; return; } if (c.pc != 0x001C9DD8u) [[unlikely]] return; }
L_001C9DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9DE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 55u, depth + 1u); else { c.pc = 0x001DC4B0u; return; } if (c.pc != 0x001C9DE0u) [[unlikely]] return; }
L_001C9DE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9DE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 171u, depth + 1u); else { c.pc = 0x001DBCC0u; return; } if (c.pc != 0x001C9DE8u) [[unlikely]] return; }
L_001C9DE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9DF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 373u, depth + 1u); else { c.pc = 0x001E3AE0u; return; } if (c.pc != 0x001C9DF0u) [[unlikely]] return; }
L_001C9DF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9DF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 352u, depth + 1u); else { c.pc = 0x001BB820u; return; } if (c.pc != 0x001C9DF8u) [[unlikely]] return; }
L_001C9DF8:
    set32(c.r[3], ld32((c.r[16].w[0] + 1608u)));
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 124u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001C9E18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9E14u);  if (depth < kMaxDepth) unit_0039(c, 176u, depth + 1u); else { c.pc = 0x001E6BB0u; return; } if (c.pc != 0x001C9E14u) [[unlikely]] return; }
L_001C9E14:
    c.budget -= 1;
L_001C9E18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9E20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 466u, depth + 1u); else { c.pc = 0x001C5810u; return; } if (c.pc != 0x001C9E20u) [[unlikely]] return; }
L_001C9E20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9E28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 459u, depth + 1u); else { c.pc = 0x001C57C0u; return; } if (c.pc != 0x001C9E28u) [[unlikely]] return; }
L_001C9E28:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001C9E30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001C9E40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 20u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001C9EA8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 21u)));
    c.r[3].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] << 56;  if (t) { goto L_001C9EA0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8661u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001C9EA0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 27u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001C9EA0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C9EA8; } }
    c.budget -= 1;
L_001C9EA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CA0B8; } }
L_001C9EA8:
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 39u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CA098; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C9F30; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 321u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001C9F30; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 513u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C9EF8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 515u));
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 38u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 38u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001C9F10; } }
L_001C9EF8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 515u));
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 274u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_001C9F10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9F18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x001C9F18u) [[unlikely]] return; }
L_001C9F18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9F20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 42u, depth + 1u); else { c.pc = 0x001C8A60u; return; } if (c.pc != 0x001C9F20u) [[unlikely]] return; }
L_001C9F20:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CA0B8; } }
L_001C9F30:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 76u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001C9F68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9F48u);  if (depth < kMaxDepth) unit_0071(c, 51u, depth + 1u); else { c.pc = 0x002C4CA0u; return; } if (c.pc != 0x001C9F48u) [[unlikely]] return; }
L_001C9F48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_001C9F80; } }
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 747u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 877u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001C9F80; } }
L_001C9F68:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 747u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 877u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_001C9F80:
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 41u)));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[8], 0u - 1u);  if (t) { goto L_001C9FA0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 42u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C9FD0; } }
    c.budget -= 1;
L_001C9FA0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001C9FC0; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001C9FE8; } }
L_001C9FC0:
    c.r[8].d[0] = c.r[4].d[0] << 56;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);  if (t) { goto L_001C9FE8; } }
    c.budget -= 1;
L_001C9FD0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001C9FE8; } }
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_001C9FE8:
    c.r[1].d[0] = c.r[8].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001CA0B8; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[8].w[0] + c.r[5].w[0]);  if (t) { goto L_001CA0B8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CA040; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_001CA028; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 42u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001CA028; } }
    st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001CA028:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA034u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x001CA034u) [[unlikely]] return; }
L_001CA034:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CA0B8; } }
    c.budget -= 1;
L_001CA040:
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CA0B8; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_001CA0B8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 42u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CA0B8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8661u)));
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 72u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CA0B8; } }
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[5].w[0] + 84u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA090u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_004E(c, 174u, depth + 1u); else { c.pc = 0x0023A5C0u; return; } if (c.pc != 0x001CA090u) [[unlikely]] return; }
L_001CA090:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CA0B8; } }
L_001CA098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA0A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x001CA0A0u) [[unlikely]] return; }
L_001CA0A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA0A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 42u, depth + 1u); else { c.pc = 0x001C8A60u; return; } if (c.pc != 0x001CA0A8u) [[unlikely]] return; }
L_001CA0A8:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001CA0B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CA0D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 275u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CA230; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA0F0u);  if (depth < kMaxDepth) unit_0039(c, 148u, depth + 1u); else { c.pc = 0x001E5E00u; return; } if (c.pc != 0x001CA0F0u) [[unlikely]] return; }
L_001CA0F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA0F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 175u, depth + 1u); else { c.pc = 0x001CA240u; return; } if (c.pc != 0x001CA0F8u) [[unlikely]] return; }
L_001CA0F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA100u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 304u, depth + 1u); else { c.pc = 0x001CF6C0u; return; } if (c.pc != 0x001CA100u) [[unlikely]] return; }
L_001CA100:
    set32(c.r[2], ld32((c.r[16].w[0] + 1612u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA110u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CA110u) [[unlikely]] return; }
L_001CA110:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 821u)));
    c.r[1].d[0] = c.r[2].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] << 2);  if (t) { goto L_001CA140; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 29744u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA138u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CA138u) [[unlikely]] return; }
L_001CA138:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CA158; } }
L_001CA140:
    set32(c.r[3], ld32((c.r[16].w[0] + 1620u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] - 192u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA158u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CA158u) [[unlikely]] return; }
L_001CA158:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 820u)));
    set32(c.r[2], 0u - 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[1].d[0] = c.r[3].sd[0] < 48ll ? 1ull : 0ull;  if (t) { goto L_001CA1A8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);  if (t) { goto L_001CA190; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 29936u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA188u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CA188u) [[unlikely]] return; }
L_001CA188:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CA1A8; } }
L_001CA190:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[16].w[0] + 1616u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] - 192u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA1A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CA1A8u) [[unlikely]] return; }
L_001CA1A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 812u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA200; } }
    st8((c.r[16].w[0] + 812u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 821u)));
    c.r[1].d[0] = c.r[2].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] << 2);  if (t) { goto L_001CA1E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[2], c.r[2].w[0] - 29744u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA1E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CA1E0u) [[unlikely]] return; }
L_001CA1E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CA200; } }
L_001CA1E8:
    set32(c.r[3], ld32((c.r[16].w[0] + 1620u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] - 192u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA200u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CA200u) [[unlikely]] return; }
L_001CA200:
    set32(c.r[2], ld32((c.r[16].w[0] + 1612u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA210u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CA210u) [[unlikely]] return; }
L_001CA210:
    set32(c.r[2], ld32((c.r[16].w[0] + 1608u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 125u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CA228; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA228u);  if (depth < kMaxDepth) unit_0039(c, 152u, depth + 1u); else { c.pc = 0x001E6520u; return; } if (c.pc != 0x001CA228u) [[unlikely]] return; }
L_001CA228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA230u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 268u, depth + 1u); else { c.pc = 0x001EEDA0u; return; } if (c.pc != 0x001CA230u) [[unlikely]] return; }
L_001CA230:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CA240:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA254u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 123u, depth + 1u); else { c.pc = 0x001E5840u; return; } if (c.pc != 0x001CA254u) [[unlikely]] return; }
L_001CA254:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 284u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA338; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 285u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CA2D0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CA298; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[4].d[0] & 8192ull;  if (t) { goto L_001CA298; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA2D0; } }
    c.budget -= 1;
L_001CA298:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CA2C0; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA2B4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x001CA2B4u) [[unlikely]] return; }
L_001CA2B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CA2D0; } }
    c.budget -= 1;
L_001CA2C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA2D0u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x001CA2D0u) [[unlikely]] return; }
L_001CA2D0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 570u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CA378; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 284u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CA378; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CA320; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA314u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 153u, depth + 1u); else { c.pc = 0x0023A1C0u; return; } if (c.pc != 0x001CA314u) [[unlikely]] return; }
L_001CA314:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CA378; } }
    c.budget -= 1;
L_001CA320:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA330u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 153u, depth + 1u); else { c.pc = 0x0023A1C0u; return; } if (c.pc != 0x001CA330u) [[unlikely]] return; }
L_001CA330:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CA378; } }
L_001CA338:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 285u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA378; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CA368; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA360u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 153u, depth + 1u); else { c.pc = 0x0023A1C0u; return; } if (c.pc != 0x001CA360u) [[unlikely]] return; }
L_001CA360:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CA378; } }
L_001CA368:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA378u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 153u, depth + 1u); else { c.pc = 0x0023A1C0u; return; } if (c.pc != 0x001CA378u) [[unlikely]] return; }
L_001CA378:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 284u)));
    st8((c.r[16].w[0] + 285u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 850u));
    c.r[2].d[0] = c.r[3].d[0] & 15ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 240ull;  if (t) { goto L_001CA398; } }
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_001CA398:
    c.r[2].d[0] = c.r[3].d[0] & 240ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 15ull;  if (t) { goto L_001CA3A8; } }
    set32(c.r[3], c.r[2].w[0] + 16u);
    c.budget -= 1;
L_001CA3A8:
    st8((c.r[16].w[0] + 850u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 752u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA3C0; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 752u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001CA3C0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 788u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA3D8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 788u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001CA3D8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 792u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA408; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 792u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CA408; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    set32(c.r[2], 0u - 4u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001CA408:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 791u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA420; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 791u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001CA420:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 522u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA438; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 522u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001CA440; } }
L_001CA438:
    st16((c.r[16].w[0] + 520u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_001CA440:
    c.f[1] = ld32((c.r[16].w[0] + 1072u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CA468; } }
    c.f[0] = ld32((c.r[16].w[0] + 8292u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 1072u), c.f[0]);
    c.budget -= 4;
L_001CA468:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 830u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA498; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 830u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CA498; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 832u)));
    st16((c.r[16].w[0] + 834u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001CA498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA4A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 260u, depth + 1u); else { c.pc = 0x003C6160u; return; } if (c.pc != 0x001CA4A0u) [[unlikely]] return; }
L_001CA4A0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 877u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA6B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 797u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CA6B8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CA6B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CA6B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA4E0u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003B(c, 184u, depth + 1u); else { c.pc = 0x001EDF30u; return; } if (c.pc != 0x001CA4E0u) [[unlikely]] return; }
L_001CA4E0:
    st8((c.r[16].w[0] + 811u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 811u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA6B8; } }
    c.f[1] = ld32((c.r[29].w[0] + 44u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CA6B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA528; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1940u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CA6B8; } }
L_001CA528:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 24576ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001CA540; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 797u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001CA550; } }
L_001CA540:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 797u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 1088u), c.r[2].w[0]);
    c.budget -= 4;
L_001CA550:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 3ull;  if (t) { goto L_001CA580; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA580; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1612u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA578u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CA578u) [[unlikely]] return; }
L_001CA578:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CA618; } }
L_001CA580:
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CA618; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 30u);  if (t) { goto L_001CA5F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st8((c.r[16].w[0] + 752u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = 0u;
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CA5D8; } }
    st32((c.r[16].w[0] + 52u), c.f[1]);
    c.budget -= 2;
L_001CA5D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA5E4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003A(c, 86u, depth + 1u); else { c.pc = 0x001EA280u; return; } if (c.pc != 0x001CA5E4u) [[unlikely]] return; }
L_001CA5E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CA608; } }
    c.budget -= 1;
L_001CA5F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA5FCu); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_003A(c, 78u, depth + 1u); else { c.pc = 0x001EA120u; return; } if (c.pc != 0x001CA5FCu) [[unlikely]] return; }
L_001CA5FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA604u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 70u, depth + 1u); else { c.pc = 0x001EA000u; return; } if (c.pc != 0x001CA604u) [[unlikely]] return; }
L_001CA604:
    c.budget -= 1;
L_001CA608:
    set32(c.r[2], ld32((c.r[16].w[0] + 1612u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA618u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CA618u) [[unlikely]] return; }
L_001CA618:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CA640; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 792u));
    c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_001CA640; } }
    st8((c.r[16].w[0] + 792u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001CA640:
    st8((c.r[16].w[0] + 775u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 874u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 875u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 798u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA660u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 67u, depth + 1u); else { c.pc = 0x001E9BA0u; return; } if (c.pc != 0x001CA660u) [[unlikely]] return; }
L_001CA660:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CA6B8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CA6B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8661u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 72u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_001CA6A0; } }
    st8((c.r[3].w[0] + 84u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001CA6A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CA6B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA6B8u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_004E(c, 174u, depth + 1u); else { c.pc = 0x0023A5C0u; return; } if (c.pc != 0x001CA6B8u) [[unlikely]] return; }
L_001CA6B8:
    c.f[2] = ld32((c.r[16].w[0] + 1088u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CA6F8; } }
    c.f[0] = ld32((c.r[16].w[0] + 8292u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1088u), c.f[0]);  if (t) { goto L_001CA6F0; } }
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1088u), c.f[1]);  if (t) { goto L_001CA6F8; } }
L_001CA6F0:
    set32(c.r[2], 0u + 128u);
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001CA6F8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CA770; } }
    c.f[2] = ld32((c.r[16].w[0] + 1216u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CA740; } }
    c.f[0] = ld32((c.r[16].w[0] + 8292u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (t) { goto L_001CA740; } }
    st32((c.r[16].w[0] + 1216u), c.f[1]);
    st8((c.r[16].w[0] + 808u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_001CA740:
    c.f[2] = ld32((c.r[16].w[0] + 1220u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CA770; } }
    c.f[0] = ld32((c.r[16].w[0] + 8292u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1220u), c.f[0]);  if (t) { goto L_001CA770; } }
    st32((c.r[16].w[0] + 1220u), c.f[1]);
    c.budget -= 1;
L_001CA770:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 963u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA788; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 963u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001CA788:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA794u); st8((c.r[16].w[0] + 8688u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_003C(c, 82u, depth + 1u); else { c.pc = 0x001F0930u; return; } if (c.pc != 0x001CA794u) [[unlikely]] return; }
L_001CA794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA79Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 52u, depth + 1u); else { c.pc = 0x003B0670u; return; } if (c.pc != 0x001CA79Cu) [[unlikely]] return; }
L_001CA79C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CA7B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1608u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 100u)));
    st16((c.r[4].w[0] + 834u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 832u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 1608u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 102u)));
    st16((c.r[4].w[0] + 836u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 1608u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 104u)));
    st8((c.r[4].w[0] + 502u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 1608u)));
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    st32((c.r[4].w[0] + 8532u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1608u)));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    st32((c.r[4].w[0] + 8536u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 39u)));
    c.budget -= 23;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CA860; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CA848; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA838; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8685u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA848; } }
    c.budget -= 1;
L_001CA838:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8686u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA860; } }
    c.budget -= 1;
L_001CA848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA850u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 145u, depth + 1u); else { c.pc = 0x001F14B0u; return; } if (c.pc != 0x001CA850u) [[unlikely]] return; }
L_001CA850:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[16].w[0] + 500u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 498u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 496u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001CA860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA868u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 252u, depth + 1u); else { c.pc = 0x003C6020u; return; } if (c.pc != 0x001CA868u) [[unlikely]] return; }
L_001CA868:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8928u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001CA8A8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA88Cu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_00B1(c, 273u, depth + 1u); else { c.pc = 0x003C6490u; return; } if (c.pc != 0x001CA88Cu) [[unlikely]] return; }
L_001CA88C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA89Cu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_00B1(c, 273u, depth + 1u); else { c.pc = 0x003C6490u; return; } if (c.pc != 0x001CA89Cu) [[unlikely]] return; }
L_001CA89C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CA8D8; } }
    c.budget -= 1;
L_001CA8A8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001CA8D8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA8C4u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00B1(c, 273u, depth + 1u); else { c.pc = 0x003C6490u; return; } if (c.pc != 0x001CA8C4u) [[unlikely]] return; }
L_001CA8C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA8D4u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00B1(c, 273u, depth + 1u); else { c.pc = 0x003C6490u; return; } if (c.pc != 0x001CA8D4u) [[unlikely]] return; }
L_001CA8D4:
    c.budget -= 1;
L_001CA8D8:
    set32(c.r[3], ld32((c.r[16].w[0] + 1608u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[6], c.r[6].w[0] - 3552u);
    c.f[0] = ld32((c.r[3].w[0] + 68u));
    st32((c.r[16].w[0] + 256u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 1608u)));
    c.f[0] = ld32((c.r[3].w[0] + 72u));
    st32((c.r[16].w[0] + 260u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8659u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 1600u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8659u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[16].w[0] + 1604u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 30;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CA950:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA96Cu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_003A(c, 67u, depth + 1u); else { c.pc = 0x001E9BA0u; return; } if (c.pc != 0x001CA96Cu) [[unlikely]] return; }
L_001CA96C:
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 798u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CA998; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA990u);  if (depth < kMaxDepth) unit_0071(c, 20u, depth + 1u); else { c.pc = 0x002C4480u; return; } if (c.pc != 0x001CA990u) [[unlikely]] return; }
L_001CA990:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CAA30; } }
L_001CA998:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 39u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CAA30; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CA9D0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 321u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CA9D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8685u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CAA30; } }
    c.budget -= 1;
L_001CA9D0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 810u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001CAA08; } }
    st8((c.r[16].w[0] + 810u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA9E8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));  if (depth < kMaxDepth) unit_004D(c, 275u, depth + 1u); else { c.pc = 0x00237990u; return; } if (c.pc != 0x001CA9E8u) [[unlikely]] return; }
L_001CA9E8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA9F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 211u, depth + 1u); else { c.pc = 0x001CAB20u; return; } if (c.pc != 0x001CA9F4u) [[unlikely]] return; }
L_001CA9F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAA00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 228u, depth + 1u); else { c.pc = 0x00137440u; return; } if (c.pc != 0x001CAA00u) [[unlikely]] return; }
L_001CAA00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CAA30; } }
L_001CAA08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAA10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 219u, depth + 1u); else { c.pc = 0x001CADF0u; return; } if (c.pc != 0x001CAA10u) [[unlikely]] return; }
L_001CAA10:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 34u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001CAA30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAA2Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 228u, depth + 1u); else { c.pc = 0x00137440u; return; } if (c.pc != 0x001CAA2Cu) [[unlikely]] return; }
L_001CAA2C:
    c.budget -= 1;
L_001CAA30:
    st8((c.r[16].w[0] + 870u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 871u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 877u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 866u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 868u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001CAAB0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 34u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x438C0000u);  if (t) { goto L_001CAA90; } }
    set32(c.r[3], 0u + 40u);
    c.f[0] = c.r[4].w[0];
    st32((c.r[16].w[0] + 36u), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001CAAB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.f[0]);  if (t) { goto L_001CAAB0; } }
    c.budget -= 1;
L_001CAA90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[20] = ld32((c.r[16].w[0] + 36u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAAA0u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x001CAAA0u) [[unlikely]] return; }
L_001CAAA0:
    c.f[1] = fp::add(c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    st32((c.r[16].w[0] + 36u), c.f[1]);
    c.budget -= 4;
L_001CAAB0:
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 1016u), 0u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 876u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_001CAAF8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001CAAE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CAB08; } }
L_001CAAE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0600000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_001CAB08; } }
    c.budget -= 1;
L_001CAAF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAB04u); set32(c.r[5], c.r[16].w[0] + 1200u);  if (depth < kMaxDepth) unit_003B(c, 184u, depth + 1u); else { c.pc = 0x001EDF30u; return; } if (c.pc != 0x001CAB04u) [[unlikely]] return; }
L_001CAB04:
    st32((c.r[16].w[0] + 1204u), 0u);
    c.budget -= 1;
L_001CAB08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CAB20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 67u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CAB60; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8661u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAB48u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0032(c, 218u, depth + 1u); else { c.pc = 0x001CAD30u; return; } if (c.pc != 0x001CAB48u) [[unlikely]] return; }
L_001CAB48:
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8661u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAB58u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0032(c, 218u, depth + 1u); else { c.pc = 0x001CAD30u; return; } if (c.pc != 0x001CAB58u) [[unlikely]] return; }
L_001CAB58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), c.f[0]);  if (t) { goto L_001CABC8; } }
L_001CAB60:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8661u)));
    set32(c.r[4], c.r[4].w[0] - 22720u);
    set32(c.r[5], c.r[5].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8661u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.budget -= 26;
L_001CABC8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CABD4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0032(c, 216u, depth + 1u); else { c.pc = 0x001CAC10u; return; } if (c.pc != 0x001CABD4u) [[unlikely]] return; }
L_001CABD4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[3] = ld32((c.r[2].w[0] + 640u));
    c.f[1] = ld32((c.r[2].w[0] + 648u));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CABF4u); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001CABF4u) [[unlikely]] return; }
L_001CABF4:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CAC10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CAC68; } }
    set32(c.r[2], 0u + 66u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] - 68u);  if (t) { goto L_001CAC68; } }
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001CAC68; } }
    set32(c.r[2], 0u + 72u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 74u);  if (t) { goto L_001CAC68; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CAC68; } }
    set32(c.r[2], 0u + 76u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CAC80; } }
    c.budget -= 1;
L_001CAC68:
    set32(c.r[2], 0u + 8u);
    st8((c.r[16].w[0] + 876u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_001CACC0; } }
    c.budget -= 1;
L_001CAC80:
    set32(c.r[2], 0u + 67u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CACA0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 876u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001CACC0; } }
L_001CACA0:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; st8((c.r[16].w[0] + 876u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001CACB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_001CACC0; } }
L_001CACB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 2;
L_001CACC0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CACCCu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (depth < kMaxDepth) unit_004F(c, 68u, depth + 1u); else { c.pc = 0x0023D1E0u; return; } if (c.pc != 0x001CACCCu) [[unlikely]] return; }
L_001CACCC:
    c.r[4].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 7u);  if (t) { goto L_001CACE8; } }
    st8((c.r[16].w[0] + 876u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 36u), 0u);
    c.budget -= 2;
L_001CACE8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 34u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 13u);  if (t) { goto L_001CAD18; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001CAD10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CAD18; } }
    c.budget -= 1;
L_001CAD10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 2;
L_001CAD18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CAD30:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u + 21u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 27u);  if (t) { goto L_001CADC8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CADA8; } }
    set32(c.r[2], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 15u);  if (t) { goto L_001CAD88; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CAD68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CADC8; } }
L_001CAD68:
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 1296u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[2].w[0]));  if (t) { goto L_001CADE8; } }
L_001CAD88:
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 1280u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[2].w[0]));  if (t) { goto L_001CADE8; } }
L_001CADA8:
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 1264u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[2].w[0]));  if (t) { goto L_001CADE8; } }
L_001CADC8:
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 1248u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 8;
L_001CADE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CADF0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[5], 0u + 32767u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    set32(c.r[7], c.r[7].w[0] - 27856u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 20;
L_001CAE40:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CAE98; } }
    c.r[4].d[0] = ld8((c.r[20].w[0] + 515u));
    c.r[2].d[0] = ld8((c.r[7].w[0] + 515u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001CAE98; } }
    c.r[2].d[0] = ld8((c.r[7].w[0] + 8658u));
    c.r[1].d[0] = c.r[2].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CAE98; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[7].d[0];  if (t) { goto L_001CAE98; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 498u)));
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CAE98; } }
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
L_001CAE98:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CAE40u | kUnwind; return; } goto L_001CAE40; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u + 34u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CB138; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001CAFA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAECCu);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001CAECCu) [[unlikely]] return; }
L_001CAECC:
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[2].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 5;
L_001CAEE0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[17].w[0] + 1u);  if (t) { goto L_001CAF10; } }
    c.r[17].d[0] = c.r[2].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.r[2].d[0] = c.r[17].d[0] & 7ull;
    c.r[17].d[0] = c.r[2].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 6;
L_001CAF10:
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 1232u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[19].w[0] + 32u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAF50u); st32((c.r[20].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_0032(c, 235u, depth + 1u); else { c.pc = 0x001CB250u; return; } if (c.pc != 0x001CAF50u) [[unlikely]] return; }
L_001CAF50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001CAF68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAF60u);  if (depth < kMaxDepth) unit_0032(c, 236u, depth + 1u); else { c.pc = 0x001CB2C0u; return; } if (c.pc != 0x001CAF60u) [[unlikely]] return; }
L_001CAF60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CAF98; } }
L_001CAF68:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] << 56;
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.r[2].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[17].d[0] & 7ull;
    c.r[17].d[0] = c.r[3].d[0] << 56;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CAEE0u | kUnwind; return; } goto L_001CAEE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001CAFA8; } }
    c.budget -= 1;
L_001CAF98:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.f[21] = ld32((c.r[19].w[0] + 32u));
    c.f[20] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
L_001CAFA8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001CB058; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAFB8u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001CAFB8u) [[unlikely]] return; }
L_001CAFB8:
    c.r[3].d[0] = c.r[2].d[0] & 7ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001CAFF0; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = c.r[3].d[0] & 7ull;
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 7;
L_001CAFF0:
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[6], c.r[2].w[0] << 3);
    set32(c.r[5], ld32((c.r[28].w[0] - 30368u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 1232u);
    set32(c.r[4], c.r[2].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[2], c.r[2].w[0] - 1228u);
    c.f[2] = ld32((c.r[5].w[0] + 640u));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[20].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.f[1] = ld32((c.r[2].w[0] + 648u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 40u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.f[21] = ld32((c.r[2].w[0] + 640u));
    c.f[20] = ld32((c.r[2].w[0] + 648u));
    c.budget -= 26;
L_001CB058:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43F40000u);
    c.f[2] = ld32((c.r[20].w[0] + 32u));
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x44B50000u);  if (t) { goto L_001CB0A8; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CB0A8; } }
    c.f[2] = ld32((c.r[20].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CB0A8; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CB0B8; } }
    c.budget -= 1;
L_001CB0A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44770000u);
    st32((c.r[20].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 4;
L_001CB0B8:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 8658u));
    set32(c.r[2], 0u + 67u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CB0F8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8661u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB0D4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0032(c, 218u, depth + 1u); else { c.pc = 0x001CAD30u; return; } if (c.pc != 0x001CB0D4u) [[unlikely]] return; }
L_001CB0D4:
    st32((c.r[20].w[0] + 32u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8661u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB0E4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0032(c, 218u, depth + 1u); else { c.pc = 0x001CAD30u; return; } if (c.pc != 0x001CB0E4u) [[unlikely]] return; }
L_001CB0E4:
    st32((c.r[20].w[0] + 40u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.f[21] = ld32((c.r[2].w[0] + 640u));
    c.f[20] = ld32((c.r[2].w[0] + 648u));
    c.budget -= 5;
L_001CB0F8:
    c.f[1] = ld32((c.r[20].w[0] + 32u));
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    c.f[21] = fp::sub(c.f[21], c.f[1]);
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.f[12] = c.f[21];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB114u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001CB114u) [[unlikely]] return; }
L_001CB114:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB124u); st32((c.r[20].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0032(c, 239u, depth + 1u); else { c.pc = 0x001CB3D0u; return; } if (c.pc != 0x001CB124u) [[unlikely]] return; }
L_001CB124:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB130u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0032(c, 216u, depth + 1u); else { c.pc = 0x001CAC10u; return; } if (c.pc != 0x001CB130u) [[unlikely]] return; }
L_001CB130:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB218; } }
L_001CB138:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x44FA0000u);  if (t) { goto L_001CB1C8; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.f[22] = c.r[2].w[0];
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] - 1168u);
    c.budget -= 4;
L_001CB150:
    c.f[24] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[19].w[0] + 32u));
    c.f[23] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[21] = fp::sub(c.f[1], c.f[24]);
    c.f[20] = fp::sub(c.f[0], c.f[23]);
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB174u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001CB174u) [[unlikely]] return; }
L_001CB174:
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CB190; } }
    st32((c.r[20].w[0] + 32u), c.f[24]);
    c.f[22] = c.f[0];
    st32((c.r[20].w[0] + 40u), c.f[23]);
    c.budget -= 4;
L_001CB190:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CB150u | kUnwind; return; } goto L_001CB150; } }
    c.f[3] = ld32((c.r[19].w[0] + 32u));
    c.f[2] = ld32((c.r[20].w[0] + 32u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB1BCu); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001CB1BCu) [[unlikely]] return; }
L_001CB1BC:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_001CB208; } }
L_001CB1C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44720000u);
    st32((c.r[20].w[0] + 32u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44390000u);
    st32((c.r[20].w[0] + 40u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[1].w[0] - 29392u));
    c.f[3] = ld32((c.r[20].w[0] + 32u));
    c.f[1] = ld32((c.r[20].w[0] + 40u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[0] = ld32((c.r[1].w[0] - 29384u));
    c.f[12] = fp::sub(c.f[2], c.f[3]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB1FCu); c.f[13] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001CB1FCu) [[unlikely]] return; }
L_001CB1FC:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[20].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 3;
L_001CB208:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43660000u);
    st32((c.r[20].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[3], 0u + 3u);
    st8((c.r[20].w[0] + 876u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001CB218:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001CB250:
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43F40000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x44B50000u);  if (t) { goto L_001CB2A0; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CB2A0; } }
    c.f[2] = ld32((c.r[4].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CB2A0; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001CB2A8; } }
    c.budget -= 1;
L_001CB2A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001CB2B0; } }
L_001CB2A8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001CB2B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CB2C0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[19], c.r[19].w[0] - 27856u);
    set32(c.r[17], c.r[29].w[0] + 100u);
    set32(c.r[16], c.r[29].w[0] + 116u);
    c.budget -= 14;
L_001CB2F8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CB398; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 515u));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 515u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CB398; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 8658u));
    c.r[1].d[0] = c.r[2].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CB398; } }
    c.f[3] = ld32((c.r[20].w[0] + 32u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[2] = ld32((c.r[20].w[0] + 36u));
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.f[1] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = ld32((c.r[20].w[0] + 44u));
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[19].w[0] + 32u));
    c.f[2] = ld32((c.r[19].w[0] + 36u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[19].w[0] + 44u));
    st32((c.r[5].w[0]), c.f[3]);
    st32((c.r[5].w[0] + 4u), c.f[2]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    st32((c.r[5].w[0] + 12u), c.f[0]);
    st32((c.r[17].w[0]), 0u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB378u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001CB378u) [[unlikely]] return; }
L_001CB378:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001CB398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB3B0; } }
L_001CB398:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CB2F8u | kUnwind; return; } goto L_001CB2F8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001CB3B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001CB3D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 33u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 32u);  if (t) { goto L_001CBEE8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001CBD78; } }
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 21u);  if (t) { goto L_001CB9B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001CB930; } }
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 14u);  if (t) { goto L_001CB738; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001CB640; } }
    set32(c.r[3], 0u + 26u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_001CB560; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001CB448; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CBFA0; } }
    c.budget -= 1;
L_001CB448:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x445B0000u);
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[12]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44780000u);  if (t) { goto L_001CB4D8; } }
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[13]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CB4D8; } }
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x449B0000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[14]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44B50000u);  if (t) { goto L_001CB4D8; } }
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CB4D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44D40000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[15] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB4CCu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0032(c, 268u, depth + 1u); else { c.pc = 0x001CBFC0u; return; } if (c.pc != 0x001CB4CCu) [[unlikely]] return; }
L_001CB4CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CBFA0; } }
    c.budget -= 1;
L_001CB4D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44260000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x444E0000u);  if (t) { goto L_001CBFA0; } }
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[13]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CBFA0; } }
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44930000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[14]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44B50000u);  if (t) { goto L_001CBFA0; } }
    c.r[3].d[0] = c.r[3].d[0] | 57344ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CBFA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44D40000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[15] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB554u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0032(c, 268u, depth + 1u); else { c.pc = 0x001CBFC0u; return; } if (c.pc != 0x001CB554u) [[unlikely]] return; }
L_001CB554:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CBFA0; } }
    c.budget -= 1;
L_001CB560:
    set32(c.r[3], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CBFA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44750000u);
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.f[2] = c.r[2].w[0];
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44630000u);
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB5A0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001CB5A0u) [[unlikely]] return; }
L_001CB5A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x438C0000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CBFA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44750000u);
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.f[2] = c.r[2].w[0];
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44630000u);
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB5E0u); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001CB5E0u) [[unlikely]] return; }
L_001CB5E0:
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB5ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001CB5ECu) [[unlikely]] return; }
L_001CB5EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x438C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44750000u);
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB61Cu); st32((c.r[16].w[0] + 32u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001CB61Cu) [[unlikely]] return; }
L_001CB61C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x438C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44630000u);
    c.f[2] = c.r[4].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), c.f[0]);  if (t) { goto L_001CBFA0; } }
L_001CB640:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x442F0000u);
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x443E0000u);  if (t) { goto L_001CB6B8; } }
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[13]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CB6B8; } }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44430000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[14]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44520000u);  if (t) { goto L_001CB6B8; } }
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[15]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001CB6B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB6B0u);  if (depth < kMaxDepth) unit_0032(c, 268u, depth + 1u); else { c.pc = 0x001CBFC0u; return; } if (c.pc != 0x001CB6B0u) [[unlikely]] return; }
L_001CB6B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CBFA0; } }
L_001CB6B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44630000u);
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44720000u);  if (t) { goto L_001CBFA0; } }
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[13]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CBFA0; } }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x441D0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[14]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x442C0000u);  if (t) { goto L_001CBFA0; } }
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[15]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001CBFA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB72Cu);  if (depth < kMaxDepth) unit_0032(c, 268u, depth + 1u); else { c.pc = 0x001CBFC0u; return; } if (c.pc != 0x001CB72Cu) [[unlikely]] return; }
L_001CB72C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CBFA0; } }
    c.budget -= 1;
L_001CB738:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44870000u);
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.r[3].d[0] = c.r[3].d[0] | 24576ull;
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[12]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44900000u);  if (t) { goto L_001CB7B8; } }
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[13]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CB7B8; } }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x442E0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[14]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44410000u);  if (t) { goto L_001CB7B8; } }
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[15]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001CB7B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB7B0u);  if (depth < kMaxDepth) unit_0032(c, 268u, depth + 1u); else { c.pc = 0x001CBFC0u; return; } if (c.pc != 0x001CB7B0u) [[unlikely]] return; }
L_001CB7B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CBFA0; } }
L_001CB7B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x443C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44500000u);  if (t) { goto L_001CB838; } }
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[13]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CB838; } }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44520000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[14]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44660000u);  if (t) { goto L_001CB838; } }
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[15]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001CB838; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB82Cu);  if (depth < kMaxDepth) unit_0032(c, 268u, depth + 1u); else { c.pc = 0x001CBFC0u; return; } if (c.pc != 0x001CB82Cu) [[unlikely]] return; }
L_001CB82C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CBFA0; } }
    c.budget -= 1;
L_001CB838:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44420000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44810000u);  if (t) { goto L_001CB8B0; } }
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[13]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CB8B0; } }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44280000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[14]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x443C0000u);  if (t) { goto L_001CB8B0; } }
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[15]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001CB8B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB8ACu);  if (depth < kMaxDepth) unit_0032(c, 268u, depth + 1u); else { c.pc = 0x001CBFC0u; return; } if (c.pc != 0x001CB8ACu) [[unlikely]] return; }
L_001CB8AC:
    c.budget -= 1;
L_001CB8B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44460000u);
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x447F0000u);  if (t) { goto L_001CBFA0; } }
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[13]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CBFA0; } }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43EF0000u);
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[14]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44520000u);  if (t) { goto L_001CBFA0; } }
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[15]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001CBFA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB924u);  if (depth < kMaxDepth) unit_0032(c, 268u, depth + 1u); else { c.pc = 0x001CBFC0u; return; } if (c.pc != 0x001CB924u) [[unlikely]] return; }
L_001CB924:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CBFA0; } }
    c.budget -= 1;
L_001CB930:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x447E0000u);
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44A30000u);  if (t) { goto L_001CBFA0; } }
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[13]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CBFA0; } }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44950000u);
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[14]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44CA0000u);  if (t) { goto L_001CBFA0; } }
    c.r[3].d[0] = c.r[3].d[0] | 57344ull;
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[15]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001CBFA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB9A8u);  if (depth < kMaxDepth) unit_0032(c, 268u, depth + 1u); else { c.pc = 0x001CBFC0u; return; } if (c.pc != 0x001CB9A8u) [[unlikely]] return; }
L_001CB9A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CBFA0; } }
L_001CB9B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x442D0000u);
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[12]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44410000u);  if (t) { goto L_001CBA30; } }
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[13]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CBA30; } }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44080000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[14]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x441C0000u);  if (t) { goto L_001CBA30; } }
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[15]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001CBA30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBA28u);  if (depth < kMaxDepth) unit_0032(c, 268u, depth + 1u); else { c.pc = 0x001CBFC0u; return; } if (c.pc != 0x001CBA28u) [[unlikely]] return; }
L_001CBA28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CBFA0; } }
L_001CBA30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44530000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44930000u);  if (t) { goto L_001CBAA8; } }
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[13]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CBAA8; } }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x445A0000u);
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[14]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x447A0000u);  if (t) { goto L_001CBAA8; } }
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[15]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001CBAA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBAA0u);  if (depth < kMaxDepth) unit_0032(c, 268u, depth + 1u); else { c.pc = 0x001CBFC0u; return; } if (c.pc != 0x001CBAA0u) [[unlikely]] return; }
L_001CBAA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CBFA0; } }
L_001CBAA8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44A00000u);
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[12]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44DA0000u);  if (t) { goto L_001CBB20; } }
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[13]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CBB20; } }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x440C0000u);
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[14]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x447C0000u);  if (t) { goto L_001CBB20; } }
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[15]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001CBB20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBB14u);  if (depth < kMaxDepth) unit_0032(c, 268u, depth + 1u); else { c.pc = 0x001CBFC0u; return; } if (c.pc != 0x001CBB14u) [[unlikely]] return; }
L_001CBB14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CBFA0; } }
    c.budget -= 1;
L_001CBB20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44520000u);
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[12]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44770000u);  if (t) { goto L_001CBB98; } }
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[13]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CBB98; } }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44870000u);
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[14]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44970000u);  if (t) { goto L_001CBB98; } }
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[15]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001CBB98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBB8Cu);  if (depth < kMaxDepth) unit_0032(c, 268u, depth + 1u); else { c.pc = 0x001CBFC0u; return; } if (c.pc != 0x001CBB8Cu) [[unlikely]] return; }
L_001CBB8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CBFA0; } }
    c.budget -= 1;
L_001CBB98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x444F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44670000u);  if (t) { goto L_001CBC18; } }
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[13]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CBC18; } }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44A10000u);
    c.r[3].d[0] = c.r[3].d[0] | 57344ull;
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[14]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44AD0000u);  if (t) { goto L_001CBC18; } }
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[15]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001CBC18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBC0Cu);  if (depth < kMaxDepth) unit_0032(c, 268u, depth + 1u); else { c.pc = 0x001CBFC0u; return; } if (c.pc != 0x001CBC0Cu) [[unlikely]] return; }
L_001CBC0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CBFA0; } }
    c.budget -= 1;
L_001CBC18:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44820000u);
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[12]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x448C0000u);  if (t) { goto L_001CBC88; } }
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[13]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CBC88; } }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x449E0000u);
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[14]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44AA0000u);  if (t) { goto L_001CBC88; } }
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[15]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001CBC88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBC80u);  if (depth < kMaxDepth) unit_0032(c, 268u, depth + 1u); else { c.pc = 0x001CBFC0u; return; } if (c.pc != 0x001CBC80u) [[unlikely]] return; }
L_001CBC80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CBFA0; } }
L_001CBC88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[12]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44180000u);  if (t) { goto L_001CBD00; } }
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[13]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CBD00; } }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44630000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[14]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44A00000u);  if (t) { goto L_001CBD00; } }
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[15]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001CBD00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBCF4u);  if (depth < kMaxDepth) unit_0032(c, 268u, depth + 1u); else { c.pc = 0x001CBFC0u; return; } if (c.pc != 0x001CBCF4u) [[unlikely]] return; }
L_001CBCF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CBFA0; } }
    c.budget -= 1;
L_001CBD00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44830000u);
    c.r[3].d[0] = c.r[3].d[0] | 57344ull;
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44AB0000u);  if (t) { goto L_001CBFA0; } }
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[13]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CBFA0; } }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[14]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x440F0000u);  if (t) { goto L_001CBFA0; } }
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[15]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001CBFA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBD6Cu);  if (depth < kMaxDepth) unit_0032(c, 268u, depth + 1u); else { c.pc = 0x001CBFC0u; return; } if (c.pc != 0x001CBD6Cu) [[unlikely]] return; }
L_001CBD6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CBFA0; } }
    c.budget -= 1;
L_001CBD78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43950000u);
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44400000u);  if (t) { goto L_001CBDF0; } }
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[13]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CBDF0; } }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44840000u);
    c.r[3].d[0] = c.r[3].d[0] | 57344ull;
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[14]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44960000u);  if (t) { goto L_001CBDF0; } }
    c.r[3].d[0] = c.r[3].d[0] | 24576ull;
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[15]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001CBDF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBDE8u);  if (depth < kMaxDepth) unit_0032(c, 268u, depth + 1u); else { c.pc = 0x001CBFC0u; return; } if (c.pc != 0x001CBDE8u) [[unlikely]] return; }
L_001CBDE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CBFA0; } }
L_001CBDF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x446B0000u);
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44A70000u);  if (t) { goto L_001CBE68; } }
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[13]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CBE68; } }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44020000u);
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[14]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x449C0000u);  if (t) { goto L_001CBE68; } }
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[15]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001CBE68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBE60u);  if (depth < kMaxDepth) unit_0032(c, 268u, depth + 1u); else { c.pc = 0x001CBFC0u; return; } if (c.pc != 0x001CBE60u) [[unlikely]] return; }
L_001CBE60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CBFA0; } }
L_001CBE68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44950000u);
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[12] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44A30000u);  if (t) { goto L_001CBFA0; } }
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[13]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CBFA0; } }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44880000u);
    c.r[3].d[0] = c.r[3].d[0] | 40960ull;
    c.f[14] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[14]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44C50000u);  if (t) { goto L_001CBFA0; } }
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[15] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[15]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001CBFA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBEDCu);  if (depth < kMaxDepth) unit_0032(c, 268u, depth + 1u); else { c.pc = 0x001CBFC0u; return; } if (c.pc != 0x001CBEDCu) [[unlikely]] return; }
L_001CBEDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CBFA0; } }
    c.budget -= 1;
L_001CBEE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBF10u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001CBF10u) [[unlikely]] return; }
L_001CBF10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x433E0000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001CBFA0; } }
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[1] = c.r[2].w[0];
    c.f[12] = fp::sub(c.f[2], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBF48u); c.f[13] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001CBF48u) [[unlikely]] return; }
L_001CBF48:
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBF54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001CBF54u) [[unlikely]] return; }
L_001CBF54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBF80u); st32((c.r[16].w[0] + 32u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001CBF80u) [[unlikely]] return; }
L_001CBF80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x433E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[2] = c.r[4].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.budget -= 8;
L_001CBFA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CBFC0:
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[13]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = c.f[12];  if (t) { goto L_001CBFD8; } }
    c.f[12] = c.f[13];
    c.f[13] = c.f[0];
    c.budget -= 3;
L_001CBFD8:
    fpu_compare(c, fp::key(c.f[14]) <= fp::key(c.f[15]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = c.f[14];  if (t) { goto L_001CBFF0; } }
    c.f[14] = c.f[15];
    c.f[15] = c.f[0];
    c.budget -= 3;
L_001CBFF0:
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[3] = fp::sub(c.f[1], c.f[12]);
    c.f[2] = fp::sub(c.f[13], c.f[1]);
    c.budget -= 4;
    [[clang::musttail]] return unit_0033(c, 1u, depth);
}

}
