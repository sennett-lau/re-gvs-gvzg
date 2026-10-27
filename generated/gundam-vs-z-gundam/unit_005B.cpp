#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_005B[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0,
    23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 33, 0, 0, 34, 0, 35, 0,
    0, 0, 36, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 47, 48, 0, 49, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0,
    0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0,
    0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0,
    0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0,
    80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0,
    0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0,
    100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0,
    0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0,
    0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0,
    0, 0, 0, 122, 0, 0, 123, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0,
    146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0,
    0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0,
    156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0,
    161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0,
    0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 191,
    0, 192, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199,
    0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0,
    0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0,
    0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 0, 228, 0,
    0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0,
    0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0,
    0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0,
    253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 257, 0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0,
    267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0,
    0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0,
    0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0,
    289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 302, 0, 0, 0, 303, 0, 0,
    304, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309,
    0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0,
    321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0,
    0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 326, 0, 327, 0, 0, 328, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 333, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 344, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0,
    0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0,
    0, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0,
    359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0,
    365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0,
    369, 0, 0, 370, 0, 371, 372, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0,
};

void unit_005B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0026C000;
    case 2u: goto L_0026C030;
    case 3u: goto L_0026C080;
    case 4u: goto L_0026C0D0;
    case 5u: goto L_0026C10C;
    case 6u: goto L_0026C120;
    case 7u: goto L_0026C144;
    case 8u: goto L_0026C170;
    case 9u: goto L_0026C19C;
    case 10u: goto L_0026C1A4;
    case 11u: goto L_0026C1D0;
    case 12u: goto L_0026C1E0;
    case 13u: goto L_0026C294;
    case 14u: goto L_0026C29C;
    case 15u: goto L_0026C2B0;
    case 16u: goto L_0026C2CC;
    case 17u: goto L_0026C2D8;
    case 18u: goto L_0026C2E0;
    case 19u: goto L_0026C338;
    case 20u: goto L_0026C350;
    case 21u: goto L_0026C36C;
    case 22u: goto L_0026C378;
    case 23u: goto L_0026C380;
    case 24u: goto L_0026C390;
    case 25u: goto L_0026C3C4;
    case 26u: goto L_0026C3D4;
    case 27u: goto L_0026C3E0;
    case 28u: goto L_0026C448;
    case 29u: goto L_0026C454;
    case 30u: goto L_0026C468;
    case 31u: goto L_0026C5D4;
    case 32u: goto L_0026C5DC;
    case 33u: goto L_0026C5E4;
    case 34u: goto L_0026C5F0;
    case 35u: goto L_0026C5F8;
    case 36u: goto L_0026C608;
    case 37u: goto L_0026C610;
    case 38u: goto L_0026C61C;
    case 39u: goto L_0026C640;
    case 40u: goto L_0026C654;
    case 41u: goto L_0026C658;
    case 42u: goto L_0026C680;
    case 43u: goto L_0026C6A0;
    case 44u: goto L_0026C6A8;
    case 45u: goto L_0026C6B8;
    case 46u: goto L_0026C6C8;
    case 47u: goto L_0026C6DC;
    case 48u: goto L_0026C6E0;
    case 49u: goto L_0026C6E8;
    case 50u: goto L_0026C730;
    case 51u: goto L_0026C744;
    case 52u: goto L_0026C758;
    case 53u: goto L_0026C78C;
    case 54u: goto L_0026C7A8;
    case 55u: goto L_0026C7D0;
    case 56u: goto L_0026C7EC;
    case 57u: goto L_0026C850;
    case 58u: goto L_0026C864;
    case 59u: goto L_0026C878;
    case 60u: goto L_0026C88C;
    case 61u: goto L_0026C8B0;
    case 62u: goto L_0026C8CC;
    case 63u: goto L_0026C8EC;
    case 64u: goto L_0026C960;
    case 65u: goto L_0026C97C;
    case 66u: goto L_0026C9C0;
    case 67u: goto L_0026C9E0;
    case 68u: goto L_0026C9EC;
    case 69u: goto L_0026CA04;
    case 70u: goto L_0026CA18;
    case 71u: goto L_0026CA30;
    case 72u: goto L_0026CA54;
    case 73u: goto L_0026CA70;
    case 74u: goto L_0026CA90;
    case 75u: goto L_0026CAA4;
    case 76u: goto L_0026CAB0;
    case 77u: goto L_0026CAC8;
    case 78u: goto L_0026CAE0;
    case 79u: goto L_0026CB60;
    case 80u: goto L_0026CB80;
    case 81u: goto L_0026CBC0;
    case 82u: goto L_0026CC00;
    case 83u: goto L_0026CC40;
    case 84u: goto L_0026CC70;
    case 85u: goto L_0026CC98;
    case 86u: goto L_0026CCF0;
    case 87u: goto L_0026CD14;
    case 88u: goto L_0026CD24;
    case 89u: goto L_0026CD50;
    case 90u: goto L_0026CD90;
    case 91u: goto L_0026CD9C;
    case 92u: goto L_0026CDD8;
    case 93u: goto L_0026CDF0;
    case 94u: goto L_0026CE38;
    case 95u: goto L_0026CE40;
    case 96u: goto L_0026CE74;
    case 97u: goto L_0026CEA8;
    case 98u: goto L_0026CEC0;
    case 99u: goto L_0026CEE0;
    case 100u: goto L_0026CF00;
    case 101u: goto L_0026CF60;
    case 102u: goto L_0026CF84;
    case 103u: goto L_0026CFF8;
    case 104u: goto L_0026D034;
    case 105u: goto L_0026D094;
    case 106u: goto L_0026D120;
    case 107u: goto L_0026D150;
    case 108u: goto L_0026D168;
    case 109u: goto L_0026D19C;
    case 110u: goto L_0026D1D0;
    case 111u: goto L_0026D1EC;
    case 112u: goto L_0026D208;
    case 113u: goto L_0026D220;
    case 114u: goto L_0026D280;
    case 115u: goto L_0026D2A4;
    case 116u: goto L_0026D310;
    case 117u: goto L_0026D34C;
    case 118u: goto L_0026D3AC;
    case 119u: goto L_0026D464;
    case 120u: goto L_0026D4A0;
    case 121u: goto L_0026D4EC;
    case 122u: goto L_0026D50C;
    case 123u: goto L_0026D518;
    case 124u: goto L_0026D520;
    case 125u: goto L_0026D52C;
    case 126u: goto L_0026D5A0;
    case 127u: goto L_0026D5A8;
    case 128u: goto L_0026D5B0;
    case 129u: goto L_0026D5E4;
    case 130u: goto L_0026D63C;
    case 131u: goto L_0026D6F0;
    case 132u: goto L_0026D720;
    case 133u: goto L_0026D760;
    case 134u: goto L_0026D790;
    case 135u: goto L_0026D7D0;
    case 136u: goto L_0026D884;
    case 137u: goto L_0026D8B8;
    case 138u: goto L_0026D8D0;
    case 139u: goto L_0026D914;
    case 140u: goto L_0026DAF0;
    case 141u: goto L_0026DB14;
    case 142u: goto L_0026DB20;
    case 143u: goto L_0026DB40;
    case 144u: goto L_0026DB50;
    case 145u: goto L_0026DB70;
    case 146u: goto L_0026DB80;
    case 147u: goto L_0026DB9C;
    case 148u: goto L_0026DBB0;
    case 149u: goto L_0026DBDC;
    case 150u: goto L_0026DBF0;
    case 151u: goto L_0026DC08;
    case 152u: goto L_0026DC20;
    case 153u: goto L_0026DC40;
    case 154u: goto L_0026DC50;
    case 155u: goto L_0026DC70;
    case 156u: goto L_0026DC80;
    case 157u: goto L_0026DCA0;
    case 158u: goto L_0026DCB0;
    case 159u: goto L_0026DCD0;
    case 160u: goto L_0026DCE0;
    case 161u: goto L_0026DD00;
    case 162u: goto L_0026DD10;
    case 163u: goto L_0026DD30;
    case 164u: goto L_0026DD40;
    case 165u: goto L_0026DD50;
    case 166u: goto L_0026DD60;
    case 167u: goto L_0026DDA0;
    case 168u: goto L_0026DDB0;
    case 169u: goto L_0026DDC0;
    case 170u: goto L_0026DDC8;
    case 171u: goto L_0026DDE0;
    case 172u: goto L_0026DE38;
    case 173u: goto L_0026DEA8;
    case 174u: goto L_0026DEE8;
    case 175u: goto L_0026DF58;
    case 176u: goto L_0026DF90;
    case 177u: goto L_0026DFB0;
    case 178u: goto L_0026DFB8;
    case 179u: goto L_0026E030;
    case 180u: goto L_0026E060;
    case 181u: goto L_0026E0A4;
    case 182u: goto L_0026E0C8;
    case 183u: goto L_0026E11C;
    case 184u: goto L_0026E15C;
    case 185u: goto L_0026E184;
    case 186u: goto L_0026E1BC;
    case 187u: goto L_0026E1EC;
    case 188u: goto L_0026E208;
    case 189u: goto L_0026E260;
    case 190u: goto L_0026E274;
    case 191u: goto L_0026E27C;
    case 192u: goto L_0026E284;
    case 193u: goto L_0026E28C;
    case 194u: goto L_0026E2A0;
    case 195u: goto L_0026E2D0;
    case 196u: goto L_0026E328;
    case 197u: goto L_0026E348;
    case 198u: goto L_0026E360;
    case 199u: goto L_0026E37C;
    case 200u: goto L_0026E394;
    case 201u: goto L_0026E3F0;
    case 202u: goto L_0026E408;
    case 203u: goto L_0026E434;
    case 204u: goto L_0026E480;
    case 205u: goto L_0026E4A0;
    case 206u: goto L_0026E4D0;
    case 207u: goto L_0026E4E0;
    case 208u: goto L_0026E51C;
    case 209u: goto L_0026E560;
    case 210u: goto L_0026E594;
    case 211u: goto L_0026E5E0;
    case 212u: goto L_0026E720;
    case 213u: goto L_0026E754;
    case 214u: goto L_0026E760;
    case 215u: goto L_0026E778;
    case 216u: goto L_0026E790;
    case 217u: goto L_0026E7A8;
    case 218u: goto L_0026E7BC;
    case 219u: goto L_0026E7D8;
    case 220u: goto L_0026E810;
    case 221u: goto L_0026E85C;
    case 222u: goto L_0026E88C;
    case 223u: goto L_0026E8A4;
    case 224u: goto L_0026E8C0;
    case 225u: goto L_0026E8F0;
    case 226u: goto L_0026E95C;
    case 227u: goto L_0026E968;
    case 228u: goto L_0026E978;
    case 229u: goto L_0026E984;
    case 230u: goto L_0026E9A0;
    case 231u: goto L_0026E9A8;
    case 232u: goto L_0026E9D0;
    case 233u: goto L_0026E9E0;
    case 234u: goto L_0026E9F8;
    case 235u: goto L_0026EA10;
    case 236u: goto L_0026EA40;
    case 237u: goto L_0026EA5C;
    case 238u: goto L_0026EA70;
    case 239u: goto L_0026EA94;
    case 240u: goto L_0026EAD0;
    case 241u: goto L_0026EB00;
    case 242u: goto L_0026EB70;
    case 243u: goto L_0026EBC0;
    case 244u: goto L_0026EBEC;
    case 245u: goto L_0026EC28;
    case 246u: goto L_0026EC40;
    case 247u: goto L_0026EC6C;
    case 248u: goto L_0026ECBC;
    case 249u: goto L_0026ECD0;
    case 250u: goto L_0026ECF8;
    case 251u: goto L_0026ED44;
    case 252u: goto L_0026ED5C;
    case 253u: goto L_0026ED80;
    case 254u: goto L_0026ED94;
    case 255u: goto L_0026EDCC;
    case 256u: goto L_0026EDE0;
    case 257u: goto L_0026EE08;
    case 258u: goto L_0026EE10;
    case 259u: goto L_0026EE18;
    case 260u: goto L_0026EE34;
    case 261u: goto L_0026EE60;
    case 262u: goto L_0026EE70;
    case 263u: goto L_0026EEB4;
    case 264u: goto L_0026EEC0;
    case 265u: goto L_0026EEE0;
    case 266u: goto L_0026EEF0;
    case 267u: goto L_0026EF00;
    case 268u: goto L_0026EF20;
    case 269u: goto L_0026EF34;
    case 270u: goto L_0026EF60;
    case 271u: goto L_0026EF9C;
    case 272u: goto L_0026EFC4;
    case 273u: goto L_0026EFDC;
    case 274u: goto L_0026F040;
    case 275u: goto L_0026F090;
    case 276u: goto L_0026F0B0;
    case 277u: goto L_0026F120;
    case 278u: goto L_0026F140;
    case 279u: goto L_0026F1B0;
    case 280u: goto L_0026F260;
    case 281u: goto L_0026F274;
    case 282u: goto L_0026F284;
    case 283u: goto L_0026F294;
    case 284u: goto L_0026F2E0;
    case 285u: goto L_0026F2F4;
    case 286u: goto L_0026F304;
    case 287u: goto L_0026F314;
    case 288u: goto L_0026F360;
    case 289u: goto L_0026F380;
    case 290u: goto L_0026F3D0;
    case 291u: goto L_0026F414;
    case 292u: goto L_0026F430;
    case 293u: goto L_0026F488;
    case 294u: goto L_0026F4D0;
    case 295u: goto L_0026F4E4;
    case 296u: goto L_0026F540;
    case 297u: goto L_0026F54C;
    case 298u: goto L_0026F5C0;
    case 299u: goto L_0026F60C;
    case 300u: goto L_0026F618;
    case 301u: goto L_0026F658;
    case 302u: goto L_0026F664;
    case 303u: goto L_0026F674;
    case 304u: goto L_0026F680;
    case 305u: goto L_0026F694;
    case 306u: goto L_0026F6B0;
    case 307u: goto L_0026F6D4;
    case 308u: goto L_0026F6E0;
    case 309u: goto L_0026F6FC;
    case 310u: goto L_0026F708;
    case 311u: goto L_0026F720;
    case 312u: goto L_0026F79C;
    case 313u: goto L_0026F7AC;
    case 314u: goto L_0026F7BC;
    case 315u: goto L_0026F7C8;
    case 316u: goto L_0026F7DC;
    case 317u: goto L_0026F7F4;
    case 318u: goto L_0026F83C;
    case 319u: goto L_0026F84C;
    case 320u: goto L_0026F85C;
    case 321u: goto L_0026F880;
    case 322u: goto L_0026F8E4;
    case 323u: goto L_0026F904;
    case 324u: goto L_0026F91C;
    case 325u: goto L_0026F950;
    case 326u: goto L_0026F988;
    case 327u: goto L_0026F990;
    case 328u: goto L_0026F99C;
    case 329u: goto L_0026F9A4;
    case 330u: goto L_0026F9C0;
    case 331u: goto L_0026FA3C;
    case 332u: goto L_0026FA48;
    case 333u: goto L_0026FA54;
    case 334u: goto L_0026FA60;
    case 335u: goto L_0026FAA0;
    case 336u: goto L_0026FAB0;
    case 337u: goto L_0026FABC;
    case 338u: goto L_0026FAE0;
    case 339u: goto L_0026FB10;
    case 340u: goto L_0026FB3C;
    case 341u: goto L_0026FB58;
    case 342u: goto L_0026FB80;
    case 343u: goto L_0026FBA8;
    case 344u: goto L_0026FBB0;
    case 345u: goto L_0026FBD0;
    case 346u: goto L_0026FC50;
    case 347u: goto L_0026FC78;
    case 348u: goto L_0026FC94;
    case 349u: goto L_0026FCB0;
    case 350u: goto L_0026FCB8;
    case 351u: goto L_0026FD1C;
    case 352u: goto L_0026FD44;
    case 353u: goto L_0026FDA0;
    case 354u: goto L_0026FDE0;
    case 355u: goto L_0026FDF8;
    case 356u: goto L_0026FE10;
    case 357u: goto L_0026FE1C;
    case 358u: goto L_0026FE70;
    case 359u: goto L_0026FE80;
    case 360u: goto L_0026FEA0;
    case 361u: goto L_0026FEAC;
    case 362u: goto L_0026FEB8;
    case 363u: goto L_0026FED4;
    case 364u: goto L_0026FEDC;
    case 365u: goto L_0026FF00;
    case 366u: goto L_0026FF3C;
    case 367u: goto L_0026FF50;
    case 368u: goto L_0026FF60;
    case 369u: goto L_0026FF80;
    case 370u: goto L_0026FF8C;
    case 371u: goto L_0026FF94;
    case 372u: goto L_0026FF98;
    case 373u: goto L_0026FFBC;
    case 374u: goto L_0026FFE0;
    default: bad_entry(c, 0x0026C000u); return;
    }
