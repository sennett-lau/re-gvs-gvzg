#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0077[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0,
    0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0,
    0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0,
    44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 51, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0,
    62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0,
    0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0,
    0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0,
    0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0,
    0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0,
    0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0,
    0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 131, 0, 132, 0,
    0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138,
    0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 152, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0,
    160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 167, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 173,
    0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 179, 0, 180, 0, 0, 0, 0, 0,
    0, 181, 0, 0, 0, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 187, 0, 0, 188, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0,
    0, 0, 0, 198, 0, 0, 199, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 204, 0, 0, 0,
    0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0,
    0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0,
    225, 0, 226, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 231, 0, 232,
    0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 237, 0, 0, 0, 0, 0,
    0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0,
    0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0,
    0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 259, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0,
    262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0,
    0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0,
    0, 275, 0, 0, 0, 0, 276, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0,
    0, 0, 282, 0, 283, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 289, 0,
    0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 295, 0, 296, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0,
    0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 307, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 310, 0, 0, 311, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    315, 0, 0, 316, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 0,
    0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 328, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0, 0,
    0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 335, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337,
    0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 342, 0, 343, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0,
    0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 365,
    0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0,
    0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 384, 0,
    0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 391, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 396, 0, 0, 397, 0, 0, 0,
    398, 0, 0, 0, 0, 399, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 406, 0, 407, 0, 0, 0, 0, 0, 408, 0, 409, 0, 0, 410, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 413, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 417, 0, 0, 418, 0, 0, 0, 419, 0,
    0, 0, 0, 420, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 428, 429, 0, 0, 0,
};

void unit_0077(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002DC000;
    case 2u: goto L_002DC018;
    case 3u: goto L_002DC040;
    case 4u: goto L_002DC070;
    case 5u: goto L_002DC090;
    case 6u: goto L_002DC0A8;
    case 7u: goto L_002DC0F0;
    case 8u: goto L_002DC180;
    case 9u: goto L_002DC1CC;
    case 10u: goto L_002DC1E4;
    case 11u: goto L_002DC204;
    case 12u: goto L_002DC21C;
    case 13u: goto L_002DC2C0;
    case 14u: goto L_002DC30C;
    case 15u: goto L_002DC410;
    case 16u: goto L_002DC450;
    case 17u: goto L_002DC778;
    case 18u: goto L_002DC7F0;
    case 19u: goto L_002DC840;
    case 20u: goto L_002DC880;
    case 21u: goto L_002DC890;
    case 22u: goto L_002DC8C0;
    case 23u: goto L_002DC8F0;
    case 24u: goto L_002DC920;
    case 25u: goto L_002DC950;
    case 26u: goto L_002DC980;
    case 27u: goto L_002DC9B0;
    case 28u: goto L_002DC9E0;
    case 29u: goto L_002DCA28;
    case 30u: goto L_002DCA38;
    case 31u: goto L_002DCA70;
    case 32u: goto L_002DCAB8;
    case 33u: goto L_002DCB10;
    case 34u: goto L_002DCB28;
    case 35u: goto L_002DCB60;
    case 36u: goto L_002DCBB0;
    case 37u: goto L_002DCC38;
    case 38u: goto L_002DCE28;
    case 39u: goto L_002DCE90;
    case 40u: goto L_002DCFE0;
    case 41u: goto L_002DD008;
    case 42u: goto L_002DD060;
    case 43u: goto L_002DD070;
    case 44u: goto L_002DD080;
    case 45u: goto L_002DD090;
    case 46u: goto L_002DD0B0;
    case 47u: goto L_002DD0E0;
    case 48u: goto L_002DD150;
    case 49u: goto L_002DD240;
    case 50u: goto L_002DD258;
    case 51u: goto L_002DD284;
    case 52u: goto L_002DD290;
    case 53u: goto L_002DD2B8;
    case 54u: goto L_002DD2C4;
    case 55u: goto L_002DD2EC;
    case 56u: goto L_002DD2F8;
    case 57u: goto L_002DD320;
    case 58u: goto L_002DD32C;
    case 59u: goto L_002DD350;
    case 60u: goto L_002DD35C;
    case 61u: goto L_002DD370;
    case 62u: goto L_002DD380;
    case 63u: goto L_002DD3A0;
    case 64u: goto L_002DD3E0;
    case 65u: goto L_002DD420;
    case 66u: goto L_002DD460;
    case 67u: goto L_002DD4A0;
    case 68u: goto L_002DD4D8;
    case 69u: goto L_002DD520;
    case 70u: goto L_002DD540;
    case 71u: goto L_002DD5A8;
    case 72u: goto L_002DD600;
    case 73u: goto L_002DD640;
    case 74u: goto L_002DD680;
    case 75u: goto L_002DD6B0;
    case 76u: goto L_002DD6BC;
    case 77u: goto L_002DD6E0;
    case 78u: goto L_002DD6EC;
    case 79u: goto L_002DD704;
    case 80u: goto L_002DD734;
    case 81u: goto L_002DD74C;
    case 82u: goto L_002DD764;
    case 83u: goto L_002DD77C;
    case 84u: goto L_002DD7A8;
    case 85u: goto L_002DD7C4;
    case 86u: goto L_002DD7DC;
    case 87u: goto L_002DD7F0;
    case 88u: goto L_002DD808;
    case 89u: goto L_002DD844;
    case 90u: goto L_002DD85C;
    case 91u: goto L_002DD878;
    case 92u: goto L_002DD890;
    case 93u: goto L_002DD8A4;
    case 94u: goto L_002DD8BC;
    case 95u: goto L_002DD8E0;
    case 96u: goto L_002DD8F8;
    case 97u: goto L_002DD910;
    case 98u: goto L_002DD920;
    case 99u: goto L_002DD930;
    case 100u: goto L_002DD938;
    case 101u: goto L_002DD964;
    case 102u: goto L_002DD984;
    case 103u: goto L_002DD990;
    case 104u: goto L_002DD9AC;
    case 105u: goto L_002DDA04;
    case 106u: goto L_002DDA10;
    case 107u: goto L_002DDA54;
    case 108u: goto L_002DDA60;
    case 109u: goto L_002DDAA4;
    case 110u: goto L_002DDAB0;
    case 111u: goto L_002DDAF0;
    case 112u: goto L_002DDAFC;
    case 113u: goto L_002DDB64;
    case 114u: goto L_002DDB70;
    case 115u: goto L_002DDBB4;
    case 116u: goto L_002DDBC0;
    case 117u: goto L_002DDC00;
    case 118u: goto L_002DDC0C;
    case 119u: goto L_002DDC5C;
    case 120u: goto L_002DDC68;
    case 121u: goto L_002DDCAC;
    case 122u: goto L_002DDCB8;
    case 123u: goto L_002DDCF8;
    case 124u: goto L_002DDD04;
    case 125u: goto L_002DDD30;
    case 126u: goto L_002DDD88;
    case 127u: goto L_002DDDA8;
    case 128u: goto L_002DDDB0;
    case 129u: goto L_002DDDD0;
    case 130u: goto L_002DDDE8;
    case 131u: goto L_002DDDF0;
    case 132u: goto L_002DDDF8;
    case 133u: goto L_002DDE14;
    case 134u: goto L_002DDE40;
    case 135u: goto L_002DDE48;
    case 136u: goto L_002DDE50;
    case 137u: goto L_002DDE6C;
    case 138u: goto L_002DDE7C;
    case 139u: goto L_002DDE84;
    case 140u: goto L_002DDE8C;
    case 141u: goto L_002DDEA8;
    case 142u: goto L_002DDEB8;
    case 143u: goto L_002DDEC0;
    case 144u: goto L_002DDEC8;
    case 145u: goto L_002DDEE4;
    case 146u: goto L_002DDEFC;
    case 147u: goto L_002DDF24;
    case 148u: goto L_002DDF2C;
    case 149u: goto L_002DDF34;
    case 150u: goto L_002DDF50;
    case 151u: goto L_002DDF68;
    case 152u: goto L_002DDF94;
    case 153u: goto L_002DDF9C;
    case 154u: goto L_002DDFA8;
    case 155u: goto L_002DE004;
    case 156u: goto L_002DE01C;
    case 157u: goto L_002DE054;
    case 158u: goto L_002DE05C;
    case 159u: goto L_002DE064;
    case 160u: goto L_002DE080;
    case 161u: goto L_002DE09C;
    case 162u: goto L_002DE0B0;
    case 163u: goto L_002DE0B8;
    case 164u: goto L_002DE0C0;
    case 165u: goto L_002DE0DC;
    case 166u: goto L_002DE0F0;
    case 167u: goto L_002DE0F8;
    case 168u: goto L_002DE120;
    case 169u: goto L_002DE13C;
    case 170u: goto L_002DE150;
    case 171u: goto L_002DE158;
    case 172u: goto L_002DE160;
    case 173u: goto L_002DE17C;
    case 174u: goto L_002DE190;
    case 175u: goto L_002DE198;
    case 176u: goto L_002DE1A8;
    case 177u: goto L_002DE1C4;
    case 178u: goto L_002DE1D8;
    case 179u: goto L_002DE1E0;
    case 180u: goto L_002DE1E8;
    case 181u: goto L_002DE204;
    case 182u: goto L_002DE218;
    case 183u: goto L_002DE220;
    case 184u: goto L_002DE240;
    case 185u: goto L_002DE254;
    case 186u: goto L_002DE264;
    case 187u: goto L_002DE26C;
    case 188u: goto L_002DE278;
    case 189u: goto L_002DE2C8;
    case 190u: goto L_002DE2E8;
    case 191u: goto L_002DE2FC;
    case 192u: goto L_002DE344;
    case 193u: goto L_002DE368;
    case 194u: goto L_002DE37C;
    case 195u: goto L_002DE3AC;
    case 196u: goto L_002DE3D8;
    case 197u: goto L_002DE3F4;
    case 198u: goto L_002DE40C;
    case 199u: goto L_002DE418;
    case 200u: goto L_002DE420;
    case 201u: goto L_002DE434;
    case 202u: goto L_002DE45C;
    case 203u: goto L_002DE468;
    case 204u: goto L_002DE470;
    case 205u: goto L_002DE484;
    case 206u: goto L_002DE498;
    case 207u: goto L_002DE4D0;
    case 208u: goto L_002DE4DC;
    case 209u: goto L_002DE4E4;
    case 210u: goto L_002DE510;
    case 211u: goto L_002DE568;
    case 212u: goto L_002DE588;
    case 213u: goto L_002DE590;
    case 214u: goto L_002DE5B0;
    case 215u: goto L_002DE5C8;
    case 216u: goto L_002DE5D0;
    case 217u: goto L_002DE5D8;
    case 218u: goto L_002DE5F4;
    case 219u: goto L_002DE620;
    case 220u: goto L_002DE628;
    case 221u: goto L_002DE630;
    case 222u: goto L_002DE64C;
    case 223u: goto L_002DE65C;
    case 224u: goto L_002DE670;
    case 225u: goto L_002DE680;
    case 226u: goto L_002DE688;
    case 227u: goto L_002DE690;
    case 228u: goto L_002DE6AC;
    case 229u: goto L_002DE6C4;
    case 230u: goto L_002DE6EC;
    case 231u: goto L_002DE6F4;
    case 232u: goto L_002DE6FC;
    case 233u: goto L_002DE718;
    case 234u: goto L_002DE730;
    case 235u: goto L_002DE758;
    case 236u: goto L_002DE760;
    case 237u: goto L_002DE768;
    case 238u: goto L_002DE784;
    case 239u: goto L_002DE79C;
    case 240u: goto L_002DE7C4;
    case 241u: goto L_002DE7CC;
    case 242u: goto L_002DE7D4;
    case 243u: goto L_002DE7F0;
    case 244u: goto L_002DE808;
    case 245u: goto L_002DE834;
    case 246u: goto L_002DE83C;
    case 247u: goto L_002DE848;
    case 248u: goto L_002DE8A4;
    case 249u: goto L_002DE8BC;
    case 250u: goto L_002DE900;
    case 251u: goto L_002DE93C;
    case 252u: goto L_002DE944;
    case 253u: goto L_002DE94C;
    case 254u: goto L_002DE968;
    case 255u: goto L_002DE984;
    case 256u: goto L_002DE998;
    case 257u: goto L_002DE9AC;
    case 258u: goto L_002DE9C0;
    case 259u: goto L_002DE9C8;
    case 260u: goto L_002DE9D0;
    case 261u: goto L_002DE9EC;
    case 262u: goto L_002DEA00;
    case 263u: goto L_002DEA14;
    case 264u: goto L_002DEA28;
    case 265u: goto L_002DEA30;
    case 266u: goto L_002DEA58;
    case 267u: goto L_002DEA74;
    case 268u: goto L_002DEA88;
    case 269u: goto L_002DEA9C;
    case 270u: goto L_002DEAB0;
    case 271u: goto L_002DEAB8;
    case 272u: goto L_002DEAC0;
    case 273u: goto L_002DEADC;
    case 274u: goto L_002DEAF0;
    case 275u: goto L_002DEB04;
    case 276u: goto L_002DEB18;
    case 277u: goto L_002DEB20;
    case 278u: goto L_002DEB30;
    case 279u: goto L_002DEB4C;
    case 280u: goto L_002DEB60;
    case 281u: goto L_002DEB74;
    case 282u: goto L_002DEB88;
    case 283u: goto L_002DEB90;
    case 284u: goto L_002DEB98;
    case 285u: goto L_002DEBB4;
    case 286u: goto L_002DEBC8;
    case 287u: goto L_002DEBDC;
    case 288u: goto L_002DEBF0;
    case 289u: goto L_002DEBF8;
    case 290u: goto L_002DEC18;
    case 291u: goto L_002DEC2C;
    case 292u: goto L_002DEC3C;
    case 293u: goto L_002DEC50;
    case 294u: goto L_002DEC60;
    case 295u: goto L_002DEC68;
    case 296u: goto L_002DEC70;
    case 297u: goto L_002DECC8;
    case 298u: goto L_002DECF0;
    case 299u: goto L_002DED04;
    case 300u: goto L_002DED54;
    case 301u: goto L_002DED80;
    case 302u: goto L_002DED94;
    case 303u: goto L_002DEDCC;
    case 304u: goto L_002DEE00;
    case 305u: goto L_002DEE28;
    case 306u: goto L_002DEE3C;
    case 307u: goto L_002DEE48;
    case 308u: goto L_002DEE50;
    case 309u: goto L_002DEE64;
    case 310u: goto L_002DEE8C;
    case 311u: goto L_002DEE98;
    case 312u: goto L_002DEEA0;
    case 313u: goto L_002DEEB4;
    case 314u: goto L_002DEEC8;
    case 315u: goto L_002DEF00;
    case 316u: goto L_002DEF0C;
    case 317u: goto L_002DEF14;
    case 318u: goto L_002DEF40;
    case 319u: goto L_002DEF68;
    case 320u: goto L_002DEFA8;
    case 321u: goto L_002DEFC4;
    case 322u: goto L_002DEFDC;
    case 323u: goto L_002DEFE8;
    case 324u: goto L_002DF004;
    case 325u: goto L_002DF01C;
    case 326u: goto L_002DF030;
    case 327u: goto L_002DF048;
    case 328u: goto L_002DF050;
    case 329u: goto L_002DF068;
    case 330u: goto L_002DF070;
    case 331u: goto L_002DF084;
    case 332u: goto L_002DF09C;
    case 333u: goto L_002DF0B0;
    case 334u: goto L_002DF0C8;
    case 335u: goto L_002DF0D0;
    case 336u: goto L_002DF0E4;
    case 337u: goto L_002DF0FC;
    case 338u: goto L_002DF110;
    case 339u: goto L_002DF128;
    case 340u: goto L_002DF13C;
    case 341u: goto L_002DF154;
    case 342u: goto L_002DF158;
    case 343u: goto L_002DF160;
    case 344u: goto L_002DF1F8;
    case 345u: goto L_002DF208;
    case 346u: goto L_002DF220;
    case 347u: goto L_002DF2B8;
    case 348u: goto L_002DF2C8;
    case 349u: goto L_002DF2E0;
    case 350u: goto L_002DF330;
    case 351u: goto L_002DF368;
    case 352u: goto L_002DF390;
    case 353u: goto L_002DF3A0;
    case 354u: goto L_002DF3B0;
    case 355u: goto L_002DF410;
    case 356u: goto L_002DF420;
    case 357u: goto L_002DF440;
    case 358u: goto L_002DF450;
    case 359u: goto L_002DF470;
    case 360u: goto L_002DF4B4;
    case 361u: goto L_002DF508;
    case 362u: goto L_002DF518;
    case 363u: goto L_002DF530;
    case 364u: goto L_002DF558;
    case 365u: goto L_002DF57C;
    case 366u: goto L_002DF5A0;
    case 367u: goto L_002DF5CC;
    case 368u: goto L_002DF5E0;
    case 369u: goto L_002DF5F0;
    case 370u: goto L_002DF630;
    case 371u: goto L_002DF658;
    case 372u: goto L_002DF6B0;
    case 373u: goto L_002DF6D0;
    case 374u: goto L_002DF6F0;
    case 375u: goto L_002DF710;
    case 376u: goto L_002DF730;
    case 377u: goto L_002DF788;
    case 378u: goto L_002DF798;
    case 379u: goto L_002DF7A8;
    case 380u: goto L_002DF7B8;
    case 381u: goto L_002DF7C8;
    case 382u: goto L_002DF7D8;
    case 383u: goto L_002DF7E8;
    case 384u: goto L_002DF7F8;
    case 385u: goto L_002DF808;
    case 386u: goto L_002DF818;
    case 387u: goto L_002DF828;
    case 388u: goto L_002DF838;
    case 389u: goto L_002DF848;
    case 390u: goto L_002DF880;
    case 391u: goto L_002DF908;
    case 392u: goto L_002DF91C;
    case 393u: goto L_002DF934;
    case 394u: goto L_002DFA30;
    case 395u: goto L_002DFA5C;
    case 396u: goto L_002DFA64;
    case 397u: goto L_002DFA70;
    case 398u: goto L_002DFA80;
    case 399u: goto L_002DFA94;
    case 400u: goto L_002DFA9C;
    case 401u: goto L_002DFAE0;
    case 402u: goto L_002DFB58;
    case 403u: goto L_002DFB88;
    case 404u: goto L_002DFBA4;
    case 405u: goto L_002DFBB4;
    case 406u: goto L_002DFBC4;
    case 407u: goto L_002DFBCC;
    case 408u: goto L_002DFBE4;
    case 409u: goto L_002DFBEC;
    case 410u: goto L_002DFBF8;
    case 411u: goto L_002DFC30;
    case 412u: goto L_002DFC68;
    case 413u: goto L_002DFC70;
    case 414u: goto L_002DFCB0;
    case 415u: goto L_002DFDB0;
    case 416u: goto L_002DFDD4;
    case 417u: goto L_002DFDDC;
    case 418u: goto L_002DFDE8;
    case 419u: goto L_002DFDF8;
    case 420u: goto L_002DFE0C;
    case 421u: goto L_002DFE14;
    case 422u: goto L_002DFEAC;
    case 423u: goto L_002DFF28;
    case 424u: goto L_002DFF30;
    case 425u: goto L_002DFF6C;
    case 426u: goto L_002DFFB4;
    case 427u: goto L_002DFFE8;
    case 428u: goto L_002DFFEC;
    case 429u: goto L_002DFFF0;
    default: bad_entry(c, 0x002DC000u); return;
    }
