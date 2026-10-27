#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0092[4096] = {
    1, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0,
    5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0,
    16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    19, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0,
    0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0,
    0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 58, 0, 59, 0, 60, 0, 61, 0, 62, 0, 63, 0, 64, 0, 65, 0, 66, 0, 67, 0, 0, 0,
    68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0,
    0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0,
    0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0,
    76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0,
    82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0,
    0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0,
    0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 0, 0,
    0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110,
    0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0,
    0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 132, 0, 133, 0, 134, 0, 135, 0, 0, 0,
    136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 141, 0, 0,
    142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 149, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152,
    0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0,
    169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0,
    0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0,
    0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0,
    187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    203, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0,
    210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0,
    216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0,
    0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0,
    0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 237, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0,
    0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0,
    0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0,
    269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0,
    0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0,
    0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0,
    0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0,
    0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0,
    0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0,
    0, 0, 0, 306, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0,
    0, 0, 0, 0, 316, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0,
    320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0,
    0, 0, 0, 0, 333, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 336, 0,
    0, 0, 337, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354,
    0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 361, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 369, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0,
    378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0,
    0, 0, 0, 382, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    385, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0,
    391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0,
    394, 0, 0, 0, 0, 0, 395, 0, 0, 396, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 402, 0, 0, 403, 0, 0,
    404, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0,
    0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 410, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 0,
    0, 0, 416, 0, 0, 417, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0,
    421, 0, 422, 0, 0, 0, 0, 423, 0, 0, 424, 0, 0, 425, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 431, 0, 0, 0, 0, 0,
    432, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 434, 0, 0, 435, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 441, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 447, 0, 0, 448, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 453, 0, 0, 454, 0,
};

void unit_0092(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00348000;
    case 2u: goto L_00348004;
    case 3u: goto L_0034801C;
    case 4u: goto L_00348060;
    case 5u: goto L_00348080;
    case 6u: goto L_003480D8;
    case 7u: goto L_00348110;
    case 8u: goto L_00348120;
    case 9u: goto L_00348144;
    case 10u: goto L_0034815C;
    case 11u: goto L_003481A0;
    case 12u: goto L_00348230;
    case 13u: goto L_00348254;
    case 14u: goto L_00348268;
    case 15u: goto L_00348274;
    case 16u: goto L_00348280;
    case 17u: goto L_003482A0;
    case 18u: goto L_003482C8;
    case 19u: goto L_00348300;
    case 20u: goto L_0034830C;
    case 21u: goto L_00348318;
    case 22u: goto L_00348324;
    case 23u: goto L_00348330;
    case 24u: goto L_00348348;
    case 25u: goto L_00348360;
    case 26u: goto L_00348384;
    case 27u: goto L_0034839C;
    case 28u: goto L_003483AC;
    case 29u: goto L_003483F0;
    case 30u: goto L_00348410;
    case 31u: goto L_00348418;
    case 32u: goto L_00348430;
    case 33u: goto L_00348440;
    case 34u: goto L_003484B0;
    case 35u: goto L_003484CC;
    case 36u: goto L_003484E4;
    case 37u: goto L_00348520;
    case 38u: goto L_00348548;
    case 39u: goto L_00348560;
    case 40u: goto L_00348570;
    case 41u: goto L_003485B0;
    case 42u: goto L_003485D0;
    case 43u: goto L_003485D8;
    case 44u: goto L_003485F0;
    case 45u: goto L_0034860C;
    case 46u: goto L_00348624;
    case 47u: goto L_00348660;
    case 48u: goto L_00348670;
    case 49u: goto L_003486A0;
    case 50u: goto L_003486B0;
    case 51u: goto L_003486C0;
    case 52u: goto L_003486F0;
    case 53u: goto L_00348708;
    case 54u: goto L_00348748;
    case 55u: goto L_0034875C;
    case 56u: goto L_00348798;
    case 57u: goto L_003487A0;
    case 58u: goto L_003487A8;
    case 59u: goto L_003487B0;
    case 60u: goto L_003487B8;
    case 61u: goto L_003487C0;
    case 62u: goto L_003487C8;
    case 63u: goto L_003487D0;
    case 64u: goto L_003487D8;
    case 65u: goto L_003487E0;
    case 66u: goto L_003487E8;
    case 67u: goto L_003487F0;
    case 68u: goto L_00348800;
    case 69u: goto L_00348860;
    case 70u: goto L_00348884;
    case 71u: goto L_0034889C;
    case 72u: goto L_003488E0;
    case 73u: goto L_00348904;
    case 74u: goto L_0034891C;
    case 75u: goto L_00348960;
    case 76u: goto L_00348980;
    case 77u: goto L_00348998;
    case 78u: goto L_003489B0;
    case 79u: goto L_003489D4;
    case 80u: goto L_003489E8;
    case 81u: goto L_003489F4;
    case 82u: goto L_00348A00;
    case 83u: goto L_00348A20;
    case 84u: goto L_00348A44;
    case 85u: goto L_00348A5C;
    case 86u: goto L_00348AA0;
    case 87u: goto L_00348AC0;
    case 88u: goto L_00348AD8;
    case 89u: goto L_00348AF0;
    case 90u: goto L_00348B14;
    case 91u: goto L_00348B28;
    case 92u: goto L_00348B34;
    case 93u: goto L_00348B40;
    case 94u: goto L_00348B60;
    case 95u: goto L_00348B84;
    case 96u: goto L_00348B9C;
    case 97u: goto L_00348BE0;
    case 98u: goto L_00348C20;
    case 99u: goto L_00348C44;
    case 100u: goto L_00348C58;
    case 101u: goto L_00348C64;
    case 102u: goto L_00348C70;
    case 103u: goto L_00348C90;
    case 104u: goto L_00348CB0;
    case 105u: goto L_00348D10;
    case 106u: goto L_00348D20;
    case 107u: goto L_00348D58;
    case 108u: goto L_00348DC0;
    case 109u: goto L_00348DEC;
    case 110u: goto L_00348DFC;
    case 111u: goto L_00348E14;
    case 112u: goto L_00348E50;
    case 113u: goto L_00348E80;
    case 114u: goto L_00348EA4;
    case 115u: goto L_00348EB8;
    case 116u: goto L_00348EC4;
    case 117u: goto L_00348ED0;
    case 118u: goto L_00348EF0;
    case 119u: goto L_00348F10;
    case 120u: goto L_00348F18;
    case 121u: goto L_00348F30;
    case 122u: goto L_00348F4C;
    case 123u: goto L_00348F60;
    case 124u: goto L_00348F70;
    case 125u: goto L_00348FA4;
    case 126u: goto L_00348FBC;
    case 127u: goto L_00348FC8;
    case 128u: goto L_00348FD4;
    case 129u: goto L_00348FE4;
    case 130u: goto L_00349030;
    case 131u: goto L_00349050;
    case 132u: goto L_00349058;
    case 133u: goto L_00349060;
    case 134u: goto L_00349068;
    case 135u: goto L_00349070;
    case 136u: goto L_00349080;
    case 137u: goto L_003490B4;
    case 138u: goto L_003490C8;
    case 139u: goto L_003490D8;
    case 140u: goto L_003490E8;
    case 141u: goto L_003490F4;
    case 142u: goto L_00349100;
    case 143u: goto L_00349120;
    case 144u: goto L_0034913C;
    case 145u: goto L_00349154;
    case 146u: goto L_00349190;
    case 147u: goto L_003491B0;
    case 148u: goto L_003491B8;
    case 149u: goto L_003491C0;
    case 150u: goto L_003491C8;
    case 151u: goto L_003491E0;
    case 152u: goto L_003491FC;
    case 153u: goto L_0034920C;
    case 154u: goto L_00349218;
    case 155u: goto L_00349230;
    case 156u: goto L_00349258;
    case 157u: goto L_00349270;
    case 158u: goto L_003492B0;
    case 159u: goto L_003492D8;
    case 160u: goto L_003492F0;
    case 161u: goto L_00349330;
    case 162u: goto L_00349358;
    case 163u: goto L_00349370;
    case 164u: goto L_003493B0;
    case 165u: goto L_003493D8;
    case 166u: goto L_003493F0;
    case 167u: goto L_00349430;
    case 168u: goto L_00349464;
    case 169u: goto L_00349480;
    case 170u: goto L_003494D0;
    case 171u: goto L_00349504;
    case 172u: goto L_00349520;
    case 173u: goto L_00349570;
    case 174u: goto L_00349590;
    case 175u: goto L_003495A0;
    case 176u: goto L_003495D0;
    case 177u: goto L_003495F0;
    case 178u: goto L_003495F8;
    case 179u: goto L_00349610;
    case 180u: goto L_00349630;
    case 181u: goto L_00349638;
    case 182u: goto L_00349650;
    case 183u: goto L_00349670;
    case 184u: goto L_00349698;
    case 185u: goto L_003496C8;
    case 186u: goto L_003496E0;
    case 187u: goto L_00349700;
    case 188u: goto L_00349740;
    case 189u: goto L_00349750;
    case 190u: goto L_00349770;
    case 191u: goto L_003497B0;
    case 192u: goto L_003497C0;
    case 193u: goto L_003497E0;
    case 194u: goto L_00349820;
    case 195u: goto L_00349830;
    case 196u: goto L_00349854;
    case 197u: goto L_0034988C;
    case 198u: goto L_003498C0;
    case 199u: goto L_003498D0;
    case 200u: goto L_003498F4;
    case 201u: goto L_00349948;
    case 202u: goto L_00349BE0;
    case 203u: goto L_00349C80;
    case 204u: goto L_00349C90;
    case 205u: goto L_00349CA0;
    case 206u: goto L_00349CB0;
    case 207u: goto L_00349CC0;
    case 208u: goto L_00349CE0;
    case 209u: goto L_00349CE8;
    case 210u: goto L_00349D00;
    case 211u: goto L_00349D20;
    case 212u: goto L_00349D2C;
    case 213u: goto L_00349D40;
    case 214u: goto L_00349D60;
    case 215u: goto L_00349D6C;
    case 216u: goto L_00349D80;
    case 217u: goto L_00349DA0;
    case 218u: goto L_00349DAC;
    case 219u: goto L_00349DC0;
    case 220u: goto L_00349DE4;
    case 221u: goto L_00349DFC;
    case 222u: goto L_00349E40;
    case 223u: goto L_00349E64;
    case 224u: goto L_00349E78;
    case 225u: goto L_00349E84;
    case 226u: goto L_00349E90;
    case 227u: goto L_00349EB0;
    case 228u: goto L_00349ED4;
    case 229u: goto L_00349EE0;
    case 230u: goto L_00349EF0;
    case 231u: goto L_00349F10;
    case 232u: goto L_00349F50;
    case 233u: goto L_00349F88;
    case 234u: goto L_00349FC0;
    case 235u: goto L_0034A010;
    case 236u: goto L_0034A038;
    case 237u: goto L_0034A084;
    case 238u: goto L_0034A090;
    case 239u: goto L_0034A098;
    case 240u: goto L_0034A0EC;
    case 241u: goto L_0034A110;
    case 242u: goto L_0034A138;
    case 243u: goto L_0034A150;
    case 244u: goto L_0034A160;
    case 245u: goto L_0034A18C;
    case 246u: goto L_0034A1AC;
    case 247u: goto L_0034A1CC;
    case 248u: goto L_0034A1EC;
    case 249u: goto L_0034A230;
    case 250u: goto L_0034A250;
    case 251u: goto L_0034A2AC;
    case 252u: goto L_0034A2D0;
    case 253u: goto L_0034A2EC;
    case 254u: goto L_0034A2F8;
    case 255u: goto L_0034A318;
    case 256u: goto L_0034A330;
    case 257u: goto L_0034A370;
    case 258u: goto L_0034A3A8;
    case 259u: goto L_0034A3E0;
    case 260u: goto L_0034A430;
    case 261u: goto L_0034A458;
    case 262u: goto L_0034A4A4;
    case 263u: goto L_0034A4B0;
    case 264u: goto L_0034A4B8;
    case 265u: goto L_0034A50C;
    case 266u: goto L_0034A530;
    case 267u: goto L_0034A558;
    case 268u: goto L_0034A570;
    case 269u: goto L_0034A580;
    case 270u: goto L_0034A5AC;
    case 271u: goto L_0034A5CC;
    case 272u: goto L_0034A5EC;
    case 273u: goto L_0034A60C;
    case 274u: goto L_0034A650;
    case 275u: goto L_0034A670;
    case 276u: goto L_0034A6CC;
    case 277u: goto L_0034A6F0;
    case 278u: goto L_0034A70C;
    case 279u: goto L_0034A718;
    case 280u: goto L_0034A738;
    case 281u: goto L_0034A750;
    case 282u: goto L_0034A790;
    case 283u: goto L_0034A7C8;
    case 284u: goto L_0034A800;
    case 285u: goto L_0034A850;
    case 286u: goto L_0034A878;
    case 287u: goto L_0034A8C4;
    case 288u: goto L_0034A8D0;
    case 289u: goto L_0034A8D8;
    case 290u: goto L_0034A92C;
    case 291u: goto L_0034A950;
    case 292u: goto L_0034A978;
    case 293u: goto L_0034A990;
    case 294u: goto L_0034A9A0;
    case 295u: goto L_0034A9CC;
    case 296u: goto L_0034A9EC;
    case 297u: goto L_0034AA0C;
    case 298u: goto L_0034AA2C;
    case 299u: goto L_0034AA4C;
    case 300u: goto L_0034AA6C;
    case 301u: goto L_0034AA8C;
    case 302u: goto L_0034AAD0;
    case 303u: goto L_0034AAF0;
    case 304u: goto L_0034AB4C;
    case 305u: goto L_0034AB70;
    case 306u: goto L_0034AB8C;
    case 307u: goto L_0034AB98;
    case 308u: goto L_0034ABB8;
    case 309u: goto L_0034ABD0;
    case 310u: goto L_0034ABF0;
    case 311u: goto L_0034AC30;
    case 312u: goto L_0034AC5C;
    case 313u: goto L_0034AC70;
    case 314u: goto L_0034ACC0;
    case 315u: goto L_0034ACF0;
    case 316u: goto L_0034AD10;
    case 317u: goto L_0034AD18;
    case 318u: goto L_0034AD68;
    case 319u: goto L_0034AD78;
    case 320u: goto L_0034AD80;
    case 321u: goto L_0034AD9C;
    case 322u: goto L_0034ADD0;
    case 323u: goto L_0034ADF8;
    case 324u: goto L_0034AE50;
    case 325u: goto L_0034AED0;
    case 326u: goto L_0034AF08;
    case 327u: goto L_0034AFC0;
    case 328u: goto L_0034B01C;
    case 329u: goto L_0034B02C;
    case 330u: goto L_0034B038;
    case 331u: goto L_0034B070;
    case 332u: goto L_0034B078;
    case 333u: goto L_0034B090;
    case 334u: goto L_0034B098;
    case 335u: goto L_0034B0EC;
    case 336u: goto L_0034B0F8;
    case 337u: goto L_0034B108;
    case 338u: goto L_0034B110;
    case 339u: goto L_0034B130;
    case 340u: goto L_0034B144;
    case 341u: goto L_0034B158;
    case 342u: goto L_0034B190;
    case 343u: goto L_0034B1B8;
    case 344u: goto L_0034B210;
    case 345u: goto L_0034B224;
    case 346u: goto L_0034B240;
    case 347u: goto L_0034B250;
    case 348u: goto L_0034B288;
    case 349u: goto L_0034B2AC;
    case 350u: goto L_0034B2C4;
    case 351u: goto L_0034B310;
    case 352u: goto L_0034B350;
    case 353u: goto L_0034B3E0;
    case 354u: goto L_0034B3FC;
    case 355u: goto L_0034B408;
    case 356u: goto L_0034B428;
    case 357u: goto L_0034B440;
    case 358u: goto L_0034B480;
    case 359u: goto L_0034B4D0;
    case 360u: goto L_0034B4E8;
    case 361u: goto L_0034B510;
    case 362u: goto L_0034B518;
    case 363u: goto L_0034B540;
    case 364u: goto L_0034B564;
    case 365u: goto L_0034B590;
    case 366u: goto L_0034B5A4;
    case 367u: goto L_0034B5B0;
    case 368u: goto L_0034B5DC;
    case 369u: goto L_0034B614;
    case 370u: goto L_0034B618;
    case 371u: goto L_0034B630;
    case 372u: goto L_0034B680;
    case 373u: goto L_0034B6D0;
    case 374u: goto L_0034B754;
    case 375u: goto L_0034B764;
    case 376u: goto L_0034B7BC;
    case 377u: goto L_0034B7E8;
    case 378u: goto L_0034B800;
    case 379u: goto L_0034B848;
    case 380u: goto L_0034B860;
    case 381u: goto L_0034B878;
    case 382u: goto L_0034B88C;
    case 383u: goto L_0034B898;
    case 384u: goto L_0034B8B0;
    case 385u: goto L_0034B900;
    case 386u: goto L_0034B918;
    case 387u: goto L_0034B930;
    case 388u: goto L_0034B948;
    case 389u: goto L_0034B954;
    case 390u: goto L_0034B960;
    case 391u: goto L_0034B980;
    case 392u: goto L_0034B9D0;
    case 393u: goto L_0034B9E8;
    case 394u: goto L_0034BA00;
    case 395u: goto L_0034BA18;
    case 396u: goto L_0034BA24;
    case 397u: goto L_0034BA30;
    case 398u: goto L_0034BA50;
    case 399u: goto L_0034BAA0;
    case 400u: goto L_0034BAB8;
    case 401u: goto L_0034BAD0;
    case 402u: goto L_0034BAE8;
    case 403u: goto L_0034BAF4;
    case 404u: goto L_0034BB00;
    case 405u: goto L_0034BB20;
    case 406u: goto L_0034BB70;
    case 407u: goto L_0034BB88;
    case 408u: goto L_0034BBA0;
    case 409u: goto L_0034BBB8;
    case 410u: goto L_0034BBC4;
    case 411u: goto L_0034BBD0;
    case 412u: goto L_0034BBF0;
    case 413u: goto L_0034BC40;
    case 414u: goto L_0034BC58;
    case 415u: goto L_0034BC70;
    case 416u: goto L_0034BC88;
    case 417u: goto L_0034BC94;
    case 418u: goto L_0034BCA0;
    case 419u: goto L_0034BCC0;
    case 420u: goto L_0034BCEC;
    case 421u: goto L_0034BD00;
    case 422u: goto L_0034BD08;
    case 423u: goto L_0034BD1C;
    case 424u: goto L_0034BD28;
    case 425u: goto L_0034BD34;
    case 426u: goto L_0034BD50;
    case 427u: goto L_0034BD98;
    case 428u: goto L_0034BDB0;
    case 429u: goto L_0034BDC8;
    case 430u: goto L_0034BDDC;
    case 431u: goto L_0034BDE8;
    case 432u: goto L_0034BE00;
    case 433u: goto L_0034BE24;
    case 434u: goto L_0034BE38;
    case 435u: goto L_0034BE44;
    case 436u: goto L_0034BE50;
    case 437u: goto L_0034BE70;
    case 438u: goto L_0034BE9C;
    case 439u: goto L_0034BEB0;
    case 440u: goto L_0034BEC0;
    case 441u: goto L_0034BECC;
    case 442u: goto L_0034BED8;
    case 443u: goto L_0034BF00;
    case 444u: goto L_0034BF2C;
    case 445u: goto L_0034BF40;
    case 446u: goto L_0034BF50;
    case 447u: goto L_0034BF5C;
    case 448u: goto L_0034BF68;
    case 449u: goto L_0034BF90;
    case 450u: goto L_0034BFBC;
    case 451u: goto L_0034BFD0;
    case 452u: goto L_0034BFE0;
    case 453u: goto L_0034BFEC;
    case 454u: goto L_0034BFF8;
    default: bad_entry(c, 0x00348000u); return;
    }
