#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0014[4096] = {
    1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 0, 0, 0, 0, 10, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0,
    0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    20, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    34, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0,
    0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0,
    0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 50, 0, 0, 0, 51, 0, 0, 52, 0, 0,
    53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0,
    67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0,
    0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0,
    0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 89,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113,
    0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0,
    123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 132, 0, 0,
    0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0,
    0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 144, 145, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0,
    151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 160, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0,
    172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    192, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0, 0,
    0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 212, 0, 0, 0,
    0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0,
    0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0,
    0, 231, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 237, 0, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 244, 245, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0,
    0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0,
    254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 275, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0,
    0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288,
    0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0,
    0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0,
    298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0,
    0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0,
};

void unit_0014(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00150000;
    case 2u: goto L_00150004;
    case 3u: goto L_00150008;
    case 4u: goto L_0015000C;
    case 5u: goto L_00150010;
    case 6u: goto L_00150014;
    case 7u: goto L_00150018;
    case 8u: goto L_0015001C;
    case 9u: goto L_00150020;
    case 10u: goto L_00150038;
    case 11u: goto L_0015003C;
    case 12u: goto L_00150044;
    case 13u: goto L_0015006C;
    case 14u: goto L_00150078;
    case 15u: goto L_00150088;
    case 16u: goto L_001500A0;
    case 17u: goto L_001500B8;
    case 18u: goto L_001500BC;
    case 19u: goto L_001500D8;
    case 20u: goto L_00150100;
    case 21u: goto L_00150110;
    case 22u: goto L_00150118;
    case 23u: goto L_00150130;
    case 24u: goto L_00150138;
    case 25u: goto L_00150160;
    case 26u: goto L_0015017C;
    case 27u: goto L_00150190;
    case 28u: goto L_001501D0;
    case 29u: goto L_00150200;
    case 30u: goto L_00150238;
    case 31u: goto L_001502A0;
    case 32u: goto L_001502C4;
    case 33u: goto L_001503C0;
    case 34u: goto L_00150400;
    case 35u: goto L_00150404;
    case 36u: goto L_00150438;
    case 37u: goto L_00150474;
    case 38u: goto L_00150488;
    case 39u: goto L_001504AC;
    case 40u: goto L_001504D0;
    case 41u: goto L_001504E4;
    case 42u: goto L_001504F8;
    case 43u: goto L_0015051C;
    case 44u: goto L_00150540;
    case 45u: goto L_00150550;
    case 46u: goto L_00150594;
    case 47u: goto L_00150620;
    case 48u: goto L_00150644;
    case 49u: goto L_00150650;
    case 50u: goto L_00150658;
    case 51u: goto L_00150668;
    case 52u: goto L_00150674;
    case 53u: goto L_00150680;
    case 54u: goto L_0015069C;
    case 55u: goto L_001506A8;
    case 56u: goto L_00150710;
    case 57u: goto L_0015072C;
    case 58u: goto L_00150768;
    case 59u: goto L_00150770;
    case 60u: goto L_0015079C;
    case 61u: goto L_001507F8;
    case 62u: goto L_00150828;
    case 63u: goto L_00150868;
    case 64u: goto L_00150894;
    case 65u: goto L_001508D0;
    case 66u: goto L_001508DC;
    case 67u: goto L_00150900;
    case 68u: goto L_0015090C;
    case 69u: goto L_00150948;
    case 70u: goto L_00150990;
    case 71u: goto L_001509A0;
    case 72u: goto L_001509EC;
    case 73u: goto L_00150A38;
    case 74u: goto L_00150B0C;
    case 75u: goto L_00150B28;
    case 76u: goto L_00150B2C;
    case 77u: goto L_00150B4C;
    case 78u: goto L_00150B6C;
    case 79u: goto L_00150B8C;
    case 80u: goto L_00150BAC;
    case 81u: goto L_00150BCC;
    case 82u: goto L_00150BEC;
    case 83u: goto L_00150C0C;
    case 84u: goto L_00150C2C;
    case 85u: goto L_00150C48;
    case 86u: goto L_00150CBC;
    case 87u: goto L_00150D60;
    case 88u: goto L_00150D68;
    case 89u: goto L_00150D7C;
    case 90u: goto L_00150DD4;
    case 91u: goto L_00150DF0;
    case 92u: goto L_00150E38;
    case 93u: goto L_00150E50;
    case 94u: goto L_00150E64;
    case 95u: goto L_00150F10;
    case 96u: goto L_00150F24;
    case 97u: goto L_00150F38;
    case 98u: goto L_00150F98;
    case 99u: goto L_00150FB0;
    case 100u: goto L_00150FC4;
    case 101u: goto L_00150FE0;
    case 102u: goto L_00150FE8;
    case 103u: goto L_00151030;
    case 104u: goto L_00151040;
    case 105u: goto L_00151080;
    case 106u: goto L_001510C0;
    case 107u: goto L_00151100;
    case 108u: goto L_00151180;
    case 109u: goto L_00151228;
    case 110u: goto L_0015143C;
    case 111u: goto L_00151494;
    case 112u: goto L_00151520;
    case 113u: goto L_0015157C;
    case 114u: goto L_00151590;
    case 115u: goto L_001515A4;
    case 116u: goto L_001515E4;
    case 117u: goto L_00151628;
    case 118u: goto L_0015163C;
    case 119u: goto L_00151644;
    case 120u: goto L_001516C4;
    case 121u: goto L_001516D8;
    case 122u: goto L_001516F8;
    case 123u: goto L_00151700;
    case 124u: goto L_00151714;
    case 125u: goto L_00151730;
    case 126u: goto L_0015178C;
    case 127u: goto L_00151794;
    case 128u: goto L_001517A8;
    case 129u: goto L_001517C4;
    case 130u: goto L_001517D8;
    case 131u: goto L_001517E0;
    case 132u: goto L_001517F4;
    case 133u: goto L_00151810;
    case 134u: goto L_00151824;
    case 135u: goto L_00151838;
    case 136u: goto L_00151840;
    case 137u: goto L_00151864;
    case 138u: goto L_00151878;
    case 139u: goto L_0015188C;
    case 140u: goto L_001518B0;
    case 141u: goto L_001518C0;
    case 142u: goto L_0015192C;
    case 143u: goto L_00151940;
    case 144u: goto L_00151998;
    case 145u: goto L_0015199C;
    case 146u: goto L_001519AC;
    case 147u: goto L_001519C0;
    case 148u: goto L_00151A44;
    case 149u: goto L_00151A58;
    case 150u: goto L_00151A78;
    case 151u: goto L_00151A80;
    case 152u: goto L_00151A94;
    case 153u: goto L_00151AB0;
    case 154u: goto L_00151B0C;
    case 155u: goto L_00151B14;
    case 156u: goto L_00151B28;
    case 157u: goto L_00151B44;
    case 158u: goto L_00151B58;
    case 159u: goto L_00151B60;
    case 160u: goto L_00151B74;
    case 161u: goto L_00151B90;
    case 162u: goto L_00151BA4;
    case 163u: goto L_00151BB8;
    case 164u: goto L_00151BD0;
    case 165u: goto L_00151C04;
    case 166u: goto L_00151C3C;
    case 167u: goto L_00151C60;
    case 168u: goto L_00151D18;
    case 169u: goto L_00151D40;
    case 170u: goto L_00151D48;
    case 171u: goto L_00151D5C;
    case 172u: goto L_00151D80;
    case 173u: goto L_00151D94;
    case 174u: goto L_00151DBC;
    case 175u: goto L_00151DD4;
    case 176u: goto L_00151DF0;
    case 177u: goto L_00151E18;
    case 178u: goto L_00151E34;
    case 179u: goto L_00151E3C;
    case 180u: goto L_00151E98;
    case 181u: goto L_00151EBC;
    case 182u: goto L_00151FB8;
    case 183u: goto L_00151FC8;
    case 184u: goto L_00151FD4;
    case 185u: goto L_00151FE8;
    case 186u: goto L_00152010;
    case 187u: goto L_00152020;
    case 188u: goto L_00152030;
    case 189u: goto L_00152040;
    case 190u: goto L_00152050;
    case 191u: goto L_00152058;
    case 192u: goto L_00152080;
    case 193u: goto L_00152084;
    case 194u: goto L_001520A8;
    case 195u: goto L_001520B4;
    case 196u: goto L_001520D8;
    case 197u: goto L_00152100;
    case 198u: goto L_00152158;
    case 199u: goto L_001521B0;
    case 200u: goto L_00152200;
    case 201u: goto L_00152230;
    case 202u: goto L_001522D8;
    case 203u: goto L_00152310;
    case 204u: goto L_00152320;
    case 205u: goto L_0015234C;
    case 206u: goto L_00152368;
    case 207u: goto L_00152370;
    case 208u: goto L_00152384;
    case 209u: goto L_0015238C;
    case 210u: goto L_001523D4;
    case 211u: goto L_001523E8;
    case 212u: goto L_001523F0;
    case 213u: goto L_00152404;
    case 214u: goto L_0015240C;
    case 215u: goto L_0015242C;
    case 216u: goto L_0015243C;
    case 217u: goto L_00152440;
    case 218u: goto L_00152454;
    case 219u: goto L_00152470;
    case 220u: goto L_00152484;
    case 221u: goto L_00152510;
    case 222u: goto L_001525F8;
    case 223u: goto L_0015263C;
    case 224u: goto L_00152670;
    case 225u: goto L_001526B8;
    case 226u: goto L_001526C0;
    case 227u: goto L_001526D0;
    case 228u: goto L_001527B8;
    case 229u: goto L_001527C0;
    case 230u: goto L_001527F4;
    case 231u: goto L_00152804;
    case 232u: goto L_00152818;
    case 233u: goto L_00152820;
    case 234u: goto L_00152880;
    case 235u: goto L_001528A4;
    case 236u: goto L_00152A90;
    case 237u: goto L_00152B08;
    case 238u: goto L_00152B1C;
    case 239u: goto L_00152B24;
    case 240u: goto L_00152B38;
    case 241u: goto L_00152B90;
    case 242u: goto L_00152C20;
    case 243u: goto L_00152C34;
    case 244u: goto L_00152C3C;
    case 245u: goto L_00152C40;
    case 246u: goto L_00152C50;
    case 247u: goto L_00152C64;
    case 248u: goto L_00152C78;
    case 249u: goto L_00152D68;
    case 250u: goto L_00152D84;
    case 251u: goto L_00152D98;
    case 252u: goto L_00152DCC;
    case 253u: goto L_00152DE0;
    case 254u: goto L_00152E00;
    case 255u: goto L_00152E30;
    case 256u: goto L_00152E3C;
    case 257u: goto L_00152E44;
    case 258u: goto L_00153040;
    case 259u: goto L_00153080;
    case 260u: goto L_001532B8;
    case 261u: goto L_00153340;
    case 262u: goto L_00153378;
    case 263u: goto L_001533A8;
    case 264u: goto L_0015343C;
    case 265u: goto L_001534AC;
    case 266u: goto L_001534B4;
    case 267u: goto L_00153514;
    case 268u: goto L_0015351C;
    case 269u: goto L_00153558;
    case 270u: goto L_00153560;
    case 271u: goto L_001535A0;
    case 272u: goto L_001535A8;
    case 273u: goto L_001535D4;
    case 274u: goto L_001535E8;
    case 275u: goto L_001535F0;
    case 276u: goto L_0015363C;
    case 277u: goto L_00153664;
    case 278u: goto L_00153678;
    case 279u: goto L_001536E0;
    case 280u: goto L_001536F4;
    case 281u: goto L_00153710;
    case 282u: goto L_00153738;
    case 283u: goto L_0015374C;
    case 284u: goto L_001537C4;
    case 285u: goto L_001537D8;
    case 286u: goto L_001537EC;
    case 287u: goto L_00153830;
    case 288u: goto L_001538FC;
    case 289u: goto L_00153910;
    case 290u: goto L_00153940;
    case 291u: goto L_00153964;
    case 292u: goto L_00153A30;
    case 293u: goto L_00153A68;
    case 294u: goto L_00153A84;
    case 295u: goto L_00153B24;
    case 296u: goto L_00153B60;
    case 297u: goto L_00153BEC;
    case 298u: goto L_00153C00;
    case 299u: goto L_00153C20;
    case 300u: goto L_00153C34;
    case 301u: goto L_00153C3C;
    case 302u: goto L_00153CB0;
    case 303u: goto L_00153CD4;
    case 304u: goto L_00153D5C;
    case 305u: goto L_00153D70;
    case 306u: goto L_00153D8C;
    case 307u: goto L_00153DA0;
    case 308u: goto L_00153DC8;
    case 309u: goto L_00153DE4;
    case 310u: goto L_00153E24;
    case 311u: goto L_00153E38;
    case 312u: goto L_00153E4C;
    case 313u: goto L_00153EA0;
    case 314u: goto L_00153EB4;
    case 315u: goto L_00153EC8;
    case 316u: goto L_00153EE8;
    case 317u: goto L_00153EFC;
    case 318u: goto L_00153F24;
    case 319u: goto L_00153F2C;
    case 320u: goto L_00153FB4;
    case 321u: goto L_00153FC8;
    case 322u: goto L_00153FD0;
    case 323u: goto L_00153FE4;
    default: bad_entry(c, 0x00150000u); return;
    }
