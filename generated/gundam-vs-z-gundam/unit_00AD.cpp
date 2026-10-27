#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00AD[4096] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0,
    0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 10, 0, 11, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0,
    19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0,
    28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0,
    0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0,
    55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 64, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0,
    0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 77, 0, 78, 0, 79,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 90, 0, 91, 0, 92, 0, 93, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0,
    0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 104, 0, 105, 0, 106, 0, 0,
    0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0,
    0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0,
    0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0,
    117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0,
    0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0,
    129, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0,
    132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 141, 0, 142, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 150, 0, 0,
    0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0,
    0, 0, 160, 0, 161, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 166, 0, 167, 0, 168, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0,
    178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0,
    181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0,
    0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0,
    192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195,
    0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0,
    0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0,
    0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0,
    0, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 217, 0, 0,
    218, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0,
    233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235,
    0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 239, 0, 0,
    0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0,
    245, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0,
    252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 256, 0, 0, 257, 0, 0, 0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 262, 0, 0, 263, 0, 0, 0,
    264, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 0, 267, 0, 268, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 277, 0, 0, 0, 278, 0, 279, 0,
    280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 285, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0,
    0, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 303, 0, 0, 304, 0, 0, 305, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0,
    308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0,
    0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 316, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321,
    0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 332, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 339, 0, 0, 0, 340, 0,
    341, 0, 342, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0,
    350, 0, 0, 0, 351, 0, 352, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0,
    0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0,
    368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 371, 0, 372, 0, 373, 0, 0, 0, 0, 0,
    374, 0, 0, 0, 0, 375, 0, 0, 376, 0, 0, 0, 377, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0, 382, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384,
    0, 0, 0, 385, 0, 0, 386, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0,
    0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0,
    403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0,
    406, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 408, 0, 409, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0,
    0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 417, 0, 418, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 424, 0, 425, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 428, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 431, 0, 432, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 435, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0,
    438, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0,
    444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 446, 0, 0, 447, 0, 0, 0, 448, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0,
    0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 455, 0, 0,
    456, 0, 0, 0, 0, 0, 457, 0, 0, 458, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0,
    0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0,
    463, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    466, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 469, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0,
    0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 474, 0, 0, 0, 475, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 480, 0, 481, 0, 0, 0, 0, 0, 0, 0,
    482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 486, 0, 0, 487, 0, 0, 0,
    0, 0, 488, 0, 0, 489, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0,
};

void unit_00AD(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003B4000;
    case 2u: goto L_003B401C;
    case 3u: goto L_003B4058;
    case 4u: goto L_003B4078;
    case 5u: goto L_003B4090;
    case 6u: goto L_003B40B0;
    case 7u: goto L_003B40FC;
    case 8u: goto L_003B413C;
    case 9u: goto L_003B4144;
    case 10u: goto L_003B414C;
    case 11u: goto L_003B4154;
    case 12u: goto L_003B415C;
    case 13u: goto L_003B4170;
    case 14u: goto L_003B41E0;
    case 15u: goto L_003B4210;
    case 16u: goto L_003B4230;
    case 17u: goto L_003B4250;
    case 18u: goto L_003B4260;
    case 19u: goto L_003B4280;
    case 20u: goto L_003B4290;
    case 21u: goto L_003B42A0;
    case 22u: goto L_003B42C0;
    case 23u: goto L_003B4304;
    case 24u: goto L_003B4328;
    case 25u: goto L_003B4388;
    case 26u: goto L_003B43A0;
    case 27u: goto L_003B43E4;
    case 28u: goto L_003B4400;
    case 29u: goto L_003B4440;
    case 30u: goto L_003B4448;
    case 31u: goto L_003B4460;
    case 32u: goto L_003B4470;
    case 33u: goto L_003B4490;
    case 34u: goto L_003B44DC;
    case 35u: goto L_003B44F4;
    case 36u: goto L_003B4548;
    case 37u: goto L_003B4560;
    case 38u: goto L_003B4628;
    case 39u: goto L_003B4664;
    case 40u: goto L_003B46AC;
    case 41u: goto L_003B4910;
    case 42u: goto L_003B494C;
    case 43u: goto L_003B4954;
    case 44u: goto L_003B4960;
    case 45u: goto L_003B4968;
    case 46u: goto L_003B4990;
    case 47u: goto L_003B499C;
    case 48u: goto L_003B49A8;
    case 49u: goto L_003B49D4;
    case 50u: goto L_003B49F8;
    case 51u: goto L_003B4A08;
    case 52u: goto L_003B4A10;
    case 53u: goto L_003B4A4C;
    case 54u: goto L_003B4A5C;
    case 55u: goto L_003B4A80;
    case 56u: goto L_003B4AA0;
    case 57u: goto L_003B4AB0;
    case 58u: goto L_003B4AC0;
    case 59u: goto L_003B4AE0;
    case 60u: goto L_003B4B24;
    case 61u: goto L_003B4B44;
    case 62u: goto L_003B4B98;
    case 63u: goto L_003B4BA0;
    case 64u: goto L_003B4BA8;
    case 65u: goto L_003B4BB0;
    case 66u: goto L_003B4BC0;
    case 67u: goto L_003B4C04;
    case 68u: goto L_003B4C20;
    case 69u: goto L_003B4C60;
    case 70u: goto L_003B4C74;
    case 71u: goto L_003B4C94;
    case 72u: goto L_003B4CB0;
    case 73u: goto L_003B4CD0;
    case 74u: goto L_003B4D14;
    case 75u: goto L_003B4D5C;
    case 76u: goto L_003B4D64;
    case 77u: goto L_003B4D6C;
    case 78u: goto L_003B4D74;
    case 79u: goto L_003B4D7C;
    case 80u: goto L_003B4D90;
    case 81u: goto L_003B4DD0;
    case 82u: goto L_003B4E18;
    case 83u: goto L_003B4E38;
    case 84u: goto L_003B4E50;
    case 85u: goto L_003B4E70;
    case 86u: goto L_003B4EB4;
    case 87u: goto L_003B4F08;
    case 88u: goto L_003B4F18;
    case 89u: goto L_003B4F28;
    case 90u: goto L_003B4F30;
    case 91u: goto L_003B4F38;
    case 92u: goto L_003B4F40;
    case 93u: goto L_003B4F48;
    case 94u: goto L_003B4F50;
    case 95u: goto L_003B4F60;
    case 96u: goto L_003B5020;
    case 97u: goto L_003B5068;
    case 98u: goto L_003B5084;
    case 99u: goto L_003B50A0;
    case 100u: goto L_003B50C0;
    case 101u: goto L_003B5104;
    case 102u: goto L_003B5154;
    case 103u: goto L_003B515C;
    case 104u: goto L_003B5164;
    case 105u: goto L_003B516C;
    case 106u: goto L_003B5174;
    case 107u: goto L_003B5190;
    case 108u: goto L_003B5230;
    case 109u: goto L_003B5278;
    case 110u: goto L_003B5294;
    case 111u: goto L_003B52B0;
    case 112u: goto L_003B52F8;
    case 113u: goto L_003B5308;
    case 114u: goto L_003B5314;
    case 115u: goto L_003B5330;
    case 116u: goto L_003B5360;
    case 117u: goto L_003B5380;
    case 118u: goto L_003B53A0;
    case 119u: goto L_003B53AC;
    case 120u: goto L_003B53BC;
    case 121u: goto L_003B53C4;
    case 122u: goto L_003B53F8;
    case 123u: goto L_003B5410;
    case 124u: goto L_003B5428;
    case 125u: goto L_003B5438;
    case 126u: goto L_003B5450;
    case 127u: goto L_003B5464;
    case 128u: goto L_003B5470;
    case 129u: goto L_003B5480;
    case 130u: goto L_003B5488;
    case 131u: goto L_003B54E8;
    case 132u: goto L_003B5500;
    case 133u: goto L_003B5518;
    case 134u: goto L_003B552C;
    case 135u: goto L_003B553C;
    case 136u: goto L_003B5544;
    case 137u: goto L_003B5564;
    case 138u: goto L_003B55B0;
    case 139u: goto L_003B55D0;
    case 140u: goto L_003B55E0;
    case 141u: goto L_003B55E8;
    case 142u: goto L_003B55F0;
    case 143u: goto L_003B5624;
    case 144u: goto L_003B5640;
    case 145u: goto L_003B5680;
    case 146u: goto L_003B56B0;
    case 147u: goto L_003B5740;
    case 148u: goto L_003B5758;
    case 149u: goto L_003B5768;
    case 150u: goto L_003B5774;
    case 151u: goto L_003B5788;
    case 152u: goto L_003B5794;
    case 153u: goto L_003B57B0;
    case 154u: goto L_003B57BC;
    case 155u: goto L_003B57D4;
    case 156u: goto L_003B57F0;
    case 157u: goto L_003B5810;
    case 158u: goto L_003B586C;
    case 159u: goto L_003B5878;
    case 160u: goto L_003B5888;
    case 161u: goto L_003B5890;
    case 162u: goto L_003B5898;
    case 163u: goto L_003B58B0;
    case 164u: goto L_003B58C4;
    case 165u: goto L_003B58D0;
    case 166u: goto L_003B58E0;
    case 167u: goto L_003B58E8;
    case 168u: goto L_003B58F0;
    case 169u: goto L_003B5940;
    case 170u: goto L_003B5954;
    case 171u: goto L_003B5960;
    case 172u: goto L_003B5968;
    case 173u: goto L_003B59AC;
    case 174u: goto L_003B59BC;
    case 175u: goto L_003B59C8;
    case 176u: goto L_003B59D4;
    case 177u: goto L_003B59E8;
    case 178u: goto L_003B5A00;
    case 179u: goto L_003B5A14;
    case 180u: goto L_003B5A64;
    case 181u: goto L_003B5A80;
    case 182u: goto L_003B5AAC;
    case 183u: goto L_003B5AF0;
    case 184u: goto L_003B5B2C;
    case 185u: goto L_003B5B38;
    case 186u: goto L_003B5B6C;
    case 187u: goto L_003B5B88;
    case 188u: goto L_003B5BA0;
    case 189u: goto L_003B5BB0;
    case 190u: goto L_003B5BC0;
    case 191u: goto L_003B5BE0;
    case 192u: goto L_003B5C00;
    case 193u: goto L_003B5C48;
    case 194u: goto L_003B5C60;
    case 195u: goto L_003B5C7C;
    case 196u: goto L_003B5C88;
    case 197u: goto L_003B5CA8;
    case 198u: goto L_003B5CF0;
    case 199u: goto L_003B5D08;
    case 200u: goto L_003B5D10;
    case 201u: goto L_003B5D44;
    case 202u: goto L_003B5D70;
    case 203u: goto L_003B5D9C;
    case 204u: goto L_003B5DE0;
    case 205u: goto L_003B5E44;
    case 206u: goto L_003B5E50;
    case 207u: goto L_003B5E58;
    case 208u: goto L_003B5E70;
    case 209u: goto L_003B5E88;
    case 210u: goto L_003B5E90;
    case 211u: goto L_003B5EC0;
    case 212u: goto L_003B5EF0;
    case 213u: goto L_003B5F0C;
    case 214u: goto L_003B5F14;
    case 215u: goto L_003B5F58;
    case 216u: goto L_003B5F68;
    case 217u: goto L_003B5F74;
    case 218u: goto L_003B5F80;
    case 219u: goto L_003B5F90;
    case 220u: goto L_003B5FA0;
    case 221u: goto L_003B5FB4;
    case 222u: goto L_003B6004;
    case 223u: goto L_003B6020;
    case 224u: goto L_003B6030;
    case 225u: goto L_003B6080;
    case 226u: goto L_003B60B0;
    case 227u: goto L_003B6100;
    case 228u: goto L_003B610C;
    case 229u: goto L_003B6130;
    case 230u: goto L_003B6140;
    case 231u: goto L_003B614C;
    case 232u: goto L_003B6170;
    case 233u: goto L_003B6180;
    case 234u: goto L_003B6220;
    case 235u: goto L_003B627C;
    case 236u: goto L_003B6298;
    case 237u: goto L_003B62D8;
    case 238u: goto L_003B62E8;
    case 239u: goto L_003B62F4;
    case 240u: goto L_003B6310;
    case 241u: goto L_003B6380;
    case 242u: goto L_003B63C8;
    case 243u: goto L_003B63D8;
    case 244u: goto L_003B63E4;
    case 245u: goto L_003B6400;
    case 246u: goto L_003B6410;
    case 247u: goto L_003B6420;
    case 248u: goto L_003B6430;
    case 249u: goto L_003B6450;
    case 250u: goto L_003B6460;
    case 251u: goto L_003B646C;
    case 252u: goto L_003B6480;
    case 253u: goto L_003B6490;
    case 254u: goto L_003B64BC;
    case 255u: goto L_003B64E0;
    case 256u: goto L_003B6508;
    case 257u: goto L_003B6514;
    case 258u: goto L_003B6524;
    case 259u: goto L_003B652C;
    case 260u: goto L_003B6548;
    case 261u: goto L_003B6558;
    case 262u: goto L_003B6564;
    case 263u: goto L_003B6570;
    case 264u: goto L_003B6580;
    case 265u: goto L_003B6598;
    case 266u: goto L_003B65A4;
    case 267u: goto L_003B65B4;
    case 268u: goto L_003B65BC;
    case 269u: goto L_003B65C4;
    case 270u: goto L_003B6660;
    case 271u: goto L_003B6674;
    case 272u: goto L_003B66A4;
    case 273u: goto L_003B66D4;
    case 274u: goto L_003B66F4;
    case 275u: goto L_003B6740;
    case 276u: goto L_003B6754;
    case 277u: goto L_003B6760;
    case 278u: goto L_003B6770;
    case 279u: goto L_003B6778;
    case 280u: goto L_003B6780;
    case 281u: goto L_003B6830;
    case 282u: goto L_003B6840;
    case 283u: goto L_003B685C;
    case 284u: goto L_003B6864;
    case 285u: goto L_003B686C;
    case 286u: goto L_003B68A4;
    case 287u: goto L_003B68C0;
    case 288u: goto L_003B68E0;
    case 289u: goto L_003B6910;
    case 290u: goto L_003B69A0;
    case 291u: goto L_003B69B4;
    case 292u: goto L_003B69C4;
    case 293u: goto L_003B69D0;
    case 294u: goto L_003B69E4;
    case 295u: goto L_003B69F4;
    case 296u: goto L_003B6A10;
    case 297u: goto L_003B6A1C;
    case 298u: goto L_003B6A34;
    case 299u: goto L_003B6A50;
    case 300u: goto L_003B6A70;
    case 301u: goto L_003B6AA0;
    case 302u: goto L_003B6AB0;
    case 303u: goto L_003B6ABC;
    case 304u: goto L_003B6AC8;
    case 305u: goto L_003B6AD4;
    case 306u: goto L_003B6AE0;
    case 307u: goto L_003B6AF0;
    case 308u: goto L_003B6B00;
    case 309u: goto L_003B6B2C;
    case 310u: goto L_003B6B40;
    case 311u: goto L_003B6B50;
    case 312u: goto L_003B6B64;
    case 313u: goto L_003B6B88;
    case 314u: goto L_003B6BB0;
    case 315u: goto L_003B6BC0;
    case 316u: goto L_003B6C08;
    case 317u: goto L_003B6C18;
    case 318u: goto L_003B6C24;
    case 319u: goto L_003B6C40;
    case 320u: goto L_003B6C50;
    case 321u: goto L_003B6C7C;
    case 322u: goto L_003B6CA0;
    case 323u: goto L_003B6CD0;
    case 324u: goto L_003B6CE4;
    case 325u: goto L_003B6CF0;
    case 326u: goto L_003B6D58;
    case 327u: goto L_003B6D98;
    case 328u: goto L_003B6DA8;
    case 329u: goto L_003B6DC0;
    case 330u: goto L_003B6DD4;
    case 331u: goto L_003B6DE0;
    case 332u: goto L_003B6E0C;
    case 333u: goto L_003B6E14;
    case 334u: goto L_003B6E38;
    case 335u: goto L_003B6E98;
    case 336u: goto L_003B6EA8;
    case 337u: goto L_003B6EC0;
    case 338u: goto L_003B6EDC;
    case 339u: goto L_003B6EE8;
    case 340u: goto L_003B6EF8;
    case 341u: goto L_003B6F00;
    case 342u: goto L_003B6F08;
    case 343u: goto L_003B6F28;
    case 344u: goto L_003B6F48;
    case 345u: goto L_003B6F90;
    case 346u: goto L_003B6FA0;
    case 347u: goto L_003B6FBC;
    case 348u: goto L_003B6FE0;
    case 349u: goto L_003B6FF4;
    case 350u: goto L_003B7000;
    case 351u: goto L_003B7010;
    case 352u: goto L_003B7018;
    case 353u: goto L_003B7020;
    case 354u: goto L_003B7034;
    case 355u: goto L_003B7050;
    case 356u: goto L_003B7070;
    case 357u: goto L_003B70A0;
    case 358u: goto L_003B7130;
    case 359u: goto L_003B7144;
    case 360u: goto L_003B7154;
    case 361u: goto L_003B7160;
    case 362u: goto L_003B7174;
    case 363u: goto L_003B7184;
    case 364u: goto L_003B71A0;
    case 365u: goto L_003B71AC;
    case 366u: goto L_003B71C4;
    case 367u: goto L_003B71E0;
    case 368u: goto L_003B7200;
    case 369u: goto L_003B723C;
    case 370u: goto L_003B7248;
    case 371u: goto L_003B7258;
    case 372u: goto L_003B7260;
    case 373u: goto L_003B7268;
    case 374u: goto L_003B7280;
    case 375u: goto L_003B7294;
    case 376u: goto L_003B72A0;
    case 377u: goto L_003B72B0;
    case 378u: goto L_003B72B8;
    case 379u: goto L_003B72C0;
    case 380u: goto L_003B7310;
    case 381u: goto L_003B7324;
    case 382u: goto L_003B7330;
    case 383u: goto L_003B7338;
    case 384u: goto L_003B737C;
    case 385u: goto L_003B738C;
    case 386u: goto L_003B7398;
    case 387u: goto L_003B73A4;
    case 388u: goto L_003B73B8;
    case 389u: goto L_003B73D0;
    case 390u: goto L_003B73E4;
    case 391u: goto L_003B7410;
    case 392u: goto L_003B7420;
    case 393u: goto L_003B744C;
    case 394u: goto L_003B7490;
    case 395u: goto L_003B74B0;
    case 396u: goto L_003B74DC;
    case 397u: goto L_003B7534;
    case 398u: goto L_003B7578;
    case 399u: goto L_003B7588;
    case 400u: goto L_003B75A0;
    case 401u: goto L_003B75BC;
    case 402u: goto L_003B75E0;
    case 403u: goto L_003B7600;
    case 404u: goto L_003B7660;
    case 405u: goto L_003B7670;
    case 406u: goto L_003B7680;
    case 407u: goto L_003B76A4;
    case 408u: goto L_003B76B0;
    case 409u: goto L_003B76B8;
    case 410u: goto L_003B76D8;
    case 411u: goto L_003B76F8;
    case 412u: goto L_003B7740;
    case 413u: goto L_003B7750;
    case 414u: goto L_003B776C;
    case 415u: goto L_003B7790;
    case 416u: goto L_003B77AC;
    case 417u: goto L_003B77B8;
    case 418u: goto L_003B77C0;
    case 419u: goto L_003B77D4;
    case 420u: goto L_003B77F0;
    case 421u: goto L_003B781C;
    case 422u: goto L_003B7860;
    case 423u: goto L_003B78A4;
    case 424u: goto L_003B78B0;
    case 425u: goto L_003B78B8;
    case 426u: goto L_003B78D0;
    case 427u: goto L_003B78E8;
    case 428u: goto L_003B78F0;
    case 429u: goto L_003B7920;
    case 430u: goto L_003B7950;
    case 431u: goto L_003B796C;
    case 432u: goto L_003B7974;
    case 433u: goto L_003B79B8;
    case 434u: goto L_003B79C8;
    case 435u: goto L_003B79D4;
    case 436u: goto L_003B79E0;
    case 437u: goto L_003B79F0;
    case 438u: goto L_003B7A00;
    case 439u: goto L_003B7A14;
    case 440u: goto L_003B7A40;
    case 441u: goto L_003B7A50;
    case 442u: goto L_003B7A60;
    case 443u: goto L_003B7A70;
    case 444u: goto L_003B7A80;
    case 445u: goto L_003B7AA8;
    case 446u: goto L_003B7AB0;
    case 447u: goto L_003B7ABC;
    case 448u: goto L_003B7ACC;
    case 449u: goto L_003B7AD8;
    case 450u: goto L_003B7AF0;
    case 451u: goto L_003B7B10;
    case 452u: goto L_003B7B38;
    case 453u: goto L_003B7B48;
    case 454u: goto L_003B7B58;
    case 455u: goto L_003B7B74;
    case 456u: goto L_003B7B80;
    case 457u: goto L_003B7B98;
    case 458u: goto L_003B7BA4;
    case 459u: goto L_003B7BC0;
    case 460u: goto L_003B7BE0;
    case 461u: goto L_003B7C04;
    case 462u: goto L_003B7C78;
    case 463u: goto L_003B7C80;
    case 464u: goto L_003B7C90;
    case 465u: goto L_003B7CC0;
    case 466u: goto L_003B7D00;
    case 467u: goto L_003B7D14;
    case 468u: goto L_003B7D30;
    case 469u: goto L_003B7D40;
    case 470u: goto L_003B7D4C;
    case 471u: goto L_003B7D78;
    case 472u: goto L_003B7D94;
    case 473u: goto L_003B7DB0;
    case 474u: goto L_003B7E10;
    case 475u: goto L_003B7E20;
    case 476u: goto L_003B7E2C;
    case 477u: goto L_003B7E58;
    case 478u: goto L_003B7E94;
    case 479u: goto L_003B7EC4;
    case 480u: goto L_003B7ED8;
    case 481u: goto L_003B7EE0;
    case 482u: goto L_003B7F00;
    case 483u: goto L_003B7F28;
    case 484u: goto L_003B7F38;
    case 485u: goto L_003B7F48;
    case 486u: goto L_003B7F64;
    case 487u: goto L_003B7F70;
    case 488u: goto L_003B7F88;
    case 489u: goto L_003B7F94;
    case 490u: goto L_003B7FB0;
    case 491u: goto L_003B7FC0;
    case 492u: goto L_003B7FEC;
    default: bad_entry(c, 0x003B4000u); return;
    }