L_002DC000:
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + 8433u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002DC070; } }
    c.budget -= 1;
L_002DC018:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);  if (t) { goto L_002DC070; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 8816u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[17].w[0] + 88u);
    set32(c.r[8], c.r[17].w[0] + 27u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC040u); set32(c.r[9], c.r[17].w[0] + 120u);  if (depth < kMaxDepth) unit_0077(c, 19u, depth + 1u); else { c.pc = 0x002DC840u; return; } if (c.pc != 0x002DC040u) [[unlikely]] return; }
L_002DC040:
    c.r[2].d[0] = c.r[19].d[0] | 32ull;
    c.r[19].d[0] = c.r[2].d[0] << 56;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);  if (t) { goto L_002DC070; } }
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + 8817u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
L_002DC070:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002DC090:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002DC0A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DC0E8; } }
L_002DC0A0:
    set32(c.r[2], 0u - 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002DC0A8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002DC0B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[4].w[0] + 32u)));  if (t) { goto L_002DC0C4; } }
L_002DC0B8:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 36u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 38u)));
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_002DC0C4:
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002DC0D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_002DC0E8; } }
L_002DC0D8:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC0A8u | kUnwind; return; } goto L_002DC0A8; } }
L_002DC0E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002DC0F0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const bool t = c.r[30].d[0] != 0ull; c.r[17].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_002DC148; } }
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_002DC164; } }
L_002DC148:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 6u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
L_002DC164:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002DC178; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DC288; } }
    c.budget -= 1;
L_002DC178:
    set32(c.r[22], 0u - 1u);
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002DC180:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull;  if (t) { goto L_002DC198; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_002DC1B4; } }
L_002DC198:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 68u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 70u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 84u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 86u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
L_002DC1B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0]; set32(c.r[4], c.r[21].w[0] + 8u);  if (t) { goto L_002DC258; } }
    set32(c.r[5], c.r[21].w[0] + 64u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC1CCu); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 13u, depth + 1u); else { c.pc = 0x002DC2C0u; return; } if (c.pc != 0x002DC1CCu) [[unlikely]] return; }
L_002DC1CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[21].w[0] + 35u);  if (t) { goto L_002DC1F0; } }
    set32(c.r[5], c.r[21].w[0] + 80u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC1E4u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 13u, depth + 1u); else { c.pc = 0x002DC2C0u; return; } if (c.pc != 0x002DC1E4u) [[unlikely]] return; }
L_002DC1E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DC228; } }
    c.budget -= 1;
L_002DC1F0:
    set32(c.r[4], c.r[21].w[0] + 8u);
    set32(c.r[5], c.r[21].w[0] + 64u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC204u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 13u, depth + 1u); else { c.pc = 0x002DC2C0u; return; } if (c.pc != 0x002DC204u) [[unlikely]] return; }
L_002DC204:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[21].w[0] + 35u);  if (t) { goto L_002DC270; } }
    set32(c.r[5], c.r[21].w[0] + 80u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC21Cu); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 13u, depth + 1u); else { c.pc = 0x002DC2C0u; return; } if (c.pc != 0x002DC21Cu) [[unlikely]] return; }
L_002DC21C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DC270; } }
    c.budget -= 1;
L_002DC228:
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DC250; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23920u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 3601ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[23].w[0] + 4u);  if (t) { goto L_002DC250; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DC288; } }
L_002DC250:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[23].d[0] + 0ull;  if (t) { goto L_002DC280; } }
L_002DC258:
    c.r[1].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DC270; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[23].d[0] + 0ull;  if (t) { goto L_002DC280; } }
    c.budget -= 1;
L_002DC270:
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.r[2].d[0] = c.r[23].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 96u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC180u | kUnwind; return; } goto L_002DC180; } }
L_002DC280:
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 2;
L_002DC288:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002DC2C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002DC300; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DC3F0; } }
    c.budget -= 1;
L_002DC300:
    set32(c.r[4], c.r[19].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC30Cu); set32(c.r[5], c.r[17].w[0] + 2u);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x002DC30Cu) [[unlikely]] return; }
L_002DC30C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DC320; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DC3F0; } }
    c.budget -= 1;
L_002DC320:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 23u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 23u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DC338; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DC3F0; } }
L_002DC338:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DC350; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DC3F0; } }
L_002DC350:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 25u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 25u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DC368; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DC3F0; } }
L_002DC368:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 26u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 26u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DC380; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DC3F0; } }
L_002DC380:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DC398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DC3F0; } }
L_002DC398:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DC3B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DC3F0; } }
L_002DC3B0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 6u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DC3C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DC3F0; } }
L_002DC3C8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DC3E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DC3F0; } }
L_002DC3E0:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_002DC3F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002DC410:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[5].w[0] << 1);  if (t) { goto L_002DC830; } }
    c.r[1].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[10], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[9], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_002DC7E8; } }
    set32(c.r[3], c.r[5].w[0] - 3u);
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[8], c.r[5].w[0] + 8u);  if (t) { goto L_002DC760; } }
    set32(c.r[3], c.r[4].w[0] + 144u);
    c.budget -= 2;
L_002DC450:
    set32(c.r[10], c.r[10].w[0] - 8u);
    c.f[3] = ld32((c.r[3].w[0] - 48u));
    c.r[1].d[0] = c.r[8].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.f[2] = ld32((c.r[3].w[0] - 44u));
    c.f[1] = ld32((c.r[3].w[0] - 40u));
    c.f[0] = ld32((c.r[3].w[0] - 36u));
    st32((c.r[3].w[0]), c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0] - 32u));
    c.f[2] = ld32((c.r[3].w[0] - 28u));
    c.f[1] = ld32((c.r[3].w[0] - 24u));
    c.f[0] = ld32((c.r[3].w[0] - 20u));
    st32((c.r[3].w[0] + 16u), c.f[3]);
    st32((c.r[3].w[0] + 20u), c.f[2]);
    st32((c.r[3].w[0] + 24u), c.f[1]);
    st32((c.r[3].w[0] + 28u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0] - 16u));
    c.f[2] = ld32((c.r[3].w[0] - 12u));
    c.f[1] = ld32((c.r[3].w[0] - 8u));
    c.f[0] = ld32((c.r[3].w[0] - 4u));
    st32((c.r[3].w[0] + 32u), c.f[3]);
    st32((c.r[3].w[0] + 36u), c.f[2]);
    st32((c.r[3].w[0] + 40u), c.f[1]);
    st32((c.r[3].w[0] + 44u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0] - 96u));
    c.f[2] = ld32((c.r[3].w[0] - 92u));
    c.f[1] = ld32((c.r[3].w[0] - 88u));
    c.f[0] = ld32((c.r[3].w[0] - 84u));
    st32((c.r[3].w[0] - 48u), c.f[3]);
    st32((c.r[3].w[0] - 44u), c.f[2]);
    st32((c.r[3].w[0] - 40u), c.f[1]);
    st32((c.r[3].w[0] - 36u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0] - 80u));
    c.f[2] = ld32((c.r[3].w[0] - 76u));
    c.f[1] = ld32((c.r[3].w[0] - 72u));
    c.f[0] = ld32((c.r[3].w[0] - 68u));
    st32((c.r[3].w[0] - 32u), c.f[3]);
    st32((c.r[3].w[0] - 28u), c.f[2]);
    st32((c.r[3].w[0] - 24u), c.f[1]);
    st32((c.r[3].w[0] - 20u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0] - 64u));
    c.f[2] = ld32((c.r[3].w[0] - 60u));
    c.f[1] = ld32((c.r[3].w[0] - 56u));
    c.f[0] = ld32((c.r[3].w[0] - 52u));
    st32((c.r[3].w[0] - 16u), c.f[3]);
    st32((c.r[3].w[0] - 12u), c.f[2]);
    st32((c.r[3].w[0] - 8u), c.f[1]);
    st32((c.r[3].w[0] - 4u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0] - 144u));
    c.f[2] = ld32((c.r[3].w[0] - 140u));
    c.f[1] = ld32((c.r[3].w[0] - 136u));
    c.f[0] = ld32((c.r[3].w[0] - 132u));
    st32((c.r[3].w[0] - 96u), c.f[3]);
    st32((c.r[3].w[0] - 92u), c.f[2]);
    st32((c.r[3].w[0] - 88u), c.f[1]);
    st32((c.r[3].w[0] - 84u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0] - 128u));
    c.f[2] = ld32((c.r[3].w[0] - 124u));
    c.f[1] = ld32((c.r[3].w[0] - 120u));
    c.f[0] = ld32((c.r[3].w[0] - 116u));
    st32((c.r[3].w[0] - 80u), c.f[3]);
    st32((c.r[3].w[0] - 76u), c.f[2]);
    st32((c.r[3].w[0] - 72u), c.f[1]);
    st32((c.r[3].w[0] - 68u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0] - 112u));
    c.f[2] = ld32((c.r[3].w[0] - 108u));
    c.f[1] = ld32((c.r[3].w[0] - 104u));
    c.f[0] = ld32((c.r[3].w[0] - 100u));
    st32((c.r[3].w[0] - 64u), c.f[3]);
    st32((c.r[3].w[0] - 60u), c.f[2]);
    st32((c.r[3].w[0] - 56u), c.f[1]);
    st32((c.r[3].w[0] - 52u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0] - 192u));
    c.f[2] = ld32((c.r[3].w[0] - 188u));
    c.f[1] = ld32((c.r[3].w[0] - 184u));
    c.f[0] = ld32((c.r[3].w[0] - 180u));
    st32((c.r[3].w[0] - 144u), c.f[3]);
    st32((c.r[3].w[0] - 140u), c.f[2]);
    st32((c.r[3].w[0] - 136u), c.f[1]);
    st32((c.r[3].w[0] - 132u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0] - 176u));
    c.f[2] = ld32((c.r[3].w[0] - 172u));
    c.f[1] = ld32((c.r[3].w[0] - 168u));
    c.f[0] = ld32((c.r[3].w[0] - 164u));
    st32((c.r[3].w[0] - 128u), c.f[3]);
    st32((c.r[3].w[0] - 124u), c.f[2]);
    st32((c.r[3].w[0] - 120u), c.f[1]);
    st32((c.r[3].w[0] - 116u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0] - 160u));
    c.f[2] = ld32((c.r[3].w[0] - 156u));
    c.f[1] = ld32((c.r[3].w[0] - 152u));
    c.f[0] = ld32((c.r[3].w[0] - 148u));
    st32((c.r[3].w[0] - 112u), c.f[3]);
    st32((c.r[3].w[0] - 108u), c.f[2]);
    st32((c.r[3].w[0] - 104u), c.f[1]);
    st32((c.r[3].w[0] - 100u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0] - 240u));
    c.f[2] = ld32((c.r[3].w[0] - 236u));
    c.f[1] = ld32((c.r[3].w[0] - 232u));
    c.f[0] = ld32((c.r[3].w[0] - 228u));
    st32((c.r[3].w[0] - 192u), c.f[3]);
    st32((c.r[3].w[0] - 188u), c.f[2]);
    st32((c.r[3].w[0] - 184u), c.f[1]);
    st32((c.r[3].w[0] - 180u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0] - 224u));
    c.f[2] = ld32((c.r[3].w[0] - 220u));
    c.f[1] = ld32((c.r[3].w[0] - 216u));
    c.f[0] = ld32((c.r[3].w[0] - 212u));
    st32((c.r[3].w[0] - 176u), c.f[3]);
    st32((c.r[3].w[0] - 172u), c.f[2]);
    st32((c.r[3].w[0] - 168u), c.f[1]);
    st32((c.r[3].w[0] - 164u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0] - 208u));
    c.f[2] = ld32((c.r[3].w[0] - 204u));
    c.f[1] = ld32((c.r[3].w[0] - 200u));
    c.f[0] = ld32((c.r[3].w[0] - 196u));
    st32((c.r[3].w[0] - 160u), c.f[3]);
    st32((c.r[3].w[0] - 156u), c.f[2]);
    st32((c.r[3].w[0] - 152u), c.f[1]);
    st32((c.r[3].w[0] - 148u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0] - 288u));
    c.f[2] = ld32((c.r[3].w[0] - 284u));
    c.f[1] = ld32((c.r[3].w[0] - 280u));
    c.f[0] = ld32((c.r[3].w[0] - 276u));
    st32((c.r[3].w[0] - 240u), c.f[3]);
    st32((c.r[3].w[0] - 236u), c.f[2]);
    st32((c.r[3].w[0] - 232u), c.f[1]);
    st32((c.r[3].w[0] - 228u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0] - 272u));
    c.f[2] = ld32((c.r[3].w[0] - 268u));
    c.f[1] = ld32((c.r[3].w[0] - 264u));
    c.f[0] = ld32((c.r[3].w[0] - 260u));
    st32((c.r[3].w[0] - 224u), c.f[3]);
    st32((c.r[3].w[0] - 220u), c.f[2]);
    st32((c.r[3].w[0] - 216u), c.f[1]);
    st32((c.r[3].w[0] - 212u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0] - 256u));
    c.f[2] = ld32((c.r[3].w[0] - 252u));
    c.f[1] = ld32((c.r[3].w[0] - 248u));
    c.f[0] = ld32((c.r[3].w[0] - 244u));
    st32((c.r[3].w[0] - 208u), c.f[3]);
    st32((c.r[3].w[0] - 204u), c.f[2]);
    st32((c.r[3].w[0] - 200u), c.f[1]);
    st32((c.r[3].w[0] - 196u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0] - 336u));
    c.f[2] = ld32((c.r[3].w[0] - 332u));
    c.f[1] = ld32((c.r[3].w[0] - 328u));
    c.f[0] = ld32((c.r[3].w[0] - 324u));
    st32((c.r[3].w[0] - 288u), c.f[3]);
    st32((c.r[3].w[0] - 284u), c.f[2]);
    st32((c.r[3].w[0] - 280u), c.f[1]);
    st32((c.r[3].w[0] - 276u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0] - 320u));
    c.f[2] = ld32((c.r[3].w[0] - 316u));
    c.f[1] = ld32((c.r[3].w[0] - 312u));
    c.f[0] = ld32((c.r[3].w[0] - 308u));
    st32((c.r[3].w[0] - 272u), c.f[3]);
    st32((c.r[3].w[0] - 268u), c.f[2]);
    st32((c.r[3].w[0] - 264u), c.f[1]);
    st32((c.r[3].w[0] - 260u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0] - 304u));
    c.f[2] = ld32((c.r[3].w[0] - 300u));
    c.f[1] = ld32((c.r[3].w[0] - 296u));
    c.f[0] = ld32((c.r[3].w[0] - 292u));
    st32((c.r[3].w[0] - 256u), c.f[3]);
    st32((c.r[3].w[0] - 252u), c.f[2]);
    st32((c.r[3].w[0] - 248u), c.f[1]);
    st32((c.r[3].w[0] - 244u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0] - 384u));
    c.f[2] = ld32((c.r[3].w[0] - 380u));
    c.f[1] = ld32((c.r[3].w[0] - 376u));
    c.f[0] = ld32((c.r[3].w[0] - 372u));
    st32((c.r[3].w[0] - 336u), c.f[3]);
    st32((c.r[3].w[0] - 332u), c.f[2]);
    st32((c.r[3].w[0] - 328u), c.f[1]);
    st32((c.r[3].w[0] - 324u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0] - 368u));
    c.f[2] = ld32((c.r[3].w[0] - 364u));
    c.f[1] = ld32((c.r[3].w[0] - 360u));
    c.f[0] = ld32((c.r[3].w[0] - 356u));
    st32((c.r[3].w[0] - 320u), c.f[3]);
    st32((c.r[3].w[0] - 316u), c.f[2]);
    st32((c.r[3].w[0] - 312u), c.f[1]);
    st32((c.r[3].w[0] - 308u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0] - 352u));
    c.f[2] = ld32((c.r[3].w[0] - 348u));
    c.f[1] = ld32((c.r[3].w[0] - 344u));
    c.f[0] = ld32((c.r[3].w[0] - 340u));
    st32((c.r[3].w[0] - 304u), c.f[3]);
    st32((c.r[3].w[0] - 300u), c.f[2]);
    st32((c.r[3].w[0] - 296u), c.f[1]);
    st32((c.r[3].w[0] - 292u), c.f[0]);
    c.budget -= 196;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] - 384u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC450u | kUnwind; return; } goto L_002DC450; } }