L_0026C000:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    set32(c.r[3], 0u - 65u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 770u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st8((c.r[16].w[0] + 770u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026C030:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 770u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0026C120; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 759u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0026C110; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026C110; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8258u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C080u); set32(c.r[16], c.r[2].w[0] - c.r[18].w[0]);  if (depth < kMaxDepth) unit_005A(c, 314u, depth + 1u); else { c.pc = 0x0026B4E0u; return; } if (c.pc != 0x0026C080u) [[unlikely]] return; }
L_0026C080:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0026C0D8; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8258u)));
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[2].w[0] << 2);  if (t) { goto L_0026C110; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    set32(c.r[3], c.r[3].w[0] << (c.r[16].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & 576ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026C0B8; } }
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0026C0B8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8256u)));
    c.f[12] = ld32((c.r[19].w[0] + 8268u));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C0D0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x0026C0D0u) [[unlikely]] return; }
L_0026C0D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026C110; } }
L_0026C0D8:
    set32(c.r[3], 0u - 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0026C110; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8258u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_0026C110; } }
    st8((c.r[19].w[0] + 783u), static_cast<std::uint8_t>(0u));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8256u)));
    c.f[12] = ld32((c.r[19].w[0] + 8268u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C10Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x0026C10Cu) [[unlikely]] return; }
L_0026C10C:
    c.budget -= 1;
L_0026C110:
    c.r[5].d[0] = c.r[17].d[0] & 15ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C120u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 292u, depth + 1u); else { c.pc = 0x0026B230u; return; } if (c.pc != 0x0026C120u) [[unlikely]] return; }
L_0026C120:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 781u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026C148; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C144u); set32(c.r[5], 0u + 255u);  if (depth < kMaxDepth) unit_003C(c, 71u, depth + 1u); else { c.pc = 0x001F0680u; return; } if (c.pc != 0x0026C144u) [[unlikely]] return; }
L_0026C144:
    c.budget -= 1;
L_0026C148:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0026C170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 8516u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026C1B0; } }
    st32((c.r[16].w[0] + 8516u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C19Cu); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8286u)));  if (depth < kMaxDepth) unit_005A(c, 250u, depth + 1u); else { c.pc = 0x0026A890u; return; } if (c.pc != 0x0026C19Cu) [[unlikely]] return; }
L_0026C19C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C1A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 242u, depth + 1u); else { c.pc = 0x0026A770u; return; } if (c.pc != 0x0026C1A4u) [[unlikely]] return; }
L_0026C1A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026C1D0; } }
    c.budget -= 1;
L_0026C1B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 21312u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C1D0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C1D0u) [[unlikely]] return; }
L_0026C1D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026C1E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 7u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 709u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 709u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026C238; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026C238; } }
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.f[0]);  if (t) { goto L_0026C258; } }
L_0026C238:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 8;
L_0026C258:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + 19552u);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0026C280; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8256u)));
    c.budget -= 1;
L_0026C280:
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    c.f[12] = ld32((c.r[3].w[0] + 8u));
    set32(c.r[7], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C294u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x0026C294u) [[unlikely]] return; }
L_0026C294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C29Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 15u, depth + 1u); else { c.pc = 0x0026C2B0u; return; } if (c.pc != 0x0026C29Cu) [[unlikely]] return; }
L_0026C29C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026C2B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C2CCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 266u, depth + 1u); else { c.pc = 0x0026AD70u; return; } if (c.pc != 0x0026C2CCu) [[unlikely]] return; }
L_0026C2CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C2D8u); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 202u, depth + 1u); else { c.pc = 0x0026A010u; return; } if (c.pc != 0x0026C2D8u) [[unlikely]] return; }
L_0026C2D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C2E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x0026C2E0u) [[unlikely]] return; }
L_0026C2E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8326u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026C338; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 19552u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[7], c.r[3].w[0] + 16u);  if (t) { goto L_0026C324; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8256u)));
    c.r[5].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 2;
L_0026C324:
    set32(c.r[6], ld32((c.r[7].w[0] + 4u)));
    c.f[12] = ld32((c.r[7].w[0] + 8u));
    set32(c.r[7], ld32((c.r[7].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C338u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x0026C338u) [[unlikely]] return; }
L_0026C338:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026C350:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C36Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 266u, depth + 1u); else { c.pc = 0x0026AD70u; return; } if (c.pc != 0x0026C36Cu) [[unlikely]] return; }
L_0026C36C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C378u); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 202u, depth + 1u); else { c.pc = 0x0026A010u; return; } if (c.pc != 0x0026C378u) [[unlikely]] return; }
L_0026C378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C380u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x0026C380u) [[unlikely]] return; }
L_0026C380:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026C390:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[21].w[0] + 2048u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C3C4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0026C3C4u) [[unlikely]] return; }
L_0026C3C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C3D4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x0026C3D4u) [[unlikely]] return; }
L_0026C3D4:
    set32(c.r[4], c.r[21].w[0] + 1360u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C3E0u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0026C3E0u) [[unlikely]] return; }
L_0026C3E0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8659u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 851u)));
    set32(c.r[4], c.r[4].w[0] + 2272u);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 8658u));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], ld32((c.r[3].w[0])));  if (t) { goto L_0026C418; } }
    set32(c.r[18], c.r[18].w[0] + 128u);
    c.budget -= 1;
L_0026C418:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026C430; } }
    set32(c.r[18], c.r[18].w[0] + 64u);
    c.budget -= 2;
L_0026C430:
    set32(c.r[16], c.r[29].w[0] + 136u);
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C448u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0026C448u) [[unlikely]] return; }
L_0026C448:
    c.f[12] = ld32((c.r[29].w[0] + 132u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C454u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0026C454u) [[unlikely]] return; }
L_0026C454:
    c.f[13] = ld32((c.r[16].w[0]));
    c.f[12] = ld32((c.r[29].w[0] + 128u));
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C468u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0026C468u) [[unlikely]] return; }
L_0026C468:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (t) { goto L_0026C480; } }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0026C480:
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026C498; } }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0026C498:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 759u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0026C4B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026C518; } }
L_0026C4B0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_0026C4E8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026C4D0; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0026C4D0:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026C5C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0026C5C0; } }
L_0026C4E8:
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026C500; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0026C500:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026C5C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0026C5C0; } }
L_0026C518:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 783u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026C598; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0026C570; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026C540; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026C5C0; } }
L_0026C540:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026C558; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0026C558:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026C5C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0026C5C0; } }
L_0026C570:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_0026C590; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026C5C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0026C5C0; } }
L_0026C590:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[18].w[0] + 56u)));  if (t) { goto L_0026C5C0; } }
L_0026C598:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_0026C5B8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026C5C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0026C5C0; } }
L_0026C5B8:
    set32(c.r[17], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 2;
L_0026C5C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 112u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C5D4u); st32((c.r[29].w[0] + 116u), 0u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0026C5D4u) [[unlikely]] return; }
L_0026C5D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C5DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0026C5DCu) [[unlikely]] return; }
L_0026C5DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C5E4u); set32(c.r[4], 0u - c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0026C5E4u) [[unlikely]] return; }
L_0026C5E4:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C5F0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0026C5F0u) [[unlikely]] return; }
L_0026C5F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C5F8u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x0026C5F8u) [[unlikely]] return; }
L_0026C5F8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C608u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0026C608u) [[unlikely]] return; }
L_0026C608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C610u); set32(c.r[4], c.r[21].w[0] + 2048u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0026C610u) [[unlikely]] return; }
L_0026C610:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C61Cu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0026C61Cu) [[unlikely]] return; }
L_0026C61C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0026C640:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C654u); set32(c.r[4], c.r[4].w[0] + 18704u);  if (depth < kMaxDepth) unit_0006(c, 279u, depth + 1u); else { c.pc = 0x0011BDB8u; return; } if (c.pc != 0x0026C654u) [[unlikely]] return; }
L_0026C654:
    c.budget -= 1;
L_0026C658:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C658u | kUnwind; return; } goto L_0026C658; } }
    c.budget -= 3;
L_0026C680:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[4], 0u + 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[5], 0u + 3u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C6A0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0060(c, 342u, depth + 1u); else { c.pc = 0x00282E10u; return; } if (c.pc != 0x0026C6A0u) [[unlikely]] return; }
L_0026C6A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C6A8u);  if (depth < kMaxDepth) unit_0060(c, 157u, depth + 1u); else { c.pc = 0x00280FF0u; return; } if (c.pc != 0x0026C6A8u) [[unlikely]] return; }
L_0026C6A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C6B8u); set32(c.r[4], c.r[4].w[0] - 14784u);  if (depth < kMaxDepth) unit_0061(c, 367u, depth + 1u); else { c.pc = 0x00287438u; return; } if (c.pc != 0x0026C6B8u) [[unlikely]] return; }
L_0026C6B8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] - 31216u);
    c.budget -= 4;
L_0026C6C8:
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C6DCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005F(c, 151u, depth + 1u); else { c.pc = 0x0027F4F8u; return; } if (c.pc != 0x0026C6DCu) [[unlikely]] return; }
L_0026C6DC:
    c.budget -= 1;
L_0026C6E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C6E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 169u, depth + 1u); else { c.pc = 0x0027F950u; return; } if (c.pc != 0x0026C6E8u) [[unlikely]] return; }
L_0026C6E8:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_0026C708; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C6E0u | kUnwind; return; } goto L_0026C6E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C6C8u | kUnwind; return; } goto L_0026C6C8; } }
    c.budget -= 1;
L_0026C708:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C6C8u | kUnwind; return; } goto L_0026C6C8; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[18].w[0] + 23232u);
    set32(c.r[17], c.r[17].w[0] + 28384u);
    c.budget -= 6;
L_0026C730:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C744u); c.r[6].d[0] = c.r[2].d[0] | 49444ull;  if (depth < kMaxDepth) unit_0061(c, 184u, depth + 1u); else { c.pc = 0x00285918u; return; } if (c.pc != 0x0026C744u) [[unlikely]] return; }
L_0026C744:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0026C758; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C758u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 334u, depth + 1u); else { c.pc = 0x00286FC0u; return; } if (c.pc != 0x0026C758u) [[unlikely]] return; }
L_0026C758:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = c.r[2].d[0] | 49444ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C730u | kUnwind; return; } goto L_0026C730; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00050000u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] - 10048u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C78Cu); c.r[6].d[0] = c.r[2].d[0] | 33252ull;  if (depth < kMaxDepth) unit_0061(c, 184u, depth + 1u); else { c.pc = 0x00285918u; return; } if (c.pc != 0x0026C78Cu) [[unlikely]] return; }
L_0026C78C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[1].w[0] + 28392u), c.r[2].w[0]);  if (t) { goto L_0026C7A8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 28392u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C7A8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 334u, depth + 1u); else { c.pc = 0x00286FC0u; return; } if (c.pc != 0x0026C7A8u) [[unlikely]] return; }
L_0026C7A8:
    set32(c.r[3], 0u + 1u);
    st32((c.r[28].w[0] - 23924u), 0u);
    st32((c.r[28].w[0] - 23928u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026C7D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 28400u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C7ECu); set32(c.r[6], 0u + 288u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0026C7ECu) [[unlikely]] return; }
L_0026C7EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[2], c.r[2].w[0] - 28400u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[28].w[0] - 23780u), c.r[2].w[0]);
    set32(c.r[4], 0u + 3u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] + 18728u);
    st32((c.r[2].w[0] + 16u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 58u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 23u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 21u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 30u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C850u); set32(c.r[4], c.r[2].w[0] + 201u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0026C850u) [[unlikely]] return; }
L_0026C850:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[5], c.r[5].w[0] + 18736u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C864u); set32(c.r[4], c.r[2].w[0] + 264u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0026C864u) [[unlikely]] return; }
L_0026C864:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[5], c.r[5].w[0] + 18752u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C878u); set32(c.r[4], c.r[2].w[0] + 222u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0026C878u) [[unlikely]] return; }
L_0026C878:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[5], c.r[5].w[0] + 18776u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C88Cu); set32(c.r[4], c.r[2].w[0] + 243u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x0026C88Cu) [[unlikely]] return; }
L_0026C88C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 285u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026C8B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 28752u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C8CCu); set32(c.r[6], 0u + 344u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0026C8CCu) [[unlikely]] return; }
L_0026C8CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28752u);
    set32(c.r[4], c.r[4].w[0] - 8944u);
    st32((c.r[28].w[0] - 23784u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C8ECu); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0026C8ECu) [[unlikely]] return; }
L_0026C8EC:
    set32(c.r[3], 0u + 180u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 8944u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], 0u + 3u);
    st8((c.r[1].w[0] - 8942u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], 0u + 600u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], 0u + 1u);
    st8((c.r[1].w[0] - 8941u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], 0u + 100u);
    st16((c.r[1].w[0] - 8940u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 8938u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 8936u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 8935u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 8934u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 8932u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026C960:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 29008u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C97Cu); set32(c.r[6], 0u + 244u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0026C97Cu) [[unlikely]] return; }
L_0026C97C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - 29008u);
    st32((c.r[28].w[0] - 23788u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 191u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 192u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 193u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 194u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026C9C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[16], c.r[16].w[0] - 27856u);
    c.budget -= 8;
L_0026C9E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C9ECu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 71u, depth + 1u); else { c.pc = 0x0026CA30u; return; } if (c.pc != 0x0026C9ECu) [[unlikely]] return; }
L_0026C9EC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C9E0u | kUnwind; return; } goto L_0026C9E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CA04u);  if (depth < kMaxDepth) unit_000A(c, 249u, depth + 1u); else { c.pc = 0x0012B900u; return; } if (c.pc != 0x0026CA04u) [[unlikely]] return; }
L_0026CA04:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 8816u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CA18u); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0026CA18u) [[unlikely]] return; }
L_0026CA18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026CA30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 8704u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CA54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0026CA54u) [[unlikely]] return; }
L_0026CA54:
    st8((c.r[17].w[0] + 8656u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026CA70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00060000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 20304u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CA90u); c.r[6].d[0] = c.r[2].d[0] | 36384ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0026CA90u) [[unlikely]] return; }
L_0026CA90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 30032u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CAA4u); set32(c.r[6], 0u + 1024u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0026CAA4u) [[unlikely]] return; }
L_0026CAA4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026CAB0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 20304u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[2].d[0] | 20384ull;
    c.budget -= 6;
L_0026CAC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 20144ull;
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(0u));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[5].w[0] + c.r[1].w[0]);
    c.budget -= 6;
L_0026CAE0:
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[6].sd[0] < 52ll ? 1ull : 0ull;
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026CAE0u | kUnwind; return; } goto L_0026CAE0; } }
    set32(c.r[2], c.r[6].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], c.r[5].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 20144ull;
    set32(c.r[4], c.r[4].w[0] + c.r[1].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[7].sd[0] < 5ll ? 1ull : 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 12u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026CAC8u | kUnwind; return; } goto L_0026CAC8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 30032u);
    c.budget -= 5;
    { set32(c.r[6], 0u + 1024u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011AB50u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 201u, depth); }