L_003B4000:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B401Cu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x003B401Cu) [[unlikely]] return; }
L_003B401C:
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[3] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4058u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x003B4058u) [[unlikely]] return; }
L_003B4058:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 184u)));
    c.f[12] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4078u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_0068(c, 82u, depth + 1u); else { c.pc = 0x002A23A0u; return; } if (c.pc != 0x003B4078u) [[unlikely]] return; }
L_003B4078:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B4090:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] - 8096u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003B4000u < 16384u) { entry = entries_00AD[(t - 0x003B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003B40B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 8080u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] - 29024u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[17].w[0] + 304u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B40FCu); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x003B40FCu) [[unlikely]] return; }
L_003B40FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[3], c.r[3].w[0] + 16864u);
    set32(c.r[2], c.r[2].w[0] - 8128u);
    st32((c.r[17].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 32u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B413Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003B413Cu) [[unlikely]] return; }
L_003B413C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4144u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x003B4144u) [[unlikely]] return; }
L_003B4144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B414Cu); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x003B414Cu) [[unlikely]] return; }
L_003B414C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4154u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x003B4154u) [[unlikely]] return; }
L_003B4154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B415Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 13u, depth + 1u); else { c.pc = 0x003B4170u; return; } if (c.pc != 0x003B415Cu) [[unlikely]] return; }
L_003B415C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B4170:
    set32(c.r[3], ld32((c.r[4].w[0] + 308u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[6], c.r[4].w[0] + 304u);  if (t) { goto L_003B41D0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003B41D0; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[3].w[0]);  if (t) { goto L_003B41D8; } }
    c.budget -= 1;
L_003B41D0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003B41D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B41E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 304u);  if (t) { goto L_003B4250; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003B4250; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4210u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003B4210u) [[unlikely]] return; }
L_003B4210:
    set32(c.r[4], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003B4230; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4230u);  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x003B4230u) [[unlikely]] return; }
L_003B4230:
    set32(c.r[4], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003B4250; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4250u);  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x003B4250u) [[unlikely]] return; }