L_002DC760:
    c.r[1].d[0] = c.r[5].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[10].w[0] << 1);  if (t) { goto L_002DC7E8; } }
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_002DC778:
    set32(c.r[10], c.r[10].w[0] - 1u);
    c.f[3] = ld32((c.r[3].w[0] - 48u));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.f[2] = ld32((c.r[3].w[0] - 44u));
    c.f[1] = ld32((c.r[3].w[0] - 40u));
    c.f[0] = ld32((c.r[3].w[0] - 36u));
    st32((c.r[3].w[0]), c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0] - 32u));
    c.f[2] = ld32((c.r[3].w[0] - 28u));
    c.f[1] = ld32((c.r[3].w[0] - 24u));
    c.f[0] = ld32((c.r[3].w[0] - 20u));
    st32((c.r[3].w[0] + 16u), c.f[3]);
    st32((c.r[3].w[0] + 20u), c.f[2]);
    st32((c.r[3].w[0] + 24u), c.f[1]);
    st32((c.r[3].w[0] + 28u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0] - 16u));
    c.f[2] = ld32((c.r[3].w[0] - 12u));
    c.f[1] = ld32((c.r[3].w[0] - 8u));
    c.f[0] = ld32((c.r[3].w[0] - 4u));
    st32((c.r[3].w[0] + 32u), c.f[3]);
    st32((c.r[3].w[0] + 36u), c.f[2]);
    st32((c.r[3].w[0] + 40u), c.f[1]);
    st32((c.r[3].w[0] + 44u), c.f[0]);
    c.budget -= 28;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] - 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC778u | kUnwind; return; } goto L_002DC778; } }
L_002DC7E8:
    set32(c.r[5], c.r[9].w[0] + 2u);
    set32(c.r[4], 0u + 27u);
    c.budget -= 2;
L_002DC7F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC7F0u | kUnwind; return; } goto L_002DC7F0; } }
    c.f[3] = ld32((c.r[7].w[0]));
    c.f[2] = ld32((c.r[7].w[0] + 4u));
    c.f[1] = ld32((c.r[7].w[0] + 8u));
    c.f[0] = ld32((c.r[7].w[0] + 12u));
    st32((c.r[9].w[0] + 32u), c.f[3]);
    st32((c.r[9].w[0] + 36u), c.f[2]);
    st32((c.r[9].w[0] + 40u), c.f[1]);
    st32((c.r[9].w[0] + 44u), c.f[0]);
    st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
L_002DC830:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002DC840:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[5].w[0] << 1);  if (t) { goto L_002DCB00; } }
    c.r[1].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[12], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[11], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_002DCA68; } }
    set32(c.r[3], c.r[5].w[0] - 3u);
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[10], c.r[5].w[0] + 8u);  if (t) { goto L_002DCA10; } }
    set32(c.r[3], c.r[4].w[0] + 288u);
    c.budget -= 2;
L_002DC880:
    set32(c.r[25], c.r[3].w[0] - 96u);
    set32(c.r[15], 0u + 12u);
    c.r[24].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_002DC890:
    set32(c.r[14], ld32((c.r[25].w[0])));
    set32(c.r[15], c.r[15].w[0] - 1u);
    set32(c.r[13], ld32((c.r[25].w[0] + 4u)));
    st32((c.r[24].w[0]), c.r[14].w[0]);
    set32(c.r[25], c.r[25].w[0] + 8u);
    st32((c.r[24].w[0] + 4u), c.r[13].w[0]);
    c.budget -= 8;
    { const bool t = c.r[15].sd[0] > 0; set32(c.r[24], c.r[24].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC890u | kUnwind; return; } goto L_002DC890; } }
    set32(c.r[25], c.r[3].w[0] - 192u);
    set32(c.r[24], c.r[3].w[0] - 96u);
    set32(c.r[15], 0u + 12u);
    c.budget -= 4;
L_002DC8C0:
    set32(c.r[14], ld32((c.r[25].w[0])));
    set32(c.r[15], c.r[15].w[0] - 1u);
    set32(c.r[13], ld32((c.r[25].w[0] + 4u)));
    st32((c.r[24].w[0]), c.r[14].w[0]);
    set32(c.r[25], c.r[25].w[0] + 8u);
    st32((c.r[24].w[0] + 4u), c.r[13].w[0]);
    c.budget -= 8;
    { const bool t = c.r[15].sd[0] > 0; set32(c.r[24], c.r[24].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC8C0u | kUnwind; return; } goto L_002DC8C0; } }
    set32(c.r[25], c.r[3].w[0] - 288u);
    set32(c.r[24], c.r[3].w[0] - 192u);
    set32(c.r[15], 0u + 12u);
    c.budget -= 4;
L_002DC8F0:
    set32(c.r[14], ld32((c.r[25].w[0])));
    set32(c.r[15], c.r[15].w[0] - 1u);
    set32(c.r[13], ld32((c.r[25].w[0] + 4u)));
    st32((c.r[24].w[0]), c.r[14].w[0]);
    set32(c.r[25], c.r[25].w[0] + 8u);
    st32((c.r[24].w[0] + 4u), c.r[13].w[0]);
    c.budget -= 8;
    { const bool t = c.r[15].sd[0] > 0; set32(c.r[24], c.r[24].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC8F0u | kUnwind; return; } goto L_002DC8F0; } }
    set32(c.r[25], c.r[3].w[0] - 384u);
    set32(c.r[24], c.r[3].w[0] - 288u);
    set32(c.r[15], 0u + 12u);
    c.budget -= 4;
L_002DC920:
    set32(c.r[14], ld32((c.r[25].w[0])));
    set32(c.r[15], c.r[15].w[0] - 1u);
    set32(c.r[13], ld32((c.r[25].w[0] + 4u)));
    st32((c.r[24].w[0]), c.r[14].w[0]);
    set32(c.r[25], c.r[25].w[0] + 8u);
    st32((c.r[24].w[0] + 4u), c.r[13].w[0]);
    c.budget -= 8;
    { const bool t = c.r[15].sd[0] > 0; set32(c.r[24], c.r[24].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC920u | kUnwind; return; } goto L_002DC920; } }
    set32(c.r[25], c.r[3].w[0] - 480u);
    set32(c.r[24], c.r[3].w[0] - 384u);
    set32(c.r[15], 0u + 12u);
    c.budget -= 4;
L_002DC950:
    set32(c.r[14], ld32((c.r[25].w[0])));
    set32(c.r[15], c.r[15].w[0] - 1u);
    set32(c.r[13], ld32((c.r[25].w[0] + 4u)));
    st32((c.r[24].w[0]), c.r[14].w[0]);
    set32(c.r[25], c.r[25].w[0] + 8u);
    st32((c.r[24].w[0] + 4u), c.r[13].w[0]);
    c.budget -= 8;
    { const bool t = c.r[15].sd[0] > 0; set32(c.r[24], c.r[24].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC950u | kUnwind; return; } goto L_002DC950; } }
    set32(c.r[25], c.r[3].w[0] - 576u);
    set32(c.r[24], c.r[3].w[0] - 480u);
    set32(c.r[15], 0u + 12u);
    c.budget -= 4;
L_002DC980:
    set32(c.r[14], ld32((c.r[25].w[0])));
    set32(c.r[15], c.r[15].w[0] - 1u);
    set32(c.r[13], ld32((c.r[25].w[0] + 4u)));
    st32((c.r[24].w[0]), c.r[14].w[0]);
    set32(c.r[25], c.r[25].w[0] + 8u);
    st32((c.r[24].w[0] + 4u), c.r[13].w[0]);
    c.budget -= 8;
    { const bool t = c.r[15].sd[0] > 0; set32(c.r[24], c.r[24].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC980u | kUnwind; return; } goto L_002DC980; } }
    set32(c.r[25], c.r[3].w[0] - 672u);
    set32(c.r[24], c.r[3].w[0] - 576u);
    set32(c.r[15], 0u + 12u);
    c.budget -= 4;
L_002DC9B0:
    set32(c.r[14], ld32((c.r[25].w[0])));
    set32(c.r[15], c.r[15].w[0] - 1u);
    set32(c.r[13], ld32((c.r[25].w[0] + 4u)));
    st32((c.r[24].w[0]), c.r[14].w[0]);
    set32(c.r[25], c.r[25].w[0] + 8u);
    st32((c.r[24].w[0] + 4u), c.r[13].w[0]);
    c.budget -= 8;
    { const bool t = c.r[15].sd[0] > 0; set32(c.r[24], c.r[24].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC9B0u | kUnwind; return; } goto L_002DC9B0; } }
    set32(c.r[25], c.r[3].w[0] - 768u);
    set32(c.r[24], c.r[3].w[0] - 672u);
    set32(c.r[15], 0u + 12u);
    c.budget -= 4;
L_002DC9E0:
    set32(c.r[14], ld32((c.r[25].w[0])));
    set32(c.r[15], c.r[15].w[0] - 1u);
    set32(c.r[13], ld32((c.r[25].w[0] + 4u)));
    st32((c.r[24].w[0]), c.r[14].w[0]);
    set32(c.r[25], c.r[25].w[0] + 8u);
    st32((c.r[24].w[0] + 4u), c.r[13].w[0]);
    c.budget -= 8;
    { const bool t = c.r[15].sd[0] > 0; set32(c.r[24], c.r[24].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC9E0u | kUnwind; return; } goto L_002DC9E0; } }
    set32(c.r[12], c.r[12].w[0] - 8u);
    c.r[1].d[0] = c.r[10].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] - 768u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC880u | kUnwind; return; } goto L_002DC880; } }