L_00348000:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00348004:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00348040; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034801Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0092(c, 405u, depth + 1u); else { c.pc = 0x0034BB20u; return; } if (c.pc != 0x0034801Cu) [[unlikely]] return; }
L_0034801C:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00348040; } }
L_00348040:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00348060:
    set32(c.r[29], c.r[29].w[0] - 288u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 286u);  if (t) { goto L_00348108; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348080u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0093(c, 34u, depth + 1u); else { c.pc = 0x0034C310u; return; } if (c.pc != 0x00348080u) [[unlikely]] return; }
L_00348080:
    c.r[8].d[0] = ld16((c.r[29].w[0] + 286u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[6], c.r[6].w[0] - 21204u);
    set32(c.r[2], c.r[2].w[0] + 16512u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[4], c.r[8].w[0] - 1u);
    set32(c.r[7], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[7].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003480D8u); set32(c.r[4], c.r[2].w[0] + 28266u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x003480D8u) [[unlikely]] return; }
L_003480D8:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 286u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[2], c.r[2].w[0] - 21180u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 12;
L_00348108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348110u); set32(c.r[4], 0u + 27u);  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x00348110u) [[unlikely]] return; }
L_00348110:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_00348120:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348144u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x00348144u) [[unlikely]] return; }
L_00348144:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00348180; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034815Cu);  if (depth < kMaxDepth) unit_0092(c, 12u, depth + 1u); else { c.pc = 0x00348230u; return; } if (c.pc != 0x0034815Cu) [[unlikely]] return; }
L_0034815C:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00348180; } }
L_00348180:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003481A0:
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[11], c.r[11].w[0] - 21198u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[10], c.r[10].w[0] - 21196u);
    set32(c.r[13], c.r[2].w[0] << 5);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[12], c.r[11].w[0] + c.r[13].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[12].d[0] = ld16((c.r[12].w[0]));
    set32(c.r[11], c.r[10].w[0] + c.r[13].w[0]);
    set32(c.r[4], c.r[4].w[0] - 21194u);
    set32(c.r[3], c.r[3].w[0] - 21192u);
    set32(c.r[10], c.r[4].w[0] + c.r[13].w[0]);
    set32(c.r[2], c.r[2].w[0] - 21190u);
    set32(c.r[4], c.r[3].w[0] + c.r[13].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[13].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.r[5].d[0] = ld16((c.r[11].w[0]));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[10].w[0]));
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[4].d[0] = ld16((c.r[4].w[0]));
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 33;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00348230:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 138u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348254u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x00348254u) [[unlikely]] return; }
L_00348254:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348268u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x00348268u) [[unlikely]] return; }
L_00348268:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348274u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x00348274u) [[unlikely]] return; }
L_00348274:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348280u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x00348280u) [[unlikely]] return; }
L_00348280:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003482A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00348340; } }
    set32(c.r[4], c.r[29].w[0] + 46u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003482C8u); set32(c.r[5], c.r[5].w[0] + 6064u);  if (depth < kMaxDepth) unit_0091(c, 161u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x003482C8u) [[unlikely]] return; }
L_003482C8:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 46u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 16512u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + 28172u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348300u); set32(c.r[4], c.r[16].w[0] + 6u);  if (depth < kMaxDepth) unit_0091(c, 161u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x00348300u) [[unlikely]] return; }
L_00348300:
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034830Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 161u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x0034830Cu) [[unlikely]] return; }
L_0034830C:
    set32(c.r[4], c.r[16].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348318u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 161u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x00348318u) [[unlikely]] return; }
L_00348318:
    set32(c.r[4], c.r[16].w[0] + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348324u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 161u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x00348324u) [[unlikely]] return; }
L_00348324:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348330u); set32(c.r[4], c.r[16].w[0] + 14u);  if (depth < kMaxDepth) unit_0091(c, 161u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x00348330u) [[unlikely]] return; }
L_00348330:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 4;
L_00348340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348348u); set32(c.r[4], 0u + 29u);  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x00348348u) [[unlikely]] return; }
L_00348348:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00348360:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348384u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x00348384u) [[unlikely]] return; }
L_00348384:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003483D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034839Cu);  if (depth < kMaxDepth) unit_0093(c, 40u, depth + 1u); else { c.pc = 0x0034C3A0u; return; } if (c.pc != 0x0034839Cu) [[unlikely]] return; }
L_0034839C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003483ACu); c.r[6].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0091(c, 286u, depth + 1u); else { c.pc = 0x003466C0u; return; } if (c.pc != 0x003483ACu) [[unlikely]] return; }
L_003483AC:
    set32(c.r[2], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));  if (t) { goto L_003483D0; } }
L_003483D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003483F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_00348410; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348410u);  if (depth < kMaxDepth) unit_0091(c, 288u, depth + 1u); else { c.pc = 0x00346780u; return; } if (c.pc != 0x00348410u) [[unlikely]] return; }
L_00348410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348418u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x00348418u) [[unlikely]] return; }
L_00348418:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00348430:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[6], 0u + 53u);
    set32(c.r[7], c.r[7].w[0] + 24602u);
    c.budget -= 4;
L_00348440:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 2u);
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[7], c.r[7].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00348440u | kUnwind; return; } goto L_00348440; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 20368u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_003484A0; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[1].w[0] + 20364u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] + 20368u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], c.r[2].w[0] - 19328u);
    st32((c.r[1].w[0] + 20360u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 20369u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003484A8; } }