L_003B4250:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B4260:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] - 8064u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003B4000u < 16384u) { entry = entries_00AD[(t - 0x003B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003B4280:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003B4290:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_003B42A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] - 8032u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003B4000u < 16384u) { entry = entries_00AD[(t - 0x003B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003B42C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 8016u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 29032u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4304u); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x003B4304u) [[unlikely]] return; }
L_003B4304:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], 0u + 150u);
    set32(c.r[3], c.r[3].w[0] + 17408u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    st32((c.r[16].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4328u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003B4328u) [[unlikely]] return; }
L_003B4328:
    st32((c.r[16].w[0] + 56u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    st32((c.r[16].w[0] + 52u), 0u);
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 7u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003B4380; } }
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.budget -= 7;
L_003B4380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4388u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 26u, depth + 1u); else { c.pc = 0x003B43A0u; return; } if (c.pc != 0x003B4388u) [[unlikely]] return; }
L_003B4388:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B43A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] >= 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B43D8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003B43F0; } }
L_003B43D8:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B43E4u); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x003B43E4u) [[unlikely]] return; }
L_003B43E4:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003B43F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B4400:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B4460; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B4460; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4440u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x003B4440u) [[unlikely]] return; }
L_003B4440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4448u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x003B4448u) [[unlikely]] return; }
L_003B4448:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4460u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x003B4460u) [[unlikely]] return; }
L_003B4460:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B4470:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] - 8000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003B4000u < 16384u) { entry = entries_00AD[(t - 0x003B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003B4490:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 7984u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] - 29032u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[17].w[0] + 304u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B44DCu); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x003B44DCu) [[unlikely]] return; }
L_003B44DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 18704u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B44F4u); st32((c.r[17].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003B44F4u) [[unlikely]] return; }
L_003B44F4:
    st32((c.r[17].w[0] + 56u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[17].w[0] + 52u), 0u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[17].w[0] + 48u), 0u);
    set32(c.r[5], 0u + 350u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), c.r[6].w[0]);
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[16].w[0] + 22u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 104u), 0u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4548u); st32((c.r[17].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AD(c, 37u, depth + 1u); else { c.pc = 0x003B4560u; return; } if (c.pc != 0x003B4548u) [[unlikely]] return; }
L_003B4548:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B4560:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_003B4670; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B45E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003B45A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B46B0; } }
L_003B45A0:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 150u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), c.f[0]);  if (t) { goto L_003B46B0; } }
    c.budget -= 1;
L_003B45E0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);  if (t) { goto L_003B4658; } }
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] - 7968u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], 0u + 130u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4628u); st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003B4628u) [[unlikely]] return; }
L_003B4628:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), c.f[0]);  if (t) { goto L_003B46B0; } }
    c.budget -= 1;
L_003B4658:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4664u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x003B4664u) [[unlikely]] return; }
L_003B4664:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B46B0; } }
    c.budget -= 1;
L_003B4670:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_003B46A0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003B46B0; } }
    c.budget -= 1;
L_003B46A0:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B46ACu); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x003B46ACu) [[unlikely]] return; }
L_003B46AC:
    c.budget -= 1;
L_003B46B0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_003B47E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B4768; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B4700; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003B46E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B4848; } }
    c.budget -= 1;
L_003B46E8:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 360u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003B4848; } }
    c.budget -= 1;
L_003B4700:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_003B4848; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1100000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[4], 0u + 5u);
    set32(c.r[3], c.r[5].w[0] + 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.f[0]);  if (t) { goto L_003B4848; } }
    c.budget -= 1;
L_003B4768:
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_003B4848; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0E00000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[4], 0u + 6u);
    set32(c.r[3], c.r[5].w[0] + 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.f[0]);  if (t) { goto L_003B4848; } }
    c.budget -= 1;
L_003B47E0:
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_003B4848; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1100000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[4], 0u + 7u);
    set32(c.r[3], c.r[5].w[0] + 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 15;
L_003B4848:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 22u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B48F0; } }
    c.f[2] = ld32((c.r[17].w[0] + 108u));
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = 0u;
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 104u), c.f[1]);  if (t) { goto L_003B4898; } }
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = ld32((c.r[17].w[0] + 108u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 108u), c.f[0]);  if (t) { goto L_003B48D0; } }
    c.budget -= 1;
L_003B4898:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B48D0; } }
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = ld32((c.r[17].w[0] + 108u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 108u), c.f[0]);
    c.budget -= 8;
L_003B48D0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_003B48F0; } }
    st16((c.r[16].w[0] + 22u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_003B48F0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B4910:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_003B4A60; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003B4960; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B494Cu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x003B494Cu) [[unlikely]] return; }
L_003B494C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4954u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x003B4954u) [[unlikely]] return; }
L_003B4954:
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4960u); set32(c.r[4], ld32((c.r[2].w[0] + 32u)));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x003B4960u) [[unlikely]] return; }
L_003B4960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4968u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x003B4968u) [[unlikely]] return; }
L_003B4968:
    set32(c.r[3], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003B49A0; } }
    c.f[14] = ld32((c.r[16].w[0] + 4u));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4990u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003B4990u) [[unlikely]] return; }
L_003B4990:
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B499Cu); set32(c.r[4], ld32((c.r[2].w[0] + 36u)));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x003B499Cu) [[unlikely]] return; }
L_003B499C:
    c.budget -= 1;
L_003B49A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B49A8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x003B49A8u) [[unlikely]] return; }
L_003B49A8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 22u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B4A60; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003B4A10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B49D4u);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x003B49D4u) [[unlikely]] return; }
L_003B49D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41080000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43050000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1130000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[14] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B49F8u);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003B49F8u) [[unlikely]] return; }
L_003B49F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4A08u); c.f[12] = ld32((c.r[17].w[0] + 104u));  if (depth < kMaxDepth) unit_0068(c, 82u, depth + 1u); else { c.pc = 0x002A23A0u; return; } if (c.pc != 0x003B4A08u) [[unlikely]] return; }
L_003B4A08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4A10u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x003B4A10u) [[unlikely]] return; }
L_003B4A10:
    set32(c.r[4], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003B4A60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1080000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43050000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1110000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[14] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4A4Cu);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003B4A4Cu) [[unlikely]] return; }
L_003B4A4C:
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4A5Cu); c.f[12] = ld32((c.r[17].w[0] + 104u));  if (depth < kMaxDepth) unit_0068(c, 82u, depth + 1u); else { c.pc = 0x002A23A0u; return; } if (c.pc != 0x003B4A5Cu) [[unlikely]] return; }
L_003B4A5C:
    c.budget -= 1;
L_003B4A60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B4A80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] - 7952u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003B4000u < 16384u) { entry = entries_00AD[(t - 0x003B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003B4AA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003B4AB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003B4AC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] - 7936u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003B4000u < 16384u) { entry = entries_00AD[(t - 0x003B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003B4AE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 7920u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 29032u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4B24u); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x003B4B24u) [[unlikely]] return; }
L_003B4B24:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], 0u + 12u);
    set32(c.r[3], c.r[3].w[0] + 19488u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    st32((c.r[16].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4B44u); st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003B4B44u) [[unlikely]] return; }
L_003B4B44:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 150u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EB30000u);
    c.r[3].d[0] = c.r[2].d[0] | 13107ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    c.f[1] = c.r[2].w[0];
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 128u), c.f[0]);
    st32((c.r[16].w[0] + 136u), 0u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4B98u); st32((c.r[16].w[0] + 132u), 0u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x003B4B98u) [[unlikely]] return; }
L_003B4B98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4BA0u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x003B4BA0u) [[unlikely]] return; }
L_003B4BA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4BA8u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x003B4BA8u) [[unlikely]] return; }
L_003B4BA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4BB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 66u, depth + 1u); else { c.pc = 0x003B4BC0u; return; } if (c.pc != 0x003B4BB0u) [[unlikely]] return; }
L_003B4BB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B4BC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] >= 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B4BF8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003B4C10; } }
L_003B4BF8:
    set32(c.r[4], c.r[16].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4C04u); set32(c.r[5], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x003B4C04u) [[unlikely]] return; }
L_003B4C04:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003B4C10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B4C20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B4C98; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[16].w[0] + 192u);  if (t) { goto L_003B4C98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4C60u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003B4C60u) [[unlikely]] return; }
L_003B4C60:
    c.f[12] = ld32((c.r[16].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4C74u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x003B4C74u) [[unlikely]] return; }
L_003B4C74:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 184u)));
    c.f[12] = c.r[2].w[0];
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4C94u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0068(c, 82u, depth + 1u); else { c.pc = 0x002A23A0u; return; } if (c.pc != 0x003B4C94u) [[unlikely]] return; }
L_003B4C94:
    c.budget -= 1;
L_003B4C98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B4CB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] - 7888u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003B4000u < 16384u) { entry = entries_00AD[(t - 0x003B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003B4CD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 7872u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 29032u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4D14u); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x003B4D14u) [[unlikely]] return; }
L_003B4D14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[3], c.r[28].w[0] - 26972u);
    set32(c.r[2], c.r[2].w[0] + 19920u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] - 7904u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[16].w[0] + 304u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4D5Cu); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003B4D5Cu) [[unlikely]] return; }
L_003B4D5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4D64u); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x003B4D64u) [[unlikely]] return; }
L_003B4D64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4D6Cu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x003B4D6Cu) [[unlikely]] return; }
L_003B4D6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4D74u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x003B4D74u) [[unlikely]] return; }
L_003B4D74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4D7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 80u, depth + 1u); else { c.pc = 0x003B4D90u; return; } if (c.pc != 0x003B4D7Cu) [[unlikely]] return; }
L_003B4D7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B4D90:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_003B4DC0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003B4DC8; } }
    c.budget -= 1;
L_003B4DC0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003B4DC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B4DD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_003B4E38; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[17].w[0] + 192u);  if (t) { goto L_003B4E38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4E18u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003B4E18u) [[unlikely]] return; }
L_003B4E18:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 184u)));
    c.f[12] = c.r[2].w[0];
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4E38u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0068(c, 82u, depth + 1u); else { c.pc = 0x002A23A0u; return; } if (c.pc != 0x003B4E38u) [[unlikely]] return; }
L_003B4E38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B4E50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] - 7856u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003B4000u < 16384u) { entry = entries_00AD[(t - 0x003B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003B4E70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 7840u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 29032u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4EB4u); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x003B4EB4u) [[unlikely]] return; }
L_003B4EB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[6], c.r[28].w[0] - 26968u);
    set32(c.r[2], c.r[2].w[0] + 20512u);
    set32(c.r[3], c.r[28].w[0] - 26964u);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    st8((c.r[16].w[0] + 304u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4F08u); st32((c.r[16].w[0] + 104u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0005(c, 46u, depth + 1u); else { c.pc = 0x001158E0u; return; } if (c.pc != 0x003B4F08u) [[unlikely]] return; }
L_003B4F08:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FF00000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4F18u); c.r[4].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_0005(c, 60u, depth + 1u); else { c.pc = 0x00115D70u; return; } if (c.pc != 0x003B4F18u) [[unlikely]] return; }
L_003B4F18:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40280000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4F28u); c.r[5].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_0005(c, 75u, depth + 1u); else { c.pc = 0x00116060u; return; } if (c.pc != 0x003B4F28u) [[unlikely]] return; }
L_003B4F28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4F30u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 92u, depth + 1u); else { c.pc = 0x00116498u; return; } if (c.pc != 0x003B4F30u) [[unlikely]] return; }
L_003B4F30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4F38u); st32((c.r[16].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x003B4F38u) [[unlikely]] return; }
L_003B4F38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4F40u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x003B4F40u) [[unlikely]] return; }
L_003B4F40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4F48u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x003B4F48u) [[unlikely]] return; }
L_003B4F48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4F50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 95u, depth + 1u); else { c.pc = 0x003B4F60u; return; } if (c.pc != 0x003B4F50u) [[unlikely]] return; }
L_003B4F50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B4F60:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_003B4F90; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003B5018; } }
    c.budget -= 1;
L_003B4F90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[4].w[0] + 108u));
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 104u), c.f[1]);  if (t) { goto L_003B4FD8; } }
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = ld32((c.r[4].w[0] + 108u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 108u), c.f[0]);  if (t) { goto L_003B5010; } }
    c.budget -= 1;
L_003B4FD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.r[3].d[0] = c.r[3].d[0] | 13107ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B5010; } }
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = ld32((c.r[4].w[0] + 108u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 108u), c.f[0]);
    c.budget -= 7;
L_003B5010:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003B5018:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B5020:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_003B5088; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[17].w[0] + 192u);  if (t) { goto L_003B5088; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5068u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003B5068u) [[unlikely]] return; }
L_003B5068:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5084u); c.f[12] = ld32((c.r[17].w[0] + 104u));  if (depth < kMaxDepth) unit_0068(c, 82u, depth + 1u); else { c.pc = 0x002A23A0u; return; } if (c.pc != 0x003B5084u) [[unlikely]] return; }
L_003B5084:
    c.budget -= 1;
L_003B5088:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B50A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] - 7824u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003B4000u < 16384u) { entry = entries_00AD[(t - 0x003B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003B50C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 7808u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 29032u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5104u); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x003B5104u) [[unlikely]] return; }
L_003B5104:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    set32(c.r[3], c.r[3].w[0] + 21040u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[16].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 15u);
    st8((c.r[16].w[0] + 304u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 160u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5154u); st32((c.r[16].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003B5154u) [[unlikely]] return; }
L_003B5154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B515Cu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x003B515Cu) [[unlikely]] return; }
L_003B515C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5164u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x003B5164u) [[unlikely]] return; }
L_003B5164:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B516Cu); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x003B516Cu) [[unlikely]] return; }
L_003B516C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5174u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 107u, depth + 1u); else { c.pc = 0x003B5190u; return; } if (c.pc != 0x003B5174u) [[unlikely]] return; }
L_003B5174:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B5190:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003B51E0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003B51B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B5218; } }
L_003B51B0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003B5218; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003B5218; } }
    c.budget -= 1;