L_00150000:
    c.r[4].d[0] = ld16((c.r[20].w[0]));
    c.budget -= 1;
L_00150004:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[16].w[0] + 1u);  if (t) { goto L_001501A8; } }
    goto L_0015000C;
L_00150008:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0015000C:
    set32(c.r[2], c.r[3].w[0] << 4);
    c.budget -= 1;
L_00150010:
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 1;
L_00150014:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 1;
L_00150018:
    set32(c.r[16], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_0015001C:
    c.budget -= 1;
L_00150020:
    c.r[7].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], 0u + 13u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    mmi::div(c, 0, c.r[7].w[0], c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[14] = c.r[3].w[0];
    c.budget -= 6;
L_00150038:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0015003C:
    set32(c.r[5], c.r[5].w[0] + 19408u);
    set32(c.r[3], c.r[7].w[0] >> 31);
    c.budget -= 2;
L_00150044:
    c.f[15] = c.f[14];
    c.r[6].d[0] = c.hi.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4EC40000u);
    c.r[2].d[0] = c.r[2].d[0] | 60495ull;
    c.f[0] = c.r[6].w[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.f[12] = fp::mul(c.f[14], c.f[0]);
    c.budget -= 10;
L_0015006C:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
L_00150078:
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150088u); c.f[13] = fp::mul(c.f[14], c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x00150088u) [[unlikely]] return; }
L_00150088:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 14u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001500A0u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 34u, depth + 1u); else { c.pc = 0x002D8890u; return; } if (c.pc != 0x001500A0u) [[unlikely]] return; }
L_001500A0:
    c.r[2].d[0] = ld16((c.r[20].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 65280ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_00150140; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001500BCu); st32((c.r[1].w[0] + 19460u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001500BCu) [[unlikely]] return; }
    goto L_001500BC;
L_001500B8:
    st32((c.r[1].w[0] + 19460u), c.r[16].w[0]);
    c.budget -= 1;
L_001500BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40D00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001500D8u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001500D8u) [[unlikely]] return; }
L_001500D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.r[3].d[0] = ld16((c.r[20].w[0]));
    c.f[14] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 19408u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43700000u);
    c.f[12] = c.r[2].w[0];
    c.f[15] = c.f[14];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));
    c.budget -= 10;
L_00150100:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 4;
L_00150110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150118u); c.f[13] = fp::mul(c.f[14], c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x00150118u) [[unlikely]] return; }
L_00150118:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 14u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150130u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 34u, depth + 1u); else { c.pc = 0x002D8890u; return; } if (c.pc != 0x00150130u) [[unlikely]] return; }
L_00150130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150138u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00150138u) [[unlikely]] return; }
L_00150138:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[17].w[0]);
    c.budget -= 2;
L_00150140:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 41u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41500000u);  if (t) { goto L_00150168; } }
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150160u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00150160u) [[unlikely]] return; }
L_00150160:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00150180; } }
L_00150168:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015017Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0015017Cu) [[unlikely]] return; }
L_0015017C:
    c.budget -= 1;
L_00150180:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41500000u);
    c.f[1] = ld32((c.r[19].w[0]));
    set32(c.r[20], c.r[20].w[0] + 2u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
L_00150190:
    c.r[3].d[0] = 0ull | 65535ull;
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0]), c.f[0]);
    c.r[4].d[0] = ld16((c.r[20].w[0]));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00150020u | kUnwind; return; } goto L_00150020; } }
L_001501A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001501D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 16u);  if (t) { goto L_00150258; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00150248; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00150210; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00150210; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00150210; } }
    goto L_00150204;
L_00150200:
    c.budget -= 1;
L_00150204:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00150288; } }
    c.budget -= 1;
L_00150210:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[2], 0u + 29u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00150228; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00150240; } }
L_00150228:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8659u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 144u);  if (t) { goto L_00150240; } }
L_00150238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00150290; } }
L_00150240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_00150290; } }
L_00150248:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 112u);  if (t) { goto L_00150290; } }
    c.budget -= 1;
L_00150258:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 503u)));
    set32(c.r[2], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00150288; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 145u);  if (t) { goto L_0015027C; } }
    set32(c.r[2], 0u + 147u);
    c.budget -= 1;
L_0015027C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00150290; } }
    c.budget -= 1;
L_00150288:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00150290:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001502A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 39u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001503B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001502C4u);  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x001502C4u) [[unlikely]] return; }
L_001502C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001503B0; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] - 27856u);
    set32(c.r[3], c.r[16].w[0] + 304u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 82u)));
    set32(c.r[5], c.r[6].w[0] << 4);
    st8((c.r[16].w[0] + 304u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[6], c.r[6].w[0] << 9);
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);  if (t) { goto L_00150320; } }
    c.r[4].d[0] = ld8((c.r[6].w[0] + 811u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] + 1u);  if (t) { goto L_001503A8; } }
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], 0u + 32u);
    set32(c.r[4], 0u + 8u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001503A8; } }
L_00150320:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00150388; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[4].d[0] = c.r[4].d[0] & 31ull;
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_00150370; } }
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00150370; } }
    set32(c.r[4], c.r[4].w[0] - 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
L_00150370:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[4].d[0] = c.r[4].d[0] & 16ull;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00150390; } }
    c.budget -= 1;
L_00150388:
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_00150390:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 811u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001503A8; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_001503A8:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001503B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001503C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 50u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00150540; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 322u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00150540; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 82u)));
    set32(c.r[8], c.r[4].w[0] + 304u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.budget -= 5;
L_00150400:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.budget -= 1;
L_00150404:
    set32(c.r[6], c.r[6].w[0] - 27856u);
    c.f[0] = 0u;
    set32(c.r[5], 0u + 2u);
    st32((c.r[1].w[0] + 19408u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], c.r[7].w[0] << 4);
    st32((c.r[1].w[0] + 19444u), c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] << 9);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[16], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 13;
L_00150438:
    st32((c.r[1].w[0] + 19456u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 797u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_00150450; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19452u), c.f[0]);  if (t) { goto L_00150460; } }
L_00150450:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.r[3].w[0]);
    c.budget -= 4;
L_00150460:
    c.r[3].d[0] = ld8((c.r[8].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001504D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150474u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00150474u) [[unlikely]] return; }
L_00150474:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B20000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150488u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00150488u) [[unlikely]] return; }
L_00150488:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 12080u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    set32(c.r[5], 0u + 13u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001504ACu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001504ACu) [[unlikely]] return; }
L_001504AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 10400u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    set32(c.r[5], 0u + 11u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001504D0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001504D0u) [[unlikely]] return; }
L_001504D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 797u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00150540; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001504E4u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x001504E4u) [[unlikely]] return; }
L_001504E4:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42680000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001504F8u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001504F8u) [[unlikely]] return; }
L_001504F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 12080u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    set32(c.r[5], 0u + 13u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015051Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0015051Cu) [[unlikely]] return; }
L_0015051C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 10640u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    set32(c.r[5], 0u + 11u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150540u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00150540u) [[unlikely]] return; }
L_00150540:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00150550:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 39u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00150DC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150594u);  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x00150594u) [[unlikely]] return; }
L_00150594:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00150DC0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    set32(c.r[5], c.r[28].w[0] - 32736u);
    set32(c.r[16], c.r[16].w[0] - 27856u);
    set32(c.r[6], c.r[6].w[0] + 29024u);
    set32(c.r[17], c.r[19].w[0] + 304u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 82u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 7);
    set32(c.r[3], c.r[8].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[18], c.r[16].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 761u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st16((c.r[19].w[0] + 304u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 760u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st16((c.r[19].w[0] + 306u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 304u));
    c.budget -= 30;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[23], c.r[6].w[0] + c.r[7].w[0]);  if (t) { goto L_00150A70; } }
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[22], c.r[29].w[0] + 168u);
    set32(c.r[30], c.r[29].w[0] + 164u);
    c.budget -= 3;
L_00150620:
    c.r[4].d[0] = ld16((c.r[18].w[0] + 860u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[21].w[0] & 31u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00150A60; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[23].w[0] + 144u);  if (t) { goto L_001508C0; } }
    goto L_00150648;
L_00150644:
    set32(c.r[4], c.r[23].w[0] + 144u);
    c.budget -= 1;
L_00150648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150650u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x00150650u) [[unlikely]] return; }
L_00150650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150658u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x00150658u) [[unlikely]] return; }
L_00150658:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150668u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x00150668u) [[unlikely]] return; }
L_00150668:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150674u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x00150674u) [[unlikely]] return; }
L_00150674:
    c.f[13] = ld32((c.r[22].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150680u); c.f[12] = ld32((c.r[29].w[0] + 160u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x00150680u) [[unlikely]] return; }
L_00150680:
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.f[1] = ld32((c.r[22].w[0]));
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015069Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0015069Cu) [[unlikely]] return; }
L_0015069C:
    c.f[12] = ld32((c.r[30].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001506A8u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001506A8u) [[unlikely]] return; }