L_002DCA10:
    c.r[1].d[0] = c.r[5].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[12].w[0] << 1);  if (t) { goto L_002DCA68; } }
    set32(c.r[3], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[15], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_002DCA28:
    set32(c.r[14], c.r[15].w[0] - 96u);
    set32(c.r[10], 0u + 12u);
    c.r[13].d[0] = c.r[15].d[0] + 0ull;
    c.budget -= 4;
L_002DCA38:
    set32(c.r[4], ld32((c.r[14].w[0])));
    set32(c.r[10], c.r[10].w[0] - 1u);
    set32(c.r[3], ld32((c.r[14].w[0] + 4u)));
    st32((c.r[13].w[0]), c.r[4].w[0]);
    set32(c.r[14], c.r[14].w[0] + 8u);
    st32((c.r[13].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[10].sd[0] > 0; set32(c.r[13], c.r[13].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DCA38u | kUnwind; return; } goto L_002DCA38; } }
    set32(c.r[12], c.r[12].w[0] - 1u);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[15], c.r[15].w[0] - 96u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DCA28u | kUnwind; return; } goto L_002DCA28; } }
L_002DCA68:
    set32(c.r[5], c.r[11].w[0] + 8u);
    set32(c.r[4], 0u + 27u);
    c.budget -= 2;
L_002DCA70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DCA70u | kUnwind; return; } goto L_002DCA70; } }
    c.f[3] = ld32((c.r[7].w[0]));
    set32(c.r[5], c.r[11].w[0] + 35u);
    c.f[2] = ld32((c.r[7].w[0] + 4u));
    set32(c.r[4], 0u + 27u);
    c.f[1] = ld32((c.r[7].w[0] + 8u));
    c.f[0] = ld32((c.r[7].w[0] + 12u));
    st32((c.r[11].w[0] + 64u), c.f[3]);
    st32((c.r[11].w[0] + 68u), c.f[2]);
    st32((c.r[11].w[0] + 72u), c.f[1]);
    st32((c.r[11].w[0] + 76u), c.f[0]);
    c.budget -= 11;
L_002DCAB8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DCAB8u | kUnwind; return; } goto L_002DCAB8; } }
    c.f[3] = ld32((c.r[9].w[0]));
    c.f[2] = ld32((c.r[9].w[0] + 4u));
    c.f[1] = ld32((c.r[9].w[0] + 8u));
    c.f[0] = ld32((c.r[9].w[0] + 12u));
    st32((c.r[11].w[0] + 80u), c.f[3]);
    st32((c.r[11].w[0] + 84u), c.f[2]);
    st32((c.r[11].w[0] + 88u), c.f[1]);
    st32((c.r[11].w[0] + 92u), c.f[0]);
    st8((c.r[11].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23920u)));
    st32((c.r[11].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 11;
L_002DCB00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002DCB10:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DCB50; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 9360u);
    c.budget -= 4;
L_002DCB28:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002DCB50; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DCB28u | kUnwind; return; } goto L_002DCB28; } }
    c.budget -= 1;
L_002DCB50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002DCB60:
    c.r[3].d[0] = c.r[4].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[4], c.r[3].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], c.r[3].w[0] + 9200u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < 10000ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 9999u);  if (t) { goto L_002DCBA0; } }
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002DCBA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002DCBB0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    set32(c.r[12], c.r[12].w[0] - 27856u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[7].d[0] = c.r[3].d[0] | 26215ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[2] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x88880000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[3].d[0] | 34953ull;
    c.r[23].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[8], c.r[8].w[0] + 8936u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[6].w[0] + 8688u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 8912u);
    set32(c.r[22], c.r[22].w[0] + 8976u);
    set32(c.r[23], c.r[23].w[0] + 9008u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[8]);
    set32(c.r[30], c.r[30].w[0] + 8952u);
    c.budget -= 34;
L_002DCC38:
    set32(c.r[10], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[8], c.r[8].w[0] << (c.r[20].w[0] & 31u));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 56u)));
    c.r[8].d[0] = c.r[9].d[0] & c.r[8].d[0];
    c.budget -= 7;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002DCF98; } }
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0] + 1538u)));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[19], c.r[12].w[0] + 1520u);  if (t) { goto L_002DCC68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002DCC94; } }
L_002DCC68:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 20u)));
    c.f[0] = c.r[9].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[8].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[0]);
    c.budget -= 11;
L_002DCC94:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002DCCC0; } }
    mmi::mult(c, 0, c.r[7].w[0], c.r[18].w[0]);
    set32(c.r[11], c.r[18].w[0] >> 31);
    c.r[8].d[0] = c.hi.d[0];
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 2));
    set32(c.r[8], c.r[8].w[0] + c.r[11].w[0]);
    set32(c.r[8], c.r[8].w[0] << 1);
    set32(c.r[8], c.r[6].w[0] + c.r[8].w[0]);
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    c.budget -= 9;
L_002DCCC0:
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 14u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 12u)));
    c.r[13].d[0] = c.r[8].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[13].d[0] != 0ull;  if (t) { goto L_002DCCE8; } }
    c.r[13].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 16u)));
    set32(c.r[14], c.r[8].w[0] + c.r[13].w[0]);
    c.budget -= 4;
    { const bool t = c.r[14].d[0] != 0ull;  if (t) { goto L_002DCCF0; } }
    c.budget -= 1;
L_002DCCE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002DCD18; } }
L_002DCCF0:
    set32(c.r[13], c.r[8].w[0] - c.r[11].w[0]);
    c.f[1] = c.r[13].w[0];
    c.f[0] = c.r[14].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.budget -= 10;
L_002DCD18:
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[10].d[0] != c.r[5].d[0];  if (t) { goto L_002DCD40; } }
    set32(c.r[8], c.r[8].w[0] + c.r[11].w[0]);
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 16u)));
    set32(c.r[8], c.r[11].w[0] + c.r[8].w[0]);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_002DCD40; } }
    set32(c.r[17], 0u + 100u);
    c.budget -= 2;
L_002DCD40:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0; c.r[25].d[0] = 0ull + 0ull;  if (t) { goto L_002DCD6C; } }
    mmi::mult(c, 0, c.r[7].w[0], c.r[17].w[0]);
    set32(c.r[11], c.r[17].w[0] >> 31);
    c.r[8].d[0] = c.hi.d[0];
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 2));
    set32(c.r[8], c.r[8].w[0] + c.r[11].w[0]);
    set32(c.r[8], c.r[8].w[0] << 1);
    set32(c.r[8], c.r[6].w[0] + c.r[8].w[0]);
    c.r[25].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    c.budget -= 9;
L_002DCD6C:
    set32(c.r[8], ld32((c.r[28].w[0] - 23788u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[14].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 8944u)));
    set32(c.r[21], ld32((c.r[8].w[0] + 92u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[21].w[0]);
    set32(c.r[15], c.r[21].w[0] >> 31);
    c.r[11].d[0] = c.hi.d[0];
    set32(c.r[11], c.r[11].w[0] + c.r[21].w[0]);
    set32(c.r[11], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 5));
    set32(c.r[11], c.r[11].w[0] + c.r[15].w[0]);
    set32(c.r[15], 0u - 1u);
    c.budget -= 14;
    { const bool t = c.r[14].d[0] != c.r[15].d[0]; c.r[13].d[0] = 0ull + 0ull;  if (t) { goto L_002DCDB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[14], 0u + 4u);  if (t) { goto L_002DCE18; } }
    c.budget -= 1;
L_002DCDB0:
    c.r[1].d[0] = c.r[14].sd[0] < 121ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DCDC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[14].d[0] = 0ull + 0ull;  if (t) { goto L_002DCE18; } }
    c.budget -= 1;
L_002DCDC8:
    c.r[1].d[0] = c.r[14].sd[0] < 151ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DCDE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[14], 0u + 1u);  if (t) { goto L_002DCE18; } }
    c.budget -= 1;
L_002DCDE0:
    c.r[1].d[0] = c.r[14].sd[0] < 181ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DCDF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[14], 0u + 2u);  if (t) { goto L_002DCE18; } }
    c.budget -= 1;
L_002DCDF8:
    c.r[1].d[0] = c.r[14].sd[0] < 211ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DCE10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[14], 0u + 3u);  if (t) { goto L_002DCE18; } }
    c.budget -= 1;
L_002DCE10:
    set32(c.r[14], 0u + 4u);
    c.budget -= 2;
L_002DCE18:
    set32(c.r[14], c.r[14].w[0] << 2);
    set32(c.r[14], c.r[3].w[0] + c.r[14].w[0]);
    set32(c.r[15], ld32((c.r[14].w[0])));
    c.budget -= 4;
L_002DCE28:
    c.r[14].sd[0] = static_cast<std::int16_t>(ld16((c.r[15].w[0])));
    c.r[24].sd[0] = static_cast<std::int16_t>(ld16((c.r[15].w[0] + 2u)));
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.r[1].d[0] = c.r[13].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[15], c.r[15].w[0] + 4u);  if (t) { goto L_002DCE50; } }
    c.r[1].d[0] = c.r[11].sd[0] < c.r[14].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DCE28u | kUnwind; return; } goto L_002DCE28; } }
    c.budget -= 1;
L_002DCE50:
    set32(c.r[8], ld32((c.r[8].w[0] + 12u)));
    set32(c.r[15], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == 0ull; c.r[14].d[0] = 0ull + 0ull;  if (t) { goto L_002DCE78; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 8656u)));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0] + 8656u)));
    c.budget -= 4;
    { const bool t = c.r[11].d[0] != c.r[8].d[0];  if (t) { goto L_002DCE78; } }
    set32(c.r[14], 0u + 300u);
    c.budget -= 2;
L_002DCE78:
    c.r[8].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[8].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[13].d[0] = 0ull + 0ull;  if (t) { goto L_002DCEC8; } }
    set32(c.r[11], c.r[8].w[0] << 2);
    set32(c.r[11], c.r[22].w[0] + c.r[11].w[0]);
    c.budget -= 2;
L_002DCE90:
    c.r[21].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0])));
    c.r[21].d[0] = c.r[18].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_002DCEB8; } }
    c.r[21].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0] + 2u)));
    c.r[21].d[0] = c.r[17].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_002DCEB8; } }
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.budget -= 2;
L_002DCEB8:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[21].d[0] = c.r[8].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[21].d[0] != 0ull; set32(c.r[11], c.r[11].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DCE90u | kUnwind; return; } goto L_002DCE90; } }
L_002DCEC8:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 22u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002DCED8; } }
    c.r[13].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DCED8:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != c.r[5].d[0]; c.r[1].d[0] = c.r[9].sd[0] < 10ll ? 1ull : 0ull;  if (t) { goto L_002DCEF0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DCF18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[13].d[0] = 0ull + 0ull;  if (t) { goto L_002DCF18; } }
L_002DCEF0:
    c.r[9].d[0] = ld8((c.r[12].w[0] + 8658u));
    set32(c.r[8], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[23].w[0] + c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[9].w[0])));
    c.r[1].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DCF18; } }
    c.r[13].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002DCF18:
    st8((c.r[12].w[0] + 1564u), static_cast<std::uint8_t>(c.r[13].w[0]));
    set32(c.r[8], ld32((c.r[28].w[0] - 23780u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[5].d[0];  if (t) { goto L_002DCF40; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0] + 1564u)));
    set32(c.r[8], c.r[8].w[0] << 1);
    set32(c.r[8], c.r[30].w[0] + c.r[8].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));  if (t) { goto L_002DCF54; } }
L_002DCF40:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0] + 1564u)));
    set32(c.r[9], c.r[8].w[0] << 1);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[8]);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    c.budget -= 5;
L_002DCF54:
    set32(c.r[9], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[10], c.r[16].w[0] + c.r[25].w[0]);
    set32(c.r[10], c.r[24].w[0] + c.r[10].w[0]);
    set32(c.r[10], c.r[15].w[0] + c.r[10].w[0]);
    set32(c.r[10], c.r[14].w[0] + c.r[10].w[0]);
    set32(c.r[8], c.r[8].w[0] + c.r[10].w[0]);
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    st32((c.r[19].w[0] + 28u), c.r[8].w[0]);
    set32(c.r[9], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[8], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[8], c.r[9].w[0] - c.r[8].w[0]);
    st32((c.r[19].w[0] + 36u), c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 15;
    { const bool t = c.r[8].sd[0] >= 0;  if (t) { goto L_002DCF98; } }
    st32((c.r[19].w[0] + 36u), 0u);
    c.budget -= 2;
L_002DCF98:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[8].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[12], c.r[12].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DCC38u | kUnwind; return; } goto L_002DCC38; } }
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
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
L_002DCFE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD008u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x002DD008u) [[unlikely]] return; }
L_002DD008:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DD048; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 11752u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], 0u + 20u);
    set32(c.r[4], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 14;
L_002DD048:
    st32((c.r[2].w[0] + 304u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DD060:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 308u), c.r[5].w[0]);  c.pc = t; return; }
L_002DD070:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 308u)));  c.pc = t; return; }
L_002DD080:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_002DD090:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + 11760u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002DC000u < 16384u) { entry = entries_0077[(t - 0x002DC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002DD0B0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[5], c.r[5].w[0] - 11712u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[5].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 312u), c.r[3].w[0]);  c.pc = t; return; }
L_002DD0E0:
    set32(c.r[6], ld32((c.r[4].w[0] + 308u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[7], c.r[4].w[0] + 304u);  if (t) { goto L_002DD140; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002DD110; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002DD140; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DD140; } }
    c.budget -= 1;
L_002DD110:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.f[2] = ld32((c.r[7].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[7].w[0] + 8u), c.f[1]);  if (t) { goto L_002DD140; } }
    st32((c.r[7].w[0] + 8u), c.f[0]);
    st32((c.r[7].w[0] + 4u), c.r[5].w[0]);
    c.budget -= 2;
L_002DD140:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002DD150:
    set32(c.r[7], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] << 1);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + 11696u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    c.budget -= 13;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002DD190; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002DD1AC; } }
L_002DD190:
    set32(c.r[5], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_002DD1AC:
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[6].w[0] + 1u));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[5], c.r[3].w[0] >> 1);  if (t) { goto L_002DD1C8; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002DD1E0; } }
L_002DD1C8:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_002DD1E0:
    st32((c.r[4].w[0] + 44u), c.f[0]);
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[5], c.r[3].w[0] >> 1);  if (t) { goto L_002DD200; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002DD218; } }
L_002DD200:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_002DD218:
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 36u), c.f[0]);  c.pc = t; return; }
L_002DD240:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[17], c.r[4].w[0] + 304u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD258u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002DD258u) [[unlikely]] return; }
L_002DD258:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[16], c.r[29].w[0] + 100u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 17280u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 12u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD284u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0077(c, 48u, depth + 1u); else { c.pc = 0x002DD150u; return; } if (c.pc != 0x002DD284u) [[unlikely]] return; }
L_002DD284:
    set32(c.r[5], 0u + 14u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD290u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002DD290u) [[unlikely]] return; }
L_002DD290:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 18240u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 12u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD2B8u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0077(c, 48u, depth + 1u); else { c.pc = 0x002DD150u; return; } if (c.pc != 0x002DD2B8u) [[unlikely]] return; }
L_002DD2B8:
    set32(c.r[5], 0u + 14u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD2C4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002DD2C4u) [[unlikely]] return; }
L_002DD2C4:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 19200u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 12u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD2ECu); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0077(c, 48u, depth + 1u); else { c.pc = 0x002DD150u; return; } if (c.pc != 0x002DD2ECu) [[unlikely]] return; }
L_002DD2EC:
    set32(c.r[5], 0u + 14u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD2F8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002DD2F8u) [[unlikely]] return; }