L_003B51E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[4].w[0] + 108u));
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 104u), c.f[1]);  if (t) { goto L_003B5218; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.budget -= 5;
L_003B5218:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003B5230:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_003B5298; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[17].w[0] + 192u);  if (t) { goto L_003B5298; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5278u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003B5278u) [[unlikely]] return; }
L_003B5278:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5294u); c.f[12] = ld32((c.r[17].w[0] + 104u));  if (depth < kMaxDepth) unit_0068(c, 82u, depth + 1u); else { c.pc = 0x002A23A0u; return; } if (c.pc != 0x003B5294u) [[unlikely]] return; }
L_003B5294:
    c.budget -= 1;
L_003B5298:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B52B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B52E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] - 6800u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 636u), c.r[2].w[0]);  if (t) { goto L_003B52F0; } }
    c.budget -= 1;
L_003B52E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] - 7664u);
    st32((c.r[16].w[0] + 636u), c.r[2].w[0]);
    c.budget -= 4;
L_003B52F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B52F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 186u, depth + 1u); else { c.pc = 0x0016EB40u; return; } if (c.pc != 0x003B52F8u) [[unlikely]] return; }
L_003B52F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5308u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x003B5308u) [[unlikely]] return; }
L_003B5308:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5314u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0077(c, 370u, depth + 1u); else { c.pc = 0x002DF630u; return; } if (c.pc != 0x003B5314u) [[unlikely]] return; }
L_003B5314:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B5330:
    set32(c.r[6], ld32((c.r[4].w[0] + 1236u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFE7F0000u);
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st32((c.r[4].w[0] + 1236u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1236u)));
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 1236u), c.r[3].w[0]);  c.pc = t; return; }
L_003B5360:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] - 5920u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003B4000u < 16384u) { entry = entries_00AD[(t - 0x003B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003B5380:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B53A0u); st8((c.r[4].w[0] + 705u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003A(c, 183u, depth + 1u); else { c.pc = 0x001EBFA0u; return; } if (c.pc != 0x003B53A0u) [[unlikely]] return; }
L_003B53A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B53ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 115u, depth + 1u); else { c.pc = 0x001EA8D0u; return; } if (c.pc != 0x003B53ACu) [[unlikely]] return; }
L_003B53AC:
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B53BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 73u, depth + 1u); else { c.pc = 0x001E4ED0u; return; } if (c.pc != 0x003B53BCu) [[unlikely]] return; }
L_003B53BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B53C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 56u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x003B53C4u) [[unlikely]] return; }
L_003B53C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B53F8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.f[12];
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B53F8u); st32((c.r[16].w[0] + 712u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_003B(c, 205u, depth + 1u); else { c.pc = 0x001EE330u; return; } if (c.pc != 0x003B53F8u) [[unlikely]] return; }
L_003B53F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 712u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5410u); st16((c.r[16].w[0] + 560u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x003B5410u) [[unlikely]] return; }
L_003B5410:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5428u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x003B5428u) [[unlikely]] return; }
L_003B5428:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5438u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x003B5438u) [[unlikely]] return; }
L_003B5438:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B5450:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5464u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 183u, depth + 1u); else { c.pc = 0x001EBFA0u; return; } if (c.pc != 0x003B5464u) [[unlikely]] return; }
L_003B5464:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5470u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 115u, depth + 1u); else { c.pc = 0x001EA8D0u; return; } if (c.pc != 0x003B5470u) [[unlikely]] return; }
L_003B5470:
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5480u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 73u, depth + 1u); else { c.pc = 0x001E4ED0u; return; } if (c.pc != 0x003B5480u) [[unlikely]] return; }
L_003B5480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5488u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 56u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x003B5488u) [[unlikely]] return; }
L_003B5488:
    c.f[1] = ld32((c.r[16].w[0] + 8252u));
    c.f[0] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 712u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B54C0; } }
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B54E8; } }
    c.budget -= 1;
L_003B54C0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.f[12];
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B54E8u); st32((c.r[16].w[0] + 712u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_003B(c, 205u, depth + 1u); else { c.pc = 0x001EE330u; return; } if (c.pc != 0x003B54E8u) [[unlikely]] return; }
L_003B54E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B5500:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5518u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 115u, depth + 1u); else { c.pc = 0x001EA8D0u; return; } if (c.pc != 0x003B5518u) [[unlikely]] return; }
L_003B5518:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B552Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_003B(c, 205u, depth + 1u); else { c.pc = 0x001EE330u; return; } if (c.pc != 0x003B552Cu) [[unlikely]] return; }
L_003B552C:
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B553Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 73u, depth + 1u); else { c.pc = 0x001E4ED0u; return; } if (c.pc != 0x003B553Cu) [[unlikely]] return; }
L_003B553C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5544u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 56u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x003B5544u) [[unlikely]] return; }
L_003B5544:
    c.f[1] = ld32((c.r[16].w[0] + 8252u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.f[0] = ld32((c.r[16].w[0] + 712u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5564u); st32((c.r[16].w[0] + 712u), c.f[0]);  if (depth < kMaxDepth) unit_003B(c, 8u, depth + 1u); else { c.pc = 0x001EC1A0u; return; } if (c.pc != 0x003B5564u) [[unlikely]] return; }
L_003B5564:
    c.r[3].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B5588; } }
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B5598; } }
L_003B5588:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003B5598:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B55B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B55D0u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_003B(c, 205u, depth + 1u); else { c.pc = 0x001EE330u; return; } if (c.pc != 0x003B55D0u) [[unlikely]] return; }
L_003B55D0:
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B55E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 73u, depth + 1u); else { c.pc = 0x001E4ED0u; return; } if (c.pc != 0x003B55E0u) [[unlikely]] return; }
L_003B55E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B55E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 56u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x003B55E8u) [[unlikely]] return; }
L_003B55E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B55F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x003B55F0u) [[unlikely]] return; }
L_003B55F0:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B5610; } }
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 2;
L_003B5610:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8285u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B5628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5624u); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_002E(c, 68u, depth + 1u); else { c.pc = 0x001B9070u; return; } if (c.pc != 0x003B5624u) [[unlikely]] return; }
L_003B5624:
    c.budget -= 1;
L_003B5628:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B5640:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B5660; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 696u)));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B5660; } }
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_003B5660:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] - 5904u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003B4000u < 16384u) { entry = entries_00AD[(t - 0x003B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003B5680:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 705u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[4].w[0] + 696u)));
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 10;
    { st32((c.r[4].w[0] + 712u), c.r[2].w[0]);  goto L_003B56B0; }
L_003B56B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 696u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.r[5].d[0] = c.r[5].d[0] & 1024ull;
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003B5708; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] << 48;  if (t) { goto L_003B57C8; } }
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003B57C8; } }
    c.budget -= 1;
L_003B5708:
    c.f[2] = ld32((c.r[16].w[0] + 8252u));
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 712u), c.f[1]);  if (t) { goto L_003B57D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 712u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5740u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x003B5740u) [[unlikely]] return; }
L_003B5740:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B57A8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5758u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003B5758u) [[unlikely]] return; }
L_003B5758:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5768u); set32(c.r[5], c.r[2].w[0] + 5u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003B5768u) [[unlikely]] return; }
L_003B5768:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5774u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 157u, depth + 1u); else { c.pc = 0x0023A290u; return; } if (c.pc != 0x003B5774u) [[unlikely]] return; }
L_003B5774:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B5788; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5788u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x003B5788u) [[unlikely]] return; }
L_003B5788:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5794u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x003B5794u) [[unlikely]] return; }
L_003B5794:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003B57D8; } }
    c.budget -= 1;
L_003B57A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B57B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 162u, depth + 1u); else { c.pc = 0x0023A310u; return; } if (c.pc != 0x003B57B0u) [[unlikely]] return; }
L_003B57B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B57BCu); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_002E(c, 79u, depth + 1u); else { c.pc = 0x001B9200u; return; } if (c.pc != 0x003B57BCu) [[unlikely]] return; }
L_003B57BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B57D8; } }
    c.budget -= 1;
L_003B57C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B57D4u); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_002E(c, 79u, depth + 1u); else { c.pc = 0x001B9200u; return; } if (c.pc != 0x003B57D4u) [[unlikely]] return; }
L_003B57D4:
    c.budget -= 1;
L_003B57D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B57F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] - 5888u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003B4000u < 16384u) { entry = entries_00AD[(t - 0x003B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003B5810:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[1] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF9F0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01800000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 705u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[4].w[0] + 108u), c.f[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1236u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 1236u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1236u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B586Cu); st32((c.r[4].w[0] + 1236u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003B(c, 6u, depth + 1u); else { c.pc = 0x001EC130u; return; } if (c.pc != 0x003B586Cu) [[unlikely]] return; }
L_003B586C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5878u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003A(c, 115u, depth + 1u); else { c.pc = 0x001EA8D0u; return; } if (c.pc != 0x003B5878u) [[unlikely]] return; }
L_003B5878:
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5888u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 73u, depth + 1u); else { c.pc = 0x001E4ED0u; return; } if (c.pc != 0x003B5888u) [[unlikely]] return; }
L_003B5888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5890u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 56u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x003B5890u) [[unlikely]] return; }
L_003B5890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5898u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x003B5898u) [[unlikely]] return; }
L_003B5898:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B58B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B58C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 6u, depth + 1u); else { c.pc = 0x001EC130u; return; } if (c.pc != 0x003B58C4u) [[unlikely]] return; }
L_003B58C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B58D0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003A(c, 115u, depth + 1u); else { c.pc = 0x001EA8D0u; return; } if (c.pc != 0x003B58D0u) [[unlikely]] return; }
L_003B58D0:
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B58E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 73u, depth + 1u); else { c.pc = 0x001E4ED0u; return; } if (c.pc != 0x003B58E0u) [[unlikely]] return; }
L_003B58E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B58E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 56u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x003B58E8u) [[unlikely]] return; }
L_003B58E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B58F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x003B58F0u) [[unlikely]] return; }
L_003B58F0:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B5910; } }
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 2;
L_003B5910:
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B5930; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 712u), c.r[3].w[0]);
    c.budget -= 5;
L_003B5930:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B5940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5954u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 6u, depth + 1u); else { c.pc = 0x001EC130u; return; } if (c.pc != 0x003B5954u) [[unlikely]] return; }
L_003B5954:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5960u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003A(c, 115u, depth + 1u); else { c.pc = 0x001EA8D0u; return; } if (c.pc != 0x003B5960u) [[unlikely]] return; }
L_003B5960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5968u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x003B5968u) [[unlikely]] return; }
L_003B5968:
    c.f[2] = ld32((c.r[16].w[0] + 8252u));
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 712u), c.f[1]);  if (t) { goto L_003B59E8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B59ACu); st32((c.r[16].w[0] + 712u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x003B59ACu) [[unlikely]] return; }
L_003B59AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B59E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B59BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003B59BCu) [[unlikely]] return; }
L_003B59BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B59C8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 157u, depth + 1u); else { c.pc = 0x0023A290u; return; } if (c.pc != 0x003B59C8u) [[unlikely]] return; }
L_003B59C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B59D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x003B59D4u) [[unlikely]] return; }
L_003B59D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B59E8; } }
    c.budget -= 1;
L_003B59E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B59E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 162u, depth + 1u); else { c.pc = 0x0023A310u; return; } if (c.pc != 0x003B59E8u) [[unlikely]] return; }
L_003B59E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B5A00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5A14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x003B5A14u) [[unlikely]] return; }
L_003B5A14:
    c.f[2] = ld32((c.r[16].w[0] + 8252u));
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 712u), c.f[1]);  if (t) { goto L_003B5A68; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 1236u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFE7F0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], 0u + 48u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 1236u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 1236u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5A64u); st32((c.r[16].w[0] + 1236u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002E(c, 68u, depth + 1u); else { c.pc = 0x001B9070u; return; } if (c.pc != 0x003B5A64u) [[unlikely]] return; }
L_003B5A64:
    c.budget -= 1;
L_003B5A68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B5A80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 5872u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5AACu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B5AACu) [[unlikely]] return; }
L_003B5AAC:
    set32(c.r[4], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = ld32((c.r[16].w[0] + 8328u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0] + 8328u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B5AF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01FF0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 63999ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 705u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 280u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5B2Cu); st8((c.r[4].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_005A(c, 266u, depth + 1u); else { c.pc = 0x0026AD70u; return; } if (c.pc != 0x003B5B2Cu) [[unlikely]] return; }
L_003B5B2C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5B38u); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 199u, depth + 1u); else { c.pc = 0x00269F90u; return; } if (c.pc != 0x003B5B38u) [[unlikely]] return; }
L_003B5B38:
    set32(c.r[2], ld32((c.r[16].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B5B70; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], c.r[16].w[0] + 1392u);
    set32(c.r[5], c.r[16].w[0] + 8624u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 712u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5B6Cu); st32((c.r[16].w[0] + 104u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003B5B6Cu) [[unlikely]] return; }
L_003B5B6C:
    c.budget -= 1;
L_003B5B70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 712u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5B88u); st16((c.r[16].w[0] + 560u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x003B5B88u) [[unlikely]] return; }
L_003B5B88:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5BA0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x003B5BA0u) [[unlikely]] return; }
L_003B5BA0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5BB0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x003B5BB0u) [[unlikely]] return; }
L_003B5BB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B5BC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5BE0u); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 199u, depth + 1u); else { c.pc = 0x00269F90u; return; } if (c.pc != 0x003B5BE0u) [[unlikely]] return; }
L_003B5BE0:
    c.f[1] = ld32((c.r[16].w[0] + 8252u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 712u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5C00u); st32((c.r[16].w[0] + 712u), c.f[0]);  if (depth < kMaxDepth) unit_005A(c, 266u, depth + 1u); else { c.pc = 0x0026AD70u; return; } if (c.pc != 0x003B5C00u) [[unlikely]] return; }
