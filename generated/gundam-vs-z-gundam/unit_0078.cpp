#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0078[4096] = {
    1, 2, 3, 4, 5, 0, 6, 7, 8, 9, 10, 11, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 16, 0, 0, 0,
    17, 18, 0, 0, 0, 19, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0,
    0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 0,
    0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0,
    0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0,
    0, 0, 38, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 58, 0,
    59, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0,
    0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 69, 0, 70, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0,
    73, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0,
    0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 101, 0, 102, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0,
    0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0,
    114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 133, 0, 0, 0,
    134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0,
    0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    145, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 149, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0,
    0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156,
    0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0,
    164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0,
    168, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 180, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 192, 0, 193, 0,
    0, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 200, 201, 0, 0, 202, 0, 203, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0,
    0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0,
    220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 231, 0, 232, 0, 0, 0,
    0, 0, 0, 233, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0,
    262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 266, 0, 0,
    0, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271,
    0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0078(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002E0000;
    case 2u: goto L_002E0004;
    case 3u: goto L_002E0008;
    case 4u: goto L_002E000C;
    case 5u: goto L_002E0010;
    case 6u: goto L_002E0018;
    case 7u: goto L_002E001C;
    case 8u: goto L_002E0020;
    case 9u: goto L_002E0024;
    case 10u: goto L_002E0028;
    case 11u: goto L_002E002C;
    case 12u: goto L_002E0030;
    case 13u: goto L_002E003C;
    case 14u: goto L_002E0060;
    case 15u: goto L_002E0068;
    case 16u: goto L_002E0070;
    case 17u: goto L_002E0080;
    case 18u: goto L_002E0084;
    case 19u: goto L_002E0094;
    case 20u: goto L_002E00A0;
    case 21u: goto L_002E00A8;
    case 22u: goto L_002E0100;
    case 23u: goto L_002E01A0;
    case 24u: goto L_002E01C0;
    case 25u: goto L_002E01EC;
    case 26u: goto L_002E0210;
    case 27u: goto L_002E0240;
    case 28u: goto L_002E0250;
    case 29u: goto L_002E0280;
    case 30u: goto L_002E02A0;
    case 31u: goto L_002E02C8;
    case 32u: goto L_002E0358;
    case 33u: goto L_002E0360;
    case 34u: goto L_002E0384;
    case 35u: goto L_002E03E0;
    case 36u: goto L_002E0404;
    case 37u: goto L_002E0474;
    case 38u: goto L_002E0488;
    case 39u: goto L_002E0490;
    case 40u: goto L_002E04A0;
    case 41u: goto L_002E04E8;
    case 42u: goto L_002E0540;
    case 43u: goto L_002E0598;
    case 44u: goto L_002E05F0;
    case 45u: goto L_002E0648;
    case 46u: goto L_002E0678;
    case 47u: goto L_002E06A0;
    case 48u: goto L_002E0738;
    case 49u: goto L_002E0740;
    case 50u: goto L_002E0748;
    case 51u: goto L_002E0760;
    case 52u: goto L_002E0774;
    case 53u: goto L_002E07C0;
    case 54u: goto L_002E089C;
    case 55u: goto L_002E093C;
    case 56u: goto L_002E0958;
    case 57u: goto L_002E0960;
    case 58u: goto L_002E0978;
    case 59u: goto L_002E0980;
    case 60u: goto L_002E0990;
    case 61u: goto L_002E09A0;
    case 62u: goto L_002E0A3C;
    case 63u: goto L_002E0A44;
    case 64u: goto L_002E0A54;
    case 65u: goto L_002E0A74;
    case 66u: goto L_002E0A94;
    case 67u: goto L_002E0AB4;
    case 68u: goto L_002E0AC4;
    case 69u: goto L_002E0ACC;
    case 70u: goto L_002E0AD4;
    case 71u: goto L_002E0ADC;
    case 72u: goto L_002E0AE4;
    case 73u: goto L_002E0B00;
    case 74u: goto L_002E0B08;
    case 75u: goto L_002E0B20;
    case 76u: goto L_002E0B40;
    case 77u: goto L_002E0B50;
    case 78u: goto L_002E0B70;
    case 79u: goto L_002E0C0C;
    case 80u: goto L_002E0C14;
    case 81u: goto L_002E0C68;
    case 82u: goto L_002E0D70;
    case 83u: goto L_002E0DA4;
    case 84u: goto L_002E0DAC;
    case 85u: goto L_002E0DC8;
    case 86u: goto L_002E0DD0;
    case 87u: goto L_002E0E48;
    case 88u: goto L_002E0EA8;
    case 89u: goto L_002E0F20;
    case 90u: goto L_002E0F28;
    case 91u: goto L_002E0F30;
    case 92u: goto L_002E0F48;
    case 93u: goto L_002E0F60;
    case 94u: goto L_002E1008;
    case 95u: goto L_002E1010;
    case 96u: goto L_002E102C;
    case 97u: goto L_002E104C;
    case 98u: goto L_002E106C;
    case 99u: goto L_002E108C;
    case 100u: goto L_002E10A4;
    case 101u: goto L_002E10AC;
    case 102u: goto L_002E10B4;
    case 103u: goto L_002E10BC;
    case 104u: goto L_002E10C4;
    case 105u: goto L_002E10E0;
    case 106u: goto L_002E10F0;
    case 107u: goto L_002E1114;
    case 108u: goto L_002E1130;
    case 109u: goto L_002E1168;
    case 110u: goto L_002E1190;
    case 111u: goto L_002E11BC;
    case 112u: goto L_002E11E0;
    case 113u: goto L_002E11F0;
    case 114u: goto L_002E1200;
    case 115u: goto L_002E1240;
    case 116u: goto L_002E12A0;
    case 117u: goto L_002E131C;
    case 118u: goto L_002E1340;
    case 119u: goto L_002E1364;
    case 120u: goto L_002E137C;
    case 121u: goto L_002E13D0;
    case 122u: goto L_002E1424;
    case 123u: goto L_002E143C;
    case 124u: goto L_002E14A0;
    case 125u: goto L_002E14B0;
    case 126u: goto L_002E1504;
    case 127u: goto L_002E151C;
    case 128u: goto L_002E15A0;
    case 129u: goto L_002E15D0;
    case 130u: goto L_002E1620;
    case 131u: goto L_002E1648;
    case 132u: goto L_002E166C;
    case 133u: goto L_002E1670;
    case 134u: goto L_002E1680;
    case 135u: goto L_002E1690;
    case 136u: goto L_002E16B8;
    case 137u: goto L_002E16E4;
    case 138u: goto L_002E16F0;
    case 139u: goto L_002E1704;
    case 140u: goto L_002E1718;
    case 141u: goto L_002E1760;
    case 142u: goto L_002E1788;
    case 143u: goto L_002E17B0;
    case 144u: goto L_002E17D0;
    case 145u: goto L_002E1800;
    case 146u: goto L_002E180C;
    case 147u: goto L_002E1820;
    case 148u: goto L_002E1834;
    case 149u: goto L_002E183C;
    case 150u: goto L_002E1844;
    case 151u: goto L_002E184C;
    case 152u: goto L_002E1870;
    case 153u: goto L_002E188C;
    case 154u: goto L_002E18C0;
    case 155u: goto L_002E18F4;
    case 156u: goto L_002E18FC;
    case 157u: goto L_002E1904;
    case 158u: goto L_002E1920;
    case 159u: goto L_002E1940;
    case 160u: goto L_002E199C;
    case 161u: goto L_002E19B4;
    case 162u: goto L_002E19C0;
    case 163u: goto L_002E19DC;
    case 164u: goto L_002E1A00;
    case 165u: goto L_002E1A30;
    case 166u: goto L_002E1A50;
    case 167u: goto L_002E1A70;
    case 168u: goto L_002E1A80;
    case 169u: goto L_002E1A88;
    case 170u: goto L_002E1AA4;
    case 171u: goto L_002E1AB0;
    case 172u: goto L_002E1AC0;
    case 173u: goto L_002E1AD0;
    case 174u: goto L_002E1AF0;
    case 175u: goto L_002E1B00;
    case 176u: goto L_002E1B90;
    case 177u: goto L_002E1BB4;
    case 178u: goto L_002E1C18;
    case 179u: goto L_002E1C20;
    case 180u: goto L_002E1C28;
    case 181u: goto L_002E1C34;
    case 182u: goto L_002E1C44;
    case 183u: goto L_002E1C54;
    case 184u: goto L_002E1C90;
    case 185u: goto L_002E1CCC;
    case 186u: goto L_002E1D0C;
    case 187u: goto L_002E1D1C;
    case 188u: goto L_002E1D50;
    case 189u: goto L_002E1DE0;
    case 190u: goto L_002E1E50;
    case 191u: goto L_002E1E68;
    case 192u: goto L_002E1E70;
    case 193u: goto L_002E1E78;
    case 194u: goto L_002E1E84;
    case 195u: goto L_002E1E94;
    case 196u: goto L_002E1EA4;
    case 197u: goto L_002E1EE0;
    case 198u: goto L_002E1F10;
    case 199u: goto L_002E1F28;
    case 200u: goto L_002E1F30;
    case 201u: goto L_002E1F34;
    case 202u: goto L_002E1F40;
    case 203u: goto L_002E1F48;
    case 204u: goto L_002E1F50;
    case 205u: goto L_002E1F60;
    case 206u: goto L_002E1F90;
    case 207u: goto L_002E1FB0;
    case 208u: goto L_002E201C;
    case 209u: goto L_002E209C;
    case 210u: goto L_002E20CC;
    case 211u: goto L_002E20F0;
    case 212u: goto L_002E210C;
    case 213u: goto L_002E2148;
    case 214u: goto L_002E2190;
    case 215u: goto L_002E21A0;
    case 216u: goto L_002E21B0;
    case 217u: goto L_002E2210;
    case 218u: goto L_002E2254;
    case 219u: goto L_002E2270;
    case 220u: goto L_002E2280;
    case 221u: goto L_002E22C0;
    case 222u: goto L_002E2338;
    case 223u: goto L_002E2828;
    case 224u: goto L_002E2910;
    case 225u: goto L_002E2934;
    case 226u: goto L_002E293C;
    case 227u: goto L_002E2950;
    case 228u: goto L_002E2960;
    case 229u: goto L_002E2990;
    case 230u: goto L_002E29E0;
    case 231u: goto L_002E29E8;
    case 232u: goto L_002E29F0;
    case 233u: goto L_002E2A0C;
    case 234u: goto L_002E2A14;
    case 235u: goto L_002E2A30;
    case 236u: goto L_002E2A50;
    case 237u: goto L_002E2AA0;
    case 238u: goto L_002E2AF0;
    case 239u: goto L_002E2B40;
    case 240u: goto L_002E2B90;
    case 241u: goto L_002E2BC8;
    case 242u: goto L_002E2C80;
    case 243u: goto L_002E2CB0;
    case 244u: goto L_002E2CD0;
    case 245u: goto L_002E2D2C;
    case 246u: goto L_002E2D38;
    case 247u: goto L_002E2D44;
    case 248u: goto L_002E2D70;
    case 249u: goto L_002E2DA0;
    case 250u: goto L_002E2DC0;
    case 251u: goto L_002E2E00;
    case 252u: goto L_002E2E10;
    case 253u: goto L_002E2EA0;
    case 254u: goto L_002E2F10;
    case 255u: goto L_002E2F60;
    case 256u: goto L_002E2F98;
    case 257u: goto L_002E3060;
    case 258u: goto L_002E30AC;
    case 259u: goto L_002E30C0;
    case 260u: goto L_002E30DC;
    case 261u: goto L_002E30F0;
    case 262u: goto L_002E3100;
    case 263u: goto L_002E3190;
    case 264u: goto L_002E3250;
    case 265u: goto L_002E32EC;
    case 266u: goto L_002E32F4;
    case 267u: goto L_002E3310;
    case 268u: goto L_002E331C;
    case 269u: goto L_002E332C;
    case 270u: goto L_002E3360;
    case 271u: goto L_002E33FC;
    case 272u: goto L_002E3404;
    case 273u: goto L_002E3420;
    case 274u: goto L_002E342C;
    case 275u: goto L_002E343C;
    case 276u: goto L_002E3470;
    case 277u: goto L_002E3590;
    case 278u: goto L_002E36E0;
    case 279u: goto L_002E3890;
    case 280u: goto L_002E39E0;
    case 281u: goto L_002E3B40;
    case 282u: goto L_002E3D50;
    case 283u: goto L_002E3E20;
    case 284u: goto L_002E3F10;
    default: bad_entry(c, 0x002E0000u); return;
    }