L_002DD2F8:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 16320u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 12u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD320u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0077(c, 48u, depth + 1u); else { c.pc = 0x002DD150u; return; } if (c.pc != 0x002DD320u) [[unlikely]] return; }
L_002DD320:
    set32(c.r[5], 0u + 14u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD32Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002DD32Cu) [[unlikely]] return; }
L_002DD32C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 12u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD350u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0077(c, 48u, depth + 1u); else { c.pc = 0x002DD150u; return; } if (c.pc != 0x002DD350u) [[unlikely]] return; }
L_002DD350:
    set32(c.r[5], 0u + 14u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD35Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002DD35Cu) [[unlikely]] return; }
L_002DD35C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002DD370:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 316u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_002DD380:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + 11768u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002DC000u < 16384u) { entry = entries_0077[(t - 0x002DC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002DD3A0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[6], c.r[6].w[0] - 10688u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3F00000u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 328u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 332u), c.r[3].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 314u), static_cast<std::uint16_t>(0u));  c.pc = t; return; }
L_002DD3E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 308u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_002DD5A8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 20032u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002DC000u < 16384u) { entry = entries_0077[(t - 0x002DC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002DD420:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.f[2] = ld32((c.r[16].w[0] + 12u));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 12u), c.f[1]);  if (t) { goto L_002DD5A8; } }
    st32((c.r[16].w[0] + 12u), c.f[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002DD5A8; } }
    c.budget -= 1;
L_002DD460:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.f[2] = ld32((c.r[16].w[0] + 16u));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 16u), c.f[1]);  if (t) { goto L_002DD5A8; } }
    st32((c.r[16].w[0] + 16u), c.f[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002DD5A8; } }
    c.budget -= 1;
L_002DD4A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[2] = ld32((c.r[16].w[0] + 28u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 28u), c.f[1]);  if (t) { goto L_002DD5A8; } }
    st32((c.r[16].w[0] + 28u), c.f[0]);
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002DD5A8; } }
    c.budget -= 1;
L_002DD4D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C080000u);
    c.f[2] = ld32((c.r[16].w[0] + 20u));
    c.r[3].d[0] = c.r[3].d[0] | 34953ull;
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 20u), c.f[1]);  if (t) { goto L_002DD5A8; } }
    st32((c.r[16].w[0] + 20u), c.f[0]);
    set32(c.r[2], 0u + 5u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], 0u + 360u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_002DD5A8; } }
    c.budget -= 1;
L_002DD520:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[2], 0u + 6u);  if (t) { goto L_002DD5A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002DD5A8; } }
L_002DD540:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[2] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 12u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 16u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 24u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 20u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 21;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DD5A8; } }
    st32((c.r[16].w[0] + 24u), c.f[0]);
    set32(c.r[2], 0u + 7u);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
L_002DD5A8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].sd[0] < 80ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DD5D0; } }
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_002DD5D0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD600u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x002DD600u) [[unlikely]] return; }
L_002DD600:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = c.r[4].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[3], 0u + 2u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DD640:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 11776u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 312u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD680u); set32(c.r[16], c.r[17].w[0] + 304u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002DD680u) [[unlikely]] return; }
L_002DD680:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[18], c.r[29].w[0] + 164u);
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 960u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.f[12] = ld32((c.r[16].w[0] + 12u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD6B0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0077(c, 48u, depth + 1u); else { c.pc = 0x002DD150u; return; } if (c.pc != 0x002DD6B0u) [[unlikely]] return; }
L_002DD6B0:
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD6BCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002DD6BCu) [[unlikely]] return; }
L_002DD6BC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 1920u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.f[12] = ld32((c.r[16].w[0] + 12u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD6E0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0077(c, 48u, depth + 1u); else { c.pc = 0x002DD150u; return; } if (c.pc != 0x002DD6E0u) [[unlikely]] return; }
L_002DD6E0:
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD6ECu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002DD6ECu) [[unlikely]] return; }
L_002DD6EC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    set32(c.r[5], 0u + 9u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD704u); set32(c.r[4], c.r[2].w[0] + 3840u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002DD704u) [[unlikely]] return; }
L_002DD704:
    c.r[2].d[0] = c.r[19].d[0] << 56;
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[5], 0u + 9u);
    set32(c.r[3], c.r[2].w[0] + 17u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD734u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002DD734u) [[unlikely]] return; }
L_002DD734:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    set32(c.r[5], 0u + 9u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD74Cu); set32(c.r[4], c.r[2].w[0] + 5040u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002DD74Cu) [[unlikely]] return; }
L_002DD74C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    set32(c.r[5], 0u + 9u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD764u); set32(c.r[4], c.r[2].w[0] + 6240u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002DD764u) [[unlikely]] return; }
L_002DD764:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    set32(c.r[5], 0u + 9u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD77Cu); set32(c.r[4], c.r[2].w[0] + 6480u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002DD77Cu) [[unlikely]] return; }
L_002DD77C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002DD790; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DD810; } }
L_002DD790:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    set32(c.r[5], 0u + 9u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD7A8u); set32(c.r[4], c.r[2].w[0] + 5280u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002DD7A8u) [[unlikely]] return; }
L_002DD7A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43430000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x431B0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD7C4u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DD7C4u) [[unlikely]] return; }
L_002DD7C4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    set32(c.r[5], 0u + 9u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD7DCu); set32(c.r[4], c.r[2].w[0] + 5520u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002DD7DCu) [[unlikely]] return; }
L_002DD7DC:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1500000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD7F0u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DD7F0u) [[unlikely]] return; }
L_002DD7F0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    set32(c.r[5], 0u + 9u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD808u); set32(c.r[4], c.r[2].w[0] + 6000u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002DD808u) [[unlikely]] return; }
L_002DD808:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DD8F8; } }
L_002DD810:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_002DD828; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DD8C8; } }
    c.budget -= 1;
L_002DD828:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43180000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x431B0000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD844u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DD844u) [[unlikely]] return; }
L_002DD844:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    set32(c.r[5], 0u + 9u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD85Cu); set32(c.r[4], c.r[2].w[0] + 5520u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002DD85Cu) [[unlikely]] return; }
L_002DD85C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1880000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD878u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DD878u) [[unlikely]] return; }
L_002DD878:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    set32(c.r[5], 0u + 9u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD890u); set32(c.r[4], c.r[2].w[0] + 5760u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002DD890u) [[unlikely]] return; }
L_002DD890:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42860000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD8A4u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DD8A4u) [[unlikely]] return; }
L_002DD8A4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    set32(c.r[5], 0u + 9u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD8BCu); set32(c.r[4], c.r[2].w[0] + 6000u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002DD8BCu) [[unlikely]] return; }
L_002DD8BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DD8F8; } }
    c.budget -= 1;
L_002DD8C8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    set32(c.r[5], 0u + 9u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD8E0u); set32(c.r[4], c.r[2].w[0] + 5280u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002DD8E0u) [[unlikely]] return; }
L_002DD8E0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    set32(c.r[5], 0u + 9u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD8F8u); set32(c.r[4], c.r[2].w[0] + 5520u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002DD8F8u) [[unlikely]] return; }
L_002DD8F8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002DDD08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD910u);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002DD910u) [[unlikely]] return; }
L_002DD910:
    c.f[13] = ld32((c.r[16].w[0] + 28u));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD920u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DD920u) [[unlikely]] return; }
L_002DD920:
    c.r[21].d[0] = 0ull + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_002DD930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD938u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002DD938u) [[unlikely]] return; }
L_002DD938:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002DD950; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DD970; } }
L_002DD950:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD964u); set32(c.r[6], c.r[2].w[0] + c.r[20].w[0]);  if (depth < kMaxDepth) unit_0077(c, 125u, depth + 1u); else { c.pc = 0x002DDD30u; return; } if (c.pc != 0x002DD964u) [[unlikely]] return; }
L_002DD964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DD988; } }
    c.budget -= 1;
L_002DD970:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD984u); set32(c.r[6], c.r[2].w[0] + c.r[19].w[0]);  if (depth < kMaxDepth) unit_0077(c, 210u, depth + 1u); else { c.pc = 0x002DE510u; return; } if (c.pc != 0x002DD984u) [[unlikely]] return; }
L_002DD984:
    c.budget -= 1;
L_002DD988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD990u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002DD990u) [[unlikely]] return; }
L_002DD990:
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + 48u);
    c.r[2].d[0] = c.r[21].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 96u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DD930u | kUnwind; return; } goto L_002DD930; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD9ACu);  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002DD9ACu) [[unlikely]] return; }
L_002DD9AC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002DD9C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DDB08; } }
L_002DD9C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.f[12] = ld32((c.r[16].w[0] + 20u));
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DD9E4; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_002DD9E4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 10560u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDA04u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0077(c, 48u, depth + 1u); else { c.pc = 0x002DD150u; return; } if (c.pc != 0x002DDA04u) [[unlikely]] return; }
L_002DDA04:
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDA10u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002DDA10u) [[unlikely]] return; }
L_002DDA10:
    c.f[12] = ld32((c.r[16].w[0] + 20u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DDA34; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_002DDA34:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 12480u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDA54u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0077(c, 48u, depth + 1u); else { c.pc = 0x002DD150u; return; } if (c.pc != 0x002DDA54u) [[unlikely]] return; }
L_002DDA54:
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDA60u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002DDA60u) [[unlikely]] return; }
L_002DDA60:
    c.f[12] = ld32((c.r[16].w[0] + 20u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EB30000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DDA84; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_002DDA84:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 13440u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDAA4u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_0077(c, 48u, depth + 1u); else { c.pc = 0x002DD150u; return; } if (c.pc != 0x002DDAA4u) [[unlikely]] return; }
L_002DDAA4:
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDAB0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002DDAB0u) [[unlikely]] return; }
L_002DDAB0:
    c.f[12] = ld32((c.r[16].w[0] + 20u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DDAD0; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_002DDAD0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 14400u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDAF0u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0077(c, 48u, depth + 1u); else { c.pc = 0x002DD150u; return; } if (c.pc != 0x002DDAF0u) [[unlikely]] return; }
L_002DDAF0:
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDAFCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002DDAFCu) [[unlikely]] return; }
L_002DDAFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DDD08; } }
    c.budget -= 1;
L_002DDB08:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_002DDB20; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DDC18; } }
    c.budget -= 1;
L_002DDB20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.f[12] = ld32((c.r[16].w[0] + 20u));
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DDB44; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_002DDB44:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 11520u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDB64u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0077(c, 48u, depth + 1u); else { c.pc = 0x002DD150u; return; } if (c.pc != 0x002DDB64u) [[unlikely]] return; }
L_002DDB64:
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDB70u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002DDB70u) [[unlikely]] return; }
L_002DDB70:
    c.f[12] = ld32((c.r[16].w[0] + 20u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DDB94; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_002DDB94:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 13440u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDBB4u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_0077(c, 48u, depth + 1u); else { c.pc = 0x002DD150u; return; } if (c.pc != 0x002DDBB4u) [[unlikely]] return; }
L_002DDBB4:
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDBC0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002DDBC0u) [[unlikely]] return; }
L_002DDBC0:
    c.f[12] = ld32((c.r[16].w[0] + 20u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DDBE0; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_002DDBE0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 14400u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDC00u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0077(c, 48u, depth + 1u); else { c.pc = 0x002DD150u; return; } if (c.pc != 0x002DDC00u) [[unlikely]] return; }
L_002DDC00:
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDC0Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002DDC0Cu) [[unlikely]] return; }
L_002DDC0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DDD08; } }
    c.budget -= 1;
L_002DDC18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.f[12] = ld32((c.r[16].w[0] + 20u));
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DDC3C; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_002DDC3C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 11520u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDC5Cu); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0077(c, 48u, depth + 1u); else { c.pc = 0x002DD150u; return; } if (c.pc != 0x002DDC5Cu) [[unlikely]] return; }
L_002DDC5C:
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDC68u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002DDC68u) [[unlikely]] return; }
L_002DDC68:
    c.f[12] = ld32((c.r[16].w[0] + 20u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DDC8C; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_002DDC8C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 12480u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDCACu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0077(c, 48u, depth + 1u); else { c.pc = 0x002DD150u; return; } if (c.pc != 0x002DDCACu) [[unlikely]] return; }
L_002DDCAC:
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDCB8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002DDCB8u) [[unlikely]] return; }
L_002DDCB8:
    c.f[12] = ld32((c.r[16].w[0] + 20u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DDCD8; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_002DDCD8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 14400u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDCF8u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0077(c, 48u, depth + 1u); else { c.pc = 0x002DD150u; return; } if (c.pc != 0x002DDCF8u) [[unlikely]] return; }
L_002DDCF8:
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDD04u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002DDD04u) [[unlikely]] return; }
L_002DDD04:
    c.budget -= 1;
L_002DDD08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_002DDD30:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[19].w[0] + 304u);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 304u)));
    set32(c.r[3], c.r[16].w[0] + 28u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[5], 0u + 9u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    c.f[12] = ld32((c.r[19].w[0] + 328u));
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDD88u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002DDD88u) [[unlikely]] return; }
L_002DDD88:
    set32(c.r[2], 0u - 77u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    c.f[0] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDDA8u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DDDA8u) [[unlikely]] return; }
L_002DDDA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDDB0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002DDDB0u) [[unlikely]] return; }
L_002DDDB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42CA0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDDD0u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DDDD0u) [[unlikely]] return; }
L_002DDDD0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    set32(c.r[5], 0u + 9u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDDE8u); set32(c.r[4], c.r[2].w[0] + 7680u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002DDDE8u) [[unlikely]] return; }
L_002DDDE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDDF0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002DDDF0u) [[unlikely]] return; }
L_002DDDF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDDF8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002DDDF8u) [[unlikely]] return; }
L_002DDDF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC38C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42940000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDE14u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DDE14u) [[unlikely]] return; }
L_002DDE14:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    set32(c.r[5], 0u + 9u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], c.r[3].w[0] + 33u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDE40u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002DDE40u) [[unlikely]] return; }
L_002DDE40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDE48u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002DDE48u) [[unlikely]] return; }
L_002DDE48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDE50u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002DDE50u) [[unlikely]] return; }
L_002DDE50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3690000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C60000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDE6Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DDE6Cu) [[unlikely]] return; }
L_002DDE6C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDE7Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 346u, depth + 1u); else { c.pc = 0x002DF220u; return; } if (c.pc != 0x002DDE7Cu) [[unlikely]] return; }
L_002DDE7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDE84u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002DDE84u) [[unlikely]] return; }
L_002DDE84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDE8Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002DDE8Cu) [[unlikely]] return; }
L_002DDE8C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3690000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42AC0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDEA8u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DDEA8u) [[unlikely]] return; }
L_002DDEA8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDEB8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 318u, depth + 1u); else { c.pc = 0x002DEF40u; return; } if (c.pc != 0x002DDEB8u) [[unlikely]] return; }
L_002DDEB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDEC0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002DDEC0u) [[unlikely]] return; }
L_002DDEC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDEC8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002DDEC8u) [[unlikely]] return; }
L_002DDEC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC33E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42640000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDEE4u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DDEE4u) [[unlikely]] return; }
L_002DDEE4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDEFCu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002DDEFCu) [[unlikely]] return; }
L_002DDEFC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 25u)));
    set32(c.r[6], 0u + 9u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 27u)));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDF24u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_007A(c, 106u, depth + 1u); else { c.pc = 0x002E8E30u; return; } if (c.pc != 0x002DDF24u) [[unlikely]] return; }
