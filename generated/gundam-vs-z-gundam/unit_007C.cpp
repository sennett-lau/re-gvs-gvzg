#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_007C[4096] = {
    1, 2, 3, 0, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 0, 0, 14, 0, 0, 0, 15, 16, 0, 0, 0, 0, 17, 0, 18, 0, 19, 0,
    0, 0, 20, 0, 21, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 26, 0, 0, 27, 0, 0, 0, 0, 28,
    29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 38, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0,
    41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0,
    0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0,
    52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0,
    66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0,
    71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0,
    0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0,
    0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0,
    0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    102, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0,
    110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0,
    0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 123, 0,
    0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0,
    0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 135,
    0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0,
    0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0,
    173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0,
    0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0,
    0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0,
    195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0,
    204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0,
    0, 0, 210, 0, 0, 0, 211, 0, 212, 0, 0, 0, 213, 0, 214, 0, 0, 0, 215, 0, 0, 216, 217, 218, 0, 0, 0, 0, 0, 0, 0, 0,
    219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 225, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 228, 0, 0,
    0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0,
    0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244,
    0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0,
    0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 261, 0, 0, 0, 262, 0, 263, 0,
    0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0,
    0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 283, 0, 284, 0, 0, 0, 0, 0,
    285, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0,
    294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0,
    299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0,
    0, 0, 302, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 310, 0, 311, 0, 312,
    0, 0, 0, 313, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 317, 0, 0, 318, 0, 0, 0, 0,
    0, 0, 0, 319, 0, 320, 0, 321, 0, 0, 0, 0, 322, 0, 323, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325,
    0, 326, 0, 327, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 331, 0, 332, 0, 333, 0, 334, 0, 335, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 337, 0, 338, 0, 339, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341,
    0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0,
    0, 347, 0, 348, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 353, 0, 0,
    354, 0, 0, 0, 0, 0, 0, 0, 355, 0, 356, 0, 357, 0, 358, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0,
    362, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0,
    0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0,
    0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 379, 0, 380, 0, 0, 0, 381, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 397, 0,
    0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0,
};

void unit_007C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002F0000;
    case 2u: goto L_002F0004;
    case 3u: goto L_002F0008;
    case 4u: goto L_002F0010;
    case 5u: goto L_002F0014;
    case 6u: goto L_002F0018;
    case 7u: goto L_002F001C;
    case 8u: goto L_002F0020;
    case 9u: goto L_002F0024;
    case 10u: goto L_002F0028;
    case 11u: goto L_002F002C;
    case 12u: goto L_002F0030;
    case 13u: goto L_002F0034;
    case 14u: goto L_002F0040;
    case 15u: goto L_002F0050;
    case 16u: goto L_002F0054;
    case 17u: goto L_002F0068;
    case 18u: goto L_002F0070;
    case 19u: goto L_002F0078;
    case 20u: goto L_002F0088;
    case 21u: goto L_002F0090;
    case 22u: goto L_002F00A4;
    case 23u: goto L_002F00AC;
    case 24u: goto L_002F00C0;
    case 25u: goto L_002F00D4;
    case 26u: goto L_002F00DC;
    case 27u: goto L_002F00E8;
    case 28u: goto L_002F00FC;
    case 29u: goto L_002F0100;
    case 30u: goto L_002F0110;
    case 31u: goto L_002F0120;
    case 32u: goto L_002F0130;
    case 33u: goto L_002F0150;
    case 34u: goto L_002F0160;
    case 35u: goto L_002F0170;
    case 36u: goto L_002F01A8;
    case 37u: goto L_002F01B0;
    case 38u: goto L_002F01CC;
    case 39u: goto L_002F01D0;
    case 40u: goto L_002F01E0;
    case 41u: goto L_002F0200;
    case 42u: goto L_002F0220;
    case 43u: goto L_002F0240;
    case 44u: goto L_002F0250;
    case 45u: goto L_002F025C;
    case 46u: goto L_002F0268;
    case 47u: goto L_002F0288;
    case 48u: goto L_002F0298;
    case 49u: goto L_002F02C0;
    case 50u: goto L_002F02DC;
    case 51u: goto L_002F02F0;
    case 52u: goto L_002F0300;
    case 53u: goto L_002F0318;
    case 54u: goto L_002F0330;
    case 55u: goto L_002F0344;
    case 56u: goto L_002F0380;
    case 57u: goto L_002F0390;
    case 58u: goto L_002F03A0;
    case 59u: goto L_002F03B0;
    case 60u: goto L_002F0400;
    case 61u: goto L_002F041C;
    case 62u: goto L_002F0430;
    case 63u: goto L_002F0454;
    case 64u: goto L_002F0464;
    case 65u: goto L_002F0474;
    case 66u: goto L_002F0480;
    case 67u: goto L_002F04B8;
    case 68u: goto L_002F04C4;
    case 69u: goto L_002F04E4;
    case 70u: goto L_002F04F8;
    case 71u: goto L_002F0500;
    case 72u: goto L_002F0530;
    case 73u: goto L_002F0560;
    case 74u: goto L_002F056C;
    case 75u: goto L_002F0584;
    case 76u: goto L_002F05A0;
    case 77u: goto L_002F05D4;
    case 78u: goto L_002F05E8;
    case 79u: goto L_002F05F4;
    case 80u: goto L_002F0610;
    case 81u: goto L_002F062C;
    case 82u: goto L_002F0660;
    case 83u: goto L_002F06A0;
    case 84u: goto L_002F0740;
    case 85u: goto L_002F0750;
    case 86u: goto L_002F0770;
    case 87u: goto L_002F07A4;
    case 88u: goto L_002F0820;
    case 89u: goto L_002F0834;
    case 90u: goto L_002F0870;
    case 91u: goto L_002F0884;
    case 92u: goto L_002F08B0;
    case 93u: goto L_002F0970;
    case 94u: goto L_002F099C;
    case 95u: goto L_002F09AC;
    case 96u: goto L_002F09D0;
    case 97u: goto L_002F09F4;
    case 98u: goto L_002F0A04;
    case 99u: goto L_002F0A30;
    case 100u: goto L_002F0A40;
    case 101u: goto L_002F0A70;
    case 102u: goto L_002F0A80;
    case 103u: goto L_002F0A88;
    case 104u: goto L_002F0AB8;
    case 105u: goto L_002F0AD0;
    case 106u: goto L_002F0B08;
    case 107u: goto L_002F0B18;
    case 108u: goto L_002F0B50;
    case 109u: goto L_002F0B60;
    case 110u: goto L_002F0B80;
    case 111u: goto L_002F0BE4;
    case 112u: goto L_002F0BF8;
    case 113u: goto L_002F0C20;
    case 114u: goto L_002F0C34;
    case 115u: goto L_002F0C64;
    case 116u: goto L_002F0C78;
    case 117u: goto L_002F0C94;
    case 118u: goto L_002F0CA8;
    case 119u: goto L_002F0CC4;
    case 120u: goto L_002F0D0C;
    case 121u: goto L_002F0D28;
    case 122u: goto L_002F0D74;
    case 123u: goto L_002F0D78;
    case 124u: goto L_002F0D88;
    case 125u: goto L_002F0DB0;
    case 126u: goto L_002F0DC4;
    case 127u: goto L_002F0DF0;
    case 128u: goto L_002F0E0C;
    case 129u: goto L_002F0E20;
    case 130u: goto L_002F0E3C;
    case 131u: goto L_002F0E50;
    case 132u: goto L_002F0E64;
    case 133u: goto L_002F0EC4;
    case 134u: goto L_002F0ED8;
    case 135u: goto L_002F0EFC;
    case 136u: goto L_002F0F14;
    case 137u: goto L_002F0F40;
    case 138u: goto L_002F0F90;
    case 139u: goto L_002F0FAC;
    case 140u: goto L_002F0FB8;
    case 141u: goto L_002F0FCC;
    case 142u: goto L_002F0FD8;
    case 143u: goto L_002F0FF0;
    case 144u: goto L_002F1018;
    case 145u: goto L_002F1040;
    case 146u: goto L_002F1060;
    case 147u: goto L_002F1088;
    case 148u: goto L_002F10B0;
    case 149u: goto L_002F10C0;
    case 150u: goto L_002F10E0;
    case 151u: goto L_002F10EC;
    case 152u: goto L_002F1104;
    case 153u: goto L_002F1120;
    case 154u: goto L_002F1140;
    case 155u: goto L_002F1150;
    case 156u: goto L_002F1160;
    case 157u: goto L_002F1170;
    case 158u: goto L_002F11D0;
    case 159u: goto L_002F1204;
    case 160u: goto L_002F124C;
    case 161u: goto L_002F1270;
    case 162u: goto L_002F12C0;
    case 163u: goto L_002F12CC;
    case 164u: goto L_002F1330;
    case 165u: goto L_002F1340;
    case 166u: goto L_002F1350;
    case 167u: goto L_002F14D8;
    case 168u: goto L_002F155C;
    case 169u: goto L_002F1590;
    case 170u: goto L_002F15B4;
    case 171u: goto L_002F15E0;
    case 172u: goto L_002F15E8;
    case 173u: goto L_002F1600;
    case 174u: goto L_002F1638;
    case 175u: goto L_002F1680;
    case 176u: goto L_002F16D4;
    case 177u: goto L_002F16E8;
    case 178u: goto L_002F16F4;
    case 179u: goto L_002F1730;
    case 180u: goto L_002F173C;
    case 181u: goto L_002F1770;
    case 182u: goto L_002F1778;
    case 183u: goto L_002F179C;
    case 184u: goto L_002F17E0;
    case 185u: goto L_002F1804;
    case 186u: goto L_002F181C;
    case 187u: goto L_002F1840;
    case 188u: goto L_002F18A0;
    case 189u: goto L_002F1910;
    case 190u: goto L_002F1990;
    case 191u: goto L_002F19C4;
    case 192u: goto L_002F19D0;
    case 193u: goto L_002F19D8;
    case 194u: goto L_002F19E8;
    case 195u: goto L_002F1A00;
    case 196u: goto L_002F1A24;
    case 197u: goto L_002F1A38;
    case 198u: goto L_002F1A48;
    case 199u: goto L_002F1A58;
    case 200u: goto L_002F1A60;
    case 201u: goto L_002F1ACC;
    case 202u: goto L_002F1AE0;
    case 203u: goto L_002F1AF0;
    case 204u: goto L_002F1B00;
    case 205u: goto L_002F1B10;
    case 206u: goto L_002F1B20;
    case 207u: goto L_002F1B34;
    case 208u: goto L_002F1BE4;
    case 209u: goto L_002F1BF8;
    case 210u: goto L_002F1C08;
    case 211u: goto L_002F1C18;
    case 212u: goto L_002F1C20;
    case 213u: goto L_002F1C30;
    case 214u: goto L_002F1C38;
    case 215u: goto L_002F1C48;
    case 216u: goto L_002F1C54;
    case 217u: goto L_002F1C58;
    case 218u: goto L_002F1C5C;
    case 219u: goto L_002F1C80;
    case 220u: goto L_002F1CA0;
    case 221u: goto L_002F1CB0;
    case 222u: goto L_002F1CCC;
    case 223u: goto L_002F1CDC;
    case 224u: goto L_002F1CEC;
    case 225u: goto L_002F1CF4;
    case 226u: goto L_002F1D58;
    case 227u: goto L_002F1D68;
    case 228u: goto L_002F1D74;
    case 229u: goto L_002F1D90;
    case 230u: goto L_002F1E08;
    case 231u: goto L_002F1E4C;
    case 232u: goto L_002F1E64;
    case 233u: goto L_002F1E74;
    case 234u: goto L_002F1E88;
    case 235u: goto L_002F1EA0;
    case 236u: goto L_002F1F38;
    case 237u: goto L_002F1F7C;
    case 238u: goto L_002F2044;
    case 239u: goto L_002F2058;
    case 240u: goto L_002F20A0;
    case 241u: goto L_002F20C8;
    case 242u: goto L_002F2194;
    case 243u: goto L_002F21A0;
    case 244u: goto L_002F21FC;
    case 245u: goto L_002F221C;
    case 246u: goto L_002F2250;
    case 247u: goto L_002F2270;
    case 248u: goto L_002F228C;
    case 249u: goto L_002F229C;
    case 250u: goto L_002F22C4;
    case 251u: goto L_002F22D4;
    case 252u: goto L_002F2300;
    case 253u: goto L_002F2314;
    case 254u: goto L_002F2350;
    case 255u: goto L_002F2384;
    case 256u: goto L_002F2398;
    case 257u: goto L_002F23B0;
    case 258u: goto L_002F23E0;
    case 259u: goto L_002F2448;
    case 260u: goto L_002F2458;
    case 261u: goto L_002F2460;
    case 262u: goto L_002F2470;
    case 263u: goto L_002F2478;
    case 264u: goto L_002F2488;
    case 265u: goto L_002F24B0;
    case 266u: goto L_002F24E4;
    case 267u: goto L_002F251C;
    case 268u: goto L_002F2530;
    case 269u: goto L_002F25B0;
    case 270u: goto L_002F2600;
    case 271u: goto L_002F2678;
    case 272u: goto L_002F2684;
    case 273u: goto L_002F2698;
    case 274u: goto L_002F26B0;
    case 275u: goto L_002F26D0;
    case 276u: goto L_002F2730;
    case 277u: goto L_002F2750;
    case 278u: goto L_002F27A8;
    case 279u: goto L_002F27F0;
    case 280u: goto L_002F2840;
    case 281u: goto L_002F2878;
    case 282u: goto L_002F29D8;
    case 283u: goto L_002F29E0;
    case 284u: goto L_002F29E8;
    case 285u: goto L_002F2A00;
    case 286u: goto L_002F2A10;
    case 287u: goto L_002F2A20;
    case 288u: goto L_002F2AB8;
    case 289u: goto L_002F2BB4;
    case 290u: goto L_002F2BF0;
    case 291u: goto L_002F2C30;
    case 292u: goto L_002F2C60;
    case 293u: goto L_002F2CE0;
    case 294u: goto L_002F2D00;
    case 295u: goto L_002F2D20;
    case 296u: goto L_002F2D40;
    case 297u: goto L_002F2D50;
    case 298u: goto L_002F2D60;
    case 299u: goto L_002F2D80;
    case 300u: goto L_002F2DA8;
    case 301u: goto L_002F2E6C;
    case 302u: goto L_002F2E88;
    case 303u: goto L_002F2E98;
    case 304u: goto L_002F2EA4;
    case 305u: goto L_002F2F30;
    case 306u: goto L_002F2F78;
    case 307u: goto L_002F2FBC;
    case 308u: goto L_002F2FCC;
    case 309u: goto L_002F2FD8;
    case 310u: goto L_002F2FEC;
    case 311u: goto L_002F2FF4;
    case 312u: goto L_002F2FFC;
    case 313u: goto L_002F300C;
    case 314u: goto L_002F3014;
    case 315u: goto L_002F3044;
    case 316u: goto L_002F3054;
    case 317u: goto L_002F3060;
    case 318u: goto L_002F306C;
    case 319u: goto L_002F308C;
    case 320u: goto L_002F3094;
    case 321u: goto L_002F309C;
    case 322u: goto L_002F30B0;
    case 323u: goto L_002F30B8;
    case 324u: goto L_002F30C0;
    case 325u: goto L_002F30FC;
    case 326u: goto L_002F3104;
    case 327u: goto L_002F310C;
    case 328u: goto L_002F3118;
    case 329u: goto L_002F3128;
    case 330u: goto L_002F313C;
    case 331u: goto L_002F3144;
    case 332u: goto L_002F314C;
    case 333u: goto L_002F3154;
    case 334u: goto L_002F315C;
    case 335u: goto L_002F3164;
    case 336u: goto L_002F31A0;
    case 337u: goto L_002F31A8;
    case 338u: goto L_002F31B0;
    case 339u: goto L_002F31B8;
    case 340u: goto L_002F31C0;
    case 341u: goto L_002F31FC;
    case 342u: goto L_002F3220;
    case 343u: goto L_002F3250;
    case 344u: goto L_002F3310;
    case 345u: goto L_002F3340;
    case 346u: goto L_002F3370;
    case 347u: goto L_002F3384;
    case 348u: goto L_002F338C;
    case 349u: goto L_002F3398;
    case 350u: goto L_002F33A8;
    case 351u: goto L_002F33D8;
    case 352u: goto L_002F33E8;
    case 353u: goto L_002F33F4;
    case 354u: goto L_002F3400;
    case 355u: goto L_002F3420;
    case 356u: goto L_002F3428;
    case 357u: goto L_002F3430;
    case 358u: goto L_002F3438;
    case 359u: goto L_002F3440;
    case 360u: goto L_002F3468;
    case 361u: goto L_002F34E4;
    case 362u: goto L_002F3500;
    case 363u: goto L_002F3524;
    case 364u: goto L_002F353C;
    case 365u: goto L_002F3558;
    case 366u: goto L_002F3570;
    case 367u: goto L_002F3590;
    case 368u: goto L_002F35B0;
    case 369u: goto L_002F35F4;
    case 370u: goto L_002F3770;
    case 371u: goto L_002F3790;
    case 372u: goto L_002F37A8;
    case 373u: goto L_002F39C0;
    case 374u: goto L_002F39D0;
    case 375u: goto L_002F39E0;
    case 376u: goto L_002F3A1C;
    case 377u: goto L_002F3A58;
    case 378u: goto L_002F3AA0;
    case 379u: goto L_002F3AAC;
    case 380u: goto L_002F3AB4;
    case 381u: goto L_002F3AC4;
    case 382u: goto L_002F3ACC;
    case 383u: goto L_002F3AE4;
    case 384u: goto L_002F3B30;
    case 385u: goto L_002F3B50;
    case 386u: goto L_002F3B94;
    case 387u: goto L_002F3BC0;
    case 388u: goto L_002F3C48;
    case 389u: goto L_002F3C60;
    case 390u: goto L_002F3C78;
    case 391u: goto L_002F3D00;
    case 392u: goto L_002F3E90;
    case 393u: goto L_002F3EC8;
    case 394u: goto L_002F3F08;
    case 395u: goto L_002F3F44;
    case 396u: goto L_002F3F70;
    case 397u: goto L_002F3F78;
    case 398u: goto L_002F3F8C;
    case 399u: goto L_002F3FE0;
    default: bad_entry(c, 0x002F0000u); return;
    }