L_002E0000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0008u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002E0008u) [[unlikely]] return; }
    goto L_002E0008;
L_002E0004:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_002E0008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0010u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002E0010u) [[unlikely]] return; }
    goto L_002E0010;
L_002E000C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_002E0010:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E001Cu); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x002E001Cu) [[unlikely]] return; }
    goto L_002E001C;
L_002E0018:
    set32(c.r[4], c.r[4].w[0] + 20224u);
    c.budget -= 1;
L_002E001C:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002E0020:
    c.r[16].d[0] = c.r[3].d[0] << 56;
    c.budget -= 1;
L_002E0024:
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 1;
L_002E0028:
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.budget -= 1;
L_002E002C:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 1;
L_002E0030:
    c.r[3].d[0] = c.r[3].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DFF28u | kUnwind; return; } [[clang::musttail]] return unit_0077(c, 423u, depth); } }
L_002E003C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002E0060:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 2;
L_002E0068:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002E0070:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_002E0080:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.budget -= 1;
L_002E0084:
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_002E0094:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[16], c.r[16].w[0] - 27856u);
    c.budget -= 3;
L_002E00A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E00A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 42u, depth + 1u); else { c.pc = 0x001C8A60u; return; } if (c.pc != 0x002E00A8u) [[unlikely]] return; }
L_002E00A8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 59u)));
    st8((c.r[16].w[0] + 8658u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 255u);  if (t) { goto L_002E0150; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002E0150; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 8663u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 8656u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[16].w[0] + 8663u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 94u)));
    st8((c.r[16].w[0] + 8680u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 12;
L_002E0100:
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 100u)));
    st8((c.r[16].w[0] + 8661u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 65u)));
    c.budget -= 8;
    { const bool t = c.r[17].d[0] != 0ull; st8((c.r[16].w[0] + 8659u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002E0148; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[3], c.r[3].w[0] + 18336u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 82u)));
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 8660u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002E0158; } }
    c.budget -= 1;
L_002E0148:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 8660u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002E0158; } }
L_002E0150:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002E0158:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[3].d[0] = c.r[4].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 255u);  if (t) { goto L_002E0178; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002E0178; } }
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002E0178:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E00A0u | kUnwind; return; } goto L_002E00A0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E01A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[16], c.r[16].w[0] - 27856u);
    c.budget -= 8;
L_002E01C0:
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002E01F0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[3].d[0] = c.r[3].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002E01F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E01ECu);  if (depth < kMaxDepth) unit_00AB(c, 44u, depth + 1u); else { c.pc = 0x003AC540u; return; } if (c.pc != 0x002E01ECu) [[unlikely]] return; }
L_002E01EC:
    c.budget -= 1;
L_002E01F0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E01C0u | kUnwind; return; } goto L_002E01C0; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] - 27856u);
    c.budget -= 4;
L_002E0210:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002E0250; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[1].d[0] = c.r[3].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < 64ll ? 1ull : 0ull;  if (t) { goto L_002E0250; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002E0248; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0240u);  if (depth < kMaxDepth) unit_0078(c, 29u, depth + 1u); else { c.pc = 0x002E0280u; return; } if (c.pc != 0x002E0240u) [[unlikely]] return; }
L_002E0240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E0250; } }
L_002E0248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0250u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 77u, depth + 1u); else { c.pc = 0x002E0B50u; return; } if (c.pc != 0x002E0250u) [[unlikely]] return; }
L_002E0250:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E0210u | kUnwind; return; } goto L_002E0210; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E0280:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + 28592u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002E0000u < 16384u) { entry = entries_0078[(t - 0x002E0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E02A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E02C8u); st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003A(c, 60u, depth + 1u); else { c.pc = 0x001E9450u; return; } if (c.pc != 0x002E02C8u) [[unlikely]] return; }
L_002E02C8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[8], c.r[8].w[0] + 18512u);
    set32(c.r[2], c.r[2].w[0] + 12304u);
    set32(c.r[5], c.r[5].w[0] + 16720u);
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0358u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x002E0358u) [[unlikely]] return; }
L_002E0358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0360u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 130u, depth + 1u); else { c.pc = 0x0021DDA0u; return; } if (c.pc != 0x002E0360u) [[unlikely]] return; }
L_002E0360:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8680u)));
    set32(c.r[3], c.r[3].w[0] + 17616u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 9;
L_002E0384:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E03A0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8659u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8664u), c.r[2].w[0]);  if (t) { goto L_002E03A8; } }
L_002E03A0:
    st32((c.r[16].w[0] + 8664u), 0u);
    c.budget -= 2;
L_002E03A8:
    c.r[6].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x459C0000u);
    c.r[3].d[0] = c.r[2].d[0] | 16384ull;
    set32(c.r[5], c.r[5].w[0] - 3728u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC59C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    st32((c.r[16].w[0] + 8668u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 1608u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 109u)));
    c.budget -= 14;
L_002E03E0:
    st8((c.r[16].w[0] + 8681u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 1608u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 110u)));
    st8((c.r[16].w[0] + 8682u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8661u)));
    st8((c.r[16].w[0] + 515u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 1208u), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0404u); st32((c.r[16].w[0] + 1212u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006A(c, 135u, depth + 1u); else { c.pc = 0x002A9EB0u; return; } if (c.pc != 0x002E0404u) [[unlikely]] return; }
L_002E0404:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[4].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = 0ull | 62464ull;
    set32(c.r[2], 0u + 18u);
    st8((c.r[16].w[0] + 268u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    st8((c.r[16].w[0] + 269u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    st8((c.r[16].w[0] + 270u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 264u), c.r[16].w[0]);
    st16((c.r[16].w[0] + 562u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 566u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E0450; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    st8((c.r[16].w[0] + 771u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002E0450:
    st8((c.r[16].w[0] + 953u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 952u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 1608u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 124u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002E0478; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0474u);  if (depth < kMaxDepth) unit_0039(c, 176u, depth + 1u); else { c.pc = 0x001E6BB0u; return; } if (c.pc != 0x002E0474u) [[unlikely]] return; }
L_002E0474:
    c.budget -= 1;
L_002E0478:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 956u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0488u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 145u, depth + 1u); else { c.pc = 0x001DB830u; return; } if (c.pc != 0x002E0488u) [[unlikely]] return; }
L_002E0488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0490u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 148u, depth + 1u); else { c.pc = 0x001DB900u; return; } if (c.pc != 0x002E0490u) [[unlikely]] return; }
L_002E0490:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 8864u);
    c.budget -= 4;
L_002E04A0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002E04C0; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E04A0u | kUnwind; return; } goto L_002E04A0; } }
    c.budget -= 1;
L_002E04C0:
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_002E06F8; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 19904u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002E0000u < 16384u) { entry = entries_0078[(t - 0x002E0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E04E8:
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
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1620u), c.r[2].w[0]);  if (t) { goto L_002E06F8; } }
L_002E0540:
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
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1620u), c.r[2].w[0]);  if (t) { goto L_002E06F8; } }
L_002E0598:
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
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1620u), c.r[2].w[0]);  if (t) { goto L_002E06F8; } }
L_002E05F0:
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
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1620u), c.r[2].w[0]);  if (t) { goto L_002E06F8; } }
L_002E0648:
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
    c.budget -= 12;