L_003B5C00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B5C20; } }
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B5C48; } }
L_003B5C20:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], c.r[16].w[0] + 1392u);
    set32(c.r[5], c.r[16].w[0] + 8624u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 712u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5C48u); st32((c.r[16].w[0] + 104u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003B5C48u) [[unlikely]] return; }
L_003B5C48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B5C60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5C7Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 266u, depth + 1u); else { c.pc = 0x0026AD70u; return; } if (c.pc != 0x003B5C7Cu) [[unlikely]] return; }
L_003B5C7C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5C88u); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 199u, depth + 1u); else { c.pc = 0x00269F90u; return; } if (c.pc != 0x003B5C88u) [[unlikely]] return; }
L_003B5C88:
    c.f[1] = ld32((c.r[16].w[0] + 8252u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.f[0] = ld32((c.r[16].w[0] + 712u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5CA8u); st32((c.r[16].w[0] + 712u), c.f[0]);  if (depth < kMaxDepth) unit_005A(c, 288u, depth + 1u); else { c.pc = 0x0026B130u; return; } if (c.pc != 0x003B5CA8u) [[unlikely]] return; }
L_003B5CA8:
    c.r[3].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B5CD0; } }
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B5CE0; } }
    c.budget -= 1;
L_003B5CD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003B5CE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B5CF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5D08u); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 199u, depth + 1u); else { c.pc = 0x00269F90u; return; } if (c.pc != 0x003B5D08u) [[unlikely]] return; }
L_003B5D08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5D10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x003B5D10u) [[unlikely]] return; }
L_003B5D10:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B5D30; } }
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 2;
L_003B5D30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8285u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B5D58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5D44u); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_002E(c, 68u, depth + 1u); else { c.pc = 0x001B9070u; return; } if (c.pc != 0x003B5D44u) [[unlikely]] return; }
L_003B5D44:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 63999ull;
    st32((c.r[16].w[0] + 276u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 280u), 0u);
    st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_003B5D58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B5D70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 5856u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5D9Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B5D9Cu) [[unlikely]] return; }
L_003B5D9C:
    c.f[1] = ld32((c.r[16].w[0] + 8328u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0] + 8328u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B5DE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[1] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 1u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF9F0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01800000u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 705u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[4].w[0] + 108u), c.f[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 1236u)));
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 1236u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1236u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5E44u); st32((c.r[4].w[0] + 1236u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005A(c, 266u, depth + 1u); else { c.pc = 0x0026AD70u; return; } if (c.pc != 0x003B5E44u) [[unlikely]] return; }
L_003B5E44:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5E50u); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 199u, depth + 1u); else { c.pc = 0x00269F90u; return; } if (c.pc != 0x003B5E50u) [[unlikely]] return; }
L_003B5E50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5E58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x003B5E58u) [[unlikely]] return; }
L_003B5E58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B5E70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5E88u); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 199u, depth + 1u); else { c.pc = 0x00269F90u; return; } if (c.pc != 0x003B5E88u) [[unlikely]] return; }
L_003B5E88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5E90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x003B5E90u) [[unlikely]] return; }
L_003B5E90:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B5EB0; } }
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 2;
L_003B5EB0:
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5EC0u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 266u, depth + 1u); else { c.pc = 0x0026AD70u; return; } if (c.pc != 0x003B5EC0u) [[unlikely]] return; }
L_003B5EC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B5EE0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 712u), c.r[3].w[0]);
    c.budget -= 6;
L_003B5EE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B5EF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5F0Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 266u, depth + 1u); else { c.pc = 0x0026AD70u; return; } if (c.pc != 0x003B5F0Cu) [[unlikely]] return; }
L_003B5F0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5F14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x003B5F14u) [[unlikely]] return; }
L_003B5F14:
    c.f[2] = ld32((c.r[16].w[0] + 8252u));
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 712u), c.f[1]);  if (t) { goto L_003B5F90; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5F58u); st32((c.r[16].w[0] + 712u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x003B5F58u) [[unlikely]] return; }
L_003B5F58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B5F88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5F68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003B5F68u) [[unlikely]] return; }
L_003B5F68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5F74u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 157u, depth + 1u); else { c.pc = 0x0023A290u; return; } if (c.pc != 0x003B5F74u) [[unlikely]] return; }
L_003B5F74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5F80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x003B5F80u) [[unlikely]] return; }
L_003B5F80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B5F90; } }
L_003B5F88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5F90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 162u, depth + 1u); else { c.pc = 0x0023A310u; return; } if (c.pc != 0x003B5F90u) [[unlikely]] return; }
L_003B5F90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B5FA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5FB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x003B5FB4u) [[unlikely]] return; }
L_003B5FB4:
    c.f[2] = ld32((c.r[16].w[0] + 8252u));
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 712u), c.f[1]);  if (t) { goto L_003B6008; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 1236u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFE7F0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], 0u + 48u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 1236u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 1236u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6004u); st32((c.r[16].w[0] + 1236u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002E(c, 68u, depth + 1u); else { c.pc = 0x001B9070u; return; } if (c.pc != 0x003B6004u) [[unlikely]] return; }
L_003B6004:
    c.budget -= 1;
L_003B6008:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B6020:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B6030:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B6070; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 1236u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01800000u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0xFE7F0000u);  if (t) { goto L_003B6070; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st32((c.r[4].w[0] + 1236u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1236u)));
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 1236u), c.r[3].w[0]);
    c.budget -= 7;
L_003B6070:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B6080:
    set32(c.r[6], ld32((c.r[4].w[0] + 1236u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFE7F0000u);
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st32((c.r[4].w[0] + 1236u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1236u)));
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 1236u), c.r[3].w[0]);  c.pc = t; return; }
L_003B60B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B60E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] - 5200u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 636u), c.r[2].w[0]);  if (t) { goto L_003B60F8; } }
    c.budget -= 1;
L_003B60E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] - 5776u);
    st32((c.r[16].w[0] + 636u), c.r[2].w[0]);
    c.budget -= 4;
L_003B60F8:
    set32(c.r[18], c.r[16].w[0] + 304u);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003B6100:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B610Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 110u, depth + 1u); else { c.pc = 0x0020D110u; return; } if (c.pc != 0x003B610Cu) [[unlikely]] return; }
L_003B610C:
    set32(c.r[2], 0u + 255u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6100u | kUnwind; return; } goto L_003B6100; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6130u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 186u, depth + 1u); else { c.pc = 0x0016EB40u; return; } if (c.pc != 0x003B6130u) [[unlikely]] return; }
L_003B6130:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6140u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x003B6140u) [[unlikely]] return; }
L_003B6140:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B614Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0077(c, 370u, depth + 1u); else { c.pc = 0x002DF630u; return; } if (c.pc != 0x003B614Cu) [[unlikely]] return; }
L_003B614C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B6170:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B6180:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 680u));
    c.r[2].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003B6198; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B61D0; } }
L_003B6198:
    c.r[2].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003B61B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B61D0; } }
    c.budget -= 1;
L_003B61B0:
    c.r[2].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B61C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B61D0; } }
    c.budget -= 1;
L_003B61C8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_003B61D0:
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[3].w[0] + 304u);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 304u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003B6210; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 32u);  if (t) { goto L_003B6200; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003B6210; } }
L_003B6200:
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 48u);  if (t) { goto L_003B6210; } }
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_003B6210:
    c.budget -= 2;
    { set32(c.r[5], 0u + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B9200u | kUnwind; return; } [[clang::musttail]] return unit_002E(c, 79u, depth); }
L_003B6220:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B6250; } }
    set32(c.r[4], c.r[3].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 712u), c.r[3].w[0]);  if (t) { goto L_003B62F8; } }
    c.budget -= 1;
L_003B6250:
    c.f[2] = ld32((c.r[16].w[0] + 8292u));
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 712u), c.f[1]);  if (t) { goto L_003B62F8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B627Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 277u, depth + 1u); else { c.pc = 0x003C6580u; return; } if (c.pc != 0x003B627Cu) [[unlikely]] return; }
L_003B627C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003B62E0; } }
    set32(c.r[7], c.r[16].w[0] + 304u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 16u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
L_003B6298:
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_003B62B8; } }
    c.r[2].d[0] = ld8((c.r[7].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B62B8; } }
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_003B62B8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6298u | kUnwind; return; } goto L_003B6298; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B62E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B62D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x003B62D8u) [[unlikely]] return; }
L_003B62D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B62E8; } }
L_003B62E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B62E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 162u, depth + 1u); else { c.pc = 0x0023A310u; return; } if (c.pc != 0x003B62E8u) [[unlikely]] return; }
L_003B62E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B62F4u); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_002E(c, 79u, depth + 1u); else { c.pc = 0x001B9200u; return; } if (c.pc != 0x003B62F4u) [[unlikely]] return; }
L_003B62F4:
    c.budget -= 1;
L_003B62F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B6310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B6340; } }
    set32(c.r[4], c.r[3].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 712u), c.r[3].w[0]);  if (t) { goto L_003B63E8; } }
    c.budget -= 1;
L_003B6340:
    c.f[2] = ld32((c.r[16].w[0] + 8292u));
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 712u), c.f[1]);  if (t) { goto L_003B63E8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1576u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003B63D0; } }
    set32(c.r[7], c.r[16].w[0] + 304u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 32u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
L_003B6380:
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_003B63A8; } }
    c.r[2].d[0] = ld8((c.r[7].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003B63A8; } }
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_003B63A8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6380u | kUnwind; return; } goto L_003B6380; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B63D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B63C8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x003B63C8u) [[unlikely]] return; }
L_003B63C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B63D8; } }
L_003B63D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B63D8u);  if (depth < kMaxDepth) unit_004E(c, 162u, depth + 1u); else { c.pc = 0x0023A310u; return; } if (c.pc != 0x003B63D8u) [[unlikely]] return; }
L_003B63D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B63E4u); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_002E(c, 79u, depth + 1u); else { c.pc = 0x001B9200u; return; } if (c.pc != 0x003B63E4u) [[unlikely]] return; }
L_003B63E4:
    c.budget -= 1;
L_003B63E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B6400:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B6410:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B6420:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B6430:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 4560u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6450u); st32((c.r[4].w[0] + 636u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 186u, depth + 1u); else { c.pc = 0x0016EB40u; return; } if (c.pc != 0x003B6450u) [[unlikely]] return; }
L_003B6450:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6460u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x003B6460u) [[unlikely]] return; }
L_003B6460:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B646Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0077(c, 370u, depth + 1u); else { c.pc = 0x002DF630u; return; } if (c.pc != 0x003B646Cu) [[unlikely]] return; }
L_003B646C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B6480:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B6490:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 3216u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B64BCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B64BCu) [[unlikely]] return; }
L_003B64BC:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B64E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 705u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6508u); st32((c.r[4].w[0] + 712u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003A(c, 183u, depth + 1u); else { c.pc = 0x001EBFA0u; return; } if (c.pc != 0x003B6508u) [[unlikely]] return; }
L_003B6508:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6514u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 115u, depth + 1u); else { c.pc = 0x001EA8D0u; return; } if (c.pc != 0x003B6514u) [[unlikely]] return; }
L_003B6514:
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6524u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 73u, depth + 1u); else { c.pc = 0x001E4ED0u; return; } if (c.pc != 0x003B6524u) [[unlikely]] return; }
L_003B6524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B652Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 56u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x003B652Cu) [[unlikely]] return; }
L_003B652C:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6548u); st16((c.r[16].w[0] + 560u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x003B6548u) [[unlikely]] return; }
L_003B6548:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6558u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x003B6558u) [[unlikely]] return; }
L_003B6558:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6564u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 157u, depth + 1u); else { c.pc = 0x0023A290u; return; } if (c.pc != 0x003B6564u) [[unlikely]] return; }
L_003B6564:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6570u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x003B6570u) [[unlikely]] return; }
L_003B6570:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B6580:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6598u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_003A(c, 183u, depth + 1u); else { c.pc = 0x001EBFA0u; return; } if (c.pc != 0x003B6598u) [[unlikely]] return; }
L_003B6598:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B65A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 115u, depth + 1u); else { c.pc = 0x001EA8D0u; return; } if (c.pc != 0x003B65A4u) [[unlikely]] return; }
L_003B65A4:
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B65B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 73u, depth + 1u); else { c.pc = 0x001E4ED0u; return; } if (c.pc != 0x003B65B4u) [[unlikely]] return; }
L_003B65B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B65BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 56u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x003B65BCu) [[unlikely]] return; }
L_003B65BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B65C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x003B65C4u) [[unlikely]] return; }
L_003B65C4:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B65E8; } }
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 3;
L_003B65E8:
    c.f[1] = ld32((c.r[16].w[0] + 1016u));
    c.f[0] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 712u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B6620; } }
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B6720; } }
    c.budget -= 1;