L_002F0000:
    set32(c.r[4], ld32((c.r[28].w[0] - 23132u)));
    c.budget -= 1;
L_002F0004:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01070000u);
    c.budget -= 1;
L_002F0008:
    c.r[5].d[0] = c.r[2].d[0] | 63004ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x015A0000u);
    c.budget -= 2;
L_002F0010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0018u); c.r[6].d[0] = c.r[2].d[0] | 61440ull;  if (depth < kMaxDepth) unit_0079(c, 141u, depth + 1u); else { c.pc = 0x002E6F00u; return; } if (c.pc != 0x002F0018u) [[unlikely]] return; }
    goto L_002F0018;
L_002F0014:
    c.r[6].d[0] = c.r[2].d[0] | 61440ull;
    c.budget -= 1;
L_002F0018:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002F001C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002F0020:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 1;
L_002F0024:
    c.budget -= 1;
L_002F0028:
    c.budget -= 1;
L_002F002C:
    c.budget -= 1;
L_002F0030:
    set32(c.r[3], ld32((c.r[28].w[0] - 23132u)));
    c.budget -= 1;
L_002F0034:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 1532u), c.r[4].w[0]);  c.pc = t; return; }
L_002F0040:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0050u);  if (depth < kMaxDepth) unit_007B(c, 309u, depth + 1u); else { c.pc = 0x002EFFE0u; return; } if (c.pc != 0x002F0050u) [[unlikely]] return; }
L_002F0050:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_002F0054:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00EC0000u);
    set32(c.r[6], 0u + 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0068u); c.r[7].d[0] = c.r[2].d[0] | 14336ull;  if (depth < kMaxDepth) unit_000B(c, 27u, depth + 1u); else { c.pc = 0x0012C8A0u; return; } if (c.pc != 0x002F0068u) [[unlikely]] return; }
L_002F0068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0070u);  if (depth < kMaxDepth) unit_0048(c, 276u, depth + 1u); else { c.pc = 0x00223E60u; return; } if (c.pc != 0x002F0070u) [[unlikely]] return; }
L_002F0070:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01630000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.budget -= 2;
L_002F0078:
    c.r[4].d[0] = c.r[2].d[0] | 61440ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x018F0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0088u); c.r[6].d[0] = c.r[2].d[0] | 61440ull;  if (depth < kMaxDepth) unit_008B(c, 28u, depth + 1u); else { c.pc = 0x0032C230u; return; } if (c.pc != 0x002F0088u) [[unlikely]] return; }
L_002F0088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0090u);  if (depth < kMaxDepth) unit_007C(c, 31u, depth + 1u); else { c.pc = 0x002F0120u; return; } if (c.pc != 0x002F0090u) [[unlikely]] return; }
L_002F0090:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F00A4u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002F00A4u) [[unlikely]] return; }
L_002F00A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F00ACu);  if (depth < kMaxDepth) unit_007C(c, 33u, depth + 1u); else { c.pc = 0x002F0150u; return; } if (c.pc != 0x002F00ACu) [[unlikely]] return; }
L_002F00AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F00C0u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002F00C0u) [[unlikely]] return; }
L_002F00C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F00D4u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002F00D4u) [[unlikely]] return; }
L_002F00D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F00DCu);  if (depth < kMaxDepth) unit_007C(c, 42u, depth + 1u); else { c.pc = 0x002F0220u; return; } if (c.pc != 0x002F00DCu) [[unlikely]] return; }
L_002F00DC:
    set32(c.r[5], ld32((c.r[28].w[0] - 23132u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F00E8u); set32(c.r[4], c.r[5].w[0] + 632u);  if (depth < kMaxDepth) unit_007C(c, 72u, depth + 1u); else { c.pc = 0x002F0530u; return; } if (c.pc != 0x002F00E8u) [[unlikely]] return; }
L_002F00E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F00FCu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002F00FCu) [[unlikely]] return; }
L_002F00FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002F0100:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002F0110:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 1532u)));  c.pc = t; return; }
L_002F0120:
    set32(c.r[6], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[5], 0u + 3128u);
    c.budget -= 4;
    { set32(c.r[4], c.r[6].w[0] + 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E7010u | kUnwind; return; } [[clang::musttail]] return unit_0079(c, 151u, depth); }
L_002F0130:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { set32(c.r[4], c.r[2].w[0] + 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E7090u | kUnwind; return; } [[clang::musttail]] return unit_0079(c, 155u, depth); }
L_002F0150:
    set32(c.r[6], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[5], 0u + 3129u);
    c.budget -= 4;
    { set32(c.r[4], c.r[6].w[0] + 1284u);  goto L_002F0F90; }
L_002F0160:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { set32(c.r[4], c.r[2].w[0] + 1284u);  goto L_002F0FF0; }
L_002F0170:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[17], c.r[3].w[0] + 1284u);
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F0200; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002F01C8; } }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002F01A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F01B0u); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_000B(c, 62u, depth + 1u); else { c.pc = 0x0012D1C0u; return; } if (c.pc != 0x002F01B0u) [[unlikely]] return; }
L_002F01B0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F01A8u | kUnwind; return; } goto L_002F01A8; } }
    c.budget -= 1;
L_002F01C8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F01CC:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F01D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F01E0u); set32(c.r[4], ld32((c.r[2].w[0] + 1368u)));  if (depth < kMaxDepth) unit_000B(c, 62u, depth + 1u); else { c.pc = 0x0012D1C0u; return; } if (c.pc != 0x002F01E0u) [[unlikely]] return; }
L_002F01E0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 39ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    st32((c.r[4].w[0] + 1368u), 0u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F01D0u | kUnwind; return; } goto L_002F01D0; } }
    c.budget -= 1;
L_002F0200:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F0220:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 3126u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23132u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0240u); set32(c.r[4], c.r[6].w[0] + 264u);  if (depth < kMaxDepth) unit_0079(c, 151u, depth + 1u); else { c.pc = 0x002E7010u; return; } if (c.pc != 0x002F0240u) [[unlikely]] return; }
L_002F0240:
    set32(c.r[6], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[5], 0u + 3127u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0250u); set32(c.r[4], c.r[6].w[0] + 348u);  if (depth < kMaxDepth) unit_0079(c, 151u, depth + 1u); else { c.pc = 0x002E7010u; return; } if (c.pc != 0x002F0250u) [[unlikely]] return; }
L_002F0250:
    set32(c.r[4], ld32((c.r[28].w[0] - 23132u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F025Cu); set32(c.r[5], 0u + 2048u);  if (depth < kMaxDepth) unit_0079(c, 143u, depth + 1u); else { c.pc = 0x002E6F20u; return; } if (c.pc != 0x002F025Cu) [[unlikely]] return; }
L_002F025C:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_002F0268:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[1].d[0] = c.r[1].d[0] | 18432ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[6], c.r[5].w[0] + c.r[1].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0288u); set32(c.r[4], c.r[2].w[0] + 432u);  if (depth < kMaxDepth) unit_007C(c, 93u, depth + 1u); else { c.pc = 0x002F0970u; return; } if (c.pc != 0x002F0288u) [[unlikely]] return; }
L_002F0288:
    set32(c.r[4], ld32((c.r[28].w[0] - 23132u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0298u); c.r[5].d[0] = c.r[2].d[0] | 18432ull;  if (depth < kMaxDepth) unit_0079(c, 144u, depth + 1u); else { c.pc = 0x002E6F40u; return; } if (c.pc != 0x002F0298u) [[unlikely]] return; }
L_002F0298:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 100u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F0268u | kUnwind; return; } goto L_002F0268; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F02C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F02DCu); set32(c.r[4], c.r[2].w[0] + 264u);  if (depth < kMaxDepth) unit_0079(c, 155u, depth + 1u); else { c.pc = 0x002E7090u; return; } if (c.pc != 0x002F02DCu) [[unlikely]] return; }
L_002F02DC:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F02F0u); set32(c.r[4], c.r[2].w[0] + 348u);  if (depth < kMaxDepth) unit_0079(c, 155u, depth + 1u); else { c.pc = 0x002E7090u; return; } if (c.pc != 0x002F02F0u) [[unlikely]] return; }
L_002F02F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002F0300:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23132u)));
    c.budget -= 6;
L_002F0318:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 528u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[3].w[0] + 432u);  if (t) { goto L_002F0350; } }
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0330u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 96u, depth + 1u); else { c.pc = 0x002F09D0u; return; } if (c.pc != 0x002F0330u) [[unlikely]] return; }
L_002F0330:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 896u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0344u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002F0344u) [[unlikely]] return; }
L_002F0344:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002F0368; } }
    c.budget -= 1;
L_002F0350:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 100u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F0318u | kUnwind; return; } goto L_002F0318; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002F0368:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F0380:
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 668u)));
    c.budget -= 4;
    { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 6u)));  goto L_002F0A30; }
L_002F0390:
    c.budget -= 2;
    {  goto L_002F0A40; }
L_002F03A0:
    c.budget -= 2;
    {  goto L_002F0AD0; }
L_002F03B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = c.r[6].d[0] << 56;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[29].w[0] + 68u), c.r[4].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[12]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 52u), c.f[0]);  if (t) { goto L_002F0400; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_002F0410; } }
    c.budget -= 1;
