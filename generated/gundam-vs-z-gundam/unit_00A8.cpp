#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00A8[4096] = {
    1, 0, 2, 3, 4, 0, 5, 0, 0, 0, 6, 7, 0, 8, 9, 10, 11, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 18, 0, 19, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0,
    0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0,
    0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0,
    0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0,
    50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 0, 56, 0, 57, 0, 0, 58, 0,
    59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0,
    0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 77, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0,
    0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 98, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 108, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0,
    0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0,
    0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0,
    0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 164, 0,
    0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 176, 0, 0, 0,
    0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0,
    183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0,
    0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0,
    0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0,
    205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 230, 0, 0, 0,
    0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 237, 0, 0, 0, 238, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0,
    0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 244, 0, 245, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 249, 0, 0, 0,
    0, 0, 0, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0,
    0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0,
    0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0,
    293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 301, 0, 0, 302, 0, 0, 303, 0, 0, 304, 0, 0, 305, 0, 0, 306, 0,
    0, 307, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 314, 0, 0, 315,
    0, 0, 0, 316, 0, 0, 317, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 322, 0, 0, 323, 0, 0, 324, 0,
    0, 325, 0, 0, 326, 0, 0, 327, 0, 0, 328, 0, 0, 329, 0, 0, 330, 0, 0, 331, 332, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0,
    0, 335, 0, 0, 336, 0, 0, 337, 338, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 342, 0, 0, 343,
    0, 0, 344, 0, 0, 345, 0, 0, 346, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0,
    351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0,
    0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0,
    0, 0, 358, 0, 0, 0, 359, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0,
    0, 0, 364, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0,
    0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0, 371, 0, 372, 0, 0, 0, 373, 0, 0, 0, 374, 0,
    0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0,
    377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0,
    0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    390, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0,
    0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    398, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    400, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0,
    405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    409, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    415, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0,
    0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0,
    422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427,
    0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0,
    0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0,
    0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0,
};

void unit_00A8(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003A0000;
    case 2u: goto L_003A0008;
    case 3u: goto L_003A000C;
    case 4u: goto L_003A0010;
    case 5u: goto L_003A0018;
    case 6u: goto L_003A0028;
    case 7u: goto L_003A002C;
    case 8u: goto L_003A0034;
    case 9u: goto L_003A0038;
    case 10u: goto L_003A003C;
    case 11u: goto L_003A0040;
    case 12u: goto L_003A0048;
    case 13u: goto L_003A0050;
    case 14u: goto L_003A00A8;
    case 15u: goto L_003A00AC;
    case 16u: goto L_003A00D4;
    case 17u: goto L_003A00DC;
    case 18u: goto L_003A00F0;
    case 19u: goto L_003A00F8;
    case 20u: goto L_003A0128;
    case 21u: goto L_003A0140;
    case 22u: goto L_003A01C8;
    case 23u: goto L_003A01F8;
    case 24u: goto L_003A022C;
    case 25u: goto L_003A0240;
    case 26u: goto L_003A0260;
    case 27u: goto L_003A0278;
    case 28u: goto L_003A028C;
    case 29u: goto L_003A02F8;
    case 30u: goto L_003A0308;
    case 31u: goto L_003A0318;
    case 32u: goto L_003A0340;
    case 33u: goto L_003A0368;
    case 34u: goto L_003A0378;
    case 35u: goto L_003A0384;
    case 36u: goto L_003A039C;
    case 37u: goto L_003A03D0;
    case 38u: goto L_003A03EC;
    case 39u: goto L_003A03F8;
    case 40u: goto L_003A0424;
    case 41u: goto L_003A0430;
    case 42u: goto L_003A044C;
    case 43u: goto L_003A0460;
    case 44u: goto L_003A0468;
    case 45u: goto L_003A049C;
    case 46u: goto L_003A04B0;
    case 47u: goto L_003A04CC;
    case 48u: goto L_003A04D4;
    case 49u: goto L_003A04F4;
    case 50u: goto L_003A0500;
    case 51u: goto L_003A0524;
    case 52u: goto L_003A0568;
    case 53u: goto L_003A05A8;
    case 54u: goto L_003A05C8;
    case 55u: goto L_003A05D0;
    case 56u: goto L_003A05E4;
    case 57u: goto L_003A05EC;
    case 58u: goto L_003A05F8;
    case 59u: goto L_003A0600;
    case 60u: goto L_003A062C;
    case 61u: goto L_003A0640;
    case 62u: goto L_003A0648;
    case 63u: goto L_003A0660;
    case 64u: goto L_003A0668;
    case 65u: goto L_003A0698;
    case 66u: goto L_003A06A0;
    case 67u: goto L_003A06A8;
    case 68u: goto L_003A06F0;
    case 69u: goto L_003A0728;
    case 70u: goto L_003A0740;
    case 71u: goto L_003A0760;
    case 72u: goto L_003A0778;
    case 73u: goto L_003A079C;
    case 74u: goto L_003A07A8;
    case 75u: goto L_003A07D8;
    case 76u: goto L_003A07E8;
    case 77u: goto L_003A07F0;
    case 78u: goto L_003A0824;
    case 79u: goto L_003A0838;
    case 80u: goto L_003A0848;
    case 81u: goto L_003A0860;
    case 82u: goto L_003A0868;
    case 83u: goto L_003A088C;
    case 84u: goto L_003A08B8;
    case 85u: goto L_003A08E0;
    case 86u: goto L_003A0910;
    case 87u: goto L_003A0918;
    case 88u: goto L_003A0950;
    case 89u: goto L_003A0958;
    case 90u: goto L_003A0980;
    case 91u: goto L_003A09A0;
    case 92u: goto L_003A09B0;
    case 93u: goto L_003A09E8;
    case 94u: goto L_003A0A30;
    case 95u: goto L_003A0A38;
    case 96u: goto L_003A0A58;
    case 97u: goto L_003A0A68;
    case 98u: goto L_003A0A98;
    case 99u: goto L_003A0A9C;
    case 100u: goto L_003A0AB0;
    case 101u: goto L_003A0AD4;
    case 102u: goto L_003A0B20;
    case 103u: goto L_003A0B34;
    case 104u: goto L_003A0B48;
    case 105u: goto L_003A0B58;
    case 106u: goto L_003A0BE0;
    case 107u: goto L_003A0BE8;
    case 108u: goto L_003A0C88;
    case 109u: goto L_003A0C94;
    case 110u: goto L_003A0C9C;
    case 111u: goto L_003A0CB4;
    case 112u: goto L_003A0CC0;
    case 113u: goto L_003A0CD0;
    case 114u: goto L_003A0CE0;
    case 115u: goto L_003A0CF8;
    case 116u: goto L_003A0D10;
    case 117u: goto L_003A0D30;
    case 118u: goto L_003A0D40;
    case 119u: goto L_003A0D60;
    case 120u: goto L_003A0DA0;
    case 121u: goto L_003A0DB0;
    case 122u: goto L_003A0DD8;
    case 123u: goto L_003A0E18;
    case 124u: goto L_003A0E70;
    case 125u: goto L_003A0EB0;
    case 126u: goto L_003A0EE4;
    case 127u: goto L_003A0EF0;
    case 128u: goto L_003A0F20;
    case 129u: goto L_003A0F28;
    case 130u: goto L_003A0F70;
    case 131u: goto L_003A0F78;
    case 132u: goto L_003A0F90;
    case 133u: goto L_003A0FD0;
    case 134u: goto L_003A0FE8;
    case 135u: goto L_003A101C;
    case 136u: goto L_003A1030;
    case 137u: goto L_003A1054;
    case 138u: goto L_003A105C;
    case 139u: goto L_003A1068;
    case 140u: goto L_003A10A8;
    case 141u: goto L_003A10B0;
    case 142u: goto L_003A10E8;
    case 143u: goto L_003A1110;
    case 144u: goto L_003A1118;
    case 145u: goto L_003A112C;
    case 146u: goto L_003A1140;
    case 147u: goto L_003A1148;
    case 148u: goto L_003A1198;
    case 149u: goto L_003A11D0;
    case 150u: goto L_003A11D8;
    case 151u: goto L_003A1230;
    case 152u: goto L_003A123C;
    case 153u: goto L_003A126C;
    case 154u: goto L_003A1278;
    case 155u: goto L_003A1288;
    case 156u: goto L_003A1298;
    case 157u: goto L_003A12C0;
    case 158u: goto L_003A12D4;
    case 159u: goto L_003A1304;
    case 160u: goto L_003A1320;
    case 161u: goto L_003A132C;
    case 162u: goto L_003A135C;
    case 163u: goto L_003A1368;
    case 164u: goto L_003A1378;
    case 165u: goto L_003A1388;
    case 166u: goto L_003A13B4;
    case 167u: goto L_003A13D8;
    case 168u: goto L_003A1408;
    case 169u: goto L_003A1410;
    case 170u: goto L_003A144C;
    case 171u: goto L_003A145C;
    case 172u: goto L_003A1468;
    case 173u: goto L_003A14A0;
    case 174u: goto L_003A14A8;
    case 175u: goto L_003A14EC;
    case 176u: goto L_003A14F0;
    case 177u: goto L_003A1510;
    case 178u: goto L_003A1580;
    case 179u: goto L_003A15A0;
    case 180u: goto L_003A15C0;
    case 181u: goto L_003A15D4;
    case 182u: goto L_003A15DC;
    case 183u: goto L_003A1600;
    case 184u: goto L_003A1610;
    case 185u: goto L_003A1634;
    case 186u: goto L_003A166C;
    case 187u: goto L_003A1698;
    case 188u: goto L_003A16B0;
    case 189u: goto L_003A16D0;
    case 190u: goto L_003A1704;
    case 191u: goto L_003A1764;
    case 192u: goto L_003A1798;
    case 193u: goto L_003A17C8;
    case 194u: goto L_003A17D8;
    case 195u: goto L_003A17F0;
    case 196u: goto L_003A181C;
    case 197u: goto L_003A1854;
    case 198u: goto L_003A1870;
    case 199u: goto L_003A1890;
    case 200u: goto L_003A18C4;
    case 201u: goto L_003A18F8;
    case 202u: goto L_003A1910;
    case 203u: goto L_003A192C;
    case 204u: goto L_003A1964;
    case 205u: goto L_003A1980;
    case 206u: goto L_003A19A0;
    case 207u: goto L_003A19F0;
    case 208u: goto L_003A1A20;
    case 209u: goto L_003A1A30;
    case 210u: goto L_003A1A5C;
    case 211u: goto L_003A1A70;
    case 212u: goto L_003A1AA4;
    case 213u: goto L_003A1AC4;
    case 214u: goto L_003A1AE0;
    case 215u: goto L_003A1B28;
    case 216u: goto L_003A1B54;
    case 217u: goto L_003A1B6C;
    case 218u: goto L_003A1B90;
    case 219u: goto L_003A1BE0;
    case 220u: goto L_003A1C10;
    case 221u: goto L_003A1C20;
    case 222u: goto L_003A1C80;
    case 223u: goto L_003A1C98;
    case 224u: goto L_003A1CB4;
    case 225u: goto L_003A1CC8;
    case 226u: goto L_003A1CD0;
    case 227u: goto L_003A1D10;
    case 228u: goto L_003A1D58;
    case 229u: goto L_003A1D60;
    case 230u: goto L_003A1D70;
    case 231u: goto L_003A1D88;
    case 232u: goto L_003A1D98;
    case 233u: goto L_003A1DC0;
    case 234u: goto L_003A1E18;
    case 235u: goto L_003A1E28;
    case 236u: goto L_003A1E5C;
    case 237u: goto L_003A1E60;
    case 238u: goto L_003A1E70;
    case 239u: goto L_003A1EA8;
    case 240u: goto L_003A1ED8;
    case 241u: goto L_003A1EF0;
    case 242u: goto L_003A1F14;
    case 243u: goto L_003A1F24;
    case 244u: goto L_003A1F34;
    case 245u: goto L_003A1F3C;
    case 246u: goto L_003A1F40;
    case 247u: goto L_003A1F4C;
    case 248u: goto L_003A1F68;
    case 249u: goto L_003A1F70;
    case 250u: goto L_003A1F90;
    case 251u: goto L_003A1F98;
    case 252u: goto L_003A1FB8;
    case 253u: goto L_003A2018;
    case 254u: goto L_003A2020;
    case 255u: goto L_003A202C;
    case 256u: goto L_003A203C;
    case 257u: goto L_003A2058;
    case 258u: goto L_003A2074;
    case 259u: goto L_003A20D0;
    case 260u: goto L_003A20EC;
    case 261u: goto L_003A2108;
    case 262u: goto L_003A213C;
    case 263u: goto L_003A2144;
    case 264u: goto L_003A2160;
    case 265u: goto L_003A2194;
    case 266u: goto L_003A21B4;
    case 267u: goto L_003A21DC;
    case 268u: goto L_003A21F8;
    case 269u: goto L_003A2208;
    case 270u: goto L_003A2474;
    case 271u: goto L_003A24A0;
    case 272u: goto L_003A24BC;
    case 273u: goto L_003A2510;
    case 274u: goto L_003A2520;
    case 275u: goto L_003A2528;
    case 276u: goto L_003A2560;
    case 277u: goto L_003A25D8;
    case 278u: goto L_003A2620;
    case 279u: goto L_003A2640;
    case 280u: goto L_003A2650;
    case 281u: goto L_003A26A0;
    case 282u: goto L_003A26AC;
    case 283u: goto L_003A26B8;
    case 284u: goto L_003A26D0;
    case 285u: goto L_003A26E8;
    case 286u: goto L_003A2738;
    case 287u: goto L_003A2780;
    case 288u: goto L_003A27B0;
    case 289u: goto L_003A27F8;
    case 290u: goto L_003A2838;
    case 291u: goto L_003A28A4;
    case 292u: goto L_003A28E8;
    case 293u: goto L_003A2900;
    case 294u: goto L_003A2910;
    case 295u: goto L_003A2960;
    case 296u: goto L_003A2970;
    case 297u: goto L_003A29D0;
    case 298u: goto L_003A2A10;
    case 299u: goto L_003A2A24;
    case 300u: goto L_003A2A30;
    case 301u: goto L_003A2A3C;
    case 302u: goto L_003A2A48;
    case 303u: goto L_003A2A54;
    case 304u: goto L_003A2A60;
    case 305u: goto L_003A2A6C;
    case 306u: goto L_003A2A78;
    case 307u: goto L_003A2A84;
    case 308u: goto L_003A2A90;
    case 309u: goto L_003A2AA4;
    case 310u: goto L_003A2AB0;
    case 311u: goto L_003A2ABC;
    case 312u: goto L_003A2AD8;
    case 313u: goto L_003A2AE4;
    case 314u: goto L_003A2AF0;
    case 315u: goto L_003A2AFC;
    case 316u: goto L_003A2B0C;
    case 317u: goto L_003A2B18;
    case 318u: goto L_003A2B24;
    case 319u: goto L_003A2B30;
    case 320u: goto L_003A2B48;
    case 321u: goto L_003A2B54;
    case 322u: goto L_003A2B60;
    case 323u: goto L_003A2B6C;
    case 324u: goto L_003A2B78;
    case 325u: goto L_003A2B84;
    case 326u: goto L_003A2B90;
    case 327u: goto L_003A2B9C;
    case 328u: goto L_003A2BA8;
    case 329u: goto L_003A2BB4;
    case 330u: goto L_003A2BC0;
    case 331u: goto L_003A2BCC;
    case 332u: goto L_003A2BD0;
    case 333u: goto L_003A2BDC;
    case 334u: goto L_003A2BF8;
    case 335u: goto L_003A2C04;
    case 336u: goto L_003A2C10;
    case 337u: goto L_003A2C1C;
    case 338u: goto L_003A2C20;
    case 339u: goto L_003A2C2C;
    case 340u: goto L_003A2C50;
    case 341u: goto L_003A2C64;
    case 342u: goto L_003A2C70;
    case 343u: goto L_003A2C7C;
    case 344u: goto L_003A2C88;
    case 345u: goto L_003A2C94;
    case 346u: goto L_003A2CA0;
    case 347u: goto L_003A2CA8;
    case 348u: goto L_003A2CC0;
    case 349u: goto L_003A2CE8;
    case 350u: goto L_003A2D60;
    case 351u: goto L_003A2D80;
    case 352u: goto L_003A2DE0;
    case 353u: goto L_003A2E04;
    case 354u: goto L_003A2E24;
    case 355u: goto L_003A2E40;
    case 356u: goto L_003A2E50;
    case 357u: goto L_003A2E78;
    case 358u: goto L_003A2E88;
    case 359u: goto L_003A2E98;
    case 360u: goto L_003A2EA0;
    case 361u: goto L_003A2EB4;
    case 362u: goto L_003A2ED0;
    case 363u: goto L_003A2EE4;
    case 364u: goto L_003A2F08;
    case 365u: goto L_003A2F10;
    case 366u: goto L_003A2F38;
    case 367u: goto L_003A2F70;
    case 368u: goto L_003A2F90;
    case 369u: goto L_003A2FB4;
    case 370u: goto L_003A2FC8;
    case 371u: goto L_003A2FD0;
    case 372u: goto L_003A2FD8;
    case 373u: goto L_003A2FE8;
    case 374u: goto L_003A2FF8;
    case 375u: goto L_003A3014;
    case 376u: goto L_003A3060;
    case 377u: goto L_003A3080;
    case 378u: goto L_003A30F0;
    case 379u: goto L_003A3110;
    case 380u: goto L_003A3130;
    case 381u: goto L_003A3150;
    case 382u: goto L_003A31B0;
    case 383u: goto L_003A31DC;
    case 384u: goto L_003A3248;
    case 385u: goto L_003A32C0;
    case 386u: goto L_003A32E8;
    case 387u: goto L_003A3320;
    case 388u: goto L_003A3390;
    case 389u: goto L_003A33B0;
    case 390u: goto L_003A3400;
    case 391u: goto L_003A3424;
    case 392u: goto L_003A3450;
    case 393u: goto L_003A3470;
    case 394u: goto L_003A34E0;
    case 395u: goto L_003A3504;
    case 396u: goto L_003A35B0;
    case 397u: goto L_003A35D4;
    case 398u: goto L_003A3680;
    case 399u: goto L_003A36A0;
    case 400u: goto L_003A3700;
    case 401u: goto L_003A3724;
    case 402u: goto L_003A3820;
    case 403u: goto L_003A384C;
    case 404u: goto L_003A38E0;
    case 405u: goto L_003A3900;
    case 406u: goto L_003A3928;
    case 407u: goto L_003A39B0;
    case 408u: goto L_003A39D8;
    case 409u: goto L_003A3A00;
    case 410u: goto L_003A3A18;
    case 411u: goto L_003A3A50;
    case 412u: goto L_003A3A70;
    case 413u: goto L_003A3AC0;
    case 414u: goto L_003A3AE4;
    case 415u: goto L_003A3B80;
    case 416u: goto L_003A3BA4;
    case 417u: goto L_003A3C30;
    case 418u: goto L_003A3C40;
    case 419u: goto L_003A3C60;
    case 420u: goto L_003A3C84;
    case 421u: goto L_003A3CE0;
    case 422u: goto L_003A3D00;
    case 423u: goto L_003A3D60;
    case 424u: goto L_003A3D90;
    case 425u: goto L_003A3E00;
    case 426u: goto L_003A3E50;
    case 427u: goto L_003A3E7C;
    case 428u: goto L_003A3EA0;
    case 429u: goto L_003A3EF0;
    case 430u: goto L_003A3F10;
    case 431u: goto L_003A3F60;
    case 432u: goto L_003A3F84;
    case 433u: goto L_003A3FB8;
    case 434u: goto L_003A3FD0;
    case 435u: goto L_003A3FF8;
    default: bad_entry(c, 0x003A0000u); return;
    }