L_001506A8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    set32(c.r[3], 0u + 3u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (t) { goto L_00150860; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001507C8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00150768; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001506E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00150A60; } }
L_001506E0:
    c.r[3].d[0] = c.r[4].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].sd[0] < 5632ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;  if (t) { goto L_00150708; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00150708; } }
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00150708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150710u);  if (depth < kMaxDepth) unit_0009(c, 159u, depth + 1u); else { c.pc = 0x001260C0u; return; } if (c.pc != 0x00150710u) [[unlikely]] return; }
L_00150710:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 5632ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00150A60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015072Cu);  if (depth < kMaxDepth) unit_0009(c, 159u, depth + 1u); else { c.pc = 0x001260C0u; return; } if (c.pc != 0x0015072Cu) [[unlikely]] return; }
L_0015072C:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 11264ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[20].d[0] << 48;  if (t) { goto L_00150A60; } }
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + 16384u);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00150A60; } }
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00150A60; } }
L_00150768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150770u);  if (depth < kMaxDepth) unit_0009(c, 159u, depth + 1u); else { c.pc = 0x001260C0u; return; } if (c.pc != 0x00150770u) [[unlikely]] return; }
L_00150770:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 5632ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00150A60; } }
    c.r[20].d[0] = c.r[20].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    set32(c.r[2], c.r[20].w[0] - 16384u);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015079Cu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 159u, depth + 1u); else { c.pc = 0x001260C0u; return; } if (c.pc != 0x0015079Cu) [[unlikely]] return; }
L_0015079C:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 5120ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00150A60; } }
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0;  if (t) { goto L_00150A60; } }
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00150A60; } }
L_001507C8:
    c.r[2].d[0] = c.r[4].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < -5631ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < -16383ll ? 1ull : 0ull;  if (t) { goto L_001507F0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001507F0; } }
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001507F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001507F8u);  if (depth < kMaxDepth) unit_0009(c, 159u, depth + 1u); else { c.pc = 0x001260C0u; return; } if (c.pc != 0x001507F8u) [[unlikely]] return; }
L_001507F8:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 5632ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00150A60; } }
    c.r[20].d[0] = c.r[20].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    set32(c.r[2], c.r[20].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150828u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 159u, depth + 1u); else { c.pc = 0x001260C0u; return; } if (c.pc != 0x00150828u) [[unlikely]] return; }
L_00150828:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 11264ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[20].w[0] + 16384u);  if (t) { goto L_00150A60; } }
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00150A60; } }
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00150A60; } }
    c.budget -= 1;
L_00150860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150868u);  if (depth < kMaxDepth) unit_0009(c, 159u, depth + 1u); else { c.pc = 0x001260C0u; return; } if (c.pc != 0x00150868u) [[unlikely]] return; }
L_00150868:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 5632ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00150A60; } }
    c.r[20].d[0] = c.r[20].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    set32(c.r[2], c.r[20].w[0] + 16384u);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150894u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 159u, depth + 1u); else { c.pc = 0x001260C0u; return; } if (c.pc != 0x00150894u) [[unlikely]] return; }
L_00150894:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 5120ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00150A60; } }
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] >= 0;  if (t) { goto L_00150A60; } }
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00150A60; } }
L_001508C0:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001508D0u); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001508D0u) [[unlikely]] return; }
L_001508D0:
    c.f[13] = ld32((c.r[22].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001508DCu); c.f[12] = ld32((c.r[29].w[0] + 160u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001508DCu) [[unlikely]] return; }
L_001508DC:
    set32(c.r[3], ld32((c.r[18].w[0] + 1252u)));
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    c.f[1] = ld32((c.r[22].w[0]));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150900u); c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x00150900u) [[unlikely]] return; }
L_00150900:
    c.f[12] = ld32((c.r[30].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015090Cu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0015090Cu) [[unlikely]] return; }
L_0015090C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00150A20; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001509D0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00150988; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00150940; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00150A60; } }
L_00150940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150948u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 159u, depth + 1u); else { c.pc = 0x001260C0u; return; } if (c.pc != 0x00150948u) [[unlikely]] return; }
L_00150948:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 11264ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[20].d[0] << 48;  if (t) { goto L_00150A60; } }
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + 16384u);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00150A60; } }
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00150A60; } }
    c.budget -= 1;
L_00150988:
    c.r[20].d[0] = c.r[20].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.budget -= 2;
L_00150990:
    set32(c.r[2], c.r[20].w[0] - 16384u);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001509A0u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 159u, depth + 1u); else { c.pc = 0x001260C0u; return; } if (c.pc != 0x001509A0u) [[unlikely]] return; }
L_001509A0:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 5120ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00150A60; } }
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0;  if (t) { goto L_00150A60; } }
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00150A60; } }
    c.budget -= 1;
L_001509D0:
    c.r[20].d[0] = c.r[20].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    set32(c.r[2], c.r[20].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001509ECu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 159u, depth + 1u); else { c.pc = 0x001260C0u; return; } if (c.pc != 0x001509ECu) [[unlikely]] return; }
L_001509EC:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 11264ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[20].w[0] + 16384u);  if (t) { goto L_00150A60; } }
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00150A60; } }
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00150A60; } }
L_00150A20:
    c.r[20].d[0] = c.r[20].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    set32(c.r[2], c.r[20].w[0] + 16384u);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150A38u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 159u, depth + 1u); else { c.pc = 0x001260C0u; return; } if (c.pc != 0x00150A38u) [[unlikely]] return; }
L_00150A38:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 5120ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00150A60; } }
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] >= 0;  if (t) { goto L_00150A60; } }
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00150A60:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[3].d[0] = c.r[21].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00150620u | kUnwind; return; } goto L_00150620; } }
L_00150A70:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 184u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 300u);  if (t) { goto L_00150A88; } }
    st16((c.r[4].w[0] + 34u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00150A88:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_00150C40; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00150C40; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 34u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00150C40; } }
    c.r[6].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = c.r[6].d[0] & 63ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);  if (t) { goto L_00150C40; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8927u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] & 7ull;  if (t) { goto L_00150C40; } }
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00150AF8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 68u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00150B98; } }
    c.budget -= 1;
L_00150AF8:
    c.r[3].d[0] = c.r[6].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 16u);  if (t) { goto L_00150B18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150B0Cu);  if (depth < kMaxDepth) unit_004E(c, 177u, depth + 1u); else { c.pc = 0x0023A720u; return; } if (c.pc != 0x00150B0Cu) [[unlikely]] return; }
L_00150B0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00150C30; } }
    c.budget -= 1;
L_00150B18:
    c.r[3].d[0] = c.r[6].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 17u);  if (t) { goto L_00150B38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150B2Cu);  if (depth < kMaxDepth) unit_004E(c, 177u, depth + 1u); else { c.pc = 0x0023A720u; return; } if (c.pc != 0x00150B2Cu) [[unlikely]] return; }
    goto L_00150B2C;
L_00150B28:
    c.budget -= 1;
L_00150B2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00150C30; } }
    c.budget -= 1;
L_00150B38:
    c.r[3].d[0] = c.r[6].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 10u);  if (t) { goto L_00150B58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150B4Cu);  if (depth < kMaxDepth) unit_004E(c, 177u, depth + 1u); else { c.pc = 0x0023A720u; return; } if (c.pc != 0x00150B4Cu) [[unlikely]] return; }
L_00150B4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00150C30; } }
    c.budget -= 1;
L_00150B58:
    c.r[3].d[0] = c.r[6].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 12u);  if (t) { goto L_00150B78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150B6Cu);  if (depth < kMaxDepth) unit_004E(c, 177u, depth + 1u); else { c.pc = 0x0023A720u; return; } if (c.pc != 0x00150B6Cu) [[unlikely]] return; }
L_00150B6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00150C30; } }
    c.budget -= 1;
L_00150B78:
    c.r[3].d[0] = c.r[6].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 11u);  if (t) { goto L_00150C30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150B8Cu);  if (depth < kMaxDepth) unit_004E(c, 177u, depth + 1u); else { c.pc = 0x0023A720u; return; } if (c.pc != 0x00150B8Cu) [[unlikely]] return; }
L_00150B8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00150C30; } }
    c.budget -= 1;
L_00150B98:
    c.r[3].d[0] = c.r[6].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00150BB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150BACu); set32(c.r[5], 0u + 18u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x00150BACu) [[unlikely]] return; }
L_00150BAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00150C30; } }
    c.budget -= 1;
L_00150BB8:
    c.r[3].d[0] = c.r[6].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00150BD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150BCCu); set32(c.r[5], 0u + 19u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x00150BCCu) [[unlikely]] return; }
L_00150BCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00150C30; } }
    c.budget -= 1;
L_00150BD8:
    c.r[3].d[0] = c.r[6].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00150BF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150BECu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x00150BECu) [[unlikely]] return; }
L_00150BEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00150C30; } }
    c.budget -= 1;
L_00150BF8:
    c.r[3].d[0] = c.r[6].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00150C18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150C0Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x00150C0Cu) [[unlikely]] return; }
L_00150C0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00150C30; } }
    c.budget -= 1;
L_00150C18:
    c.r[3].d[0] = c.r[6].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00150C30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150C2Cu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x00150C2Cu) [[unlikely]] return; }
L_00150C2C:
    c.budget -= 1;
L_00150C30:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], 0u + 300u);
    st16((c.r[3].w[0] + 34u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 4;
L_00150C40:
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00150C50; } }
    goto L_00150C4C;
L_00150C48:
    c.budget -= 1;
L_00150C4C:
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00150C50:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_00150D10; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_00150CD0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00150C78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00150D90; } }
L_00150C78:
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] + 1u);  if (t) { goto L_00150CC8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[17].w[0] + 8u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8927u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00150CB0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 101u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00150D90; } }
L_00150CB0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150CBCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 169u, depth + 1u); else { c.pc = 0x0023A430u; return; } if (c.pc != 0x00150CBCu) [[unlikely]] return; }
L_00150CBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00150D90; } }
    c.budget -= 1;
L_00150CC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00150D90; } }
L_00150CD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3D880000u);
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    c.r[4].d[0] = c.r[4].d[0] | 34953ull;
    c.f[1] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 8u), c.f[1]);  if (t) { goto L_00150D90; } }
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], 0u + 90u);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 5;
L_00150D10:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00150D28; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
L_00150D28:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00150D48; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + 512u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00150D58; } }
    c.budget -= 1;
L_00150D48:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + 1024u);
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00150D58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150D60u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6u)));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x00150D60u) [[unlikely]] return; }
L_00150D60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150D68u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x00150D68u) [[unlikely]] return; }
L_00150D68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[4].d[0] | 52429ull;
    c.f[2] = c.r[4].w[0];
    c.f[1] = c.r[3].w[0];
    c.budget -= 5;
L_00150D7C:
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.budget -= 5;
L_00150D90:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00150DC0; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 803u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00150DC0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_00150DC0; } }
    st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00150DC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.budget -= 5;
L_00150DD4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00150DF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 50u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00150FC8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8927u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00150FC8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 322u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_00150FC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150E38u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00150E38u) [[unlikely]] return; }
L_00150E38:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 12832u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150E50u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x00150E50u) [[unlikely]] return; }
L_00150E50:
    c.f[12] = ld32((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150E64u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00150E64u) [[unlikely]] return; }
L_00150E64:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[6], c.r[6].w[0] + 12816u);
    set32(c.r[4], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], c.r[5].w[0] - 1840u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    st32((c.r[1].w[0] + 19408u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[6].w[0] << 4);
    st32((c.r[1].w[0] + 19444u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[4].w[0] << 4);
    st32((c.r[1].w[0] + 19456u), 0u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 2u));
    c.budget -= 27;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_00150EE0; } }
    st32((c.r[1].w[0] + 19448u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19452u), c.f[0]);  if (t) { goto L_00150EF0; } }
L_00150EE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.f[1]);
    c.budget -= 4;