L_003484A0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_003484A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003484B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003484CCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x003484CCu) [[unlikely]] return; }
L_003484CC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00348508; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003484E4u);  if (depth < kMaxDepth) unit_0093(c, 63u, depth + 1u); else { c.pc = 0x0034C5A0u; return; } if (c.pc != 0x003484E4u) [[unlikely]] return; }
L_003484E4:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00348508; } }
L_00348508:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00348520:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348548u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x00348548u) [[unlikely]] return; }
L_00348548:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00348598; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348560u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0092(c, 419u, depth + 1u); else { c.pc = 0x0034BCC0u; return; } if (c.pc != 0x00348560u) [[unlikely]] return; }
L_00348560:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348570u); c.r[6].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0091(c, 286u, depth + 1u); else { c.pc = 0x003466C0u; return; } if (c.pc != 0x00348570u) [[unlikely]] return; }
L_00348570:
    set32(c.r[2], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));  if (t) { goto L_00348598; } }
    c.budget -= 1;
L_00348598:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003485B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_003485D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003485D0u);  if (depth < kMaxDepth) unit_0091(c, 288u, depth + 1u); else { c.pc = 0x00346780u; return; } if (c.pc != 0x003485D0u) [[unlikely]] return; }
L_003485D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003485D8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x003485D8u) [[unlikely]] return; }
L_003485D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003485F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034860Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x0034860Cu) [[unlikely]] return; }
L_0034860C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_00348648; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348624u);  if (depth < kMaxDepth) unit_0092(c, 426u, depth + 1u); else { c.pc = 0x0034BD50u; return; } if (c.pc != 0x00348624u) [[unlikely]] return; }
L_00348624:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00348648; } }
L_00348648:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00348660:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    set32(c.r[3], 0u + 89u);
    set32(c.r[5], c.r[5].w[0] + 28111u);
    c.budget -= 4;
L_00348670:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00348670u | kUnwind; return; } goto L_00348670; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003486A0:
    c.budget -= 2;
    { set32(c.r[4], 0u + 2u);  goto L_003486C0; }
L_003486B0:
    c.budget -= 2;
    { set32(c.r[4], 0u + 3u);  goto L_003486C0; }
L_003486C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00348760; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28111u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003486F0u); set32(c.r[6], 0u + 89u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003486F0u) [[unlikely]] return; }
L_003486F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 28111u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348708u); set32(c.r[6], c.r[6].w[0] + 6064u);  if (depth < kMaxDepth) unit_0091(c, 167u, depth + 1u); else { c.pc = 0x003459D0u; return; } if (c.pc != 0x00348708u) [[unlikely]] return; }
L_00348708:
    c.r[4].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00348738; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00348738; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00348738; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00348760; } }
    c.budget -= 1;
L_00348738:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    set32(c.r[4], c.r[4].w[0] + 28119u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348748u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0091(c, 167u, depth + 1u); else { c.pc = 0x003459D0u; return; } if (c.pc != 0x00348748u) [[unlikely]] return; }
L_00348748:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    set32(c.r[5], 0u + 64u);
    set32(c.r[4], c.r[4].w[0] + 28136u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034875Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 167u, depth + 1u); else { c.pc = 0x003459D0u; return; } if (c.pc != 0x0034875Cu) [[unlikely]] return; }
L_0034875C:
    c.budget -= 1;
L_00348760:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[4].d[0] = ld16((c.r[1].w[0] + 20594u));
    set32(c.r[3], 0u + 16u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[3].d[0] = c.r[16].d[0] & 255ull;  if (t) { goto L_003487F0; } }
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_003487F0; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 5376u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00348000u < 16384u) { entry = entries_0092[(t - 0x00348000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00348798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003487A0u); set32(c.r[4], 0u + 38u);  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x003487A0u) [[unlikely]] return; }
L_003487A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003487F0; } }
L_003487A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003487B0u); set32(c.r[4], 0u + 39u);  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x003487B0u) [[unlikely]] return; }
L_003487B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003487F0; } }
L_003487B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003487C0u); set32(c.r[4], 0u + 31u);  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x003487C0u) [[unlikely]] return; }
L_003487C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003487F0; } }
L_003487C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003487D0u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x003487D0u) [[unlikely]] return; }
L_003487D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003487F0; } }
L_003487D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003487E0u); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x003487E0u) [[unlikely]] return; }
L_003487E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003487F0; } }
L_003487E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003487F0u); set32(c.r[4], 0u + 37u);  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x003487F0u) [[unlikely]] return; }
L_003487F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00348800:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 20328u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_00348850; } }
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    st32((c.r[1].w[0] + 20324u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 20348u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] + 20328u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], c.r[2].w[0] - 21392u);
    st32((c.r[1].w[0] + 20320u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 20329u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00348858; } }
    c.budget -= 1;
L_00348850:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_00348858:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00348860:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348884u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x00348884u) [[unlikely]] return; }
L_00348884:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003488C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034889Cu);  if (depth < kMaxDepth) unit_0092(c, 432u, depth + 1u); else { c.pc = 0x0034BE00u; return; } if (c.pc != 0x0034889Cu) [[unlikely]] return; }
L_0034889C:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003488C0; } }
L_003488C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003488E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348904u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x00348904u) [[unlikely]] return; }
L_00348904:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00348940; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034891Cu);  if (depth < kMaxDepth) unit_0092(c, 78u, depth + 1u); else { c.pc = 0x003489B0u; return; } if (c.pc != 0x0034891Cu) [[unlikely]] return; }
L_0034891C:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00348940; } }
L_00348940:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00348960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 31u);  if (t) { goto L_00348990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348980u);  if (depth < kMaxDepth) unit_0091(c, 172u, depth + 1u); else { c.pc = 0x00345A80u; return; } if (c.pc != 0x00348980u) [[unlikely]] return; }
L_00348980:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 31u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    st8((c.r[1].w[0] - 9940u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00348990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348998u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x00348998u) [[unlikely]] return; }
L_00348998:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003489B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 86u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003489D4u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x003489D4u) [[unlikely]] return; }
L_003489D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003489E8u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x003489E8u) [[unlikely]] return; }
L_003489E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003489F4u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x003489F4u) [[unlikely]] return; }
L_003489F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348A00u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x00348A00u) [[unlikely]] return; }
L_00348A00:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00348A20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348A44u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x00348A44u) [[unlikely]] return; }
L_00348A44:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] & 65535ull;  if (t) { goto L_00348A80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348A5Cu);  if (depth < kMaxDepth) unit_0092(c, 89u, depth + 1u); else { c.pc = 0x00348AF0u; return; } if (c.pc != 0x00348A5Cu) [[unlikely]] return; }
L_00348A5C:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00348A80; } }
L_00348A80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00348AA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 31u);  if (t) { goto L_00348AD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348AC0u);  if (depth < kMaxDepth) unit_0091(c, 172u, depth + 1u); else { c.pc = 0x00345A80u; return; } if (c.pc != 0x00348AC0u) [[unlikely]] return; }
L_00348AC0:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 31u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    st8((c.r[1].w[0] - 9939u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00348AD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348AD8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x00348AD8u) [[unlikely]] return; }
L_00348AD8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00348AF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 88u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348B14u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x00348B14u) [[unlikely]] return; }
L_00348B14:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348B28u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x00348B28u) [[unlikely]] return; }
L_00348B28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348B34u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x00348B34u) [[unlikely]] return; }
L_00348B34:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348B40u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x00348B40u) [[unlikely]] return; }
L_00348B40:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00348B60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348B84u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x00348B84u) [[unlikely]] return; }
L_00348B84:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00348BC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348B9Cu);  if (depth < kMaxDepth) unit_0092(c, 98u, depth + 1u); else { c.pc = 0x00348C20u; return; } if (c.pc != 0x00348B9Cu) [[unlikely]] return; }
L_00348B9C:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00348BC0; } }
L_00348BC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00348BE0:
    c.r[6].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 21183u);
    set32(c.r[4], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00348C20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 131u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348C44u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x00348C44u) [[unlikely]] return; }
L_00348C44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348C58u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x00348C58u) [[unlikely]] return; }
L_00348C58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348C64u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x00348C64u) [[unlikely]] return; }
L_00348C64:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348C70u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x00348C70u) [[unlikely]] return; }
L_00348C70:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00348C90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 28u);  if (t) { goto L_00348D08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348CB0u); set32(c.r[5], c.r[29].w[0] + 31u);  if (depth < kMaxDepth) unit_0091(c, 180u, depth + 1u); else { c.pc = 0x00345B20u; return; } if (c.pc != 0x00348CB0u) [[unlikely]] return; }
L_00348CB0:
    c.r[6].d[0] = ld16((c.r[29].w[0] + 28u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[5].d[0] = ld8((c.r[29].w[0] + 31u));
    set32(c.r[3], c.r[3].w[0] - 21183u);
    set32(c.r[2], c.r[2].w[0] - 21180u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[4].w[0] << 5);
    set32(c.r[4], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[7].w[0]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st16((c.r[1].w[0] - 10292u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    st8((c.r[1].w[0] - 10271u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 22;
L_00348D08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348D10u); set32(c.r[4], 0u + 30u);  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x00348D10u) [[unlikely]] return; }
L_00348D10:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00348D20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[1].w[0] + 20528u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00348D98; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28562u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348D58u); set32(c.r[6], 0u + 360u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00348D58u) [[unlikely]] return; }
L_00348D58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    st32((c.r[1].w[0] + 20524u), c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] + 20548u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] + 20528u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], c.r[2].w[0] - 18736u);
    st32((c.r[1].w[0] + 20520u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 20529u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00348DA0; } }
L_00348D98:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_00348DA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00348DC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 360u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    set32(c.r[4], c.r[4].w[0] + 28562u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348DECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00348DECu) [[unlikely]] return; }
L_00348DEC:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348DFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x00348DFCu) [[unlikely]] return; }
L_00348DFC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00348E38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348E14u);  if (depth < kMaxDepth) unit_0092(c, 113u, depth + 1u); else { c.pc = 0x00348E80u; return; } if (c.pc != 0x00348E14u) [[unlikely]] return; }
L_00348E14:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00348E38; } }
L_00348E38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00348E50:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CC0000u);  if (t) { goto L_00348E70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 28201u));
    set32(c.r[2], c.r[2].w[0] + 28562u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_00348E70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00348E80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 136u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348EA4u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x00348EA4u) [[unlikely]] return; }
L_00348EA4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348EB8u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x00348EB8u) [[unlikely]] return; }
L_00348EB8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348EC4u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x00348EC4u) [[unlikely]] return; }
L_00348EC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348ED0u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x00348ED0u) [[unlikely]] return; }
L_00348ED0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00348EF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00348F10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348F10u);  if (depth < kMaxDepth) unit_0092(c, 121u, depth + 1u); else { c.pc = 0x00348F30u; return; } if (c.pc != 0x00348F10u) [[unlikely]] return; }
L_00348F10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348F18u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x00348F18u) [[unlikely]] return; }
L_00348F18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00348F30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 28562u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348F4Cu); set32(c.r[6], 0u + 360u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00348F4Cu) [[unlikely]] return; }
L_00348F4C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    set32(c.r[4], c.r[4].w[0] + 28201u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348F60u); set32(c.r[5], c.r[5].w[0] + 28562u);  if (depth < kMaxDepth) unit_0093(c, 131u, depth + 1u); else { c.pc = 0x0034CC50u; return; } if (c.pc != 0x00348F60u) [[unlikely]] return; }
L_00348F60:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00348F70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348FA4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x00348FA4u) [[unlikely]] return; }
L_00348FA4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00349008; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348FBCu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 286u, depth + 1u); else { c.pc = 0x003466C0u; return; } if (c.pc != 0x00348FBCu) [[unlikely]] return; }
L_00348FBC:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348FC8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 286u, depth + 1u); else { c.pc = 0x003466C0u; return; } if (c.pc != 0x00348FC8u) [[unlikely]] return; }
L_00348FC8:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348FD4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 286u, depth + 1u); else { c.pc = 0x003466C0u; return; } if (c.pc != 0x00348FD4u) [[unlikely]] return; }
L_00348FD4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348FE4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0092(c, 136u, depth + 1u); else { c.pc = 0x00349080u; return; } if (c.pc != 0x00348FE4u) [[unlikely]] return; }
L_00348FE4:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00349008; } }
L_00349008:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00349030:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00349068; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349050u);  if (depth < kMaxDepth) unit_0091(c, 288u, depth + 1u); else { c.pc = 0x00346780u; return; } if (c.pc != 0x00349050u) [[unlikely]] return; }
L_00349050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349058u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0091(c, 288u, depth + 1u); else { c.pc = 0x00346780u; return; } if (c.pc != 0x00349058u) [[unlikely]] return; }
L_00349058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349060u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0091(c, 288u, depth + 1u); else { c.pc = 0x00346780u; return; } if (c.pc != 0x00349060u) [[unlikely]] return; }
L_00349060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349068u);  if (depth < kMaxDepth) unit_0091(c, 169u, depth + 1u); else { c.pc = 0x00345A40u; return; } if (c.pc != 0x00349068u) [[unlikely]] return; }
L_00349068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349070u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x00349070u) [[unlikely]] return; }
L_00349070:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00349080:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 6848u);
    set32(c.r[5], 0u + 47u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003490B4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x003490B4u) [[unlikely]] return; }