L_002F0400:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    st32((c.r[29].w[0] + 56u), c.f[1]);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 4;
L_002F0410:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F041Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002F041Cu) [[unlikely]] return; }
L_002F041C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F0430:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0454u); set32(c.r[5], 0u + 2048u);  if (depth < kMaxDepth) unit_0079(c, 143u, depth + 1u); else { c.pc = 0x002E6F20u; return; } if (c.pc != 0x002F0454u) [[unlikely]] return; }
L_002F0454:
    set32(c.r[4], c.r[17].w[0] + 336u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0464u); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002F0464u) [[unlikely]] return; }
L_002F0464:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[17].w[0] + 336u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 4;
L_002F0474:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F0480:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[1].w[0] - 2064u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 14;
L_002F04B8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F04C4u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0079(c, 143u, depth + 1u); else { c.pc = 0x002E6F20u; return; } if (c.pc != 0x002F04C4u) [[unlikely]] return; }
L_002F04C4:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 336u)));
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F04E4u); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_000A(c, 21u, depth + 1u); else { c.pc = 0x00128650u; return; } if (c.pc != 0x002F04E4u) [[unlikely]] return; }
L_002F04E4:
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F04F8u); set32(c.r[5], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0079(c, 144u, depth + 1u); else { c.pc = 0x002E6F40u; return; } if (c.pc != 0x002F04F8u) [[unlikely]] return; }
L_002F04F8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 84u);
    c.budget -= 2;
L_002F0500:
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F04B8u | kUnwind; return; } goto L_002F04B8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F0530:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[4], c.r[4].w[0] + 1072u);
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0560u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002F0560u) [[unlikely]] return; }
L_002F0560:
    set32(c.r[4], 0u + 3130u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F056Cu); set32(c.r[5], c.r[17].w[0] + 336u);  if (depth < kMaxDepth) unit_0045(c, 74u, depth + 1u); else { c.pc = 0x00214940u; return; } if (c.pc != 0x002F056Cu) [[unlikely]] return; }
L_002F056C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 1152u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0584u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0044(c, 404u, depth + 1u); else { c.pc = 0x002138E0u; return; } if (c.pc != 0x002F0584u) [[unlikely]] return; }
L_002F0584:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F05A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F05D4u); set32(c.r[17], c.r[17].w[0] - 6992u);  if (depth < kMaxDepth) unit_0079(c, 155u, depth + 1u); else { c.pc = 0x002E7090u; return; } if (c.pc != 0x002F05D4u) [[unlikely]] return; }
L_002F05D4:
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[19], 0u + 1u);
    set32(c.r[16], c.r[20].w[0] + 84u);
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 6u)));
    c.budget -= 5;
L_002F05E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F05F4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 158u, depth + 1u); else { c.pc = 0x002E7100u; return; } if (c.pc != 0x002F05F4u) [[unlikely]] return; }
L_002F05F4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 84u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F05E8u | kUnwind; return; } goto L_002F05E8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.r[19].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
L_002F0610:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[1], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[5], c.r[20].w[0] + 384u);
    st16((c.r[1].w[0] + 17480u), static_cast<std::uint16_t>(c.r[18].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 368u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F062Cu); set32(c.r[6], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_000A(c, 184u, depth + 1u); else { c.pc = 0x0012A720u; return; } if (c.pc != 0x002F062Cu) [[unlikely]] return; }
L_002F062C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + 28u);
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F0610u | kUnwind; return; } goto L_002F0610; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002F0660:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].d[0] = c.r[5].d[0] << 48;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = c.f[12];
    c.budget -= 13;
    { const bool t = c.r[3].sd[0] < 0; c.f[20] = c.f[13];  if (t) { goto L_002F0750; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F06A0u); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 92u, depth + 1u); else { c.pc = 0x002F08B0u; return; } if (c.pc != 0x002F06A0u) [[unlikely]] return; }
L_002F06A0:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_002F0750; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[3], 0u + 2u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[29].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 8));
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[2], c.r[4].w[0] << 3);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    c.f[0] = fp::mul(c.f[1], c.f[21]);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[2].w[0] << 4);
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F700000u);
    c.r[2].d[0] = c.r[2].d[0] | 41943ull;
    c.f[13] = c.r[2].w[0];
    st32((c.r[29].w[0] + 100u), c.f[0]);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    st32((c.r[29].w[0] + 108u), c.f[1]);
    st32((c.r[29].w[0] + 112u), c.f[1]);
    set32(c.r[2], ld32((c.r[5].w[0] + 32u)));
    c.f[12] = c.r[3].w[0];
    c.f[14] = c.f[12];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0740u); st32((c.r[29].w[0] + 116u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002F0740u) [[unlikely]] return; }
L_002F0740:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0750u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002F0750u) [[unlikely]] return; }
L_002F0750:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002F0770:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[16].sd[0] < 0; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002F0898; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F07A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007C(c, 92u, depth + 1u); else { c.pc = 0x002F08B0u; return; } if (c.pc != 0x002F07A4u) [[unlikely]] return; }
L_002F07A4:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));  if (t) { goto L_002F0898; } }
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 8));
    c.r[6].d[0] = c.r[4].d[0] << 48;
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);  if (t) { goto L_002F07E0; } }
    c.r[4].d[0] = c.r[6].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[3].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F0800; } }
    c.budget -= 1;
L_002F07E0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[6].d[0] << 48;  if (t) { goto L_002F0850; } }
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002F0850; } }
    c.budget -= 1;
L_002F0800:
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[18], c.r[18].w[0] + c.r[3].w[0]);
    c.budget -= 8;
L_002F0820:
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_002F0898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0834u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x002D8090u; return; } if (c.pc != 0x002F0834u) [[unlikely]] return; }
L_002F0834:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F0820u | kUnwind; return; } goto L_002F0820; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F0898; } }
    c.budget -= 1;
L_002F0850:
    c.r[4].d[0] = c.r[6].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[18], c.r[18].w[0] + c.r[3].w[0]);
    c.budget -= 8;
L_002F0870:
    set32(c.r[4], ld32((c.r[18].w[0] + 384u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_002F0898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0884u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x002D8090u; return; } if (c.pc != 0x002F0884u) [[unlikely]] return; }
L_002F0884:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F0870u | kUnwind; return; } goto L_002F0870; } }
    c.budget -= 1;
L_002F0898:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F08B0:
    c.r[2].d[0] = c.r[4].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[2].d[0] = c.r[4].sd[0] < 77ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_002F08E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002F0968; } }
    c.budget -= 1;
L_002F08E0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[3].d[0] = c.r[5].d[0] << 56;  if (t) { goto L_002F0900; } }
    set32(c.r[2], 0u + 18u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 259u);  if (t) { goto L_002F0900; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F0968; } }
L_002F0900:
    c.r[2].d[0] = c.r[5].d[0] << 56;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[6], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 13376u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 7ull;
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[2], 0u + 21u);
    c.r[6].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[5].d[0] = ld8((c.r[3].w[0] + 1u));  if (t) { goto L_002F0940; } }
    set32(c.r[2], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002F0950; } }
L_002F0940:
    set32(c.r[2], 0u + 3u);
    if (c.r[7].d[0] == 0) c.r[2].d[0] = 0ull;
    c.r[6].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
L_002F0950:
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
L_002F0968:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F0970:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F099Cu); set32(c.r[6], 0u + 100u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002F099Cu) [[unlikely]] return; }
L_002F099C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F09ACu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 141u, depth + 1u); else { c.pc = 0x002E6F00u; return; } if (c.pc != 0x002F09ACu) [[unlikely]] return; }
L_002F09AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F09D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F09F4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0048(c, 78u, depth + 1u); else { c.pc = 0x00220EA0u; return; } if (c.pc != 0x002F09F4u) [[unlikely]] return; }
L_002F09F4:
    set32(c.r[4], c.r[17].w[0] + 12u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0A04u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 151u, depth + 1u); else { c.pc = 0x002E7010u; return; } if (c.pc != 0x002F0A04u) [[unlikely]] return; }
L_002F0A04:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 97u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F0A30:
    c.r[5].d[0] = c.r[5].d[0] << 48;
    set32(c.r[4], c.r[4].w[0] + 12u);
    c.budget -= 4;
    { c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E7100u | kUnwind; return; } [[clang::musttail]] return unit_0079(c, 158u, depth); }
L_002F0A40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[18].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002F0AB8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F0AB8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 14u)));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002F0A70:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002F0AA0; } }
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_002F0A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0A88u); set32(c.r[4], ld32((c.r[16].w[0] + 48u)));  if (depth < kMaxDepth) unit_000B(c, 62u, depth + 1u); else { c.pc = 0x0012D1C0u; return; } if (c.pc != 0x002F0A88u) [[unlikely]] return; }
L_002F0A88:
    st32((c.r[16].w[0] + 48u), 0u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 14u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F0A80u | kUnwind; return; } goto L_002F0A80; } }
L_002F0AA0:
    st16((c.r[18].w[0] + 14u), static_cast<std::uint16_t>(0u));
    st8((c.r[18].w[0] + 96u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[18].w[0] + 97u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0AB8u); st8((c.r[18].w[0] + 98u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0079(c, 142u, depth + 1u); else { c.pc = 0x002E6F10u; return; } if (c.pc != 0x002F0AB8u) [[unlikely]] return; }
L_002F0AB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F0AD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 14u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002F0B30; } }
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_002F0B08:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0B18u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x002D8090u; return; } if (c.pc != 0x002F0B18u) [[unlikely]] return; }
L_002F0B18:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 14u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F0B08u | kUnwind; return; } goto L_002F0B08; } }
    c.budget -= 1;
L_002F0B30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F0B50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 98u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_002F0B60:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002D8340u | kUnwind; return; } [[clang::musttail]] return unit_0076(c, 16u, depth); }
L_002F0B80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 26u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 97u)));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 98u)));
    c.budget -= 13;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; c.f[20] = c.f[12];  if (t) { goto L_002F0BC0; } }
    set32(c.r[3], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_002F0C40; } }
L_002F0BC0:
    c.r[4].d[0] = c.r[16].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F0C00; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0BE4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_007C(c, 109u, depth + 1u); else { c.pc = 0x002F0B60u; return; } if (c.pc != 0x002F0BE4u) [[unlikely]] return; }
L_002F0BE4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0BF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007C(c, 109u, depth + 1u); else { c.pc = 0x002F0B60u; return; } if (c.pc != 0x002F0BF8u) [[unlikely]] return; }
L_002F0BF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F0F18; } }
L_002F0C00:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002F0F18; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0C20u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_007C(c, 109u, depth + 1u); else { c.pc = 0x002F0B60u; return; } if (c.pc != 0x002F0C20u) [[unlikely]] return; }
L_002F0C20:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0C34u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_007C(c, 109u, depth + 1u); else { c.pc = 0x002F0B60u; return; } if (c.pc != 0x002F0C34u) [[unlikely]] return; }
L_002F0C34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F0F18; } }
    c.budget -= 1;
L_002F0C40:
    set32(c.r[3], 0u + 29u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_002F0CD0; } }
    c.r[5].d[0] = c.r[16].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002F0C80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0C64u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_007C(c, 109u, depth + 1u); else { c.pc = 0x002F0B60u; return; } if (c.pc != 0x002F0C64u) [[unlikely]] return; }
L_002F0C64:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0C78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007C(c, 109u, depth + 1u); else { c.pc = 0x002F0B60u; return; } if (c.pc != 0x002F0C78u) [[unlikely]] return; }
L_002F0C78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F0F18; } }
L_002F0C80:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002F0CB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0C94u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_007C(c, 109u, depth + 1u); else { c.pc = 0x002F0B60u; return; } if (c.pc != 0x002F0C94u) [[unlikely]] return; }
L_002F0C94:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0CA8u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_007C(c, 109u, depth + 1u); else { c.pc = 0x002F0B60u; return; } if (c.pc != 0x002F0CA8u) [[unlikely]] return; }
L_002F0CA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F0F18; } }
L_002F0CB0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002F0F18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0CC4u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_007C(c, 109u, depth + 1u); else { c.pc = 0x002F0B60u; return; } if (c.pc != 0x002F0CC4u) [[unlikely]] return; }
L_002F0CC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F0F18; } }
    c.budget -= 1;
L_002F0CD0:
    set32(c.r[3], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[7].w[0] - 19u);  if (t) { goto L_002F0CF8; } }
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002F0CF8; } }
    set32(c.r[3], 0u + 28u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_002F0D30; } }
    c.budget -= 1;
L_002F0CF8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0D0Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_007C(c, 109u, depth + 1u); else { c.pc = 0x002F0B60u; return; } if (c.pc != 0x002F0D0Cu) [[unlikely]] return; }
L_002F0D0C:
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0D28u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_007C(c, 109u, depth + 1u); else { c.pc = 0x002F0B60u; return; } if (c.pc != 0x002F0D28u) [[unlikely]] return; }
L_002F0D28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F0F18; } }
L_002F0D30:
    set32(c.r[3], 0u + 23u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 48u);  if (t) { goto L_002F0D50; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_002F0D50; } }
    set32(c.r[3], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_002F0DD0; } }
L_002F0D50:
    c.r[4].d[0] = c.r[16].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F0D90; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0D74u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_007C(c, 109u, depth + 1u); else { c.pc = 0x002F0B60u; return; } if (c.pc != 0x002F0D74u) [[unlikely]] return; }
L_002F0D74:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002F0D78:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0D88u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_007C(c, 109u, depth + 1u); else { c.pc = 0x002F0B60u; return; } if (c.pc != 0x002F0D88u) [[unlikely]] return; }
L_002F0D88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F0F18; } }
L_002F0D90:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002F0F18; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0DB0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_007C(c, 109u, depth + 1u); else { c.pc = 0x002F0B60u; return; } if (c.pc != 0x002F0DB0u) [[unlikely]] return; }
L_002F0DB0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0DC4u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_007C(c, 109u, depth + 1u); else { c.pc = 0x002F0B60u; return; } if (c.pc != 0x002F0DC4u) [[unlikely]] return; }
L_002F0DC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F0F18; } }
    c.budget -= 1;