L_002DDF24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDF2Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002DDF2Cu) [[unlikely]] return; }
L_002DDF2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDF34u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002DDF34u) [[unlikely]] return; }
L_002DDF34:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3220000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x424C0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDF50u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DDF50u) [[unlikely]] return; }
L_002DDF50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDF68u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002DDF68u) [[unlikely]] return; }
L_002DDF68:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 26u)));
    set32(c.r[6], 0u + 9u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDF94u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 106u, depth + 1u); else { c.pc = 0x002E8E30u; return; } if (c.pc != 0x002DDF94u) [[unlikely]] return; }
L_002DDF94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDF9Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002DDF9Cu) [[unlikely]] return; }
L_002DDF9C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDFA8u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_007A(c, 105u, depth + 1u); else { c.pc = 0x002E8E20u; return; } if (c.pc != 0x002DDFA8u) [[unlikely]] return; }
L_002DDFA8:
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DDFE0; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_002DDFFC; } }
L_002DDFE0:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[20].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_002DDFFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE004u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0044(c, 354u, depth + 1u); else { c.pc = 0x00213170u; return; } if (c.pc != 0x002DE004u) [[unlikely]] return; }
L_002DE004:
    c.r[3].d[0] = c.r[20].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE01Cu); c.r[4].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0044(c, 349u, depth + 1u); else { c.pc = 0x002130B0u; return; } if (c.pc != 0x002DE01Cu) [[unlikely]] return; }
L_002DE01C:
    set32(c.r[2], 0u + 77u);
    set32(c.r[4], 0u + 182u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[6].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    set32(c.r[2], c.r[2].w[0] + 126u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE054u); set32(c.r[7], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x002DE054u) [[unlikely]] return; }
L_002DE054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE05Cu); set32(c.r[4], 0u - 1u);  if (depth < kMaxDepth) unit_0044(c, 349u, depth + 1u); else { c.pc = 0x002130B0u; return; } if (c.pc != 0x002DE05Cu) [[unlikely]] return; }
L_002DE05C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE064u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 354u, depth + 1u); else { c.pc = 0x00213170u; return; } if (c.pc != 0x002DE064u) [[unlikely]] return; }
L_002DE064:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002DE078; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DE100; } }
L_002DE078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE080u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002DE080u) [[unlikely]] return; }
L_002DE080:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42AE0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x431C0000u);
    c.f[20] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE09Cu); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DE09Cu) [[unlikely]] return; }
L_002DE09C:
    set32(c.r[5], ld32((c.r[18].w[0] + 32u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE0B0u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0077(c, 349u, depth + 1u); else { c.pc = 0x002DF2E0u; return; } if (c.pc != 0x002DE0B0u) [[unlikely]] return; }
L_002DE0B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE0B8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002DE0B8u) [[unlikely]] return; }
L_002DE0B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE0C0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002DE0C0u) [[unlikely]] return; }
L_002DE0C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42AE0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE0DCu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DE0DCu) [[unlikely]] return; }
L_002DE0DC:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 38u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE0F0u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0077(c, 349u, depth + 1u); else { c.pc = 0x002DF2E0u; return; } if (c.pc != 0x002DE0F0u) [[unlikely]] return; }
L_002DE0F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE0F8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002DE0F8u) [[unlikely]] return; }
L_002DE0F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DE220; } }
L_002DE100:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_002DE118; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DE1A0; } }
    c.budget -= 1;
L_002DE118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE120u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002DE120u) [[unlikely]] return; }
L_002DE120:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42AE0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42FC0000u);
    c.f[20] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE13Cu); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DE13Cu) [[unlikely]] return; }
L_002DE13C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 36u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE150u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0077(c, 349u, depth + 1u); else { c.pc = 0x002DF2E0u; return; } if (c.pc != 0x002DE150u) [[unlikely]] return; }
L_002DE150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE158u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002DE158u) [[unlikely]] return; }
L_002DE158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE160u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002DE160u) [[unlikely]] return; }
L_002DE160:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42AE0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE17Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DE17Cu) [[unlikely]] return; }
L_002DE17C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 38u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE190u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0077(c, 349u, depth + 1u); else { c.pc = 0x002DF2E0u; return; } if (c.pc != 0x002DE190u) [[unlikely]] return; }
L_002DE190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE198u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002DE198u) [[unlikely]] return; }
L_002DE198:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DE220; } }
L_002DE1A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE1A8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002DE1A8u) [[unlikely]] return; }
L_002DE1A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42AE0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43450000u);
    c.f[20] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE1C4u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DE1C4u) [[unlikely]] return; }
L_002DE1C4:
    set32(c.r[5], ld32((c.r[18].w[0] + 32u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE1D8u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0077(c, 349u, depth + 1u); else { c.pc = 0x002DF2E0u; return; } if (c.pc != 0x002DE1D8u) [[unlikely]] return; }
L_002DE1D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE1E0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002DE1E0u) [[unlikely]] return; }
L_002DE1E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE1E8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002DE1E8u) [[unlikely]] return; }
L_002DE1E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42AE0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE204u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DE204u) [[unlikely]] return; }
L_002DE204:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 38u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE218u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0077(c, 349u, depth + 1u); else { c.pc = 0x002DF2E0u; return; } if (c.pc != 0x002DE218u) [[unlikely]] return; }
L_002DE218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE220u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002DE220u) [[unlikely]] return; }
L_002DE220:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_002DE270; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002DE270; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE240u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002DE240u) [[unlikely]] return; }
L_002DE240:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43720000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE254u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DE254u) [[unlikely]] return; }
L_002DE254:
    set32(c.r[5], ld32((c.r[18].w[0] + 44u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE264u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 359u, depth + 1u); else { c.pc = 0x002DF470u; return; } if (c.pc != 0x002DE264u) [[unlikely]] return; }
L_002DE264:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE26Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002DE26Cu) [[unlikely]] return; }
L_002DE26C:
    c.budget -= 1;
L_002DE270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE278u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002DE278u) [[unlikely]] return; }
L_002DE278:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002DE290; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DE308; } }
    c.budget -= 1;
L_002DE290:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 40u)));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DE2B0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 42u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DE2D0; } }
    c.budget -= 1;
L_002DE2B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x438F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE2C8u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DE2C8u) [[unlikely]] return; }
L_002DE2C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DE2E8; } }
L_002DE2D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43930000u);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE2E8u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DE2E8u) [[unlikely]] return; }
L_002DE2E8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 40u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 42u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE2FCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 363u, depth + 1u); else { c.pc = 0x002DF530u; return; } if (c.pc != 0x002DE2FCu) [[unlikely]] return; }
L_002DE2FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DE410; } }
    c.budget -= 1;
L_002DE308:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_002DE320; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DE388; } }
    c.budget -= 1;
L_002DE320:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 40u)));
    c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x438F0000u);  if (t) { goto L_002DE350; } }
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE344u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DE344u) [[unlikely]] return; }
L_002DE344:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DE368; } }
    c.budget -= 1;
L_002DE350:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43930000u);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE368u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DE368u) [[unlikely]] return; }
L_002DE368:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 40u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE37Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0077(c, 349u, depth + 1u); else { c.pc = 0x002DF2E0u; return; } if (c.pc != 0x002DE37Cu) [[unlikely]] return; }
L_002DE37C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DE410; } }
    c.budget -= 1;
L_002DE388:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 40u)));
    c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DE3B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43920000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE3ACu); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DE3ACu) [[unlikely]] return; }
L_002DE3AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DE3F8; } }
    c.budget -= 1;
L_002DE3B8:
    c.r[1].d[0] = c.r[2].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DE3E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43950000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE3D8u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DE3D8u) [[unlikely]] return; }
L_002DE3D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DE3F8; } }
L_002DE3E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43980000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE3F4u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DE3F4u) [[unlikely]] return; }
L_002DE3F4:
    c.budget -= 1;
L_002DE3F8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 40u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE40Cu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0077(c, 349u, depth + 1u); else { c.pc = 0x002DF2E0u; return; } if (c.pc != 0x002DE40Cu) [[unlikely]] return; }
L_002DE40C:
    c.budget -= 1;
L_002DE410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE418u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002DE418u) [[unlikely]] return; }
L_002DE418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE420u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002DE420u) [[unlikely]] return; }
L_002DE420:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE434u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DE434u) [[unlikely]] return; }
L_002DE434:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[16], c.r[29].w[0] + 164u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 2880u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE45Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0077(c, 48u, depth + 1u); else { c.pc = 0x002DD150u; return; } if (c.pc != 0x002DE45Cu) [[unlikely]] return; }
L_002DE45C:
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE468u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002DE468u) [[unlikely]] return; }
L_002DE468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE470u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002DE470u) [[unlikely]] return; }
L_002DE470:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002DE4E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE484u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002DE484u) [[unlikely]] return; }
L_002DE484:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE498u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DE498u) [[unlikely]] return; }
L_002DE498:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 15360u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8u)));
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE4D0u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0077(c, 48u, depth + 1u); else { c.pc = 0x002DD150u; return; } if (c.pc != 0x002DE4D0u) [[unlikely]] return; }
L_002DE4D0:
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE4DCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002DE4DCu) [[unlikely]] return; }
L_002DE4DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE4E4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002DE4E4u) [[unlikely]] return; }
L_002DE4E4:
    c.budget -= 1;
L_002DE4E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_002DE510:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[19].w[0] + 304u);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 304u)));
    set32(c.r[3], c.r[16].w[0] + 28u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[5], 0u + 9u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    c.f[12] = ld32((c.r[19].w[0] + 328u));
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE568u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002DE568u) [[unlikely]] return; }
L_002DE568:
    set32(c.r[2], 0u - 77u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    c.f[0] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE588u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DE588u) [[unlikely]] return; }
L_002DE588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE590u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002DE590u) [[unlikely]] return; }
L_002DE590:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42CA0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE5B0u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DE5B0u) [[unlikely]] return; }
L_002DE5B0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    set32(c.r[5], 0u + 9u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE5C8u); set32(c.r[4], c.r[2].w[0] + 7680u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002DE5C8u) [[unlikely]] return; }
L_002DE5C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE5D0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002DE5D0u) [[unlikely]] return; }
L_002DE5D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE5D8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002DE5D8u) [[unlikely]] return; }
L_002DE5D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC38C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42940000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE5F4u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DE5F4u) [[unlikely]] return; }
L_002DE5F4:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8u)));
    set32(c.r[5], 0u + 9u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], c.r[3].w[0] + 33u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE620u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002DE620u) [[unlikely]] return; }
L_002DE620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE628u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002DE628u) [[unlikely]] return; }
L_002DE628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE630u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002DE630u) [[unlikely]] return; }
L_002DE630:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42E60000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE64Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DE64Cu) [[unlikely]] return; }
L_002DE64C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE65Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 346u, depth + 1u); else { c.pc = 0x002DF220u; return; } if (c.pc != 0x002DE65Cu) [[unlikely]] return; }
L_002DE65C:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1E80000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE670u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DE670u) [[unlikely]] return; }
L_002DE670:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 36u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE680u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 346u, depth + 1u); else { c.pc = 0x002DF220u; return; } if (c.pc != 0x002DE680u) [[unlikely]] return; }
L_002DE680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE688u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002DE688u) [[unlikely]] return; }
L_002DE688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE690u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002DE690u) [[unlikely]] return; }
L_002DE690:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3660000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x428A0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE6ACu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DE6ACu) [[unlikely]] return; }
L_002DE6AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE6C4u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002DE6C4u) [[unlikely]] return; }
L_002DE6C4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 31u)));
    set32(c.r[6], 0u + 9u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 33u)));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE6ECu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_007A(c, 106u, depth + 1u); else { c.pc = 0x002E8E30u; return; } if (c.pc != 0x002DE6ECu) [[unlikely]] return; }
L_002DE6EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE6F4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002DE6F4u) [[unlikely]] return; }
L_002DE6F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE6FCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002DE6FCu) [[unlikely]] return; }
L_002DE6FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC32E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42600000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE718u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DE718u) [[unlikely]] return; }
L_002DE718:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE730u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002DE730u) [[unlikely]] return; }
L_002DE730:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 35u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 58u)));
    set32(c.r[6], 0u + 9u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE758u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_007A(c, 106u, depth + 1u); else { c.pc = 0x002E8E30u; return; } if (c.pc != 0x002DE758u) [[unlikely]] return; }
L_002DE758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE760u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002DE760u) [[unlikely]] return; }
L_002DE760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE768u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002DE768u) [[unlikely]] return; }
L_002DE768:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE784u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DE784u) [[unlikely]] return; }
L_002DE784:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE79Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002DE79Cu) [[unlikely]] return; }
L_002DE79C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 32u)));
    set32(c.r[6], 0u + 9u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 34u)));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE7C4u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_007A(c, 106u, depth + 1u); else { c.pc = 0x002E8E30u; return; } if (c.pc != 0x002DE7C4u) [[unlikely]] return; }
L_002DE7C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE7CCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002DE7CCu) [[unlikely]] return; }
L_002DE7CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE7D4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002DE7D4u) [[unlikely]] return; }
L_002DE7D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x424C0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE7F0u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DE7F0u) [[unlikely]] return; }
L_002DE7F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE808u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002DE808u) [[unlikely]] return; }
L_002DE808:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 35u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 59u)));
    set32(c.r[6], 0u + 9u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 61u)));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE834u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 106u, depth + 1u); else { c.pc = 0x002E8E30u; return; } if (c.pc != 0x002DE834u) [[unlikely]] return; }
L_002DE834:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE83Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002DE83Cu) [[unlikely]] return; }
L_002DE83C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE848u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_007A(c, 105u, depth + 1u); else { c.pc = 0x002E8E20u; return; } if (c.pc != 0x002DE848u) [[unlikely]] return; }
L_002DE848:
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DE880; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_002DE89C; } }
L_002DE880:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[20].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_002DE89C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE8A4u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0044(c, 354u, depth + 1u); else { c.pc = 0x00213170u; return; } if (c.pc != 0x002DE8A4u) [[unlikely]] return; }
L_002DE8A4:
    c.r[3].d[0] = c.r[20].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE8BCu); c.r[4].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0044(c, 349u, depth + 1u); else { c.pc = 0x002130B0u; return; } if (c.pc != 0x002DE8BCu) [[unlikely]] return; }
L_002DE8BC:
    set32(c.r[2], 0u + 77u);
    set32(c.r[4], 0u + 182u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[6].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], c.r[16].w[0] + 112u);
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE900u); set32(c.r[7], c.r[18].w[0] + 10u);  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x002DE900u) [[unlikely]] return; }
L_002DE900:
    set32(c.r[2], c.r[16].w[0] + 138u);
    set32(c.r[4], 0u + 182u);
    c.f[2] = c.r[2].w[0];
    c.r[6].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE93Cu); set32(c.r[7], c.r[18].w[0] + 37u);  if (depth < kMaxDepth) unit_0044(c, 355u, depth + 1u); else { c.pc = 0x00213180u; return; } if (c.pc != 0x002DE93Cu) [[unlikely]] return; }