L_0026CB60:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u - 1u);
    c.r[7].d[0] = 0ull + 0ull;
    st8((c.r[3].w[0] + 82u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 56u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 8;
L_0026CB80:
    set32(c.r[3], c.r[4].w[0] << (c.r[7].w[0] & 31u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026CBA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 82u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_0026CBB0; } }
L_0026CBA0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026CB80u | kUnwind; return; } goto L_0026CB80; } }
L_0026CBB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026CBC0:
    c.r[7].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[4].d[0] << 8;
    c.r[4].d[0] = c.r[3].d[0] << 16;
    c.r[5].d[0] = c.r[7].d[0] | c.r[5].d[0];
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st64((c.r[1].w[0] - 27776u), c.r[3].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[1].w[0] - 27808u), c.r[3].d[0]);  c.pc = t; return; }
L_0026CC00:
    st32((c.r[4].w[0] + 384u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    st32((c.r[4].w[0] + 388u), 0u);
    st32((c.r[4].w[0] + 392u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 396u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 400u), 0u);
    st32((c.r[4].w[0] + 404u), 0u);
    st32((c.r[4].w[0] + 408u), 0u);
    st32((c.r[4].w[0] + 412u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 416u), 0u);
    st32((c.r[4].w[0] + 420u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 424u), 0u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 428u), c.r[3].w[0]);  c.pc = t; return; }
L_0026CC40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[2].w[0] - 2224u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CC70u); set32(c.r[4], c.r[4].w[0] + 19712u);  if (depth < kMaxDepth) unit_0009(c, 128u, depth + 1u); else { c.pc = 0x00125980u; return; } if (c.pc != 0x0026CC70u) [[unlikely]] return; }
L_0026CC70:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 2220u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CC98u); set32(c.r[4], c.r[4].w[0] + 19824u);  if (depth < kMaxDepth) unit_0009(c, 128u, depth + 1u); else { c.pc = 0x00125980u; return; } if (c.pc != 0x0026CC98u) [[unlikely]] return; }
L_0026CC98:
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], c.r[4].w[0] + 1760u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] + 1764u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[1].w[0] + 19936u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[1].w[0] + 19940u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026CCF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] + 19712u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CD14u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 128u, depth + 1u); else { c.pc = 0x00125980u; return; } if (c.pc != 0x0026CD14u) [[unlikely]] return; }
L_0026CD14:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CD24u); set32(c.r[4], c.r[4].w[0] + 19824u);  if (depth < kMaxDepth) unit_0009(c, 128u, depth + 1u); else { c.pc = 0x00125980u; return; } if (c.pc != 0x0026CD24u) [[unlikely]] return; }
L_0026CD24:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 19940u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 19936u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026CD50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23776u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], c.r[16].w[0] + 4544u);
    set32(c.r[2], c.r[3].w[0] + 416u);
    set32(c.r[4], c.r[3].w[0] + 192u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[5], c.r[3].w[0] + 256u);
    set32(c.r[6], c.r[3].w[0] + 320u);
    set32(c.r[8], c.r[3].w[0] + 64u);
    set32(c.r[9], c.r[3].w[0] + 128u);
    set32(c.r[10], c.r[3].w[0] + 384u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CD90u); set32(c.r[11], c.r[3].w[0] + 400u);  if (depth < kMaxDepth) unit_0009(c, 139u, depth + 1u); else { c.pc = 0x00125D60u; return; } if (c.pc != 0x0026CD90u) [[unlikely]] return; }
L_0026CD90:
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CD9Cu); set32(c.r[4], c.r[2].w[0] + 384u);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x0026CD9Cu) [[unlikely]] return; }
L_0026CD9C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23776u)));
    set32(c.r[4], c.r[16].w[0] + 4288u);
    set32(c.r[5], c.r[16].w[0] + 4352u);
    set32(c.r[6], c.r[16].w[0] + 4416u);
    set32(c.r[7], c.r[16].w[0] + 4480u);
    set32(c.r[8], c.r[16].w[0] + 4544u);
    st8((c.r[3].w[0] + 433u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 433u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CDD8u); set32(c.r[9], c.r[2].w[0] + 4048u);  if (depth < kMaxDepth) unit_0009(c, 130u, depth + 1u); else { c.pc = 0x00125A80u; return; } if (c.pc != 0x0026CDD8u) [[unlikely]] return; }
L_0026CDD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026CDF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x457F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 19696u), c.f[12]);
    c.r[2].d[0] = c.r[2].d[0] | 61440ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 19700u), c.f[13]);
    set32(c.r[4], c.r[4].w[0] + 15664u);
    c.f[12] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 19704u), c.f[14]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[14] = c.r[2].w[0];
    c.f[13] = c.f[12];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CE38u); c.f[15] = c.f[14];  if (depth < kMaxDepth) unit_005B(c, 100u, depth + 1u); else { c.pc = 0x0026CF00u; return; } if (c.pc != 0x0026CE38u) [[unlikely]] return; }
L_0026CE38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CE40u);  if (depth < kMaxDepth) unit_005B(c, 106u, depth + 1u); else { c.pc = 0x0026D120u; return; } if (c.pc != 0x0026CE40u) [[unlikely]] return; }
L_0026CE40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44FF0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x457F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 57344ull;
    c.r[2].d[0] = c.r[2].d[0] | 61440ull;
    c.f[12] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[13] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44EC0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[14] = c.r[3].w[0];
    c.f[15] = c.r[2].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CE74u); set32(c.r[4], c.r[4].w[0] + 16112u);  if (depth < kMaxDepth) unit_005B(c, 100u, depth + 1u); else { c.pc = 0x0026CF00u; return; } if (c.pc != 0x0026CE74u) [[unlikely]] return; }
L_0026CE74:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44FF0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x457F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 57344ull;
    c.r[2].d[0] = c.r[2].d[0] | 61440ull;
    c.f[12] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[13] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x450A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[14] = c.r[3].w[0];
    c.f[15] = c.r[2].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CEA8u); set32(c.r[4], c.r[4].w[0] + 16560u);  if (depth < kMaxDepth) unit_005B(c, 100u, depth + 1u); else { c.pc = 0x0026CF00u; return; } if (c.pc != 0x0026CEA8u) [[unlikely]] return; }
L_0026CEA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026CEC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 19700u), c.f[12]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 19704u), c.f[13]);  c.pc = t; return; }
L_0026CEE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - 28288u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  [[clang::musttail]] return unit_006B(c, 176u, depth); }
L_0026CF00:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 24u), c.f[26]);
    set32(c.r[4], c.r[16].w[0] + 64u);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[23] = ld32((c.r[1].w[0] + 19696u));
    c.f[25] = c.f[12];
    c.f[24] = c.f[13];
    c.f[27] = c.f[14];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[22] = ld32((c.r[1].w[0] + 19700u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[21] = ld32((c.r[1].w[0] + 19704u));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CF60u); c.f[26] = c.f[15];  if (depth < kMaxDepth) unit_0000(c, 262u, depth + 1u); else { c.pc = 0x00102A28u; return; } if (c.pc != 0x0026CF60u) [[unlikely]] return; }
L_0026CF60:
    st32((c.r[16].w[0] + 64u), c.f[23]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 84u), c.f[23]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 124u), 0u);
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CF84u); st32((c.r[16].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 262u, depth + 1u); else { c.pc = 0x00102A28u; return; } if (c.pc != 0x0026CF84u) [[unlikely]] return; }
L_0026CF84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[16].w[0] + 64u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.f[0] = c.f[22] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F700000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 41943ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    c.f[2] = fp::add(c.f[0], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4B7F0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65288ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xCB7F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65288ull;
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::mul(c.f[21], c.f[22]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[22]);
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 112u), c.f[27]);
    st32((c.r[29].w[0] + 116u), c.f[26]);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CFF8u); st32((c.r[29].w[0] + 120u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 215u, depth + 1u); else { c.pc = 0x00102180u; return; } if (c.pc != 0x0026CFF8u) [[unlikely]] return; }
L_0026CFF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], c.r[16].w[0] + 128u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[25], c.f[0]);
    fpu_div(c, 0u, c.f[24], c.f[0]);
    c.f[1] = fp::mul(c.f[22], c.f[1]);
    fpu_div(c, 25u, c.f[1], c.f[23]);
    c.f[0] = fp::mul(c.f[22], c.f[0]);
    fpu_div(c, 24u, c.f[0], c.f[23]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D034u);  if (depth < kMaxDepth) unit_0000(c, 262u, depth + 1u); else { c.pc = 0x00102A28u; return; } if (c.pc != 0x0026D034u) [[unlikely]] return; }
L_0026D034:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[1] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::mul(c.f[1], c.f[22]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::add(c.f[25], c.f[25]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    st32((c.r[16].w[0] + 128u), c.f[1]);
    c.f[1] = fp::add(c.f[24], c.f[24]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    st32((c.r[16].w[0] + 148u), c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[2] = fp::sub(c.f[21], c.f[22]);
    c.f[1] = fp::add(c.f[21], c.f[22]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 168u), c.f[1]);
    st32((c.r[16].w[0] + 184u), c.f[0]);
    st32((c.r[16].w[0] + 172u), c.r[2].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D094u); st32((c.r[16].w[0] + 188u), 0u);  if (depth < kMaxDepth) unit_0000(c, 262u, depth + 1u); else { c.pc = 0x00102A28u; return; } if (c.pc != 0x0026D094u) [[unlikely]] return; }
L_0026D094:
    c.f[0] = fp::mul(c.f[23], c.f[25]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F700000u);
    c.r[6].d[0] = c.r[3].d[0] | 41943ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xCAFF0000u);
    c.r[5].d[0] = c.r[3].d[0] | 65288ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4AFF0000u);
    fpu_div(c, 0u, c.f[0], c.f[22]);
    c.r[4].d[0] = c.r[3].d[0] | 65288ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[23]);
    c.f[0] = fp::mul(c.f[0], c.f[24]);
    fpu_div(c, 0u, c.f[0], c.f[22]);
    st32((c.r[16].w[0] + 20u), c.f[0]);
    st32((c.r[16].w[0] + 40u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 48u), c.f[27]);
    st32((c.r[16].w[0] + 52u), c.f[26]);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 33;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0026D120:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x457F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.r[3].d[0] = c.r[3].d[0] | 61440ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[12] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[14] = c.r[2].w[0];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 17008u);
    c.f[13] = c.f[12];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D150u); c.f[15] = c.f[14];  if (depth < kMaxDepth) unit_005B(c, 113u, depth + 1u); else { c.pc = 0x0026D220u; return; } if (c.pc != 0x0026D150u) [[unlikely]] return; }
L_0026D150:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[4].w[0] + 17456u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D168u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_005B(c, 120u, depth + 1u); else { c.pc = 0x0026D4A0u; return; } if (c.pc != 0x0026D168u) [[unlikely]] return; }
L_0026D168:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44FF0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].d[0] = c.r[2].d[0] | 57344ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x457F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 61440ull;
    c.f[13] = c.r[2].w[0];
    c.f[12] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44D80000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[15] = c.r[2].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D19Cu); set32(c.r[4], c.r[4].w[0] + 17904u);  if (depth < kMaxDepth) unit_005B(c, 113u, depth + 1u); else { c.pc = 0x0026D220u; return; } if (c.pc != 0x0026D19Cu) [[unlikely]] return; }
L_0026D19C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44FF0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].d[0] = c.r[2].d[0] | 57344ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x457F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 61440ull;
    c.f[13] = c.r[2].w[0];
    c.f[12] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45140000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[15] = c.r[2].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D1D0u); set32(c.r[4], c.r[4].w[0] + 18352u);  if (depth < kMaxDepth) unit_005B(c, 113u, depth + 1u); else { c.pc = 0x0026D220u; return; } if (c.pc != 0x0026D1D0u) [[unlikely]] return; }
L_0026D1D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44D80000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D1ECu); set32(c.r[4], c.r[4].w[0] + 18800u);  if (depth < kMaxDepth) unit_005B(c, 120u, depth + 1u); else { c.pc = 0x0026D4A0u; return; } if (c.pc != 0x0026D1ECu) [[unlikely]] return; }
L_0026D1EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x45140000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D208u); set32(c.r[4], c.r[4].w[0] + 19248u);  if (depth < kMaxDepth) unit_005B(c, 120u, depth + 1u); else { c.pc = 0x0026D4A0u; return; } if (c.pc != 0x0026D208u) [[unlikely]] return; }
L_0026D208:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026D220:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 44u), c.f[27]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 40u), c.f[26]);
    set32(c.r[4], c.r[16].w[0] + 64u);
    st32((c.r[29].w[0] + 36u), c.f[25]);
    st32((c.r[29].w[0] + 32u), c.f[24]);
    st32((c.r[29].w[0] + 28u), c.f[23]);
    st32((c.r[29].w[0] + 24u), c.f[22]);
    st32((c.r[29].w[0] + 20u), c.f[21]);
    st32((c.r[29].w[0] + 16u), c.f[20]);
    c.f[23] = ld32((c.r[1].w[0] + 19696u));
    c.f[25] = c.f[12];
    c.f[24] = c.f[13];
    c.f[27] = c.f[14];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[22] = ld32((c.r[1].w[0] + 19700u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[21] = ld32((c.r[1].w[0] + 19704u));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D280u); c.f[26] = c.f[15];  if (depth < kMaxDepth) unit_0000(c, 262u, depth + 1u); else { c.pc = 0x00102A28u; return; } if (c.pc != 0x0026D280u) [[unlikely]] return; }
L_0026D280:
    st32((c.r[16].w[0] + 64u), c.f[23]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 84u), c.f[23]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 124u), 0u);
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D2A4u); st32((c.r[16].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 262u, depth + 1u); else { c.pc = 0x00102A28u; return; } if (c.pc != 0x0026D2A4u) [[unlikely]] return; }
L_0026D2A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.f[0] = c.f[22] ^ fp::kSign;
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.f[2] = fp::add(c.f[0], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4B7F0000u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[3].d[0] = c.r[2].d[0] | 65288ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xCB7F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65288ull;
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::mul(c.f[21], c.f[22]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[22]);
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 128u), c.f[27]);
    st32((c.r[29].w[0] + 132u), c.f[26]);
    st32((c.r[29].w[0] + 120u), c.f[1]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D310u); st32((c.r[29].w[0] + 136u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 215u, depth + 1u); else { c.pc = 0x00102180u; return; } if (c.pc != 0x0026D310u) [[unlikely]] return; }
L_0026D310:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], c.r[16].w[0] + 128u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[25], c.f[0]);
    fpu_div(c, 0u, c.f[24], c.f[0]);
    c.f[1] = fp::mul(c.f[22], c.f[1]);
    fpu_div(c, 25u, c.f[1], c.f[23]);
    c.f[0] = fp::mul(c.f[22], c.f[0]);
    fpu_div(c, 24u, c.f[0], c.f[23]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D34Cu);  if (depth < kMaxDepth) unit_0000(c, 262u, depth + 1u); else { c.pc = 0x00102A28u; return; } if (c.pc != 0x0026D34Cu) [[unlikely]] return; }