L_002F0DD0:
    set32(c.r[2], 0u + 38u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; c.r[3].d[0] = c.r[16].d[0] << 56;  if (t) { goto L_002F0E70; } }
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002F0DF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0DF0u);  if (depth < kMaxDepth) unit_007C(c, 109u, depth + 1u); else { c.pc = 0x002F0B60u; return; } if (c.pc != 0x002F0DF0u) [[unlikely]] return; }
L_002F0DF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F0E50; } }
L_002F0DF8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 3u);  if (t) { goto L_002F0E28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0E0Cu);  if (depth < kMaxDepth) unit_007C(c, 109u, depth + 1u); else { c.pc = 0x002F0B60u; return; } if (c.pc != 0x002F0E0Cu) [[unlikely]] return; }
L_002F0E0C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0E20u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_007C(c, 109u, depth + 1u); else { c.pc = 0x002F0B60u; return; } if (c.pc != 0x002F0E20u) [[unlikely]] return; }
L_002F0E20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F0E50; } }
L_002F0E28:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002F0E50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0E3Cu);  if (depth < kMaxDepth) unit_007C(c, 109u, depth + 1u); else { c.pc = 0x002F0B60u; return; } if (c.pc != 0x002F0E3Cu) [[unlikely]] return; }
L_002F0E3C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0E50u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_007C(c, 109u, depth + 1u); else { c.pc = 0x002F0B60u; return; } if (c.pc != 0x002F0E50u) [[unlikely]] return; }
L_002F0E50:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0E64u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_007C(c, 109u, depth + 1u); else { c.pc = 0x002F0B60u; return; } if (c.pc != 0x002F0E64u) [[unlikely]] return; }
L_002F0E64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F0F18; } }
    c.budget -= 1;
L_002F0E70:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull; c.r[3].d[0] = c.r[16].d[0] << 56;  if (t) { goto L_002F0EE0; } }
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F0EA8; } }
    c.r[3].d[0] = c.r[5].d[0] << 56;
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[16].w[0] + 1u);  if (t) { goto L_002F0EA8; } }
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 3;
L_002F0EA8:
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + 2u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0EC4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_007C(c, 109u, depth + 1u); else { c.pc = 0x002F0B60u; return; } if (c.pc != 0x002F0EC4u) [[unlikely]] return; }
L_002F0EC4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0ED8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007C(c, 109u, depth + 1u); else { c.pc = 0x002F0B60u; return; } if (c.pc != 0x002F0ED8u) [[unlikely]] return; }
L_002F0ED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F0F18; } }
L_002F0EE0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] << 56;  if (t) { goto L_002F0F00; } }
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0EFCu); set32(c.r[5], c.r[2].w[0] + 2u);  if (depth < kMaxDepth) unit_007C(c, 109u, depth + 1u); else { c.pc = 0x002F0B60u; return; } if (c.pc != 0x002F0EFCu) [[unlikely]] return; }
L_002F0EFC:
    c.budget -= 1;
L_002F0F00:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0F14u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_007C(c, 109u, depth + 1u); else { c.pc = 0x002F0B60u; return; } if (c.pc != 0x002F0F14u) [[unlikely]] return; }
L_002F0F14:
    c.budget -= 1;
L_002F0F18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F0F40:
    c.r[3].d[0] = c.r[5].d[0] << 56;
    set32(c.r[2], 0u - 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F0F58; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 98u)));
    c.budget -= 1;
L_002F0F58:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 97u)));
    set32(c.r[2], 0u + 29u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[3].d[0] = c.r[5].d[0] << 56;  if (t) { goto L_002F0F80; } }
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 6u);  if (t) { goto L_002F0F80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F0F88; } }
L_002F0F80:
    set32(c.r[5], 0u + 1u);
    c.budget -= 2;
L_002F0F88:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F0B60u | kUnwind; return; } goto L_002F0B60; }
L_002F0F90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0FACu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 151u, depth + 1u); else { c.pc = 0x002E7010u; return; } if (c.pc != 0x002F0FACu) [[unlikely]] return; }
L_002F0FAC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0FB8u); set32(c.r[5], 0u + 2048u);  if (depth < kMaxDepth) unit_0079(c, 143u, depth + 1u); else { c.pc = 0x002E6F20u; return; } if (c.pc != 0x002F0FB8u) [[unlikely]] return; }
L_002F0FB8:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[17].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 240u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0FCCu); set32(c.r[4], 0u + 3121u);  if (depth < kMaxDepth) unit_0045(c, 59u, depth + 1u); else { c.pc = 0x002147C0u; return; } if (c.pc != 0x002F0FCCu) [[unlikely]] return; }
L_002F0FCC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0FD8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 144u, depth + 1u); else { c.pc = 0x002E6F40u; return; } if (c.pc != 0x002F0FD8u) [[unlikely]] return; }
L_002F0FD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F0FF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0] + 244u), c.r[16].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1018u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0079(c, 155u, depth + 1u); else { c.pc = 0x002E7090u; return; } if (c.pc != 0x002F1018u) [[unlikely]] return; }
L_002F1018:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[17].w[0] + 84u);
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 6u)));
    st16((c.r[1].w[0] + 10488u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 240u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1040u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_000A(c, 194u, depth + 1u); else { c.pc = 0x0012ABA0u; return; } if (c.pc != 0x002F1040u) [[unlikely]] return; }
L_002F1040:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F1060:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002F1090; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 244u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1088u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x002D8090u; return; } if (c.pc != 0x002F1088u) [[unlikely]] return; }
L_002F1088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F10B0; } }
L_002F1090:
    c.r[1].d[0] = c.r[3].sd[0] < 40ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F10B0; } }
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F10B0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x002D8090u; return; } if (c.pc != 0x002F10B0u) [[unlikely]] return; }
L_002F10B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002F10C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
L_002F10E0:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F10ECu); set32(c.r[6], 0u + 180u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x002F10ECu) [[unlikely]] return; }
L_002F10EC:
    set32(c.r[2], 0u + 1u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[18].w[0] + 92u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1104u); st32((c.r[18].w[0] + 4u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_007C(c, 258u, depth + 1u); else { c.pc = 0x002F23E0u; return; } if (c.pc != 0x002F1104u) [[unlikely]] return; }
L_002F1104:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F1120:
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 98u), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_002F1140:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 92u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_002F1150:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[5].w[0]);  c.pc = t; return; }
L_002F1160:
    st16((c.r[4].w[0] + 88u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 90u), static_cast<std::uint16_t>(c.r[6].w[0]));  c.pc = t; return; }
L_002F1170:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002F11B0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002F11A0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002F1198; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F11B8; } }
    c.budget -= 1;
L_002F1198:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 144u), 0u);  if (t) { goto L_002F11B8; } }
L_002F11A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 144u), c.r[3].w[0]);  if (t) { goto L_002F11B8; } }
L_002F11B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 144u), c.r[3].w[0]);
    c.budget -= 2;
L_002F11B8:
    st32((c.r[4].w[0] + 148u), 0u);
    st32((c.r[4].w[0] + 152u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 138u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002F11D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].d[0] = c.r[5].d[0] << 56;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[3].d[0] = c.r[3].sd[0] < 112ll ? 1ull : 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F1210; } }
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1204u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_007C(c, 175u, depth + 1u); else { c.pc = 0x002F1680u; return; } if (c.pc != 0x002F1204u) [[unlikely]] return; }
L_002F1204:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 97u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002F1218; } }
    c.budget -= 1;
L_002F1210:
    st8((c.r[16].w[0] + 97u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 2;
L_002F1218:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F1240; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 95u)));
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002F1250; } }
    c.budget -= 1;
L_002F1240:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 97u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F124Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 161u, depth + 1u); else { c.pc = 0x002F1270u; return; } if (c.pc != 0x002F124Cu) [[unlikely]] return; }
L_002F124C:
    st8((c.r[16].w[0] + 94u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002F1250:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F1270:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 95u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[19].d[0] = c.r[2].d[0] << 56;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    c.r[1].d[0] = 0ll < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002F1300; } }
    c.r[18].d[0] = c.r[5].d[0] << 56;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.budget -= 2;
L_002F12C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F12CCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 270u, depth + 1u); else { c.pc = 0x002F2600u; return; } if (c.pc != 0x002F12CCu) [[unlikely]] return; }
L_002F12CC:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_002F12E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002F1308; } }
    c.budget -= 1;
L_002F12E8:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F12C0u | kUnwind; return; } goto L_002F12C0; } }
L_002F1300:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002F1308:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F1330:
    c.budget -= 2;
    {  goto L_002F2530; }
L_002F1340:
    c.budget -= 2;
    {  goto L_002F25B0; }
L_002F1350:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 144u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F1380; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F1668; } }
L_002F1380:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.f[2] = ld32((c.r[17].w[0] + 164u));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42540000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 164u), c.f[1]);  if (t) { goto L_002F13B0; } }
    st32((c.r[17].w[0] + 164u), 0u);
    c.budget -= 1;
L_002F13B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.f[2] = ld32((c.r[17].w[0] + 168u));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42400000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 168u), c.f[1]);  if (t) { goto L_002F13E0; } }
    st32((c.r[17].w[0] + 168u), 0u);
    c.budget -= 1;
L_002F13E0:
    set32(c.r[2], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 160u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 250ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002F1418; } }
    st32((c.r[17].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 156u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F1418; } }
    st32((c.r[17].w[0] + 156u), 0u);
    c.budget -= 1;
L_002F1418:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F1460; } }
    c.f[2] = ld32((c.r[17].w[0] + 172u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D3F0000u);
    c.r[3].d[0] = c.r[2].d[0] | 9612ull;
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 172u), c.f[1]);  if (t) { goto L_002F1498; } }
    st32((c.r[17].w[0] + 172u), c.f[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 176u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002F1498; } }
L_002F1460:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D3F0000u);
    c.f[2] = ld32((c.r[17].w[0] + 172u));
    c.r[3].d[0] = c.r[3].d[0] | 9612ull;
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 172u), c.f[1]);  if (t) { goto L_002F1498; } }
    st32((c.r[17].w[0] + 172u), c.f[0]);
    st8((c.r[17].w[0] + 176u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002F1498:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F14B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F1668; } }
    c.budget -= 1;
L_002F14B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 138u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F1640; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F14D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F1660; } }
L_002F14D0:
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 94u)));
    c.budget -= 2;
L_002F14D8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 12u));
    c.r[2].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F1518; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 94u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[17].w[0] + 94u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002F1550; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 95u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 94u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002F1550; } }
    c.budget -= 1;
L_002F1518:
    c.r[2].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F1550; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 94u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[2].d[0] << 56;
    st8((c.r[17].w[0] + 94u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 95u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F1550; } }
    st8((c.r[17].w[0] + 94u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002F1550:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 94u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F155Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 270u, depth + 1u); else { c.pc = 0x002F2600u; return; } if (c.pc != 0x002F155Cu) [[unlikely]] return; }
L_002F155C:
    st8((c.r[17].w[0] + 97u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 97u)));
    c.r[1].d[0] = c.r[3].sd[0] < 112ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F1598; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 93u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F1580; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 94u)));
    c.budget -= 1;
L_002F1580:
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 98u));
    c.budget -= 4;
L_002F1590:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F14D8u | kUnwind; return; } goto L_002F14D8; } }
L_002F1598:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 94u)));
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002F15C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F15B4u); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x002F15B4u) [[unlikely]] return; }
L_002F15B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F1660; } }
    c.budget -= 1;
L_002F15C0:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 88u));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 4u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002F1620; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F15E0u); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x002F15E0u) [[unlikely]] return; }
L_002F15E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F15E8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 94u)));  if (depth < kMaxDepth) unit_00B0(c, 178u, depth + 1u); else { c.pc = 0x003C1250u; return; } if (c.pc != 0x002F15E8u) [[unlikely]] return; }
L_002F15E8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 97u)));
    c.r[2].d[0] = c.r[5].sd[0] < 112ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002F1608; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1600u);  if (depth < kMaxDepth) unit_007C(c, 175u, depth + 1u); else { c.pc = 0x002F1680u; return; } if (c.pc != 0x002F1600u) [[unlikely]] return; }
L_002F1600:
    st8((c.r[17].w[0] + 97u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002F1608:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 138u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 138u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 140u), 0u);  if (t) { goto L_002F1660; } }
    c.budget -= 1;
L_002F1620:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 90u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002F1660; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1638u); set32(c.r[5], 0u + 167u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x002F1638u) [[unlikely]] return; }
L_002F1638:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002F1668; } }
L_002F1640:
    set32(c.r[3], ld32((c.r[17].w[0] + 140u)));
    set32(c.r[4], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[17].w[0] + 140u), c.r[4].w[0]);  if (t) { goto L_002F1660; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F1668; } }
    c.budget -= 1;
L_002F1660:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002F1668:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F1680:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[6], 0u + 40u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 95u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 96u)));
    set32(c.r[5], c.r[16].w[0] + 98u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[19].d[0] = c.r[2].d[0] << 56;
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F16D4u); c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x002F16D4u) [[unlikely]] return; }
L_002F16D4:
    c.r[1].d[0] = c.r[20].sd[0] < 127ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002F1720; } }
    set32(c.r[17], c.r[29].w[0] + 96u);
    c.budget -= 2;
L_002F16E8:
    c.r[4].d[0] = c.r[18].d[0] << 56;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F16F4u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_004F(c, 68u, depth + 1u); else { c.pc = 0x0023D1E0u; return; } if (c.pc != 0x002F16F4u) [[unlikely]] return; }