L_003B6620:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBA830000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[3].d[0] | 4719ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 712u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 104u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 1488u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 48u);  if (t) { goto L_003B6718; } }
    set32(c.r[5], c.r[16].w[0] + 1296u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6660u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003B6660u) [[unlikely]] return; }
L_003B6660:
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.f[1] = ld32((c.r[29].w[0] + 56u));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6674u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003B6674u) [[unlikely]] return; }
L_003B6674:
    c.f[2] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[2].w[0];
    c.f[4] = ld32((c.r[16].w[0] + 108u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[20] = fp::sub(c.f[4], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B66A4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003B66A4u) [[unlikely]] return; }
L_003B66A4:
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = fp::sub(c.f[20], c.f[0]);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    fpu_div(c, 12u, c.f[0], c.f[3]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B66D4u); st32((c.r[16].w[0] + 52u), c.f[12]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x003B66D4u) [[unlikely]] return; }
L_003B66D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B6720; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B66F4u); c.f[12] = ld32((c.r[16].w[0] + 52u));  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x003B66F4u) [[unlikely]] return; }
L_003B66F4:
    c.f[2] = ld32((c.r[16].w[0] + 52u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.f[0]);  if (t) { goto L_003B6720; } }
L_003B6718:
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 2;
L_003B6720:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B6740:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6754u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 183u, depth + 1u); else { c.pc = 0x001EBFA0u; return; } if (c.pc != 0x003B6754u) [[unlikely]] return; }
L_003B6754:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6760u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_003A(c, 115u, depth + 1u); else { c.pc = 0x001EA8D0u; return; } if (c.pc != 0x003B6760u) [[unlikely]] return; }
L_003B6760:
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6770u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 73u, depth + 1u); else { c.pc = 0x001E4ED0u; return; } if (c.pc != 0x003B6770u) [[unlikely]] return; }
L_003B6770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6778u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 56u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x003B6778u) [[unlikely]] return; }
L_003B6778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6780u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x003B6780u) [[unlikely]] return; }
L_003B6780:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B67A0; } }
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 2;
L_003B67A0:
    c.f[2] = ld32((c.r[16].w[0] + 1016u));
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 712u), c.f[1]);  if (t) { goto L_003B67C8; } }
    st32((c.r[16].w[0] + 712u), c.f[0]);
    c.budget -= 2;
L_003B67C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8285u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B6830; } }
    c.f[0] = ld32((c.r[16].w[0] + 712u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B6808; } }
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B6808; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 560u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B6830; } }
L_003B6808:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 3u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6830u); st32((c.r[16].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x003B6830u) [[unlikely]] return; }
L_003B6830:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B6840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1268u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B685Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 73u, depth + 1u); else { c.pc = 0x001E4ED0u; return; } if (c.pc != 0x003B685Cu) [[unlikely]] return; }
L_003B685C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6864u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 56u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x003B6864u) [[unlikely]] return; }
L_003B6864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B686Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x003B686Cu) [[unlikely]] return; }
L_003B686C:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B6890; } }
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 3;
L_003B6890:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8285u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B68A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B68A4u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_002E(c, 68u, depth + 1u); else { c.pc = 0x001B9070u; return; } if (c.pc != 0x003B68A4u) [[unlikely]] return; }
L_003B68A4:
    c.budget -= 1;
L_003B68A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B68C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] - 3200u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003B4000u < 16384u) { entry = entries_00AD[(t - 0x003B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003B68E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 705u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[4].w[0] + 696u)));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 10;
    { st32((c.r[4].w[0] + 712u), c.r[2].w[0]);  goto L_003B6910; }
L_003B6910:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 696u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.r[5].d[0] = c.r[5].d[0] & 512ull;
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003B6968; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] << 48;  if (t) { goto L_003B6A28; } }
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003B6A28; } }
    c.budget -= 1;
L_003B6968:
    c.f[2] = ld32((c.r[16].w[0] + 8252u));
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 712u), c.f[1]);  if (t) { goto L_003B6A38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 712u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B69A0u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x003B69A0u) [[unlikely]] return; }
L_003B69A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B6A08; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B69B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003B69B4u) [[unlikely]] return; }
L_003B69B4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B69C4u); set32(c.r[5], c.r[2].w[0] + 7u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003B69C4u) [[unlikely]] return; }
L_003B69C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B69D0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 157u, depth + 1u); else { c.pc = 0x0023A290u; return; } if (c.pc != 0x003B69D0u) [[unlikely]] return; }
L_003B69D0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B69E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B69E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x003B69E4u) [[unlikely]] return; }
L_003B69E4:
    c.budget -= 1;
L_003B69E8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B69F4u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x003B69F4u) [[unlikely]] return; }
L_003B69F4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003B6A38; } }
    c.budget -= 1;
L_003B6A08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6A10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 162u, depth + 1u); else { c.pc = 0x0023A310u; return; } if (c.pc != 0x003B6A10u) [[unlikely]] return; }
L_003B6A10:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6A1Cu); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_002E(c, 79u, depth + 1u); else { c.pc = 0x001B9200u; return; } if (c.pc != 0x003B6A1Cu) [[unlikely]] return; }
L_003B6A1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B6A38; } }
    c.budget -= 1;
L_003B6A28:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6A34u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_002E(c, 79u, depth + 1u); else { c.pc = 0x001B9200u; return; } if (c.pc != 0x003B6A34u) [[unlikely]] return; }
L_003B6A34:
    c.budget -= 1;
L_003B6A38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B6A50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] - 3192u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003B4000u < 16384u) { entry = entries_00AD[(t - 0x003B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003B6A70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 705u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6AA0u); st32((c.r[4].w[0] + 712u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x003B6AA0u) [[unlikely]] return; }
L_003B6AA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B6AE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6AB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003F(c, 340u, depth + 1u); else { c.pc = 0x001FF740u; return; } if (c.pc != 0x003B6AB0u) [[unlikely]] return; }
L_003B6AB0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6ABCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003F(c, 340u, depth + 1u); else { c.pc = 0x001FF740u; return; } if (c.pc != 0x003B6ABCu) [[unlikely]] return; }
L_003B6ABC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6AC8u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x003B6AC8u) [[unlikely]] return; }
L_003B6AC8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6AD4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 157u, depth + 1u); else { c.pc = 0x0023A290u; return; } if (c.pc != 0x003B6AD4u) [[unlikely]] return; }
L_003B6AD4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6AE0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x003B6AE0u) [[unlikely]] return; }
L_003B6AE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B6AF0; } }
L_003B6AE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6AF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 162u, depth + 1u); else { c.pc = 0x0023A310u; return; } if (c.pc != 0x003B6AF0u) [[unlikely]] return; }
L_003B6AF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B6B00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[4].w[0] + 8252u));
    c.f[1] = ld32((c.r[4].w[0] + 712u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 712u), c.f[1]);  if (t) { goto L_003B6B30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6B2Cu); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_002E(c, 79u, depth + 1u); else { c.pc = 0x001B9200u; return; } if (c.pc != 0x003B6B2Cu) [[unlikely]] return; }
L_003B6B2C:
    c.budget -= 1;
L_003B6B30:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B6B40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B6B50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6B64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 116u, depth + 1u); else { c.pc = 0x001E5650u; return; } if (c.pc != 0x003B6B64u) [[unlikely]] return; }
L_003B6B64:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B6BA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6B88u);  if (depth < kMaxDepth) unit_0039(c, 116u, depth + 1u); else { c.pc = 0x001E5650u; return; } if (c.pc != 0x003B6B88u) [[unlikely]] return; }
L_003B6B88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.budget -= 6;
L_003B6BA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B6BB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B6BC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B6BF0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] - 2288u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 636u), c.r[2].w[0]);  if (t) { goto L_003B6C00; } }
    c.budget -= 1;
L_003B6BF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] - 3056u);
    st32((c.r[16].w[0] + 636u), c.r[2].w[0]);
    c.budget -= 4;
L_003B6C00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6C08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 186u, depth + 1u); else { c.pc = 0x0016EB40u; return; } if (c.pc != 0x003B6C08u) [[unlikely]] return; }
L_003B6C08:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6C18u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x003B6C18u) [[unlikely]] return; }
L_003B6C18:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6C24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0077(c, 370u, depth + 1u); else { c.pc = 0x002DF630u; return; } if (c.pc != 0x003B6C24u) [[unlikely]] return; }
L_003B6C24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B6C40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B6C50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 1504u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6C7Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B6C7Cu) [[unlikely]] return; }
L_003B6C7C:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B6CA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 705u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st8((c.r[4].w[0] + 304u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { st32((c.r[4].w[0] + 712u), c.r[2].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023AAD0u | kUnwind; return; } [[clang::musttail]] return unit_004E(c, 183u, depth); }
L_003B6CD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6CE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 183u, depth + 1u); else { c.pc = 0x001EBFA0u; return; } if (c.pc != 0x003B6CE4u) [[unlikely]] return; }
L_003B6CE4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6CF0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 115u, depth + 1u); else { c.pc = 0x001EA8D0u; return; } if (c.pc != 0x003B6CF0u) [[unlikely]] return; }
L_003B6CF0:
    c.f[1] = ld32((c.r[16].w[0] + 8252u));
    c.f[0] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 712u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B6D28; } }
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B6DA8; } }
    c.budget -= 1;
L_003B6D28:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6D58u); st32((c.r[16].w[0] + 712u), c.f[0]);  if (depth < kMaxDepth) unit_003A(c, 183u, depth + 1u); else { c.pc = 0x001EBFA0u; return; } if (c.pc != 0x003B6D58u) [[unlikely]] return; }
L_003B6D58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B6DA8; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    set32(c.r[5], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42140000u);
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 712u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6D98u); st16((c.r[16].w[0] + 560u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x003B6D98u) [[unlikely]] return; }
L_003B6D98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6DA8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x003B6DA8u) [[unlikely]] return; }
L_003B6DA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B6DC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6DD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 183u, depth + 1u); else { c.pc = 0x001EBFA0u; return; } if (c.pc != 0x003B6DD4u) [[unlikely]] return; }
L_003B6DD4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6DE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 115u, depth + 1u); else { c.pc = 0x001EA8D0u; return; } if (c.pc != 0x003B6DE0u) [[unlikely]] return; }
L_003B6DE0:
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B6E18; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6E0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 73u, depth + 1u); else { c.pc = 0x001E4ED0u; return; } if (c.pc != 0x003B6E0Cu) [[unlikely]] return; }
L_003B6E0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6E14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 56u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x003B6E14u) [[unlikely]] return; }
L_003B6E14:
    c.budget -= 1;
L_003B6E18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = ld32((c.r[16].w[0] + 8252u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 712u));
    c.f[12] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6E38u); st32((c.r[16].w[0] + 712u), c.f[0]);  if (depth < kMaxDepth) unit_003B(c, 8u, depth + 1u); else { c.pc = 0x001EC1A0u; return; } if (c.pc != 0x003B6E38u) [[unlikely]] return; }
L_003B6E38:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003B6E60; } }
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B6EA8; } }
    c.budget -= 1;