L_003490B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003490C8u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x003490C8u) [[unlikely]] return; }
L_003490C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003490D8u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x003490D8u) [[unlikely]] return; }
L_003490D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003490E8u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x003490E8u) [[unlikely]] return; }
L_003490E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003490F4u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x003490F4u) [[unlikely]] return; }
L_003490F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349100u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x00349100u) [[unlikely]] return; }
L_00349100:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00349120:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034913Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x0034913Cu) [[unlikely]] return; }
L_0034913C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00349178; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349154u);  if (depth < kMaxDepth) unit_0092(c, 151u, depth + 1u); else { c.pc = 0x003491E0u; return; } if (c.pc != 0x00349154u) [[unlikely]] return; }
L_00349154:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00349178; } }
L_00349178:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00349190:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003491C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003491B0u);  if (depth < kMaxDepth) unit_0091(c, 287u, depth + 1u); else { c.pc = 0x00346720u; return; } if (c.pc != 0x003491B0u) [[unlikely]] return; }
L_003491B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003491B8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0091(c, 287u, depth + 1u); else { c.pc = 0x00346720u; return; } if (c.pc != 0x003491B8u) [[unlikely]] return; }
L_003491B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003491C0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0091(c, 287u, depth + 1u); else { c.pc = 0x00346720u; return; } if (c.pc != 0x003491C0u) [[unlikely]] return; }
L_003491C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003491C8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x003491C8u) [[unlikely]] return; }
L_003491C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003491E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    set32(c.r[5], 0u + 45u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003491FCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x003491FCu) [[unlikely]] return; }
L_003491FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034920Cu); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034920Cu) [[unlikely]] return; }
L_0034920C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349218u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x00349218u) [[unlikely]] return; }
L_00349218:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00349230:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349258u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x00349258u) [[unlikely]] return; }
L_00349258:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00349298; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349270u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0092(c, 437u, depth + 1u); else { c.pc = 0x0034BE70u; return; } if (c.pc != 0x00349270u) [[unlikely]] return; }
L_00349270:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00349298; } }
    c.budget -= 1;
L_00349298:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003492B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003492D8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x003492D8u) [[unlikely]] return; }
L_003492D8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00349318; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003492F0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0092(c, 443u, depth + 1u); else { c.pc = 0x0034BF00u; return; } if (c.pc != 0x003492F0u) [[unlikely]] return; }
L_003492F0:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00349318; } }
    c.budget -= 1;
L_00349318:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00349330:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349358u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x00349358u) [[unlikely]] return; }
L_00349358:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00349398; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349370u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0092(c, 449u, depth + 1u); else { c.pc = 0x0034BF90u; return; } if (c.pc != 0x00349370u) [[unlikely]] return; }
L_00349370:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00349398; } }
    c.budget -= 1;
L_00349398:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003493B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003493D8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x003493D8u) [[unlikely]] return; }
L_003493D8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00349418; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003493F0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0093(c, 2u, depth + 1u); else { c.pc = 0x0034C020u; return; } if (c.pc != 0x003493F0u) [[unlikely]] return; }
L_003493F0:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00349418; } }
    c.budget -= 1;
L_00349418:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00349430:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349464u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x00349464u) [[unlikely]] return; }
L_00349464:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003494A8; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349480u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0093(c, 8u, depth + 1u); else { c.pc = 0x0034C0B0u; return; } if (c.pc != 0x00349480u) [[unlikely]] return; }
L_00349480:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003494A8; } }
    c.budget -= 1;
L_003494A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003494D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349504u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x00349504u) [[unlikely]] return; }
L_00349504:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00349548; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349520u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0093(c, 15u, depth + 1u); else { c.pc = 0x0034C150u; return; } if (c.pc != 0x00349520u) [[unlikely]] return; }
L_00349520:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00349548; } }
    c.budget -= 1;
L_00349548:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00349570:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld16((c.r[1].w[0] - 10292u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00349590:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[4], c.r[4].w[0] - 9940u);
    c.r[3].d[0] = c.r[2].d[0] | 38051ull;
    c.budget -= 4;
L_003495A0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003495A0u | kUnwind; return; } goto L_003495A0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003495D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003495F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003495F0u);  if (depth < kMaxDepth) unit_0093(c, 22u, depth + 1u); else { c.pc = 0x0034C1F0u; return; } if (c.pc != 0x003495F0u) [[unlikely]] return; }
L_003495F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003495F8u); set32(c.r[4], 0u + 13u);  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x003495F8u) [[unlikely]] return; }
L_003495F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00349610:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00CA0000u);  if (t) { goto L_00349630; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349630u); set32(c.r[4], c.r[4].w[0] - 9938u);  if (depth < kMaxDepth) unit_0091(c, 172u, depth + 1u); else { c.pc = 0x00345A80u; return; } if (c.pc != 0x00349630u) [[unlikely]] return; }
L_00349630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349638u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x00349638u) [[unlikely]] return; }
L_00349638:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00349650:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 95u);  if (t) { goto L_003496C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349670u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0091(c, 174u, depth + 1u); else { c.pc = 0x00345AA0u; return; } if (c.pc != 0x00349670u) [[unlikely]] return; }
L_00349670:
    c.r[4].d[0] = ld8((c.r[29].w[0] + 95u));
    set32(c.r[3], 0u + 5285u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[1].d[0] = 0ull | 39088ull;
    set32(c.r[2], c.r[2].w[0] + 16512u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349698u); set32(c.r[4], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00349698u) [[unlikely]] return; }
L_00349698:
    c.r[4].d[0] = ld8((c.r[29].w[0] + 95u));
    set32(c.r[3], 0u + 5285u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[2], c.r[2].w[0] - 9937u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
L_003496C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003496C8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x003496C8u) [[unlikely]] return; }
L_003496C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003496E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 31u);  if (t) { goto L_00349738; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349700u); set32(c.r[5], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0091(c, 177u, depth + 1u); else { c.pc = 0x00345AE0u; return; } if (c.pc != 0x00349700u) [[unlikely]] return; }
L_00349700:
    c.r[6].d[0] = ld8((c.r[29].w[0] + 31u));
    set32(c.r[4], 0u + 5285u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[5].d[0] = ld8((c.r[29].w[0] + 30u));
    set32(c.r[3], c.r[3].w[0] - 9871u);
    set32(c.r[2], c.r[2].w[0] - 9937u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[4].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[6].w[0]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 14;
L_00349738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349740u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x00349740u) [[unlikely]] return; }
L_00349740:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00349750:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 31u);  if (t) { goto L_003497A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349770u); set32(c.r[5], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0091(c, 177u, depth + 1u); else { c.pc = 0x00345AE0u; return; } if (c.pc != 0x00349770u) [[unlikely]] return; }
L_00349770:
    c.r[6].d[0] = ld8((c.r[29].w[0] + 31u));
    set32(c.r[4], 0u + 5285u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[5].d[0] = ld8((c.r[29].w[0] + 30u));
    set32(c.r[3], c.r[3].w[0] - 9869u);
    set32(c.r[2], c.r[2].w[0] - 9937u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[4].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[6].w[0]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 14;
L_003497A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003497B0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x003497B0u) [[unlikely]] return; }
L_003497B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003497C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 31u);  if (t) { goto L_00349818; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003497E0u); set32(c.r[5], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0091(c, 177u, depth + 1u); else { c.pc = 0x00345AE0u; return; } if (c.pc != 0x003497E0u) [[unlikely]] return; }
L_003497E0:
    c.r[6].d[0] = ld8((c.r[29].w[0] + 31u));
    set32(c.r[4], 0u + 5285u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[5].d[0] = ld8((c.r[29].w[0] + 30u));
    set32(c.r[3], c.r[3].w[0] - 9870u);
    set32(c.r[2], c.r[2].w[0] - 9937u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[4].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[6].w[0]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 14;
L_00349818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349820u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x00349820u) [[unlikely]] return; }
L_00349820:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00349830:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 95u);  if (t) { goto L_003498B8; } }
    set32(c.r[5], c.r[29].w[0] + 94u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349854u); set32(c.r[6], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0091(c, 186u, depth + 1u); else { c.pc = 0x00345BA0u; return; } if (c.pc != 0x00349854u) [[unlikely]] return; }
L_00349854:
    c.r[6].d[0] = ld8((c.r[29].w[0] + 95u));
    set32(c.r[2], 0u + 5285u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 94u));
    set32(c.r[4], c.r[4].w[0] + 16512u);
    c.r[1].d[0] = 0ull | 39188ull;
    set32(c.r[5], c.r[29].w[0] + 16u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034988Cu); set32(c.r[4], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0034988Cu) [[unlikely]] return; }
L_0034988C:
    c.r[5].d[0] = ld8((c.r[29].w[0] + 95u));
    set32(c.r[4], 0u + 5285u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 94u));
    set32(c.r[3], c.r[3].w[0] - 9868u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 11;
L_003498B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003498C0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x003498C0u) [[unlikely]] return; }
L_003498C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003498D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 31u);  if (t) { goto L_00349C78; } }
    set32(c.r[5], c.r[29].w[0] + 30u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003498F4u); set32(c.r[6], c.r[29].w[0] + 24u);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034C350u; return; } if (c.pc != 0x003498F4u) [[unlikely]] return; }