L_002F16F4:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F1710; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002F1710:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(40ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F16E8u | kUnwind; return; } goto L_002F16E8; } }
L_002F1720:
    set32(c.r[2], 0u + 126u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002F1768; } }
    set32(c.r[18], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_002F1730:
    c.r[4].d[0] = c.r[17].d[0] << 56;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F173Cu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_004F(c, 68u, depth + 1u); else { c.pc = 0x0023D1E0u; return; } if (c.pc != 0x002F173Cu) [[unlikely]] return; }
L_002F173C:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F1758; } }
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002F1758:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(40ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F1730u | kUnwind; return; } goto L_002F1730; } }
L_002F1768:
    c.r[17].d[0] = c.r[19].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 2;
L_002F1770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1778u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x002F1778u) [[unlikely]] return; }
L_002F1778:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    mmi::div(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F179Cu); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_007C(c, 270u, depth + 1u); else { c.pc = 0x002F2600u; return; } if (c.pc != 0x002F179Cu) [[unlikely]] return; }
L_002F179C:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 96u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F1770u | kUnwind; return; } goto L_002F1770; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002F17E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 138u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F1830; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1804u); set32(c.r[5], 0u + 165u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x002F1804u) [[unlikely]] return; }
L_002F1804:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 97u)));
    c.r[3].d[0] = c.r[5].sd[0] < 112ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002F1820; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F181Cu);  if (depth < kMaxDepth) unit_007C(c, 175u, depth + 1u); else { c.pc = 0x002F1680u; return; } if (c.pc != 0x002F181Cu) [[unlikely]] return; }
L_002F181C:
    st8((c.r[16].w[0] + 97u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002F1820:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 138u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 138u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 140u), 0u);
    c.budget -= 4;
L_002F1830:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F1840:
    c.f[2] = ld32((c.r[4].w[0] + 144u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 144u), c.f[1]);  if (t) { goto L_002F1878; } }
    st32((c.r[4].w[0] + 144u), c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002F1898; } }
L_002F1878:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[3].d[0] = c.r[2].d[0] | 39322ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_002F1898; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F1898:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F18A0:
    c.f[2] = ld32((c.r[4].w[0] + 144u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 144u), c.f[1]);  if (t) { goto L_002F18D8; } }
    st32((c.r[4].w[0] + 144u), c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F1900; } }
    c.budget -= 1;
L_002F18D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 2u);  if (t) { goto L_002F18FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F18FC; } }
L_002F18FC:
    c.budget -= 1;
L_002F1900:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F1910:
    c.f[3] = ld32((c.r[4].w[0] + 144u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D080000u);
    c.r[5].d[0] = c.r[3].d[0] | 34953ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41850000u);
    c.r[3].d[0] = c.r[2].d[0] | 21845ull;
    c.f[0] = c.r[5].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E2A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 43691ull;
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    st32((c.r[4].w[0] + 144u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 148u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[2] = fp::add(c.f[3], c.f[2]);
    st32((c.r[4].w[0] + 148u), c.f[2]);
    c.f[2] = ld32((c.r[4].w[0] + 152u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[4].w[0] + 152u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 144u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 24;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1980; } }
    st32((c.r[4].w[0] + 144u), c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F1988; } }
    c.budget -= 1;
L_002F1980:
    set32(c.r[2], 0u + 2u);
    c.budget -= 2;
L_002F1988:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F1990:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 148u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002F19E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F19C4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002F19C4u) [[unlikely]] return; }
L_002F19C4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F19D0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 219u, depth + 1u); else { c.pc = 0x002F1C80u; return; } if (c.pc != 0x002F19D0u) [[unlikely]] return; }
L_002F19D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F19D8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002F19D8u) [[unlikely]] return; }
L_002F19D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F1C60; } }
L_002F19E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F19E8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002F19E8u) [[unlikely]] return; }
L_002F19E8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F1A60; } }
    c.f[1] = ld32((c.r[17].w[0] + 144u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
L_002F1A00:
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1A60; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 138u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F1A60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1A24u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002F1A24u) [[unlikely]] return; }
L_002F1A24:
    c.f[12] = 0u;
    c.f[13] = c.f[12];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1A38u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002F1A38u) [[unlikely]] return; }
L_002F1A38:
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.f[12] = ld32((c.r[17].w[0] + 172u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1A48u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 18u, depth + 1u); else { c.pc = 0x002D8380u; return; } if (c.pc != 0x002F1A48u) [[unlikely]] return; }
L_002F1A48:
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.f[12] = ld32((c.r[17].w[0] + 172u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1A58u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002F1A58u) [[unlikely]] return; }
L_002F1A58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1A60u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002F1A60u) [[unlikely]] return; }
L_002F1A60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 97u)));
    c.r[2].d[0] = c.r[3].sd[0] < 112ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F1B28; } }
    set32(c.r[2], 0u + 125u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F1AA0; } }
    set32(c.r[2], 0u + 126u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F1A98; } }
    set32(c.r[2], 0u + 127u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 12u);  if (t) { goto L_002F1AA8; } }
L_002F1A98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_002F1AA8; } }
L_002F1AA0:
    set32(c.r[2], 0u + 18u);
    c.budget -= 2;
L_002F1AA8:
    set32(c.r[18], c.r[2].w[0] << 2);
    c.f[0] = ld32((c.r[17].w[0] + 144u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[3], c.r[18].w[0] + c.r[17].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1ACCu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 18u, depth + 1u); else { c.pc = 0x002D8380u; return; } if (c.pc != 0x002F1ACCu) [[unlikely]] return; }
L_002F1ACC:
    set32(c.r[2], c.r[18].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.f[12] = ld32((c.r[17].w[0] + 144u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1AE0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002F1AE0u) [[unlikely]] return; }
L_002F1AE0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1AF0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_007C(c, 229u, depth + 1u); else { c.pc = 0x002F1D90u; return; } if (c.pc != 0x002F1AF0u) [[unlikely]] return; }
L_002F1AF0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1B00u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007C(c, 229u, depth + 1u); else { c.pc = 0x002F1D90u; return; } if (c.pc != 0x002F1B00u) [[unlikely]] return; }
L_002F1B00:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.f[12] = ld32((c.r[17].w[0] + 144u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1B10u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002F1B10u) [[unlikely]] return; }
L_002F1B10:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.f[12] = ld32((c.r[17].w[0] + 144u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1B20u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002F1B20u) [[unlikely]] return; }
L_002F1B20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F1C48; } }
L_002F1B28:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1B34u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 243u, depth + 1u); else { c.pc = 0x002F21A0u; return; } if (c.pc != 0x002F1B34u) [[unlikely]] return; }
L_002F1B34:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 138u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[3].w[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F1B78; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 140u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F1B70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F1B78; } }
    c.budget -= 1;
L_002F1B70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 2;
L_002F1B78:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 93u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F1BC0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 94u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F1BB8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F1BB0; } }
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 12u);  if (t) { goto L_002F1BC8; } }
L_002F1BB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_002F1BC8; } }
L_002F1BB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 18u);  if (t) { goto L_002F1BC8; } }
L_002F1BC0:
    set32(c.r[2], 0u + 8u);
    c.budget -= 2;
L_002F1BC8:
    set32(c.r[18], c.r[2].w[0] << 2);
    c.f[0] = ld32((c.r[17].w[0] + 144u));
    set32(c.r[2], c.r[18].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1BE4u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 18u, depth + 1u); else { c.pc = 0x002D8380u; return; } if (c.pc != 0x002F1BE4u) [[unlikely]] return; }
L_002F1BE4:
    set32(c.r[2], c.r[18].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.f[12] = ld32((c.r[17].w[0] + 144u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1BF8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002F1BF8u) [[unlikely]] return; }
L_002F1BF8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1C08u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007C(c, 229u, depth + 1u); else { c.pc = 0x002F1D90u; return; } if (c.pc != 0x002F1C08u) [[unlikely]] return; }
L_002F1C08:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.f[12] = ld32((c.r[17].w[0] + 144u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1C18u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002F1C18u) [[unlikely]] return; }
L_002F1C18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1C20u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002F1C20u) [[unlikely]] return; }
L_002F1C20:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1C30u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_007C(c, 235u, depth + 1u); else { c.pc = 0x002F1EA0u; return; } if (c.pc != 0x002F1C30u) [[unlikely]] return; }
L_002F1C30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1C38u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002F1C38u) [[unlikely]] return; }
L_002F1C38:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 97u));
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1C48u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 146u, depth + 1u); else { c.pc = 0x002F1060u; return; } if (c.pc != 0x002F1C48u) [[unlikely]] return; }
L_002F1C48:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1C54u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 240u, depth + 1u); else { c.pc = 0x002F20A0u; return; } if (c.pc != 0x002F1C54u) [[unlikely]] return; }
L_002F1C54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1C5Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002F1C5Cu) [[unlikely]] return; }
    goto L_002F1C5C;
L_002F1C58:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_002F1C5C:
    c.budget -= 1;
L_002F1C60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F1C80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1CA0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x002F1CA0u) [[unlikely]] return; }
L_002F1CA0:
    c.f[14] = ld32((c.r[17].w[0] + 148u));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1CB0u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002F1CB0u) [[unlikely]] return; }
L_002F1CB0:
    c.f[0] = ld32((c.r[17].w[0] + 152u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.f[14] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1CCCu); c.f[13] = fp::add(c.f[12], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002F1CCCu) [[unlikely]] return; }
L_002F1CCC:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.f[12] = ld32((c.r[17].w[0] + 144u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1CDCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002F1CDCu) [[unlikely]] return; }
L_002F1CDC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1CECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007C(c, 235u, depth + 1u); else { c.pc = 0x002F1EA0u; return; } if (c.pc != 0x002F1CECu) [[unlikely]] return; }
L_002F1CEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1CF4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x002F1CF4u) [[unlikely]] return; }
L_002F1CF4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 93u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F1D38; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 94u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F1D30; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F1D28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 12u);  if (t) { goto L_002F1D40; } }
L_002F1D28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_002F1D40; } }
L_002F1D30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 18u);  if (t) { goto L_002F1D40; } }
L_002F1D38:
    set32(c.r[2], 0u + 8u);
    c.budget -= 2;
L_002F1D40:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.f[12] = ld32((c.r[17].w[0] + 144u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1D58u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002F1D58u) [[unlikely]] return; }
L_002F1D58:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 97u));
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1D68u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 146u, depth + 1u); else { c.pc = 0x002F1060u; return; } if (c.pc != 0x002F1D68u) [[unlikely]] return; }
L_002F1D68:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1D74u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 240u, depth + 1u); else { c.pc = 0x002F20A0u; return; } if (c.pc != 0x002F1D74u) [[unlikely]] return; }
L_002F1D74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F1D90:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], 0u + 4u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = c.r[2].w[0];
    st32((c.r[29].w[0] + 32u), c.r[3].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.f[0] = ld32((c.r[4].w[0] + 144u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 15;
    { const bool t = c.r[6].d[0] != 0ull; st32((c.r[29].w[0] + 68u), c.f[0]);  if (t) { goto L_002F1E10; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43790000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x431B0000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 84u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[1] = ld32((c.r[4].w[0] + 164u));
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42400000u);
    c.f[15] = c.r[2].w[0];
    c.f[13] = fp::add(c.f[0], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1E08u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x002F1E08u) [[unlikely]] return; }
L_002F1E08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F1E50; } }
L_002F1E10:
    set32(c.r[6], ld32((c.r[4].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x431B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43710000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.f[12] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42400000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    st32((c.r[29].w[0] + 84u), c.r[6].w[0]);
    c.f[14] = c.r[3].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 168u));
    c.f[15] = c.r[2].w[0];
    c.f[13] = fp::add(c.f[0], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1E4Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x002D94B0u; return; } if (c.pc != 0x002F1E4Cu) [[unlikely]] return; }
L_002F1E4C:
    c.budget -= 1;
L_002F1E50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[4], c.r[4].w[0] - 16848u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1E64u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 4u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x002F1E64u) [[unlikely]] return; }
L_002F1E64:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1E74u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002F1E74u) [[unlikely]] return; }
L_002F1E74:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 16832u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1E88u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 4u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x002F1E88u) [[unlikely]] return; }
L_002F1E88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002F1EA0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[3], 0u + 4u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    c.f[1] = c.r[2].w[0];
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 144u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 196u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 29;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002F1F20; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[21].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 3;
L_002F1F20:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[29].w[0] + 180u);
    set32(c.r[16], c.r[29].w[0] + 184u);
    set32(c.r[22], c.r[29].w[0] + 164u);
    set32(c.r[30], c.r[29].w[0] + 168u);
    set32(c.r[23], c.r[29].w[0] + 192u);
    c.budget -= 6;
L_002F1F38:
    set32(c.r[2], ld32((c.r[21].w[0] + 156u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[3].d[0] = c.r[2].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F1F50; } }
    set32(c.r[2], c.r[2].w[0] - 18u);
    c.budget -= 1;
L_002F1F50:
    set32(c.r[3], 0u + 3u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[5] = c.r[4].w[0];
    set32(c.r[9], ld32((c.r[21].w[0] + 160u)));
    set32(c.r[7], c.r[2].w[0] >> 31);
    c.r[6].d[0] = c.r[19].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x55550000u);
    c.r[8].d[0] = c.r[3].d[0] | 21846ull;
    c.budget -= 11;
L_002F1F7C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[4] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DF00000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[8].w[0], c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[9].w[0] + c.r[2].w[0]);
    c.f[6] = c.r[2].w[0];
    c.f[6] = fp::cvt_s_w(c.f[6]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    fpu_div(c, 5u, c.f[6], c.f[5]);
    st32((c.r[17].w[0]), c.f[5]);
    c.f[5] = c.r[2].w[0];
    c.f[5] = fp::cvt_s_w(c.f[5]);
    set32(c.r[2], c.r[29].w[0] + 188u);
    c.f[4] = fp::mul(c.f[4], c.f[5]);
    c.f[3] = fp::add(c.f[3], c.f[4]);
    fpu_div(c, 0u, c.f[3], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[22].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[30].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[2], c.r[29].w[0] + 172u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[23].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0]));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[23].w[0]));
    set32(c.r[2], c.r[29].w[0] + 176u);
    c.budget -= 50;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2044u); st32((c.r[2].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002F2044u) [[unlikely]] return; }