L_003B6E60:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    set32(c.r[5], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42140000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 712u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6E98u); st16((c.r[16].w[0] + 560u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x003B6E98u) [[unlikely]] return; }
L_003B6E98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6EA8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x003B6EA8u) [[unlikely]] return; }
L_003B6EA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B6EC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6EDCu); set32(c.r[16], c.r[17].w[0] + 304u);  if (depth < kMaxDepth) unit_003A(c, 183u, depth + 1u); else { c.pc = 0x001EBFA0u; return; } if (c.pc != 0x003B6EDCu) [[unlikely]] return; }
L_003B6EDC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6EE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 115u, depth + 1u); else { c.pc = 0x001EA8D0u; return; } if (c.pc != 0x003B6EE8u) [[unlikely]] return; }
L_003B6EE8:
    set32(c.r[5], ld32((c.r[17].w[0] + 1268u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6EF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 73u, depth + 1u); else { c.pc = 0x001E4ED0u; return; } if (c.pc != 0x003B6EF8u) [[unlikely]] return; }
L_003B6EF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6F00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 56u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x003B6F00u) [[unlikely]] return; }
L_003B6F00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6F08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x003B6F08u) [[unlikely]] return; }
L_003B6F08:
    c.f[13] = ld32((c.r[17].w[0] + 712u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6F28u); c.f[12] = fp::sub(c.f[13], c.f[0]);  if (depth < kMaxDepth) unit_003B(c, 291u, depth + 1u); else { c.pc = 0x001EF080u; return; } if (c.pc != 0x003B6F28u) [[unlikely]] return; }
L_003B6F28:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[12] = ld32((c.r[17].w[0] + 712u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6F48u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 148u, depth + 1u); else { c.pc = 0x001DD100u; return; } if (c.pc != 0x003B6F48u) [[unlikely]] return; }
L_003B6F48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B6FA8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B6FA8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 705u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6F90u); st16((c.r[17].w[0] + 560u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x003B6F90u) [[unlikely]] return; }
L_003B6F90:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6FA0u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x003B6FA0u) [[unlikely]] return; }
L_003B6FA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B6FC0; } }
L_003B6FA8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8285u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003B6FC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6FBCu); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_002E(c, 68u, depth + 1u); else { c.pc = 0x001B9070u; return; } if (c.pc != 0x003B6FBCu) [[unlikely]] return; }
L_003B6FBC:
    c.budget -= 1;
L_003B6FC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B6FE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6FF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 183u, depth + 1u); else { c.pc = 0x001EBFA0u; return; } if (c.pc != 0x003B6FF4u) [[unlikely]] return; }
L_003B6FF4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7000u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003A(c, 115u, depth + 1u); else { c.pc = 0x001EA8D0u; return; } if (c.pc != 0x003B7000u) [[unlikely]] return; }
L_003B7000:
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7010u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 73u, depth + 1u); else { c.pc = 0x001E4ED0u; return; } if (c.pc != 0x003B7010u) [[unlikely]] return; }
L_003B7010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7018u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 56u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x003B7018u) [[unlikely]] return; }
L_003B7018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7020u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x003B7020u) [[unlikely]] return; }
L_003B7020:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8285u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B7038; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7034u); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_002E(c, 68u, depth + 1u); else { c.pc = 0x001B9070u; return; } if (c.pc != 0x003B7034u) [[unlikely]] return; }
L_003B7034:
    c.budget -= 1;
L_003B7038:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B7050:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] - 1480u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003B4000u < 16384u) { entry = entries_00AD[(t - 0x003B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003B7070:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 705u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[4].w[0] + 696u)));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 10;
    { st32((c.r[4].w[0] + 712u), c.r[2].w[0]);  goto L_003B70A0; }
L_003B70A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 696u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.r[5].d[0] = c.r[5].d[0] & 512ull;
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003B70F8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] << 48;  if (t) { goto L_003B71B8; } }
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003B71B8; } }
    c.budget -= 1;
L_003B70F8:
    c.f[2] = ld32((c.r[16].w[0] + 8252u));
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 712u), c.f[1]);  if (t) { goto L_003B71C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 712u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7130u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x003B7130u) [[unlikely]] return; }
L_003B7130:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B7198; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7144u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003B7144u) [[unlikely]] return; }
L_003B7144:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7154u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003B7154u) [[unlikely]] return; }
L_003B7154:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7160u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 157u, depth + 1u); else { c.pc = 0x0023A290u; return; } if (c.pc != 0x003B7160u) [[unlikely]] return; }
L_003B7160:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B7178; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7174u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x003B7174u) [[unlikely]] return; }
L_003B7174:
    c.budget -= 1;
L_003B7178:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7184u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x003B7184u) [[unlikely]] return; }
L_003B7184:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003B71C8; } }
    c.budget -= 1;
L_003B7198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B71A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 162u, depth + 1u); else { c.pc = 0x0023A310u; return; } if (c.pc != 0x003B71A0u) [[unlikely]] return; }
L_003B71A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B71ACu); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_002E(c, 79u, depth + 1u); else { c.pc = 0x001B9200u; return; } if (c.pc != 0x003B71ACu) [[unlikely]] return; }
L_003B71AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B71C8; } }
    c.budget -= 1;
L_003B71B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B71C4u); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_002E(c, 79u, depth + 1u); else { c.pc = 0x001B9200u; return; } if (c.pc != 0x003B71C4u) [[unlikely]] return; }
L_003B71C4:
    c.budget -= 1;
L_003B71C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B71E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] - 1472u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003B4000u < 16384u) { entry = entries_00AD[(t - 0x003B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003B7200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[1] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 705u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B723Cu); st32((c.r[4].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_003B(c, 6u, depth + 1u); else { c.pc = 0x001EC130u; return; } if (c.pc != 0x003B723Cu) [[unlikely]] return; }
L_003B723C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7248u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003A(c, 115u, depth + 1u); else { c.pc = 0x001EA8D0u; return; } if (c.pc != 0x003B7248u) [[unlikely]] return; }
L_003B7248:
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7258u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 73u, depth + 1u); else { c.pc = 0x001E4ED0u; return; } if (c.pc != 0x003B7258u) [[unlikely]] return; }
L_003B7258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7260u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 56u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x003B7260u) [[unlikely]] return; }
L_003B7260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7268u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x003B7268u) [[unlikely]] return; }
L_003B7268:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B7280:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7294u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 6u, depth + 1u); else { c.pc = 0x001EC130u; return; } if (c.pc != 0x003B7294u) [[unlikely]] return; }
L_003B7294:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B72A0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003A(c, 115u, depth + 1u); else { c.pc = 0x001EA8D0u; return; } if (c.pc != 0x003B72A0u) [[unlikely]] return; }
L_003B72A0:
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B72B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 73u, depth + 1u); else { c.pc = 0x001E4ED0u; return; } if (c.pc != 0x003B72B0u) [[unlikely]] return; }
L_003B72B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B72B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 56u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x003B72B8u) [[unlikely]] return; }
L_003B72B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B72C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x003B72C0u) [[unlikely]] return; }
L_003B72C0:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B72E0; } }
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 2;
L_003B72E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B7300; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 712u), c.r[3].w[0]);
    c.budget -= 5;
L_003B7300:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B7310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7324u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 6u, depth + 1u); else { c.pc = 0x001EC130u; return; } if (c.pc != 0x003B7324u) [[unlikely]] return; }
L_003B7324:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7330u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003A(c, 115u, depth + 1u); else { c.pc = 0x001EA8D0u; return; } if (c.pc != 0x003B7330u) [[unlikely]] return; }
L_003B7330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7338u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x003B7338u) [[unlikely]] return; }
L_003B7338:
    c.f[2] = ld32((c.r[16].w[0] + 8252u));
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 712u), c.f[1]);  if (t) { goto L_003B73B8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B737Cu); st32((c.r[16].w[0] + 712u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x003B737Cu) [[unlikely]] return; }
L_003B737C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B73B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B738Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003F(c, 379u, depth + 1u); else { c.pc = 0x001FFC60u; return; } if (c.pc != 0x003B738Cu) [[unlikely]] return; }
L_003B738C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7398u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 157u, depth + 1u); else { c.pc = 0x0023A290u; return; } if (c.pc != 0x003B7398u) [[unlikely]] return; }
L_003B7398:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B73A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x003B73A4u) [[unlikely]] return; }
L_003B73A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B73B8; } }
    c.budget -= 1;
L_003B73B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B73B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 162u, depth + 1u); else { c.pc = 0x0023A310u; return; } if (c.pc != 0x003B73B8u) [[unlikely]] return; }
L_003B73B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B73D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B73E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x003B73E4u) [[unlikely]] return; }
L_003B73E4:
    c.f[2] = ld32((c.r[16].w[0] + 8252u));
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 712u), c.f[1]);  if (t) { goto L_003B7410; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7410u); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_002E(c, 68u, depth + 1u); else { c.pc = 0x001B9070u; return; } if (c.pc != 0x003B7410u) [[unlikely]] return; }
L_003B7410:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B7420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 1456u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B744Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B744Cu) [[unlikely]] return; }
L_003B744C:
    set32(c.r[4], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = ld32((c.r[16].w[0] + 8328u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0] + 8328u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B7490:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 705u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 304u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { st32((c.r[4].w[0] + 712u), c.r[2].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023AAD0u | kUnwind; return; } [[clang::musttail]] return unit_004E(c, 183u, depth); }
L_003B74B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 8252u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[4].w[0] + 712u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B74DCu); st32((c.r[4].w[0] + 712u), c.f[0]);  if (depth < kMaxDepth) unit_005A(c, 266u, depth + 1u); else { c.pc = 0x0026AD70u; return; } if (c.pc != 0x003B74DCu) [[unlikely]] return; }
L_003B74DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B7500; } }
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B7588; } }
    c.budget -= 1;
L_003B7500:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[16].w[0] + 1392u);
    set32(c.r[5], c.r[16].w[0] + 8624u);
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7534u); st32((c.r[16].w[0] + 712u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003B7534u) [[unlikely]] return; }
L_003B7534:
    set32(c.r[3], ld32((c.r[16].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B7588; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    set32(c.r[5], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42140000u);
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 712u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7578u); st16((c.r[16].w[0] + 560u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x003B7578u) [[unlikely]] return; }
L_003B7578:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7588u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x003B7588u) [[unlikely]] return; }
L_003B7588:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B75A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B75BCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 266u, depth + 1u); else { c.pc = 0x0026AD70u; return; } if (c.pc != 0x003B75BCu) [[unlikely]] return; }
L_003B75BC:
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B75E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B75E0u); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 199u, depth + 1u); else { c.pc = 0x00269F90u; return; } if (c.pc != 0x003B75E0u) [[unlikely]] return; }
L_003B75E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = ld32((c.r[16].w[0] + 8252u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 712u));
    c.f[12] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7600u); st32((c.r[16].w[0] + 712u), c.f[0]);  if (depth < kMaxDepth) unit_005A(c, 288u, depth + 1u); else { c.pc = 0x0026B130u; return; } if (c.pc != 0x003B7600u) [[unlikely]] return; }
L_003B7600:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003B7628; } }
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B7670; } }
    c.budget -= 1;
L_003B7628:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    set32(c.r[5], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42140000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 712u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7660u); st16((c.r[16].w[0] + 560u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x003B7660u) [[unlikely]] return; }
L_003B7660:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7670u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x003B7670u) [[unlikely]] return; }
L_003B7670:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B7680:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], 0u + 3u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B76A4u); set32(c.r[16], c.r[17].w[0] + 304u);  if (depth < kMaxDepth) unit_005A(c, 266u, depth + 1u); else { c.pc = 0x0026AD70u; return; } if (c.pc != 0x003B76A4u) [[unlikely]] return; }
L_003B76A4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B76B0u); set32(c.r[5], c.r[17].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 199u, depth + 1u); else { c.pc = 0x00269F90u; return; } if (c.pc != 0x003B76B0u) [[unlikely]] return; }
L_003B76B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B76B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x003B76B8u) [[unlikely]] return; }
L_003B76B8:
    c.f[13] = ld32((c.r[17].w[0] + 712u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B76D8u); c.f[12] = fp::sub(c.f[13], c.f[0]);  if (depth < kMaxDepth) unit_003B(c, 291u, depth + 1u); else { c.pc = 0x001EF080u; return; } if (c.pc != 0x003B76D8u) [[unlikely]] return; }
L_003B76D8:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[12] = ld32((c.r[17].w[0] + 712u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B76F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 148u, depth + 1u); else { c.pc = 0x001DD100u; return; } if (c.pc != 0x003B76F8u) [[unlikely]] return; }
L_003B76F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B7758; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B7758; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 705u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7740u); st16((c.r[17].w[0] + 560u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x003B7740u) [[unlikely]] return; }
L_003B7740:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7750u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x003B7750u) [[unlikely]] return; }
L_003B7750:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B7770; } }
L_003B7758:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8285u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003B7770; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B776Cu); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_002E(c, 68u, depth + 1u); else { c.pc = 0x001B9070u; return; } if (c.pc != 0x003B776Cu) [[unlikely]] return; }
L_003B776C:
    c.budget -= 1;