L_002E0678:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 1616u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1620u), c.r[2].w[0]);  if (t) { goto L_002E06F8; } }
L_002E06A0:
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
L_002E06F8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 41u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E0730; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 42u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E0730; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], 0u + 26u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 81u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 29u);  if (t) { goto L_002E0740; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E0740; } }
L_002E0730:
    set32(c.r[2], ld32((c.r[16].w[0] + 1612u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_002E0738:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0740u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E0740u) [[unlikely]] return; }
L_002E0740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0748u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 51u, depth + 1u); else { c.pc = 0x002E0760u; return; } if (c.pc != 0x002E0748u) [[unlikely]] return; }
L_002E0748:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E0760:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0774u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 121u, depth + 1u); else { c.pc = 0x002E13D0u; return; } if (c.pc != 0x002E0774u) [[unlikely]] return; }
L_002E0774:
    st32((c.r[16].w[0] + 40u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    st32((c.r[16].w[0] + 36u), 0u);
    set32(c.r[3], c.r[3].w[0] + 6096u);
    st32((c.r[16].w[0] + 32u), 0u);
    set32(c.r[2], 0u + 15u);
    st32((c.r[16].w[0] + 80u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 88u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 168u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 503u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 520u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 523u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 556u), static_cast<std::uint16_t>(0u));
    c.budget -= 19;
L_002E07C0:
    st16((c.r[4].w[0] + 524u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 526u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], c.r[5].w[0] + 8u);
    st16((c.r[4].w[0] + 528u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    st16((c.r[4].w[0] + 530u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 532u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 534u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 536u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 538u), static_cast<std::uint16_t>(0u));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E07C0u | kUnwind; return; } goto L_002E07C0; } }
    st8((c.r[16].w[0] + 558u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 560u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 559u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = 0ull + 0ull;
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
    c.budget -= 43;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E089Cu); st8((c.r[16].w[0] + 775u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0039(c, 251u, depth + 1u); else { c.pc = 0x001E7BE0u; return; } if (c.pc != 0x002E089Cu) [[unlikely]] return; }
L_002E089C:
    st8((c.r[16].w[0] + 849u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 255u);
    st32((c.r[16].w[0] + 1264u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
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
    st8((c.r[16].w[0] + 8567u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 8566u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 860u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 764u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 1488u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 1608u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 76u)));
    st32((c.r[16].w[0] + 1236u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 8563u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 8562u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 780u), static_cast<std::uint8_t>(0u));
    c.budget -= 40;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E093Cu); st8((c.r[16].w[0] + 781u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0036(c, 144u, depth + 1u); else { c.pc = 0x001DB7F0u; return; } if (c.pc != 0x002E093Cu) [[unlikely]] return; }
L_002E093C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 1016u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8292u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8252u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 988u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0958u); st32((c.r[16].w[0] + 984u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002E0958u) [[unlikely]] return; }
L_002E0958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0960u); set32(c.r[4], c.r[16].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002E0960u) [[unlikely]] return; }
L_002E0960:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0978u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 73u, depth + 1u); else { c.pc = 0x001D9E00u; return; } if (c.pc != 0x002E0978u) [[unlikely]] return; }
L_002E0978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0980u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 364u, depth + 1u); else { c.pc = 0x001E38C0u; return; } if (c.pc != 0x002E0980u) [[unlikely]] return; }
L_002E0980:
    set32(c.r[2], ld32((c.r[16].w[0] + 1612u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0990u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E0990u) [[unlikely]] return; }
L_002E0990:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E09A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = ld32((c.r[4].w[0] + 128u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
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
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    st32((c.r[4].w[0] + 1272u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    st32((c.r[4].w[0] + 1276u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 88u)));
    st32((c.r[4].w[0] + 1280u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8328u)));
    st32((c.r[4].w[0] + 8568u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8332u)));
    st32((c.r[4].w[0] + 8572u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8264u));
    st32((c.r[4].w[0] + 8272u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8304u));
    st32((c.r[4].w[0] + 8312u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8268u));
    st32((c.r[4].w[0] + 8276u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8308u));
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0A3Cu); st32((c.r[4].w[0] + 8316u), c.f[0]);  if (depth < kMaxDepth) unit_0078(c, 116u, depth + 1u); else { c.pc = 0x002E12A0u; return; } if (c.pc != 0x002E0A3Cu) [[unlikely]] return; }
L_002E0A3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0A44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 129u, depth + 1u); else { c.pc = 0x002E15D0u; return; } if (c.pc != 0x002E0A44u) [[unlikely]] return; }
L_002E0A44:
    set32(c.r[2], ld32((c.r[16].w[0] + 1612u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0A54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E0A54u) [[unlikely]] return; }
L_002E0A54:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + 28608u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0A74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E0A74u) [[unlikely]] return; }
L_002E0A74:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + 28624u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0A94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E0A94u) [[unlikely]] return; }
L_002E0A94:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 710u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + 28640u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0AB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E0AB4u) [[unlikely]] return; }
L_002E0AB4:
    set32(c.r[2], ld32((c.r[16].w[0] + 1612u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0AC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E0AC4u) [[unlikely]] return; }
L_002E0AC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0ACCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 268u, depth + 1u); else { c.pc = 0x001EEDA0u; return; } if (c.pc != 0x002E0ACCu) [[unlikely]] return; }
L_002E0ACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0AD4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 138u, depth + 1u); else { c.pc = 0x001DCE60u; return; } if (c.pc != 0x002E0AD4u) [[unlikely]] return; }
L_002E0AD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0ADCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 56u, depth + 1u); else { c.pc = 0x001DC650u; return; } if (c.pc != 0x002E0ADCu) [[unlikely]] return; }
L_002E0ADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0AE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 352u, depth + 1u); else { c.pc = 0x001BB820u; return; } if (c.pc != 0x002E0AE4u) [[unlikely]] return; }
L_002E0AE4:
    set32(c.r[3], ld32((c.r[16].w[0] + 1608u)));
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 124u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002E0B00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0B00u);  if (depth < kMaxDepth) unit_0039(c, 176u, depth + 1u); else { c.pc = 0x001E6BB0u; return; } if (c.pc != 0x002E0B00u) [[unlikely]] return; }
L_002E0B00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0B08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 466u, depth + 1u); else { c.pc = 0x001C5810u; return; } if (c.pc != 0x002E0B08u) [[unlikely]] return; }
L_002E0B08:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E0B20:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 750u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002E0B40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002E0B50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + 28656u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002E0000u < 16384u) { entry = entries_0078[(t - 0x002E0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E0B70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[9], 0u + 3u);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[8], 0u + 1u);
    c.r[11].d[0] = ld8((c.r[4].w[0] + 8658u));
    set32(c.r[5], c.r[5].w[0] + 18740u);
    set32(c.r[3], c.r[3].w[0] + 12288u);
    set32(c.r[2], c.r[2].w[0] + 16704u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[16], c.r[11].w[0] - 64u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[10], c.r[16].w[0] << 3);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[5], c.r[5].w[0] + c.r[10].w[0]);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[4].w[0] + 8520u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 8288u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 8248u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 8524u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[4].w[0] + 271u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8680u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0C0Cu); set32(c.r[5], c.r[10].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x002E0C0Cu) [[unlikely]] return; }
L_002E0C0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0C14u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 130u, depth + 1u); else { c.pc = 0x0021DDA0u; return; } if (c.pc != 0x002E0C14u) [[unlikely]] return; }
L_002E0C14:
    st32((c.r[17].w[0] + 8664u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], c.r[4].w[0] + 14384u);
    set32(c.r[3], c.r[3].w[0] - 3728u);
    set32(c.r[2], 0u + 3u);
    set32(c.r[5], c.r[5].w[0] << 7);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[17].w[0] + 1608u), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[17].w[0] + 8668u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 1608u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 109u)));
    st8((c.r[17].w[0] + 8681u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 1608u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 110u)));
    st8((c.r[17].w[0] + 8682u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 21;
L_002E0C68:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8682u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_002E0C80; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E0CC8; } }
    c.budget -= 1;
L_002E0C80:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[3].w[0] - 25440u);
    set32(c.r[2], c.r[2].w[0] - 25436u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[17].w[0] + 1208u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1212u), c.f[0]);  if (t) { goto L_002E0D08; } }
    c.budget -= 1;
L_002E0CC8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[3], c.r[3].w[0] - 25760u);
    set32(c.r[2], c.r[2].w[0] - 25756u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[17].w[0] + 1208u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[17].w[0] + 1212u), c.f[0]);
    c.budget -= 16;
L_002E0D08:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8661u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], c.r[5].w[0] + 14484u);
    set32(c.r[3], c.r[3].w[0] + 14486u);
    set32(c.r[2], c.r[2].w[0] + 14488u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[17].w[0] + 515u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[6], c.r[6].w[0] << 7);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    st16((c.r[17].w[0] + 834u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[17].w[0] + 832u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[5], c.r[5].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[17].w[0] + 836u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0D70u); st8((c.r[17].w[0] + 502u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 135u, depth + 1u); else { c.pc = 0x002A9EB0u; return; } if (c.pc != 0x002E0D70u) [[unlikely]] return; }
L_002E0D70:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = 0ull | 62464ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[17].w[0] + 268u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8663u)));
    st8((c.r[17].w[0] + 269u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    st8((c.r[17].w[0] + 270u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[17].w[0] + 264u), c.r[17].w[0]);
    st16((c.r[17].w[0] + 562u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0DA4u); st16((c.r[17].w[0] + 566u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0036(c, 145u, depth + 1u); else { c.pc = 0x001DB830u; return; } if (c.pc != 0x002E0DA4u) [[unlikely]] return; }
L_002E0DA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0DACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 148u, depth + 1u); else { c.pc = 0x001DB900u; return; } if (c.pc != 0x002E0DACu) [[unlikely]] return; }
L_002E0DAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 9280u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0DC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E0DC8u) [[unlikely]] return; }
L_002E0DC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0DD0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 125u, depth + 1u); else { c.pc = 0x002E14B0u; return; } if (c.pc != 0x002E0DD0u) [[unlikely]] return; }
L_002E0DD0:
    set32(c.r[2], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    st8((c.r[17].w[0] + 747u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 17376u);
    st32((c.r[17].w[0] + 40u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 36u), 0u);
    set32(c.r[2], 0u + 14u);
    st32((c.r[17].w[0] + 32u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 80u), 0u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 88u), 0u);
    st32((c.r[17].w[0] + 104u), 0u);
    st32((c.r[17].w[0] + 108u), 0u);
    st32((c.r[17].w[0] + 168u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 1608u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    st32((c.r[17].w[0] + 1236u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 1016u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 8292u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 8252u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 988u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 984u), c.r[3].w[0]);
    st8((c.r[17].w[0] + 503u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 516u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 520u), static_cast<std::uint16_t>(0u));
    st8((c.r[17].w[0] + 523u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 556u), static_cast<std::uint16_t>(0u));
    c.budget -= 30;
L_002E0E48:
    st16((c.r[5].w[0] + 524u), static_cast<std::uint16_t>(0u));
    st16((c.r[5].w[0] + 526u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[6].w[0] + 8u);
    st16((c.r[5].w[0] + 528u), static_cast<std::uint16_t>(0u));
    c.r[6].d[0] = c.r[2].d[0] << 56;
    st16((c.r[5].w[0] + 530u), static_cast<std::uint16_t>(0u));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    st16((c.r[5].w[0] + 532u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[6].sd[0] < 16ll ? 1ull : 0ull;
    st16((c.r[5].w[0] + 534u), static_cast<std::uint16_t>(0u));
    st16((c.r[5].w[0] + 536u), static_cast<std::uint16_t>(0u));
    st16((c.r[5].w[0] + 538u), static_cast<std::uint16_t>(0u));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E0E48u | kUnwind; return; } goto L_002E0E48; } }
    st8((c.r[17].w[0] + 558u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st16((c.r[17].w[0] + 560u), static_cast<std::uint16_t>(0u));
    c.f[12] = 0u;
    st8((c.r[17].w[0] + 559u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[17].w[0] + 564u), static_cast<std::uint16_t>(0u));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[17].w[0] + 517u), static_cast<std::uint8_t>(0u));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 10;
L_002E0EA8:
    st8((c.r[17].w[0] + 570u), static_cast<std::uint8_t>(0u));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    st8((c.r[17].w[0] + 268u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8663u)));
    st8((c.r[17].w[0] + 269u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    st8((c.r[17].w[0] + 270u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 264u), c.r[17].w[0]);
    st8((c.r[17].w[0] + 744u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 749u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 767u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 757u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 838u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 822u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 816u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 814u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 820u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 704u), 0u);
    st32((c.r[17].w[0] + 708u), 0u);
    st32((c.r[17].w[0] + 1256u), 0u);
    st8((c.r[17].w[0] + 811u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 797u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 800u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 808u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 860u), static_cast<std::uint16_t>(0u));
    st8((c.r[17].w[0] + 764u), static_cast<std::uint8_t>(0u));
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0F20u); st32((c.r[17].w[0] + 1488u), 0u);  if (depth < kMaxDepth) unit_0036(c, 73u, depth + 1u); else { c.pc = 0x001D9E00u; return; } if (c.pc != 0x002E0F20u) [[unlikely]] return; }
L_002E0F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0F28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 93u, depth + 1u); else { c.pc = 0x002E0F60u; return; } if (c.pc != 0x002E0F28u) [[unlikely]] return; }
L_002E0F28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0F30u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 364u, depth + 1u); else { c.pc = 0x001E38C0u; return; } if (c.pc != 0x002E0F30u) [[unlikely]] return; }
L_002E0F30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 9216u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0F48u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E0F48u) [[unlikely]] return; }
L_002E0F48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E0F60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.f[3] = ld32((c.r[4].w[0] + 128u));
    c.f[2] = ld32((c.r[4].w[0] + 132u));
    c.f[1] = ld32((c.r[4].w[0] + 136u));
    c.f[0] = ld32((c.r[4].w[0] + 140u));
    set32(c.r[16], c.r[2].w[0] - 64u);
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
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    st32((c.r[4].w[0] + 1272u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    st32((c.r[4].w[0] + 1276u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 88u)));
    st32((c.r[4].w[0] + 1280u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8328u)));
    st32((c.r[4].w[0] + 8568u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8332u)));
    st32((c.r[4].w[0] + 8572u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8264u));
    st32((c.r[4].w[0] + 8272u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8304u));
    st32((c.r[4].w[0] + 8312u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8268u));
    st32((c.r[4].w[0] + 8276u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8308u));
    c.budget -= 42;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1008u); st32((c.r[4].w[0] + 8316u), c.f[0]);  if (depth < kMaxDepth) unit_0078(c, 116u, depth + 1u); else { c.pc = 0x002E12A0u; return; } if (c.pc != 0x002E1008u) [[unlikely]] return; }