L_003498F4:
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_00349C38; } }
    c.r[1].d[0] = c.r[4].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] - 8u);  if (t) { goto L_00349B98; } }
    c.r[8].d[0] = ld8((c.r[29].w[0] + 31u));
    set32(c.r[2], 0u + 5285u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[6].d[0] = ld8((c.r[29].w[0] + 30u));
    set32(c.r[7], c.r[7].w[0] + 16512u);
    mmi::mult(c, 0, c.r[8].w[0], c.r[2].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[6], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 11;
L_00349948:
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[6].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[7].d[0] = ld8((c.r[7].w[0]));
    st8((c.r[1].w[0] - 24236u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 1u));
    st8((c.r[1].w[0] - 24235u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 2u));
    st8((c.r[1].w[0] - 24234u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[7], c.r[7].w[0] + 3u);
    st32((c.r[29].w[0] + 24u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    c.r[7].d[0] = ld8((c.r[7].w[0]));
    st8((c.r[1].w[0] - 24233u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 1u));
    st8((c.r[1].w[0] - 24232u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 2u));
    st8((c.r[1].w[0] - 24231u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[7], c.r[7].w[0] + 3u);
    st32((c.r[29].w[0] + 24u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    c.r[7].d[0] = ld8((c.r[7].w[0]));
    st8((c.r[1].w[0] - 24230u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 1u));
    st8((c.r[1].w[0] - 24229u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 2u));
    st8((c.r[1].w[0] - 24228u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[7], c.r[7].w[0] + 3u);
    st32((c.r[29].w[0] + 24u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    c.r[7].d[0] = ld8((c.r[7].w[0]));
    st8((c.r[1].w[0] - 24227u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 1u));
    st8((c.r[1].w[0] - 24226u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 2u));
    st8((c.r[1].w[0] - 24225u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[7], c.r[7].w[0] + 3u);
    st32((c.r[29].w[0] + 24u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    c.r[7].d[0] = ld8((c.r[7].w[0]));
    st8((c.r[1].w[0] - 24224u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 1u));
    st8((c.r[1].w[0] - 24223u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 2u));
    st8((c.r[1].w[0] - 24222u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[7], c.r[7].w[0] + 3u);
    st32((c.r[29].w[0] + 24u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    c.r[7].d[0] = ld8((c.r[7].w[0]));
    st8((c.r[1].w[0] - 24221u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 1u));
    st8((c.r[1].w[0] - 24220u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 2u));
    st8((c.r[1].w[0] - 24219u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[7], c.r[7].w[0] + 3u);
    st32((c.r[29].w[0] + 24u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    c.r[7].d[0] = ld8((c.r[7].w[0]));
    st8((c.r[1].w[0] - 24218u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 1u));
    st8((c.r[1].w[0] - 24217u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 2u));
    st8((c.r[1].w[0] - 24216u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[7], c.r[7].w[0] + 3u);
    st32((c.r[29].w[0] + 24u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    c.r[7].d[0] = ld8((c.r[7].w[0]));
    st8((c.r[1].w[0] - 24215u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 1u));
    st8((c.r[1].w[0] - 24214u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    set32(c.r[2], c.r[2].w[0] + 24u);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 2u));
    st8((c.r[1].w[0] - 24213u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[7], c.r[7].w[0] + 3u);
    c.budget -= 148;
    { const bool t = c.r[6].d[0] != 0ull; st32((c.r[29].w[0] + 24u), c.r[7].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00349948u | kUnwind; return; } goto L_00349948; } }
L_00349B98:
    c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00349C38; } }
    c.r[8].d[0] = ld8((c.r[29].w[0] + 31u));
    set32(c.r[3], 0u + 5285u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], c.r[5].w[0] << 1);
    c.r[6].d[0] = ld8((c.r[29].w[0] + 30u));
    set32(c.r[7], c.r[7].w[0] + 16512u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    mmi::mult(c, 0, c.r[8].w[0], c.r[3].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[6], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 15;
L_00349BE0:
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[1].w[0] - 24236u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1u));
    st8((c.r[1].w[0] - 24235u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[6].w[0] + c.r[1].w[0]);
    set32(c.r[6], c.r[6].w[0] + 3u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2u));
    st8((c.r[1].w[0] - 24234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 3u);
    c.budget -= 22;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 24u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00349BE0u | kUnwind; return; } goto L_00349BE0; } }
L_00349C38:
    c.r[7].d[0] = ld8((c.r[29].w[0] + 31u));
    set32(c.r[5], 0u + 5285u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[6].d[0] = ld8((c.r[29].w[0] + 30u));
    set32(c.r[3], c.r[3].w[0] - 7756u);
    set32(c.r[2], c.r[2].w[0] - 9868u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[2].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 16;
L_00349C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349C80u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x00349C80u) [[unlikely]] return; }
L_00349C80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00349C90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00349CA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00349CB0:
    c.budget -= 2;
    { c.r[4].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00344EC0u | kUnwind; return; } [[clang::musttail]] return unit_0091(c, 90u, depth); }
L_00349CC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_00349CE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349CE0u);  if (depth < kMaxDepth) unit_0091(c, 287u, depth + 1u); else { c.pc = 0x00346720u; return; } if (c.pc != 0x00349CE0u) [[unlikely]] return; }
L_00349CE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349CE8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x00349CE8u) [[unlikely]] return; }
L_00349CE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00349D00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00349D20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349D20u);  if (depth < kMaxDepth) unit_0091(c, 169u, depth + 1u); else { c.pc = 0x00345A40u; return; } if (c.pc != 0x00349D20u) [[unlikely]] return; }
L_00349D20:
    set32(c.r[4], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349D2Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 88u, depth + 1u); else { c.pc = 0x00344E70u; return; } if (c.pc != 0x00349D2Cu) [[unlikely]] return; }
L_00349D2C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00349D40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00349D60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349D60u);  if (depth < kMaxDepth) unit_0091(c, 169u, depth + 1u); else { c.pc = 0x00345A40u; return; } if (c.pc != 0x00349D60u) [[unlikely]] return; }
L_00349D60:
    set32(c.r[4], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349D6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 88u, depth + 1u); else { c.pc = 0x00344E70u; return; } if (c.pc != 0x00349D6Cu) [[unlikely]] return; }
L_00349D6C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00349D80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00349DA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349DA0u);  if (depth < kMaxDepth) unit_0091(c, 169u, depth + 1u); else { c.pc = 0x00345A40u; return; } if (c.pc != 0x00349DA0u) [[unlikely]] return; }
L_00349DA0:
    set32(c.r[4], 0u + 11u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349DACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 88u, depth + 1u); else { c.pc = 0x00344E70u; return; } if (c.pc != 0x00349DACu) [[unlikely]] return; }
L_00349DAC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00349DC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349DE4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0091(c, 96u, depth + 1u); else { c.pc = 0x00344F90u; return; } if (c.pc != 0x00349DE4u) [[unlikely]] return; }
L_00349DE4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00349E20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349DFCu);  if (depth < kMaxDepth) unit_0092(c, 222u, depth + 1u); else { c.pc = 0x00349E40u; return; } if (c.pc != 0x00349DFCu) [[unlikely]] return; }
L_00349DFC:
    set32(c.r[4], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16544u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00349E20; } }
L_00349E20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00349E40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 134u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349E64u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x00349E64u) [[unlikely]] return; }
L_00349E64:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349E78u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x00349E78u) [[unlikely]] return; }
L_00349E78:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349E84u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x00349E84u) [[unlikely]] return; }
L_00349E84:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349E90u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x00349E90u) [[unlikely]] return; }
L_00349E90:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00349EB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 20600u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00CC0000u);  if (t) { goto L_00349ED8; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349ED4u); set32(c.r[5], c.r[5].w[0] + 29024u);  if (depth < kMaxDepth) unit_0091(c, 183u, depth + 1u); else { c.pc = 0x00345B60u; return; } if (c.pc != 0x00349ED4u) [[unlikely]] return; }
L_00349ED4:
    c.budget -= 1;
L_00349ED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349EE0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 90u, depth + 1u); else { c.pc = 0x00344EC0u; return; } if (c.pc != 0x00349EE0u) [[unlikely]] return; }
L_00349EE0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00349EF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld16((c.r[1].w[0] + 29024u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00349F10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0] + 8u), c.r[4].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00349F30; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 20210u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00349F40; } }
L_00349F30:
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] + 20210u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00349F40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00349F50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[4].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 16u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_00349F98; } }
    set32(c.r[2], 0u + 11u);
    st8((c.r[29].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[29].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[2], ld32((c.r[1].w[0] + 20204u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00349F88u); set32(c.r[5], c.r[29].w[0] + 24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00349F88u) [[unlikely]] return; }
L_00349F88:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 20210u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00349FA8; } }
L_00349F98:
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] + 20210u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00349FA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00349FC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[17].w[0] + 20200u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0034A318; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 9u));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0034A318; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 5408u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00348000u < 16384u) { entry = entries_0092[(t - 0x00348000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0034A010:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    st8((c.r[17].w[0] + 36u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
L_0034A038:
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034A050; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 36u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0034A050:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034A038u | kUnwind; return; } goto L_0034A038; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    st16((c.r[1].w[0] + 29390u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[4].w[0] - 32116u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 704u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A084u); st16((c.r[1].w[0] - 32132u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0034A084u) [[unlikely]] return; }
L_0034A084:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A090u); set32(c.r[4], c.r[4].w[0] - 24816u);  if (depth < kMaxDepth) unit_0091(c, 290u, depth + 1u); else { c.pc = 0x00346850u; return; } if (c.pc != 0x0034A090u) [[unlikely]] return; }
L_0034A090:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034A318; } }
L_0034A098:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 10u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0034A0F8; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 10u);
    c.r[6].d[0] = ld8((c.r[17].w[0] + 36u));
    c.r[4].d[0] = ld16((c.r[1].w[0] - 32132u));
    st8((c.r[29].w[0] + 56u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::mult(c, 0, c.r[4].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    st8((c.r[29].w[0] + 57u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[1].w[0] + 29390u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld64((c.r[29].w[0] + 56u));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A0ECu); set32(c.r[5], c.r[29].w[0] + 56u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034A0ECu) [[unlikely]] return; }
L_0034A0EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034A318; } }
    c.budget -= 1;
L_0034A0F8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 6u);  if (t) { goto L_0034A318; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0034A318; } }
    c.budget -= 1;
L_0034A110:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld16((c.r[1].w[0] - 32132u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_0034A318; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0034A318; } }
    c.budget -= 1;
L_0034A138:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 10u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_0034A158; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A150u); st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0091(c, 94u, depth + 1u); else { c.pc = 0x00344F50u; return; } if (c.pc != 0x0034A150u) [[unlikely]] return; }
L_0034A150:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034A318; } }
L_0034A158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A160u); set32(c.r[16], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_0091(c, 107u, depth + 1u); else { c.pc = 0x00345210u; return; } if (c.pc != 0x0034A160u) [[unlikely]] return; }
L_0034A160:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 36u));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0034A318; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00350000u);  if (t) { goto L_0034A190; } }
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A18Cu); set32(c.r[5], c.r[5].w[0] - 24752u);  if (depth < kMaxDepth) unit_0091(c, 305u, depth + 1u); else { c.pc = 0x00346A80u; return; } if (c.pc != 0x0034A18Cu) [[unlikely]] return; }
L_0034A18C:
    c.budget -= 1;
L_0034A190:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00350000u);  if (t) { goto L_0034A1B0; } }
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A1ACu); set32(c.r[5], c.r[5].w[0] - 24752u);  if (depth < kMaxDepth) unit_0091(c, 314u, depth + 1u); else { c.pc = 0x00346CC0u; return; } if (c.pc != 0x0034A1ACu) [[unlikely]] return; }
L_0034A1AC:
    c.budget -= 1;
L_0034A1B0:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00350000u);  if (t) { goto L_0034A1D0; } }
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A1CCu); set32(c.r[5], c.r[5].w[0] - 24752u);  if (depth < kMaxDepth) unit_0091(c, 297u, depth + 1u); else { c.pc = 0x00346920u; return; } if (c.pc != 0x0034A1CCu) [[unlikely]] return; }
L_0034A1CC:
    c.budget -= 1;
L_0034A1D0:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00350000u);  if (t) { goto L_0034A1F0; } }
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A1ECu); set32(c.r[5], c.r[5].w[0] - 24752u);  if (depth < kMaxDepth) unit_0091(c, 321u, depth + 1u); else { c.pc = 0x00346E20u; return; } if (c.pc != 0x0034A1ECu) [[unlikely]] return; }
L_0034A1EC:
    c.budget -= 1;
L_0034A1F0:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[4], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[1].w[0] - 32132u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_0034A220; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0034A318; } }
    c.budget -= 1;
L_0034A220:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 9u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0034A318; } }
L_0034A230:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[7].d[0] = ld16((c.r[1].w[0] - 32132u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] + 16512u);
    c.budget -= 8;
L_0034A250:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[1].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 352u);  if (t) { goto L_0034A290; } }
    set32(c.r[4], ld32((c.r[8].w[0] + 16580u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[4].d[0] = c.r[4].d[0] & 15ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0034A280; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0034A290; } }
    c.budget -= 1;
L_0034A280:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[9].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034A250u | kUnwind; return; } goto L_0034A250; } }
L_0034A290:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 10u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0034A2B8; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A2ACu); st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0091(c, 94u, depth + 1u); else { c.pc = 0x00344F50u; return; } if (c.pc != 0x0034A2ACu) [[unlikely]] return; }
L_0034A2AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034A318; } }
    c.budget -= 1;
L_0034A2B8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0034A318; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 9u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0034A318; } }
L_0034A2D0:
    st8((c.r[29].w[0] + 56u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A2ECu); set32(c.r[5], c.r[29].w[0] + 56u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034A2ECu) [[unlikely]] return; }
L_0034A2EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034A318; } }
    c.budget -= 1;
L_0034A2F8:
    set32(c.r[2], 0u - 1u);
    st8((c.r[29].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A318u); set32(c.r[5], c.r[29].w[0] + 56u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034A318u) [[unlikely]] return; }
L_0034A318:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0034A330:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0] + 8u), c.r[4].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0034A350; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 20250u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0034A360; } }
L_0034A350:
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] + 20250u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0034A360:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034A370:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[4].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 16u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0034A3B8; } }
    set32(c.r[2], 0u + 11u);
    st8((c.r[29].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[29].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[2], ld32((c.r[1].w[0] + 20244u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A3A8u); set32(c.r[5], c.r[29].w[0] + 24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034A3A8u) [[unlikely]] return; }
L_0034A3A8:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 20250u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0034A3C8; } }
L_0034A3B8:
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] + 20250u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0034A3C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034A3E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[17].w[0] + 20240u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0034A738; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 9u));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0034A738; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 5440u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00348000u < 16384u) { entry = entries_0092[(t - 0x00348000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0034A430:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    st8((c.r[17].w[0] + 36u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
L_0034A458:
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034A470; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 36u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0034A470:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034A458u | kUnwind; return; } goto L_0034A458; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    st16((c.r[1].w[0] + 29390u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[4].w[0] - 31412u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 10560u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A4A4u); st16((c.r[1].w[0] - 32130u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0034A4A4u) [[unlikely]] return; }
L_0034A4A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A4B0u); set32(c.r[4], c.r[4].w[0] - 23760u);  if (depth < kMaxDepth) unit_0091(c, 342u, depth + 1u); else { c.pc = 0x00347140u; return; } if (c.pc != 0x0034A4B0u) [[unlikely]] return; }
L_0034A4B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034A738; } }
L_0034A4B8:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 10u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0034A518; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 10u);
    c.r[6].d[0] = ld8((c.r[17].w[0] + 36u));
    c.r[4].d[0] = ld16((c.r[1].w[0] - 32130u));
    st8((c.r[29].w[0] + 56u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::mult(c, 0, c.r[4].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    st8((c.r[29].w[0] + 57u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[1].w[0] + 29390u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld64((c.r[29].w[0] + 56u));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A50Cu); set32(c.r[5], c.r[29].w[0] + 56u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034A50Cu) [[unlikely]] return; }
L_0034A50C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034A738; } }
    c.budget -= 1;
L_0034A518:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 6u);  if (t) { goto L_0034A738; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0034A738; } }
    c.budget -= 1;