L_002DE93C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE944u); set32(c.r[4], 0u - 1u);  if (depth < kMaxDepth) unit_0044(c, 349u, depth + 1u); else { c.pc = 0x002130B0u; return; } if (c.pc != 0x002DE944u) [[unlikely]] return; }
L_002DE944:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE94Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 354u, depth + 1u); else { c.pc = 0x00213170u; return; } if (c.pc != 0x002DE94Cu) [[unlikely]] return; }
L_002DE94C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002DE960; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DEA38; } }
L_002DE960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE968u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002DE968u) [[unlikely]] return; }
L_002DE968:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x431C0000u);
    c.f[20] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE984u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DE984u) [[unlikely]] return; }
L_002DE984:
    set32(c.r[5], ld32((c.r[18].w[0] + 64u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE998u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0077(c, 349u, depth + 1u); else { c.pc = 0x002DF2E0u; return; } if (c.pc != 0x002DE998u) [[unlikely]] return; }
L_002DE998:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1E80000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE9ACu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DE9ACu) [[unlikely]] return; }
L_002DE9AC:
    set32(c.r[5], ld32((c.r[18].w[0] + 80u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE9C0u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0077(c, 349u, depth + 1u); else { c.pc = 0x002DF2E0u; return; } if (c.pc != 0x002DE9C0u) [[unlikely]] return; }
L_002DE9C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE9C8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002DE9C8u) [[unlikely]] return; }
L_002DE9C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE9D0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002DE9D0u) [[unlikely]] return; }
L_002DE9D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE9ECu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DE9ECu) [[unlikely]] return; }
L_002DE9EC:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 70u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEA00u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0077(c, 349u, depth + 1u); else { c.pc = 0x002DF2E0u; return; } if (c.pc != 0x002DEA00u) [[unlikely]] return; }
L_002DEA00:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1E80000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEA14u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DEA14u) [[unlikely]] return; }
L_002DEA14:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 86u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEA28u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0077(c, 349u, depth + 1u); else { c.pc = 0x002DF2E0u; return; } if (c.pc != 0x002DEA28u) [[unlikely]] return; }
L_002DEA28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEA30u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002DEA30u) [[unlikely]] return; }
L_002DEA30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DEBF8; } }
L_002DEA38:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_002DEA50; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DEB28; } }
    c.budget -= 1;
L_002DEA50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEA58u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002DEA58u) [[unlikely]] return; }
L_002DEA58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42FC0000u);
    c.f[20] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEA74u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DEA74u) [[unlikely]] return; }
L_002DEA74:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 68u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEA88u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0077(c, 349u, depth + 1u); else { c.pc = 0x002DF2E0u; return; } if (c.pc != 0x002DEA88u) [[unlikely]] return; }
L_002DEA88:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1E80000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEA9Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DEA9Cu) [[unlikely]] return; }
L_002DEA9C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 84u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEAB0u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0077(c, 349u, depth + 1u); else { c.pc = 0x002DF2E0u; return; } if (c.pc != 0x002DEAB0u) [[unlikely]] return; }
L_002DEAB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEAB8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002DEAB8u) [[unlikely]] return; }
L_002DEAB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEAC0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002DEAC0u) [[unlikely]] return; }
L_002DEAC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEADCu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DEADCu) [[unlikely]] return; }
L_002DEADC:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 70u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEAF0u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0077(c, 349u, depth + 1u); else { c.pc = 0x002DF2E0u; return; } if (c.pc != 0x002DEAF0u) [[unlikely]] return; }
L_002DEAF0:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1E80000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEB04u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DEB04u) [[unlikely]] return; }
L_002DEB04:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 86u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEB18u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0077(c, 349u, depth + 1u); else { c.pc = 0x002DF2E0u; return; } if (c.pc != 0x002DEB18u) [[unlikely]] return; }
L_002DEB18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEB20u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002DEB20u) [[unlikely]] return; }
L_002DEB20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DEBF8; } }
L_002DEB28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEB30u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002DEB30u) [[unlikely]] return; }
L_002DEB30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43410000u);
    c.f[20] = c.r[3].w[0];
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEB4Cu); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DEB4Cu) [[unlikely]] return; }
L_002DEB4C:
    set32(c.r[5], ld32((c.r[18].w[0] + 64u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEB60u); set32(c.r[6], 0u + 9u);  if (depth < kMaxDepth) unit_0077(c, 349u, depth + 1u); else { c.pc = 0x002DF2E0u; return; } if (c.pc != 0x002DEB60u) [[unlikely]] return; }
L_002DEB60:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1E80000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEB74u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DEB74u) [[unlikely]] return; }
L_002DEB74:
    set32(c.r[5], ld32((c.r[18].w[0] + 80u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEB88u); set32(c.r[6], 0u + 9u);  if (depth < kMaxDepth) unit_0077(c, 349u, depth + 1u); else { c.pc = 0x002DF2E0u; return; } if (c.pc != 0x002DEB88u) [[unlikely]] return; }
L_002DEB88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEB90u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002DEB90u) [[unlikely]] return; }
L_002DEB90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEB98u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002DEB98u) [[unlikely]] return; }
L_002DEB98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEBB4u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DEBB4u) [[unlikely]] return; }
L_002DEBB4:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 70u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEBC8u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0077(c, 349u, depth + 1u); else { c.pc = 0x002DF2E0u; return; } if (c.pc != 0x002DEBC8u) [[unlikely]] return; }
L_002DEBC8:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1E80000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEBDCu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DEBDCu) [[unlikely]] return; }
L_002DEBDC:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 86u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEBF0u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0077(c, 349u, depth + 1u); else { c.pc = 0x002DF2E0u; return; } if (c.pc != 0x002DEBF0u) [[unlikely]] return; }
L_002DEBF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEBF8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002DEBF8u) [[unlikely]] return; }
L_002DEBF8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_002DEC68; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002DEC68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEC18u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002DEC18u) [[unlikely]] return; }
L_002DEC18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43720000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEC2Cu); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DEC2Cu) [[unlikely]] return; }
L_002DEC2C:
    set32(c.r[5], ld32((c.r[18].w[0] + 76u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEC3Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 359u, depth + 1u); else { c.pc = 0x002DF470u; return; } if (c.pc != 0x002DEC3Cu) [[unlikely]] return; }
L_002DEC3C:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1E80000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEC50u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DEC50u) [[unlikely]] return; }
L_002DEC50:
    set32(c.r[5], ld32((c.r[18].w[0] + 92u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEC60u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 359u, depth + 1u); else { c.pc = 0x002DF470u; return; } if (c.pc != 0x002DEC60u) [[unlikely]] return; }
L_002DEC60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEC68u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002DEC68u) [[unlikely]] return; }
L_002DEC68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEC70u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002DEC70u) [[unlikely]] return; }
L_002DEC70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002DEC88; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DED10; } }
    c.budget -= 1;
L_002DEC88:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 72u)));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DECA8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 74u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DECD0; } }
    c.budget -= 1;
L_002DECA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x438F0000u);
    c.r[3].d[0] = c.r[2].d[0] | 32768ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42AE0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DECC8u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DECC8u) [[unlikely]] return; }
L_002DECC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DECF0; } }
L_002DECD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43930000u);
    c.r[3].d[0] = c.r[2].d[0] | 16384ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42AE0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DECF0u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DECF0u) [[unlikely]] return; }
L_002DECF0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 72u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 74u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DED04u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 363u, depth + 1u); else { c.pc = 0x002DF530u; return; } if (c.pc != 0x002DED04u) [[unlikely]] return; }
L_002DED04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DEE40; } }
    c.budget -= 1;
L_002DED10:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_002DED28; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DEDA0; } }
    c.budget -= 1;
L_002DED28:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 72u)));
    c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x438F0000u);  if (t) { goto L_002DED60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42AE0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DED54u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DED54u) [[unlikely]] return; }
L_002DED54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DED80; } }
    c.budget -= 1;
L_002DED60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43930000u);
    c.r[3].d[0] = c.r[2].d[0] | 16384ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42AE0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DED80u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DED80u) [[unlikely]] return; }
L_002DED80:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 72u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DED94u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0077(c, 349u, depth + 1u); else { c.pc = 0x002DF2E0u; return; } if (c.pc != 0x002DED94u) [[unlikely]] return; }
L_002DED94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DEE40; } }
    c.budget -= 1;
L_002DEDA0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 72u)));
    c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x43900000u);  if (t) { goto L_002DEDD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42AE0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEDCCu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DEDCCu) [[unlikely]] return; }
L_002DEDCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DEE28; } }
    c.budget -= 1;
L_002DEDD8:
    c.r[1].d[0] = c.r[2].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x43930000u);  if (t) { goto L_002DEE08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42AE0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEE00u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DEE00u) [[unlikely]] return; }
L_002DEE00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DEE28; } }
L_002DEE08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.r[3].d[0] = c.r[2].d[0] | 32768ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42AE0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEE28u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DEE28u) [[unlikely]] return; }
L_002DEE28:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 72u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEE3Cu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0077(c, 349u, depth + 1u); else { c.pc = 0x002DF2E0u; return; } if (c.pc != 0x002DEE3Cu) [[unlikely]] return; }
L_002DEE3C:
    c.budget -= 1;
L_002DEE40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEE48u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002DEE48u) [[unlikely]] return; }
L_002DEE48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEE50u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002DEE50u) [[unlikely]] return; }
L_002DEE50:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEE64u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DEE64u) [[unlikely]] return; }
L_002DEE64:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[16], c.r[29].w[0] + 164u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 2880u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8u)));
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEE8Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0077(c, 48u, depth + 1u); else { c.pc = 0x002DD150u; return; } if (c.pc != 0x002DEE8Cu) [[unlikely]] return; }
L_002DEE8C:
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEE98u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002DEE98u) [[unlikely]] return; }
L_002DEE98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEEA0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002DEEA0u) [[unlikely]] return; }
L_002DEEA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002DEF18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEEB4u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002DEEB4u) [[unlikely]] return; }
L_002DEEB4:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEEC8u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DEEC8u) [[unlikely]] return; }
L_002DEEC8:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 15360u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8u)));
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEF00u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0077(c, 48u, depth + 1u); else { c.pc = 0x002DD150u; return; } if (c.pc != 0x002DEF00u) [[unlikely]] return; }
L_002DEF00:
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEF0Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002DEF0Cu) [[unlikely]] return; }
L_002DEF0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEF14u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002DEF14u) [[unlikely]] return; }
L_002DEF14:
    c.budget -= 1;
L_002DEF18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_002DEF40:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[4].w[0] + 304u);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.f[20] = c.f[12];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEF68u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002DEF68u) [[unlikely]] return; }
L_002DEF68:
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + 11793u);
    set32(c.r[16], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_002DF158; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 20000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002DC000u < 16384u) { entry = entries_0077[(t - 0x002DC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002DEFA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1300000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEFC4u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DEFC4u) [[unlikely]] return; }
L_002DEFC4:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[5], 0u + 9u);
    c.f[12] = c.f[20];
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEFDCu); set32(c.r[4], c.r[2].w[0] + 8880u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002DEFDCu) [[unlikely]] return; }
L_002DEFDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DF158; } }
    c.budget -= 1;
L_002DEFE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1300000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF004u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DF004u) [[unlikely]] return; }
L_002DF004:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[5], 0u + 9u);
    c.f[12] = c.f[20];
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF01Cu); set32(c.r[4], c.r[2].w[0] + 8880u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002DF01Cu) [[unlikely]] return; }
L_002DF01C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF030u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DF030u) [[unlikely]] return; }
L_002DF030:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[5], 0u + 9u);
    c.f[12] = c.f[20];
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF048u); set32(c.r[4], c.r[2].w[0] + 8880u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002DF048u) [[unlikely]] return; }
L_002DF048:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DF158; } }
L_002DF050:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[5], 0u + 9u);
    c.f[12] = c.f[20];
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF068u); set32(c.r[4], c.r[2].w[0] + 9120u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002DF068u) [[unlikely]] return; }
L_002DF068:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DF158; } }
L_002DF070:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1000000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF084u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DF084u) [[unlikely]] return; }
L_002DF084:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[5], 0u + 9u);
    c.f[12] = c.f[20];
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF09Cu); set32(c.r[4], c.r[2].w[0] + 9120u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002DF09Cu) [[unlikely]] return; }
L_002DF09C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF0B0u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DF0B0u) [[unlikely]] return; }
L_002DF0B0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[5], 0u + 9u);
    c.f[12] = c.f[20];
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF0C8u); set32(c.r[4], c.r[2].w[0] + 9120u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002DF0C8u) [[unlikely]] return; }
L_002DF0C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DF158; } }
L_002DF0D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1200000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF0E4u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DF0E4u) [[unlikely]] return; }
L_002DF0E4:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[5], 0u + 9u);
    c.f[12] = c.f[20];
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF0FCu); set32(c.r[4], c.r[2].w[0] + 9120u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002DF0FCu) [[unlikely]] return; }
L_002DF0FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF110u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DF110u) [[unlikely]] return; }
L_002DF110:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[5], 0u + 9u);
    c.f[12] = c.f[20];
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF128u); set32(c.r[4], c.r[2].w[0] + 9120u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002DF128u) [[unlikely]] return; }
L_002DF128:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF13Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DF13Cu) [[unlikely]] return; }
L_002DF13C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[5], 0u + 9u);
    c.f[12] = c.f[20];
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF154u); set32(c.r[4], c.r[2].w[0] + 9120u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002DF154u) [[unlikely]] return; }
L_002DF154:
    c.budget -= 1;
L_002DF158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF160u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002DF160u) [[unlikely]] return; }
L_002DF160:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[2], 0u + 8u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    set32(c.r[2], c.r[2].w[0] + 11792u);
    set32(c.r[8], c.r[2].w[0] + c.r[16].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    st32((c.r[29].w[0] + 108u), c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 11824u);
    st32((c.r[29].w[0] + 112u), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 11826u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42800000u);
    set32(c.r[4], 0u + 1u);
    c.f[14] = c.r[3].w[0];
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.f[15] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 8640u);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF1F8u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x002DF1F8u) [[unlikely]] return; }
L_002DF1F8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF208u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002DF208u) [[unlikely]] return; }
L_002DF208:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002DF220:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], 0u + 8u);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.f[0] = c.r[3].w[0];
    c.r[2].d[0] = c.r[5].d[0] << 56;
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    st32((c.r[29].w[0] + 64u), c.r[3].w[0]);
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + 11840u);
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + 11842u);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x421C0000u);
    c.f[15] = c.r[2].w[0];
    st32((c.r[29].w[0] + 52u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 304u)));
    c.f[14] = c.r[3].w[0];
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 8400u);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF2B8u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x002DF2B8u) [[unlikely]] return; }
L_002DF2B8:
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF2C8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002DF2C8u) [[unlikely]] return; }
L_002DF2C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002DF2E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.f[0] = c.r[2].w[0];
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], 0u + 8u);
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 304u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 9360u);
    c.budget -= 20;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[29].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_002DF350; } }
L_002DF330:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 1);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DF330u | kUnwind; return; } goto L_002DF330; } }
    c.budget -= 1;
L_002DF350:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DF360; } }
    set32(c.r[17], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002DF360:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF368u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002DF368u) [[unlikely]] return; }
L_002DF368:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);  if (t) { goto L_002DF3A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[12] = c.r[3].w[0];
    set32(c.r[4], 0u + 1u);
    c.f[15] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[13] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF390u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x002DF390u) [[unlikely]] return; }