L_003A0000:
    c.r[1].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003A0010; } }
    goto L_003A000C;
L_003A0008:
    c.budget -= 1;
L_003A000C:
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003A0010:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 9u));
    c.r[1].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 2;
L_003A0018:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003A0128; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 3425u));
    c.budget -= 2;
L_003A0028:
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003A002C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039FFF0u | kUnwind; return; } [[clang::musttail]] return unit_00A7(c, 366u, depth); } }
L_003A0034:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A0128; } }
    goto L_003A003C;
L_003A0038:
    c.budget -= 1;
L_003A003C:
    c.budget -= 1;
L_003A0040:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 2612u)));
    c.budget -= 2;
L_003A0048:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[4].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_003A0128; } }
    goto L_003A0054;
L_003A0050:
    st32((c.r[4].w[0] + 2612u), c.r[3].w[0]);
    c.budget -= 1;
L_003A0054:
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 9u);
    st8((c.r[4].w[0] + 2600u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 9u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 8u);  if (t) { goto L_003A00B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003A0088; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A00E0; } }
    c.budget -= 1;
L_003A0088:
    set32(c.r[2], 0u + 6u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 462u);
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A00ACu); set32(c.r[4], c.r[2].w[0] + 4813u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003A00ACu) [[unlikely]] return; }
    goto L_003A00AC;
L_003A00A8:
    set32(c.r[4], c.r[2].w[0] + 4813u);
    c.budget -= 1;
L_003A00AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A0128; } }
    c.budget -= 1;
L_003A00B8:
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[6], 0u + 462u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A00D4u); set32(c.r[4], c.r[2].w[0] + 4813u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003A00D4u) [[unlikely]] return; }
L_003A00D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A0128; } }
L_003A00DC:
    c.budget -= 1;
L_003A00E0:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_003A0128; } }
    c.budget -= 1;
L_003A00F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A00F8u);  if (depth < kMaxDepth) unit_00A8(c, 298u, depth + 1u); else { c.pc = 0x003A2A10u; return; } if (c.pc != 0x003A00F8u) [[unlikely]] return; }
L_003A00F8:
    set32(c.r[4], 0u + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2590u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2597u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 22404u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 12;
L_003A0128:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A0140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A0280; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_003A01F0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A0178; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A0330; } }
L_003A0178:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], 0u + 154u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], 0u + 77u);
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 9u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[6].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 3427u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 9u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[4].w[0] + 4659u);
    set32(c.r[7], c.r[3].w[0] + 3427u);
    c.budget -= 20;
L_003A01C8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 2u);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A01C8u | kUnwind; return; } goto L_003A01C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A0330; } }
L_003A01F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A01F8u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x003A01F8u) [[unlikely]] return; }
L_003A01F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A0238; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], 0u + 45u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A022Cu); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003A022Cu) [[unlikely]] return; }
L_003A022C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A0330; } }
    c.budget -= 1;
L_003A0238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0240u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x003A0240u) [[unlikely]] return; }
L_003A0240:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A0268; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0260u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003A0260u) [[unlikely]] return; }
L_003A0260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A0330; } }
L_003A0268:
    set32(c.r[4], c.r[16].w[0] + 10u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0278u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_008D(c, 20u, depth + 1u); else { c.pc = 0x003341D0u; return; } if (c.pc != 0x003A0278u) [[unlikely]] return; }
L_003A0278:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A0330; } }
L_003A0280:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003A028C:
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003A0330; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003A0320; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003A02D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A02C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A0330; } }
L_003A02C8:
    set32(c.r[3], 0u + 4u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003A0330; } }
L_003A02D8:
    set32(c.r[2], 0u + 6u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 462u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A02F8u); set32(c.r[4], c.r[2].w[0] + 4813u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003A02F8u) [[unlikely]] return; }
L_003A02F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[2].w[0] + 4814u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0308u); set32(c.r[5], c.r[2].w[0] + 4660u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x003A0308u) [[unlikely]] return; }
L_003A0308:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[2].w[0] + 4822u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0318u); set32(c.r[5], c.r[2].w[0] + 4668u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x003A0318u) [[unlikely]] return; }
L_003A0318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A0330; } }
L_003A0320:
    set32(c.r[3], 0u + 5u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_003A0330:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A0340:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A06D8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 30832u);
    c.budget -= 3;
L_003A0368:
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003A0000u < 16384u) { entry = entries_00A8[(t - 0x003A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A0378:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0384u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 56u, depth + 1u); else { c.pc = 0x00334D40u; return; } if (c.pc != 0x003A0384u) [[unlikely]] return; }
L_003A0384:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[4].w[0] + 17040u);
    set32(c.r[5], 0u + 50u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A039Cu); set32(c.r[6], c.r[2].w[0] + 4660u);  if (depth < kMaxDepth) unit_008D(c, 108u, depth + 1u); else { c.pc = 0x00335380u; return; } if (c.pc != 0x003A039Cu) [[unlikely]] return; }
L_003A039C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[2].w[0] << 1);  if (t) { goto L_003A06D8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 17040u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], 0u + 16u);
    set32(c.r[4], c.r[3].w[0] + 8u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A03D0u); set32(c.r[5], c.r[2].w[0] + 4668u);  if (depth < kMaxDepth) unit_0007(c, 138u, depth + 1u); else { c.pc = 0x0011E108u; return; } if (c.pc != 0x003A03D0u) [[unlikely]] return; }