L_002E1008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1010u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 129u, depth + 1u); else { c.pc = 0x002E15D0u; return; } if (c.pc != 0x002E1010u) [[unlikely]] return; }
L_002E1010:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 9088u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E102Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E102Cu) [[unlikely]] return; }
L_002E102C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 708u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + 28672u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E104Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E104Cu) [[unlikely]] return; }
L_002E104C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 709u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + 28680u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E106Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E106Cu) [[unlikely]] return; }
L_002E106C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 710u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + 28696u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E108Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E108Cu) [[unlikely]] return; }
L_002E108C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 9024u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E10A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E10A4u) [[unlikely]] return; }
L_002E10A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E10ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 268u, depth + 1u); else { c.pc = 0x001EEDA0u; return; } if (c.pc != 0x002E10ACu) [[unlikely]] return; }
L_002E10AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E10B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 126u, depth + 1u); else { c.pc = 0x001B1CE0u; return; } if (c.pc != 0x002E10B4u) [[unlikely]] return; }
L_002E10B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E10BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 352u, depth + 1u); else { c.pc = 0x001BB820u; return; } if (c.pc != 0x002E10BCu) [[unlikely]] return; }
L_002E10BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E10C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 466u, depth + 1u); else { c.pc = 0x001C5810u; return; } if (c.pc != 0x002E10C4u) [[unlikely]] return; }
L_002E10C4:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E10E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E10F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E1128; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1114u);  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x002E1114u) [[unlikely]] return; }
L_002E1114:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E1140; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E1180; } }
L_002E1128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1130u);  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x002E1130u) [[unlikely]] return; }
L_002E1130:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002E1180; } }
    c.budget -= 1;
L_002E1140:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8444u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E1170; } }
    st8((c.r[16].w[0] + 8444u), static_cast<std::uint8_t>(0u));
    c.f[12] = 0u;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8445u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8446u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8447u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1168u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 73u, depth + 1u); else { c.pc = 0x001D9E00u; return; } if (c.pc != 0x002E1168u) [[unlikely]] return; }
L_002E1168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E1180; } }
L_002E1170:
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 8447u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 8446u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 8445u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_002E1180:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E1190:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 96u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 1264u), 0u);
    st32((c.r[4].w[0] + 1260u), 0u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E11BCu); st16((c.r[4].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003A(c, 21u, depth + 1u); else { c.pc = 0x001E86E0u; return; } if (c.pc != 0x002E11BCu) [[unlikely]] return; }
L_002E11BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E11D0; } }
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 36u);
    st8((c.r[16].w[0] + 821u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002E11D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E11E0:
    c.budget -= 2;
    { set32(c.r[5], ld32((c.r[4].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E4FB0u | kUnwind; return; } [[clang::musttail]] return unit_0039(c, 77u, depth); }
L_002E11F0:
    c.budget -= 2;
    { set32(c.r[5], ld32((c.r[4].w[0] + 1268u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E4FB0u | kUnwind; return; } [[clang::musttail]] return unit_0039(c, 77u, depth); }
L_002E1200:
    set32(c.r[5], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 100u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 88u), c.r[3].w[0]);  c.pc = t; return; }
L_002E1240:
    set32(c.r[6], ld32((c.r[4].w[0] + 80u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 92u)));
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    set32(c.r[3], c.r[6].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 100u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 88u), c.r[3].w[0]);
    c.f[2] = ld32((c.r[4].w[0] + 732u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 20;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 732u), c.f[1]);  if (t) { goto L_002E1298; } }
    st8((c.r[4].w[0] + 709u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002E1298:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E12A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 791u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E12C0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 791u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002E12C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 284u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E1380; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 43u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E1380; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 42u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E1380; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 285u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E1380; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].d[0] = c.r[3].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 56ll ? 1ull : 0ull;  if (t) { goto L_002E1310; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002E1328; } }
    c.budget -= 1;
L_002E1310:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E131Cu); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002E131Cu) [[unlikely]] return; }
L_002E131C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E1380; } }
    c.budget -= 1;
L_002E1328:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002E1348; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1340u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002E1340u) [[unlikely]] return; }
L_002E1340:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E1380; } }
L_002E1348:
    set32(c.r[3], ld32((c.r[16].w[0] + 276u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002E1370; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1364u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002E1364u) [[unlikely]] return; }
L_002E1364:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E1380; } }
    c.budget -= 1;
L_002E1370:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E137Cu); set32(c.r[5], 0u + 27u);  if (depth < kMaxDepth) unit_004E(c, 123u, depth + 1u); else { c.pc = 0x002398E0u; return; } if (c.pc != 0x002E137Cu) [[unlikely]] return; }
L_002E137C:
    c.budget -= 1;
L_002E1380:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 284u)));
    st8((c.r[16].w[0] + 285u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 850u));
    c.r[3].d[0] = c.r[4].d[0] & 15ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 240ull;  if (t) { goto L_002E13A0; } }
    set32(c.r[4], c.r[3].w[0] + 1u);
    c.budget -= 2;
L_002E13A0:
    c.r[3].d[0] = c.r[4].d[0] & 240ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 15ull;  if (t) { goto L_002E13B0; } }
    set32(c.r[4], c.r[3].w[0] + 16u);
    c.budget -= 1;
L_002E13B0:
    st8((c.r[16].w[0] + 850u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E13D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1608u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
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
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1424u); st32((c.r[4].w[0] + 8536u), c.f[0]);  if (depth < kMaxDepth) unit_003C(c, 145u, depth + 1u); else { c.pc = 0x001F14B0u; return; } if (c.pc != 0x002E1424u) [[unlikely]] return; }
L_002E1424:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 500u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 498u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E143Cu); st16((c.r[16].w[0] + 496u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00B1(c, 252u, depth + 1u); else { c.pc = 0x003C6020u; return; } if (c.pc != 0x002E143Cu) [[unlikely]] return; }
L_002E143C:
    st32((c.r[16].w[0] + 260u), 0u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[16].w[0] + 256u), 0u);
    set32(c.r[7], c.r[7].w[0] - 14800u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8659u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 1600u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8659u)));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E14A0u); st32((c.r[16].w[0] + 1604u), c.f[0]);  if (depth < kMaxDepth) unit_003A(c, 67u, depth + 1u); else { c.pc = 0x001E9BA0u; return; } if (c.pc != 0x002E14A0u) [[unlikely]] return; }
L_002E14A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E14B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1608u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
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
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1504u); st32((c.r[4].w[0] + 8536u), c.f[0]);  if (depth < kMaxDepth) unit_003C(c, 145u, depth + 1u); else { c.pc = 0x001F14B0u; return; } if (c.pc != 0x002E1504u) [[unlikely]] return; }
L_002E1504:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 500u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 498u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E151Cu); st16((c.r[16].w[0] + 496u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00B1(c, 252u, depth + 1u); else { c.pc = 0x003C6020u; return; } if (c.pc != 0x002E151Cu) [[unlikely]] return; }
L_002E151C:
    set32(c.r[3], ld32((c.r[16].w[0] + 1608u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[6], c.r[6].w[0] - 14800u);
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
L_002E15A0:
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002E15C0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E15C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E15D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 22u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 81u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E17B0; } }
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    set32(c.r[2], c.r[29].w[0] + 64u);
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1620u); st32((c.r[2].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_0039(c, 116u, depth + 1u); else { c.pc = 0x001E5650u; return; } if (c.pc != 0x002E1620u) [[unlikely]] return; }
L_002E1620:
    set32(c.r[16], c.r[29].w[0] + 68u);
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_002E1688; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1648u);  if (depth < kMaxDepth) unit_0078(c, 128u, depth + 1u); else { c.pc = 0x002E15A0u; return; } if (c.pc != 0x002E1648u) [[unlikely]] return; }
L_002E1648:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E1678; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    set32(c.r[2], 0u - 513u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E166Cu); st16((c.r[17].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003A(c, 61u, depth + 1u); else { c.pc = 0x001E9AC0u; return; } if (c.pc != 0x002E166Cu) [[unlikely]] return; }
L_002E166C:
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 1;
L_002E1670:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1008u), c.f[0]);  if (t) { goto L_002E17B0; } }
L_002E1678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1680u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 107u, depth + 1u); else { c.pc = 0x00180E20u; return; } if (c.pc != 0x002E1680u) [[unlikely]] return; }
L_002E1680:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E17B0; } }
L_002E1688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1690u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0078(c, 128u, depth + 1u); else { c.pc = 0x002E15A0u; return; } if (c.pc != 0x002E1690u) [[unlikely]] return; }
L_002E1690:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E16B0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[17].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 790u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_002E16B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E16B8u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0078(c, 128u, depth + 1u); else { c.pc = 0x002E15A0u; return; } if (c.pc != 0x002E16B8u) [[unlikely]] return; }
L_002E16B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E16D0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 789u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002E1740; } }
    c.budget -= 1;