L_0026D34C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[1] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::mul(c.f[1], c.f[22]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::add(c.f[25], c.f[25]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    st32((c.r[16].w[0] + 128u), c.f[1]);
    c.f[1] = fp::add(c.f[24], c.f[24]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    st32((c.r[16].w[0] + 148u), c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[2] = fp::sub(c.f[21], c.f[22]);
    c.f[1] = fp::add(c.f[21], c.f[22]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 168u), c.f[1]);
    st32((c.r[16].w[0] + 184u), c.f[0]);
    st32((c.r[16].w[0] + 172u), c.r[2].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D3ACu); st32((c.r[16].w[0] + 188u), 0u);  if (depth < kMaxDepth) unit_0000(c, 262u, depth + 1u); else { c.pc = 0x00102A28u; return; } if (c.pc != 0x0026D3ACu) [[unlikely]] return; }
L_0026D3AC:
    c.f[0] = fp::mul(c.f[23], c.f[25]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F700000u);
    c.r[15].d[0] = c.r[2].d[0] | 41943ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xCAFF0000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[14].d[0] = c.r[2].d[0] | 65288ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4AFF0000u);
    set32(c.r[4], c.r[16].w[0] + 192u);
    fpu_div(c, 0u, c.f[0], c.f[22]);
    c.r[13].d[0] = c.r[2].d[0] | 65288ull;
    set32(c.r[2], c.r[16].w[0] + 416u);
    set32(c.r[5], c.r[16].w[0] + 256u);
    set32(c.r[6], c.r[16].w[0] + 320u);
    set32(c.r[7], c.r[7].w[0] + 20208u);
    set32(c.r[8], c.r[16].w[0] + 64u);
    set32(c.r[9], c.r[16].w[0] + 128u);
    set32(c.r[10], c.r[16].w[0] + 384u);
    set32(c.r[11], c.r[16].w[0] + 400u);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = c.r[15].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[23]);
    c.f[0] = fp::mul(c.f[0], c.f[24]);
    fpu_div(c, 0u, c.f[0], c.f[22]);
    st32((c.r[16].w[0] + 20u), c.f[0]);
    st32((c.r[16].w[0] + 40u), c.r[14].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[13].w[0]);
    st32((c.r[16].w[0] + 48u), c.f[27]);
    st32((c.r[16].w[0] + 52u), c.f[26]);
    st32((c.r[16].w[0] + 60u), c.r[12].w[0]);
    st32((c.r[16].w[0] + 384u), 0u);
    st32((c.r[16].w[0] + 388u), 0u);
    st32((c.r[16].w[0] + 392u), 0u);
    st32((c.r[16].w[0] + 396u), c.r[12].w[0]);
    st32((c.r[16].w[0] + 400u), 0u);
    st32((c.r[16].w[0] + 404u), 0u);
    st32((c.r[16].w[0] + 408u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 412u), c.r[12].w[0]);
    st32((c.r[16].w[0] + 416u), 0u);
    st32((c.r[16].w[0] + 420u), c.r[12].w[0]);
    st32((c.r[16].w[0] + 424u), 0u);
    st32((c.r[16].w[0] + 428u), c.r[12].w[0]);
    c.budget -= 46;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D464u); st64((c.r[29].w[0]), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0009(c, 139u, depth + 1u); else { c.pc = 0x00125D60u; return; } if (c.pc != 0x0026D464u) [[unlikely]] return; }
L_0026D464:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[27] = ld32((c.r[29].w[0] + 44u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[26] = ld32((c.r[29].w[0] + 40u));
    c.f[25] = ld32((c.r[29].w[0] + 36u));
    c.f[24] = ld32((c.r[29].w[0] + 32u));
    c.f[23] = ld32((c.r[29].w[0] + 28u));
    c.f[22] = ld32((c.r[29].w[0] + 24u));
    c.f[21] = ld32((c.r[29].w[0] + 20u));
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0026D4A0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 36u), c.f[25]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 32u), c.f[24]);
    set32(c.r[4], c.r[16].w[0] + 64u);
    st32((c.r[29].w[0] + 28u), c.f[23]);
    st32((c.r[29].w[0] + 24u), c.f[22]);
    st32((c.r[29].w[0] + 20u), c.f[21]);
    st32((c.r[29].w[0] + 16u), c.f[20]);
    c.f[23] = ld32((c.r[1].w[0] + 19700u));
    c.f[25] = c.f[12];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[22] = ld32((c.r[1].w[0] + 19704u));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D4ECu); c.f[24] = c.f[13];  if (depth < kMaxDepth) unit_0000(c, 262u, depth + 1u); else { c.pc = 0x00102A28u; return; } if (c.pc != 0x0026D4ECu) [[unlikely]] return; }
L_0026D4EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFF00000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    c.f[12] = c.r[3].w[0];
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D50Cu); mmi::pcpyld(c.r[17], c.r[0], c.r[2]);  if (depth < kMaxDepth) unit_0005(c, 46u, depth + 1u); else { c.pc = 0x001158E0u; return; } if (c.pc != 0x0026D50Cu) [[unlikely]] return; }
L_0026D50C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D518u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 75u, depth + 1u); else { c.pc = 0x00116060u; return; } if (c.pc != 0x0026D518u) [[unlikely]] return; }
L_0026D518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D520u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 92u, depth + 1u); else { c.pc = 0x00116498u; return; } if (c.pc != 0x0026D520u) [[unlikely]] return; }
L_0026D520:
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D52Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 262u, depth + 1u); else { c.pc = 0x00102A28u; return; } if (c.pc != 0x0026D52Cu) [[unlikely]] return; }
L_0026D52C:
    c.f[20] = fp::mul(c.f[22], c.f[23]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4B7F0000u);
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.r[3].d[0] = c.r[3].d[0] | 65288ull;
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.f[23] ^ fp::kSign;
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    c.f[3] = fp::add(c.f[0], c.f[22]);
    fpu_div(c, 1u, c.f[1], c.f[3]);
    c.f[2] = c.r[2].w[0];
    st32((c.r[29].w[0] + 144u), c.f[25]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xCB7F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65288ull;
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[23]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 148u), c.f[24]);
    st32((c.r[29].w[0] + 136u), c.f[1]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D5A0u); st32((c.r[29].w[0] + 152u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 215u, depth + 1u); else { c.pc = 0x00102180u; return; } if (c.pc != 0x0026D5A0u) [[unlikely]] return; }
L_0026D5A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D5A8u); set32(c.r[4], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_0000(c, 262u, depth + 1u); else { c.pc = 0x00102A28u; return; } if (c.pc != 0x0026D5A8u) [[unlikely]] return; }
L_0026D5A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D5B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 262u, depth + 1u); else { c.pc = 0x00102A28u; return; } if (c.pc != 0x0026D5B0u) [[unlikely]] return; }
L_0026D5B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44FF0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[3].d[0] | 61440ull;
    set32(c.r[4], c.r[16].w[0] + 128u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[23], c.f[1]);
    fpu_div(c, 21u, c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D5E4u);  if (depth < kMaxDepth) unit_0000(c, 262u, depth + 1u); else { c.pc = 0x00102A28u; return; } if (c.pc != 0x0026D5E4u) [[unlikely]] return; }
L_0026D5E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[1] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::mul(c.f[1], c.f[23]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::add(c.f[21], c.f[21]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    st32((c.r[16].w[0] + 128u), c.f[1]);
    st32((c.r[16].w[0] + 148u), c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[2] = fp::sub(c.f[22], c.f[23]);
    c.f[1] = fp::add(c.f[22], c.f[23]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 168u), c.f[1]);
    st32((c.r[16].w[0] + 184u), c.f[0]);
    st32((c.r[16].w[0] + 172u), c.r[2].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D63Cu); st32((c.r[16].w[0] + 188u), 0u);  if (depth < kMaxDepth) unit_0000(c, 262u, depth + 1u); else { c.pc = 0x00102A28u; return; } if (c.pc != 0x0026D63Cu) [[unlikely]] return; }
L_0026D63C:
    c.r[14].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F700000u);
    c.r[3].d[0] = c.r[2].d[0] | 41943ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xCAFF0000u);
    c.f[1] = c.r[14].w[0];
    c.r[13].d[0] = c.r[2].d[0] | 65288ull;
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4AFF0000u);
    c.r[12].d[0] = c.r[2].d[0] | 65288ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[2], c.r[16].w[0] + 416u);
    set32(c.r[4], c.r[16].w[0] + 192u);
    set32(c.r[5], c.r[16].w[0] + 256u);
    set32(c.r[6], c.r[16].w[0] + 320u);
    set32(c.r[7], c.r[7].w[0] + 20208u);
    set32(c.r[8], c.r[16].w[0] + 64u);
    c.f[1] = fp::mul(c.f[1], c.f[21]);
    set32(c.r[9], c.r[16].w[0] + 128u);
    set32(c.r[10], c.r[16].w[0] + 384u);
    set32(c.r[11], c.r[16].w[0] + 400u);
    fpu_div(c, 1u, c.f[1], c.f[23]);
    fpu_div(c, 0u, c.f[0], c.f[23]);
    st32((c.r[16].w[0]), c.f[1]);
    st32((c.r[16].w[0] + 20u), c.f[0]);
    st32((c.r[16].w[0] + 40u), c.r[13].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[12].w[0]);
    st32((c.r[16].w[0] + 48u), c.f[25]);
    st32((c.r[16].w[0] + 52u), c.f[24]);
    st32((c.r[16].w[0] + 60u), c.r[14].w[0]);
    st32((c.r[16].w[0] + 384u), 0u);
    st32((c.r[16].w[0] + 388u), 0u);
    st32((c.r[16].w[0] + 392u), 0u);
    st32((c.r[16].w[0] + 396u), c.r[14].w[0]);
    st32((c.r[16].w[0] + 400u), 0u);
    st32((c.r[16].w[0] + 404u), 0u);
    st32((c.r[16].w[0] + 408u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 412u), c.r[14].w[0]);
    st32((c.r[16].w[0] + 416u), 0u);
    st32((c.r[16].w[0] + 420u), c.r[14].w[0]);
    st32((c.r[16].w[0] + 424u), 0u);
    st32((c.r[16].w[0] + 428u), c.r[14].w[0]);
    c.budget -= 45;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D6F0u); st64((c.r[29].w[0]), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0009(c, 139u, depth + 1u); else { c.pc = 0x00125D60u; return; } if (c.pc != 0x0026D6F0u) [[unlikely]] return; }
L_0026D6F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[25] = ld32((c.r[29].w[0] + 36u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[24] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[23] = ld32((c.r[29].w[0] + 28u));
    c.f[22] = ld32((c.r[29].w[0] + 24u));
    c.f[21] = ld32((c.r[29].w[0] + 20u));
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0026D720:
    c.r[2].d[0] = c.r[4].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.r[3].d[0] = c.r[2].d[0] & 7ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[4].w[0] - 28240u);
    set32(c.r[2], c.r[2].w[0] - 26528u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];  c.pc = t; return; }
L_0026D760:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[1].d[0] = c.r[2].sd[0] < 14ll ? 1ull : 0ull;  if (t) { goto L_0026D780; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026D780; } }
    set32(c.r[2], c.r[2].w[0] + 127u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0026D788; } }
L_0026D780:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0026D788:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026D790:
    c.r[7].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].d[0] = c.r[7].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0026D7B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026D8B8; } }
    c.budget -= 1;
L_0026D7B0:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.r[1].d[0] = c.r[2].sd[0] < 45ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026D7E8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0026D7E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D7D0u);  if (depth < kMaxDepth) unit_005B(c, 133u, depth + 1u); else { c.pc = 0x0026D760u; return; } if (c.pc != 0x0026D7D0u) [[unlikely]] return; }
L_0026D7D0:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0026D7E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026D8B8; } }
    c.budget -= 1;
L_0026D7E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[6].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] - 26784u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], 0u + 255u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[8].d[0] = c.r[3].d[0] << 48;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[8].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026D818; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026D8B8; } }
L_0026D818:
    c.r[2].d[0] = c.r[7].sd[0] < 192ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] - 65u);  if (t) { goto L_0026D83C; } }
    set32(c.r[3], c.r[7].w[0] - 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 27248u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0026D84C; } }
L_0026D83C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 27248u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_0026D84C:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 192ll ? 1ull : 0ull;  if (t) { goto L_0026D868; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026D890; } }
    c.budget -= 1;
L_0026D868:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.r[2].d[0] = c.r[8].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D884u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_005B(c, 132u, depth + 1u); else { c.pc = 0x0026D720u; return; } if (c.pc != 0x0026D884u) [[unlikely]] return; }
L_0026D884:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026D8B8; } }
    c.budget -= 1;
L_0026D890:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    c.r[3].d[0] = c.r[8].d[0] << 48;
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D8B8u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_005B(c, 132u, depth + 1u); else { c.pc = 0x0026D720u; return; } if (c.pc != 0x0026D8B8u) [[unlikely]] return; }
L_0026D8B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026D8D0:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[3].sd[0] < 192ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0026D8F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026DAD8; } }
    c.budget -= 1;
L_0026D8F0:
    c.r[1].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < 45ll ? 1ull : 0ull;  if (t) { goto L_0026D968; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_0026D928; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026D928; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D914u);  if (depth < kMaxDepth) unit_005B(c, 133u, depth + 1u); else { c.pc = 0x0026D760u; return; } if (c.pc != 0x0026D914u) [[unlikely]] return; }
L_0026D914:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0026D968; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026DAD8; } }
L_0026D928:
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;  if (t) { goto L_0026D958; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 53ll ? 1ull : 0ull;  if (t) { goto L_0026D948; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0026D958; } }
    c.budget -= 1;
L_0026D948:
    set32(c.r[2], 0u + 56u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026D960; } }
    c.budget -= 1;
L_0026D958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026DAD8; } }
L_0026D960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026DAD8; } }
L_0026D968:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], 0u + 160u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 152u);  if (t) { goto L_0026DA88; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026DA88; } }
    set32(c.r[2], 0u + 149u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 148u);  if (t) { goto L_0026DA88; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026DA88; } }
    set32(c.r[2], 0u + 146u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 142u);  if (t) { goto L_0026DA88; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026DA88; } }
    set32(c.r[2], 0u + 151u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 177u);  if (t) { goto L_0026DA70; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026DA40; } }
    set32(c.r[2], 0u + 168u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 167u);  if (t) { goto L_0026DA40; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026DA40; } }
    set32(c.r[2], 0u + 162u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 161u);  if (t) { goto L_0026DA40; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026DA40; } }
    set32(c.r[2], 0u + 158u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 155u);  if (t) { goto L_0026DA40; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026DA40; } }
    set32(c.r[2], 0u + 154u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 153u);  if (t) { goto L_0026DA40; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026DA40; } }
    set32(c.r[2], 0u + 150u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 147u);  if (t) { goto L_0026DA40; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026DA40; } }
    set32(c.r[2], 0u + 141u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 139u);  if (t) { goto L_0026DA40; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026DA40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026DAA0; } }
    c.budget -= 1;
L_0026DA40:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 9ll ? 1ull : 0ull;  if (t) { goto L_0026DA58; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0026DA68; } }
L_0026DA58:
    c.r[2].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026DAD0; } }
    c.budget -= 1;
L_0026DA68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026DAD8; } }
L_0026DA70:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026DA88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026DAD8; } }
L_0026DA88:
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026DAD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026DAD8; } }
L_0026DAA0:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] - 7u);  if (t) { goto L_0026DAC8; } }
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0026DAC8; } }
    c.r[2].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026DAD0; } }
L_0026DAC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026DAD8; } }
L_0026DAD0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0026DAD8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026DAF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 19u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 28u), c.r[6].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DB14u); st32((c.r[29].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 290u, depth + 1u); else { c.pc = 0x0026F3D0u; return; } if (c.pc != 0x0026DB14u) [[unlikely]] return; }
L_0026DB14:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026DB20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 20u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DB40u); st32((c.r[29].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 290u, depth + 1u); else { c.pc = 0x0026F3D0u; return; } if (c.pc != 0x0026DB40u) [[unlikely]] return; }
L_0026DB40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026DB50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 21u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DB70u); st32((c.r[29].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 290u, depth + 1u); else { c.pc = 0x0026F3D0u; return; } if (c.pc != 0x0026DB70u) [[unlikely]] return; }
L_0026DB70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026DB80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 24u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 28u), c.r[4].w[0]);
    set32(c.r[4], c.r[29].w[0] + 24u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DB9Cu); st32((c.r[29].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 290u, depth + 1u); else { c.pc = 0x0026F3D0u; return; } if (c.pc != 0x0026DB9Cu) [[unlikely]] return; }