L_003A03D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 9u);  if (t) { goto L_003A06D8; } }
    set32(c.r[2], 0u + 135u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A03ECu); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x003788A0u; return; } if (c.pc != 0x003A03ECu) [[unlikely]] return; }
L_003A03EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A06D8; } }
    c.budget -= 1;
L_003A03F8:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], 0u + 15u);
    set32(c.r[4], 0u + 32u);
    st8((c.r[3].w[0] + 3419u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0424u); set32(c.r[5], c.r[2].w[0] + 3419u);  if (depth < kMaxDepth) unit_009E(c, 38u, depth + 1u); else { c.pc = 0x00378B40u; return; } if (c.pc != 0x003A0424u) [[unlikely]] return; }
L_003A0424:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A06D8; } }
    c.budget -= 1;
L_003A0430:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003A06D8; } }
L_003A044C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A06D8; } }
    c.budget -= 1;
L_003A0460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0468u);  if (depth < kMaxDepth) unit_008D(c, 47u, depth + 1u); else { c.pc = 0x00334A20u; return; } if (c.pc != 0x003A0468u) [[unlikely]] return; }
L_003A0468:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A04A8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], 0u + 30u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 3420u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A049Cu); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003A049Cu) [[unlikely]] return; }
L_003A049C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A06D8; } }
    c.budget -= 1;
L_003A04A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A04B0u);  if (depth < kMaxDepth) unit_008D(c, 48u, depth + 1u); else { c.pc = 0x00334A60u; return; } if (c.pc != 0x003A04B0u) [[unlikely]] return; }
L_003A04B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_003A04E0; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A04CCu); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003A04CCu) [[unlikely]] return; }
L_003A04CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A04D4u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x003A04D4u) [[unlikely]] return; }
L_003A04D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A06D8; } }
    c.budget -= 1;
L_003A04E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A04F4u); set32(c.r[4], c.r[2].w[0] + 3419u);  if (depth < kMaxDepth) unit_008D(c, 29u, depth + 1u); else { c.pc = 0x00334480u; return; } if (c.pc != 0x003A04F4u) [[unlikely]] return; }
L_003A04F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A06D8; } }
    c.budget -= 1;
L_003A0500:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[4], 0u + 32u);  if (t) { goto L_003A06D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0524u);  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x003A0524u) [[unlikely]] return; }
L_003A0524:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 3419u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A0550; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], 0u + 15u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003A06D8; } }
    c.budget -= 1;
L_003A0550:
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A06D8; } }
    c.budget -= 1;
L_003A0568:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003A06D8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[4].w[0] + 17040u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[2].w[0] + 4660u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A05A8u); set32(c.r[6], c.r[2].w[0] + 4668u);  if (depth < kMaxDepth) unit_00A8(c, 264u, depth + 1u); else { c.pc = 0x003A2160u; return; } if (c.pc != 0x003A05A8u) [[unlikely]] return; }
L_003A05A8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 9u);  if (t) { goto L_003A06D8; } }
    set32(c.r[2], 0u + 135u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 22u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A05C8u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x003788A0u; return; } if (c.pc != 0x003A05C8u) [[unlikely]] return; }
L_003A05C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A06D8; } }
L_003A05D0:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A05E4u); st8((c.r[2].w[0] + 2528u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 111u, depth + 1u); else { c.pc = 0x00335410u; return; } if (c.pc != 0x003A05E4u) [[unlikely]] return; }
L_003A05E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A05ECu);  if (depth < kMaxDepth) unit_008D(c, 54u, depth + 1u); else { c.pc = 0x00334D00u; return; } if (c.pc != 0x003A05ECu) [[unlikely]] return; }
L_003A05EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A06D8; } }
    c.budget -= 1;
L_003A05F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0600u);  if (depth < kMaxDepth) unit_008D(c, 114u, depth + 1u); else { c.pc = 0x00335440u; return; } if (c.pc != 0x003A0600u) [[unlikely]] return; }
L_003A0600:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_003A06D8; } }
    set32(c.r[4], 0u + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0; st8((c.r[3].w[0] + 2528u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003A0638; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A062Cu); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (depth < kMaxDepth) unit_008D(c, 56u, depth + 1u); else { c.pc = 0x00334D40u; return; } if (c.pc != 0x003A062Cu) [[unlikely]] return; }
L_003A062C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A06D8; } }
    c.budget -= 1;
L_003A0638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0640u);  if (depth < kMaxDepth) unit_008D(c, 55u, depth + 1u); else { c.pc = 0x00334D20u; return; } if (c.pc != 0x003A0640u) [[unlikely]] return; }
L_003A0640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A06D8; } }
L_003A0648:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 21u);
    set32(c.r[2], 0u + 135u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0660u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x003788A0u; return; } if (c.pc != 0x003A0660u) [[unlikely]] return; }
L_003A0660:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A06D8; } }
L_003A0668:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003A06D8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 15u);
    set32(c.r[4], 0u + 76u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_003A0698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A06A0u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x003A06A0u) [[unlikely]] return; }
L_003A06A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A06D8; } }
L_003A06A8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[3], 0u + 3u);  if (t) { goto L_003A06D8; } }
    set32(c.r[4], 0u + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2528u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
L_003A06D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A06F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A09A0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 30880u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003A0000u < 16384u) { entry = entries_00A8[(t - 0x003A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A0728:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[5], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 15600u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0740u); set32(c.r[6], c.r[2].w[0] + 4660u);  if (depth < kMaxDepth) unit_008D(c, 108u, depth + 1u); else { c.pc = 0x00335380u; return; } if (c.pc != 0x003A0740u) [[unlikely]] return; }
L_003A0740:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 7u);  if (t) { goto L_003A0768; } }
    set32(c.r[2], 0u + 315u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0760u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x003788A0u; return; } if (c.pc != 0x003A0760u) [[unlikely]] return; }
L_003A0760:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A09A0; } }
L_003A0768:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A09A0; } }
L_003A0778:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[16].w[0] + 12u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 93u);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 15u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A079Cu); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 38u, depth + 1u); else { c.pc = 0x00378B40u; return; } if (c.pc != 0x003A079Cu) [[unlikely]] return; }
L_003A079C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A09A0; } }
    c.budget -= 1;
L_003A07A8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003A09A0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A09A0; } }
    c.budget -= 1;
L_003A07D8:
    set32(c.r[4], c.r[16].w[0] + 12u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A07E8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_008D(c, 29u, depth + 1u); else { c.pc = 0x00334480u; return; } if (c.pc != 0x003A07E8u) [[unlikely]] return; }
L_003A07E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A07F0u);  if (depth < kMaxDepth) unit_008D(c, 47u, depth + 1u); else { c.pc = 0x00334A20u; return; } if (c.pc != 0x003A07F0u) [[unlikely]] return; }
L_003A07F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A0830; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], 0u + 30u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[3].w[0] + 3420u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0824u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003A0824u) [[unlikely]] return; }
L_003A0824:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A09A0; } }
    c.budget -= 1;
L_003A0830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0838u);  if (depth < kMaxDepth) unit_008D(c, 48u, depth + 1u); else { c.pc = 0x00334A60u; return; } if (c.pc != 0x003A0838u) [[unlikely]] return; }
L_003A0838:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003A09A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0848u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003A0848u) [[unlikely]] return; }
L_003A0848:
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 93u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0860u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x003A0860u) [[unlikely]] return; }
L_003A0860:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A09A0; } }
L_003A0868:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[4], 0u + 93u);  if (t) { goto L_003A09A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A088Cu);  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x003A088Cu) [[unlikely]] return; }
L_003A088C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_003A08C8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], 0u + 15u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 15600u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A08B8u); set32(c.r[5], c.r[2].w[0] + 4660u);  if (depth < kMaxDepth) unit_008D(c, 101u, depth + 1u); else { c.pc = 0x00335290u; return; } if (c.pc != 0x003A08B8u) [[unlikely]] return; }
L_003A08B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 6u);  if (t) { goto L_003A09A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A09A0; } }
L_003A08C8:
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A09A0; } }
    c.budget -= 1;
L_003A08E0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[3], 0u + 7u);  if (t) { goto L_003A09A0; } }
    set32(c.r[2], 0u + 315u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 94u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0910u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x003788A0u; return; } if (c.pc != 0x003A0910u) [[unlikely]] return; }
L_003A0910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A09A0; } }
L_003A0918:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003A09A0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 315u);
    set32(c.r[4], 0u + 99u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0950u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x003788A0u; return; } if (c.pc != 0x003A0950u) [[unlikely]] return; }
L_003A0950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A09A0; } }
L_003A0958:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] < 0; c.r[1].d[0] = c.r[3].sd[0] < 180ll ? 1ull : 0ull;  if (t) { goto L_003A0988; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], 0u + 96u);  if (t) { goto L_003A09A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0980u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x003A0980u) [[unlikely]] return; }
L_003A0980:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A09A0; } }
L_003A0988:
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 76u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A09A0u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x003A09A0u) [[unlikely]] return; }
L_003A09A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A09B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A0D88; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 30912u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003A0000u < 16384u) { entry = entries_00A8[(t - 0x003A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A09E8:
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 17u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003A0A08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003A0A10; } }
    c.budget -= 1;
L_003A0A08:
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003A0A10:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 3426u));
    st8((c.r[28].w[0] - 22408u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[28].w[0] - 22404u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_003A0A30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0A38u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x003A0A38u) [[unlikely]] return; }
L_003A0A38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A0AA8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 10u));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003A0A70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0A58u);  if (depth < kMaxDepth) unit_00A8(c, 273u, depth + 1u); else { c.pc = 0x003A2510u; return; } if (c.pc != 0x003A0A58u) [[unlikely]] return; }
L_003A0A58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003A0A70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0A68u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003A0A68u) [[unlikely]] return; }
L_003A0A68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A0D88; } }
L_003A0A70:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], 0u + 30u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0A9Cu); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003A0A9Cu) [[unlikely]] return; }
    goto L_003A0A9C;
L_003A0A98:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_003A0A9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A0D88; } }
    c.budget -= 1;
L_003A0AA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0AB0u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x003A0AB0u) [[unlikely]] return; }
L_003A0AB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A0B40; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 10u));
    c.r[2].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A0AE0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0AD4u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003A0AD4u) [[unlikely]] return; }
L_003A0AD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A0D88; } }
    c.budget -= 1;
L_003A0AE0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], 0u + 154u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4814u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_003A0B28; } }
    set32(c.r[6], 0u + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], 0u + 30u);
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0B20u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003A0B20u) [[unlikely]] return; }
L_003A0B20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A0D88; } }
L_003A0B28:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0B34u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003A0B34u) [[unlikely]] return; }
L_003A0B34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A0D88; } }
    c.budget -= 1;
L_003A0B40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0B48u);  if (depth < kMaxDepth) unit_008D(c, 48u, depth + 1u); else { c.pc = 0x00334A60u; return; } if (c.pc != 0x003A0B48u) [[unlikely]] return; }
L_003A0B48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003A0BD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0B58u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003A0B58u) [[unlikely]] return; }
L_003A0B58:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 22404u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_003A0B70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A0D88; } }
    c.budget -= 1;
L_003A0B70:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 17u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_003A0BC0; } }
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[28].w[0] - 22408u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 9u));
    c.r[5].d[0] = ld8((c.r[5].w[0] + 3426u));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 9u));
    c.r[1].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003A0D88; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A0D88; } }
L_003A0BC0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003A0D88; } }
L_003A0BD0:
    set32(c.r[4], c.r[16].w[0] + 10u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0BE0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 38u, depth + 1u); else { c.pc = 0x00334730u; return; } if (c.pc != 0x003A0BE0u) [[unlikely]] return; }
L_003A0BE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A0D88; } }
L_003A0BE8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003A0D88; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 10u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003A0C70; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003A0C70; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_003A0C70; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003A0C60; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003A0C40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A0D88; } }
L_003A0C40:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003A0D88; } }
    c.budget -= 1;
L_003A0C60:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A0D88; } }
L_003A0C70:
    set32(c.r[3], 0u + 8u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 10u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 21u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A0D88; } }
L_003A0C88:
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0C94u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A2(c, 325u, depth + 1u); else { c.pc = 0x0038ACF0u; return; } if (c.pc != 0x003A0C94u) [[unlikely]] return; }
L_003A0C94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0C9Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A2(c, 336u, depth + 1u); else { c.pc = 0x0038AE10u; return; } if (c.pc != 0x003A0C9Cu) [[unlikely]] return; }
L_003A0C9C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 2u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0CB4u); set32(c.r[7], c.r[2].w[0] + 4839u);  if (depth < kMaxDepth) unit_008D(c, 323u, depth + 1u); else { c.pc = 0x003374D0u; return; } if (c.pc != 0x003A0CB4u) [[unlikely]] return; }
L_003A0CB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A0D88; } }
    c.budget -= 1;