L_002E16D0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 791u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002E1720; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E16E4u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x002E16E4u) [[unlikely]] return; }
L_002E16E4:
    c.f[20] = c.f[0] ^ fp::kSign;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E16F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 116u, depth + 1u); else { c.pc = 0x001E5650u; return; } if (c.pc != 0x002E16F0u) [[unlikely]] return; }
L_002E16F0:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002E1710; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1704u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0020(c, 215u, depth + 1u); else { c.pc = 0x00183210u; return; } if (c.pc != 0x002E1704u) [[unlikely]] return; }
L_002E1704:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E1718; } }
    c.budget -= 1;
L_002E1710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1718u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 161u, depth + 1u); else { c.pc = 0x001872E0u; return; } if (c.pc != 0x002E1718u) [[unlikely]] return; }
L_002E1718:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 744u)));
    st8((c.r[17].w[0] + 962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002E1720:
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 791u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 962u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 744u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E1740; } }
    st8((c.r[17].w[0] + 791u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002E1740:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[0] = ld32((c.r[17].w[0] + 2096u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2100u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2104u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1760u); st32((c.r[29].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_0078(c, 128u, depth + 1u); else { c.pc = 0x002E15A0u; return; } if (c.pc != 0x002E1760u) [[unlikely]] return; }
L_002E1760:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E1790; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 789u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E17B0; } }
    st8((c.r[17].w[0] + 789u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1788u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_0020(c, 313u, depth + 1u); else { c.pc = 0x00183C00u; return; } if (c.pc != 0x002E1788u) [[unlikely]] return; }
L_002E1788:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E17B0; } }
L_002E1790:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 790u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E17B0; } }
    st8((c.r[17].w[0] + 790u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E17B0u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_0020(c, 149u, depth + 1u); else { c.pc = 0x00181D40u; return; } if (c.pc != 0x002E17B0u) [[unlikely]] return; }
L_002E17B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E17D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], 0u + 26064u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 608u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1800u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0050(c, 163u, depth + 1u); else { c.pc = 0x00240B40u; return; } if (c.pc != 0x002E1800u) [[unlikely]] return; }
L_002E1800:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E180Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 169u, depth + 1u); else { c.pc = 0x00240C10u; return; } if (c.pc != 0x002E180Cu) [[unlikely]] return; }
L_002E180C:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 26032u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 544u);  if (t) { goto L_002E1850; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1820u);  if (depth < kMaxDepth) unit_0050(c, 396u, depth + 1u); else { c.pc = 0x002437E0u; return; } if (c.pc != 0x002E1820u) [[unlikely]] return; }
L_002E1820:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[16].w[0] + 26050u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1834u); set32(c.r[5], c.r[5].w[0] + 15664u);  if (depth < kMaxDepth) unit_0050(c, 145u, depth + 1u); else { c.pc = 0x00240860u; return; } if (c.pc != 0x002E1834u) [[unlikely]] return; }
L_002E1834:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E183Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 33u, depth + 1u); else { c.pc = 0x001E4520u; return; } if (c.pc != 0x002E183Cu) [[unlikely]] return; }
L_002E183C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1844u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 39u, depth + 1u); else { c.pc = 0x001E46C0u; return; } if (c.pc != 0x002E1844u) [[unlikely]] return; }
L_002E1844:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E184Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 190u, depth + 1u); else { c.pc = 0x002A7560u; return; } if (c.pc != 0x002E184Cu) [[unlikely]] return; }
L_002E184C:
    c.budget -= 1;
L_002E1850:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E1870:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 29024u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E188Cu); set32(c.r[6], 0u + 384u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002E188Cu) [[unlikely]] return; }
L_002E188C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st8((c.r[1].w[0] + 29024u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u - 1u);
    st8((c.r[3].w[0] + 73u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 72u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E18C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 21936u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[16], c.r[16].w[0] + 29024u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E18F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E18F4u) [[unlikely]] return; }
L_002E18F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E18FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 198u, depth + 1u); else { c.pc = 0x002E1F10u; return; } if (c.pc != 0x002E18FCu) [[unlikely]] return; }
L_002E18FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1904u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 205u, depth + 1u); else { c.pc = 0x002E1F60u; return; } if (c.pc != 0x002E1904u) [[unlikely]] return; }
L_002E1904:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E1920:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], 0u + 384u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1940u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002E1940u) [[unlikely]] return; }
L_002E1940:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[16].w[0] + 16u);
    set32(c.r[6], c.r[16].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    c.f[4] = ld32((c.r[16].w[0] + 16u));
    c.f[3] = ld32((c.r[16].w[0] + 20u));
    c.f[2] = ld32((c.r[16].w[0] + 24u));
    c.f[1] = ld32((c.r[16].w[0] + 28u));
    st32((c.r[16].w[0] + 48u), c.f[4]);
    st32((c.r[16].w[0] + 52u), c.f[3]);
    st32((c.r[16].w[0] + 56u), c.f[2]);
    st32((c.r[16].w[0] + 60u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E199Cu); st32((c.r[16].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x002E199Cu) [[unlikely]] return; }
L_002E199C:
    set32(c.r[17], c.r[29].w[0] + 56u);
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.f[1] = ld32((c.r[17].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E19B4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x002E19B4u) [[unlikely]] return; }
L_002E19B4:
    c.f[12] = ld32((c.r[29].w[0] + 52u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E19C0u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x002E19C0u) [[unlikely]] return; }
L_002E19C0:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], 0u - c.r[2].w[0]);
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[12] = ld32((c.r[29].w[0] + 48u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E19DCu); c.f[13] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x002E19DCu) [[unlikely]] return; }
L_002E19DC:
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E1A00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 21920u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 346u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1A30u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E1A30u) [[unlikely]] return; }
L_002E1A30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 344u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 21904u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1A50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E1A50u) [[unlikely]] return; }
L_002E1A50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 348u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 21888u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1A70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E1A70u) [[unlikely]] return; }
L_002E1A70:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1A80u); set32(c.r[6], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x002E1A80u) [[unlikely]] return; }
L_002E1A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1A88u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x002E1A88u) [[unlikely]] return; }
L_002E1A88:
    st32((c.r[16].w[0] + 320u), c.f[0]);
    set32(c.r[17], c.r[29].w[0] + 56u);
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.f[1] = ld32((c.r[17].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1AA4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x002E1AA4u) [[unlikely]] return; }
L_002E1AA4:
    c.f[12] = ld32((c.r[29].w[0] + 52u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1AB0u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x002E1AB0u) [[unlikely]] return; }
L_002E1AB0:
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[12] = ld32((c.r[29].w[0] + 48u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1AC0u); c.f[13] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x002E1AC0u) [[unlikely]] return; }
L_002E1AC0:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + 32767u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
L_002E1AD0:
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E1AF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E1B00:
    c.f[1] = ld32((c.r[4].w[0] + 272u));
    c.f[0] = ld32((c.r[4].w[0] + 256u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 256u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 276u));
    c.f[0] = ld32((c.r[4].w[0] + 260u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 260u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 280u));
    c.f[0] = ld32((c.r[4].w[0] + 264u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 264u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 256u));
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 260u));
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 264u));
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 24u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 350u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 350u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 31;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E1B80; } }
    st16((c.r[4].w[0] + 344u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002E1B80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E1B90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 21872u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[29].w[0] + 32u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.budget -= 9;
L_002E1BB4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 332u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 338u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[4].w[0] + 332u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 334u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 340u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[4].w[0] + 334u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 336u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 342u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[4].w[0] + 336u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 332u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 334u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 14u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 336u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1C18u); st16((c.r[4].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002E1C18u) [[unlikely]] return; }
L_002E1C18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1C20u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002E1C20u) [[unlikely]] return; }
L_002E1C20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1C28u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x002E1C28u) [[unlikely]] return; }
L_002E1C28:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1C34u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x002E1C34u) [[unlikely]] return; }
L_002E1C34:
    c.f[12] = ld32((c.r[16].w[0] + 320u));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1C44u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x002E1C44u) [[unlikely]] return; }
L_002E1C44:
    set32(c.r[4], c.r[16].w[0] + 16u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1C54u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x002E1C54u) [[unlikely]] return; }
L_002E1C54:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 350u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 350u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E1C78; } }
    st16((c.r[16].w[0] + 344u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_002E1C78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E1C90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 328u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[4].w[0] + 324u));
    set32(c.r[5], c.r[16].w[0] + 16u);
    set32(c.r[6], c.r[16].w[0] + 48u);
    c.f[1] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 324u), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 320u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 320u), c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1CCCu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x002E1CCCu) [[unlikely]] return; }
L_002E1CCC:
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    c.f[2] = ld32((c.r[29].w[0] + 32u));
    c.f[3] = ld32((c.r[29].w[0] + 40u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E1D20; } }
    c.f[12] = ld32((c.r[16].w[0] + 320u));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1D0Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x002E1D0Cu) [[unlikely]] return; }
L_002E1D0C:
    set32(c.r[4], c.r[16].w[0] + 16u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1D1Cu); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x002E1D1Cu) [[unlikely]] return; }
L_002E1D1C:
    c.budget -= 1;
L_002E1D20:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 354u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 354u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E1D40; } }
    st16((c.r[16].w[0] + 348u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002E1D40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E1D50:
    c.f[1] = ld32((c.r[4].w[0] + 304u));
    c.f[0] = ld32((c.r[4].w[0] + 288u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 288u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 308u));
    c.f[0] = ld32((c.r[4].w[0] + 292u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 292u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 312u));
    c.f[0] = ld32((c.r[4].w[0] + 296u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 296u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 288u));
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 292u));
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 296u));
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 56u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 352u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 352u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 31;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E1DD0; } }
    st16((c.r[4].w[0] + 346u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002E1DD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E1DE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 21856u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[29].w[0] + 32u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 332u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 338u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[4].w[0] + 332u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 334u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 340u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[4].w[0] + 334u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 336u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 342u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[4].w[0] + 336u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 332u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 334u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 28;
L_002E1E50:
    st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 14u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 336u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1E68u); st16((c.r[4].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002E1E68u) [[unlikely]] return; }
L_002E1E68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1E70u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002E1E70u) [[unlikely]] return; }
L_002E1E70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1E78u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x002E1E78u) [[unlikely]] return; }
L_002E1E78:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1E84u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x002E1E84u) [[unlikely]] return; }
L_002E1E84:
    c.f[12] = ld32((c.r[16].w[0] + 320u));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1E94u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x002E1E94u) [[unlikely]] return; }