L_0026DB9C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026DBB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 25u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 28u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[7].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DBDCu); st32((c.r[29].w[0] + 36u), c.r[8].w[0]);  if (depth < kMaxDepth) unit_005B(c, 290u, depth + 1u); else { c.pc = 0x0026F3D0u; return; } if (c.pc != 0x0026DBDCu) [[unlikely]] return; }
L_0026DBDC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026DBF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 28u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 28u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DC08u); st32((c.r[29].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 290u, depth + 1u); else { c.pc = 0x0026F3D0u; return; } if (c.pc != 0x0026DC08u) [[unlikely]] return; }
L_0026DC08:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026DC20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 33u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DC40u); st32((c.r[29].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 290u, depth + 1u); else { c.pc = 0x0026F3D0u; return; } if (c.pc != 0x0026DC40u) [[unlikely]] return; }
L_0026DC40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026DC50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 34u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DC70u); st32((c.r[29].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 290u, depth + 1u); else { c.pc = 0x0026F3D0u; return; } if (c.pc != 0x0026DC70u) [[unlikely]] return; }
L_0026DC70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026DC80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 35u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DCA0u); st32((c.r[29].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 290u, depth + 1u); else { c.pc = 0x0026F3D0u; return; } if (c.pc != 0x0026DCA0u) [[unlikely]] return; }
L_0026DCA0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026DCB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 36u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DCD0u); st32((c.r[29].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 290u, depth + 1u); else { c.pc = 0x0026F3D0u; return; } if (c.pc != 0x0026DCD0u) [[unlikely]] return; }
L_0026DCD0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026DCE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 37u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DD00u); st32((c.r[29].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 290u, depth + 1u); else { c.pc = 0x0026F3D0u; return; } if (c.pc != 0x0026DD00u) [[unlikely]] return; }
L_0026DD00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026DD10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 38u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DD30u); st32((c.r[29].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 290u, depth + 1u); else { c.pc = 0x0026F3D0u; return; } if (c.pc != 0x0026DD30u) [[unlikely]] return; }
L_0026DD30:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026DD40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 72u);  c.pc = t; return; }
L_0026DD50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 72u);  c.pc = t; return; }
L_0026DD60:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00920000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00920000u);
    set32(c.r[5], c.r[5].w[0] - 6640u);
    set32(c.r[4], c.r[4].w[0] - 6960u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00920000u);
    st32((c.r[28].w[0] - 23588u), 0u);
    set32(c.r[3], c.r[3].w[0] - 7008u);
    st32((c.r[28].w[0] - 23576u), c.r[5].w[0]);
    st32((c.r[28].w[0] - 23572u), c.r[5].w[0]);
    st32((c.r[28].w[0] - 23568u), c.r[5].w[0]);
    st32((c.r[28].w[0] - 23564u), c.r[5].w[0]);
    st32((c.r[28].w[0] - 23584u), c.r[4].w[0]);
    st32((c.r[28].w[0] - 23580u), c.r[4].w[0]);
    st32((c.r[28].w[0] - 23596u), c.r[3].w[0]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 23592u), c.r[3].w[0]);  c.pc = t; return; }
L_0026DDA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DDB0u);  if (depth < kMaxDepth) unit_005B(c, 166u, depth + 1u); else { c.pc = 0x0026DD60u; return; } if (c.pc != 0x0026DDB0u) [[unlikely]] return; }
L_0026DDB0:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DDC0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005D(c, 24u, depth + 1u); else { c.pc = 0x002743D0u; return; } if (c.pc != 0x0026DDC0u) [[unlikely]] return; }
L_0026DDC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DDC8u);  if (depth < kMaxDepth) unit_005B(c, 261u, depth + 1u); else { c.pc = 0x0026EE60u; return; } if (c.pc != 0x0026DDC8u) [[unlikely]] return; }
L_0026DDC8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026DDE0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[3].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0026E008; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00920000u);
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] - 6960u);
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_0026DEC8; } }
    c.r[1].d[0] = c.r[5].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[9], c.r[5].w[0] - 8u);  if (t) { goto L_0026DE98; } }
L_0026DE38:
    set32(c.r[8], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[10], c.r[10].w[0] + 8u);
    c.r[4].d[0] = c.r[10].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[20], c.r[20].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[20], c.r[20].w[0] + c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[20], c.r[20].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[20], c.r[20].w[0] + c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[20], c.r[20].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[20], c.r[20].w[0] + c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[20], c.r[20].w[0] + c.r[8].w[0]);
    set32(c.r[20], c.r[20].w[0] + c.r[7].w[0]);
    c.budget -= 23;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026DE38u | kUnwind; return; } goto L_0026DE38; } }
    c.budget -= 1;
L_0026DE98:
    c.r[1].d[0] = c.r[10].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026DEC8; } }
    c.budget -= 1;
L_0026DEA8:
    set32(c.r[7], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[4].d[0] = c.r[10].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[20], c.r[20].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026DEA8u | kUnwind; return; } goto L_0026DEA8; } }
    c.budget -= 1;
L_0026DEC8:
    c.r[1].d[0] = 0ll < c.r[6].sd[0] ? 1ull : 0ull;
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0026DF78; } }
    c.r[1].d[0] = c.r[6].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[9], c.r[6].w[0] - 8u);  if (t) { goto L_0026DF48; } }
    c.budget -= 1;
L_0026DEE8:
    set32(c.r[7], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[8], c.r[8].w[0] + 8u);
    c.r[4].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[17], c.r[17].w[0] + c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[17], c.r[17].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[17], c.r[17].w[0] + c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[17], c.r[17].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[17], c.r[17].w[0] + c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[17], c.r[17].w[0] + c.r[7].w[0]);
    set32(c.r[17], c.r[17].w[0] + c.r[5].w[0]);
    c.budget -= 23;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026DEE8u | kUnwind; return; } goto L_0026DEE8; } }
    c.budget -= 1;
L_0026DF48:
    c.r[1].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026DF78; } }
    c.budget -= 1;
L_0026DF58:
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[4].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026DF58u | kUnwind; return; } goto L_0026DF58; } }
    c.budget -= 1;
L_0026DF78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00920000u);
    set32(c.r[4], c.r[20].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] - 6640u);
    c.r[1].d[0] = c.r[20].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0026E000; } }
L_0026DF90:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[3].d[0];  if (t) { goto L_0026DFD0; } }
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    set32(c.r[16], c.r[16].w[0] + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DFB0u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_005B(c, 274u, depth + 1u); else { c.pc = 0x0026F040u; return; } if (c.pc != 0x0026DFB0u) [[unlikely]] return; }
L_0026DFB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DFB8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 311u, depth + 1u); else { c.pc = 0x00277940u; return; } if (c.pc != 0x0026DFB8u) [[unlikely]] return; }
L_0026DFB8:
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 8));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 2u);  if (t) { goto L_0026DFF0; } }
L_0026DFD0:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[3].d[0];  if (t) { goto L_0026DFF0; } }
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[16], c.r[16].w[0] + 2u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 5;
L_0026DFF0:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026DF90u | kUnwind; return; } goto L_0026DF90; } }
L_0026E000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_0026E238; } }
L_0026E008:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00920000u);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - 6960u);
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[21], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[17], c.r[21].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[21].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0026E230; } }
    c.budget -= 1;
L_0026E030:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; c.r[20].d[0] = ld16((c.r[21].w[0]));  if (t) { goto L_0026E0F0; } }
    c.r[22].d[0] = c.r[20].d[0] & 65535ull;
    c.r[3].d[0] = c.r[22].d[0] & 65280ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026E0D0; } }
    set32(c.r[2], 0u + 222u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0026E090; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E060u);  if (depth < kMaxDepth) unit_005B(c, 280u, depth + 1u); else { c.pc = 0x0026F260u; return; } if (c.pc != 0x0026E060u) [[unlikely]] return; }
L_0026E060:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] & 65535ull;  if (t) { goto L_0026E090; } }
    set32(c.r[3], 0u + 9254u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[19], c.r[19].w[0] - 2u);  if (t) { goto L_0026E080; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(9332ll);  if (t) { goto L_0026E0D0; } }
    c.budget -= 1;
L_0026E080:
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_0026E0D0; } }
    c.budget -= 1;
L_0026E090:
    set32(c.r[2], 0u + 223u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0026E0C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E0A4u);  if (depth < kMaxDepth) unit_005B(c, 284u, depth + 1u); else { c.pc = 0x0026F2E0u; return; } if (c.pc != 0x0026E0A4u) [[unlikely]] return; }
L_0026E0A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[16].d[0] & 65535ull;  if (t) { goto L_0026E0C0; } }
    set32(c.r[19], c.r[19].w[0] - 2u);
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_0026E0D0; } }
    c.budget -= 1;
L_0026E0C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E0C8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 274u, depth + 1u); else { c.pc = 0x0026F040u; return; } if (c.pc != 0x0026E0C8u) [[unlikely]] return; }
L_0026E0C8:
    c.r[20].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_0026E0D0:
    c.r[3].d[0] = c.r[20].d[0] & 65535ull;
    c.r[4].d[0] = c.r[3].d[0] & 65280ull;
    set32(c.r[3], 0u + 9472u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[3].d[0] = c.r[20].d[0] & 9471ull;  if (t) { goto L_0026E1F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_0026E1F0; } }
    c.budget -= 1;
L_0026E0F0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; c.r[22].d[0] = c.r[20].d[0] & 65535ull;  if (t) { goto L_0026E1A8; } }
    c.r[3].d[0] = c.r[22].d[0] & 65280ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026E188; } }
    set32(c.r[2], 0u + 222u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0026E148; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E11Cu);  if (depth < kMaxDepth) unit_005B(c, 280u, depth + 1u); else { c.pc = 0x0026F260u; return; } if (c.pc != 0x0026E11Cu) [[unlikely]] return; }
L_0026E11C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] & 65535ull;  if (t) { goto L_0026E148; } }
    set32(c.r[3], 0u + 9510u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[19], c.r[19].w[0] - 2u);  if (t) { goto L_0026E138; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(9588ll);  if (t) { goto L_0026E188; } }
L_0026E138:
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_0026E188; } }
    c.budget -= 1;
L_0026E148:
    set32(c.r[2], 0u + 223u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0026E178; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E15Cu);  if (depth < kMaxDepth) unit_005B(c, 284u, depth + 1u); else { c.pc = 0x0026F2E0u; return; } if (c.pc != 0x0026E15Cu) [[unlikely]] return; }
L_0026E15C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[16].d[0] & 65535ull;  if (t) { goto L_0026E178; } }
    set32(c.r[19], c.r[19].w[0] - 2u);
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_0026E188; } }
    c.budget -= 1;
L_0026E178:
    c.r[2].d[0] = c.r[22].d[0] | 256ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E184u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_005B(c, 274u, depth + 1u); else { c.pc = 0x0026F040u; return; } if (c.pc != 0x0026E184u) [[unlikely]] return; }
L_0026E184:
    c.r[20].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_0026E188:
    c.r[3].d[0] = c.r[20].d[0] & 65535ull;
    c.r[4].d[0] = c.r[3].d[0] & 65280ull;
    set32(c.r[3], 0u + 9216u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[3].d[0] = c.r[20].d[0] | 9472ull;  if (t) { goto L_0026E1F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_0026E1F0; } }
    c.budget -= 1;
L_0026E1A8:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0026E1C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E1BCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 278u, depth + 1u); else { c.pc = 0x0026F140u; return; } if (c.pc != 0x0026E1BCu) [[unlikely]] return; }
L_0026E1BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);  if (t) { goto L_0026E220; } }
    c.budget -= 1;
L_0026E1C8:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[20].d[0] & 65535ull;  if (t) { goto L_0026E1F0; } }
    c.r[3].d[0] = c.r[4].d[0] & 65280ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026E1F0; } }
    c.r[2].d[0] = c.r[4].d[0] | 256ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E1ECu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_005B(c, 274u, depth + 1u); else { c.pc = 0x0026F040u; return; } if (c.pc != 0x0026E1ECu) [[unlikely]] return; }
L_0026E1EC:
    c.r[20].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_0026E1F0:
    c.r[16].d[0] = c.r[20].d[0] & 65535ull;
    c.r[3].d[0] = c.r[16].d[0] & 65280ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0026E218; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E208u);  if (depth < kMaxDepth) unit_005D(c, 311u, depth + 1u); else { c.pc = 0x00277940u; return; } if (c.pc != 0x0026E208u) [[unlikely]] return; }
L_0026E208:
    c.r[20].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[20].w[0]) >> 8));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 4;
L_0026E218:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[20].w[0]));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_0026E220:
    set32(c.r[21], c.r[21].w[0] + 8u);
    c.r[3].d[0] = c.r[21].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026E030u | kUnwind; return; } goto L_0026E030; } }
L_0026E230:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0026E238:
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
L_0026E260:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E274u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 209u, depth + 1u); else { c.pc = 0x00272040u; return; } if (c.pc != 0x0026E274u) [[unlikely]] return; }
L_0026E274:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E27Cu); st32((c.r[28].w[0] - 23704u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005D(c, 312u, depth + 1u); else { c.pc = 0x00277A20u; return; } if (c.pc != 0x0026E27Cu) [[unlikely]] return; }
L_0026E27C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E284u);  if (depth < kMaxDepth) unit_005D(c, 20u, depth + 1u); else { c.pc = 0x00274330u; return; } if (c.pc != 0x0026E284u) [[unlikely]] return; }
L_0026E284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E28Cu);  if (depth < kMaxDepth) unit_005B(c, 167u, depth + 1u); else { c.pc = 0x0026DDA0u; return; } if (c.pc != 0x0026E28Cu) [[unlikely]] return; }
L_0026E28C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_0026E2C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E2A0u);  if (depth < kMaxDepth) unit_005B(c, 165u, depth + 1u); else { c.pc = 0x0026DD50u; return; } if (c.pc != 0x0026E2A0u) [[unlikely]] return; }
L_0026E2A0:
    set32(c.r[4], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));  if (t) { goto L_0026E2B4; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_0026E2B4:
    st32((c.r[28].w[0] - 30340u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[28].w[0] - 23708u), c.r[3].w[0]);
    c.budget -= 3;
L_0026E2C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026E2D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00920000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[4], c.r[4].w[0] << 3);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[2], c.r[2].w[0] << 3);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[3].w[0] - 6960u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[19], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].d[0] = c.r[19].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 21;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0026E420; } }
    c.budget -= 1;
L_0026E328:
    set32(c.r[2], ld32((c.r[28].w[0] - 23580u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_0026E3C0; } }
    set32(c.r[16], ld32((c.r[28].w[0] - 23568u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23564u)));
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026E3B8; } }
L_0026E348:
    c.r[4].d[0] = ld16((c.r[16].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & 16384ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_0026E360; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E360u);  if (depth < kMaxDepth) unit_005B(c, 274u, depth + 1u); else { c.pc = 0x0026F040u; return; } if (c.pc != 0x0026E360u) [[unlikely]] return; }
L_0026E360:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0026E388; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23572u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0026E388; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E37Cu); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_005D(c, 289u, depth + 1u); else { c.pc = 0x00277370u; return; } if (c.pc != 0x0026E37Cu) [[unlikely]] return; }
L_0026E37C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0026E398; } }
    c.budget -= 1;
L_0026E388:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E394u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_005D(c, 289u, depth + 1u); else { c.pc = 0x00277370u; return; } if (c.pc != 0x0026E394u) [[unlikely]] return; }
L_0026E394:
    c.budget -= 1;
L_0026E398:
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 2u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23564u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026E348u | kUnwind; return; } goto L_0026E348; } }
    c.budget -= 1;
L_0026E3B8:
    set32(c.r[5], 0u + 1u);
    c.budget -= 2;