L_003A0CC0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0CD0u); set32(c.r[4], c.r[2].w[0] + 4839u);  if (depth < kMaxDepth) unit_008D(c, 191u, depth + 1u); else { c.pc = 0x003361D0u; return; } if (c.pc != 0x003A0CD0u) [[unlikely]] return; }
L_003A0CD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003A0D88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0CE0u);  if (depth < kMaxDepth) unit_00A2(c, 336u, depth + 1u); else { c.pc = 0x0038AE10u; return; } if (c.pc != 0x003A0CE0u) [[unlikely]] return; }
L_003A0CE0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003A0D88; } }
L_003A0CF8:
    set32(c.r[3], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 5u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A0D88; } }
    c.budget -= 1;
L_003A0D10:
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0D30u); st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_00A8(c, 308u, depth + 1u); else { c.pc = 0x003A2A90u; return; } if (c.pc != 0x003A0D30u) [[unlikely]] return; }
L_003A0D30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[5], 0u + 50u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0D40u); set32(c.r[4], c.r[4].w[0] + 17040u);  if (depth < kMaxDepth) unit_008D(c, 104u, depth + 1u); else { c.pc = 0x003352F0u; return; } if (c.pc != 0x003A0D40u) [[unlikely]] return; }
L_003A0D40:
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 19u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003A0D88; } }
L_003A0D60:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[3], 0u + 11u);  if (t) { goto L_003A0D88; } }
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_003A0D88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A0DA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A0DE0; } }
    c.budget -= 1;
L_003A0DB0:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A0DB0u | kUnwind; return; } goto L_003A0DB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A0DE0; } }
    c.budget -= 1;
L_003A0DD8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_003A0DE0:
    c.r[6].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = c.r[6].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[6].sd[0] < 160ll ? 1ull : 0ull;  if (t) { goto L_003A0DF8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003A0E30; } }
L_003A0DF8:
    c.r[3].d[0] = c.r[6].sd[0] < 224ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[6].sd[0] < 256ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A0DD8u | kUnwind; return; } goto L_003A0DD8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A0DD8u | kUnwind; return; } goto L_003A0DD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A0E30; } }
    c.budget -= 1;
L_003A0E18:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.budget -= 6;
L_003A0E30:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[6].d[0] = c.r[7].d[0] & 255ull;
    c.r[3].d[0] = c.r[6].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[6].sd[0] < 160ll ? 1ull : 0ull;  if (t) { goto L_003A0E50; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A0E18u | kUnwind; return; } goto L_003A0E18; } }
    c.budget -= 1;
L_003A0E50:
    c.r[3].d[0] = c.r[6].sd[0] < 224ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[6].sd[0] < 256ll ? 1ull : 0ull;  if (t) { goto L_003A0E68; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A0E18u | kUnwind; return; } goto L_003A0E18; } }
    c.budget -= 1;
L_003A0E68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_003A0E70:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A14D8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 31088u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003A0000u < 16384u) { entry = entries_00A8[(t - 0x003A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A0EB0:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], 0u + 15u);
    set32(c.r[4], 0u + 134u);
    st8((c.r[3].w[0] + 3419u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 3420u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0EE4u); set32(c.r[5], c.r[2].w[0] + 3419u);  if (depth < kMaxDepth) unit_009E(c, 38u, depth + 1u); else { c.pc = 0x00378B40u; return; } if (c.pc != 0x003A0EE4u) [[unlikely]] return; }
L_003A0EE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A14D8; } }
    c.budget -= 1;
L_003A0EF0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003A14D8; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A14D8; } }
    c.budget -= 1;
L_003A0F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0F28u); set32(c.r[4], 0u + 8192u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x003A0F28u) [[unlikely]] return; }
L_003A0F28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A0F60; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[3], 0u + 82u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 1630u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 43u);  if (t) { goto L_003A0F60; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003A0F88; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1631u));
    c.r[3].d[0] = c.r[3].d[0] & 34ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A0F88; } }
    c.budget -= 1;
L_003A0F60:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 3419u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003A14D8; } }
L_003A0F70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0F78u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003A0F78u) [[unlikely]] return; }
L_003A0F78:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3419u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003A14D8; } }
    c.budget -= 1;
L_003A0F88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0F90u); set32(c.r[4], 0u + 4096u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x003A0F90u) [[unlikely]] return; }
L_003A0F90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A0FB8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 22568u)));
    set32(c.r[3], 0u + 81u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 1630u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 43u);  if (t) { goto L_003A0FB8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003A0FE0; } }
    c.budget -= 1;
L_003A0FB8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 3419u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003A14D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0FD0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003A0FD0u) [[unlikely]] return; }
L_003A0FD0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3419u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003A14D8; } }
L_003A0FE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0FE8u);  if (depth < kMaxDepth) unit_008D(c, 47u, depth + 1u); else { c.pc = 0x00334A20u; return; } if (c.pc != 0x003A0FE8u) [[unlikely]] return; }
L_003A0FE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A1028; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], 0u + 30u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 3420u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A101Cu); st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003A101Cu) [[unlikely]] return; }
L_003A101C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A14D8; } }
    c.budget -= 1;
L_003A1028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1030u);  if (depth < kMaxDepth) unit_008D(c, 48u, depth + 1u); else { c.pc = 0x00334A60u; return; } if (c.pc != 0x003A1030u) [[unlikely]] return; }
L_003A1030:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 6u);  if (t) { goto L_003A14D8; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 3u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1054u); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003A1054u) [[unlikely]] return; }
L_003A1054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A105Cu); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x003A105Cu) [[unlikely]] return; }
L_003A105C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A14D8; } }
    c.budget -= 1;
L_003A1068:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003A14D8; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[2], 0u + 15u);
    set32(c.r[4], 0u + 76u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 3420u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A10A8u); st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x003A10A8u) [[unlikely]] return; }
L_003A10A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A14D8; } }
L_003A10B0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003A14D8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 3419u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 6u);  if (t) { goto L_003A10F0; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003A10E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003A14D8; } }
L_003A10F0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[2], 0u + 75u);
    set32(c.r[4], 0u + 92u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1110u); st8((c.r[17].w[0] + 21u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x003788A0u; return; } if (c.pc != 0x003A1110u) [[unlikely]] return; }
L_003A1110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1118u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2620u; return; } if (c.pc != 0x003A1118u) [[unlikely]] return; }
L_003A1118:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 768u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A112Cu); set32(c.r[4], c.r[2].w[0] + 9059u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003A112Cu) [[unlikely]] return; }
L_003A112C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], c.r[5].w[0] + 30944u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1140u); set32(c.r[4], c.r[2].w[0] + 9059u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x003A1140u) [[unlikely]] return; }
L_003A1140:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A14D8; } }
L_003A1148:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003A14D8; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 21u));
    set32(c.r[4], 0u + 154u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 4813u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A11A0; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1198u); c.r[4].d[0] = ld8((c.r[17].w[0] + 21u));  if (depth < kMaxDepth) unit_0088(c, 273u, depth + 1u); else { c.pc = 0x003223C0u; return; } if (c.pc != 0x003A1198u) [[unlikely]] return; }
L_003A1198:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A14D8; } }
L_003A11A0:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[17].w[0] + 21u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 21u));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_003A11C8; } }
    set32(c.r[3], 0u + 7u);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003A11C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A14D8; } }
L_003A11D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A11D8u);  if (depth < kMaxDepth) unit_00A7(c, 331u, depth + 1u); else { c.pc = 0x0039FB20u; return; } if (c.pc != 0x003A11D8u) [[unlikely]] return; }
L_003A11D8:
    c.r[16].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], 0u + 2u);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003A12F8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_003A1208; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003A14D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A14D8; } }
    c.budget -= 1;
L_003A1208:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 21u));
    set32(c.r[3], 0u + 154u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[5].w[0] + 30960u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1230u); set32(c.r[6], c.r[2].w[0] + 4814u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x003A1230u) [[unlikely]] return; }
L_003A1230:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A123Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0099(c, 26u, depth + 1u); else { c.pc = 0x00364550u; return; } if (c.pc != 0x003A123Cu) [[unlikely]] return; }
L_003A123C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 21u));
    set32(c.r[2], 0u + 154u);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4822u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_003A1278; } }
    set32(c.r[6], c.r[3].w[0] + 4822u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A126Cu); set32(c.r[5], c.r[5].w[0] + 30976u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x003A126Cu) [[unlikely]] return; }
L_003A126C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1278u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x003A1278u) [[unlikely]] return; }
L_003A1278:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1288u); set32(c.r[5], c.r[5].w[0] + 31008u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x003A1288u) [[unlikely]] return; }
L_003A1288:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1298u); set32(c.r[4], c.r[2].w[0] + 9059u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x003A1298u) [[unlikely]] return; }
L_003A1298:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 21u));
    set32(c.r[3], 0u + 154u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 4813u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[2].w[0] + 9059u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A12C0u); set32(c.r[5], c.r[2].w[0] + 8291u);  if (depth < kMaxDepth) unit_00A8(c, 120u, depth + 1u); else { c.pc = 0x003A0DA0u; return; } if (c.pc != 0x003A12C0u) [[unlikely]] return; }
L_003A12C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], c.r[5].w[0] + 31032u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A12D4u); set32(c.r[4], c.r[2].w[0] + 9059u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x003A12D4u) [[unlikely]] return; }
L_003A12D4:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 21u));
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u + 5u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[17].w[0] + 21u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A14D8; } }
    c.budget -= 1;
L_003A12F8:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 21u));
    set32(c.r[3], 0u + 154u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 3;
L_003A1304:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[5].w[0] + 30960u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1320u); set32(c.r[6], c.r[2].w[0] + 4814u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x003A1320u) [[unlikely]] return; }
L_003A1320:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A132Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0099(c, 26u, depth + 1u); else { c.pc = 0x00364550u; return; } if (c.pc != 0x003A132Cu) [[unlikely]] return; }
L_003A132C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 21u));
    set32(c.r[2], 0u + 154u);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4822u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_003A1368; } }
    set32(c.r[6], c.r[3].w[0] + 4822u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A135Cu); set32(c.r[5], c.r[5].w[0] + 30976u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x003A135Cu) [[unlikely]] return; }
L_003A135C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1368u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x003A1368u) [[unlikely]] return; }
L_003A1368:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1378u); set32(c.r[5], c.r[5].w[0] + 31008u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x003A1378u) [[unlikely]] return; }
L_003A1378:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1388u); set32(c.r[4], c.r[2].w[0] + 9059u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x003A1388u) [[unlikely]] return; }
L_003A1388:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 21u));
    set32(c.r[3], 0u + 154u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[5].w[0] + 31056u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 4813u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A13B4u); set32(c.r[4], c.r[2].w[0] + 9059u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x003A13B4u) [[unlikely]] return; }
L_003A13B4:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 21u));
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u + 5u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[17].w[0] + 21u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A14D8; } }
    c.budget -= 1;
L_003A13D8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[3], 0u + 8u);  if (t) { goto L_003A14D8; } }
    set32(c.r[2], 0u + 25u);
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 76u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1408u); st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x003A1408u) [[unlikely]] return; }
L_003A1408:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A14D8; } }
L_003A1410:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[3], 0u + 9u);  if (t) { goto L_003A14D8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], 0u + 195u);
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 31080u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A144Cu); set32(c.r[4], c.r[2].w[0] + 9059u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011D880u; return; } if (c.pc != 0x003A144Cu) [[unlikely]] return; }
L_003A144C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A145Cu); set32(c.r[5], c.r[2].w[0] + 9059u);  if (depth < kMaxDepth) unit_009E(c, 53u, depth + 1u); else { c.pc = 0x00378EA0u; return; } if (c.pc != 0x003A145Cu) [[unlikely]] return; }
L_003A145C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A14D8; } }
    c.budget -= 1;
L_003A1468:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003A14D8; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[2], 0u + 15u);
    set32(c.r[4], 0u + 76u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A14A0u); st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x003A14A0u) [[unlikely]] return; }
L_003A14A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A14D8; } }
L_003A14A8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[4], 0u + 6u);  if (t) { goto L_003A14D8; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_003A14D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003A14EC:
    c.budget -= 1;
L_003A14F0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 22624u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A0000u < 16384u) { entry = entries_00A8[(t - 0x003A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A1510:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A1528; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003A1578; } }
L_003A1528:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 11u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A1548; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A1558; } }
    c.budget -= 1;