L_00150EF0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_00150FC8; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 16848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150F10u); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_0076(c, 4u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x00150F10u) [[unlikely]] return; }
L_00150F10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150F24u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00150F24u) [[unlikely]] return; }
L_00150F24:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 16832u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150F38u); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_0076(c, 4u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x00150F38u) [[unlikely]] return; }
L_00150F38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st32((c.r[1].w[0] + 19456u), 0u);
    set32(c.r[2], c.r[2].w[0] + 12560u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    c.f[0] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 2u));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_00150F80; } }
    st32((c.r[1].w[0] + 19448u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19452u), c.f[0]);  if (t) { goto L_00150F90; } }
L_00150F80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.f[1]);
    c.budget -= 4;
L_00150F90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150F98u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00150F98u) [[unlikely]] return; }
L_00150F98:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 12896u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150FB0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x00150FB0u) [[unlikely]] return; }
L_00150FB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00150FC4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00150FC4u) [[unlikely]] return; }
L_00150FC4:
    c.budget -= 1;
L_00150FC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00150FE0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.budget -= 2;
L_00150FE8:
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 39u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; c.r[23].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001514F0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001514F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151030u);  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x00151030u) [[unlikely]] return; }
L_00151030:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001514F0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_00151040:
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 82u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 191u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[19], c.r[23].w[0] + 304u);  if (t) { goto L_001514F0; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F9C0000u);
    c.r[4].d[0] = c.r[3].d[0] | 34079ull;
    c.r[10].d[0] = c.r[5].d[0] | 10486ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FB80000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[9].d[0] = c.r[3].d[0] | 20972ull;
    set32(c.r[12], 0u + 140u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D080000u);
    c.budget -= 10;
L_00151080:
    c.r[11].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[14].d[0] = c.r[3].d[0] | 34953ull;
    set32(c.r[8], c.r[8].w[0] - 27856u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    set32(c.r[13], 0u + 1u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[7], 0u + 2u);
    c.f[2] = c.r[14].w[0];
    set32(c.r[5], 0u + 6u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    set32(c.r[6], 0u + 7u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    set32(c.r[21], 0u + 10u);
    c.f[3] = c.r[3].w[0];
    set32(c.r[20], 0u + 120u);
    set32(c.r[14], 0u + 3u);
    c.budget -= 16;
L_001510C0:
    c.r[3].d[0] = ld16((c.r[19].w[0]));
    set32(c.r[17], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[13].d[0]; if (c.r[18].d[0] != 0) c.r[17].d[0] = c.r[14].d[0];  if (t) { goto L_00151158; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001510E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00151270; } }
L_001510E0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[19].w[0] + 6u), static_cast<std::uint16_t>(c.r[12].w[0]));
    st16((c.r[19].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0] + 10u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0] + 8u), static_cast<std::uint16_t>(0u));
    c.budget -= 8;
L_00151100:
    st32((c.r[19].w[0] + 24u), c.r[11].w[0]);
    st32((c.r[19].w[0] + 28u), c.r[10].w[0]);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != 0ull; st32((c.r[19].w[0] + 32u), c.r[9].w[0]);  if (t) { goto L_00151130; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    set32(c.r[3], c.r[15].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[15].w[0]);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_00151158; } }
L_00151130:
    set32(c.r[15], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[15].w[0] + 82u)));
    set32(c.r[3], c.r[3].w[0] + c.r[15].w[0]);
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 191u)));
    set32(c.r[3], c.r[15].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[15].w[0]);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    st32((c.r[19].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 10;
L_00151158:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00151170; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[19].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00151170:
    set32(c.r[15], ld32((c.r[19].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[15].w[0] + 785u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00151270; } }
L_00151180:
    set32(c.r[22], ld32((c.r[28].w[0] - 23788u)));
    c.r[16].d[0] = ld8((c.r[15].w[0] + 515u));
    c.r[22].d[0] = ld8((c.r[22].w[0] + 186u));
    set32(c.r[16], c.r[13].w[0] << (c.r[16].w[0] & 31u));
    c.r[16].d[0] = c.r[22].d[0] & c.r[16].d[0];
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001511C0; } }
    st16((c.r[19].w[0] + 10u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(0u));
    st32((c.r[19].w[0] + 16u), 0u);
    st16((c.r[19].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[15].w[0] + 785u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00151270; } }
    c.budget -= 1;
L_001511C0:
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_001511E0; } }
    st16((c.r[19].w[0] + 2u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 6u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00151270; } }
    c.budget -= 1;
L_001511E0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001511F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 2u), static_cast<std::uint16_t>(c.r[13].w[0]));  if (t) { goto L_00151270; } }
    c.budget -= 1;
L_001511F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[15].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00151210; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_00151270; } }
L_00151210:
    c.r[24].sd[0] = static_cast<std::int16_t>(ld16((c.r[15].w[0] + 496u)));
    c.r[25].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[25], c.r[25].w[0] + 12960u);
    c.r[15].sd[0] = static_cast<std::int16_t>(ld16((c.r[15].w[0] + 498u)));
    c.budget -= 6;
L_00151228:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[25].w[0])));
    mmi::mult(c, 0, c.r[24].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[22].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[22], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[22].w[0]) >> 5));
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[15].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00151268; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[25], c.r[25].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00151228u | kUnwind; return; } goto L_00151228; } }
L_00151268:
    set32(c.r[3], c.r[16].w[0] + 2u);
    st16((c.r[19].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00151270:
    set32(c.r[15], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[16].d[0] = ld8((c.r[15].w[0] + 515u));
    c.r[22].d[0] = ld8((c.r[3].w[0] + 186u));
    set32(c.r[16], c.r[13].w[0] << (c.r[16].w[0] & 31u));
    c.r[16].d[0] = c.r[22].d[0] & c.r[16].d[0];
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001512B8; } }
    st16((c.r[19].w[0] + 10u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(0u));
    st32((c.r[19].w[0] + 16u), 0u);
    st16((c.r[19].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld16((c.r[28].w[0] - 24152u));
    c.r[3].d[0] = c.r[3].d[0] & 65511ull;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 24152u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001514D8; } }
L_001512B8:
    c.r[3].d[0] = ld8((c.r[3].w[0] + 184u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001514D8; } }
    c.r[16].d[0] = ld16((c.r[19].w[0] + 10u));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[14].d[0];  if (t) { goto L_00151478; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[7].d[0];  if (t) { goto L_00151388; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[13].d[0];  if (t) { goto L_00151330; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001512F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001514D8; } }
L_001512F0:
    c.r[15].d[0] = ld16((c.r[19].w[0] + 2u));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 4u));
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == c.r[3].d[0]; set32(c.r[15], c.r[16].w[0] + 1u);  if (t) { goto L_001514D8; } }
    set32(c.r[3], c.r[13].w[0] << (c.r[17].w[0] & 31u));
    st16((c.r[19].w[0] + 10u), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.r[15].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = ld16((c.r[19].w[0] + 2u));
    st16((c.r[19].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(c.r[21].w[0]));
    st32((c.r[19].w[0] + 16u), 0u);
    st16((c.r[19].w[0] + 8u), static_cast<std::uint16_t>(c.r[13].w[0]));
    c.r[3].d[0] = ld16((c.r[28].w[0] - 24152u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[15].d[0];
    st16((c.r[28].w[0] - 24152u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 12;
L_00151330:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_00151348; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 2u));
    st16((c.r[19].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00151348:
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[19].w[0] + 16u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001514D8; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 10u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[19].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[19].w[0] + 16u), c.r[11].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(c.r[20].w[0]));  if (t) { goto L_001514D8; } }
L_00151388:
    c.r[16].d[0] = ld16((c.r[19].w[0] + 2u));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 4u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_001513A8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_001513A8; } }
    st16((c.r[19].w[0] + 4u), static_cast<std::uint16_t>(c.r[16].w[0]));
    st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(c.r[20].w[0]));
    c.budget -= 2;
L_001513A8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001513D8; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 10u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[19].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(c.r[21].w[0]));  if (t) { goto L_001514D8; } }
L_001513D8:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_001514D8; } }
    c.f[0] = ld32((c.r[19].w[0] + 24u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[19].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 28u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[19].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[19].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00151420; } }
    st32((c.r[19].w[0] + 24u), c.r[11].w[0]);
    c.budget -= 2;
L_00151420:
    c.f[0] = ld32((c.r[19].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00151438; } }
    st32((c.r[19].w[0] + 28u), c.r[11].w[0]);
    c.budget -= 2;
L_00151438:
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    c.budget -= 1;
L_0015143C:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00151450; } }
    st32((c.r[19].w[0] + 32u), c.r[11].w[0]);
    c.budget -= 2;
L_00151450:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[15].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001514D8; } }
    st16((c.r[19].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 2u));
    st16((c.r[19].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(c.r[20].w[0]));  if (t) { goto L_001514D8; } }
    c.budget -= 1;
L_00151478:
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    st32((c.r[19].w[0] + 16u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.budget -= 7;
L_00151494:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[13].w[0] << (c.r[17].w[0] & 31u));  if (t) { goto L_001514D8; } }
    st16((c.r[19].w[0] + 10u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ~(c.r[3].d[0] | 0ull);
    st16((c.r[19].w[0] + 8u), static_cast<std::uint16_t>(0u));
    c.r[15].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = ld16((c.r[28].w[0] - 24152u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[15].d[0];
    st16((c.r[28].w[0] - 24152u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[15].d[0] = ld16((c.r[19].w[0] + 2u));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 4u));
    c.budget -= 11;
    { const bool t = c.r[15].d[0] != c.r[3].d[0];  if (t) { goto L_001514D8; } }
    st16((c.r[19].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0] + 2u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_001514D8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 36u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001510C0u | kUnwind; return; } goto L_001510C0; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[23].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001514F0:
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
L_00151520:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 50u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00151BB8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 322u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00151BB8; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 312u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[4].w[0] + 304u);  if (t) { goto L_00151838; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[4].d[0] = ld16((c.r[28].w[0] - 24152u));
    c.r[3].d[0] = ld8((c.r[1].w[0] + 12788u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00151838; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015157Cu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x0015157Cu) [[unlikely]] return; }
L_0015157C:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2D60000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151590u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00151590u) [[unlikely]] return; }
L_00151590:
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001515A4u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001515A4u) [[unlikely]] return; }
L_001515A4:
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    set32(c.r[2], 0u + 7u);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 4u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_001515F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 19456u), 0u);
    c.f[20] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 9;
L_001515E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19452u), c.r[2].w[0]);  if (t) { goto L_00151620; } }
    c.budget -= 1;
L_001515F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[1].w[0] + 19444u), c.r[3].w[0]);
    c.f[20] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19456u), c.r[2].w[0]);
    c.budget -= 12;
L_00151620:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 2;
L_00151628:
    set32(c.r[2], c.r[2].w[0] + 12080u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    set32(c.r[5], 0u + 13u);
    c.budget -= 5;
L_0015163C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151644u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00151644u) [[unlikely]] return; }
L_00151644:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st32((c.r[1].w[0] + 19444u), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[7].d[0] = ld16((c.r[16].w[0] + 4u));
    set32(c.r[6], c.r[6].w[0] + 12968u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] - 1840u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 12976u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[7], c.r[6].w[0] + 53u);
    set32(c.r[6], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[1].w[0] + 19460u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.f[14] = ld32((c.r[2].w[0] + 8u));
    c.f[15] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001516C4u); set32(c.r[5], c.r[5].w[0] + 19408u);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x001516C4u) [[unlikely]] return; }