L_0026E3C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23584u)));
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026E420; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0026E3F8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0026E3F8; } }
    c.r[5].d[0] = ld16((c.r[19].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E3F0u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_005D(c, 289u, depth + 1u); else { c.pc = 0x00277370u; return; } if (c.pc != 0x0026E3F0u) [[unlikely]] return; }
L_0026E3F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0026E408; } }
L_0026E3F8:
    c.r[5].d[0] = ld16((c.r[19].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E408u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_005D(c, 289u, depth + 1u); else { c.pc = 0x00277370u; return; } if (c.pc != 0x0026E408u) [[unlikely]] return; }
L_0026E408:
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.r[2].d[0] = c.r[19].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026E328u | kUnwind; return; } goto L_0026E328; } }
L_0026E420:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0026E440; } }
    set32(c.r[5], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E434u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_005D(c, 289u, depth + 1u); else { c.pc = 0x00277370u; return; } if (c.pc != 0x0026E434u) [[unlikely]] return; }
L_0026E434:
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_0026E440:
    set32(c.r[3], c.r[18].w[0] - c.r[21].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_0026E454; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0026E454:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0026E480:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    st32((c.r[1].w[0] + 18712u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 63488ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[1].w[0] + 18704u), c.r[3].d[0]);  c.pc = t; return; }
L_0026E4A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = ld64((c.r[1].w[0] + 18704u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 18712u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    st64((c.r[1].w[0] + 18720u), c.r[4].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] + 18728u), c.r[3].w[0]);  c.pc = t; return; }
L_0026E4D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0026E4E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[1].w[0] + 18720u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026E508; } }
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 2;
L_0026E508:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[5], ld32((c.r[1].w[0] + 18728u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E51Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0026E51Cu) [[unlikely]] return; }
L_0026E51C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.r[5].d[0] = ld64((c.r[1].w[0] + 18720u));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[4].d[0] = c.r[5].d[0] - c.r[4].d[0];
    set32(c.r[3], ld32((c.r[1].w[0] + 18728u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st64((c.r[1].w[0] + 18720u), c.r[4].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    st32((c.r[1].w[0] + 18728u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026E560:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[1].w[0] + 18720u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026E588; } }
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 2;
L_0026E588:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E594u); set32(c.r[4], ld32((c.r[1].w[0] + 18728u)));  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0026E594u) [[unlikely]] return; }
L_0026E594:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.r[5].d[0] = ld64((c.r[1].w[0] + 18720u));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[4].d[0] = c.r[5].d[0] - c.r[4].d[0];
    set32(c.r[3], ld32((c.r[1].w[0] + 18728u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st64((c.r[1].w[0] + 18720u), c.r[4].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    st32((c.r[1].w[0] + 18728u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026E5E0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026E6A8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0026E650; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0026E608; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026E6F0; } }
    c.budget -= 1;
L_0026E608:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_0026E618; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026E710; } }
L_0026E618:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[4].d[0] = ld64((c.r[1].w[0] + 18704u));
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[4].d[0] = c.r[4].d[0] - c.r[5].d[0];
    set32(c.r[2], ld32((c.r[1].w[0] + 18712u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st64((c.r[1].w[0] + 18720u), c.r[4].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 18728u), c.r[2].w[0]);  if (t) { goto L_0026E6F0; } }
    c.budget -= 1;
L_0026E650:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[2].d[0] = ld64((c.r[1].w[0] + 18720u));
    c.r[3].d[0] = c.r[2].d[0] - c.r[5].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);  if (t) { goto L_0026E678; } }
    c.r[2].d[0] = ld64((c.r[1].w[0] + 18704u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026E680; } }
    c.budget -= 1;
L_0026E678:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0026E710; } }
L_0026E680:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    st64((c.r[1].w[0] + 18720u), c.r[3].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[3].d[0] = c.r[5].d[0] << 32;
    set32(c.r[2], ld32((c.r[1].w[0] + 18728u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 18728u), c.r[2].w[0]);  if (t) { goto L_0026E6F0; } }
L_0026E6A8:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_0026E6B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026E710; } }
L_0026E6B8:
    c.r[2].d[0] = 0ull - c.r[5].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    st64((c.r[1].w[0] + 18720u), c.r[2].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[2].d[0] = c.r[5].d[0] << 32;
    set32(c.r[4], ld32((c.r[1].w[0] + 18704u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 18712u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[1].w[0] + 18728u), c.r[2].w[0]);
    c.budget -= 14;
L_0026E6F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 18728u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 18712u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 8;
L_0026E710:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026E720:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00920000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E754u); set32(c.r[16], c.r[16].w[0] - 7312u);  if (depth < kMaxDepth) unit_005D(c, 126u, depth + 1u); else { c.pc = 0x00275690u; return; } if (c.pc != 0x0026E754u) [[unlikely]] return; }
L_0026E754:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0026E7E0; } }
    c.budget -= 1;
L_0026E760:
    set32(c.r[2], ld32((c.r[28].w[0] - 23692u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0026E798; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E778u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 220u, depth + 1u); else { c.pc = 0x0026E810u; return; } if (c.pc != 0x0026E778u) [[unlikely]] return; }
L_0026E778:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 7u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E790u); st32((c.r[28].w[0] - 23696u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_005D(c, 293u, depth + 1u); else { c.pc = 0x00277490u; return; } if (c.pc != 0x0026E790u) [[unlikely]] return; }
L_0026E790:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026E7C0; } }
L_0026E798:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E7A8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 224u, depth + 1u); else { c.pc = 0x0026E8C0u; return; } if (c.pc != 0x0026E7A8u) [[unlikely]] return; }
L_0026E7A8:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E7BCu); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_005D(c, 293u, depth + 1u); else { c.pc = 0x00277490u; return; } if (c.pc != 0x0026E7BCu) [[unlikely]] return; }
L_0026E7BC:
    c.budget -= 1;
L_0026E7C0:
    set32(c.r[18], c.r[18].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[20].w[0] << 1);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E7D8u); set32(c.r[19], c.r[19].w[0] + c.r[20].w[0]);  if (depth < kMaxDepth) unit_005D(c, 126u, depth + 1u); else { c.pc = 0x00275690u; return; } if (c.pc != 0x0026E7D8u) [[unlikely]] return; }
L_0026E7D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026E760u | kUnwind; return; } goto L_0026E760; } }
L_0026E7E0:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0026E810:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23700u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0026E850; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23688u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026E868; } }
    c.budget -= 1;
L_0026E850:
    set32(c.r[5], ld32((c.r[28].w[0] - 23620u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E85Cu); set32(c.r[4], ld32((c.r[28].w[0] - 23612u)));  if (depth < kMaxDepth) unit_005D(c, 246u, depth + 1u); else { c.pc = 0x00276BF0u; return; } if (c.pc != 0x0026E85Cu) [[unlikely]] return; }
L_0026E85C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026E890; } }
    c.budget -= 1;
L_0026E868:
    set32(c.r[2], c.r[18].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00910000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 17188u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E88Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005D(c, 246u, depth + 1u); else { c.pc = 0x00276BF0u; return; } if (c.pc != 0x0026E88Cu) [[unlikely]] return; }
L_0026E88C:
    c.budget -= 1;
L_0026E890:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E8A4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 263u, depth + 1u); else { c.pc = 0x00276EE0u; return; } if (c.pc != 0x0026E8A4u) [[unlikely]] return; }
L_0026E8A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026E8C0:
    set32(c.r[3], c.r[4].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00910000u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 17188u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { set32(c.r[6], ld32((c.r[2].w[0])));  [[clang::musttail]] return unit_005D(c, 263u, depth); }
L_0026E8F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], c.r[4].w[0] << 3);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00910000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] - 17188u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] << 2);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 15;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0026E9A8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0026E998; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23700u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0026E950; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23688u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026E998; } }
L_0026E950:
    set32(c.r[5], ld32((c.r[28].w[0] - 23620u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E95Cu); set32(c.r[4], ld32((c.r[28].w[0] - 23612u)));  if (depth < kMaxDepth) unit_005D(c, 246u, depth + 1u); else { c.pc = 0x00276BF0u; return; } if (c.pc != 0x0026E95Cu) [[unlikely]] return; }
L_0026E95C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0026E990; } }
    c.budget -= 1;
L_0026E968:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[18].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0026E990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E978u);  if (depth < kMaxDepth) unit_005D(c, 235u, depth + 1u); else { c.pc = 0x00276A90u; return; } if (c.pc != 0x0026E978u) [[unlikely]] return; }
L_0026E978:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E984u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 316u, depth + 1u); else { c.pc = 0x00277B50u; return; } if (c.pc != 0x0026E984u) [[unlikely]] return; }
L_0026E984:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; c.r[16].d[0] = c.r[19].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026E968u | kUnwind; return; } goto L_0026E968; } }
    c.budget -= 1;
L_0026E990:
    st32((c.r[17].w[0]), c.r[16].w[0]);
    c.budget -= 2;
L_0026E998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E9A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 233u, depth + 1u); else { c.pc = 0x00276A50u; return; } if (c.pc != 0x0026E9A0u) [[unlikely]] return; }
L_0026E9A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E9A8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 337u, depth + 1u); else { c.pc = 0x00277D90u; return; } if (c.pc != 0x0026E9A8u) [[unlikely]] return; }
L_0026E9A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0026E9D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E9E0u);  if (depth < kMaxDepth) unit_005B(c, 212u, depth + 1u); else { c.pc = 0x0026E720u; return; } if (c.pc != 0x0026E9E0u) [[unlikely]] return; }
L_0026E9E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00920000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00920000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 7312u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E9F8u); set32(c.r[5], c.r[5].w[0] - 7472u);  if (depth < kMaxDepth) unit_005D(c, 306u, depth + 1u); else { c.pc = 0x00277760u; return; } if (c.pc != 0x0026E9F8u) [[unlikely]] return; }
L_0026E9F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00920000u);
    set32(c.r[2], c.r[2].w[0] - 7472u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026EA10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00920000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], c.r[18].w[0] - 7312u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_0026EA80; } }
    c.budget -= 1;
L_0026EA40:
    set32(c.r[2], ld32((c.r[28].w[0] - 23692u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0026EA64; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EA5Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 220u, depth + 1u); else { c.pc = 0x0026E810u; return; } if (c.pc != 0x0026EA5Cu) [[unlikely]] return; }
L_0026EA5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] << 1);  if (t) { goto L_0026EA74; } }
L_0026EA64:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EA70u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 224u, depth + 1u); else { c.pc = 0x0026E8C0u; return; } if (c.pc != 0x0026EA70u) [[unlikely]] return; }
L_0026EA70:
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 1;
L_0026EA74:
    set32(c.r[19], c.r[19].w[0] + c.r[17].w[0]);
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_0026EA80:
    c.r[1].d[0] = c.r[19].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0026EAA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EA94u);  if (depth < kMaxDepth) unit_005D(c, 126u, depth + 1u); else { c.pc = 0x00275690u; return; } if (c.pc != 0x0026EA94u) [[unlikely]] return; }
L_0026EA94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026EA40u | kUnwind; return; } goto L_0026EA40; } }
    c.budget -= 1;
L_0026EAA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00920000u);
    set32(c.r[2], c.r[2].w[0] - 7312u);
    set32(c.r[2], c.r[18].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_0026EABC; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0026EABC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00920000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00920000u);
    set32(c.r[4], c.r[4].w[0] - 7312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EAD0u); set32(c.r[5], c.r[5].w[0] - 7472u);  if (depth < kMaxDepth) unit_005D(c, 306u, depth + 1u); else { c.pc = 0x00277760u; return; } if (c.pc != 0x0026EAD0u) [[unlikely]] return; }
L_0026EAD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00920000u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[2], c.r[2].w[0] - 7472u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0026EB00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[8].d[0] = ld16((c.r[6].w[0] + 12u));
    c.budget -= 7;
    { const bool t = c.r[8].d[0] != c.r[3].d[0]; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0026EB28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026EB38; } }
    c.budget -= 1;
L_0026EB28:
    set32(c.r[8], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0026EC28; } }
    c.budget -= 1;
L_0026EB38:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00910000u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] - 14960u);  if (t) { goto L_0026EB50; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_0026EB68; } }
L_0026EB50:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0026EBB0; } }
    c.r[2].d[0] = ld64((c.r[8].w[0] + 8u));
    st64((c.r[16].w[0]), c.r[2].d[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 8u);  if (t) { goto L_0026EBB0; } }
L_0026EB68:
    mmi::pcpyld(c.r[9], c.r[0], c.r[2]);
    c.r[2].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 2;
L_0026EB70:
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026EBA0; } }
    c.r[3].d[0] = ld64((c.r[3].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026EBA0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[9].d[0];  if (t) { goto L_0026EBA0; } }
    st64((c.r[16].w[0]), c.r[3].d[0]);
    c.r[9].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 8u);
    c.budget -= 4;
L_0026EBA0:
    set32(c.r[7], ld32((c.r[7].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026EB70u | kUnwind; return; } goto L_0026EB70; } }
    c.budget -= 1;
L_0026EBB0:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_0026EBF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EBC0u);  if (depth < kMaxDepth) unit_005B(c, 270u, depth + 1u); else { c.pc = 0x0026EF60u; return; } if (c.pc != 0x0026EBC0u) [[unlikely]] return; }
L_0026EBC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00910000u);
    set32(c.r[3], c.r[3].w[0] - 14960u);
    set32(c.r[3], c.r[16].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_0026EBDC; } }
    set32(c.r[3], c.r[3].w[0] + 7u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.budget -= 2;
L_0026EBDC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00910000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EBECu); set32(c.r[5], c.r[5].w[0] - 14960u);  if (depth < kMaxDepth) unit_005C(c, 197u, depth + 1u); else { c.pc = 0x00271ED0u; return; } if (c.pc != 0x0026EBECu) [[unlikely]] return; }
L_0026EBEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026EC28; } }
    c.budget -= 1;
L_0026EBF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00910000u);
    set32(c.r[2], c.r[2].w[0] - 14960u);
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));  if (t) { goto L_0026EC14; } }
    set32(c.r[2], c.r[2].w[0] + 7u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_0026EC14:
    c.r[5].d[0] = ld16((c.r[6].w[0] + 12u));
    c.r[4].d[0] = ld64((c.r[8].w[0] + 8u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00910000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EC28u); set32(c.r[6], c.r[6].w[0] - 14960u);  if (depth < kMaxDepth) unit_005C(c, 121u, depth + 1u); else { c.pc = 0x002713D0u; return; } if (c.pc != 0x0026EC28u) [[unlikely]] return; }
L_0026EC28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026EC40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 18736u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026ECC0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[4], c.r[4].w[0] + 18736u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EC6Cu); st32((c.r[29].w[0] + 32u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0026EC6Cu) [[unlikely]] return; }
L_0026EC6C:
    st16((c.r[29].w[0] + 36u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st8((c.r[29].w[0] + 38u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0026EC88; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026EC98; } }
    c.budget -= 1;
L_0026EC88:
    set32(c.r[2], 0u + 40u);
    st8((c.r[29].w[0] + 40u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 39u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0026ECA8; } }
L_0026EC98:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2u));
    st8((c.r[29].w[0] + 39u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 3u));
    st8((c.r[29].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0026ECA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[2], c.r[2].w[0] + 18816u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ECBCu); st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 194u, depth + 1u); else { c.pc = 0x00271E30u; return; } if (c.pc != 0x0026ECBCu) [[unlikely]] return; }
L_0026ECBC:
    c.budget -= 1;
L_0026ECC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026ECD0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0026EE20; } }
L_0026ECF8:
    set32(c.r[2], c.r[20].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[20].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00910000u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 17200u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23692u)));
    c.budget -= 8;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0026ED50; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23700u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026ED38; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23688u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026ED50; } }
L_0026ED38:
    set32(c.r[5], ld32((c.r[28].w[0] - 23620u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ED44u); set32(c.r[4], ld32((c.r[28].w[0] - 23612u)));  if (depth < kMaxDepth) unit_005D(c, 246u, depth + 1u); else { c.pc = 0x00276BF0u; return; } if (c.pc != 0x0026ED44u) [[unlikely]] return; }
L_0026ED44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0026ED60; } }
    c.budget -= 1;