L_003A1548:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003A1558:
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 154u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 10u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 4813u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_003A1578:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A1580:
    set32(c.r[3], 0u + 6u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 2600u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_003A15A0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 22656u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A0000u < 16384u) { entry = entries_00A8[(t - 0x003A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A15C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A15D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 234u, depth + 1u); else { c.pc = 0x0039EC70u; return; } if (c.pc != 0x003A15D4u) [[unlikely]] return; }
L_003A15D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A15DCu);  if (depth < kMaxDepth) unit_00A8(c, 287u, depth + 1u); else { c.pc = 0x003A2780u; return; } if (c.pc != 0x003A15DCu) [[unlikely]] return; }
L_003A15DC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A15F8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003A16B8; } }
    c.budget -= 1;
L_003A15F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1600u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x003A1600u) [[unlikely]] return; }
L_003A1600:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003A1620; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1610u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003A1610u) [[unlikely]] return; }
L_003A1610:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A16B8; } }
    c.budget -= 1;
L_003A1620:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_003A16B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1634u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x003A1634u) [[unlikely]] return; }
L_003A1634:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A1678; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], 0u + 40u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[6].w[0] + 2600u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A166Cu); st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003A166Cu) [[unlikely]] return; }
L_003A166C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A16B8; } }
    c.budget -= 1;
L_003A1678:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[16].w[0] + 11u);
    set32(c.r[6], 0u + 2u);
    st8((c.r[2].w[0] + 2601u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 20u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1698u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_008D(c, 20u, depth + 1u); else { c.pc = 0x003341D0u; return; } if (c.pc != 0x003A1698u) [[unlikely]] return; }
L_003A1698:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A16B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A16B0u);  if (depth < kMaxDepth) unit_00A7(c, 261u, depth + 1u); else { c.pc = 0x0039EF60u; return; } if (c.pc != 0x003A16B0u) [[unlikely]] return; }
L_003A16B0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2601u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003A16B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A16D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 20508u));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = ld8((c.r[4].w[0] + 21u));  if (t) { goto L_003A1710; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1704u);  if (depth < kMaxDepth) unit_00A8(c, 287u, depth + 1u); else { c.pc = 0x003A2780u; return; } if (c.pc != 0x003A1704u) [[unlikely]] return; }
L_003A1704:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A17D8; } }
    c.budget -= 1;
L_003A1710:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_003A17D0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], 0u + 154u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[5].d[0] = ld8((c.r[17].w[0] + 11u));
    set32(c.r[6], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 17040u);
    set32(c.r[4], c.r[3].w[0] + 4814u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1764u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x003A1764u) [[unlikely]] return; }
L_003A1764:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1798u); set32(c.r[5], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x003A1798u) [[unlikely]] return; }
L_003A1798:
    set32(c.r[2], 0u + 6u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A17C8u); st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A8(c, 319u, depth + 1u); else { c.pc = 0x003A2B30u; return; } if (c.pc != 0x003A17C8u) [[unlikely]] return; }
L_003A17C8:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 21u));
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003A17D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A17D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 234u, depth + 1u); else { c.pc = 0x0039EC70u; return; } if (c.pc != 0x003A17D8u) [[unlikely]] return; }
L_003A17D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A17F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 20508u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A1828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A181Cu);  if (depth < kMaxDepth) unit_00A8(c, 287u, depth + 1u); else { c.pc = 0x003A2780u; return; } if (c.pc != 0x003A181Cu) [[unlikely]] return; }
L_003A181C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A1860; } }
    c.budget -= 1;
L_003A1828:
    set32(c.r[2], 0u + 6u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1854u); st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A8(c, 319u, depth + 1u); else { c.pc = 0x003A2B30u; return; } if (c.pc != 0x003A1854u) [[unlikely]] return; }
L_003A1854:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 21u));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003A1860:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A1870:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 22688u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A0000u < 16384u) { entry = entries_00A8[(t - 0x003A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A1890:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A18C4u); set32(c.r[4], c.r[2].w[0] + 4814u);  if (depth < kMaxDepth) unit_008D(c, 191u, depth + 1u); else { c.pc = 0x003361D0u; return; } if (c.pc != 0x003A18C4u) [[unlikely]] return; }
L_003A18C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A1968; } }
    set32(c.r[2], 0u + 6u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A18F8u); st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A2(c, 336u, depth + 1u); else { c.pc = 0x0038AE10u; return; } if (c.pc != 0x003A18F8u) [[unlikely]] return; }
L_003A18F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 17u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1910u); set32(c.r[4], c.r[2].w[0] + 4822u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003A1910u) [[unlikely]] return; }
L_003A1910:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[4].w[0] + 17040u);
    set32(c.r[5], 0u + 50u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A192Cu); set32(c.r[6], c.r[2].w[0] + 4814u);  if (depth < kMaxDepth) unit_008D(c, 108u, depth + 1u); else { c.pc = 0x00335380u; return; } if (c.pc != 0x003A192Cu) [[unlikely]] return; }
L_003A192C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[2].w[0] << 1);  if (t) { goto L_003A1968; } }
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1964u); set32(c.r[4], c.r[2].w[0] + 4822u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x003A1964u) [[unlikely]] return; }
L_003A1964:
    c.budget -= 1;
L_003A1968:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A1980:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 22704u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A0000u < 16384u) { entry = entries_00A8[(t - 0x003A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A19A0:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 10u));
    set32(c.r[2], 0u + 154u);
    set32(c.r[3], 0u + 15u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    mmi::mult(c, 0, c.r[7].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[5].w[0] + 2600u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[5].w[0] + 3419u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 120u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[3].w[0] + 3419u);
    c.budget -= 19;
    { set32(c.r[6], c.r[2].w[0] + 4814u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00378CE0u | kUnwind; return; } [[clang::musttail]] return unit_009E(c, 47u, depth); }
L_003A19F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A1A18; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003A1AC8; } }
    c.budget -= 1;
L_003A1A18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1A20u);  if (depth < kMaxDepth) unit_008D(c, 48u, depth + 1u); else { c.pc = 0x00334A60u; return; } if (c.pc != 0x003A1A20u) [[unlikely]] return; }
L_003A1A20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003A1A68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1A30u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003A1A30u) [[unlikely]] return; }
L_003A1A30:
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], 0u + 15u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 120u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1A5Cu); st8((c.r[2].w[0] + 3420u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x003A1A5Cu) [[unlikely]] return; }
L_003A1A5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A1AC8; } }
    c.budget -= 1;
L_003A1A68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1A70u);  if (depth < kMaxDepth) unit_008D(c, 47u, depth + 1u); else { c.pc = 0x00334A20u; return; } if (c.pc != 0x003A1A70u) [[unlikely]] return; }
L_003A1A70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A1AB0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], 0u + 30u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 3420u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1AA4u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003A1AA4u) [[unlikely]] return; }
L_003A1AA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A1AC8; } }
    c.budget -= 1;
L_003A1AB0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1AC4u); set32(c.r[4], c.r[2].w[0] + 3419u);  if (depth < kMaxDepth) unit_008D(c, 29u, depth + 1u); else { c.pc = 0x00334480u; return; } if (c.pc != 0x003A1AC4u) [[unlikely]] return; }
L_003A1AC4:
    c.budget -= 1;
L_003A1AC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A1AE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.r[16].d[0] = ld8((c.r[4].w[0] + 10u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003A1B80; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[2], 0u + 15u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1B28u); set32(c.r[4], 0u + 120u);  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x003A1B28u) [[unlikely]] return; }
L_003A1B28:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3419u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A1B80; } }
    set32(c.r[2], 0u + 154u);
    c.r[5].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[6], 0u + 17u);
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1B54u); set32(c.r[4], c.r[2].w[0] + 4822u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003A1B54u) [[unlikely]] return; }
L_003A1B54:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1B6Cu); set32(c.r[4], c.r[2].w[0] + 4814u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003A1B6Cu) [[unlikely]] return; }
L_003A1B6C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 255u);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 4813u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
L_003A1B80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A1B90:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_003A1BD8; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 6u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[6].w[0] + 2600u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.r[6].d[0] = ld8((c.r[6].w[0] + 3426u));
    st8((c.r[28].w[0] - 22408u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[28].w[0] - 22404u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
L_003A1BD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A1BE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st8((c.r[28].w[0] - 22528u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 22720u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1C10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A1C10u) [[unlikely]] return; }
L_003A1C10:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22528u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A1C20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 516u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A1CF8; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_003A1CC0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_003A1C98; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003A1C88; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003A1C70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A1CF8; } }
L_003A1C70:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1C80u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 83u, depth + 1u); else { c.pc = 0x00334FC0u; return; } if (c.pc != 0x003A1C80u) [[unlikely]] return; }
L_003A1C80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A1CF8; } }
L_003A1C88:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1C98u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 19u, depth + 1u); else { c.pc = 0x003341C0u; return; } if (c.pc != 0x003A1C98u) [[unlikely]] return; }
L_003A1C98:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 8u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1CB4u); st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A8(c, 340u, depth + 1u); else { c.pc = 0x003A2C50u; return; } if (c.pc != 0x003A1CB4u) [[unlikely]] return; }
L_003A1CB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A1CF8; } }
    c.budget -= 1;
L_003A1CC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1CC8u);  if (depth < kMaxDepth) unit_00A8(c, 241u, depth + 1u); else { c.pc = 0x003A1EF0u; return; } if (c.pc != 0x003A1CC8u) [[unlikely]] return; }
L_003A1CC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1CD0u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x003A1CD0u) [[unlikely]] return; }
L_003A1CD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A1CF8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2597u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_003A1CF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A1D10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A1DA0; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003A1D68; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003A1D48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A1DA8; } }
L_003A1D48:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1D58u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x003A1D58u) [[unlikely]] return; }
L_003A1D58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1D60u);  if (depth < kMaxDepth) unit_00A8(c, 241u, depth + 1u); else { c.pc = 0x003A1EF0u; return; } if (c.pc != 0x003A1D60u) [[unlikely]] return; }
L_003A1D60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A1DA8; } }
L_003A1D68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1D70u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x003A1D70u) [[unlikely]] return; }
L_003A1D70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A1D90; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1D88u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x003A1D88u) [[unlikely]] return; }
L_003A1D88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A1DA8; } }
L_003A1D90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1D98u);  if (depth < kMaxDepth) unit_00A8(c, 241u, depth + 1u); else { c.pc = 0x003A1EF0u; return; } if (c.pc != 0x003A1D98u) [[unlikely]] return; }
L_003A1D98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A1DA8; } }
L_003A1DA0:
    set32(c.r[3], 0u - 2u);
    st8((c.r[28].w[0] - 22528u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A1DA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A1DC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A1EB0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003A1E10; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A1DF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A1ED0; } }
L_003A1DF8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003A1ED0; } }
L_003A1E10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1E18u);  if (depth < kMaxDepth) unit_0089(c, 28u, depth + 1u); else { c.pc = 0x00324360u; return; } if (c.pc != 0x003A1E18u) [[unlikely]] return; }
L_003A1E18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_003A1ED0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1E28u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x003A1E28u) [[unlikely]] return; }
L_003A1E28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A1E68; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[6], 0u + 36u);
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st32((c.r[2].w[0] + 2612u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1E60u); st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003A1E60u) [[unlikely]] return; }
    goto L_003A1E60;
L_003A1E5C:
    st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_003A1E60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A1ED0; } }