L_001516C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001516D8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001516D8u) [[unlikely]] return; }
L_001516D8:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 4u));
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_00151838; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 16848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001516F8u); set32(c.r[6], 0u + 13u);  if (depth < kMaxDepth) unit_0076(c, 4u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x001516F8u) [[unlikely]] return; }
L_001516F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151700u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00151700u) [[unlikely]] return; }
L_00151700:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2D60000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151714u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00151714u) [[unlikely]] return; }
L_00151714:
    c.f[13] = ld32((c.r[16].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = fp::sub(c.f[13], c.f[14]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151730u); c.f[12] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00151730u) [[unlikely]] return; }
L_00151730:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.f[20]);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    set32(c.r[5], 0u + 13u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x422A0000u);
    st32((c.r[1].w[0] + 19456u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 43691ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A40000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 12080u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015178Cu); st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0015178Cu) [[unlikely]] return; }
L_0015178C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151794u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00151794u) [[unlikely]] return; }
L_00151794:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2D60000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001517A8u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001517A8u) [[unlikely]] return; }
L_001517A8:
    c.f[13] = ld32((c.r[16].w[0] + 28u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = fp::sub(c.f[13], c.f[14]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001517C4u); c.f[12] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001517C4u) [[unlikely]] return; }
L_001517C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001517D8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001517D8u) [[unlikely]] return; }
L_001517D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001517E0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x001517E0u) [[unlikely]] return; }
L_001517E0:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2D60000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001517F4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001517F4u) [[unlikely]] return; }
L_001517F4:
    c.f[13] = ld32((c.r[16].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = fp::sub(c.f[13], c.f[14]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151810u); c.f[12] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00151810u) [[unlikely]] return; }
L_00151810:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151824u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00151824u) [[unlikely]] return; }
L_00151824:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 16832u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151838u); set32(c.r[6], 0u + 13u);  if (depth < kMaxDepth) unit_0076(c, 4u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x00151838u) [[unlikely]] return; }
L_00151838:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[4].d[0] = ld16((c.r[28].w[0] - 24152u));
    c.budget -= 2;
L_00151840:
    c.r[3].d[0] = ld8((c.r[1].w[0] + 12787u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00151BB8; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00151BB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151864u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00151864u) [[unlikely]] return; }
L_00151864:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2980000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151878u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00151878u) [[unlikely]] return; }
L_00151878:
    c.f[12] = ld32((c.r[16].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015188Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0015188Cu) [[unlikely]] return; }
L_0015188C:
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    set32(c.r[2], 0u + 7u);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 40u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_001518D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 19456u), 0u);
    c.budget -= 2;
L_001518B0:
    c.f[20] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.budget -= 4;
L_001518C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19452u), c.r[2].w[0]);  if (t) { goto L_00151908; } }
    c.budget -= 1;
L_001518D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19456u), 0u);
    c.f[20] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.r[2].w[0]);
    c.budget -= 12;
L_00151908:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 12080u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    set32(c.r[5], 0u + 13u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015192Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x0015192Cu) [[unlikely]] return; }
L_0015192C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC25C0000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151940u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00151940u) [[unlikely]] return; }
L_00151940:
    set32(c.r[3], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    set32(c.r[3], c.r[3].w[0] + 10880u);
    c.f[12] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[3].w[0]);
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43400000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42980000u);
    c.f[13] = c.r[2].w[0];
    c.f[14] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.f[15] = c.r[2].w[0];
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151998u); set32(c.r[5], c.r[5].w[0] + 19408u);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x00151998u) [[unlikely]] return; }
L_00151998:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 1;
L_0015199C:
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001519ACu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001519ACu) [[unlikely]] return; }
L_001519AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42AA0000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001519C0u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001519C0u) [[unlikely]] return; }
L_001519C0:
    set32(c.r[3], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[7].d[0] = ld16((c.r[16].w[0] + 40u));
    set32(c.r[6], c.r[6].w[0] + 12968u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] - 1840u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 12976u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[7], c.r[6].w[0] + 53u);
    set32(c.r[6], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[1].w[0] + 19460u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 40u));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.f[14] = ld32((c.r[2].w[0] + 8u));
    c.f[15] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151A44u); set32(c.r[5], c.r[5].w[0] + 19408u);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x00151A44u) [[unlikely]] return; }
L_00151A44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151A58u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00151A58u) [[unlikely]] return; }
L_00151A58:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 40u));
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_00151BB8; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 16848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151A78u); set32(c.r[6], 0u + 13u);  if (depth < kMaxDepth) unit_0076(c, 4u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x00151A78u) [[unlikely]] return; }
L_00151A78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151A80u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00151A80u) [[unlikely]] return; }
L_00151A80:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2980000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151A94u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00151A94u) [[unlikely]] return; }
L_00151A94:
    c.f[13] = ld32((c.r[16].w[0] + 60u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = fp::sub(c.f[13], c.f[14]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151AB0u); c.f[12] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00151AB0u) [[unlikely]] return; }
L_00151AB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.f[20]);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    set32(c.r[5], 0u + 13u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x422A0000u);
    st32((c.r[1].w[0] + 19456u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 43691ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A40000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 12080u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151B0Cu); st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00151B0Cu) [[unlikely]] return; }
L_00151B0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151B14u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00151B14u) [[unlikely]] return; }
L_00151B14:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2980000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151B28u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00151B28u) [[unlikely]] return; }
L_00151B28:
    c.f[13] = ld32((c.r[16].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = fp::sub(c.f[13], c.f[14]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151B44u); c.f[12] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00151B44u) [[unlikely]] return; }
L_00151B44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151B58u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00151B58u) [[unlikely]] return; }
L_00151B58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151B60u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00151B60u) [[unlikely]] return; }
L_00151B60:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2980000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151B74u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00151B74u) [[unlikely]] return; }
L_00151B74:
    c.f[13] = ld32((c.r[16].w[0] + 68u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = fp::sub(c.f[13], c.f[14]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151B90u); c.f[12] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00151B90u) [[unlikely]] return; }
L_00151B90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151BA4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00151BA4u) [[unlikely]] return; }
L_00151BA4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 16832u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151BB8u); set32(c.r[6], 0u + 13u);  if (depth < kMaxDepth) unit_0076(c, 4u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x00151BB8u) [[unlikely]] return; }
L_00151BB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00151BD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 39u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00151C48; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00151C48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151C04u);  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x00151C04u) [[unlikely]] return; }
L_00151C04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00151C48; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00151C30; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00151C40; } }
    c.budget -= 1;
L_00151C30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00151C48; } }
    goto L_00151C40;
L_00151C3C:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00151C40:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00151C48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00151C60:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 50u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001520D8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001520D8; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001520D8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 3u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001520D8; } }
    set32(c.r[18], ld32((c.r[6].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001520D8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.r[3].d[0] = c.r[4].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 18u);  if (t) { goto L_00151CF0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00151CE8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 503u)));
    set32(c.r[3], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00151CF0; } }
L_00151CE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001520D8; } }
L_00151CF0:
    set32(c.r[19], ld32((c.r[6].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001520D8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 51u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001520D8; } }
    set32(c.r[5], c.r[6].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151D18u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_002E(c, 346u, depth + 1u); else { c.pc = 0x001BB640u; return; } if (c.pc != 0x00151D18u) [[unlikely]] return; }
L_00151D18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001520D8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[16], 0u + 12u);
    set32(c.r[2], 0u + 49u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 101u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151D40u); if (c.r[3].d[0] == 0) c.r[16].d[0] = c.r[2].d[0];  if (depth < kMaxDepth) unit_002E(c, 348u, depth + 1u); else { c.pc = 0x001BB7A0u; return; } if (c.pc != 0x00151D40u) [[unlikely]] return; }
L_00151D40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151D48u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00151D48u) [[unlikely]] return; }
L_00151D48:
    set32(c.r[17], c.r[29].w[0] + 84u);
    c.f[13] = ld32((c.r[17].w[0]));
    c.f[14] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151D5Cu); c.f[12] = ld32((c.r[29].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00151D5Cu) [[unlikely]] return; }
L_00151D5C:
    set32(c.r[3], c.r[16].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1840u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], 0u + 15u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151D80u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00151D80u) [[unlikely]] return; }
L_00151D80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151D94u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00151D94u) [[unlikely]] return; }
L_00151D94:
    set32(c.r[4], c.r[16].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 1840u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[5], 0u + 15u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[6], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151DBCu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00151DBCu) [[unlikely]] return; }
L_00151DBC:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[16], 0u + 14u);
    set32(c.r[2], 0u + 67u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 101u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151DD4u); if (c.r[3].d[0] == 0) c.r[16].d[0] = c.r[2].d[0];  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00151DD4u) [[unlikely]] return; }
L_00151DD4:
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[2].w[0];
    c.f[13] = ld32((c.r[17].w[0]));
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151DF0u); c.f[12] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00151DF0u) [[unlikely]] return; }
L_00151DF0:
    set32(c.r[4], c.r[16].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 1840u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[5], 0u + 16u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[6], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151E18u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00151E18u) [[unlikely]] return; }
L_00151E18:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151E34u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00151E34u) [[unlikely]] return; }
L_00151E34:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 498u)));
    c.f[0] = 0u;
    c.budget -= 2;
L_00151E3C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 496u)));
    c.f[2] = c.r[3].w[0];
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x3C930000u);  if (t) { goto L_00151E88; } }
    c.r[2].d[0] = c.r[2].d[0] | 29884ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00151E88; } }
    c.f[12] = c.f[0];
    c.budget -= 2;
L_00151E88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151E98u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00151E98u) [[unlikely]] return; }
L_00151E98:
    set32(c.r[3], c.r[16].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1840u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], 0u + 15u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151EBCu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00151EBCu) [[unlikely]] return; }
L_00151EBC:
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 101u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00151F38; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 16u);  if (t) { goto L_00151F38; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_00151F38; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00151F08; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00151F08; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1970u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00151F38; } }
    c.budget -= 1;
L_00151F08:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 886u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00151FE0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8656u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00151FE0; } }
    c.budget -= 1;
L_00151F38:
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    st32((c.r[1].w[0] + 19444u), c.r[3].w[0]);
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19456u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[1].w[0] + 19452u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 108u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 24;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00151FC0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00151FC0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1970u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], c.r[29].w[0] + 104u);  if (t) { goto L_00151FC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151FB8u);  if (depth < kMaxDepth) unit_0013(c, 354u, depth + 1u); else { c.pc = 0x0014FED0u; return; } if (c.pc != 0x00151FB8u) [[unlikely]] return; }
L_00151FB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00152050; } }
L_00151FC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151FC8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 28u, depth + 1u); else { c.pc = 0x001501D0u; return; } if (c.pc != 0x00151FC8u) [[unlikely]] return; }
L_00151FC8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151FD4u); set32(c.r[5], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_0013(c, 352u, depth + 1u); else { c.pc = 0x0014FE70u; return; } if (c.pc != 0x00151FD4u) [[unlikely]] return; }
L_00151FD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00152050; } }
    c.budget -= 1;
L_00151FE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00151FE8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00151FE8u) [[unlikely]] return; }
L_00151FE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.f[3] = c.r[2].w[0];
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = c.r[2].w[0];
    c.f[14] = 0u;
    c.f[12] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152010u); c.f[13] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00152010u) [[unlikely]] return; }