L_0026ED50:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ED5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005D(c, 246u, depth + 1u); else { c.pc = 0x00276BF0u; return; } if (c.pc != 0x0026ED5Cu) [[unlikely]] return; }
L_0026ED5C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0026ED60:
    set32(c.r[3], ld32((c.r[28].w[0] - 23708u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026EDA0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23688u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026EDA0; } }
L_0026ED80:
    set32(c.r[7], ld32((c.r[18].w[0] + 8u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ED94u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 241u, depth + 1u); else { c.pc = 0x0026EB00u; return; } if (c.pc != 0x0026ED94u) [[unlikely]] return; }
L_0026ED94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + c.r[16].w[0]);  if (t) { goto L_0026EE20; } }
    c.budget -= 1;
L_0026EDA0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 22u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[2].d[0] << 56;  if (t) { goto L_0026EDE8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 21u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0026EDE8; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EDCCu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_005B(c, 262u, depth + 1u); else { c.pc = 0x0026EE70u; return; } if (c.pc != 0x0026EDCCu) [[unlikely]] return; }
L_0026EDCC:
    set32(c.r[7], ld32((c.r[18].w[0] + 8u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EDE0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 241u, depth + 1u); else { c.pc = 0x0026EB00u; return; } if (c.pc != 0x0026EDE0u) [[unlikely]] return; }
L_0026EDE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026EE18; } }
L_0026EDE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 18736u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026ED80u | kUnwind; return; } goto L_0026ED80; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EE08u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 262u, depth + 1u); else { c.pc = 0x0026EE70u; return; } if (c.pc != 0x0026EE08u) [[unlikely]] return; }
L_0026EE08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EE10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 246u, depth + 1u); else { c.pc = 0x0026EC40u; return; } if (c.pc != 0x0026EE10u) [[unlikely]] return; }
L_0026EE10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EE18u);  if (depth < kMaxDepth) unit_005B(c, 261u, depth + 1u); else { c.pc = 0x0026EE60u; return; } if (c.pc != 0x0026EE18u) [[unlikely]] return; }
L_0026EE18:
    set32(c.r[20], c.r[20].w[0] + c.r[16].w[0]);
    c.budget -= 2;
L_0026EE20:
    c.r[1].d[0] = c.r[20].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0026EE40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EE34u);  if (depth < kMaxDepth) unit_005D(c, 126u, depth + 1u); else { c.pc = 0x00275690u; return; } if (c.pc != 0x0026EE34u) [[unlikely]] return; }
L_0026EE34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026ECF8u | kUnwind; return; } goto L_0026ECF8; } }
    c.budget -= 1;
L_0026EE40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0026EE60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[1].w[0] + 18736u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0026EE70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[17], c.r[17].w[0] + 18736u);
    c.budget -= 15;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 18816u);  if (t) { goto L_0026EEC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EEB4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0026EEB4u) [[unlikely]] return; }
L_0026EEB4:
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EEC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0026EEC0u) [[unlikely]] return; }
L_0026EEC0:
    c.r[19].d[0] = ld8((c.r[18].w[0] + 6u));
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0026EEC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00920000u);
    set32(c.r[2], c.r[2].w[0] - 7008u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + c.r[20].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EEE0u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x0026EEE0u) [[unlikely]] return; }
L_0026EEE0:
    set32(c.r[2], c.r[17].w[0] + c.r[19].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EEF0u); st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0026EEF0u) [[unlikely]] return; }
L_0026EEF0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0026EF08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EF00u);  if (depth < kMaxDepth) unit_005B(c, 261u, depth + 1u); else { c.pc = 0x0026EE60u; return; } if (c.pc != 0x0026EF00u) [[unlikely]] return; }
L_0026EF00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026EF38; } }
L_0026EF08:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00920000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EF20u); set32(c.r[7], c.r[7].w[0] - 7312u);  if (depth < kMaxDepth) unit_005D(c, 263u, depth + 1u); else { c.pc = 0x00276EE0u; return; } if (c.pc != 0x0026EF20u) [[unlikely]] return; }
L_0026EF20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00920000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 7312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EF34u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 306u, depth + 1u); else { c.pc = 0x00277760u; return; } if (c.pc != 0x0026EF34u) [[unlikely]] return; }
L_0026EF34:
    c.budget -= 1;
L_0026EF38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0026EF60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00920000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 7008u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[2].w[0] + c.r[4].w[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EF9Cu); set32(c.r[4], c.r[4].w[0] + 18624u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x0026EF9Cu) [[unlikely]] return; }
L_0026EF9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00920000u);
    set32(c.r[2], c.r[2].w[0] + 18624u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 7312u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EFC4u); st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_005D(c, 263u, depth + 1u); else { c.pc = 0x00276EE0u; return; } if (c.pc != 0x0026EFC4u) [[unlikely]] return; }
L_0026EFC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00920000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 7312u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EFDCu); set32(c.r[5], c.r[5].w[0] + 18544u);  if (depth < kMaxDepth) unit_005D(c, 306u, depth + 1u); else { c.pc = 0x00277760u; return; } if (c.pc != 0x0026EFDCu) [[unlikely]] return; }
L_0026EFDC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00900000u);
    st16((c.r[1].w[0] + 18900u), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[2], c.r[2].w[0] + 18624u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    st32((c.r[1].w[0] + 18896u), c.r[2].w[0]);
    set32(c.r[2], 0u + 25u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    st8((c.r[1].w[0] + 18903u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[2], c.r[2].w[0] + 18544u);
    st32((c.r[1].w[0] + 18908u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00900000u);
    st8((c.r[1].w[0] + 18902u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 18896u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00900000u);
    st8((c.r[1].w[0] + 18904u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026F040:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] - 26384u);
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], 0u + 9472u);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[4].d[0] = c.r[2].d[0] & 65280ull;
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[3].d[0] = c.r[5].d[0] & 256ull;  if (t) { goto L_0026F088; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026F088; } }
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] | 9216ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0026F088; } }
    c.budget -= 1;
L_0026F088:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F090:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 25872u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[6], c.r[6].w[0] - 25872u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] - 25856u);  if (t) { goto L_0026F108; } }
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 1;
L_0026F0B0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0026F0F8; } }
    c.r[2].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[3], 0u + 9472u);
    c.r[5].d[0] = c.r[2].d[0] & 65280ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_0026F0F0; } }
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026F0F0; } }
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] | 9216ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0026F110; } }
    c.budget -= 1;
L_0026F0F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026F110; } }
L_0026F0F8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026F0B0u | kUnwind; return; } goto L_0026F0B0; } }
L_0026F108:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0026F110:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F120:
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.r[3].d[0] = c.r[2].d[0] & 256ull;
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] + 9216u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  c.pc = t; return; }
L_0026F140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 8448u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & 65280ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 9216u);  if (t) { goto L_0026F1A8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026F1A8; } }
    set32(c.r[2], 0u + 9472u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026F1A0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 8960u);  if (t) { goto L_0026F190; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026F190; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026F238; } }
L_0026F190:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026F248; } }
    c.budget -= 1;
L_0026F1A0:
    c.r[2].d[0] = c.r[5].d[0] & 9471ull;
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_0026F1A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F1B0u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 300u, depth + 1u); else { c.pc = 0x00277620u; return; } if (c.pc != 0x0026F1B0u) [[unlikely]] return; }
L_0026F1B0:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < 152ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026F1D0; } }
    c.r[2].d[0] = c.r[3].sd[0] < 247ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026F1E0; } }
    c.budget -= 1;
L_0026F1D0:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026F248; } }
    c.budget -= 1;
L_0026F1E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - 26144u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0026F210; } }
    set32(c.r[3], 0u + 222u);
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0026F248; } }
L_0026F210:
    c.r[2].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026F230; } }
    set32(c.r[3], 0u + 223u);
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0026F248; } }
    c.budget -= 1;
L_0026F230:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026F248; } }
L_0026F238:
    set32(c.r[2], 0u + 32u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
L_0026F248:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026F260:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F274u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 287u, depth + 1u); else { c.pc = 0x00277300u; return; } if (c.pc != 0x0026F274u) [[unlikely]] return; }
L_0026F274:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0026F288; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F284u);  if (depth < kMaxDepth) unit_005D(c, 310u, depth + 1u); else { c.pc = 0x00277880u; return; } if (c.pc != 0x0026F284u) [[unlikely]] return; }
L_0026F284:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_0026F288:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F294u); set32(c.r[4], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_005B(c, 278u, depth + 1u); else { c.pc = 0x0026F140u; return; } if (c.pc != 0x0026F294u) [[unlikely]] return; }
L_0026F294:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0026F2A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026F2C8; } }
L_0026F2A8:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 44u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 23040u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 10ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
L_0026F2C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026F2E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F2F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 287u, depth + 1u); else { c.pc = 0x00277300u; return; } if (c.pc != 0x0026F2F4u) [[unlikely]] return; }
L_0026F2F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0026F308; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F304u);  if (depth < kMaxDepth) unit_005D(c, 310u, depth + 1u); else { c.pc = 0x00277880u; return; } if (c.pc != 0x0026F304u) [[unlikely]] return; }
L_0026F304:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_0026F308:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F314u); set32(c.r[4], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_005B(c, 278u, depth + 1u); else { c.pc = 0x0026F140u; return; } if (c.pc != 0x0026F314u) [[unlikely]] return; }
L_0026F314:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0026F328; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026F348; } }
L_0026F328:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 44u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 23040u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 11ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
L_0026F348:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026F360:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[5], c.r[5].w[0] - 25648u);
    set32(c.r[3], c.r[3].w[0] - 25468u);
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026F3B8; } }
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 1;
L_0026F380:
    c.r[2].d[0] = ld16((c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0026F398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[5].w[0] + 2u));  if (t) { goto L_0026F3C0; } }
    c.budget -= 1;
L_0026F398:
    c.r[1].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0026F3B8; } }
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026F380u | kUnwind; return; } goto L_0026F380; } }
    c.budget -= 1;
L_0026F3B8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0026F3C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F3D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(64ll) ? 1ull : 0ull;  if (t) { goto L_0026F3F0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0026F3F8; } }
    c.budget -= 1;
L_0026F3F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0026F418; } }
L_0026F3F8:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 25460u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F414u); set32(c.r[4], c.r[4].w[0] + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026F414u) [[unlikely]] return; }
L_0026F414:
    c.budget -= 1;
L_0026F418:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026F430:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 15u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    set32(c.r[19], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[7], ld32((c.r[4].w[0])));  if (t) { goto L_0026F464; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 16640u);  if (t) { goto L_0026F468; } }
L_0026F464:
    set32(c.r[2], 0u + 16384u);
    c.budget -= 1;
L_0026F468:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00910000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00910000u);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[5], c.r[5].w[0] - 14960u);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 13936u);  if (t) { goto L_0026F4A0; } }
    c.budget -= 1;
L_0026F488:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    set32(c.r[7], c.r[7].w[0] + 1u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 6;
L_0026F4A0:
    c.r[4].d[0] = ld8((c.r[7].w[0]));
    c.r[2].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_0026F4C0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026F488u | kUnwind; return; } goto L_0026F488; } }
    c.budget -= 1;
L_0026F4C0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00910000u);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] <= 0; set32(c.r[16], c.r[16].w[0] - 14960u);  if (t) { goto L_0026F598; } }
    c.budget -= 1;
L_0026F4D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 92u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F4E4u); set32(c.r[7], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_005E(c, 37u, depth + 1u); else { c.pc = 0x00278BD0u; return; } if (c.pc != 0x0026F4E4u) [[unlikely]] return; }
L_0026F4E4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[3], 0u - 1u);  if (t) { goto L_0026F520; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0026F518; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00910000u);
    set32(c.r[2], c.r[2].w[0] - 14960u);
    set32(c.r[3], c.r[16].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_0026F510; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0026F510:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { goto L_0026F5A0; } }
L_0026F518:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0026F520:
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[17].w[0] - c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[18], c.r[29].w[0] + 92u);
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_0026F590; } }
L_0026F540:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F54Cu); set32(c.r[18], c.r[18].w[0] + 2u);  if (depth < kMaxDepth) unit_005D(c, 311u, depth + 1u); else { c.pc = 0x00277940u; return; } if (c.pc != 0x0026F54Cu) [[unlikely]] return; }
L_0026F54C:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = 0ull | 33522ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026F568; } }
    c.r[2].d[0] = 0ull | 33684ull;
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_0026F568:
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[19], c.r[19].w[0] + 2u);
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026F540u | kUnwind; return; } goto L_0026F540; } }
    c.budget -= 1;
L_0026F590:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026F4D0u | kUnwind; return; } goto L_0026F4D0; } }
L_0026F598:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0026F5A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0026F5C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23688u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026F5E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0026F698; } }
L_0026F5E8:
    set32(c.r[18], ld32((c.r[4].w[0])));
    set32(c.r[16], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[17], ld32((c.r[4].w[0] + 4u)));  if (t) { goto L_0026F628; } }
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026F610; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F60Cu);  if (depth < kMaxDepth) unit_005B(c, 167u, depth + 1u); else { c.pc = 0x0026DDA0u; return; } if (c.pc != 0x0026F60Cu) [[unlikely]] return; }
L_0026F60C:
    c.budget -= 1;
L_0026F610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F618u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 59u, depth + 1u); else { c.pc = 0x002791C0u; return; } if (c.pc != 0x0026F618u) [[unlikely]] return; }
L_0026F618:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0026F628; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0026F698; } }
L_0026F628:
    set32(c.r[5], ld32((c.r[28].w[0] - 23588u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { goto L_0026F648; } }
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_0026F698; } }
    c.budget -= 1;
L_0026F648:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F658u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_005D(c, 31u, depth + 1u); else { c.pc = 0x00274510u; return; } if (c.pc != 0x0026F658u) [[unlikely]] return; }
L_0026F658:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F664u); st32((c.r[28].w[0] - 23692u), 0u);  if (depth < kMaxDepth) unit_005D(c, 126u, depth + 1u); else { c.pc = 0x00275690u; return; } if (c.pc != 0x0026F664u) [[unlikely]] return; }
L_0026F664:
    st32((c.r[28].w[0] - 23696u), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F674u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005D(c, 156u, depth + 1u); else { c.pc = 0x00275EB0u; return; } if (c.pc != 0x0026F674u) [[unlikely]] return; }
L_0026F674:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F680u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026F6B0u; return; } if (c.pc != 0x0026F680u) [[unlikely]] return; }
L_0026F680:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00910000u);
    set32(c.r[2], 0u + 3u);
    set32(c.r[4], ld32((c.r[1].w[0] - 17188u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F694u); st32((c.r[28].w[0] - 23688u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005D(c, 239u, depth + 1u); else { c.pc = 0x00276B10u; return; } if (c.pc != 0x0026F694u) [[unlikely]] return; }
L_0026F694:
    c.budget -= 1;
L_0026F698:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026F6B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[28].w[0] - 23696u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F6D4u); set32(c.r[4], ld32((c.r[28].w[0] - 23692u)));  if (depth < kMaxDepth) unit_005B(c, 235u, depth + 1u); else { c.pc = 0x0026EA10u; return; } if (c.pc != 0x0026F6D4u) [[unlikely]] return; }
L_0026F6D4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F6E0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0026F6E0u) [[unlikely]] return; }
L_0026F6E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23692u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 23696u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23588u)));
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F6FCu); set32(c.r[5], c.r[2].w[0] - c.r[5].w[0]);  if (depth < kMaxDepth) unit_005B(c, 235u, depth + 1u); else { c.pc = 0x0026EA10u; return; } if (c.pc != 0x0026F6FCu) [[unlikely]] return; }
L_0026F6FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F708u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0026F708u) [[unlikely]] return; }
L_0026F708:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026F720:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23688u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026F750; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026F868; } }
    c.budget -= 1;
L_0026F750:
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    set32(c.r[2], 0u + 21u);
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[17], ld32((c.r[4].w[0])));  if (t) { goto L_0026F810; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026F778; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026F850; } }
L_0026F778:
    set32(c.r[2], ld32((c.r[28].w[0] - 23620u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0026F790; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 23620u), c.r[2].w[0]);  if (t) { goto L_0026F850; } }