L_003A1E68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1E70u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x003A1E70u) [[unlikely]] return; }
L_003A1E70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A1ED0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[6], 0u + 36u);
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st32((c.r[2].w[0] + 2612u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1EA8u); st8((c.r[2].w[0] + 2600u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003A1EA8u) [[unlikely]] return; }
L_003A1EA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A1ED0; } }
L_003A1EB0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 2612u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] > 0; st32((c.r[3].w[0] + 2612u), c.r[2].w[0]);  if (t) { goto L_003A1ED0; } }
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_003A1ED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1ED8u);  if (depth < kMaxDepth) unit_00A8(c, 241u, depth + 1u); else { c.pc = 0x003A1EF0u; return; } if (c.pc != 0x003A1ED8u) [[unlikely]] return; }
L_003A1ED8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A1EF0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[6], 0u + 30u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1F14u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003A1F14u) [[unlikely]] return; }
L_003A1F14:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1F24u); set32(c.r[6], 0u + 60u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003A1F24u) [[unlikely]] return; }
L_003A1F24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1F34u);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x003A1F34u) [[unlikely]] return; }
L_003A1F34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1F3Cu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x003A1F3Cu) [[unlikely]] return; }
L_003A1F3C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 1;
L_003A1F40:
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1F4Cu); set32(c.r[4], c.r[2].w[0] + 560u);  if (depth < kMaxDepth) unit_0099(c, 26u, depth + 1u); else { c.pc = 0x00364550u; return; } if (c.pc != 0x003A1F4Cu) [[unlikely]] return; }
L_003A1F4C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C40000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1F68u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003A1F68u) [[unlikely]] return; }
L_003A1F68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1F70u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x003A1F70u) [[unlikely]] return; }
L_003A1F70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42900000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = c.r[3].w[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1F90u); set32(c.r[4], c.r[2].w[0] + 568u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003A1F90u) [[unlikely]] return; }
L_003A1F90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1F98u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x003A1F98u) [[unlikely]] return; }
L_003A1F98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42D40000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = c.r[3].w[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.f[14] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1FB8u); set32(c.r[4], c.r[2].w[0] + 585u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003A1FB8u) [[unlikely]] return; }
L_003A1FB8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[1].d[0] = 0ull | 50001ull;
    c.r[17].d[0] = ld16((c.r[3].w[0] + 656u));
    c.r[1].d[0] = c.r[17].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].d[0] = 0ull | 50000ull;  if (t) { goto L_003A1FD8; } }
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_003A1FD8:
    c.r[16].d[0] = ld16((c.r[3].w[0] + 650u));
    c.r[1].d[0] = 0ull | 50001ull;
    c.r[1].d[0] = c.r[16].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].d[0] = 0ull | 50000ull;  if (t) { goto L_003A1FF0; } }
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_003A1FF0:
    c.r[18].d[0] = ld16((c.r[3].w[0] + 652u));
    c.r[1].d[0] = 0ull | 50001ull;
    c.r[1].d[0] = c.r[18].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].d[0] = 0ull | 50000ull;  if (t) { goto L_003A2008; } }
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_003A2008:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2018u);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x003A2018u) [[unlikely]] return; }
L_003A2018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2020u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x003A2020u) [[unlikely]] return; }
L_003A2020:
    set32(c.r[4], 0u + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A202Cu); set32(c.r[5], 0u + 221u);  if (depth < kMaxDepth) unit_00AA(c, 46u, depth + 1u); else { c.pc = 0x003A8720u; return; } if (c.pc != 0x003A202Cu) [[unlikely]] return; }
L_003A202C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A203Cu); set32(c.r[6], 0u + 60u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003A203Cu) [[unlikely]] return; }
L_003A203C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[6].d[0] = c.r[17].d[0] & 65535ull;
    c.r[7].d[0] = c.r[16].d[0] & 65535ull;
    c.r[8].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2058u); set32(c.r[5], c.r[5].w[0] + 31136u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x003A2058u) [[unlikely]] return; }
L_003A2058:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43300000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x435D0000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2074u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003A2074u) [[unlikely]] return; }
L_003A2074:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[1].d[0] = 0ull | 50001ull;
    c.r[18].d[0] = ld16((c.r[3].w[0] + 664u));
    c.r[1].d[0] = c.r[18].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].d[0] = 0ull | 50000ull;  if (t) { goto L_003A2090; } }
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_003A2090:
    c.r[17].d[0] = ld16((c.r[3].w[0] + 658u));
    c.r[1].d[0] = 0ull | 50001ull;
    c.r[1].d[0] = c.r[17].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].d[0] = 0ull | 50000ull;  if (t) { goto L_003A20A8; } }
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_003A20A8:
    c.r[16].d[0] = ld16((c.r[3].w[0] + 660u));
    c.r[1].d[0] = 0ull | 50001ull;
    c.r[1].d[0] = c.r[16].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].d[0] = 0ull | 50000ull;  if (t) { goto L_003A20C0; } }
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_003A20C0:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A20D0u); set32(c.r[6], 0u + 60u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003A20D0u) [[unlikely]] return; }
L_003A20D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[6].d[0] = c.r[18].d[0] & 65535ull;
    c.r[7].d[0] = c.r[17].d[0] & 65535ull;
    c.r[8].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A20ECu); set32(c.r[5], c.r[5].w[0] + 31136u);  if (depth < kMaxDepth) unit_0007(c, 91u, depth + 1u); else { c.pc = 0x0011D4F8u; return; } if (c.pc != 0x003A20ECu) [[unlikely]] return; }
L_003A20EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43300000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43830000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2108u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003A2108u) [[unlikely]] return; }
L_003A2108:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43380000u);
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.f[14] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 624u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 649u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A213Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003A213Cu) [[unlikely]] return; }
L_003A213C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2144u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_009E(c, 196u, depth + 1u); else { c.pc = 0x0037ADE0u; return; } if (c.pc != 0x003A2144u) [[unlikely]] return; }
L_003A2144:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003A2160:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], 0u + 50u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2194u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 108u, depth + 1u); else { c.pc = 0x00335380u; return; } if (c.pc != 0x003A2194u) [[unlikely]] return; }
L_003A2194:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A21A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003A21F0; } }
L_003A21A8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A21B4u); set32(c.r[5], 0u + 50u);  if (depth < kMaxDepth) unit_008D(c, 106u, depth + 1u); else { c.pc = 0x00335330u; return; } if (c.pc != 0x003A21B4u) [[unlikely]] return; }
L_003A21B4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A21E8; } }
    set32(c.r[2], c.r[19].w[0] << 1);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[18], 0u + 1u);
    set32(c.r[20], c.r[2].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A21DCu); set32(c.r[4], c.r[17].w[0] + c.r[20].w[0]);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x003A21DCu) [[unlikely]] return; }
L_003A21DC:
    set32(c.r[2], c.r[20].w[0] + c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 24u), 0u);  if (t) { goto L_003A21F0; } }
L_003A21E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003A2478; } }
L_003A21F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A21F8u); set32(c.r[4], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_0073(c, 409u, depth + 1u); else { c.pc = 0x002CF028u; return; } if (c.pc != 0x003A21F8u) [[unlikely]] return; }
L_003A21F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 104u);  if (t) { goto L_003A2390; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2208u);  if (depth < kMaxDepth) unit_008E(c, 260u, depth + 1u); else { c.pc = 0x0033ABA0u; return; } if (c.pc != 0x003A2208u) [[unlikely]] return; }
L_003A2208:
    c.r[5].d[0] = ld8((c.r[29].w[0] + 111u));
    set32(c.r[2], c.r[19].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[19].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[6].d[0] = c.r[4].d[0] | 26215ull;
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[10].d[0] = c.r[2].d[0] | 34079ull;
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], 0u + 7u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 4));
    c.r[8].d[0] = c.r[7].d[0] & 15ull;
    c.r[5].d[0] = c.r[5].d[0] & 15ull;
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + 2000u);
    st16((c.r[2].w[0] + 28u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[29].w[0] + 110u));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 4));
    c.r[8].d[0] = c.r[7].d[0] & 15ull;
    c.r[5].d[0] = c.r[5].d[0] & 15ull;
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st8((c.r[2].w[0] + 30u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[29].w[0] + 109u));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 4));
    c.r[8].d[0] = c.r[7].d[0] & 15ull;
    c.r[5].d[0] = c.r[5].d[0] & 15ull;
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st8((c.r[2].w[0] + 31u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[29].w[0] + 107u));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 4));
    c.r[8].d[0] = c.r[7].d[0] & 15ull;
    c.r[5].d[0] = c.r[5].d[0] & 15ull;
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st8((c.r[2].w[0] + 32u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[29].w[0] + 106u));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 4));
    c.r[8].d[0] = c.r[7].d[0] & 15ull;
    c.r[5].d[0] = c.r[5].d[0] & 15ull;
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st8((c.r[2].w[0] + 33u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[29].w[0] + 105u));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 4));
    c.r[8].d[0] = c.r[7].d[0] & 15ull;
    c.r[5].d[0] = c.r[5].d[0] & 15ull;
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st8((c.r[2].w[0] + 34u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[13].d[0] = ld16((c.r[2].w[0] + 28u));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 30u));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 31u));
    mmi::mult(c, 0, c.r[10].w[0], c.r[13].w[0]);
    set32(c.r[7], c.r[13].w[0] >> 2);
    set32(c.r[12], c.r[13].w[0] + c.r[7].w[0]);
    set32(c.r[11], c.r[13].w[0] >> 31);
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[9].d[0] = c.hi.d[0];
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[8], c.r[7].w[0] + 8u);
    mmi::mult(c, 0, c.r[10].w[0], c.r[13].w[0]);
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 5));
    set32(c.r[9], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[7], c.r[8].w[0] >> 31);
    set32(c.r[10], c.r[12].w[0] - c.r[9].w[0]);
    c.r[9].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[6].w[0], c.r[8].w[0]);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 7));
    set32(c.r[6], c.r[6].w[0] + c.r[11].w[0]);
    set32(c.r[8], c.r[6].w[0] + c.r[10].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 1));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 98;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 35u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003A2460; } }
L_003A2390:
    set32(c.r[2], c.r[19].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], 0u + 2004u);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[6], 0u + 12u);
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], 0u + 2u);
    st16((c.r[2].w[0] + 28u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 30u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    st8((c.r[2].w[0] + 31u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[10].d[0] = c.r[4].d[0] | 34079ull;
    st8((c.r[2].w[0] + 32u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x66660000u);
    st8((c.r[2].w[0] + 33u), static_cast<std::uint8_t>(0u));
    c.r[6].d[0] = c.r[4].d[0] | 26215ull;
    st8((c.r[2].w[0] + 34u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 7u);
    c.r[13].d[0] = ld16((c.r[2].w[0] + 28u));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 30u));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 31u));
    mmi::mult(c, 0, c.r[10].w[0], c.r[13].w[0]);
    set32(c.r[7], c.r[13].w[0] >> 2);
    set32(c.r[12], c.r[13].w[0] + c.r[7].w[0]);
    set32(c.r[11], c.r[13].w[0] >> 31);
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[9].d[0] = c.hi.d[0];
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[8], c.r[7].w[0] + 8u);
    mmi::mult(c, 0, c.r[10].w[0], c.r[13].w[0]);
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 5));
    set32(c.r[9], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[7], c.r[8].w[0] >> 31);
    set32(c.r[10], c.r[12].w[0] - c.r[9].w[0]);
    c.r[9].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[6].w[0], c.r[8].w[0]);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 7));
    set32(c.r[6], c.r[6].w[0] + c.r[11].w[0]);
    set32(c.r[8], c.r[6].w[0] + c.r[10].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 1));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    st8((c.r[2].w[0] + 35u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 52;
L_003A2460:
    set32(c.r[2], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] + 8u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2474u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x003A2474u) [[unlikely]] return; }
L_003A2474:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003A2478:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003A24A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], 0u + 50u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A24BCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 108u, depth + 1u); else { c.pc = 0x00335380u; return; } if (c.pc != 0x003A24BCu) [[unlikely]] return; }
L_003A24BC:
    set32(c.r[4], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], c.r[2].w[0] << 1);  if (t) { goto L_003A24F8; } }
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[2].w[0] + 24u);
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_003A24F0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003A24F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A2500; } }
L_003A24F8:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_003A2500:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A2510:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_003A2520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2528u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 328u, depth + 1u); else { c.pc = 0x0039FAB0u; return; } if (c.pc != 0x003A2528u) [[unlikely]] return; }
L_003A2528:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A2540; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A2550; } }
L_003A2540:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A2520u | kUnwind; return; } goto L_003A2520; } }
L_003A2550:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A2560:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 154u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[5].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[4], 0u - 1u);
    set32(c.r[8], c.r[6].w[0] + 4813u);
    set32(c.r[3], c.r[8].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_003A25B8; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[5].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[8].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_003A25C0; } }
    c.budget -= 1;
L_003A25B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A2600; } }
L_003A25C0:
    set32(c.r[3], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[3].w[0] + 4814u);
    set32(c.r[5], c.r[2].w[0] + 4814u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A25D8u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0007(c, 138u, depth + 1u); else { c.pc = 0x0011E108u; return; } if (c.pc != 0x003A25D8u) [[unlikely]] return; }
L_003A25D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A2600; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], c.r[28].w[0] - 22412u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    st8((c.r[4].w[0] + 4813u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 8;
L_003A2600:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A2620:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[28].w[0] - 22412u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 8;
L_003A2640:
    set32(c.r[2], 0u - 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2650u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 328u, depth + 1u); else { c.pc = 0x0039FAB0u; return; } if (c.pc != 0x003A2650u) [[unlikely]] return; }
L_003A2650:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A2670; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 255u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 4813u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A2680; } }
    c.budget -= 1;
L_003A2670:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 4813u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_003A2680:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 154u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A2640u | kUnwind; return; } goto L_003A2640; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A26A0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 276u, depth + 1u); else { c.pc = 0x003A2560u; return; } if (c.pc != 0x003A26A0u) [[unlikely]] return; }
L_003A26A0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A26ACu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 276u, depth + 1u); else { c.pc = 0x003A2560u; return; } if (c.pc != 0x003A26ACu) [[unlikely]] return; }
L_003A26AC:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A26B8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 276u, depth + 1u); else { c.pc = 0x003A2560u; return; } if (c.pc != 0x003A26B8u) [[unlikely]] return; }
L_003A26B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A26D0:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[28].w[0] - 22412u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[11], 0u + 154u);
    c.budget -= 6;