L_003B7770:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B7790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B77ACu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 266u, depth + 1u); else { c.pc = 0x0026AD70u; return; } if (c.pc != 0x003B77ACu) [[unlikely]] return; }
L_003B77AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B77B8u); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 199u, depth + 1u); else { c.pc = 0x00269F90u; return; } if (c.pc != 0x003B77B8u) [[unlikely]] return; }
L_003B77B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B77C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x003B77C0u) [[unlikely]] return; }
L_003B77C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8285u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B77D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B77D4u); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_002E(c, 68u, depth + 1u); else { c.pc = 0x001B9070u; return; } if (c.pc != 0x003B77D4u) [[unlikely]] return; }
L_003B77D4:
    c.budget -= 1;
L_003B77D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B77F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 1424u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B781Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B781Cu) [[unlikely]] return; }
L_003B781C:
    c.f[1] = ld32((c.r[16].w[0] + 8328u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0] + 8328u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B7860:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 705u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B78A4u); st32((c.r[4].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_005A(c, 266u, depth + 1u); else { c.pc = 0x0026AD70u; return; } if (c.pc != 0x003B78A4u) [[unlikely]] return; }
L_003B78A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B78B0u); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 199u, depth + 1u); else { c.pc = 0x00269F90u; return; } if (c.pc != 0x003B78B0u) [[unlikely]] return; }
L_003B78B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B78B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x003B78B8u) [[unlikely]] return; }
L_003B78B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B78D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B78E8u); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 199u, depth + 1u); else { c.pc = 0x00269F90u; return; } if (c.pc != 0x003B78E8u) [[unlikely]] return; }
L_003B78E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B78F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x003B78F0u) [[unlikely]] return; }
L_003B78F0:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B7910; } }
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 2;
L_003B7910:
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7920u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 266u, depth + 1u); else { c.pc = 0x0026AD70u; return; } if (c.pc != 0x003B7920u) [[unlikely]] return; }
L_003B7920:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B7940; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 712u), c.r[3].w[0]);
    c.budget -= 6;
L_003B7940:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B7950:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B796Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 266u, depth + 1u); else { c.pc = 0x0026AD70u; return; } if (c.pc != 0x003B796Cu) [[unlikely]] return; }
L_003B796C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7974u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x003B7974u) [[unlikely]] return; }
L_003B7974:
    c.f[2] = ld32((c.r[16].w[0] + 8252u));
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 712u), c.f[1]);  if (t) { goto L_003B79F0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B79B8u); st32((c.r[16].w[0] + 712u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x003B79B8u) [[unlikely]] return; }
L_003B79B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B79E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B79C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003F(c, 379u, depth + 1u); else { c.pc = 0x001FFC60u; return; } if (c.pc != 0x003B79C8u) [[unlikely]] return; }
L_003B79C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B79D4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 157u, depth + 1u); else { c.pc = 0x0023A290u; return; } if (c.pc != 0x003B79D4u) [[unlikely]] return; }
L_003B79D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B79E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x003B79E0u) [[unlikely]] return; }
L_003B79E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B79F0; } }
L_003B79E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B79F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 162u, depth + 1u); else { c.pc = 0x0023A310u; return; } if (c.pc != 0x003B79F0u) [[unlikely]] return; }
L_003B79F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B7A00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7A14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x003B7A14u) [[unlikely]] return; }
L_003B7A14:
    c.f[2] = ld32((c.r[16].w[0] + 8252u));
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 712u), c.f[1]);  if (t) { goto L_003B7A40; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7A40u); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_002E(c, 68u, depth + 1u); else { c.pc = 0x001B9070u; return; } if (c.pc != 0x003B7A40u) [[unlikely]] return; }
L_003B7A40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B7A50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B7A60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B7A70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B7A80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].d[0] = 0ull | 60416ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 1344u);
    st16((c.r[4].w[0] + 566u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7AA8u); st32((c.r[4].w[0] + 636u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 186u, depth + 1u); else { c.pc = 0x0016EB40u; return; } if (c.pc != 0x003B7AA8u) [[unlikely]] return; }
L_003B7AA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7AB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 39u, depth + 1u); else { c.pc = 0x003C91C0u; return; } if (c.pc != 0x003B7AB0u) [[unlikely]] return; }
L_003B7AB0:
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7ABCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 234u, depth + 1u); else { c.pc = 0x003B9CF0u; return; } if (c.pc != 0x003B7ABCu) [[unlikely]] return; }
L_003B7ABC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7ACCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x003B7ACCu) [[unlikely]] return; }
L_003B7ACC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7AD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0077(c, 370u, depth + 1u); else { c.pc = 0x002DF630u; return; } if (c.pc != 0x003B7AD8u) [[unlikely]] return; }
L_003B7AD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B7AF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    st32((c.r[4].w[0] + 8528u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 306u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 304u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 307u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_003B7B10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[6], 0u + 14u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7B38u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x003B7B38u) [[unlikely]] return; }
L_003B7B38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_003B7B90; } }
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[18], 0u + 1u);
    c.budget -= 2;
L_003B7B48:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7B58u); set32(c.r[5], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003B7B58u) [[unlikely]] return; }
L_003B7B58:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7B48u | kUnwind; return; } goto L_003B7B48; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7B74u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 157u, depth + 1u); else { c.pc = 0x0023A290u; return; } if (c.pc != 0x003B7B74u) [[unlikely]] return; }
L_003B7B74:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7B80u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x003B7B80u) [[unlikely]] return; }
L_003B7B80:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003B7B98; } }
L_003B7B90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7B98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 162u, depth + 1u); else { c.pc = 0x0023A310u; return; } if (c.pc != 0x003B7B98u) [[unlikely]] return; }
L_003B7B98:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7BA4u); set32(c.r[5], 0u + 60u);  if (depth < kMaxDepth) unit_002E(c, 79u, depth + 1u); else { c.pc = 0x001B9200u; return; } if (c.pc != 0x003B7BA4u) [[unlikely]] return; }
L_003B7BA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003B7BC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] + 4128u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003B4000u < 16384u) { entry = entries_00AD[(t - 0x003B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003B7BE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 304u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 304u);  if (t) { goto L_003B7C10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7C04u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_002E(c, 68u, depth + 1u); else { c.pc = 0x001B9070u; return; } if (c.pc != 0x003B7C04u) [[unlikely]] return; }
L_003B7C04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B7C80; } }
    c.budget -= 1;
L_003B7C10:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B7C30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003B7C78; } }
L_003B7C30:
    set32(c.r[2], 0u + 1u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[8], 0u + 12u);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 814u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    set32(c.r[3], 0u + 2u);
    c.r[5].d[0] = 0ull + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 3u);
    set32(c.r[7], 0u + 15u);
    st16((c.r[16].w[0] + 816u), static_cast<std::uint16_t>(c.r[9].w[0]));
    st16((c.r[16].w[0] + 814u), static_cast<std::uint16_t>(c.r[8].w[0]));
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 1264u), 0u);
    st32((c.r[16].w[0] + 1260u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7C78u); st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_002C(c, 131u, depth + 1u); else { c.pc = 0x001B1D70u; return; } if (c.pc != 0x003B7C78u) [[unlikely]] return; }
L_003B7C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7C80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 464u, depth + 1u); else { c.pc = 0x003B7C90u; return; } if (c.pc != 0x003B7C80u) [[unlikely]] return; }
L_003B7C80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B7C90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 305u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] + 4136u);
    set32(c.r[5], c.r[4].w[0] + 304u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003B4000u < 16384u) { entry = entries_00AD[(t - 0x003B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003B7CC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 706u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B7D80; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003B7CF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B7D98; } }
    c.budget -= 1;
L_003B7CF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7D00u);  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x003B7D00u) [[unlikely]] return; }
L_003B7D00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B7D20; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7D14u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 57u, depth + 1u); else { c.pc = 0x001E4C20u; return; } if (c.pc != 0x003B7D14u) [[unlikely]] return; }
L_003B7D14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B7D98; } }
    c.budget -= 1;
L_003B7D20:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7D30u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 277u, depth + 1u); else { c.pc = 0x003C6580u; return; } if (c.pc != 0x003B7D30u) [[unlikely]] return; }
L_003B7D30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003B7D58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7D40u);  if (depth < kMaxDepth) unit_004E(c, 162u, depth + 1u); else { c.pc = 0x0023A310u; return; } if (c.pc != 0x003B7D40u) [[unlikely]] return; }
L_003B7D40:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7D4Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_002E(c, 68u, depth + 1u); else { c.pc = 0x001B9070u; return; } if (c.pc != 0x003B7D4Cu) [[unlikely]] return; }
L_003B7D4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B7D98; } }
    c.budget -= 1;
L_003B7D58:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 706u)));
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 706u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7D78u); st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 157u, depth + 1u); else { c.pc = 0x0023A290u; return; } if (c.pc != 0x003B7D78u) [[unlikely]] return; }
L_003B7D78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B7D98; } }
L_003B7D80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u + 60u);  if (t) { goto L_003B7D98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7D94u);  if (depth < kMaxDepth) unit_002E(c, 68u, depth + 1u); else { c.pc = 0x001B9070u; return; } if (c.pc != 0x003B7D94u) [[unlikely]] return; }
L_003B7D94:
    c.budget -= 1;
L_003B7D98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B7DB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 706u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003B7EB0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[6], 0u + 1u);  if (t) { goto L_003B7E60; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_003B7E08; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B7DF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B7EC8; } }
L_003B7DF8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 706u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003B7EC8; } }
    c.budget -= 1;
L_003B7E08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7E10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 277u, depth + 1u); else { c.pc = 0x003C6580u; return; } if (c.pc != 0x003B7E10u) [[unlikely]] return; }
L_003B7E10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003B7E38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7E20u);  if (depth < kMaxDepth) unit_004E(c, 162u, depth + 1u); else { c.pc = 0x0023A310u; return; } if (c.pc != 0x003B7E20u) [[unlikely]] return; }
L_003B7E20:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7E2Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_002E(c, 68u, depth + 1u); else { c.pc = 0x001B9070u; return; } if (c.pc != 0x003B7E2Cu) [[unlikely]] return; }
L_003B7E2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B7EC8; } }
    c.budget -= 1;
L_003B7E38:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 706u)));
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 706u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7E58u); st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 157u, depth + 1u); else { c.pc = 0x0023A290u; return; } if (c.pc != 0x003B7E58u) [[unlikely]] return; }
L_003B7E58:
    st32((c.r[17].w[0] + 108u), 0u);
    c.budget -= 2;
L_003B7E60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[1] = c.r[2].w[0];
    c.f[12] = 0u;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7E94u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 73u, depth + 1u); else { c.pc = 0x001E4ED0u; return; } if (c.pc != 0x003B7E94u) [[unlikely]] return; }
L_003B7E94:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003B7EC8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 706u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 706u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_003B7EB0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003B7EC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7EC4u); set32(c.r[5], 0u + 60u);  if (depth < kMaxDepth) unit_002E(c, 68u, depth + 1u); else { c.pc = 0x001B9070u; return; } if (c.pc != 0x003B7EC4u) [[unlikely]] return; }
L_003B7EC4:
    c.budget -= 1;
L_003B7EC8:
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7ED8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x003B7ED8u) [[unlikely]] return; }
L_003B7ED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7EE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 56u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x003B7EE0u) [[unlikely]] return; }
L_003B7EE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B7F00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[6], 0u + 14u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7F28u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x003B7F28u) [[unlikely]] return; }
L_003B7F28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_003B7F80; } }
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[18], 0u + 29u);
    c.budget -= 2;
L_003B7F38:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7F48u); set32(c.r[5], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003B7F48u) [[unlikely]] return; }
L_003B7F48:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7F38u | kUnwind; return; } goto L_003B7F38; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7F64u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 157u, depth + 1u); else { c.pc = 0x0023A290u; return; } if (c.pc != 0x003B7F64u) [[unlikely]] return; }
L_003B7F64:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7F70u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x003B7F70u) [[unlikely]] return; }
L_003B7F70:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003B7F88; } }
L_003B7F80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7F88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 162u, depth + 1u); else { c.pc = 0x0023A310u; return; } if (c.pc != 0x003B7F88u) [[unlikely]] return; }
L_003B7F88:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7F94u); set32(c.r[5], 0u + 60u);  if (depth < kMaxDepth) unit_002E(c, 79u, depth + 1u); else { c.pc = 0x001B9200u; return; } if (c.pc != 0x003B7F94u) [[unlikely]] return; }
L_003B7F94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003B7FB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B7FC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8565u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00AE(c, 4u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7FECu);  if (depth < kMaxDepth) unit_0037(c, 148u, depth + 1u); else { c.pc = 0x001DD100u; return; } if (c.pc != 0x003B7FECu) [[unlikely]] return; }
L_003B7FEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00AE(c, 4u, depth); } }
    c.f[0] = ld32((c.r[16].w[0] + 2352u));
    set32(c.r[2], c.r[29].w[0] + 52u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    [[clang::musttail]] return unit_00AE(c, 1u, depth);
}

}