L_002F2044:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2058u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002F2058u) [[unlikely]] return; }
L_002F2058:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F1F38u | kUnwind; return; } goto L_002F1F38; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_002F20A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_002F2120; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F2120; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002F20C8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_002F2120; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F20E8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F20E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F2120; } }
L_002F20E8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    set32(c.r[2], c.r[2].w[0] - 30105u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 160u)));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_002F2128; } }
    c.budget -= 1;
L_002F2120:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002F2128:
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 144u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 52u), c.f[0]);  if (t) { goto L_002F2168; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_002F2180; } }
L_002F2168:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 6;
L_002F2180:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2194u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0076(c, 10u, depth + 1u); else { c.pc = 0x002D8170u; return; } if (c.pc != 0x002F2194u) [[unlikely]] return; }
L_002F2194:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F21A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 93u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002F22D8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00BD0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 29920u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F22D8; } }
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 94u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23132u)));
    set32(c.r[3], c.r[3].w[0] - 13064u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 1316u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F21FCu); c.r[20].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));  if (depth < kMaxDepth) unit_0076(c, 101u, depth + 1u); else { c.pc = 0x002D95D0u; return; } if (c.pc != 0x002F21FCu) [[unlikely]] return; }
L_002F21FC:
    c.f[12] = ld32((c.r[19].w[0] + 144u));
    set32(c.r[3], c.r[20].w[0] + 42u);
    set32(c.r[2], c.r[3].w[0] << 4);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F221Cu); set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002F221Cu) [[unlikely]] return; }
L_002F221C:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { goto L_002F22A8; } }
    c.f[0] = ld32((c.r[19].w[0] + 144u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], c.r[17].w[0] + 33u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.f[12] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2250u); set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 18u, depth + 1u); else { c.pc = 0x002D8380u; return; } if (c.pc != 0x002F2250u) [[unlikely]] return; }
L_002F2250:
    c.f[12] = ld32((c.r[19].w[0] + 144u));
    set32(c.r[3], c.r[17].w[0] + 25u);
    set32(c.r[2], c.r[3].w[0] << 4);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2270u); set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002F2270u) [[unlikely]] return; }
L_002F2270:
    c.f[0] = ld32((c.r[19].w[0] + 144u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[16].w[0] + 9840u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F228Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 18u, depth + 1u); else { c.pc = 0x002D8380u; return; } if (c.pc != 0x002F228Cu) [[unlikely]] return; }
L_002F228C:
    c.f[12] = ld32((c.r[19].w[0] + 144u));
    set32(c.r[4], c.r[16].w[0] + 7920u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F229Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002F229Cu) [[unlikely]] return; }
L_002F229C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F22D8; } }
    c.budget -= 1;
L_002F22A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = ld32((c.r[19].w[0] + 144u));
    set32(c.r[4], c.r[16].w[0] + 11280u);
    c.f[1] = c.r[2].w[0];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F22C4u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 18u, depth + 1u); else { c.pc = 0x002D8380u; return; } if (c.pc != 0x002F22C4u) [[unlikely]] return; }
L_002F22C4:
    c.f[12] = ld32((c.r[19].w[0] + 144u));
    set32(c.r[4], c.r[16].w[0] + 11040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F22D4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 16u, depth + 1u); else { c.pc = 0x002D8340u; return; } if (c.pc != 0x002F22D4u) [[unlikely]] return; }
L_002F22D4:
    c.budget -= 1;
L_002F22D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002F2300:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2314u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 209u, depth + 1u); else { c.pc = 0x003BDA90u; return; } if (c.pc != 0x002F2314u) [[unlikely]] return; }
L_002F2314:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F2328; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F2340; } }
    c.budget -= 1;
L_002F2328:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 13056u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
L_002F2340:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F2350:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002F23C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2384u);  if (depth < kMaxDepth) unit_00AF(c, 209u, depth + 1u); else { c.pc = 0x003BDA90u; return; } if (c.pc != 0x002F2384u) [[unlikely]] return; }
L_002F2384:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);  if (t) { goto L_002F23C0; } }
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] - 13056u);
    c.budget -= 3;
L_002F2398:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] << 56;  if (t) { goto L_002F23B0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F23B0u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_007C(c, 153u, depth + 1u); else { c.pc = 0x002F1120u; return; } if (c.pc != 0x002F23B0u) [[unlikely]] return; }
L_002F23B0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 40ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F2398u | kUnwind; return; } goto L_002F2398; } }
L_002F23C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F23E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 93u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 93u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F24F0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_002F24B8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002F2490; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F2428; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F24B8; } }
    c.budget -= 1;
L_002F2428:
    st8((c.r[16].w[0] + 94u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 7u);
    c.r[2].d[0] = 0ull | 33568ull;
    st8((c.r[16].w[0] + 95u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 88u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2448u); st16((c.r[16].w[0] + 90u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_00AF(c, 206u, depth + 1u); else { c.pc = 0x003BDA60u; return; } if (c.pc != 0x002F2448u) [[unlikely]] return; }
L_002F2448:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002F2458; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2458u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_007C(c, 153u, depth + 1u); else { c.pc = 0x002F1120u; return; } if (c.pc != 0x002F2458u) [[unlikely]] return; }
L_002F2458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2460u);  if (depth < kMaxDepth) unit_00AF(c, 207u, depth + 1u); else { c.pc = 0x003BDA70u; return; } if (c.pc != 0x002F2460u) [[unlikely]] return; }
L_002F2460:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002F2470; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2470u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_007C(c, 153u, depth + 1u); else { c.pc = 0x002F1120u; return; } if (c.pc != 0x002F2470u) [[unlikely]] return; }
L_002F2470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2478u);  if (depth < kMaxDepth) unit_00AF(c, 208u, depth + 1u); else { c.pc = 0x003BDA80u; return; } if (c.pc != 0x002F2478u) [[unlikely]] return; }
L_002F2478:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002F2510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2488u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_007C(c, 153u, depth + 1u); else { c.pc = 0x002F1120u; return; } if (c.pc != 0x002F2488u) [[unlikely]] return; }
L_002F2488:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F2510; } }
L_002F2490:
    st8((c.r[16].w[0] + 94u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 40u);
    c.r[2].d[0] = 0ull | 33568ull;
    st8((c.r[16].w[0] + 95u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[16].w[0] + 88u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F24B0u); st16((c.r[16].w[0] + 90u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_007C(c, 254u, depth + 1u); else { c.pc = 0x002F2350u; return; } if (c.pc != 0x002F24B0u) [[unlikely]] return; }
L_002F24B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F2510; } }
L_002F24B8:
    set32(c.r[3], 0u + 42u);
    st8((c.r[16].w[0] + 95u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = 0ull | 33312ull;
    set32(c.r[2], 0u + 64u);
    st16((c.r[16].w[0] + 88u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F24E4u); st16((c.r[16].w[0] + 90u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_007C(c, 254u, depth + 1u); else { c.pc = 0x002F2350u; return; } if (c.pc != 0x002F24E4u) [[unlikely]] return; }
L_002F24E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F2510; } }
    c.budget -= 1;
L_002F24F0:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 95u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = 0ull | 33568ull;
    st8((c.r[16].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 88u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 90u), static_cast<std::uint16_t>(0u));
    c.budget -= 8;
L_002F2510:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 94u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F251Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 270u, depth + 1u); else { c.pc = 0x002F2600u; return; } if (c.pc != 0x002F251Cu) [[unlikely]] return; }
L_002F251C:
    st8((c.r[16].w[0] + 97u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F2530:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 93u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_002F2598; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F2590; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F2588; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F2568; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F2598; } }
    c.budget -= 1;
L_002F2568:
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] - 12152u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (t) { goto L_002F25A0; } }
    c.budget -= 1;
L_002F2588:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_002F25A0; } }
L_002F2590:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_002F25A0; } }
L_002F2598:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002F25A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F25B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 93u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F25E8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F25E0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F25D8; } }
L_002F25D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002F25F0; } }
L_002F25E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002F25F0; } }
L_002F25E8:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_002F25F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F2600:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 96u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 95u)));  if (t) { goto L_002F2648; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[6].d[0] = c.r[5].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F2648; } }
    set32(c.r[2], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], 0u + 127u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);  if (t) { goto L_002F2698; } }
L_002F2648:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 93u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[3].d[0] = c.r[5].d[0] << 56;  if (t) { goto L_002F2670; } }
    set32(c.r[2], c.r[28].w[0] - 28400u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (t) { goto L_002F2698; } }
    c.budget -= 1;
L_002F2670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2678u);  if (depth < kMaxDepth) unit_007C(c, 268u, depth + 1u); else { c.pc = 0x002F2530u; return; } if (c.pc != 0x002F2678u) [[unlikely]] return; }
L_002F2678:
    c.r[6].d[0] = c.r[2].d[0] << 56;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2684u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);  if (depth < kMaxDepth) unit_007C(c, 269u, depth + 1u); else { c.pc = 0x002F25B0u; return; } if (c.pc != 0x002F2684u) [[unlikely]] return; }
L_002F2684:
    c.r[4].d[0] = c.r[6].d[0] << 56;
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2698u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_006D(c, 300u, depth + 1u); else { c.pc = 0x002B6ED0u; return; } if (c.pc != 0x002F2698u) [[unlikely]] return; }
L_002F2698:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002F26B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F26D0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x002F26D0u) [[unlikely]] return; }
L_002F26D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F2718; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[6], 0u + 19u);
    set32(c.r[5], 0u + 27u);
    set32(c.r[4], c.r[4].w[0] + 10032u);
    set32(c.r[3], c.r[3].w[0] + 10784u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 16;
L_002F2718:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F2730:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 13008u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002F0000u < 16384u) { entry = entries_007C[(t - 0x002F0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002F2750:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[20], c.r[4].w[0] + 304u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 388u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 389u), static_cast<std::uint8_t>(0u));
    c.budget -= 22;
L_002F27A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.f[3] = ld32((c.r[19].w[0] + 32u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[19].w[0] + 36u));
    set32(c.r[3], 0u + 121u);
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = ld32((c.r[19].w[0] + 44u));
    st32((c.r[20].w[0]), c.f[3]);
    st32((c.r[20].w[0] + 4u), c.f[2]);
    st32((c.r[20].w[0] + 8u), c.f[1]);
    st32((c.r[20].w[0] + 12u), c.f[0]);
    st32((c.r[17].w[0] + 64u), c.r[4].w[0]);
    st16((c.r[16].w[0] + 80u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[20].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F27F0u); st32((c.r[20].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x002F27F0u) [[unlikely]] return; }
L_002F27F0:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[20], c.r[20].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[16], c.r[16].w[0] + 2u);
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[3].d[0] << 56;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.r[3].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F27A8u | kUnwind; return; } goto L_002F27A8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002F2840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[8], ld32((c.r[4].w[0] + 28u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[9], c.r[16].w[0] + 304u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C4C0000u);
    set32(c.r[12], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 52428ull;
    c.f[1] = c.r[3].w[0];
    c.budget -= 14;
L_002F2878:
    c.r[3].d[0] = c.r[7].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[10], c.r[9].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[10].w[0] + 84u);
    c.r[10].d[0] = ld8((c.r[10].w[0] + 84u));
    c.budget -= 7;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_002F28D8; } }
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 164u)));
    set32(c.r[10], c.r[10].w[0] - 1u);
    st16((c.r[6].w[0] + 164u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[10].d[0] = c.r[10].d[0] << 48;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_002F2988; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.f[4] = ld32((c.r[8].w[0] + 32u));
    c.f[3] = ld32((c.r[8].w[0] + 36u));
    c.f[2] = ld32((c.r[8].w[0] + 40u));
    c.f[0] = ld32((c.r[8].w[0] + 44u));
    st32((c.r[5].w[0]), c.f[4]);
    st32((c.r[5].w[0] + 4u), c.f[3]);
    st32((c.r[5].w[0] + 8u), c.f[2]);
    st32((c.r[5].w[0] + 12u), c.f[0]);
    c.budget -= 10;
L_002F28D8:
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[10].d[0] == c.r[12].d[0];  if (t) { goto L_002F2938; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { goto L_002F28F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F2948; } }
    c.budget -= 1;
L_002F28F8:
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 164u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[11].d[0] = c.r[10].d[0] << 48;
    st16((c.r[6].w[0] + 164u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[11].sd[0] >= 0; c.r[10].d[0] = c.r[11].d[0] & 1ull;  if (t) { goto L_002F2920; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { goto L_002F2920; } }
    set32(c.r[10], c.r[10].w[0] - 2u);
    c.budget -= 1;
L_002F2920:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_002F2948; } }
    c.r[10].d[0] = ld16((c.r[4].w[0] + 80u));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 80u), static_cast<std::uint16_t>(c.r[10].w[0]));  if (t) { goto L_002F2948; } }
L_002F2938:
    c.r[10].d[0] = ld16((c.r[4].w[0] + 80u));
    set32(c.r[10], c.r[10].w[0] + 2u);
    st16((c.r[4].w[0] + 80u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.budget -= 4;
L_002F2948:
    c.r[10].d[0] = ld16((c.r[4].w[0] + 80u));
    c.r[1].d[0] = c.r[10].sd[0] < 137ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002F2960; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002F2960:
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 40u), c.f[0]);
    c.budget -= 10;