L_002E1E94:
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1EA4u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x002E1EA4u) [[unlikely]] return; }
L_002E1EA4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 352u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 352u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E1EC8; } }
    st16((c.r[16].w[0] + 346u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_002E1EC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E1EE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[1] = ld32((c.r[1].w[0] - 25688u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.f[0] = ld32((c.r[1].w[0] - 25696u));
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[4].w[0] + 56u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 292u));
    c.f[0] = ld32((c.r[1].w[0] - 27820u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 52u), c.f[0]);  c.pc = t; return; }
L_002E1F10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1F28u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0009(c, 167u, depth + 1u); else { c.pc = 0x00126260u; return; } if (c.pc != 0x002E1F28u) [[unlikely]] return; }
L_002E1F28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1F30u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002E1F30u) [[unlikely]] return; }
L_002E1F30:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 14u)));
    c.budget -= 1;
L_002E1F34:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1F40u); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 218u, depth + 1u); else { c.pc = 0x00127690u; return; } if (c.pc != 0x002E1F40u) [[unlikely]] return; }
L_002E1F40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1F48u); set32(c.r[4], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002E1F48u) [[unlikely]] return; }
L_002E1F48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1F50u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 167u, depth + 1u); else { c.pc = 0x00126260u; return; } if (c.pc != 0x002E1F50u) [[unlikely]] return; }
L_002E1F50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E1F60:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[5], c.r[4].w[0] + 80u);
    st32((c.r[3].w[0] + 64u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st32((c.r[3].w[0] + 60u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 69u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 68u), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_002E1F90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 20384u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002E0000u < 16384u) { entry = entries_0078[(t - 0x002E0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E1FB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] - 20368u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] - 21840u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[17], c.r[18].w[0] + 304u);
    set32(c.r[5], c.r[7].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st128((c.r[6].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 44u)));
    st32((c.r[4].w[0] + 304u), c.r[2].w[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E201Cu); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x002E201Cu) [[unlikely]] return; }
L_002E201C:
    c.f[3] = ld32((c.r[16].w[0] + 16u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.f[2] = ld32((c.r[16].w[0] + 20u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    set32(c.r[3], c.r[3].w[0] + 8624u);
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    set32(c.r[2], c.r[2].w[0] - 29104u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 48u), c.f[3]);
    st32((c.r[18].w[0] + 52u), c.f[2]);
    st32((c.r[18].w[0] + 56u), c.f[1]);
    st32((c.r[18].w[0] + 60u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 32u)));
    st32((c.r[18].w[0] + 80u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 34u)));
    st32((c.r[18].w[0] + 84u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 36u)));
    st32((c.r[18].w[0] + 88u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 38u)));
    st32((c.r[18].w[0] + 92u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 40u)));
    st32((c.r[18].w[0] + 96u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 42u)));
    st32((c.r[18].w[0] + 100u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E209Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x002E209Cu) [[unlikely]] return; }
L_002E209C:
    st32((c.r[17].w[0] + 4u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] - 20448u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E20CCu); st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0078(c, 211u, depth + 1u); else { c.pc = 0x002E20F0u; return; } if (c.pc != 0x002E20CCu) [[unlikely]] return; }
L_002E20CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E20F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E210Cu); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x002E210Cu) [[unlikely]] return; }
L_002E210C:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2148u); st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0031(c, 443u, depth + 1u); else { c.pc = 0x001C56E0u; return; } if (c.pc != 0x002E2148u) [[unlikely]] return; }
L_002E2148:
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] - 29376u);
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[3].w[0]), c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E2190:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002E21A0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_002E21B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[18], c.r[20].w[0] + 304u);  if (t) { goto L_002E2298; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    set32(c.r[3], c.r[3].w[0] + 7840u);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] << 6);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[19], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 13;
L_002E2210:
    set32(c.r[3], ld32((c.r[20].w[0] + 184u)));
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002E2298; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002E2280; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << (c.r[17].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[20].w[0] + 192u);  if (t) { goto L_002E2280; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2254u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002E2254u) [[unlikely]] return; }
L_002E2254:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E2270; } }
    c.f[13] = ld32((c.r[19].w[0] + 68u));
    c.f[14] = ld32((c.r[19].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2270u); c.f[12] = ld32((c.r[19].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002E2270u) [[unlikely]] return; }
L_002E2270:
    set32(c.r[2], ld32((c.r[20].w[0] + 184u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2280u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x002E2280u) [[unlikely]] return; }
L_002E2280:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 24ll ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 240u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2210u | kUnwind; return; } goto L_002E2210; } }
    c.budget -= 1;
L_002E2298:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002E22C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 19176u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[5], c.r[29].w[0] + 79u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[8], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 82u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 120u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 128u)));
    st8((c.r[29].w[0] + 79u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 82u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 3u)));
    set32(c.r[3], c.r[9].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 116u)));
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2338u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 54u, depth + 1u); else { c.pc = 0x001E9290u; return; } if (c.pc != 0x002E2338u) [[unlikely]] return; }
L_002E2338:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002E23D0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 72u)));
    set32(c.r[3], c.r[4].w[0] - 47u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 54u);  if (t) { goto L_002E2360; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002E2398; } }
L_002E2360:
    set32(c.r[7], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[18].d[0] << 56;
    set32(c.r[4], 0u + 77u);
    set32(c.r[3], c.r[3].w[0] + 28720u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    mmi::mult(c, 0, c.r[6].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 81u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002E2588; } }
    c.budget -= 1;
L_002E2398:
    set32(c.r[7], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[18].d[0] << 56;
    set32(c.r[4], 0u + 77u);
    set32(c.r[3], c.r[3].w[0] - 30640u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    mmi::mult(c, 0, c.r[6].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 81u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002E2588; } }
    c.budget -= 1;
L_002E23D0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[7], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 82u)));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 68u)));  if (t) { goto L_002E24F8; } }
    c.r[5].d[0] = c.r[18].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[4].d[0] = c.r[5].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; c.r[1].d[0] = c.r[5].sd[0] < 55ll ? 1ull : 0ull;  if (t) { goto L_002E24F8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], 0u + 40u);  if (t) { goto L_002E24F8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_002E24F8; } }
    set32(c.r[4], 0u + 35u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], c.r[6].w[0] - 11u);  if (t) { goto L_002E24F8; } }
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002E2438; } }
    set32(c.r[4], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_002E2448; } }
L_002E2438:
    set32(c.r[4], 0u + 15u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 81u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002E2588; } }
    c.budget -= 1;
L_002E2448:
    set32(c.r[4], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 31u);  if (t) { goto L_002E2468; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_002E2468; } }
    set32(c.r[4], 0u + 30u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_002E2478; } }
L_002E2468:
    set32(c.r[4], 0u + 14u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 81u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002E2588; } }
    c.budget -= 1;
L_002E2478:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 73u)));
    set32(c.r[4], 0u + 56u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[4].d[0]; set32(c.r[4], c.r[6].w[0] - 50u);  if (t) { goto L_002E24A0; } }
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002E24A0; } }
    set32(c.r[4], 0u + 53u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_002E24D0; } }
L_002E24A0:
    set32(c.r[7], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], 0u + 77u);
    set32(c.r[3], c.r[3].w[0] + 31808u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    mmi::mult(c, 0, c.r[6].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 81u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002E2588; } }
    c.budget -= 1;
L_002E24D0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[6], 0u + 77u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 27552u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 81u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002E2588; } }
L_002E24F8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 73u)));
    set32(c.r[3], 0u + 56u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[4].w[0] - 50u);  if (t) { goto L_002E2520; } }
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002E2520; } }
    set32(c.r[3], 0u + 53u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002E2558; } }