L_0034A530:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld16((c.r[1].w[0] - 32130u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_0034A738; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0034A738; } }
    c.budget -= 1;
L_0034A558:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 10u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_0034A578; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A570u); st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0091(c, 94u, depth + 1u); else { c.pc = 0x00344F50u; return; } if (c.pc != 0x0034A570u) [[unlikely]] return; }
L_0034A570:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034A738; } }
L_0034A578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A580u); set32(c.r[16], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_0091(c, 107u, depth + 1u); else { c.pc = 0x00345210u; return; } if (c.pc != 0x0034A580u) [[unlikely]] return; }
L_0034A580:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 36u));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0034A738; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00350000u);  if (t) { goto L_0034A5B0; } }
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A5ACu); set32(c.r[5], c.r[5].w[0] - 23696u);  if (depth < kMaxDepth) unit_0091(c, 357u, depth + 1u); else { c.pc = 0x00347370u; return; } if (c.pc != 0x0034A5ACu) [[unlikely]] return; }
L_0034A5AC:
    c.budget -= 1;
L_0034A5B0:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00350000u);  if (t) { goto L_0034A5D0; } }
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A5CCu); set32(c.r[5], c.r[5].w[0] - 23696u);  if (depth < kMaxDepth) unit_0091(c, 366u, depth + 1u); else { c.pc = 0x003475B0u; return; } if (c.pc != 0x0034A5CCu) [[unlikely]] return; }
L_0034A5CC:
    c.budget -= 1;
L_0034A5D0:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00350000u);  if (t) { goto L_0034A5F0; } }
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A5ECu); set32(c.r[5], c.r[5].w[0] - 23696u);  if (depth < kMaxDepth) unit_0091(c, 349u, depth + 1u); else { c.pc = 0x00347210u; return; } if (c.pc != 0x0034A5ECu) [[unlikely]] return; }
L_0034A5EC:
    c.budget -= 1;
L_0034A5F0:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00350000u);  if (t) { goto L_0034A610; } }
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A60Cu); set32(c.r[5], c.r[5].w[0] - 23696u);  if (depth < kMaxDepth) unit_0091(c, 373u, depth + 1u); else { c.pc = 0x00347710u; return; } if (c.pc != 0x0034A60Cu) [[unlikely]] return; }
L_0034A60C:
    c.budget -= 1;
L_0034A610:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[4], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[1].w[0] - 32130u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 31ll ? 1ull : 0ull;  if (t) { goto L_0034A640; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0034A738; } }
    c.budget -= 1;
L_0034A640:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 9u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0034A738; } }
L_0034A650:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[7].d[0] = ld16((c.r[1].w[0] - 32130u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] + 16512u);
    c.budget -= 8;
L_0034A670:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[1].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 352u);  if (t) { goto L_0034A6B0; } }
    set32(c.r[4], ld32((c.r[8].w[0] + 17284u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[4].d[0] = c.r[4].d[0] & 15ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0034A6A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0034A6B0; } }
    c.budget -= 1;
L_0034A6A0:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[9].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034A670u | kUnwind; return; } goto L_0034A670; } }
L_0034A6B0:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 10u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0034A6D8; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A6CCu); st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0091(c, 94u, depth + 1u); else { c.pc = 0x00344F50u; return; } if (c.pc != 0x0034A6CCu) [[unlikely]] return; }
L_0034A6CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034A738; } }
    c.budget -= 1;
L_0034A6D8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0034A738; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 9u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0034A738; } }
L_0034A6F0:
    st8((c.r[29].w[0] + 56u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A70Cu); set32(c.r[5], c.r[29].w[0] + 56u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034A70Cu) [[unlikely]] return; }
L_0034A70C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034A738; } }
    c.budget -= 1;
L_0034A718:
    set32(c.r[2], 0u - 1u);
    st8((c.r[29].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A738u); set32(c.r[5], c.r[29].w[0] + 56u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034A738u) [[unlikely]] return; }
L_0034A738:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0034A750:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0] + 8u), c.r[4].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0034A770; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 20290u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0034A780; } }
L_0034A770:
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] + 20290u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0034A780:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034A790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[4].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 16u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0034A7D8; } }
    set32(c.r[2], 0u + 11u);
    st8((c.r[29].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[29].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[2], ld32((c.r[1].w[0] + 20284u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A7C8u); set32(c.r[5], c.r[29].w[0] + 24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034A7C8u) [[unlikely]] return; }
L_0034A7C8:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 20290u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0034A7E8; } }
L_0034A7D8:
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] + 20290u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0034A7E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034A800:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[17].w[0] + 20280u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0034ABB8; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 9u));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0034ABB8; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 5472u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00348000u < 16384u) { entry = entries_0092[(t - 0x00348000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0034A850:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    st8((c.r[17].w[0] + 36u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
L_0034A878:
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034A890; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 36u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0034A890:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034A878u | kUnwind; return; } goto L_0034A878; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    st16((c.r[1].w[0] + 29390u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[4].w[0] - 20852u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 10560u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A8C4u); st16((c.r[1].w[0] - 32128u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0034A8C4u) [[unlikely]] return; }
L_0034A8C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A8D0u); set32(c.r[4], c.r[4].w[0] - 22704u);  if (depth < kMaxDepth) unit_0091(c, 396u, depth + 1u); else { c.pc = 0x00347A80u; return; } if (c.pc != 0x0034A8D0u) [[unlikely]] return; }
L_0034A8D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034ABB8; } }
L_0034A8D8:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 10u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0034A938; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 10u);
    c.r[6].d[0] = ld8((c.r[17].w[0] + 36u));
    c.r[4].d[0] = ld16((c.r[1].w[0] - 32128u));
    st8((c.r[29].w[0] + 56u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::mult(c, 0, c.r[4].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    st8((c.r[29].w[0] + 57u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[1].w[0] + 29390u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld64((c.r[29].w[0] + 56u));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A92Cu); set32(c.r[5], c.r[29].w[0] + 56u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034A92Cu) [[unlikely]] return; }
L_0034A92C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034ABB8; } }
    c.budget -= 1;
L_0034A938:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 6u);  if (t) { goto L_0034ABB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0034ABB8; } }
    c.budget -= 1;
L_0034A950:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld16((c.r[1].w[0] - 32128u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_0034ABB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0034ABB8; } }
    c.budget -= 1;
L_0034A978:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 10u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_0034A998; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A990u); st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0091(c, 94u, depth + 1u); else { c.pc = 0x00344F50u; return; } if (c.pc != 0x0034A990u) [[unlikely]] return; }
L_0034A990:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034ABB8; } }
L_0034A998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A9A0u); set32(c.r[16], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_0091(c, 107u, depth + 1u); else { c.pc = 0x00345210u; return; } if (c.pc != 0x0034A9A0u) [[unlikely]] return; }
L_0034A9A0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 36u));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0034ABB8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00350000u);  if (t) { goto L_0034A9D0; } }
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A9CCu); set32(c.r[5], c.r[5].w[0] - 22640u);  if (depth < kMaxDepth) unit_0091(c, 403u, depth + 1u); else { c.pc = 0x00347B50u; return; } if (c.pc != 0x0034A9CCu) [[unlikely]] return; }
L_0034A9CC:
    c.budget -= 1;
L_0034A9D0:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00350000u);  if (t) { goto L_0034A9F0; } }
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A9ECu); set32(c.r[5], c.r[5].w[0] - 22640u);  if (depth < kMaxDepth) unit_0091(c, 410u, depth + 1u); else { c.pc = 0x00347CD0u; return; } if (c.pc != 0x0034A9ECu) [[unlikely]] return; }
L_0034A9EC:
    c.budget -= 1;
L_0034A9F0:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00350000u);  if (t) { goto L_0034AA10; } }
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AA0Cu); set32(c.r[5], c.r[5].w[0] - 22640u);  if (depth < kMaxDepth) unit_0091(c, 417u, depth + 1u); else { c.pc = 0x00347E30u; return; } if (c.pc != 0x0034AA0Cu) [[unlikely]] return; }
L_0034AA0C:
    c.budget -= 1;
L_0034AA10:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00350000u);  if (t) { goto L_0034AA30; } }
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AA2Cu); set32(c.r[5], c.r[5].w[0] - 22640u);  if (depth < kMaxDepth) unit_0092(c, 8u, depth + 1u); else { c.pc = 0x00348120u; return; } if (c.pc != 0x0034AA2Cu) [[unlikely]] return; }
L_0034AA2C:
    c.budget -= 1;
L_0034AA30:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00350000u);  if (t) { goto L_0034AA50; } }
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AA4Cu); set32(c.r[5], c.r[5].w[0] - 22640u);  if (depth < kMaxDepth) unit_0091(c, 427u, depth + 1u); else { c.pc = 0x00347FE0u; return; } if (c.pc != 0x0034AA4Cu) [[unlikely]] return; }
L_0034AA4C:
    c.budget -= 1;
L_0034AA50:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00350000u);  if (t) { goto L_0034AA70; } }
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AA6Cu); set32(c.r[5], c.r[5].w[0] - 22640u);  if (depth < kMaxDepth) unit_0092(c, 94u, depth + 1u); else { c.pc = 0x00348B60u; return; } if (c.pc != 0x0034AA6Cu) [[unlikely]] return; }
L_0034AA6C:
    c.budget -= 1;
L_0034AA70:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00350000u);  if (t) { goto L_0034AA90; } }
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AA8Cu); set32(c.r[5], c.r[5].w[0] - 22640u);  if (depth < kMaxDepth) unit_0093(c, 143u, depth + 1u); else { c.pc = 0x0034CD90u; return; } if (c.pc != 0x0034AA8Cu) [[unlikely]] return; }
L_0034AA8C:
    c.budget -= 1;
L_0034AA90:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[4], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[1].w[0] - 32128u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 31ll ? 1ull : 0ull;  if (t) { goto L_0034AAC0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0034ABB8; } }
    c.budget -= 1;
L_0034AAC0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 9u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0034ABB8; } }
L_0034AAD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[7].d[0] = ld16((c.r[1].w[0] - 32128u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] + 16512u);
    c.budget -= 8;
L_0034AAF0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[1].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 352u);  if (t) { goto L_0034AB30; } }
    set32(c.r[4], ld32((c.r[8].w[0] + 27844u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[4].d[0] = c.r[4].d[0] & 127ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0034AB20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0034AB30; } }
    c.budget -= 1;
L_0034AB20:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[9].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034AAF0u | kUnwind; return; } goto L_0034AAF0; } }
L_0034AB30:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 10u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0034AB58; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AB4Cu); st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0091(c, 94u, depth + 1u); else { c.pc = 0x00344F50u; return; } if (c.pc != 0x0034AB4Cu) [[unlikely]] return; }
L_0034AB4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034ABB8; } }
    c.budget -= 1;
L_0034AB58:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0034ABB8; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 9u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0034ABB8; } }
L_0034AB70:
    st8((c.r[29].w[0] + 56u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AB8Cu); set32(c.r[5], c.r[29].w[0] + 56u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034AB8Cu) [[unlikely]] return; }
L_0034AB8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034ABB8; } }
    c.budget -= 1;
L_0034AB98:
    set32(c.r[2], 0u - 1u);
    st8((c.r[29].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ABB8u); set32(c.r[5], c.r[29].w[0] + 56u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034ABB8u) [[unlikely]] return; }
L_0034ABB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0034ABD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld16((c.r[1].w[0] + 29390u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0034ABF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0] + 8u), c.r[4].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0034AC10; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 20330u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0034AC20; } }
L_0034AC10:
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] + 20330u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0034AC20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034AC30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[29].w[0] + 24u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 11u);
    st8((c.r[29].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[2], ld32((c.r[1].w[0] + 20324u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AC5Cu); set32(c.r[5], c.r[29].w[0] + 24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034AC5Cu) [[unlikely]] return; }
L_0034AC5C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034AC70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[17].w[0] + 20320u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0034B428; } }
    c.r[6].d[0] = ld8((c.r[17].w[0] + 9u));
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0034B428; } }
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 5504u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00348000u < 16384u) { entry = entries_0092[(t - 0x00348000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0034ACC0:
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    st16((c.r[1].w[0] + 29390u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[4], c.r[4].w[0] - 9940u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[2].d[0] | 38051ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034ACF0u); st8((c.r[1].w[0] - 9938u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0034ACF0u) [[unlikely]] return; }
L_0034ACF0:
    set32(c.r[2], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00350000u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = ld16((c.r[17].w[0] + 28u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AD10u); set32(c.r[5], c.r[5].w[0] - 21520u);  if (depth < kMaxDepth) unit_0092(c, 69u, depth + 1u); else { c.pc = 0x00348860u; return; } if (c.pc != 0x0034AD10u) [[unlikely]] return; }
L_0034AD10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034B428; } }
L_0034AD18:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 10u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[6].w[0] + 1u);  if (t) { goto L_0034AD50; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[1].w[0] - 9938u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0034B428; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0034B428; } }
    c.budget -= 1;
L_0034AD50:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 16u);  if (t) { goto L_0034B428; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0034B428; } }
    c.budget -= 1;