L_002DF390:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF3A0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002DF3A0u) [[unlikely]] return; }
L_002DF3A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DF448; } }
L_002DF3A8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_002DF448; } }
L_002DF3B0:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[5], c.r[29].w[0] + 48u);
    mmi::div(c, 0, c.r[17].w[0], c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[15] = c.r[2].w[0];
    c.f[14] = c.r[3].w[0];
    c.f[13] = 0u;
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[4], 0u + 1u);
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[17], c.r[17].w[0] - c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF410u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x002DF410u) [[unlikely]] return; }
L_002DF410:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF420u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002DF420u) [[unlikely]] return; }
L_002DF420:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1700000u);
    c.f[13] = 0u;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.f[12] = c.r[2].w[0];
    set32(c.r[16], c.r[3].w[0] << 1);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF440u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DF440u) [[unlikely]] return; }
L_002DF440:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DF3B0u | kUnwind; return; } goto L_002DF3B0; } }
L_002DF448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF450u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002DF450u) [[unlikely]] return; }
L_002DF450:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002DF470:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 8u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 52u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 304u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 9600u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF4B4u); st32((c.r[29].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0077(c, 33u, depth + 1u); else { c.pc = 0x002DCB10u; return; } if (c.pc != 0x002DF4B4u) [[unlikely]] return; }
L_002DF4B4:
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + 11904u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + 11906u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.f[1] = c.r[6].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[15] = c.r[2].w[0];
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF508u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x002DF508u) [[unlikely]] return; }
L_002DF508:
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF518u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002DF518u) [[unlikely]] return; }
L_002DF518:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002DF530:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[4].w[0] + 304u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002DF560; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.f[12] = ld32((c.r[3].w[0] + 24u));
    set32(c.r[5], 0u + 9u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF558u); set32(c.r[4], c.r[2].w[0] + 10080u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002DF558u) [[unlikely]] return; }
L_002DF558:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DF5E0; } }
L_002DF560:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002DF5A8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002DF588; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF57Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0077(c, 349u, depth + 1u); else { c.pc = 0x002DF2E0u; return; } if (c.pc != 0x002DF57Cu) [[unlikely]] return; }
L_002DF57C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DF5E0; } }
    c.budget -= 1;
L_002DF588:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.f[12] = ld32((c.r[3].w[0] + 24u));
    set32(c.r[5], 0u + 9u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF5A0u); set32(c.r[4], c.r[2].w[0] + 9840u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002DF5A0u) [[unlikely]] return; }
L_002DF5A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DF5E0; } }
L_002DF5A8:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002DF5D8; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.f[12] = ld32((c.r[3].w[0] + 24u));
    set32(c.r[5], 0u + 9u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF5CCu); set32(c.r[4], c.r[2].w[0] + 20160u);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002DF5CCu) [[unlikely]] return; }
L_002DF5CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DF5E0; } }
    c.budget -= 1;
L_002DF5D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF5E0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0077(c, 349u, depth + 1u); else { c.pc = 0x002DF2E0u; return; } if (c.pc != 0x002DF5E0u) [[unlikely]] return; }
L_002DF5E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002DF5F0:
    st8((c.r[4].w[0] + 312u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[7], c.r[4].w[0] + 304u);
    c.r[4].d[0] = c.r[5].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002DF610; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002DF618; } }
L_002DF610:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 40u), c.r[6].w[0]);  if (t) { goto L_002DF620; } }
L_002DF618:
    st32((c.r[7].w[0] + 40u), c.r[6].w[0]);
    c.budget -= 2;
L_002DF620:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002DF630:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF658u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x002DF658u) [[unlikely]] return; }
L_002DF658:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DF698; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], c.r[4].w[0] - 2384u);
    set32(c.r[3], c.r[3].w[0] - 2288u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 24u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 14;
L_002DF698:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DF6B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + 14416u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002DC000u < 16384u) { entry = entries_0077[(t - 0x002DC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002DF6D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + 14432u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002DC000u < 16384u) { entry = entries_0077[(t - 0x002DC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002DF6F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + 14440u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002DC000u < 16384u) { entry = entries_0077[(t - 0x002DC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002DF710:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + 14448u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002DC000u < 16384u) { entry = entries_0077[(t - 0x002DC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002DF730:
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] + 1608u)));
    c.f[0] = ld32((c.r[5].w[0] + 60u));
    st32((c.r[4].w[0] + 116u), c.f[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 304u), 0u);
    st32((c.r[4].w[0] + 308u), 0u);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 8658u));
    set32(c.r[5], c.r[5].w[0] - 64u);
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 304u);  if (t) { goto L_002DF858; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] - 19968u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[5].w[0];  c.pc = t; if (t - 0x002DC000u < 16384u) { entry = entries_0077[(t - 0x002DC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002DF788:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] + 12320u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.r[5].w[0]);  if (t) { goto L_002DF868; } }
L_002DF798:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] + 12512u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.r[5].w[0]);  if (t) { goto L_002DF868; } }
L_002DF7A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] + 12672u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.r[5].w[0]);  if (t) { goto L_002DF868; } }
L_002DF7B8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] + 12752u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.r[5].w[0]);  if (t) { goto L_002DF868; } }
L_002DF7C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] + 12960u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.r[5].w[0]);  if (t) { goto L_002DF868; } }
L_002DF7D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] + 13088u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.r[5].w[0]);  if (t) { goto L_002DF868; } }
L_002DF7E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] + 13248u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.r[5].w[0]);  if (t) { goto L_002DF868; } }
L_002DF7F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] + 13440u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.r[5].w[0]);  if (t) { goto L_002DF868; } }
L_002DF808:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] + 13648u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.r[5].w[0]);  if (t) { goto L_002DF868; } }
L_002DF818:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] + 13792u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.r[5].w[0]);  if (t) { goto L_002DF868; } }
L_002DF828:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] + 14080u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.r[5].w[0]);  if (t) { goto L_002DF868; } }
L_002DF838:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] + 14208u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.r[5].w[0]);  if (t) { goto L_002DF868; } }
L_002DF848:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] + 14288u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.r[5].w[0]);  if (t) { goto L_002DF868; } }
L_002DF858:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] + 11936u);
    st32((c.r[3].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 4;
L_002DF868:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002DF880:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[17], ld32((c.r[4].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 21u)));
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], c.r[18].w[0] + 304u);  if (t) { goto L_002DF8D8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DF8D8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DF8E8; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 750u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DF8E8; } }
L_002DF8D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002DFA18; } }
L_002DF8E8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8693u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8694u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_002DF938; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002DF938; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF908u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0077(c, 370u, depth + 1u); else { c.pc = 0x002DF630u; return; } if (c.pc != 0x002DF908u) [[unlikely]] return; }
L_002DF908:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8693u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002DF928; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF91Cu); set32(c.r[5], 0u + 151u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002DF91Cu) [[unlikely]] return; }
L_002DF91C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DF938; } }
    c.budget -= 1;
L_002DF928:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF934u); set32(c.r[5], 0u + 152u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x002DF934u) [[unlikely]] return; }
L_002DF934:
    c.budget -= 1;
L_002DF938:
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[18].w[0] + 32u), c.f[3]);
    st32((c.r[18].w[0] + 36u), c.f[2]);
    st32((c.r[18].w[0] + 40u), c.f[1]);
    st32((c.r[18].w[0] + 44u), c.f[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 41u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DF990; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002DF980; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 112u), c.r[3].w[0]);  if (t) { goto L_002DF9B8; } }
L_002DF980:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FA60000u);
    c.r[3].d[0] = c.r[3].d[0] | 26214ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 112u), c.r[3].w[0]);  if (t) { goto L_002DF9B8; } }
L_002DF990:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002DF9A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 112u), c.r[3].w[0]);  if (t) { goto L_002DF9B8; } }
L_002DF9A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FA60000u);
    c.r[3].d[0] = c.r[3].d[0] | 26214ull;
    st32((c.r[18].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 4;
L_002DF9B8:
    c.f[1] = ld32((c.r[18].w[0] + 112u));
    c.f[0] = ld32((c.r[18].w[0] + 116u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 112u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] + 256u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 256u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8693u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DFA08; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002DFA08; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DFA10; } }
L_002DFA08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DFA18; } }
L_002DFA10:
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_002DFA18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002DFA30:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[18], c.r[17].w[0] + 304u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFA5Cu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002DFA5Cu) [[unlikely]] return; }
L_002DFA5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFA64u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002DFA64u) [[unlikely]] return; }
L_002DFA64:
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFA70u); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x002DFA70u) [[unlikely]] return; }
L_002DFA70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFA80u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x002DFA80u) [[unlikely]] return; }
L_002DFA80:
    c.f[12] = ld32((c.r[17].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFA94u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002DFA94u) [[unlikely]] return; }
L_002DFA94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFA9Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 179u, depth + 1u); else { c.pc = 0x00126810u; return; } if (c.pc != 0x002DFA9Cu) [[unlikely]] return; }
L_002DFA9C:
    set32(c.r[2], c.r[29].w[0] + 144u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20240u), c.r[2].w[0]);
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8661u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] + 14512u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 326u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    st32((c.r[1].w[0] + 20288u), 0u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFAE0u); st32((c.r[1].w[0] + 20260u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x002DFAE0u) [[unlikely]] return; }
L_002DFAE0:
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
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] + 14480u);
    st32((c.r[1].w[0] + 20252u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] + 14464u);
    st32((c.r[1].w[0] + 20256u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st8((c.r[1].w[0] + 20292u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 14496u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8661u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[1].w[0] + 20272u), c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 30;
L_002DFB58:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 850u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DFB80; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[19].w[0] + 1236u)));
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DFBF8; } }
L_002DFB80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFB88u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002DFB88u) [[unlikely]] return; }
L_002DFB88:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.f[13] = ld32((c.r[2].w[0] + 2036u));
    c.f[14] = ld32((c.r[2].w[0] + 2040u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFBA4u); c.f[12] = ld32((c.r[2].w[0] + 2032u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DFBA4u) [[unlikely]] return; }
L_002DFBA4:
    c.f[13] = ld32((c.r[17].w[0] + 8u));
    c.f[14] = ld32((c.r[17].w[0] + 12u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFBB4u); c.f[12] = ld32((c.r[17].w[0] + 4u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DFBB4u) [[unlikely]] return; }
L_002DFBB4:
    c.f[12] = ld32((c.r[17].w[0] + 16u));
    c.f[13] = c.f[12];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFBC4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002DFBC4u) [[unlikely]] return; }
L_002DFBC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFBCCu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x002DFBCCu) [[unlikely]] return; }
L_002DFBCC:
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFBE4u); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002DFBE4u) [[unlikely]] return; }
L_002DFBE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFBECu); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002DFBECu) [[unlikely]] return; }
L_002DFBEC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFBF8u); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x002DFBF8u) [[unlikely]] return; }
L_002DFBF8:
    set32(c.r[17], c.r[17].w[0] + 20u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DFB58u | kUnwind; return; } goto L_002DFB58; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_002DFC30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 112u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 376u), c.r[2].w[0]);
    set32(c.r[18], c.r[16].w[0] + 304u);
    set32(c.r[2], 0u + 10u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 14;
L_002DFC68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFC70u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x002DFC70u) [[unlikely]] return; }
L_002DFC70:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = c.r[17].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DFC68u | kUnwind; return; } goto L_002DFC68; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002DFCB0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 21u)));
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[4].w[0] + 304u);  if (t) { goto L_002DFCF0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DFCF0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DFD00; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 750u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DFD00; } }
L_002DFCF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002DFDA8; } }
L_002DFD00:
    c.f[3] = ld32((c.r[5].w[0] + 32u));
    c.f[2] = ld32((c.r[5].w[0] + 36u));
    c.f[1] = ld32((c.r[5].w[0] + 40u));
    c.f[0] = ld32((c.r[5].w[0] + 44u));
    st32((c.r[4].w[0] + 32u), c.f[3]);
    st32((c.r[4].w[0] + 36u), c.f[2]);
    st32((c.r[4].w[0] + 40u), c.f[1]);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DFD38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DFDA0; } }
    c.budget -= 1;
L_002DFD38:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.f[2] = ld32((c.r[4].w[0] + 112u));
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[1] = c.r[5].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[4].w[0] + 112u), c.f[1]);
    c.f[1] = ld32((c.r[6].w[0] + 72u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[6].w[0] + 72u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002DFDA0; } }
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 72u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_002DFDA0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002DFDA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002DFDB0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[4].w[0] + 24u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFDD4u); set32(c.r[17], c.r[16].w[0] + 304u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002DFDD4u) [[unlikely]] return; }
L_002DFDD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFDDCu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002DFDDCu) [[unlikely]] return; }
L_002DFDDC:
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFDE8u); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x002DFDE8u) [[unlikely]] return; }
L_002DFDE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFDF8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x002DFDF8u) [[unlikely]] return; }
L_002DFDF8:
    c.f[12] = ld32((c.r[16].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFE0Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002DFE0Cu) [[unlikely]] return; }
L_002DFE0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFE14u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 179u, depth + 1u); else { c.pc = 0x00126810u; return; } if (c.pc != 0x002DFE14u) [[unlikely]] return; }
L_002DFE14:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8661u)));
    c.f[0] = ld32((c.r[17].w[0] + 72u));
    set32(c.r[2], c.r[2].w[0] + 14528u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 326u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[8].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[29].w[0] + 128u);
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st32((c.r[1].w[0] + 20240u), c.r[2].w[0]);
    set32(c.r[4], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8661u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] + 14528u);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 326u)));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    st32((c.r[1].w[0] + 20288u), 0u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFEACu); st32((c.r[1].w[0] + 20260u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x002DFEACu) [[unlikely]] return; }
L_002DFEAC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[3].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] + 14560u);
    st32((c.r[1].w[0] + 20252u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] + 14544u);
    st32((c.r[1].w[0] + 20256u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st8((c.r[1].w[0] + 20292u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 14576u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8661u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 30;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20272u), c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_0078(c, 10u, depth); } }
    c.budget -= 1;
L_002DFF28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFF30u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002DFF30u) [[unlikely]] return; }
L_002DFF30:
    c.r[4].d[0] = c.r[16].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + 11936u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.f[13] = ld32((c.r[2].w[0] + 2036u));
    c.f[14] = ld32((c.r[2].w[0] + 2040u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFF6Cu); c.f[12] = ld32((c.r[2].w[0] + 2032u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DFF6Cu) [[unlikely]] return; }
L_002DFF6C:
    c.r[5].d[0] = c.r[16].d[0] << 56;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 11940u);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + 11944u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 11948u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.f[13] = ld32((c.r[3].w[0]));
    c.f[14] = ld32((c.r[2].w[0]));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFFB4u); c.f[12] = ld32((c.r[4].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002DFFB4u) [[unlikely]] return; }
L_002DFFB4:
    c.r[5].d[0] = c.r[16].d[0] << 56;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 11952u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[12] = ld32((c.r[3].w[0]));
    c.f[14] = c.r[2].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFFE8u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002DFFE8u) [[unlikely]] return; }
L_002DFFE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFFF0u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x002DFFF0u) [[unlikely]] return; }
    goto L_002DFFF0;
L_002DFFEC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_002DFFF0:
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    [[clang::musttail]] return unit_0078(c, 1u, depth);
}

}