L_00152010:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F260000u);  if (t) { goto L_00152038; } }
    set32(c.r[4], 0u + 4u);
    c.budget -= 1;
L_00152020:
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152030u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0076(c, 73u, depth + 1u); else { c.pc = 0x002D90F0u; return; } if (c.pc != 0x00152030u) [[unlikely]] return; }
L_00152030:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00152050; } }
L_00152038:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F260000u);
    c.budget -= 2;
L_00152040:
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152050u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0076(c, 73u, depth + 1u); else { c.pc = 0x002D90F0u; return; } if (c.pc != 0x00152050u) [[unlikely]] return; }
L_00152050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152058u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 197u, depth + 1u); else { c.pc = 0x00152100u; return; } if (c.pc != 0x00152058u) [[unlikely]] return; }
L_00152058:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001520D8; } }
    set32(c.r[16], ld32((c.r[19].w[0] + 1492u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001520D8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001520D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152084u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 276u, depth + 1u); else { c.pc = 0x003C6520u; return; } if (c.pc != 0x00152084u) [[unlikely]] return; }
    goto L_00152084;
L_00152080:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00152084:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001520A8; } }
    c.f[12] = ld32((c.r[29].w[0] + 80u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = ld32((c.r[17].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001520A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 199u, depth + 1u); else { c.pc = 0x001521B0u; return; } if (c.pc != 0x001520A8u) [[unlikely]] return; }
L_001520A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001520B4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 276u, depth + 1u); else { c.pc = 0x003C6520u; return; } if (c.pc != 0x001520B4u) [[unlikely]] return; }
L_001520B4:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001520D8; } }
    c.f[13] = ld32((c.r[17].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[29].w[0] + 80u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001520D8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0014(c, 199u, depth + 1u); else { c.pc = 0x001521B0u; return; } if (c.pc != 0x001520D8u) [[unlikely]] return; }
L_001520D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00152100:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 7u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);  if (t) { goto L_00152130; } }
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8925u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00152130; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001521A8; } }
    c.budget -= 1;
L_00152130:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[3], 0u + 43u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00152148; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001521A8; } }
L_00152148:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 515u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 27856u);
    c.budget -= 4;
L_00152158:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[6].d[0];  if (t) { goto L_00152190; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00152198; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 515u));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_00152190; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 8658u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00152190; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001521A8; } }
    c.budget -= 1;
L_00152190:
    set32(c.r[6], c.r[6].w[0] + 8704u);
    c.budget -= 2;
L_00152198:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00152158u | kUnwind; return; } goto L_00152158; } }
L_001521A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001521B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], c.r[5].w[0] << 4);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[6], c.r[2].w[0] + 1576u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    c.f[21] = c.f[12];
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 1576u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 41u)));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = c.f[13];  if (t) { goto L_00152230; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00152218; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 13u)));
    c.budget -= 1;
L_00152200:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);  if (t) { goto L_00152218; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 1600u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);  if (t) { goto L_00152240; } }
L_00152218:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[2], c.r[2].w[0] - 1360u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);  if (t) { goto L_00152240; } }
    c.budget -= 1;
L_00152230:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[2], c.r[2].w[0] - 1600u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    c.budget -= 4;
L_00152240:
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19444u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1573u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (t) { goto L_001522A0; } }
    c.f[2] = ld32((c.r[1].w[0] + 13116u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.f[1] = ld32((c.r[1].w[0] + 13120u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.f[0] = ld32((c.r[1].w[0] + 13124u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19456u), c.f[0]);  if (t) { goto L_001522D0; } }
L_001522A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.f[2] = ld32((c.r[1].w[0] + 13104u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.f[1] = ld32((c.r[1].w[0] + 13108u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.f[0] = ld32((c.r[1].w[0] + 13112u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19456u), c.f[0]);
    c.budget -= 12;
L_001522D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001522D8u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x001522D8u) [[unlikely]] return; }
L_001522D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    set32(c.r[3], c.r[16].w[0] >> 31);
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152310u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x00152310u) [[unlikely]] return; }
L_00152310:
    c.f[14] = 0u;
    c.f[12] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152320u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00152320u) [[unlikely]] return; }
L_00152320:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 13136u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 13140u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[13] = ld32((c.r[2].w[0]));
    c.f[14] = 0u;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015234Cu); c.f[12] = ld32((c.r[3].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0015234Cu) [[unlikely]] return; }
L_0015234C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152368u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00152368u) [[unlikely]] return; }
L_00152368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152370u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x00152370u) [[unlikely]] return; }
L_00152370:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 15u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152384u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00152384u) [[unlikely]] return; }
L_00152384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015238Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0015238Cu) [[unlikely]] return; }
L_0015238C:
    set32(c.r[3], 0u + 100u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    mmi::div(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.hi.d[0];
    c.r[16].d[0] = c.r[3].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[3], c.r[16].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001523D4u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x001523D4u) [[unlikely]] return; }
L_001523D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41500000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001523E8u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001523E8u) [[unlikely]] return; }
L_001523E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001523F0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001523F0u) [[unlikely]] return; }
L_001523F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 15u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152404u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00152404u) [[unlikely]] return; }
L_00152404:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015240Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x0015240Cu) [[unlikely]] return; }
L_0015240C:
    set32(c.r[2], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015242Cu); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x0015242Cu) [[unlikely]] return; }
L_0015242C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41500000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152440u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00152440u) [[unlikely]] return; }
    goto L_00152440;
L_0015243C:
    c.f[14] = c.f[13];
    c.budget -= 1;
L_00152440:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 15u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152454u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00152454u) [[unlikely]] return; }
L_00152454:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00152470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152484u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x00152484u) [[unlikely]] return; }
L_00152484:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00152660; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[16].w[0] + 304u);  if (t) { goto L_00152578; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001524B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001525D8; } }
    c.budget -= 1;
L_001524B0:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[5], 0u + 120u);
    st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[8], c.r[8].w[0] + 13232u);
    set32(c.r[9], ld32((c.r[28].w[0] - 23780u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[5], c.r[5].w[0] + 13152u);
    set32(c.r[7], 0u - 1u);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 58u)));
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0])));
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[8], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.budget -= 22;
    { const bool t = c.r[5].d[0] == c.r[7].d[0]; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001525D8; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[6], c.r[6].w[0] + 12208u);
    c.budget -= 2;
L_00152510:
    set32(c.r[5], c.r[5].w[0] << 5);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[3].w[0] + 12u), c.f[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[3].w[0] + 16u), c.f[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2u)));
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 80u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.budget -= 24;
    { const bool t = c.r[5].d[0] != c.r[7].d[0]; set32(c.r[3], c.r[3].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00152510u | kUnwind; return; } goto L_00152510; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001525D8; } }
L_00152578:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001525A8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001525D8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00152660; } }
    c.budget -= 1;
L_001525A8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001525D8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00152660; } }
    c.budget -= 1;
L_001525D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 80u)));
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00152658; } }
    c.f[0] = 0u;
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
L_001525F8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00152610; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00152640; } }
L_00152610:
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[1] = ld32((c.r[6].w[0] + 12u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[6].w[0] + 12u), c.f[1]);
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[1] = ld32((c.r[6].w[0] + 12u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00152640; } }
L_0015263C:
    st32((c.r[6].w[0] + 12u), c.f[0]);
    c.budget -= 1;
L_00152640:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 80u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001525F8u | kUnwind; return; } goto L_001525F8; } }
    c.budget -= 1;
L_00152658:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00152660:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00152670:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 50u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00152850; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 384u)));
    set32(c.r[21], c.r[4].w[0] + 304u);
    c.r[20].d[0] = c.r[21].d[0] + 0ull;
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00152850; } }
L_001526B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001526C0u); set32(c.r[19], ld32((c.r[20].w[0] + 8u)));  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x001526C0u) [[unlikely]] return; }
L_001526C0:
    c.f[13] = ld32((c.r[20].w[0] + 16u));
    c.f[14] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001526D0u); c.f[12] = ld32((c.r[20].w[0] + 12u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001526D0u) [[unlikely]] return; }
L_001526D0:
    c.r[4].d[0] = ld16((c.r[19].w[0]));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 7u);  if (t) { goto L_001526E8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00152758; } }
L_001526E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19456u), 0u);
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19444u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 101u)));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);  if (t) { goto L_00152740; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] + 8480u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19460u), c.r[3].w[0]);  if (t) { goto L_00152838; } }
    c.budget -= 1;
L_00152740:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[3], c.r[3].w[0] + 15440u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19460u), c.r[3].w[0]);  if (t) { goto L_00152838; } }
    c.budget -= 1;
L_00152758:
    set32(c.r[3], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19444u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 101u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);  if (t) { goto L_00152790; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] + 8240u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19460u), c.r[3].w[0]);  if (t) { goto L_001527A0; } }
L_00152790:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[3], c.r[3].w[0] + 14720u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[3].w[0]);
    c.budget -= 4;
L_001527A0:
    set32(c.r[17], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[3], 0u + 255u);
    c.r[4].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[18], ld32((c.r[19].w[0] + 28u)));  if (t) { goto L_00152838; } }
    c.budget -= 1;
L_001527B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001527C0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001527C0u) [[unlikely]] return; }
L_001527C0:
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 11616u);
    c.f[14] = ld32((c.r[19].w[0] + 16u));
    set32(c.r[4], 0u + 1u);
    c.f[15] = ld32((c.r[19].w[0] + 20u));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001527F4u); set32(c.r[5], c.r[5].w[0] + 19408u);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x001527F4u) [[unlikely]] return; }
L_001527F4:
    c.f[12] = ld32((c.r[18].w[0]));
    c.f[13] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152804u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00152804u) [[unlikely]] return; }
L_00152804:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152818u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00152818u) [[unlikely]] return; }
L_00152818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152820u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00152820u) [[unlikely]] return; }
L_00152820:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], 0u + 255u);
    c.r[4].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001527B8u | kUnwind; return; } goto L_001527B8; } }
    c.budget -= 1;
L_00152838:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 80u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001526B8u | kUnwind; return; } goto L_001526B8; } }
    c.budget -= 1;
L_00152850:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00152880:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 39u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00152A80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001528A4u);  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x001528A4u) [[unlikely]] return; }
L_001528A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00152A80; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] - 27856u);
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 82u)));
    set32(c.r[4], c.r[6].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 9);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 515u));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 221u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00152A80; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] + 304u);  if (t) { goto L_00152918; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 515u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 106u));
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 10;
L_00152918:
    c.r[6].d[0] = ld8((c.r[4].w[0] + 515u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    c.r[7].d[0] = ld16((c.r[3].w[0] + 4u));
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = ld16((c.r[5].w[0] + 106u));
    c.budget -= 8;
    { const bool t = c.r[7].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 130u);  if (t) { goto L_00152990; } }
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[6].d[0] = ld16((c.r[28].w[0] - 24152u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    c.r[6].d[0] = c.r[6].d[0] | 4ull;
    st16((c.r[28].w[0] - 24152u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 515u));
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = ld16((c.r[5].w[0] + 106u));
    c.r[5].d[0] = c.r[6].d[0] & 65280ull;
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00152980; } }
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 6u));
    c.r[5].d[0] = c.r[5].d[0] | 1ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_00152990; } }
    c.budget -= 1;