L_0034AD68:
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 16u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    c.budget -= 4;
L_0034AD78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AD80u); set32(c.r[16], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_0091(c, 107u, depth + 1u); else { c.pc = 0x00345210u; return; } if (c.pc != 0x0034AD80u) [[unlikely]] return; }
L_0034AD80:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0034B428; } }
    c.r[4].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.r[5].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AD9Cu); set32(c.r[6], c.r[6].w[0] - 21456u);  if (depth < kMaxDepth) unit_0092(c, 158u, depth + 1u); else { c.pc = 0x003492B0u; return; } if (c.pc != 0x0034AD9Cu) [[unlikely]] return; }
L_0034AD9C:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[4], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 9938u));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0034B428; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 9u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0034B428; } }
L_0034ADD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[6].d[0] = ld8((c.r[1].w[0] - 9938u));
    set32(c.r[5], 0u + 1u);
    c.r[1].d[0] = 0ll < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0034AE28; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[7], c.r[7].w[0] + 16512u);
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
L_0034ADF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[7].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 26449u));
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0034AE18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0034AE28; } }
L_0034AE18:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 5285u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034ADF8u | kUnwind; return; } goto L_0034ADF8; } }
L_0034AE28:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0034B428; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 9u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16512u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 16u), 0u);
    c.budget -= 8;
L_0034AE50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[5].w[0] + c.r[1].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st8((c.r[1].w[0] - 26449u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[5].w[0] + 32767u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[6].sd[0] < 32ll ? 1ull : 0ull;
    set32(c.r[1], c.r[5].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] - 21164u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[5].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] - 15879u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[5].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] - 10594u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[5].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] - 5309u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[5].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] - 24u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[5].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 5261u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[5].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 10546u), static_cast<std::uint8_t>(0u));
    c.budget -= 29;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[4].w[0] + 9513u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034AE50u | kUnwind; return; } goto L_0034AE50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034B428; } }
    c.budget -= 1;
L_0034AED0:
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[13].d[0] = ld8((c.r[1].w[0] - 9938u));
    c.r[11].d[0] = 0ull + 0ull;
    c.r[1].d[0] = 0ll < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_0034AFE0; } }
    c.r[1].d[0] = c.r[13].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[14], c.r[13].w[0] - 8u);  if (t) { goto L_0034AFA0; } }
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[12], c.r[12].w[0] + 16512u);
    c.budget -= 3;
L_0034AF08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    set32(c.r[10], c.r[10].w[0] + 8u);
    c.r[5].d[0] = ld8((c.r[1].w[0] - 26382u));
    set32(c.r[3], c.r[12].w[0] + 32767u);
    c.r[2].d[0] = c.r[10].sd[0] < c.r[14].sd[0] ? 1ull : 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[11], c.r[11].w[0] + c.r[5].w[0]);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    c.r[4].d[0] = ld8((c.r[1].w[0] - 21097u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[11], c.r[11].w[0] + c.r[4].w[0]);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    c.r[9].d[0] = ld8((c.r[1].w[0] - 15812u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[11], c.r[11].w[0] + c.r[9].w[0]);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    c.r[8].d[0] = ld8((c.r[1].w[0] - 10527u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[11], c.r[11].w[0] + c.r[8].w[0]);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    c.r[7].d[0] = ld8((c.r[1].w[0] - 5242u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[11], c.r[11].w[0] + c.r[7].w[0]);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    c.r[6].d[0] = ld8((c.r[1].w[0] + 43u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[11], c.r[11].w[0] + c.r[6].w[0]);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 5328u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[11], c.r[11].w[0] + c.r[5].w[0]);
    set32(c.r[1], c.r[12].w[0] + c.r[1].w[0]);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 10613u));
    set32(c.r[12], c.r[3].w[0] + 9513u);
    c.budget -= 37;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[11], c.r[11].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034AF08u | kUnwind; return; } goto L_0034AF08; } }
    c.budget -= 1;
L_0034AFA0:
    c.r[1].d[0] = c.r[10].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 5285u);  if (t) { goto L_0034AFE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    mmi::mult(c, 0, c.r[10].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 16512u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_0034AFC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 26382u));
    c.r[2].d[0] = c.r[10].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 5285u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[11], c.r[11].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034AFC0u | kUnwind; return; } goto L_0034AFC0; } }
L_0034AFE0:
    set32(c.r[4], c.r[13].w[0] << 1);
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] + c.r[13].w[0]);
    st8((c.r[29].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[11].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + 2u);
    set32(c.r[2], 0u + 10u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    st8((c.r[29].w[0] + 73u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[1].w[0] + 29390u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld64((c.r[29].w[0] + 72u));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B01Cu); set32(c.r[5], c.r[29].w[0] + 72u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034B01Cu) [[unlikely]] return; }
L_0034B01C:
    c.r[4].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B02Cu); set32(c.r[5], c.r[5].w[0] - 21520u);  if (depth < kMaxDepth) unit_0092(c, 72u, depth + 1u); else { c.pc = 0x003488E0u; return; } if (c.pc != 0x0034B02Cu) [[unlikely]] return; }
L_0034B02C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034B428; } }
    c.budget -= 1;
L_0034B038:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 10u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0034B428; } }
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 11u);
    st8((c.r[29].w[0] + 72u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 73u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B070u); set32(c.r[5], c.r[29].w[0] + 72u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034B070u) [[unlikely]] return; }
L_0034B070:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034B428; } }
L_0034B078:
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00350000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B090u); set32(c.r[5], c.r[5].w[0] - 21520u);  if (depth < kMaxDepth) unit_0092(c, 83u, depth + 1u); else { c.pc = 0x00348A20u; return; } if (c.pc != 0x0034B090u) [[unlikely]] return; }
L_0034B090:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034B428; } }
L_0034B098:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 10u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0034B428; } }
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 9938u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 15u);  if (t) { goto L_0034B0C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0034B428; } }
L_0034B0C0:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 9u));
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[29].w[0] + 72u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 73u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B0ECu); set32(c.r[5], c.r[29].w[0] + 72u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034B0ECu) [[unlikely]] return; }
L_0034B0EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034B428; } }
    c.budget -= 1;
L_0034B0F8:
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 16u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    c.budget -= 4;
L_0034B108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B110u); set32(c.r[16], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_0091(c, 107u, depth + 1u); else { c.pc = 0x00345210u; return; } if (c.pc != 0x0034B110u) [[unlikely]] return; }
L_0034B110:
    c.r[3].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0034B428; } }
    c.r[4].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.r[5].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B130u); set32(c.r[6], c.r[6].w[0] - 21456u);  if (depth < kMaxDepth) unit_0092(c, 155u, depth + 1u); else { c.pc = 0x00349230u; return; } if (c.pc != 0x0034B130u) [[unlikely]] return; }
L_0034B130:
    c.r[4].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.r[5].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B144u); set32(c.r[6], c.r[6].w[0] - 21456u);  if (depth < kMaxDepth) unit_0092(c, 161u, depth + 1u); else { c.pc = 0x00349330u; return; } if (c.pc != 0x0034B144u) [[unlikely]] return; }
L_0034B144:
    c.r[4].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.r[5].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B158u); set32(c.r[6], c.r[6].w[0] - 21456u);  if (depth < kMaxDepth) unit_0092(c, 164u, depth + 1u); else { c.pc = 0x003493B0u; return; } if (c.pc != 0x0034B158u) [[unlikely]] return; }
L_0034B158:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[4], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 9938u));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0034B428; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 9u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0034B428; } }
    c.budget -= 1;
L_0034B190:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[7].d[0] = ld8((c.r[1].w[0] - 9938u));
    set32(c.r[6], 0u + 1u);
    c.r[1].d[0] = 0ll < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0034B1E8; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[8], c.r[8].w[0] + 16512u);
    set32(c.r[4], 0u + 11u);
    c.budget -= 4;
L_0034B1B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[8].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 26449u));
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0034B1D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0034B1E8; } }
L_0034B1D8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 5285u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B1B8u | kUnwind; return; } goto L_0034B1B8; } }
L_0034B1E8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0034B428; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 9u));
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[18].w[0] + 16512u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 16u), 0u);
    c.budget -= 8;
L_0034B210:
    c.r[1].d[0] = 0ull | 39156ull;
    set32(c.r[4], c.r[18].w[0] + c.r[1].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B224u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0034B224u) [[unlikely]] return; }
L_0034B224:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 5285u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B210u | kUnwind; return; } goto L_0034B210; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034B428; } }
    c.budget -= 1;
L_0034B240:
    set32(c.r[3], c.r[6].w[0] + 1u);
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), 0u);  if (t) { goto L_0034B428; } }
L_0034B250:
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], 0u + 5285u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[3], c.r[3].w[0] - 9870u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_0034B280; } }
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0034B428; } }
L_0034B280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B288u);  if (depth < kMaxDepth) unit_0091(c, 107u, depth + 1u); else { c.pc = 0x00345210u; return; } if (c.pc != 0x0034B288u) [[unlikely]] return; }
L_0034B288:
    c.r[3].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0034B428; } }
    c.r[4].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 16u));
    c.r[6].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B2ACu); set32(c.r[7], c.r[7].w[0] - 21456u);  if (depth < kMaxDepth) unit_0092(c, 167u, depth + 1u); else { c.pc = 0x00349430u; return; } if (c.pc != 0x0034B2ACu) [[unlikely]] return; }
L_0034B2AC:
    c.r[4].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 16u));
    c.r[6].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B2C4u); set32(c.r[7], c.r[7].w[0] - 21456u);  if (depth < kMaxDepth) unit_0092(c, 170u, depth + 1u); else { c.pc = 0x003494D0u; return; } if (c.pc != 0x0034B2C4u) [[unlikely]] return; }
L_0034B2C4:
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[4], 0u + 5285u);
    set32(c.r[3], c.r[3].w[0] - 9870u);
    set32(c.r[6], c.r[16].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[17].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0034B428; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 9u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0034B428; } }
    c.budget -= 1;
L_0034B310:
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], 0u + 5285u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[3], c.r[3].w[0] - 9870u);
    set32(c.r[7], 0u + 1u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0034B390; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], c.r[3].w[0] + 16512u);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 3u);
    c.budget -= 5;
L_0034B350:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[8].w[0] + c.r[1].w[0]);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 26380u));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0034B370; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0034B370:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[5].w[0] + c.r[1].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 26382u));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B350u | kUnwind; return; } goto L_0034B350; } }
    c.budget -= 1;
L_0034B390:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0034B428; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[3].d[0] = ld8((c.r[1].w[0] - 9938u));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0034B3D0; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 9u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0034B428; } }
    c.budget -= 1;
L_0034B3D0:
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0034B428; } }
    c.budget -= 1;
L_0034B3E0:
    st8((c.r[29].w[0] + 72u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B3FCu); set32(c.r[5], c.r[29].w[0] + 72u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034B3FCu) [[unlikely]] return; }
L_0034B3FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034B428; } }
    c.budget -= 1;
L_0034B408:
    set32(c.r[2], 0u - 1u);
    st8((c.r[29].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B428u); set32(c.r[5], c.r[29].w[0] + 72u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034B428u) [[unlikely]] return; }
L_0034B428:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0034B440:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0] + 8u), c.r[4].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0034B460; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 20370u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0034B470; } }
L_0034B460:
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] + 20370u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0034B470:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034B480:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] + 20360u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0034B618; } }
    c.r[5].d[0] = ld8((c.r[6].w[0] + 9u));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_0034B618; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 5584u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00348000u < 16384u) { entry = entries_0092[(t - 0x00348000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0034B4D0:
    set32(c.r[2], 0u + 2u);
    st8((c.r[6].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] + 24602u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B4E8u); st8((c.r[6].w[0] + 10u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0093(c, 45u, depth + 1u); else { c.pc = 0x0034C410u; return; } if (c.pc != 0x0034B4E8u) [[unlikely]] return; }
L_0034B4E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 24667u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);  if (t) { goto L_0034B618; } }
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[1].w[0] - 9939u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_0034B618; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B510u); set32(c.r[4], c.r[4].w[0] + 24667u);  if (depth < kMaxDepth) unit_0093(c, 51u, depth + 1u); else { c.pc = 0x0034C490u; return; } if (c.pc != 0x0034B510u) [[unlikely]] return; }
L_0034B510:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034B618; } }
L_0034B518:
    set32(c.r[3], 0u + 4u);
    st8((c.r[6].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 9938u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0034B618; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[18], c.r[18].w[0] + 16512u);
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
L_0034B540:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[18].w[0] + c.r[1].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[1].w[0] - 26383u));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0034B568; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 8164u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B564u); c.r[4].d[0] = c.r[16].d[0] & 255ull;  if (depth < kMaxDepth) unit_0093(c, 57u, depth + 1u); else { c.pc = 0x0034C510u; return; } if (c.pc != 0x0034B564u) [[unlikely]] return; }
L_0034B564:
    c.budget -= 1;