L_002E2520:
    set32(c.r[7], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[18].d[0] << 56;
    set32(c.r[4], 0u + 77u);
    set32(c.r[3], c.r[3].w[0] + 31808u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    mmi::mult(c, 0, c.r[6].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 81u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002E2588; } }
    c.budget -= 1;
L_002E2558:
    set32(c.r[7], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[18].d[0] << 56;
    set32(c.r[4], 0u + 77u);
    set32(c.r[3], c.r[3].w[0] - 27552u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    mmi::mult(c, 0, c.r[6].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[7].w[0] + 81u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 12;
L_002E2588:
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 4869u);
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st16((c.r[28].w[0] - 23840u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 81u)));
    c.r[3].d[0] = c.r[4].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 26ll ? 1ull : 0ull;  if (t) { goto L_002E25C0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 255u);  if (t) { goto L_002E25C0; } }
    st16((c.r[28].w[0] - 23848u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 23844u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002E25C8; } }
L_002E25C0:
    st16((c.r[28].w[0] - 23844u), static_cast<std::uint16_t>(0u));
    st16((c.r[28].w[0] - 23848u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_002E25C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st32((c.r[1].w[0] + 18776u), 0u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st32((c.r[1].w[0] + 18780u), 0u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st16((c.r[1].w[0] + 18774u), static_cast<std::uint16_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[8], c.r[8].w[0] - 22960u);
    st16((c.r[1].w[0] + 18772u), static_cast<std::uint16_t>(0u));
    set32(c.r[9], c.r[9].w[0] - 24240u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[4], c.r[3].w[0] + 75u);
    st16((c.r[1].w[0] + 18770u), static_cast<std::uint16_t>(0u));
    set32(c.r[7], c.r[7].w[0] - 23200u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[4], c.r[4].w[0] + 2u);
    st16((c.r[1].w[0] + 18768u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], c.r[6].w[0] - 24352u);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 81u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[10].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0])));
    st32((c.r[1].w[0] + 18752u), c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st32((c.r[1].w[0] + 18764u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st32((c.r[1].w[0] + 18760u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st32((c.r[1].w[0] + 18756u), 0u);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 81u)));
    set32(c.r[10], c.r[11].w[0] << 1);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 1);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[7].w[0] + c.r[8].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    st8((c.r[3].w[0] + 75u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    st8((c.r[3].w[0] + 76u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[8], c.r[8].w[0] + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[3].w[0] + 77u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 74u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[3].w[0] + 74u);
    st8((c.r[3].w[0] + 75u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 2u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 2u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[8], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 81u)));
    set32(c.r[7], c.r[8].w[0] + 71u);
    set32(c.r[7], c.r[7].w[0] + 2u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[8].w[0] + 71u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    st8((c.r[8].w[0] + 72u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    st8((c.r[3].w[0] + 74u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[3].w[0] + 74u);
    st8((c.r[3].w[0] + 75u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 2u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 2u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 68u)));
    c.budget -= 100;
    { const bool t = c.r[17].d[0] != 0ull; st8((c.r[4].w[0] + 74u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002E2768; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 78u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002E2778; } }
L_002E2768:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 73u)));
    st8((c.r[4].w[0] + 79u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002E2778:
    set32(c.r[7], ld32((c.r[28].w[0] - 23784u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[17].d[0] << 56;
    set32(c.r[8], c.r[8].w[0] - 24464u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    st8((c.r[7].w[0] + 100u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[3], c.r[7].w[0] + 100u);
    st8((c.r[7].w[0] + 94u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[9], c.r[7].w[0] + 94u);
    st8((c.r[7].w[0] + 101u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st8((c.r[7].w[0] + 95u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[9], c.r[9].w[0] + 2u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[9], c.r[9].w[0] + 2u);
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[10], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[10].w[0] + 59u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[3], c.r[10].w[0] + 59u);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 79u)));
    set32(c.r[7], c.r[10].w[0] + 65u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[10].w[0] + 65u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[9], ld32((c.r[28].w[0] - 23784u)));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 81u)));
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[17], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[10], 0u + 8u);
    set32(c.r[11], 0u + 2u);
    set32(c.r[14], 0u - 3u);
    set32(c.r[12], 0u - 4u);
    set32(c.r[9], 0u - 5u);
    set32(c.r[13], 0u + 4u);
    set32(c.r[15], 0u + 1u);
    set32(c.r[16], 0u - 2u);
    c.budget -= 44;
L_002E2828:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[16].d[0];  if (t) { goto L_002E2860; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_002E2850; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_002E28D0; } }
    c.budget -= 1;
L_002E2850:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_002E28D0; } }
    c.budget -= 1;
L_002E2860:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[14].d[0];  if (t) { goto L_002E2880; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_002E28D0; } }
    c.budget -= 1;
L_002E2880:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[12].d[0];  if (t) { goto L_002E28B0; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_002E28A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));  if (t) { goto L_002E28A8; } }
    c.budget -= 1;
L_002E28A0:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.budget -= 2;
L_002E28A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_002E28D0; } }
L_002E28B0:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[9].d[0];  if (t) { goto L_002E28C8; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 79u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { goto L_002E28D0; } }
L_002E28C8:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002E28D0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[8].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2828u | kUnwind; return; } goto L_002E2828; } }
    set32(c.r[4], 0u - 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E2910:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 74u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2934u); st8((c.r[2].w[0] + 75u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0078(c, 227u, depth + 1u); else { c.pc = 0x002E2950u; return; } if (c.pc != 0x002E2934u) [[unlikely]] return; }
L_002E2934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E293Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0078(c, 229u, depth + 1u); else { c.pc = 0x002E2990u; return; } if (c.pc != 0x002E293Cu) [[unlikely]] return; }
L_002E293C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E2950:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2960u);  if (depth < kMaxDepth) unit_0046(c, 211u, depth + 1u); else { c.pc = 0x0021B650u; return; } if (c.pc != 0x002E2960u) [[unlikely]] return; }
L_002E2960:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], c.r[3].w[0] + 74u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 74u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E2978; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002E2978:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E2990:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], c.r[4].w[0] << 1);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x497F0000u);
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].d[0] = c.r[2].d[0] | 65320ull;
    c.f[13] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], c.r[5].w[0] - 22816u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 81u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[28].w[0] - 23852u), c.r[4].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E29E0u); c.f[12] = ld32((c.r[16].w[0] + 8u));  if (depth < kMaxDepth) unit_005B(c, 98u, depth + 1u); else { c.pc = 0x0026CEC0u; return; } if (c.pc != 0x002E29E0u) [[unlikely]] return; }
L_002E29E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E29E8u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0009(c, 167u, depth + 1u); else { c.pc = 0x00126260u; return; } if (c.pc != 0x002E29E8u) [[unlikely]] return; }
L_002E29E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E29F0u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002E29F0u) [[unlikely]] return; }
L_002E29F0:
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    c.f[13] = ld32((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x463B0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[14] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2A0Cu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0009(c, 224u, depth + 1u); else { c.pc = 0x00127770u; return; } if (c.pc != 0x002E2A0Cu) [[unlikely]] return; }
L_002E2A0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2A14u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 167u, depth + 1u); else { c.pc = 0x00126260u; return; } if (c.pc != 0x002E2A14u) [[unlikely]] return; }
L_002E2A14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E2A30:
    c.r[3].d[0] = ld16((c.r[28].w[0] - 23840u));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 14097u);
    st16((c.r[28].w[0] - 23840u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld16((c.r[28].w[0] - 23840u));  c.pc = t; return; }
L_002E2A50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 18768u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002E2A88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2A98; } }
    c.budget -= 1;
L_002E2A88:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_002E2A98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E2AA0:
    set32(c.r[3], c.r[5].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + 18768u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 2u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[6].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[7], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] << 8);
    set32(c.r[6], c.r[7].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.r[4].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));  c.pc = t; return; }
L_002E2AF0:
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[3], c.r[3].w[0] + 18776u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002E2B20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2B30; } }
    c.budget -= 1;
L_002E2B20:
    set32(c.r[2], c.r[6].w[0] + 4u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_002E2B30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E2B40:
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[3], c.r[3].w[0] + 18776u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 2u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[6].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[6].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_002E2B90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2BC8u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x002E2BC8u) [[unlikely]] return; }
L_002E2BC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E2C58; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 18u);
    set32(c.r[4], c.r[4].w[0] - 22096u);
    set32(c.r[3], 0u + 255u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[5], c.r[6].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[5].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    st8((c.r[2].w[0] + 268u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    st8((c.r[2].w[0] + 270u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 264u), c.r[2].w[0]);
    st8((c.r[2].w[0] + 515u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 34;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002E2C68; } }
L_002E2C58:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 5u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_002E2C68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E2C80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2CB0u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));  if (depth < kMaxDepth) unit_006B(c, 14u, depth + 1u); else { c.pc = 0x002AC2D0u; return; } if (c.pc != 0x002E2CB0u) [[unlikely]] return; }
L_002E2CB0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E2CD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 14224u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 81u)));
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 23;
L_002E2D2C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2D38u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 86u, depth + 1u); else { c.pc = 0x0026CCF0u; return; } if (c.pc != 0x002E2D38u) [[unlikely]] return; }
L_002E2D38:
    set32(c.r[4], c.r[17].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2D44u); set32(c.r[5], c.r[17].w[0] + 112u);  if (depth < kMaxDepth) unit_0047(c, 41u, depth + 1u); else { c.pc = 0x0021C270u; return; } if (c.pc != 0x002E2D44u) [[unlikely]] return; }
L_002E2D44:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E2D70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2DA0u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));  if (depth < kMaxDepth) unit_0078(c, 229u, depth + 1u); else { c.pc = 0x002E2990u; return; } if (c.pc != 0x002E2DA0u) [[unlikely]] return; }
L_002E2DA0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E2DC0:
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 19531u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002E2DF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2E08; } }
    c.budget -= 1;
L_002E2DF8:
    set32(c.r[2], c.r[6].w[0] + 3u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_002E2E00:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002E2E08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E2E10:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 19198u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 9);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E2E70; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_002E2E98; } }
L_002E2E70:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 10;
L_002E2E98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_002E2EA0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002E2EE0; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_002E2F08; } }
    c.budget -= 1;
L_002E2EE0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 10;
L_002E2F08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_002E2F10:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 22240u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 81u)));
    set32(c.r[3], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_002E2F60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2F98u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x002E2F98u) [[unlikely]] return; }
L_002E2F98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E3038; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 18u);
    set32(c.r[4], c.r[4].w[0] - 22096u);
    set32(c.r[3], 0u + 255u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[5], c.r[6].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[5].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[5].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    st8((c.r[2].w[0] + 268u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    st8((c.r[2].w[0] + 270u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 264u), c.r[2].w[0]);
    st8((c.r[2].w[0] + 515u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 38;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002E3048; } }
L_002E3038:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 6u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_002E3048:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E3060:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].d[0] & 16ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { goto L_002E30C8; } }
    c.r[2].d[0] = c.r[5].d[0] & 15ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E30B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E30ACu);  if (depth < kMaxDepth) unit_0046(c, 208u, depth + 1u); else { c.pc = 0x0021B5C0u; return; } if (c.pc != 0x002E30ACu) [[unlikely]] return; }
L_002E30AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E30F0; } }
    c.budget -= 1;
L_002E30B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E30C0u);  if (depth < kMaxDepth) unit_0046(c, 209u, depth + 1u); else { c.pc = 0x0021B5D0u; return; } if (c.pc != 0x002E30C0u) [[unlikely]] return; }
L_002E30C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E30F0; } }
L_002E30C8:
    c.r[2].d[0] = c.r[5].d[0] & 15ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E30E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E30DCu);  if (depth < kMaxDepth) unit_0046(c, 206u, depth + 1u); else { c.pc = 0x0021B5A0u; return; } if (c.pc != 0x002E30DCu) [[unlikely]] return; }
L_002E30DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E30F0; } }
    c.budget -= 1;
L_002E30E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E30F0u);  if (depth < kMaxDepth) unit_0046(c, 207u, depth + 1u); else { c.pc = 0x0021B5B0u; return; } if (c.pc != 0x002E30F0u) [[unlikely]] return; }
L_002E30F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E3100:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 19198u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 9);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E3160; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_002E3188; } }
L_002E3160:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 10;
L_002E3188:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_002E3190:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[5], c.r[5].w[0] - 27856u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[6].w[0] << 4);
    set32(c.r[6], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[6].w[0] << 9);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[7], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[7].w[0] + 8658u));
    c.budget -= 27;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_002E3218; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 8659u)));
    c.r[2].d[0] = c.r[5].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E3218; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E3248; } }
L_002E3218:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 12;
L_002E3248:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E3250:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], c.r[7].w[0] - 22672u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[16], c.r[16].w[0] + 29024u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    set32(c.r[6], c.r[16].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 81u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[16].w[0] + 16u), c.f[3]);
    st32((c.r[16].w[0] + 20u), c.f[2]);
    st32((c.r[16].w[0] + 24u), c.f[1]);
    st32((c.r[16].w[0] + 28u), c.f[0]);
    st8((c.r[16].w[0] + 344u), static_cast<std::uint8_t>(0u));
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E32ECu); st8((c.r[16].w[0] + 345u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x002E32ECu) [[unlikely]] return; }
L_002E32EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E32F4u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x002E32F4u) [[unlikely]] return; }
L_002E32F4:
    st32((c.r[16].w[0] + 320u), c.f[0]);
    set32(c.r[17], c.r[29].w[0] + 56u);
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.f[1] = ld32((c.r[17].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3310u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x002E3310u) [[unlikely]] return; }
L_002E3310:
    c.f[12] = ld32((c.r[29].w[0] + 52u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E331Cu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x002E331Cu) [[unlikely]] return; }