L_00152980:
    c.r[5].d[0] = ld16((c.r[3].w[0] + 6u));
    c.r[5].d[0] = c.r[5].d[0] | 16ull;
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 4;
L_00152990:
    c.r[5].d[0] = ld16((c.r[3].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[6].d[0] = c.r[5].d[0] & 65535ull;  if (t) { goto L_00152A78; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_001529F0; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23788u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 184u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001529F0; } }
    c.r[4].d[0] = ld8((c.r[4].w[0] + 515u));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 186u));
    set32(c.r[4], c.r[5].w[0] << (c.r[4].w[0] & 31u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001529F0; } }
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 112u), 0u);
    c.r[3].d[0] = ld16((c.r[28].w[0] - 24152u));
    c.r[3].d[0] = c.r[3].d[0] & 65531ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 24152u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00152A78; } }
L_001529F0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0; set32(c.r[5], c.r[4].w[0] - 1u);  if (t) { goto L_00152A38; } }
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.f[2] = ld32((c.r[16].w[0] + 112u));
    c.r[3].d[0] = c.r[4].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 112u), c.f[1]);  if (t) { goto L_00152A78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 112u), c.f[0]);  if (t) { goto L_00152A78; } }
    c.budget -= 1;
L_00152A38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.f[2] = ld32((c.r[16].w[0] + 112u));
    c.r[4].d[0] = c.r[4].d[0] | 52429ull;
    c.f[1] = c.r[4].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 112u), c.f[1]);  if (t) { goto L_00152A78; } }
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[28].w[0] - 24152u));
    c.r[3].d[0] = c.r[3].d[0] & 65531ull;
    st16((c.r[28].w[0] - 24152u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_00152A78:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00152A80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00152A90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 50u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00152DE0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 322u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00430000u);  if (t) { goto L_00152DE0; } }
    c.r[4].d[0] = ld16((c.r[28].w[0] - 24152u));
    c.r[3].d[0] = ld8((c.r[1].w[0] + 12786u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00152DE0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 82u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 310u));
    set32(c.r[3], c.r[3].w[0] - 27856u);
    set32(c.r[16], c.r[18].w[0] + 304u);
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 9);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_00152C38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152B08u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00152B08u) [[unlikely]] return; }
L_00152B08:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2D60000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152B1Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00152B1Cu) [[unlikely]] return; }
L_00152B1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152B24u);  if (depth < kMaxDepth) unit_0018(c, 210u, depth + 1u); else { c.pc = 0x001626F0u; return; } if (c.pc != 0x00152B24u) [[unlikely]] return; }
L_00152B24:
    c.f[12] = ld32((c.r[18].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152B38u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00152B38u) [[unlikely]] return; }
L_00152B38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19456u), 0u);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    set32(c.r[5], 0u + 13u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 12080u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152B90u); st32((c.r[1].w[0] + 19452u), 0u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00152B90u) [[unlikely]] return; }
L_00152B90:
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st32((c.r[1].w[0] + 19444u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 10880u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 4u));
    c.budget -= 13;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00152BD0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00152BE8; } }
L_00152BD0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_00152BE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42E80000u);
    c.f[15] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], 0u + 1u);
    c.f[1] = fp::mul(c.f[15], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42980000u);
    set32(c.r[5], c.r[5].w[0] + 19408u);
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152C20u); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x00152C20u) [[unlikely]] return; }
L_00152C20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152C34u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00152C34u) [[unlikely]] return; }
L_00152C34:
    c.budget -= 1;
L_00152C38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152C40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 219u, depth + 1u); else { c.pc = 0x00162A40u; return; } if (c.pc != 0x00152C40u) [[unlikely]] return; }
    goto L_00152C40;
L_00152C3C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00152C40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 35u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152C50u); set32(c.r[4], c.r[4].w[0] + 19408u);  if (depth < kMaxDepth) unit_0018(c, 203u, depth + 1u); else { c.pc = 0x001624C0u; return; } if (c.pc != 0x00152C50u) [[unlikely]] return; }
L_00152C50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152C64u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00152C64u) [[unlikely]] return; }
L_00152C64:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 6320u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152C78u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00152C78u) [[unlikely]] return; }
L_00152C78:
    set32(c.r[3], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 6u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00152CD0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_00152CD0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    st32((c.r[1].w[0] + 19448u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19456u), c.r[2].w[0]);  if (t) { goto L_00152CF0; } }
    c.budget -= 1;
L_00152CD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19456u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[2].w[0]);
    c.budget -= 8;
L_00152CF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[2], c.r[2].w[0] + 6080u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 4u));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00152D18; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00152D30; } }
L_00152D18:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_00152D30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42E80000u);
    c.f[15] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], 0u + 1u);
    c.f[1] = fp::mul(c.f[15], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42980000u);
    set32(c.r[5], c.r[5].w[0] + 19408u);
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152D68u); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x00152D68u) [[unlikely]] return; }
L_00152D68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43810000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2600000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152D84u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00152D84u) [[unlikely]] return; }
L_00152D84:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152D98u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00152D98u) [[unlikely]] return; }
L_00152D98:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00152DE0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0xC1880000u);  if (t) { goto L_00152DE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152DCCu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00152DCCu) [[unlikely]] return; }
L_00152DCC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[4], c.r[4].w[0] + 7280u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152DE0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 8u, depth + 1u); else { c.pc = 0x002D80E0u; return; } if (c.pc != 0x00152DE0u) [[unlikely]] return; }
L_00152DE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00152E00:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 116u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00152E24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 326u)));  if (t) { goto L_00152E28; } }
L_00152E24:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 327u)));
    c.budget -= 1;
L_00152E28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00152E30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
L_00152E3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00152E44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x00152E44u) [[unlikely]] return; }
L_00152E44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00153328; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 23780u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 336u)));
    set32(c.r[6], c.r[6].w[0] - 27856u);
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[8], 0u + 2u);
    set32(c.r[4], c.r[16].w[0] + 304u);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 82u)));
    set32(c.r[3], c.r[3].w[0] + 1024u);
    set32(c.r[7], c.r[9].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] << 9);
    set32(c.r[10], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].d[0] = ld8((c.r[10].w[0] + 515u));
    st16((c.r[16].w[0] + 336u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 20;
    { const bool t = c.r[9].d[0] == c.r[8].d[0]; set32(c.r[3], c.r[3].w[0] + 140u);  if (t) { goto L_00153130; } }
    set32(c.r[7], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[7].d[0];  if (t) { goto L_00152FB8; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_00152EB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00153320; } }
L_00152EB8:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; c.r[1].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;  if (t) { goto L_00152F00; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00152ED8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_00152F08; } }
L_00152ED8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 34u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00152EF0; } }
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 34u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_00152F08; } }
L_00152EF0:
    set32(c.r[5], c.r[6].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_00152F08; } }
    c.budget -= 1;
L_00152F00:
    set32(c.r[5], 0u + 10u);
    st16((c.r[4].w[0] + 34u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 2;
L_00152F08:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00152F60; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], 0u + 10u);
    set32(c.r[5], 0u + 20u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[8].w[0]));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 4u), c.r[7].w[0]);
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[7].w[0]);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 18u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 20u), c.r[7].w[0]);
    c.budget -= 18;
L_00152F60:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    c.f[1] = c.r[6].w[0];
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 24u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 28u), c.f[0]);  if (t) { goto L_00153320; } }
L_00152FB8:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00153030; } }
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    c.f[1] = c.r[6].w[0];
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 24u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 28u), c.f[0]);  if (t) { goto L_00153320; } }
L_00153030:
    set32(c.r[6], ld32((c.r[28].w[0] - 23788u)));
    c.r[5].d[0] = ld8((c.r[10].w[0] + 515u));
    c.r[6].d[0] = ld8((c.r[6].w[0] + 235u));
    set32(c.r[5], c.r[7].w[0] << (c.r[5].w[0] & 31u));
    c.budget -= 4;
L_00153040:
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[5], c.r[9].w[0] + 1u);  if (t) { goto L_00153060; } }
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 36u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00153320; } }
    c.budget -= 1;
L_00153060:
    c.r[9].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3D080000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[5].d[0] = c.r[5].d[0] | 34953ull;
    c.f[2] = c.r[5].w[0];
    c.f[0] = c.r[3].w[0];
    c.budget -= 8;
L_00153080:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00153098; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));  if (t) { goto L_001530A0; } }
    c.budget -= 1;
L_00153098:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001530A0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001530C8; } }
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[6].w[0] + 4u), c.f[1]);  if (t) { goto L_001530C8; } }
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.budget -= 2;
L_001530C8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[3].d[0] = c.r[10].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[9], c.r[9].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00153080u | kUnwind; return; } goto L_00153080; } }
    c.r[3].d[0] = c.r[9].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00153320; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[3], 0u + 20u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + 16u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[6].w[0]);  if (t) { goto L_00153320; } }
L_00153130:
    set32(c.r[6], ld32((c.r[28].w[0] - 23788u)));
    c.r[5].d[0] = ld8((c.r[10].w[0] + 515u));
    set32(c.r[7], 0u + 1u);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 235u));
    set32(c.r[5], c.r[7].w[0] << (c.r[5].w[0] & 31u));
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00153208; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 36u)));
    set32(c.r[5], c.r[6].w[0] - c.r[7].w[0]);
    c.r[1].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00153178; } }
    st16((c.r[4].w[0] + 36u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 34u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_001531B0; } }
L_00153178:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 34u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00153190; } }
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 34u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_001531B0; } }
L_00153190:
    set32(c.r[5], c.r[6].w[0] - 5u);
    st16((c.r[4].w[0] + 36u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 36u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001531B0; } }
    st16((c.r[4].w[0] + 36u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 1;
L_001531B0:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    c.f[1] = c.r[6].w[0];
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 24u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 36u)));
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 28u), c.f[0]);  if (t) { goto L_00153320; } }
    c.budget -= 1;
L_00153208:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00153290; } }
    st16((c.r[4].w[0] + 36u), static_cast<std::uint16_t>(0u));
    c.r[5].d[0] = 0ull << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    st16((c.r[4].w[0] + 34u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    c.f[1] = c.r[6].w[0];
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 24u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 29;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 28u), c.f[0]);  if (t) { goto L_00153320; } }
L_00153290:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 28u), c.r[6].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 24u), c.r[6].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3D080000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[5].d[0] = c.r[5].d[0] | 34953ull;
    c.f[2] = c.r[5].w[0];
    c.f[0] = c.r[3].w[0];
    c.budget -= 10;
L_001532B8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001532D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));  if (t) { goto L_001532D8; } }
    c.budget -= 1;
L_001532D0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001532D8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00153308; } }
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 4u), c.f[1]);  if (t) { goto L_00153308; } }
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.budget -= 4;
L_00153308:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[9], c.r[9].w[0] + 10u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001532B8u | kUnwind; return; } goto L_001532B8; } }
    c.budget -= 1;
L_00153320:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00153328:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00153340:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 50u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00153910; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153378u);  if (depth < kMaxDepth) unit_0014(c, 254u, depth + 1u); else { c.pc = 0x00152E00u; return; } if (c.pc != 0x00153378u) [[unlikely]] return; }
L_00153378:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] - 27856u);
    set32(c.r[17], c.r[19].w[0] + 304u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 9);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001533A8u); set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x001533A8u) [[unlikely]] return; }
L_001533A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 15680u);
    set32(c.r[4], 0u + 2u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00153458; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001533F8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001533F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001535C0; } }
    c.budget -= 1;