L_0034B568:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CA0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 9938u));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 5285u);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B540u | kUnwind; return; } goto L_0034B540; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034B618; } }
    c.budget -= 1;
L_0034B590:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00350000u);
    st8((c.r[6].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B5A4u); set32(c.r[4], c.r[4].w[0] - 19392u);  if (depth < kMaxDepth) unit_0092(c, 34u, depth + 1u); else { c.pc = 0x003484B0u; return; } if (c.pc != 0x0034B5A4u) [[unlikely]] return; }
L_0034B5A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034B618; } }
    c.budget -= 1;
L_0034B5B0:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 10u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0034B5E8; } }
    st8((c.r[29].w[0] + 72u), static_cast<std::uint8_t>(0u));
    st8((c.r[6].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st8((c.r[6].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[4].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B5DCu); set32(c.r[5], c.r[29].w[0] + 72u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034B5DCu) [[unlikely]] return; }
L_0034B5DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034B618; } }
    c.budget -= 1;
L_0034B5E8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0034B618; } }
    set32(c.r[2], 0u - 1u);
    st8((c.r[29].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[6].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st8((c.r[6].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[4].d[0] = ld64((c.r[29].w[0] + 72u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B614u); set32(c.r[5], c.r[29].w[0] + 72u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034B614u) [[unlikely]] return; }
L_0034B614:
    c.budget -= 1;
L_0034B618:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0034B630:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0] + 8u), c.r[4].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_0034B658; } }
    c.r[3].d[0] = ld8((c.r[1].w[0] + 20530u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 20530u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0034B670; } }
L_0034B658:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 20530u));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] + 20530u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_0034B670:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034B680:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0] + 8u), c.r[4].d[0]);
    set32(c.r[3], 0u + 4u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 20530u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0034B6C8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] | 2ull;  if (t) { goto L_0034B6B8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 20530u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0034B6C8; } }
    c.budget -= 1;
L_0034B6B8:
    c.r[3].d[0] = c.r[4].d[0] | 4ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] + 20530u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0034B6C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0034B6D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[16], c.r[16].w[0] + 20520u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0034B7E8; } }
    c.r[6].d[0] = ld8((c.r[16].w[0] + 9u));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0034B7C8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0034B7A0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0034B770; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0034B728; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034B7E8; } }
    c.budget -= 1;
L_0034B728:
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00350000u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CC0000u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st16((c.r[1].w[0] + 29390u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 28u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B754u); set32(c.r[5], c.r[5].w[0] - 18896u);  if (depth < kMaxDepth) unit_0092(c, 108u, depth + 1u); else { c.pc = 0x00348DC0u; return; } if (c.pc != 0x0034B754u) [[unlikely]] return; }
L_0034B754:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B764u); set32(c.r[5], c.r[5].w[0] - 18816u);  if (depth < kMaxDepth) unit_0093(c, 161u, depth + 1u); else { c.pc = 0x0034D040u; return; } if (c.pc != 0x0034B764u) [[unlikely]] return; }
L_0034B764:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034B7E8; } }
    c.budget -= 1;
L_0034B770:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 10u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0]; set32(c.r[3], c.r[6].w[0] + 1u);  if (t) { goto L_0034B788; } }
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0034B7E8; } }
L_0034B788:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0034B7E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0034B7E8; } }
    c.budget -= 1;
L_0034B7A0:
    st8((c.r[29].w[0] + 40u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B7BCu); set32(c.r[5], c.r[29].w[0] + 40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034B7BCu) [[unlikely]] return; }
L_0034B7BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034B7E8; } }
    c.budget -= 1;
L_0034B7C8:
    set32(c.r[2], 0u - 1u);
    st8((c.r[29].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B7E8u); set32(c.r[5], c.r[29].w[0] + 40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034B7E8u) [[unlikely]] return; }
L_0034B7E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034B800:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0034B868; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0034B850; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0034B838; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034B880; } }
    c.budget -= 1;
L_0034B838:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B848u); set32(c.r[5], 0u + 51u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034B848u) [[unlikely]] return; }
L_0034B848:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0034B880; } }
L_0034B850:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B860u); set32(c.r[5], 0u + 71u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034B860u) [[unlikely]] return; }
L_0034B860:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0034B880; } }
L_0034B868:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B878u); set32(c.r[5], 0u + 120u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034B878u) [[unlikely]] return; }
L_0034B878:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_0034B880:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B88Cu); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034B88Cu) [[unlikely]] return; }
L_0034B88C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B898u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034B898u) [[unlikely]] return; }
L_0034B898:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034B8B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], 0u + 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0034B920; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0034B908; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0034B8F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034B938; } }
    c.budget -= 1;
L_0034B8F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B900u); set32(c.r[5], 0u + 53u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034B900u) [[unlikely]] return; }
L_0034B900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0034B938; } }
L_0034B908:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B918u); set32(c.r[5], 0u + 73u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034B918u) [[unlikely]] return; }
L_0034B918:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0034B938; } }
L_0034B920:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B930u); set32(c.r[5], 0u + 122u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034B930u) [[unlikely]] return; }
L_0034B930:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_0034B938:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B948u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x0034B948u) [[unlikely]] return; }
L_0034B948:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B954u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034B954u) [[unlikely]] return; }
L_0034B954:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B960u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034B960u) [[unlikely]] return; }
L_0034B960:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034B980:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], 0u + 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0034B9F0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0034B9D8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0034B9C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034BA08; } }
    c.budget -= 1;
L_0034B9C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B9D0u); set32(c.r[5], 0u + 55u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034B9D0u) [[unlikely]] return; }
L_0034B9D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0034BA08; } }
L_0034B9D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034B9E8u); set32(c.r[5], 0u + 75u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034B9E8u) [[unlikely]] return; }
L_0034B9E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0034BA08; } }
L_0034B9F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BA00u); set32(c.r[5], 0u + 125u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034BA00u) [[unlikely]] return; }
L_0034BA00:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_0034BA08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BA18u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x0034BA18u) [[unlikely]] return; }
L_0034BA18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BA24u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034BA24u) [[unlikely]] return; }
L_0034BA24:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BA30u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034BA30u) [[unlikely]] return; }
L_0034BA30:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034BA50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], 0u + 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0034BAC0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0034BAA8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0034BA90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034BAD8; } }
    c.budget -= 1;
L_0034BA90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BAA0u); set32(c.r[5], 0u + 58u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034BAA0u) [[unlikely]] return; }
L_0034BAA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0034BAD8; } }
L_0034BAA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BAB8u); set32(c.r[5], 0u + 78u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034BAB8u) [[unlikely]] return; }
L_0034BAB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0034BAD8; } }
L_0034BAC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BAD0u); set32(c.r[5], 0u + 128u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034BAD0u) [[unlikely]] return; }
L_0034BAD0:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_0034BAD8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BAE8u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x0034BAE8u) [[unlikely]] return; }
L_0034BAE8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BAF4u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034BAF4u) [[unlikely]] return; }
L_0034BAF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BB00u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034BB00u) [[unlikely]] return; }
L_0034BB00:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034BB20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], 0u + 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0034BB90; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0034BB78; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0034BB60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034BBA8; } }
    c.budget -= 1;
L_0034BB60:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BB70u); set32(c.r[5], 0u + 61u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034BB70u) [[unlikely]] return; }
L_0034BB70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0034BBA8; } }
L_0034BB78:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BB88u); set32(c.r[5], 0u + 81u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034BB88u) [[unlikely]] return; }
L_0034BB88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0034BBA8; } }
L_0034BB90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BBA0u); set32(c.r[5], 0u + 141u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034BBA0u) [[unlikely]] return; }
L_0034BBA0:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_0034BBA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BBB8u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x0034BBB8u) [[unlikely]] return; }
L_0034BBB8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BBC4u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034BBC4u) [[unlikely]] return; }
L_0034BBC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BBD0u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034BBD0u) [[unlikely]] return; }
L_0034BBD0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034BBF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], 0u + 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0034BC60; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0034BC48; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0034BC30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034BC78; } }
    c.budget -= 1;
L_0034BC30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BC40u); set32(c.r[5], 0u + 49u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034BC40u) [[unlikely]] return; }
L_0034BC40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0034BC78; } }
L_0034BC48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BC58u); set32(c.r[5], 0u + 67u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034BC58u) [[unlikely]] return; }
L_0034BC58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0034BC78; } }
L_0034BC60:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BC70u); set32(c.r[5], 0u + 112u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034BC70u) [[unlikely]] return; }
L_0034BC70:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_0034BC78:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BC88u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x0034BC88u) [[unlikely]] return; }
L_0034BC88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BC94u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034BC94u) [[unlikely]] return; }
L_0034BC94:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BCA0u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034BCA0u) [[unlikely]] return; }
L_0034BCA0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034BCC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    set32(c.r[5], 0u + 112u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BCECu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034BCECu) [[unlikely]] return; }
L_0034BCEC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BD00u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x0034BD00u) [[unlikely]] return; }
L_0034BD00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BD08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 129u, depth + 1u); else { c.pc = 0x0011DE20u; return; } if (c.pc != 0x0034BD08u) [[unlikely]] return; }
L_0034BD08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BD1Cu); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 203u, depth + 1u); else { c.pc = 0x00345ED0u; return; } if (c.pc != 0x0034BD1Cu) [[unlikely]] return; }
L_0034BD1C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BD28u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034BD28u) [[unlikely]] return; }
L_0034BD28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BD34u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034BD34u) [[unlikely]] return; }
L_0034BD34:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0034BD50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0034BDB8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0034BDA0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0034BD88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034BDD0; } }
    c.budget -= 1;
L_0034BD88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BD98u); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034BD98u) [[unlikely]] return; }
L_0034BD98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0034BDD0; } }
L_0034BDA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BDB0u); set32(c.r[5], 0u + 69u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034BDB0u) [[unlikely]] return; }
L_0034BDB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0034BDD0; } }
L_0034BDB8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BDC8u); set32(c.r[5], 0u + 114u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034BDC8u) [[unlikely]] return; }
L_0034BDC8:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_0034BDD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BDDCu); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034BDDCu) [[unlikely]] return; }
L_0034BDDC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BDE8u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034BDE8u) [[unlikely]] return; }
L_0034BDE8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0034BE00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 90u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BE24u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034BE24u) [[unlikely]] return; }
L_0034BE24:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BE38u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x0034BE38u) [[unlikely]] return; }
L_0034BE38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BE44u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034BE44u) [[unlikely]] return; }
L_0034BE44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BE50u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034BE50u) [[unlikely]] return; }
L_0034BE50:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0034BE70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    set32(c.r[5], 0u + 92u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BE9Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034BE9Cu) [[unlikely]] return; }
L_0034BE9C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BEB0u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x0034BEB0u) [[unlikely]] return; }
L_0034BEB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BEC0u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 198u, depth + 1u); else { c.pc = 0x00345DC0u; return; } if (c.pc != 0x0034BEC0u) [[unlikely]] return; }
L_0034BEC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BECCu); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034BECCu) [[unlikely]] return; }
L_0034BECC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BED8u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034BED8u) [[unlikely]] return; }
L_0034BED8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0034BF00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    set32(c.r[5], 0u + 98u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BF2Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034BF2Cu) [[unlikely]] return; }
L_0034BF2C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BF40u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x0034BF40u) [[unlikely]] return; }
L_0034BF40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BF50u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 198u, depth + 1u); else { c.pc = 0x00345DC0u; return; } if (c.pc != 0x0034BF50u) [[unlikely]] return; }
L_0034BF50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BF5Cu); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034BF5Cu) [[unlikely]] return; }
L_0034BF5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BF68u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034BF68u) [[unlikely]] return; }
L_0034BF68:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0034BF90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 6848u);
    set32(c.r[5], 0u + 96u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BFBCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 190u, depth + 1u); else { c.pc = 0x00345BF0u; return; } if (c.pc != 0x0034BFBCu) [[unlikely]] return; }
L_0034BFBC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BFD0u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 199u, depth + 1u); else { c.pc = 0x00345DF0u; return; } if (c.pc != 0x0034BFD0u) [[unlikely]] return; }
L_0034BFD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BFE0u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 198u, depth + 1u); else { c.pc = 0x00345DC0u; return; } if (c.pc != 0x0034BFE0u) [[unlikely]] return; }
L_0034BFE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BFECu); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x0034BFECu) [[unlikely]] return; }
L_0034BFEC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034BFF8u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 213u, depth + 1u); else { c.pc = 0x00346010u; return; } if (c.pc != 0x0034BFF8u) [[unlikely]] return; }
L_0034BFF8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
    [[clang::musttail]] return unit_0093(c, 1u, depth);
}

}