L_0026F790:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F79Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005D(c, 279u, depth + 1u); else { c.pc = 0x00277180u; return; } if (c.pc != 0x0026F79Cu) [[unlikely]] return; }
L_0026F79C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0026F800; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F7ACu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005D(c, 156u, depth + 1u); else { c.pc = 0x00275EB0u; return; } if (c.pc != 0x0026F7ACu) [[unlikely]] return; }
L_0026F7AC:
    set32(c.r[18], ld32((c.r[28].w[0] - 23616u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F7BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005D(c, 274u, depth + 1u); else { c.pc = 0x002770D0u; return; } if (c.pc != 0x0026F7BCu) [[unlikely]] return; }
L_0026F7BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026F7E8; } }
    c.budget -= 1;
L_0026F7C8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23616u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F7DCu); set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_005D(c, 274u, depth + 1u); else { c.pc = 0x002770D0u; return; } if (c.pc != 0x0026F7DCu) [[unlikely]] return; }
L_0026F7DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026F7C8u | kUnwind; return; } goto L_0026F7C8; } }
    c.budget -= 1;
L_0026F7E8:
    set32(c.r[4], c.r[18].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F7F4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005D(c, 156u, depth + 1u); else { c.pc = 0x00275EB0u; return; } if (c.pc != 0x0026F7F4u) [[unlikely]] return; }
L_0026F7F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026F850; } }
    c.budget -= 1;
L_0026F800:
    set32(c.r[2], ld32((c.r[28].w[0] - 23616u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 23620u), c.r[2].w[0]);  if (t) { goto L_0026F850; } }
L_0026F810:
    set32(c.r[2], ld32((c.r[28].w[0] - 23616u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23620u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_0026F830; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 23620u), c.r[2].w[0]);  if (t) { goto L_0026F850; } }
L_0026F830:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F83Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005D(c, 274u, depth + 1u); else { c.pc = 0x002770D0u; return; } if (c.pc != 0x0026F83Cu) [[unlikely]] return; }
L_0026F83C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0026F850; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F84Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005D(c, 156u, depth + 1u); else { c.pc = 0x00275EB0u; return; } if (c.pc != 0x0026F84Cu) [[unlikely]] return; }
L_0026F84C:
    c.budget -= 1;
L_0026F850:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F85Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026F6B0u; return; } if (c.pc != 0x0026F85Cu) [[unlikely]] return; }
L_0026F85C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23620u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
L_0026F868:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026F880:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23688u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0026F8B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026F930; } }
    c.budget -= 1;
L_0026F8B0:
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    set32(c.r[2], 0u + 23u);
    set32(c.r[17], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[18], ld32((c.r[4].w[0])));  if (t) { goto L_0026F8F8; } }
    set32(c.r[2], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026F8D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026F910; } }
L_0026F8D8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F8E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005D(c, 279u, depth + 1u); else { c.pc = 0x00277180u; return; } if (c.pc != 0x0026F8E4u) [[unlikely]] return; }
L_0026F8E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026F910; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0026F910; } }
    c.budget -= 1;
L_0026F8F8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F904u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005D(c, 274u, depth + 1u); else { c.pc = 0x002770D0u; return; } if (c.pc != 0x0026F904u) [[unlikely]] return; }
L_0026F904:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026F910; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_0026F910:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F91Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026F6B0u; return; } if (c.pc != 0x0026F91Cu) [[unlikely]] return; }
L_0026F91C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026F92C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026F930; } }
L_0026F92C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23616u)));
    c.budget -= 1;
L_0026F930:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026F950:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23688u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_0026F978; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026F9B0; } }
    c.budget -= 1;
L_0026F978:
    set32(c.r[16], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[28].w[0] - 23588u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F988u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 249u, depth + 1u); else { c.pc = 0x0026ECD0u; return; } if (c.pc != 0x0026F988u) [[unlikely]] return; }
L_0026F988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F990u);  if (depth < kMaxDepth) unit_005B(c, 232u, depth + 1u); else { c.pc = 0x0026E9D0u; return; } if (c.pc != 0x0026F990u) [[unlikely]] return; }
L_0026F990:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F99Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0026F99Cu) [[unlikely]] return; }
L_0026F99C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F9A4u);  if (depth < kMaxDepth) unit_005B(c, 167u, depth + 1u); else { c.pc = 0x0026DDA0u; return; } if (c.pc != 0x0026F9A4u) [[unlikely]] return; }
L_0026F9A4:
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[28].w[0] - 23688u), c.r[3].w[0]);
    c.budget -= 3;
L_0026F9B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026F9C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23688u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_0026F9F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026FAE8; } }
L_0026F9F0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0026FA10; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23616u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026FA18; } }
    c.budget -= 1;
L_0026FA10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026FAE8; } }
L_0026FA18:
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[19], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    set32(c.r[18], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[17], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 23696u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23692u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FA3Cu); st32((c.r[28].w[0] - 23620u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 235u, depth + 1u); else { c.pc = 0x0026EA10u; return; } if (c.pc != 0x0026FA3Cu) [[unlikely]] return; }
L_0026FA3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FA48u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0026FA48u) [[unlikely]] return; }
L_0026FA48:
    set32(c.r[4], ld32((c.r[28].w[0] - 23692u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FA54u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005B(c, 225u, depth + 1u); else { c.pc = 0x0026E8F0u; return; } if (c.pc != 0x0026FA54u) [[unlikely]] return; }
L_0026FA54:
    set32(c.r[5], ld32((c.r[28].w[0] - 23696u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FA60u); set32(c.r[4], ld32((c.r[28].w[0] - 23692u)));  if (depth < kMaxDepth) unit_005E(c, 67u, depth + 1u); else { c.pc = 0x002793B0u; return; } if (c.pc != 0x0026FA60u) [[unlikely]] return; }
L_0026FA60:
    set32(c.r[5], ld32((c.r[28].w[0] - 23692u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23696u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23588u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 23692u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23692u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0026FA98; } }
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_0026FAE8; } }
    c.budget -= 1;
L_0026FA98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FAA0u);  if (depth < kMaxDepth) unit_005D(c, 126u, depth + 1u); else { c.pc = 0x00275690u; return; } if (c.pc != 0x0026FAA0u) [[unlikely]] return; }
L_0026FAA0:
    st32((c.r[28].w[0] - 23696u), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FAB0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005D(c, 156u, depth + 1u); else { c.pc = 0x00275EB0u; return; } if (c.pc != 0x0026FAB0u) [[unlikely]] return; }
L_0026FAB0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FABCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026F6B0u; return; } if (c.pc != 0x0026FABCu) [[unlikely]] return; }
L_0026FABC:
    set32(c.r[4], ld32((c.r[28].w[0] - 23692u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00910000u);
    set32(c.r[2], c.r[2].w[0] - 17188u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FAE0u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_005D(c, 239u, depth + 1u); else { c.pc = 0x00276B10u; return; } if (c.pc != 0x0026FAE0u) [[unlikely]] return; }
L_0026FAE0:
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0026FAE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0026FB10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30364u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0026FB30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026FB68; } }
    c.budget -= 1;
L_0026FB30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FB3Cu); set32(c.r[4], c.r[4].w[0] - 26512u);  if (depth < kMaxDepth) unit_005C(c, 32u, depth + 1u); else { c.pc = 0x002702C0u; return; } if (c.pc != 0x0026FB3Cu) [[unlikely]] return; }
L_0026FB3C:
    set32(c.r[3], 0u - 7u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0026FB50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026FB68; } }
L_0026FB50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FB58u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 189u, depth + 1u); else { c.pc = 0x0026E260u; return; } if (c.pc != 0x0026FB58u) [[unlikely]] return; }
L_0026FB58:
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[28].w[0] - 23688u), c.r[3].w[0]);
    c.budget -= 4;
L_0026FB68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026FB80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30364u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0026FBA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026FBB8; } }
    c.budget -= 1;
L_0026FBA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FBA8u);  if (depth < kMaxDepth) unit_005B(c, 167u, depth + 1u); else { c.pc = 0x0026DDA0u; return; } if (c.pc != 0x0026FBA8u) [[unlikely]] return; }
L_0026FBA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FBB0u);  if (depth < kMaxDepth) unit_005C(c, 41u, depth + 1u); else { c.pc = 0x002703C0u; return; } if (c.pc != 0x0026FBB0u) [[unlikely]] return; }
L_0026FBB0:
    st32((c.r[28].w[0] - 23688u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0026FBB8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026FBD0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23708u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026FC18; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23688u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026FC20; } }
    c.budget -= 1;
L_0026FC18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0026FD70; } }
L_0026FC20:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[21], ld32((c.r[4].w[0] - 4u)));  if (t) { goto L_0026FC40; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026FC40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026FD70; } }
L_0026FC40:
    set32(c.r[19], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FC50u); set32(c.r[4], ld32((c.r[4].w[0] + 12u)));  if (depth < kMaxDepth) unit_005B(c, 353u, depth + 1u); else { c.pc = 0x0026FDA0u; return; } if (c.pc != 0x0026FC50u) [[unlikely]] return; }
L_0026FC50:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0026FC60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0026FD70; } }
L_0026FC60:
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 18624u);  if (t) { goto L_0026FCE8; } }
    c.budget -= 1;
L_0026FC78:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 1u));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[22].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FC94u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 287u, depth + 1u); else { c.pc = 0x00277300u; return; } if (c.pc != 0x0026FC94u) [[unlikely]] return; }
L_0026FC94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026FCA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0026FD70; } }
    c.budget -= 1;
L_0026FCA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FCB0u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 310u, depth + 1u); else { c.pc = 0x00277880u; return; } if (c.pc != 0x0026FCB0u) [[unlikely]] return; }
L_0026FCB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FCB8u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_005D(c, 300u, depth + 1u); else { c.pc = 0x00277620u; return; } if (c.pc != 0x0026FCB8u) [[unlikely]] return; }
L_0026FCB8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026FCD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0026FD70; } }
    c.budget -= 1;
L_0026FCD0:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[19], c.r[19].w[0] + 2u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026FC78u | kUnwind; return; } goto L_0026FC78; } }
L_0026FCE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00900000u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 18624u);
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[2], 0u + 30u);
    st16((c.r[29].w[0] + 132u), static_cast<std::uint16_t>(c.r[16].w[0]));
    st8((c.r[29].w[0] + 135u), static_cast<std::uint8_t>(c.r[20].w[0]));
    st32((c.r[29].w[0] + 140u), c.r[18].w[0]);
    st8((c.r[29].w[0] + 134u), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
    { const bool t = c.r[21].d[0] != c.r[2].d[0]; st8((c.r[29].w[0] + 136u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0026FD30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FD1Cu); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_005C(c, 151u, depth + 1u); else { c.pc = 0x002717D0u; return; } if (c.pc != 0x0026FD1Cu) [[unlikely]] return; }
L_0026FD1C:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0026FD68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026FD70; } }
L_0026FD30:
    set32(c.r[2], 0u + 31u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_0026FD68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FD44u);  if (depth < kMaxDepth) unit_005C(c, 173u, depth + 1u); else { c.pc = 0x00271AC0u; return; } if (c.pc != 0x0026FD44u) [[unlikely]] return; }
L_0026FD44:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0026FD58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026FD70; } }
L_0026FD58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026FD68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0026FD70; } }
L_0026FD68:
    set32(c.r[2], 0u + 4u);
    c.budget -= 2;
L_0026FD70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0026FDA0:
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; c.r[2].d[0] = c.r[3].sd[0] < 30ll ? 1ull : 0ull;  if (t) { goto L_0026FDB8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026FDC0; } }
    c.budget -= 1;
L_0026FDB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0026FDD0; } }
L_0026FDC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 25200u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 4;
L_0026FDD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026FDE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FDF8u); set32(c.r[4], c.r[4].w[0] - 26512u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0026FDF8u) [[unlikely]] return; }
L_0026FDF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026FE10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 3;
L_0026FE1C:
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23688u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_0026FE38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026FEE0; } }
L_0026FE38:
    set32(c.r[17], ld32((c.r[4].w[0])));
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23696u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23588u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23692u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026FE68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026FEE0; } }
    c.budget -= 1;
L_0026FE68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FE70u);  if (depth < kMaxDepth) unit_005D(c, 127u, depth + 1u); else { c.pc = 0x00275700u; return; } if (c.pc != 0x0026FE70u) [[unlikely]] return; }
L_0026FE70:
    set32(c.r[4], ld32((c.r[28].w[0] - 23692u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 23588u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FE80u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_005D(c, 24u, depth + 1u); else { c.pc = 0x002743D0u; return; } if (c.pc != 0x0026FE80u) [[unlikely]] return; }
L_0026FE80:
    set32(c.r[2], ld32((c.r[28].w[0] - 23696u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23692u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 23588u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[28].w[0] - 23696u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[28].w[0] - 23696u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FEA0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_005D(c, 31u, depth + 1u); else { c.pc = 0x00274510u; return; } if (c.pc != 0x0026FEA0u) [[unlikely]] return; }
L_0026FEA0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FEACu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005D(c, 156u, depth + 1u); else { c.pc = 0x00275EB0u; return; } if (c.pc != 0x0026FEACu) [[unlikely]] return; }
L_0026FEAC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FEB8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026F6B0u; return; } if (c.pc != 0x0026FEB8u) [[unlikely]] return; }
L_0026FEB8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23692u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00910000u);
    set32(c.r[2], c.r[2].w[0] - 17188u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
L_0026FED4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FEDCu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_005D(c, 239u, depth + 1u); else { c.pc = 0x00276B10u; return; } if (c.pc != 0x0026FEDCu) [[unlikely]] return; }
L_0026FEDC:
    c.budget -= 1;
L_0026FEE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026FF00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23688u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_0026FF28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026FFC0; } }
L_0026FF28:
    set32(c.r[2], ld32((c.r[28].w[0] - 23696u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[17], ld32((c.r[4].w[0])));  if (t) { goto L_0026FF48; } }
L_0026FF3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026FFC0; } }
    c.budget -= 1;
L_0026FF48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FF50u); set32(c.r[4], ld32((c.r[28].w[0] - 23692u)));  if (depth < kMaxDepth) unit_005D(c, 127u, depth + 1u); else { c.pc = 0x00275700u; return; } if (c.pc != 0x0026FF50u) [[unlikely]] return; }
L_0026FF50:
    set32(c.r[4], ld32((c.r[28].w[0] - 23692u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 23588u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FF60u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_005D(c, 24u, depth + 1u); else { c.pc = 0x002743D0u; return; } if (c.pc != 0x0026FF60u) [[unlikely]] return; }
L_0026FF60:
    set32(c.r[2], ld32((c.r[28].w[0] - 23696u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23692u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 23588u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[28].w[0] - 23696u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[28].w[0] - 23696u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FF80u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_005D(c, 31u, depth + 1u); else { c.pc = 0x00274510u; return; } if (c.pc != 0x0026FF80u) [[unlikely]] return; }
L_0026FF80:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FF8Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005D(c, 156u, depth + 1u); else { c.pc = 0x00275EB0u; return; } if (c.pc != 0x0026FF8Cu) [[unlikely]] return; }
L_0026FF8C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FF98u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026F6B0u; return; } if (c.pc != 0x0026FF98u) [[unlikely]] return; }
    goto L_0026FF98;
L_0026FF94:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0026FF98:
    set32(c.r[4], ld32((c.r[28].w[0] - 23692u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00910000u);
    set32(c.r[2], c.r[2].w[0] - 17188u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FFBCu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_005D(c, 239u, depth + 1u); else { c.pc = 0x00276B10u; return; } if (c.pc != 0x0026FFBCu) [[unlikely]] return; }
L_0026FFBC:
    c.budget -= 1;
L_0026FFC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026FFE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23688u)));
    c.budget -= 8;
    [[clang::musttail]] return unit_005C(c, 1u, depth);
}

}