L_002F2988:
    set32(c.r[3], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[3].d[0] << 56;
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F2878u | kUnwind; return; } goto L_002F2878; } }
    c.r[3].d[0] = ld8((c.r[9].w[0] + 84u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F29D0; } }
    c.r[3].d[0] = ld8((c.r[9].w[0] + 85u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F29D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002F29F0; } }
L_002F29D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F29D8u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002F29D8u) [[unlikely]] return; }
L_002F29D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F29E0u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x002F29E0u) [[unlikely]] return; }
L_002F29E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F29E8u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002F29E8u) [[unlikely]] return; }
L_002F29E8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002F29F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F2A00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002F2A10:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_002F2A20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 12848u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[4].w[0] + 304u);
    st32((c.r[1].w[0] + 20252u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[3], c.r[28].w[0] - 28396u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20260u), c.r[3].w[0]);
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] - 12864u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[1].w[0] + 20256u), c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 72u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20272u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], 0u + 10u);
    st32((c.r[1].w[0] + 20244u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20288u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x008F0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 936u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 38;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20276u), c.r[3].w[0]);  if (t) { goto L_002F2C00; } }
L_002F2AB8:
    c.r[4].d[0] = c.r[16].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[4].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 84u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F2BF0; } }
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    vu::move(c.vu0, 1u, 4u, 0u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] - 12992u);
    set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);
    c.r[5].d[0] = ld16((c.r[5].w[0] + 80u));
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[28].w[0] - 28396u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[5], c.r[5].w[0] - 121u);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld16((c.r[5].w[0]));
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    st16((c.r[29].w[0] + 72u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[5].w[0] + 2u));
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    st16((c.r[29].w[0] + 74u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[5].w[0] + 4u));
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[4], c.r[4].w[0] - 2u);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    st16((c.r[29].w[0] + 76u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[5].w[0] + 6u));
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[4], c.r[4].w[0] - 2u);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    st16((c.r[29].w[0] + 78u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.f[0] = ld32((c.r[3].w[0] + 64u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[8].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 57;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2BB4u); set32(c.r[4], ld32((c.r[2].w[0] + 72u)));  if (depth < kMaxDepth) unit_0009(c, 143u, depth + 1u); else { c.pc = 0x00125E30u; return; } if (c.pc != 0x002F2BB4u) [[unlikely]] return; }
L_002F2BB4:
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    st32((c.r[1].w[0] + 20268u), c.f[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20224u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2BF0u); st32((c.r[1].w[0] + 20228u), c.f[0]);  if (depth < kMaxDepth) unit_0067(c, 3u, depth + 1u); else { c.pc = 0x0029C020u; return; } if (c.pc != 0x002F2BF0u) [[unlikely]] return; }
L_002F2BF0:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 4;
L_002F2C00:
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F2AB8u | kUnwind; return; } goto L_002F2AB8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F2C30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2C60u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x002F2C60u) [[unlikely]] return; }
L_002F2C60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F2CC0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 11488u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 24u), c.r[18].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[17].w[0]);
    c.budget -= 14;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[2].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_002F2CB0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[3], c.r[3].w[0] + 12080u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 168u), c.r[3].w[0]);  if (t) { goto L_002F2CC0; } }
L_002F2CB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[3], c.r[3].w[0] + 13120u);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 4;
L_002F2CC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F2CE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 12832u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002F0000u < 16384u) { entry = entries_007C[(t - 0x002F0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002F2D00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 12816u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002F0000u < 16384u) { entry = entries_007C[(t - 0x002F0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002F2D20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 12808u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002F0000u < 16384u) { entry = entries_007C[(t - 0x002F0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002F2D40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002F2D50:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_002F2D60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 116u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002F2D80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[6], c.r[17].w[0] + 32u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2DA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 362u, depth + 1u); else { c.pc = 0x002F3500u; return; } if (c.pc != 0x002F2DA8u) [[unlikely]] return; }
L_002F2DA8:
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 7u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; st8((c.r[17].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002F2DD8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F2DD8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F2DE8; } }
    c.budget -= 1;
L_002F2DD8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_002F2DE8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[6], 0u + 1u);  if (t) { goto L_002F2E78; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[6].d[0];  if (t) { goto L_002F2E30; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F2E10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F2E78; } }
L_002F2E10:
    c.r[2].d[0] = ld16((c.r[5].w[0] + 560u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_002F2E78; } }
    set32(c.r[2], 0u + 6u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002F2E78; } }
    c.budget -= 1;
L_002F2E30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 347u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_002F2E48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002F2E78; } }
L_002F2E48:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002F2E78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2E6Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 291u, depth + 1u); else { c.pc = 0x002F2C30u; return; } if (c.pc != 0x002F2E6Cu) [[unlikely]] return; }
L_002F2E6C:
    set32(c.r[2], 0u + 4u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002F2E78:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2E88u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_007C(c, 362u, depth + 1u); else { c.pc = 0x002F3500u; return; } if (c.pc != 0x002F2E88u) [[unlikely]] return; }
L_002F2E88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2E98u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_007C(c, 362u, depth + 1u); else { c.pc = 0x002F3500u; return; } if (c.pc != 0x002F2E98u) [[unlikely]] return; }
L_002F2E98:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2EA4u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x002F2EA4u) [[unlikely]] return; }
L_002F2EA4:
    st32((c.r[17].w[0] + 368u), c.f[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 41u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F2EE0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002F2ED0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 116u), c.r[3].w[0]);  if (t) { goto L_002F2F08; } }
L_002F2ED0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 116u), c.r[3].w[0]);  if (t) { goto L_002F2F08; } }
L_002F2EE0:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002F2EF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 116u), c.r[3].w[0]);  if (t) { goto L_002F2F08; } }
L_002F2EF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[17].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 4;
L_002F2F08:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002F2F18; } }
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002F2F18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F2F30:
    set32(c.r[29], c.r[29].w[0] - 256u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 192u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[28].w[0] - 28392u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[16], c.r[18].w[0] + 304u);
    st32((c.r[1].w[0] + 20240u), c.r[3].w[0]);
    set32(c.r[4], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20260u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2F78u); st32((c.r[1].w[0] + 20288u), 0u);  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x002F2F78u) [[unlikely]] return; }
L_002F2F78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2FBCu); st8((c.r[1].w[0] + 20292u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_007C(c, 362u, depth + 1u); else { c.pc = 0x002F3500u; return; } if (c.pc != 0x002F2FBCu) [[unlikely]] return; }
L_002F2FBC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2FCCu); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_007C(c, 362u, depth + 1u); else { c.pc = 0x002F3500u; return; } if (c.pc != 0x002F2FCCu) [[unlikely]] return; }
L_002F2FCC:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2FD8u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x002F2FD8u) [[unlikely]] return; }
L_002F2FD8:
    st32((c.r[18].w[0] + 112u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2FECu); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x002F2FECu) [[unlikely]] return; }
L_002F2FEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2FF4u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x002F2FF4u) [[unlikely]] return; }
L_002F2FF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2FFCu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002F2FFCu) [[unlikely]] return; }
L_002F2FFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F300Cu); set32(c.r[4], c.r[4].w[0] - 12672u);  if (depth < kMaxDepth) unit_0009(c, 197u, depth + 1u); else { c.pc = 0x00126FE0u; return; } if (c.pc != 0x002F300Cu) [[unlikely]] return; }
L_002F300C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3014u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002F3014u) [[unlikely]] return; }
L_002F3014:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 51u)));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3044u); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x002F3044u) [[unlikely]] return; }
L_002F3044:
    set32(c.r[5], c.r[17].w[0] + 16u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3054u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x002F3054u) [[unlikely]] return; }
L_002F3054:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3060u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x002F3060u) [[unlikely]] return; }
L_002F3060:
    c.f[13] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F306Cu); c.f[12] = ld32((c.r[29].w[0] + 72u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x002F306Cu) [[unlikely]] return; }
L_002F306C:
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 16385u);
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 80u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F308Cu); st32((c.r[18].w[0] + 80u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002F308Cu) [[unlikely]] return; }
L_002F308C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3094u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x002F3094u) [[unlikely]] return; }
L_002F3094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F309Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x002F309Cu) [[unlikely]] return; }
L_002F309C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = ld32((c.r[18].w[0] + 116u));
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F30B0u); c.f[12] = ld32((c.r[18].w[0] + 112u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002F30B0u) [[unlikely]] return; }
L_002F30B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F30B8u); set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x002F30B8u) [[unlikely]] return; }
L_002F30B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F30C0u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002F30C0u) [[unlikely]] return; }
L_002F30C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 12752u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20252u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] - 12800u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[1].w[0] + 20256u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 12704u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F30FCu); st32((c.r[1].w[0] + 20272u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x002F30FCu) [[unlikely]] return; }
L_002F30FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3104u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002F3104u) [[unlikely]] return; }
L_002F3104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F310Cu); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002F310Cu) [[unlikely]] return; }
L_002F310C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23776u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3118u); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x002F3118u) [[unlikely]] return; }
L_002F3118:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3128u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x002F3128u) [[unlikely]] return; }
L_002F3128:
    c.f[12] = ld32((c.r[18].w[0] + 116u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F313Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x002F313Cu) [[unlikely]] return; }
L_002F313C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3144u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 179u, depth + 1u); else { c.pc = 0x00126810u; return; } if (c.pc != 0x002F3144u) [[unlikely]] return; }
L_002F3144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F314Cu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002F314Cu) [[unlikely]] return; }
L_002F314C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3154u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x002F3154u) [[unlikely]] return; }
L_002F3154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F315Cu); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x002F315Cu) [[unlikely]] return; }
L_002F315C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3164u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002F3164u) [[unlikely]] return; }
L_002F3164:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 12736u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20252u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] - 12784u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[1].w[0] + 20256u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 12696u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F31A0u); st32((c.r[1].w[0] + 20272u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x002F31A0u) [[unlikely]] return; }
L_002F31A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F31A8u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002F31A8u) [[unlikely]] return; }
L_002F31A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F31B0u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x002F31B0u) [[unlikely]] return; }
L_002F31B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F31B8u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x002F31B8u) [[unlikely]] return; }
L_002F31B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F31C0u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002F31C0u) [[unlikely]] return; }
L_002F31C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 12720u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20252u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] - 12768u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[1].w[0] + 20256u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 12688u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F31FCu); st32((c.r[1].w[0] + 20272u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x002F31FCu) [[unlikely]] return; }
L_002F31FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_002F3220:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 120u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 9;
    { st32((c.r[4].w[0] + 108u), 0u);  goto L_002F3250; }
L_002F3250:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    c.f[3] = ld32((c.r[5].w[0] + 32u));
    c.f[2] = ld32((c.r[5].w[0] + 36u));
    c.f[1] = ld32((c.r[5].w[0] + 40u));
    c.f[0] = ld32((c.r[5].w[0] + 44u));
    st32((c.r[4].w[0] + 32u), c.f[3]);
    st32((c.r[4].w[0] + 36u), c.f[2]);
    st32((c.r[4].w[0] + 40u), c.f[1]);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 7u)));
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 108u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 25;
    { const bool t = c.r[3].sd[0] <= 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F32F8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F32F8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002F32F8; } }
    c.f[2] = ld32((c.r[5].w[0] + 368u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F3308; } }
    c.budget -= 1;
L_002F32F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002F3330; } }
L_002F3308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3310u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x002F3310u) [[unlikely]] return; }
L_002F3310:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002F3330; } }
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002F3330:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F3340:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[6], c.r[17].w[0] + 32u);
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3370u); set32(c.r[16], c.r[2].w[0] + 304u);  if (depth < kMaxDepth) unit_007C(c, 362u, depth + 1u); else { c.pc = 0x002F3500u; return; } if (c.pc != 0x002F3370u) [[unlikely]] return; }
L_002F3370:
    c.f[12] = ld32((c.r[17].w[0] + 108u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3384u); set32(c.r[5], c.r[5].w[0] - 12592u);  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x002F3384u) [[unlikely]] return; }
L_002F3384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F338Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002F338Cu) [[unlikely]] return; }
L_002F338C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3398u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x002F3398u) [[unlikely]] return; }
L_002F3398:
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F33A8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x002F33A8u) [[unlikely]] return; }
L_002F33A8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 51u)));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F33D8u); set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x002F33D8u) [[unlikely]] return; }
L_002F33D8:
    set32(c.r[5], c.r[18].w[0] + 16u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F33E8u); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x002F33E8u) [[unlikely]] return; }
L_002F33E8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F33F4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x002F33F4u) [[unlikely]] return; }
L_002F33F4:
    c.f[13] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3400u); c.f[12] = ld32((c.r[29].w[0] + 72u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x002F3400u) [[unlikely]] return; }
L_002F3400:
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 16385u);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 80u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3420u); st32((c.r[17].w[0] + 80u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002F3420u) [[unlikely]] return; }
L_002F3420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3428u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x002F3428u) [[unlikely]] return; }
L_002F3428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3430u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x002F3430u) [[unlikely]] return; }
L_002F3430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3438u); set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x002F3438u) [[unlikely]] return; }
L_002F3438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3440u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002F3440u) [[unlikely]] return; }
L_002F3440:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[29].w[0] + 80u);
    st32((c.r[1].w[0] + 20288u), 0u);
    set32(c.r[4], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20240u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 28392u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3468u); st32((c.r[1].w[0] + 20260u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x002F3468u) [[unlikely]] return; }
L_002F3468:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[2].w[0]);
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 12640u);
    st32((c.r[1].w[0] + 20252u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 12656u);
    st32((c.r[1].w[0] + 20256u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[1].w[0] + 20292u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 12624u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F34E4u); st32((c.r[1].w[0] + 20272u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x002F34E4u) [[unlikely]] return; }
L_002F34E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002F3500:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002F3530; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3524u); set32(c.r[4], c.r[4].w[0] + 2368u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002F3524u) [[unlikely]] return; }
L_002F3524:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F3540; } }
    c.budget -= 1;