L_002E331C:
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[12] = ld32((c.r[29].w[0] + 48u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E332Cu); c.f[13] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x002E332Cu) [[unlikely]] return; }
L_002E332C:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], c.r[2].w[0] + 32767u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = 0ull + 0ull;
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E3360:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], c.r[7].w[0] - 22672u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[16], c.r[16].w[0] + 29024u);
    set32(c.r[6], c.r[16].w[0] + 48u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 81u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[16].w[0] + 48u), c.f[3]);
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st8((c.r[16].w[0] + 346u), static_cast<std::uint8_t>(0u));
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E33FCu); st8((c.r[16].w[0] + 347u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x002E33FCu) [[unlikely]] return; }
L_002E33FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3404u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x002E3404u) [[unlikely]] return; }
L_002E3404:
    st32((c.r[16].w[0] + 320u), c.f[0]);
    set32(c.r[17], c.r[29].w[0] + 56u);
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.f[1] = ld32((c.r[17].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3420u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x002E3420u) [[unlikely]] return; }
L_002E3420:
    c.f[12] = ld32((c.r[29].w[0] + 52u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E342Cu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x002E342Cu) [[unlikely]] return; }
L_002E342C:
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[12] = ld32((c.r[29].w[0] + 48u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E343Cu); c.f[13] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x002E343Cu) [[unlikely]] return; }
L_002E343C:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], c.r[2].w[0] + 32767u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = 0ull + 0ull;
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E3470:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[6], c.r[6].w[0] - 22672u);
    set32(c.r[3], c.r[3].w[0] + 29024u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 81u)));
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[7], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 1u));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st16((c.r[3].w[0] + 350u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 350u)));
    c.budget -= 32;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002E34F8; } }
    st16((c.r[3].w[0] + 350u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002E34F8:
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    st8((c.r[3].w[0] + 344u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[3].w[0] + 345u), static_cast<std::uint8_t>(0u));
    c.f[1] = ld32((c.r[7].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 350u)));
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 256u), c.f[0]);
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 350u)));
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 260u), c.f[0]);
    c.f[1] = ld32((c.r[7].w[0] + 8u));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 350u)));
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 264u), c.f[0]);
    st32((c.r[3].w[0] + 280u), 0u);
    st32((c.r[3].w[0] + 276u), 0u);
    c.budget -= 38;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 272u), 0u);  c.pc = t; return; }
L_002E3590:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[6], c.r[6].w[0] - 22672u);
    set32(c.r[3], c.r[3].w[0] + 29024u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 81u)));
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[7], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 1u));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st16((c.r[3].w[0] + 350u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 350u)));
    c.budget -= 32;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002E3618; } }
    st16((c.r[3].w[0] + 350u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002E3618:
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[5], 0u + 1u);
    c.f[3] = c.r[2].w[0];
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    st8((c.r[3].w[0] + 344u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[3].w[0] + 345u), static_cast<std::uint8_t>(0u));
    st32((c.r[3].w[0] + 264u), 0u);
    st32((c.r[3].w[0] + 260u), 0u);
    st32((c.r[3].w[0] + 256u), 0u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 350u)));
    c.f[2] = ld32((c.r[7].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 272u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 350u)));
    c.f[2] = ld32((c.r[7].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 20u));
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 276u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 350u)));
    c.f[2] = ld32((c.r[7].w[0] + 8u));
    c.f[1] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 48;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 280u), c.f[0]);  c.pc = t; return; }
L_002E36E0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[6], c.r[6].w[0] - 22672u);
    set32(c.r[3], c.r[3].w[0] + 29024u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 81u)));
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[7], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 1u));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st16((c.r[3].w[0] + 350u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 350u)));
    c.budget -= 32;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002E3768; } }
    st16((c.r[3].w[0] + 350u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002E3768:
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[5], 0u + 1u);
    c.f[3] = c.r[2].w[0];
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    st8((c.r[3].w[0] + 344u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[3].w[0] + 345u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 350u)));
    c.f[2] = ld32((c.r[7].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 272u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 350u)));
    c.f[2] = ld32((c.r[7].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 20u));
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 276u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 350u)));
    c.f[2] = ld32((c.r[7].w[0] + 8u));
    c.f[1] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 280u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 350u)));
    c.f[0] = ld32((c.r[3].w[0] + 272u));
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 256u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 350u)));
    c.f[0] = ld32((c.r[3].w[0] + 276u));
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 260u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 350u)));
    c.f[0] = ld32((c.r[3].w[0] + 280u));
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 264u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 272u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[3].w[0] + 272u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 276u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[3].w[0] + 276u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 280u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 73;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 280u), c.f[0]);  c.pc = t; return; }
L_002E3890:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[6], c.r[6].w[0] - 22528u);
    set32(c.r[3], c.r[3].w[0] + 29024u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 81u)));
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[7].w[0] << 2);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[7].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[2].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 1u));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st16((c.r[3].w[0] + 350u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 350u)));
    c.budget -= 34;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002E3920; } }
    st16((c.r[3].w[0] + 350u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002E3920:
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[5], 0u + 2u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    st8((c.r[3].w[0] + 344u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[3].w[0] + 345u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[7].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 350u)));
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st16((c.r[3].w[0] + 332u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 350u)));
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st16((c.r[3].w[0] + 334u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.f[0] = ld32((c.r[7].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 350u)));
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st16((c.r[3].w[0] + 336u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[3].w[0] + 342u), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0] + 340u), static_cast<std::uint16_t>(0u));
    c.budget -= 45;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[3].w[0] + 338u), static_cast<std::uint16_t>(0u));  c.pc = t; return; }
L_002E39E0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[6], c.r[6].w[0] - 22528u);
    set32(c.r[3], c.r[3].w[0] + 29024u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 81u)));
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[7].w[0] << 2);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[7].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[2].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 1u));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st16((c.r[3].w[0] + 350u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 350u)));
    c.budget -= 34;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002E3A70; } }
    st16((c.r[3].w[0] + 350u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002E3A70:
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[5], 0u + 2u);
    c.f[2] = c.r[2].w[0];
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    st8((c.r[3].w[0] + 344u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[3].w[0] + 345u), static_cast<std::uint8_t>(0u));
    st16((c.r[3].w[0] + 336u), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0] + 334u), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0] + 332u), static_cast<std::uint16_t>(0u));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 350u)));
    c.f[1] = ld32((c.r[7].w[0]));
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st16((c.r[3].w[0] + 338u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 350u)));
    c.f[0] = c.r[4].w[0];
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st16((c.r[3].w[0] + 340u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.f[0] = ld32((c.r[7].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 350u)));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 51;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[3].w[0] + 342u), static_cast<std::uint16_t>(c.r[4].w[0]));  c.pc = t; return; }
L_002E3B40:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[6], c.r[6].w[0] - 22528u);
    set32(c.r[3], c.r[3].w[0] + 29024u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 81u)));
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[7].w[0] << 2);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[7].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[2].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 1u));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st16((c.r[3].w[0] + 350u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 350u)));
    c.budget -= 34;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002E3BD0; } }
    st16((c.r[3].w[0] + 350u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002E3BD0:
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[5], 0u + 2u);
    c.f[2] = c.r[2].w[0];
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    st8((c.r[3].w[0] + 344u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[3].w[0] + 345u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 350u)));
    c.f[1] = ld32((c.r[7].w[0]));
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st16((c.r[3].w[0] + 338u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 350u)));
    c.f[0] = c.r[4].w[0];
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st16((c.r[3].w[0] + 340u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.f[0] = ld32((c.r[7].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 350u)));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st16((c.r[3].w[0] + 342u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 338u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 350u)));
    c.f[1] = c.r[5].w[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st16((c.r[3].w[0] + 332u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 340u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 350u)));
    c.f[1] = c.r[5].w[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st16((c.r[3].w[0] + 334u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 342u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 350u)));
    c.f[1] = c.r[5].w[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st16((c.r[3].w[0] + 336u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 338u)));
    set32(c.r[4], 0u - c.r[4].w[0]);
    st16((c.r[3].w[0] + 338u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 340u)));
    set32(c.r[4], 0u - c.r[4].w[0]);
    st16((c.r[3].w[0] + 340u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 342u)));
    set32(c.r[4], 0u - c.r[4].w[0]);
    c.budget -= 94;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[3].w[0] + 342u), static_cast<std::uint16_t>(c.r[4].w[0]));  c.pc = t; return; }
L_002E3D50:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[6], c.r[6].w[0] - 22384u);
    set32(c.r[3], c.r[3].w[0] + 29024u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 81u)));
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 1u));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st16((c.r[3].w[0] + 354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 354u)));
    c.budget -= 33;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002E3DD8; } }
    st16((c.r[3].w[0] + 354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002E3DD8:
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    st8((c.r[3].w[0] + 348u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[3].w[0] + 349u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[3].w[0] + 320u));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 354u)));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 324u), c.f[0]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 328u), 0u);  c.pc = t; return; }
L_002E3E20:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[6], c.r[6].w[0] - 22384u);
    set32(c.r[3], c.r[3].w[0] + 29024u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 81u)));
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.f[2] = ld32((c.r[2].w[0]));
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 1u));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st16((c.r[3].w[0] + 354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 354u)));
    c.budget -= 33;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002E3EA8; } }
    st16((c.r[3].w[0] + 354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002E3EA8:
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[5], 0u + 1u);
    c.f[0] = c.r[2].w[0];
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    st8((c.r[3].w[0] + 348u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[3].w[0] + 349u), static_cast<std::uint8_t>(0u));
    st32((c.r[3].w[0] + 324u), 0u);
    c.f[1] = ld32((c.r[3].w[0] + 320u));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 354u)));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 328u), c.f[0]);  c.pc = t; return; }
L_002E3F10:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[6], c.r[6].w[0] - 22384u);
    set32(c.r[3], c.r[3].w[0] + 29024u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 81u)));
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.f[2] = ld32((c.r[2].w[0]));
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 1u));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st16((c.r[3].w[0] + 354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 354u)));
    c.budget -= 33;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002E3F98; } }
    st16((c.r[3].w[0] + 354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002E3F98:
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[5], 0u + 1u);
    c.f[0] = c.r[2].w[0];
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    st8((c.r[3].w[0] + 348u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[3].w[0] + 349u), static_cast<std::uint8_t>(0u));
    c.f[1] = ld32((c.r[3].w[0] + 320u));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 354u)));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 328u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 354u)));
    c.f[0] = ld32((c.r[3].w[0] + 328u));
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 324u), c.f[0]);
    c.budget -= 26;
    [[clang::musttail]] return unit_0079(c, 1u, depth);
}

}