L_003A26E8:
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[10].sd[0] < 0;  if (t) { goto L_003A2758; } }
    set32(c.r[12], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[7], c.r[10].w[0] << 6);
    set32(c.r[7], c.r[7].w[0] + c.r[10].w[0]);
    set32(c.r[8], 0u + 261u);
    mmi::mult(c, 0, c.r[10].w[0], c.r[11].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[10].w[0]);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[10], c.r[12].w[0] + c.r[9].w[0]);
    c.r[10].d[0] = ld8((c.r[10].w[0] + 4813u));
    set32(c.r[9], c.r[12].w[0] + c.r[4].w[0]);
    st8((c.r[9].w[0] + 4813u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[10], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[9], c.r[10].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[10].w[0] + c.r[3].w[0]);
    set32(c.r[10], c.r[9].w[0] + 5278u);
    set32(c.r[9], c.r[7].w[0] + 5278u);
    c.budget -= 17;
L_003A2738:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0])));
    set32(c.r[8], c.r[8].w[0] - 1u);
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[10], c.r[10].w[0] + 2u);
    set32(c.r[9], c.r[9].w[0] + 2u);
    c.budget -= 7;
    { const bool t = c.r[8].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A2738u | kUnwind; return; } goto L_003A2738; } }
    c.budget -= 1;
L_003A2758:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[7].d[0] = c.r[6].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 154u);
    c.budget -= 6;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 522u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A26E8u | kUnwind; return; } goto L_003A26E8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A2780:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 22736u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 20508u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A0000u < 16384u) { entry = entries_00A8[(t - 0x003A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A27B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], 0u + 255u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 60u);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] - 20407u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 10364u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003A28E8; } }
    c.budget -= 1;
L_003A27F8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[1].d[0] = 0ull | 45079ull;
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A2820; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003A2820:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A27F8u | kUnwind; return; } goto L_003A27F8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003A2838:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 20457u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A2860; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A2838u | kUnwind; return; } goto L_003A2838; } }
    c.budget -= 1;
L_003A2860:
    c.r[1].d[0] = c.r[16].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] << 1);  if (t) { goto L_003A2890; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 17040u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A2898; } }
    c.budget -= 1;
L_003A2890:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A28E8; } }
L_003A2898:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A28A4u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x003A28A4u) [[unlikely]] return; }
L_003A28A4:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], 0u + 180u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] - 20457u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] - 20508u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A28E8u); st8((c.r[1].w[0] - 20407u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0088(c, 300u, depth + 1u); else { c.pc = 0x00322910u; return; } if (c.pc != 0x003A28E8u) [[unlikely]] return; }
L_003A28E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A2900:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2910u);  if (depth < kMaxDepth) unit_00A7(c, 331u, depth + 1u); else { c.pc = 0x0039FB20u; return; } if (c.pc != 0x003A2910u) [[unlikely]] return; }
L_003A2910:
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003A2950; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 20407u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] - 20507u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] - 20508u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
L_003A2950:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A2960:
    c.r[1].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003A29C0; } }
    c.budget -= 1;
L_003A2970:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 20456u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] - 20457u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[7], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[1], c.r[7].w[0] + c.r[1].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 20506u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[7].w[0] + c.r[1].w[0]);
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[1].w[0] - 20507u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A2970u | kUnwind; return; } goto L_003A2970; } }
    c.budget -= 1;
L_003A29C0:
    set32(c.r[4], c.r[5].w[0] - 1u);
    c.r[1].d[0] = c.r[4].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003A2A08; } }
L_003A29D0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] - 20457u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].d[0] = c.r[4].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[1].w[0] - 20507u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A29D0u | kUnwind; return; } goto L_003A29D0; } }
    c.budget -= 1;
L_003A2A08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A2A10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2A24u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2A24u) [[unlikely]] return; }
L_003A2A24:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2A30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2A30u) [[unlikely]] return; }
L_003A2A30:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2A3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2A3Cu) [[unlikely]] return; }
L_003A2A3C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2A48u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2A48u) [[unlikely]] return; }
L_003A2A48:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2A54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2A54u) [[unlikely]] return; }
L_003A2A54:
    set32(c.r[4], 0u + 23u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2A60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2A60u) [[unlikely]] return; }
L_003A2A60:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2A6Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2A6Cu) [[unlikely]] return; }
L_003A2A6C:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2A78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2A78u) [[unlikely]] return; }
L_003A2A78:
    set32(c.r[4], 0u + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2A84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2A84u) [[unlikely]] return; }
L_003A2A84:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A2A90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2AA4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2AA4u) [[unlikely]] return; }
L_003A2AA4:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2AB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2AB0u) [[unlikely]] return; }
L_003A2AB0:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2ABCu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2ABCu) [[unlikely]] return; }
L_003A2ABC:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2590u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 4u);  if (t) { goto L_003A2B00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2AD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2AD8u) [[unlikely]] return; }
L_003A2AD8:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2AE4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2AE4u) [[unlikely]] return; }
L_003A2AE4:
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2AF0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2AF0u) [[unlikely]] return; }
L_003A2AF0:
    set32(c.r[4], 0u + 27u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2AFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2AFCu) [[unlikely]] return; }
L_003A2AFC:
    c.budget -= 1;
L_003A2B00:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2B0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2B0Cu) [[unlikely]] return; }
L_003A2B0C:
    set32(c.r[4], 0u + 21u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2B18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2B18u) [[unlikely]] return; }
L_003A2B18:
    set32(c.r[4], 0u + 21u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2B24u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2B24u) [[unlikely]] return; }
L_003A2B24:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A2B30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 9u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2B48u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2B48u) [[unlikely]] return; }
L_003A2B48:
    set32(c.r[4], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2B54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2B54u) [[unlikely]] return; }
L_003A2B54:
    set32(c.r[4], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2B60u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2B60u) [[unlikely]] return; }
L_003A2B60:
    set32(c.r[4], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2B6Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2B6Cu) [[unlikely]] return; }
L_003A2B6C:
    set32(c.r[4], 0u + 22u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2B78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2B78u) [[unlikely]] return; }
L_003A2B78:
    set32(c.r[4], 0u + 22u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2B84u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2B84u) [[unlikely]] return; }
L_003A2B84:
    set32(c.r[4], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2B90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2B90u) [[unlikely]] return; }
L_003A2B90:
    set32(c.r[4], 0u + 13u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2B9Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2B9Cu) [[unlikely]] return; }
L_003A2B9C:
    set32(c.r[4], 0u + 13u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2BA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2BA8u) [[unlikely]] return; }
L_003A2BA8:
    set32(c.r[4], 0u + 14u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2BB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2BB4u) [[unlikely]] return; }
L_003A2BB4:
    set32(c.r[4], 0u + 14u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2BC0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2BC0u) [[unlikely]] return; }
L_003A2BC0:
    set32(c.r[4], 0u + 15u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2BCCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2BCCu) [[unlikely]] return; }
L_003A2BCC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A2BD0:
    set32(c.r[4], 0u + 11u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2BDCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2BDCu) [[unlikely]] return; }
L_003A2BDC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A2BD0u | kUnwind; return; } goto L_003A2BD0; } }
    set32(c.r[4], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2BF8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2BF8u) [[unlikely]] return; }
L_003A2BF8:
    set32(c.r[4], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2C04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2C04u) [[unlikely]] return; }
L_003A2C04:
    set32(c.r[4], 0u + 19u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2C10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2C10u) [[unlikely]] return; }
L_003A2C10:
    set32(c.r[4], 0u + 19u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2C1Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2C1Cu) [[unlikely]] return; }
L_003A2C1C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A2C20:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2C2Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2C2Cu) [[unlikely]] return; }
L_003A2C2C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A2C20u | kUnwind; return; } goto L_003A2C20; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A2C50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2C64u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2C64u) [[unlikely]] return; }
L_003A2C64:
    set32(c.r[4], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2C70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2C70u) [[unlikely]] return; }
L_003A2C70:
    set32(c.r[4], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2C7Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2C7Cu) [[unlikely]] return; }
L_003A2C7C:
    set32(c.r[4], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2C88u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2C88u) [[unlikely]] return; }
L_003A2C88:
    set32(c.r[4], 0u + 17u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2C94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2C94u) [[unlikely]] return; }
L_003A2C94:
    set32(c.r[4], 0u + 18u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2CA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 348u, depth + 1u); else { c.pc = 0x003A2CC0u; return; } if (c.pc != 0x003A2CA0u) [[unlikely]] return; }
L_003A2CA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2CA8u);  if (depth < kMaxDepth) unit_0095(c, 272u, depth + 1u); else { c.pc = 0x00356350u; return; } if (c.pc != 0x003A2CA8u) [[unlikely]] return; }
L_003A2CA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A2CC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2CE8u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x003A2CE8u) [[unlikely]] return; }
L_003A2CE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A2D40; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 22752u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], 0u + 20u);
    set32(c.r[4], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23088u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 212u)));
    st32((c.r[2].w[0] + 304u), c.r[3].w[0]);
    st8((c.r[2].w[0] + 310u), static_cast<std::uint8_t>(0u));
    c.budget -= 20;
L_003A2D40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A2D60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 22872u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A0000u < 16384u) { entry = entries_00A8[(t - 0x003A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A2D80:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[5], c.r[5].w[0] + 15856u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[7], c.r[4].w[0] + 304u);  if (t) { goto L_003A2DC8; } }
    set32(c.r[3], 0u + 57u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A2DD0; } }
L_003A2DC8:
    set32(c.r[3], 0u + 73u);
    st8((c.r[7].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A2DD0:
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[7].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003A2DE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A2E10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2E04u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003A2E04u) [[unlikely]] return; }
L_003A2E04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A2E30; } }
    c.budget -= 1;
L_003A2E10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A2E28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2E24u);  if (depth < kMaxDepth) unit_00A8(c, 356u, depth + 1u); else { c.pc = 0x003A2E50u; return; } if (c.pc != 0x003A2E24u) [[unlikely]] return; }
L_003A2E24:
    c.budget -= 1;
L_003A2E28:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A2E30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A2E40:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_003A2E50:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], 0u + 96u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 10;
L_003A2E78:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2E88u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003A2E88u) [[unlikely]] return; }
L_003A2E88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2E98u);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x003A2E98u) [[unlikely]] return; }
L_003A2E98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2EA0u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x003A2EA0u) [[unlikely]] return; }
L_003A2EA0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2EB4u); set32(c.r[4], c.r[2].w[0] + 4814u);  if (depth < kMaxDepth) unit_0099(c, 26u, depth + 1u); else { c.pc = 0x00364550u; return; } if (c.pc != 0x003A2EB4u) [[unlikely]] return; }
L_003A2EB4:
    c.f[0] = c.r[18].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B80000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2ED0u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003A2ED0u) [[unlikely]] return; }
L_003A2ED0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[19], 0u + 452u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2EE4u); set32(c.r[4], c.r[2].w[0] + 4822u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x003A2EE4u) [[unlikely]] return; }
L_003A2EE4:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2F08u); set32(c.r[19], c.r[19].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x003A2F08u) [[unlikely]] return; }
L_003A2F08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2F10u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x003A2F10u) [[unlikely]] return; }
L_003A2F10:
    c.f[1] = c.r[19].w[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.f[0] = c.r[18].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[2].w[0] + 4822u);
    c.f[14] = 0u;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2F38u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003A2F38u) [[unlikely]] return; }
L_003A2F38:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 24u);
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 154u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A2E78u | kUnwind; return; } goto L_003A2E78; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2590u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003A2F70; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A2F70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2F70u); set32(c.r[4], c.r[5].w[0] + 4839u);  if (depth < kMaxDepth) unit_00A8(c, 368u, depth + 1u); else { c.pc = 0x003A2F90u; return; } if (c.pc != 0x003A2F70u) [[unlikely]] return; }
L_003A2F70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003A2F90:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2FB4u); set32(c.r[16], 0u + 208u);  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x003A2FB4u) [[unlikely]] return; }
L_003A2FB4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2FC8u);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x003A2FC8u) [[unlikely]] return; }
L_003A2FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2FD0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x003A2FD0u) [[unlikely]] return; }
L_003A2FD0:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003A2FD8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2FE8u); set32(c.r[6], 0u + 41u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003A2FE8u) [[unlikely]] return; }
L_003A2FE8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2FF8u); set32(c.r[6], 0u + 40u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x003A2FF8u) [[unlikely]] return; }
L_003A2FF8:
    c.f[0] = c.r[16].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[14] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3014u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x003A3014u) [[unlikely]] return; }