L_001533F8:
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + 13264u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], c.r[2].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + 13268u);
    c.f[0] = ld32((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[2], c.r[2].w[0] + 13272u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[1].w[0] + 19448u), c.f[0]);
    c.budget -= 17;
L_0015343C:
    c.f[0] = ld32((c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19456u), c.f[0]);  if (t) { goto L_001535C0; } }
L_00153458:
    c.r[20].d[0] = c.r[16].d[0] << 56;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00153550; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_001534E8; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00153480; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001535C0; } }
L_00153480:
    set32(c.r[2], c.r[20].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[20], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 13264u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[1].w[0] + 19448u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001534ACu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 32u)));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001534ACu) [[unlikely]] return; }
L_001534AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001534B4u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x001534B4u) [[unlikely]] return; }
L_001534B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[2], c.r[2].w[0] + 13272u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[1].w[0] + 19452u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19456u), c.f[0]);  if (t) { goto L_001535C0; } }
    c.budget -= 1;
L_001534E8:
    set32(c.r[2], c.r[20].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[20], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 13264u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[1].w[0] + 19448u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153514u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 32u)));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x00153514u) [[unlikely]] return; }
L_00153514:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015351Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x0015351Cu) [[unlikely]] return; }
L_0015351C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[2], c.r[2].w[0] + 13272u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[1].w[0] + 19452u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19456u), c.f[0]);  if (t) { goto L_001535C0; } }
    c.budget -= 1;
L_00153550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153558u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 32u)));  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x00153558u) [[unlikely]] return; }
L_00153558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153560u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x00153560u) [[unlikely]] return; }
L_00153560:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[2], c.r[20].w[0] << 1);
    c.f[1] = c.r[4].w[0];
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 13268u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[1].w[0] + 19448u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001535A0u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 32u)));  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001535A0u) [[unlikely]] return; }
L_001535A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001535A8u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x001535A8u) [[unlikely]] return; }
L_001535A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[1].w[0] + 19456u), c.f[0]);
    c.budget -= 6;
L_001535C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001535D4u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001535D4u) [[unlikely]] return; }
L_001535D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001535E8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001535E8u) [[unlikely]] return; }
L_001535E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001535F0u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x001535F0u) [[unlikely]] return; }
L_001535F0:
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8693u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_00153630; } }
    st32((c.r[1].w[0] + 19448u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19456u), 0u);  if (t) { goto L_00153650; } }
L_00153630:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.budget -= 3;
L_0015363C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19456u), c.r[2].w[0]);
    c.budget -= 5;
L_00153650:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = ld32((c.r[17].w[0] + 28u));
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153664u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00153664u) [[unlikely]] return; }
L_00153664:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153678u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00153678u) [[unlikely]] return; }
L_00153678:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001536B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00153800; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 515u));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 235u));
    set32(c.r[3], c.r[5].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00153800; } }
    c.budget -= 1;
L_001536B0:
    c.r[5].d[0] = c.r[16].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + 13264u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[20], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[19], c.r[20].w[0] + 4u);
    set32(c.r[18], c.r[20].w[0] + 8u);
    c.budget -= 12;
L_001536E0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001537F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001536F4u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x001536F4u) [[unlikely]] return; }
L_001536F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43090000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153710u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00153710u) [[unlikely]] return; }
L_00153710:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00153738; } }
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42080000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153738u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00153738u) [[unlikely]] return; }
L_00153738:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015374Cu); c.f[13] = fp::mul(c.f[12], c.f[12]);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x0015374Cu) [[unlikely]] return; }
L_0015374C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], c.r[2].w[0] + 14960u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[4], c.r[4].w[0] - 16848u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 12u);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[1].w[0] + 19444u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001537C4u); st32((c.r[1].w[0] + 19456u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 4u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x001537C4u) [[unlikely]] return; }
L_001537C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001537D8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x001537D8u) [[unlikely]] return; }
L_001537D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 16832u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001537ECu); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_0076(c, 4u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x001537ECu) [[unlikely]] return; }
L_001537EC:
    c.budget -= 1;
L_001537F0:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[3].d[0] = c.r[21].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001536E0u | kUnwind; return; } goto L_001536E0; } }
L_00153800:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 7u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);  if (t) { goto L_00153828; } }
    set32(c.r[3], 0u + 4u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8926u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00153910; } }
    c.budget -= 1;
L_00153828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153830u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00153830u) [[unlikely]] return; }
L_00153830:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    st32((c.r[1].w[0] + 19412u), 0u);
    c.f[1] = c.r[16].w[0];
    set32(c.r[2], c.r[2].w[0] + 13520u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + 13264u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[4].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + 13268u);
    set32(c.r[4], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[3], c.r[3].w[0] + 13272u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[1].w[0] + 19416u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    st32((c.r[1].w[0] + 19448u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 51;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001538FCu); st32((c.r[1].w[0] + 19456u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001538FCu) [[unlikely]] return; }
L_001538FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153910u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00153910u) [[unlikely]] return; }
L_00153910:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00153940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 39u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00153A20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153964u);  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x00153964u) [[unlikely]] return; }
L_00153964:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00153A20; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] - 27856u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 82u)));
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 9);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8688u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;  if (t) { goto L_001539F8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001539A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 92u), 0u);  if (t) { goto L_001539E0; } }
L_001539A8:
    c.r[1].d[0] = c.r[3].sd[0] < 40ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001539C0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_001539E0; } }
L_001539C0:
    c.r[1].d[0] = c.r[3].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001539D8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_001539E0; } }
L_001539D8:
    set32(c.r[3], 0u + 3u);
    st32((c.r[16].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 2;
L_001539E0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8692u)));
    set32(c.r[3], 0u + 60u);
    st32((c.r[16].w[0] + 96u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00153A10; } }
    c.budget -= 1;
L_001539F8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00153A10; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00153A10:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_00153A20; } }
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00153A20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00153A30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 50u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00153C00; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 322u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00153C00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153A68u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00153A68u) [[unlikely]] return; }
L_00153A68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3700000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B20000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153A84u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00153A84u) [[unlikely]] return; }
L_00153A84:
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.f[0] = c.r[2].w[0];
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 116u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);  if (t) { goto L_00153AE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st32((c.r[1].w[0] + 19456u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19452u), c.r[2].w[0]);  if (t) { goto L_00153B00; } }
    c.budget -= 1;
L_00153AE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19456u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42BE0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42180000u);
    st32((c.r[1].w[0] + 19448u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.r[2].w[0]);
    c.budget -= 8;
L_00153B00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 16400u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    set32(c.r[5], 0u + 13u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153B24u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00153B24u) [[unlikely]] return; }
L_00153B24:
    set32(c.r[6], ld32((c.r[17].w[0] + 92u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 13312u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[16].w[0]));
    c.f[13] = ld32((c.r[16].w[0] + 4u));
    c.f[14] = ld32((c.r[16].w[0] + 8u));
    c.f[15] = ld32((c.r[16].w[0] + 12u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153B60u); set32(c.r[5], c.r[5].w[0] + 19408u);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x00153B60u) [[unlikely]] return; }
L_00153B60:
    set32(c.r[3], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 13456u);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[2], c.r[2].w[0] - 1840u);
    c.f[14] = 0u;
    st32((c.r[1].w[0] + 19448u), c.f[0]);
    set32(c.r[16], c.r[16].w[0] + 20u);
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19456u), c.f[0]);
    set32(c.r[16], c.r[16].w[0] + 8u);
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);
    c.f[13] = ld32((c.r[16].w[0] + 4u));
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153BECu); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00153BECu) [[unlikely]] return; }
L_00153BEC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153C00u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00153C00u) [[unlikely]] return; }
L_00153C00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00153C20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153C34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 214u, depth + 1u); else { c.pc = 0x00162790u; return; } if (c.pc != 0x00153C34u) [[unlikely]] return; }
L_00153C34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00153CA0; } }
L_00153C3C:
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 116u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);  if (t) { goto L_00153CA0; } }
    set32(c.r[3], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 8944u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 15u);  if (t) { goto L_00153C68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00153C98; } }
    c.budget -= 1;
L_00153C68:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 180u)));
    c.r[1].d[0] = c.r[3].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00153C90; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 31ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00153C98; } }
    c.budget -= 1;
L_00153C90:
    set32(c.r[3], 0u + 15u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00153C98:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00153CA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00153CB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 50u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0015(c, 20u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153CD4u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00153CD4u) [[unlikely]] return; }
L_00153CD4:
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 19408u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[1].w[0] + 19444u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);  if (t) { goto L_00153D20; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 19456u), c.r[2].w[0]);  if (t) { goto L_00153D38; } }
L_00153D20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19448u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19452u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st32((c.r[1].w[0] + 19456u), c.f[0]);
    c.budget -= 6;
L_00153D38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 8944u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);  if (t) { goto L_00153D78; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] - 1120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153D5Cu); st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00153D5Cu) [[unlikely]] return; }
L_00153D5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153D70u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00153D70u) [[unlikely]] return; }
L_00153D70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0015(c, 3u, depth); } }
L_00153D78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[2], c.r[2].w[0] - 1360u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153D8Cu); st32((c.r[1].w[0] + 19460u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00153D8Cu) [[unlikely]] return; }
L_00153D8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153DA0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00153DA0u) [[unlikely]] return; }
L_00153DA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 19408u)));
    set32(c.r[3], c.r[3].w[0] - 1840u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st32((c.r[1].w[0] + 19460u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153DC8u); st32((c.r[1].w[0] + 19408u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x00153DC8u) [[unlikely]] return; }
L_00153DC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC20C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43430000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153DE4u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00153DE4u) [[unlikely]] return; }
L_00153DE4:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 180u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153E24u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x00153E24u) [[unlikely]] return; }
L_00153E24:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153E38u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00153E38u) [[unlikely]] return; }
L_00153E38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153E4Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00153E4Cu) [[unlikely]] return; }
L_00153E4C:
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], 0u + 100u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 180u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[3], c.r[16].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153EA0u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x00153EA0u) [[unlikely]] return; }
L_00153EA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153EB4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00153EB4u) [[unlikely]] return; }
L_00153EB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153EC8u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00153EC8u) [[unlikely]] return; }
L_00153EC8:
    set32(c.r[2], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153EE8u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x00153EE8u) [[unlikely]] return; }
L_00153EE8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153EFCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00153EFCu) [[unlikely]] return; }
L_00153EFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[3], c.r[3].w[0] - 1600u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0200000u);
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153F24u); st32((c.r[1].w[0] + 19460u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00153F24u) [[unlikely]] return; }
L_00153F24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153F2Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x00153F2Cu) [[unlikely]] return; }
L_00153F2C:
    set32(c.r[7], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x22B60000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 60u);
    c.r[3].d[0] = c.r[3].d[0] | 15551ull;
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 182u)));
    mmi::div(c, 0, c.r[7].w[0], c.r[5].w[0]);
    c.r[7].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[7].w[0] << 5);
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - c.r[7].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[5].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[3], c.r[16].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153FB4u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x00153FB4u) [[unlikely]] return; }
L_00153FB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153FC8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x00153FC8u) [[unlikely]] return; }
L_00153FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153FD0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00153FD0u) [[unlikely]] return; }
L_00153FD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00153FE4u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00153FE4u) [[unlikely]] return; }
L_00153FE4:
    set32(c.r[2], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 19408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154004u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x002D9550u; return; } if (c.pc != 0x00154004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0015(c, 2u, depth);
}

}