L_002F3530:
    set32(c.r[2], ld32((c.r[4].w[0] + 348u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F353Cu); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002F353Cu) [[unlikely]] return; }
L_002F353C:
    c.budget -= 1;
L_002F3540:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[17].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 12576u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3558u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x002F3558u) [[unlikely]] return; }
L_002F3558:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F3570:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 11840u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002F0000u < 16384u) { entry = entries_007C[(t - 0x002F0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002F3590:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 11824u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002F0000u < 16384u) { entry = entries_007C[(t - 0x002F0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002F35B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 14816u);
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F35F4u); st32((c.r[4].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x002F35F4u) [[unlikely]] return; }
L_002F35F4:
    set32(c.r[10], ld32((c.r[17].w[0] + 176u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[9], c.r[9].w[0] - 27856u);
    set32(c.r[8], 0u + 31u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], c.r[6].w[0] - 11900u);
    set32(c.r[5], c.r[5].w[0] - 11896u);
    set32(c.r[3], c.r[3].w[0] - 11892u);
    st32((c.r[16].w[0]), c.r[10].w[0]);
    set32(c.r[2], c.r[2].w[0] - 11888u);
    st32((c.r[17].w[0] + 24u), c.r[9].w[0]);
    set32(c.r[7], 0u + 135u);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(0u));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 14u)));
    set32(c.r[8], ld32((c.r[1].w[0] - 11904u)));
    set32(c.r[9], c.r[9].w[0] << 3);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 14u)));
    set32(c.r[8], ld32((c.r[1].w[0] - 11904u)));
    set32(c.r[9], c.r[9].w[0] << 3);
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    st32((c.r[16].w[0] + 24u), 0u);
    st16((c.r[16].w[0] + 30u), static_cast<std::uint16_t>(0u));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 30u)));
    set32(c.r[8], ld32((c.r[6].w[0])));
    set32(c.r[9], c.r[9].w[0] << 3);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[8].w[0]));
    set32(c.r[8], ld32((c.r[6].w[0])));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 30u)));
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    st32((c.r[16].w[0] + 40u), 0u);
    st16((c.r[16].w[0] + 46u), static_cast<std::uint16_t>(0u));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 46u)));
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[8], c.r[8].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 46u)));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[16].w[0] + 52u), c.f[0]);
    st32((c.r[16].w[0] + 56u), 0u);
    st16((c.r[16].w[0] + 62u), static_cast<std::uint16_t>(0u));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 62u)));
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    st16((c.r[16].w[0] + 60u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 62u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[16].w[0] + 68u), c.f[0]);
    st32((c.r[16].w[0] + 72u), 0u);
    st16((c.r[16].w[0] + 78u), static_cast<std::uint16_t>(0u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 78u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[16].w[0] + 76u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 78u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 84u), c.f[0]);
    st32((c.r[16].w[0] + 88u), 0u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st32((c.r[1].w[0] + 9880u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 95;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3770u); st32((c.r[1].w[0] + 9884u), 0u);  if (depth < kMaxDepth) unit_007C(c, 371u, depth + 1u); else { c.pc = 0x002F3790u; return; } if (c.pc != 0x002F3770u) [[unlikely]] return; }
L_002F3770:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F3790:
    set32(c.r[7], c.r[4].w[0] + 304u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 11904u);
    set32(c.r[10], 0u + 1u);
    c.budget -= 6;
L_002F37A8:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[8].sd[0] <= 0;  if (t) { goto L_002F3880; } }
    set32(c.r[8], c.r[8].w[0] - 1u);
    st16((c.r[5].w[0] + 12u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[8].sd[0] > 0;  if (t) { goto L_002F3870; } }
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 14u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    st16((c.r[5].w[0] + 14u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 14u)));
    set32(c.r[11], ld32((c.r[3].w[0])));
    set32(c.r[9], c.r[8].w[0] - 1u);
    set32(c.r[8], c.r[8].w[0] << 3);
    set32(c.r[9], c.r[9].w[0] << 3);
    set32(c.r[12], c.r[11].w[0] + c.r[8].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0])));
    st16((c.r[5].w[0] + 12u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 12u)));
    c.budget -= 14;
    { const bool t = c.r[8].sd[0] <= 0; set32(c.r[9], c.r[11].w[0] + c.r[9].w[0]);  if (t) { goto L_002F3838; } }
    c.f[0] = ld32((c.r[9].w[0] + 4u));
    st32((c.r[5].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0] + 4u));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0])));
    c.f[1] = ld32((c.r[12].w[0] + 4u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.r[8].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 24u), c.f[0]);  if (t) { goto L_002F3880; } }
L_002F3838:
    set32(c.r[8], c.r[10].w[0] << (c.r[6].w[0] & 31u));
    c.r[9].d[0] = ~(c.r[8].d[0] | 0ull);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 8u)));
    c.r[9].d[0] = c.r[9].d[0] << 48;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);
    c.r[8].d[0] = c.r[8].d[0] & c.r[9].d[0];
    st16((c.r[7].w[0] + 8u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_002F3880; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002F39B8; } }
L_002F3870:
    c.f[1] = ld32((c.r[5].w[0] + 24u));
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 20u), c.f[0]);
    c.budget -= 4;
L_002F3880:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[8].d[0] = c.r[6].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F37A8u | kUnwind; return; } goto L_002F37A8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002F3970; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002F3940; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002F38C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F39B0; } }
    c.budget -= 1;
L_002F38C0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002F3900; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 330u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 2600u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002F39B0; } }
L_002F3900:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.f[2] = ld32((c.r[1].w[0] + 9880u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[5].d[0] = c.r[5].d[0] | 55050ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[5].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[1].w[0] + 9880u), c.f[1]);  if (t) { goto L_002F39B0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 9880u), 0u);  if (t) { goto L_002F39B0; } }
L_002F3940:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002F39B0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002F39B0; } }
    c.budget -= 1;
L_002F3970:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.f[2] = ld32((c.r[1].w[0] + 9880u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[5].d[0] = c.r[5].d[0] | 55050ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[5].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[1].w[0] + 9880u), c.f[1]);  if (t) { goto L_002F39B0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[1].w[0] + 9880u), 0u);
    c.budget -= 3;
L_002F39B0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002F39B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F39C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002F39D0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_002F39E0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[3], 0u + 16u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[20], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[22], c.r[21].w[0] + 304u);  if (t) { goto L_002F3A38; } }
L_002F3A1C:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F3A1Cu | kUnwind; return; } goto L_002F3A1C; } }
L_002F3A38:
    set32(c.r[3], ld32((c.r[21].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);  if (t) { goto L_002F3B00; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] - 12256u);
    c.r[16].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
L_002F3A58:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 8u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[19].w[0] & 31u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F3AE8; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 184u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F3AD0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3AA0u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002F3AA0u) [[unlikely]] return; }
L_002F3AA0:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3AACu); set32(c.r[5], c.r[21].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x002F3AACu) [[unlikely]] return; }
L_002F3AAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3AB4u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002F3AB4u) [[unlikely]] return; }
L_002F3AB4:
    c.f[13] = ld32((c.r[21].w[0] + 36u));
    c.f[14] = ld32((c.r[21].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3AC4u); c.f[12] = ld32((c.r[21].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002F3AC4u) [[unlikely]] return; }
L_002F3AC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3ACCu); set32(c.r[4], c.r[21].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002F3ACCu) [[unlikely]] return; }
L_002F3ACC:
    c.budget -= 1;
L_002F3AD0:
    set32(c.r[2], ld32((c.r[21].w[0] + 184u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3AE4u); c.f[12] = ld32((c.r[16].w[0] + 20u));  if (depth < kMaxDepth) unit_0068(c, 82u, depth + 1u); else { c.pc = 0x002A23A0u; return; } if (c.pc != 0x002F3AE4u) [[unlikely]] return; }
L_002F3AE4:
    c.budget -= 1;
L_002F3AE8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F3A58u | kUnwind; return; } goto L_002F3A58; } }
L_002F3B00:
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
L_002F3B30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 11808u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002F0000u < 16384u) { entry = entries_007C[(t - 0x002F0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002F3B50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 16016u);
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3B94u); st32((c.r[4].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x002F3B94u) [[unlikely]] return; }
L_002F3B94:
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 27856u);
    set32(c.r[2], 0u + 480u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] - 11884u);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = 0u;
    c.budget -= 11;
L_002F3BC0:
    st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(0u));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 14u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 14u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[16].w[0] + 20u), c.f[1]);
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F3BC0u | kUnwind; return; } goto L_002F3BC0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x446E0000u);
    st32((c.r[17].w[0] + 32u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[3].d[0] = c.r[2].d[0] | 16384ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 36u), c.f[0]);
    set32(c.r[2], 0u + 250u);
    st32((c.r[17].w[0] + 40u), c.r[3].w[0]);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[1].w[0] + 9872u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3C48u); st32((c.r[1].w[0] + 9876u), c.f[0]);  if (depth < kMaxDepth) unit_007C(c, 389u, depth + 1u); else { c.pc = 0x002F3C60u; return; } if (c.pc != 0x002F3C48u) [[unlikely]] return; }
L_002F3C48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F3C60:
    set32(c.r[7], c.r[4].w[0] + 304u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 11884u);
    set32(c.r[10], 0u + 1u);
    c.budget -= 6;
L_002F3C78:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[8].sd[0] <= 0;  if (t) { goto L_002F3D50; } }
    set32(c.r[8], c.r[8].w[0] - 1u);
    st16((c.r[5].w[0] + 12u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[8].sd[0] > 0;  if (t) { goto L_002F3D40; } }
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 14u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    st16((c.r[5].w[0] + 14u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 14u)));
    set32(c.r[11], ld32((c.r[3].w[0])));
    set32(c.r[9], c.r[8].w[0] - 1u);
    set32(c.r[8], c.r[8].w[0] << 3);
    set32(c.r[9], c.r[9].w[0] << 3);
    set32(c.r[12], c.r[11].w[0] + c.r[8].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0])));
    st16((c.r[5].w[0] + 12u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 12u)));
    c.budget -= 14;
    { const bool t = c.r[8].sd[0] <= 0; set32(c.r[9], c.r[11].w[0] + c.r[9].w[0]);  if (t) { goto L_002F3D08; } }
    c.f[0] = ld32((c.r[9].w[0] + 4u));
    st32((c.r[5].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0] + 4u));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0])));
    c.f[1] = ld32((c.r[12].w[0] + 4u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.r[8].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 12;
L_002F3D00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 24u), c.f[0]);  if (t) { goto L_002F3D50; } }
L_002F3D08:
    set32(c.r[8], c.r[10].w[0] << (c.r[6].w[0] & 31u));
    c.r[9].d[0] = ~(c.r[8].d[0] | 0ull);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 8u)));
    c.r[9].d[0] = c.r[9].d[0] << 48;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);
    c.r[8].d[0] = c.r[8].d[0] & c.r[9].d[0];
    st16((c.r[7].w[0] + 8u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_002F3D50; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002F3E88; } }
L_002F3D40:
    c.f[1] = ld32((c.r[5].w[0] + 24u));
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 20u), c.f[0]);
    c.budget -= 4;
L_002F3D50:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[8].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F3C78u | kUnwind; return; } goto L_002F3C78; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002F3E40; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002F3E10; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002F3D90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F3E80; } }
    c.budget -= 1;
L_002F3D90:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002F3DD0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 330u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 2600u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002F3E80; } }
L_002F3DD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.f[2] = ld32((c.r[1].w[0] + 9872u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3CF50000u);
    c.r[5].d[0] = c.r[5].d[0] | 49807ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[5].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[1].w[0] + 9872u), c.f[1]);  if (t) { goto L_002F3E80; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 9872u), 0u);  if (t) { goto L_002F3E80; } }
L_002F3E10:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002F3E80; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002F3E80; } }
    c.budget -= 1;
L_002F3E40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.f[2] = ld32((c.r[1].w[0] + 9872u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3CF50000u);
    c.r[5].d[0] = c.r[5].d[0] | 49807ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[5].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[1].w[0] + 9872u), c.f[1]);  if (t) { goto L_002F3E80; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    st32((c.r[1].w[0] + 9872u), 0u);
    c.budget -= 3;
L_002F3E80:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002F3E88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F3E90:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[3], 0u + 16u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_002F3EE4; } }
L_002F3EC8:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F3EC8u | kUnwind; return; } goto L_002F3EC8; } }
L_002F3EE4:
    set32(c.r[3], ld32((c.r[17].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].sd[0] = static_cast<std::int32_t>(0x005E0000u);  if (t) { goto L_002F3FB0; } }
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[21], 0u + 5u);
    set32(c.r[20], 0u + 20u);
    set32(c.r[19], c.r[19].w[0] - 11856u);
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
L_002F3F08:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[21].w[0] & 31u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F3F90; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F3F78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3F44u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002F3F44u) [[unlikely]] return; }
L_002F3F44:
    c.f[0] = c.r[22].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[12] = ld32((c.r[17].w[0] + 32u));
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3F70u); c.f[14] = fp::add(c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002F3F70u) [[unlikely]] return; }
L_002F3F70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3F78u); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002F3F78u) [[unlikely]] return; }
L_002F3F78:
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3F8Cu); c.f[12] = ld32((c.r[18].w[0] + 20u));  if (depth < kMaxDepth) unit_0068(c, 82u, depth + 1u); else { c.pc = 0x002A23A0u; return; } if (c.pc != 0x002F3F8Cu) [[unlikely]] return; }
L_002F3F8C:
    c.budget -= 1;
L_002F3F90:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[3].d[0] = c.r[22].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + 4u);
    set32(c.r[18], c.r[18].w[0] + 16u);
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F3F08u | kUnwind; return; } goto L_002F3F08; } }
    c.budget -= 1;
L_002F3FB0:
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
L_002F3FE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 11792u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002F0000u < 16384u) { entry = entries_007C[(t - 0x002F0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
}

}