L_003A3014:
    set32(c.r[18], c.r[18].w[0] - 40u);
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_003A3038; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 40u);
    c.r[3].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A2FD8u | kUnwind; return; } goto L_003A2FD8; } }
    c.budget -= 1;
L_003A3038:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003A3060:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 22888u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A0000u < 16384u) { entry = entries_00A8[(t - 0x003A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A3080:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[5], c.r[5].w[0] + 15856u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[4].w[0] + 304u);  if (t) { goto L_003A30D0; } }
    set32(c.r[4], 0u + 13u);
    set32(c.r[3], 0u + 72u);
    st8((c.r[7].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A30E0; } }
L_003A30D0:
    set32(c.r[3], 0u + 16u);
    st8((c.r[7].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 23u);
    st8((c.r[7].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003A30E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A30F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A3118; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3110u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003A3110u) [[unlikely]] return; }
L_003A3110:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A3120; } }
L_003A3118:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A3120:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A3130:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 22912u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A0000u < 16384u) { entry = entries_00A8[(t - 0x003A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A3150:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[8], c.r[8].w[0] + 15984u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 15u);
    set32(c.r[3], 0u + 21u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 132u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 314u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 312u), static_cast<std::uint8_t>(0u));
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 313u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_003A31B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_003A31E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A31DCu);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003A31DCu) [[unlikely]] return; }
L_003A31DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A32A8; } }
    c.budget -= 1;
L_003A31E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[7].d[0] = ld8((c.r[1].w[0] + 15545u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[5], c.r[5].w[0] + 22928u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], 0u + 3u);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 18;
    { const bool t = c.r[7].d[0] != c.r[3].d[0]; st32((c.r[17].w[0] + 36u), c.f[0]);  if (t) { goto L_003A3250; } }
    set32(c.r[3], 0u + 27u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[2], c.r[2].w[0] + 16096u);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3248u); st32((c.r[17].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x003A3248u) [[unlikely]] return; }
L_003A3248:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A3268; } }
L_003A3250:
    set32(c.r[3], 0u + 21u);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[3], c.r[3].w[0] + 15984u);
    st32((c.r[17].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 6;
L_003A3268:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2600u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003A32A0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[4], 0u + 30u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
L_003A32A0:
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A32A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A32C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 304u);  if (t) { goto L_003A32F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A32E8u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003A32E8u) [[unlikely]] return; }
L_003A32E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A3380; } }
L_003A32F0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A3348; } }
    set32(c.r[5], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], 0u + 3u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15545u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003A3330; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3320u);  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x003A3320u) [[unlikely]] return; }
L_003A3320:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A3380; } }
    c.budget -= 1;
L_003A3330:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003A3380; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A3380; } }
L_003A3348:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2600u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003A3370; } }
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 9u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003A3378; } }
    c.budget -= 1;
L_003A3370:
    set32(c.r[3], 0u + 77u);
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A3378:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A3380:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A3390:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 22936u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A0000u < 16384u) { entry = entries_00A8[(t - 0x003A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A33B0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[7], c.r[7].w[0] + 15856u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 16u);
    set32(c.r[3], c.r[28].w[0] - 27616u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003A3400:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 5u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003A3430; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3424u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003A3424u) [[unlikely]] return; }
L_003A3424:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A3438; } }
    c.budget -= 1;
L_003A3430:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A3438:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A3450:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 22960u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A0000u < 16384u) { entry = entries_00A8[(t - 0x003A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A3470:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[6], c.r[6].w[0] + 15856u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xC2700000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[4].w[0] + 304u);  if (t) { goto L_003A34C8; } }
    set32(c.r[4], 0u + 13u);
    set32(c.r[3], 0u + 74u);
    st8((c.r[8].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[8].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A34D8; } }
    c.budget -= 1;
L_003A34C8:
    set32(c.r[3], 0u + 16u);
    st8((c.r[8].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 51u);
    st8((c.r[8].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003A34D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A34E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 5u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003A3510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3504u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003A3504u) [[unlikely]] return; }
L_003A3504:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A35A0; } }
    c.budget -= 1;
L_003A3510:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003A3558; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003A3530; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A35A0; } }
L_003A3530:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2700000u);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15542u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A35A0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A35A0; } }
L_003A3558:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40940000u);
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 36u), c.f[1]);  if (t) { goto L_003A3598; } }
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_003A3598:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A35A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A35B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 5u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003A35E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A35D4u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003A35D4u) [[unlikely]] return; }
L_003A35D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A3668; } }
    c.budget -= 1;
L_003A35E0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { goto L_003A3628; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003A3600; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A3668; } }
L_003A3600:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15542u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_003A3618; } }
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A3618:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A3668; } }
    c.budget -= 1;
L_003A3628:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40940000u);
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[1] = c.r[5].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2700000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 36u), c.f[1]);  if (t) { goto L_003A3660; } }
    st32((c.r[4].w[0] + 36u), c.f[0]);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_003A3660:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A3668:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A3680:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 22976u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A0000u < 16384u) { entry = entries_00A8[(t - 0x003A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A36A0:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC33B0000u);
    set32(c.r[8], c.r[8].w[0] + 16096u);
    c.r[7].d[0] = c.r[3].d[0] | 32768ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 15u);
    set32(c.r[3], 0u + 27u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 314u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 312u), static_cast<std::uint8_t>(0u));
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 313u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_003A3700:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 5u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003A3730; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3724u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003A3724u) [[unlikely]] return; }
L_003A3724:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A3808; } }
    c.budget -= 1;
L_003A3730:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[6].d[0] = ld8((c.r[1].w[0] + 15546u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[5], c.r[28].w[0] - 27612u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 18;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003A37B8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003A3788; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A3808; } }
L_003A3788:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3770000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15542u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A3808; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A3808; } }
    c.budget -= 1;
L_003A37B8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40940000u);
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[1] = c.r[5].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC33B0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 36u), c.f[1]);  if (t) { goto L_003A3800; } }
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_003A3800:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A3808:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A3820:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 5u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[6], c.r[16].w[0] + 304u);  if (t) { goto L_003A3858; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A384Cu);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003A384Cu) [[unlikely]] return; }
L_003A384C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A38E8; } }
    c.budget -= 1;
L_003A3858:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 15542u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_003A3870; } }
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003A3870:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15546u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], c.r[28].w[0] - 27612u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 2600u));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_003A38D8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 30u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[6].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[6].w[0] + 9u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
L_003A38D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A38E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x003A38E0u) [[unlikely]] return; }
L_003A38E0:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A38E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A3900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 304u);  if (t) { goto L_003A3938; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3928u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x003A3928u) [[unlikely]] return; }
L_003A3928:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A3980; } }
    c.budget -= 1;
L_003A3938:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2600u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);  if (t) { goto L_003A3980; } }
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15542u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003A3960; } }
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003A3970; } }
L_003A3960:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_003A3970:
    st8((c.r[5].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 112u);
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_003A3980:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 15543u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_003A3998; } }
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_003A3998:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A39B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 5u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A39E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A39D8u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003A39D8u) [[unlikely]] return; }
L_003A39D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A3A40; } }
L_003A39E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40940000u);
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3A00u); st32((c.r[16].w[0] + 36u), c.f[12]);  if (depth < kMaxDepth) unit_0005(c, 46u, depth + 1u); else { c.pc = 0x001158E0u; return; } if (c.pc != 0x003A3A00u) [[unlikely]] return; }
L_003A3A00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC06E0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] | 61440ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3A18u); mmi::pcpyld(c.r[5], c.r[0], c.r[2]);  if (depth < kMaxDepth) unit_0000(c, 35u, depth + 1u); else { c.pc = 0x00100270u; return; } if (c.pc != 0x003A3A18u) [[unlikely]] return; }
L_003A3A18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0xC3770000u);  if (t) { goto L_003A3A38; } }
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    st32((c.r[16].w[0] + 36u), c.r[4].w[0]);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_003A3A38:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A3A40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A3A50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 23008u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A0000u < 16384u) { entry = entries_00A8[(t - 0x003A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A3A70:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[7], c.r[7].w[0] + 15984u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 15u);
    set32(c.r[3], 0u + 21u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 132u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003A3AC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 5u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[8], c.r[4].w[0] + 304u);  if (t) { goto L_003A3AF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3AE4u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003A3AE4u) [[unlikely]] return; }
L_003A3AE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A3B70; } }
    c.budget -= 1;
L_003A3AF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15556u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);  if (t) { goto L_003A3B70; } }
    set32(c.r[6], 0u + 120u);
    c.r[7].d[0] = ld8((c.r[1].w[0] + 15547u));
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15555u));
    set32(c.r[7], c.r[7].w[0] - c.r[5].w[0]);
    set32(c.r[5], c.r[7].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[5].w[0] + 2600u));
    c.budget -= 18;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003A3B68; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 30u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[8].w[0] + 9u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st8((c.r[8].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_003A3B68:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A3B70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A3B80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 5u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[4].w[0] + 304u);  if (t) { goto L_003A3BB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3BA4u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003A3BA4u) [[unlikely]] return; }
L_003A3BA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A3C18; } }
    c.budget -= 1;
L_003A3BB0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A3BE0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A3C18; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A3C18; } }
L_003A3BE0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2600u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003A3C00; } }
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003A3C10; } }
    c.budget -= 1;
L_003A3C00:
    st8((c.r[6].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 77u);
    st8((c.r[6].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003A3C10:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A3C18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A3C30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A3C40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 23024u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A0000u < 16384u) { entry = entries_00A8[(t - 0x003A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A3C60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003A3C90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3C84u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003A3C84u) [[unlikely]] return; }
L_003A3C84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A3CC8; } }
    c.budget -= 1;
L_003A3C90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15544u));
    set32(c.r[7], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_003A3CC8; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], 0u + 154u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 4813u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_003A3CC8; } }
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 1;
L_003A3CC8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A3CE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 23040u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A0000u < 16384u) { entry = entries_00A8[(t - 0x003A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A3D00:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC33B0000u);
    set32(c.r[8], c.r[8].w[0] + 16096u);
    c.r[7].d[0] = c.r[3].d[0] | 32768ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 15u);
    set32(c.r[3], 0u + 27u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 314u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 312u), static_cast<std::uint8_t>(0u));
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 313u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_003A3D60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_003A3D98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3D90u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003A3D90u) [[unlikely]] return; }
L_003A3D90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A3E38; } }
L_003A3D98:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15544u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);  if (t) { goto L_003A3E38; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15546u));
    set32(c.r[3], c.r[3].w[0] + 23056u);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 32u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 128u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003A3DF8; } }
    st32((c.r[17].w[0] + 128u), c.f[1]);
    set32(c.r[3], 0u + 112u);
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A3E00; } }
    c.budget -= 1;
L_003A3DF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3E00u);  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x003A3E00u) [[unlikely]] return; }
L_003A3E00:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2600u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003A3E30; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[4], 0u + 30u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_003A3E30:
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003A3E38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A3E50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[6], c.r[16].w[0] + 304u);  if (t) { goto L_003A3E88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3E7Cu);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003A3E7Cu) [[unlikely]] return; }
L_003A3E7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A3ED8; } }
    c.budget -= 1;
L_003A3E88:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A3EB0; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3EA0u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 435u, depth + 1u); else { c.pc = 0x00353270u; return; } if (c.pc != 0x003A3EA0u) [[unlikely]] return; }
L_003A3EA0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A3ED8; } }
    c.budget -= 1;
L_003A3EB0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2600u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A3ED8; } }
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[6].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[6].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st8((c.r[6].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_003A3ED8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A3EF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 23064u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003A0000u < 16384u) { entry = entries_00A8[(t - 0x003A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A3F10:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[7], c.r[7].w[0] + 15856u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[28].w[0] - 27608u);
    set32(c.r[3], 0u + 16u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = ld8((c.r[5].w[0]));
    st8((c.r[4].w[0] + 310u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003A3F60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15543u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003A3F90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3F84u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x003A3F84u) [[unlikely]] return; }
L_003A3F84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A3FB8; } }
    c.budget -= 1;
L_003A3F90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15544u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003A3FB8; } }
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A3FB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3FB8u);  if (depth < kMaxDepth) unit_00A8(c, 434u, depth + 1u); else { c.pc = 0x003A3FD0u; return; } if (c.pc != 0x003A3FB8u) [[unlikely]] return; }
L_003A3FB8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A3FD0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 10;
L_003A3FF8:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 3427u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00A9(c, 3u, depth); } }
    [[clang::musttail]] return unit_00A9(c, 2u, depth);
}

}
