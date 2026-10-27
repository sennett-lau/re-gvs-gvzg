#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_001F[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0,
    18, 0, 0, 19, 0, 20, 0, 0, 21, 0, 22, 0, 0, 23, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0,
    0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 35, 0,
    0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 50, 0, 51, 0, 52, 0, 53, 0, 54, 0, 55, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0,
    59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0,
    66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0,
    0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0,
    79, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0,
    0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 101, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0,
    0, 0, 105, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    110, 0, 111, 0, 112, 0, 113, 0, 114, 0, 115, 0, 116, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 141, 0, 142, 0, 143, 0, 144, 0, 145, 0, 146, 0, 0, 0,
    0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 149, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0,
    154, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 185, 0, 0, 186, 0, 187, 0, 0, 188, 0, 189, 0, 0, 190, 0, 0, 191, 0, 192,
    0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 198, 0,
    0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0,
    0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0,
    214, 0, 215, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0,
    225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241,
    0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0,
    0, 245, 0, 246, 0, 247, 0, 0, 0, 248, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0,
    0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0,
    0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 267, 0, 0, 0, 0, 268, 0, 0, 269, 0,
    270, 0, 271, 0, 0, 0, 272, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0,
    0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0,
    0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0,
    0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0,
    303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0,
    310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0,
    334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 337, 0, 0, 0, 0, 338, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 342, 0, 343, 0,
    0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0,
    0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    361, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 367,
};

void unit_001F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0017C000;
    case 2u: goto L_0017C028;
    case 3u: goto L_0017C0B8;
    case 4u: goto L_0017C0C4;
    case 5u: goto L_0017C0C8;
    case 6u: goto L_0017C0F0;
    case 7u: goto L_0017C120;
    case 8u: goto L_0017C1B0;
    case 9u: goto L_0017C1D0;
    case 10u: goto L_0017C200;
    case 11u: goto L_0017C254;
    case 12u: goto L_0017C25C;
    case 13u: goto L_0017C264;
    case 14u: goto L_0017C28C;
    case 15u: goto L_0017C2AC;
    case 16u: goto L_0017C2F0;
    case 17u: goto L_0017C2F8;
    case 18u: goto L_0017C300;
    case 19u: goto L_0017C30C;
    case 20u: goto L_0017C314;
    case 21u: goto L_0017C320;
    case 22u: goto L_0017C328;
    case 23u: goto L_0017C334;
    case 24u: goto L_0017C340;
    case 25u: goto L_0017C348;
    case 26u: goto L_0017C36C;
    case 27u: goto L_0017C3E8;
    case 28u: goto L_0017C3F8;
    case 29u: goto L_0017C408;
    case 30u: goto L_0017C448;
    case 31u: goto L_0017C478;
    case 32u: goto L_0017C4A8;
    case 33u: goto L_0017C4D8;
    case 34u: goto L_0017C4F0;
    case 35u: goto L_0017C4F8;
    case 36u: goto L_0017C510;
    case 37u: goto L_0017C530;
    case 38u: goto L_0017C558;
    case 39u: goto L_0017C604;
    case 40u: goto L_0017C620;
    case 41u: goto L_0017C62C;
    case 42u: goto L_0017C63C;
    case 43u: goto L_0017C668;
    case 44u: goto L_0017C670;
    case 45u: goto L_0017C690;
    case 46u: goto L_0017C6B8;
    case 47u: goto L_0017C6C8;
    case 48u: goto L_0017C6DC;
    case 49u: goto L_0017C728;
    case 50u: goto L_0017C78C;
    case 51u: goto L_0017C794;
    case 52u: goto L_0017C79C;
    case 53u: goto L_0017C7A4;
    case 54u: goto L_0017C7AC;
    case 55u: goto L_0017C7B4;
    case 56u: goto L_0017C7BC;
    case 57u: goto L_0017C7C4;
    case 58u: goto L_0017C7F0;
    case 59u: goto L_0017C800;
    case 60u: goto L_0017C810;
    case 61u: goto L_0017C840;
    case 62u: goto L_0017C898;
    case 63u: goto L_0017C8A0;
    case 64u: goto L_0017C8A8;
    case 65u: goto L_0017C8EC;
    case 66u: goto L_0017C900;
    case 67u: goto L_0017C918;
    case 68u: goto L_0017C93C;
    case 69u: goto L_0017C94C;
    case 70u: goto L_0017C954;
    case 71u: goto L_0017C978;
    case 72u: goto L_0017C9F8;
    case 73u: goto L_0017CA08;
    case 74u: goto L_0017CA18;
    case 75u: goto L_0017CA58;
    case 76u: goto L_0017CA88;
    case 77u: goto L_0017CAB8;
    case 78u: goto L_0017CAE8;
    case 79u: goto L_0017CB00;
    case 80u: goto L_0017CB08;
    case 81u: goto L_0017CB20;
    case 82u: goto L_0017CB50;
    case 83u: goto L_0017CB80;
    case 84u: goto L_0017CBB0;
    case 85u: goto L_0017CC0C;
    case 86u: goto L_0017CC30;
    case 87u: goto L_0017CC38;
    case 88u: goto L_0017CC40;
    case 89u: goto L_0017CC68;
    case 90u: goto L_0017CC70;
    case 91u: goto L_0017CCB4;
    case 92u: goto L_0017CCC0;
    case 93u: goto L_0017CCCC;
    case 94u: goto L_0017CCD8;
    case 95u: goto L_0017CCF8;
    case 96u: goto L_0017CD18;
    case 97u: goto L_0017CD38;
    case 98u: goto L_0017CD40;
    case 99u: goto L_0017CD58;
    case 100u: goto L_0017CD60;
    case 101u: goto L_0017CD78;
    case 102u: goto L_0017CDA0;
    case 103u: goto L_0017CDC0;
    case 104u: goto L_0017CE6C;
    case 105u: goto L_0017CE88;
    case 106u: goto L_0017CE94;
    case 107u: goto L_0017CEA4;
    case 108u: goto L_0017CED0;
    case 109u: goto L_0017CED8;
    case 110u: goto L_0017CF00;
    case 111u: goto L_0017CF08;
    case 112u: goto L_0017CF10;
    case 113u: goto L_0017CF18;
    case 114u: goto L_0017CF20;
    case 115u: goto L_0017CF28;
    case 116u: goto L_0017CF30;
    case 117u: goto L_0017CF38;
    case 118u: goto L_0017CF50;
    case 119u: goto L_0017CF80;
    case 120u: goto L_0017CFD4;
    case 121u: goto L_0017CFDC;
    case 122u: goto L_0017CFE4;
    case 123u: goto L_0017D00C;
    case 124u: goto L_0017D034;
    case 125u: goto L_0017D070;
    case 126u: goto L_0017D094;
    case 127u: goto L_0017D09C;
    case 128u: goto L_0017D0AC;
    case 129u: goto L_0017D0BC;
    case 130u: goto L_0017D0FC;
    case 131u: goto L_0017D128;
    case 132u: goto L_0017D158;
    case 133u: goto L_0017D188;
    case 134u: goto L_0017D1A0;
    case 135u: goto L_0017D1A8;
    case 136u: goto L_0017D1C0;
    case 137u: goto L_0017D1F0;
    case 138u: goto L_0017D284;
    case 139u: goto L_0017D2B8;
    case 140u: goto L_0017D2C0;
    case 141u: goto L_0017D2C8;
    case 142u: goto L_0017D2D0;
    case 143u: goto L_0017D2D8;
    case 144u: goto L_0017D2E0;
    case 145u: goto L_0017D2E8;
    case 146u: goto L_0017D2F0;
    case 147u: goto L_0017D310;
    case 148u: goto L_0017D340;
    case 149u: goto L_0017D390;
    case 150u: goto L_0017D398;
    case 151u: goto L_0017D3A0;
    case 152u: goto L_0017D3E0;
    case 153u: goto L_0017D3F4;
    case 154u: goto L_0017D400;
    case 155u: goto L_0017D410;
    case 156u: goto L_0017D418;
    case 157u: goto L_0017D43C;
    case 158u: goto L_0017D444;
    case 159u: goto L_0017D454;
    case 160u: goto L_0017D464;
    case 161u: goto L_0017D4A4;
    case 162u: goto L_0017D4D0;
    case 163u: goto L_0017D500;
    case 164u: goto L_0017D530;
    case 165u: goto L_0017D548;
    case 166u: goto L_0017D550;
    case 167u: goto L_0017D568;
    case 168u: goto L_0017D590;
    case 169u: goto L_0017D5B8;
    case 170u: goto L_0017D5C4;
    case 171u: goto L_0017D5E0;
    case 172u: goto L_0017D60C;
    case 173u: goto L_0017D680;
    case 174u: goto L_0017D6C0;
    case 175u: goto L_0017D6EC;
    case 176u: goto L_0017D760;
    case 177u: goto L_0017D7A0;
    case 178u: goto L_0017D808;
    case 179u: goto L_0017D818;
    case 180u: goto L_0017D83C;
    case 181u: goto L_0017D898;
    case 182u: goto L_0017D8B0;
    case 183u: goto L_0017D8EC;
    case 184u: goto L_0017D92C;
    case 185u: goto L_0017D934;
    case 186u: goto L_0017D940;
    case 187u: goto L_0017D948;
    case 188u: goto L_0017D954;
    case 189u: goto L_0017D95C;
    case 190u: goto L_0017D968;
    case 191u: goto L_0017D974;
    case 192u: goto L_0017D97C;
    case 193u: goto L_0017D9A0;
    case 194u: goto L_0017D9C4;
    case 195u: goto L_0017DA48;
    case 196u: goto L_0017DA58;
    case 197u: goto L_0017DA68;
    case 198u: goto L_0017DA78;
    case 199u: goto L_0017DA98;
    case 200u: goto L_0017DAB8;
    case 201u: goto L_0017DADC;
    case 202u: goto L_0017DAF0;
    case 203u: goto L_0017DB08;
    case 204u: goto L_0017DBD0;
    case 205u: goto L_0017DBE8;
    case 206u: goto L_0017DBF4;
    case 207u: goto L_0017DC38;
    case 208u: goto L_0017DC48;
    case 209u: goto L_0017DC54;
    case 210u: goto L_0017DCA0;
    case 211u: goto L_0017DCB0;
    case 212u: goto L_0017DCE0;
    case 213u: goto L_0017DCF8;
    case 214u: goto L_0017DD00;
    case 215u: goto L_0017DD08;
    case 216u: goto L_0017DD10;
    case 217u: goto L_0017DD18;
    case 218u: goto L_0017DD44;
    case 219u: goto L_0017DD80;
    case 220u: goto L_0017DDBC;
    case 221u: goto L_0017DE24;
    case 222u: goto L_0017DE38;
    case 223u: goto L_0017DECC;
    case 224u: goto L_0017DEE0;
    case 225u: goto L_0017DF00;
    case 226u: goto L_0017DF44;
    case 227u: goto L_0017DF4C;
    case 228u: goto L_0017DF90;
    case 229u: goto L_0017DFC0;
    case 230u: goto L_0017DFD0;
    case 231u: goto L_0017DFE0;
    case 232u: goto L_0017E048;
    case 233u: goto L_0017E118;
    case 234u: goto L_0017E198;
    case 235u: goto L_0017E290;
    case 236u: goto L_0017E2D0;
    case 237u: goto L_0017E348;
    case 238u: goto L_0017E368;
    case 239u: goto L_0017E3A0;
    case 240u: goto L_0017E41C;
    case 241u: goto L_0017E57C;
    case 242u: goto L_0017E58C;
    case 243u: goto L_0017E640;
    case 244u: goto L_0017E678;
    case 245u: goto L_0017E684;
    case 246u: goto L_0017E68C;
    case 247u: goto L_0017E694;
    case 248u: goto L_0017E6A4;
    case 249u: goto L_0017E6AC;
    case 250u: goto L_0017E764;
    case 251u: goto L_0017E77C;
    case 252u: goto L_0017E7B0;
    case 253u: goto L_0017E810;
    case 254u: goto L_0017E84C;
    case 255u: goto L_0017E878;
    case 256u: goto L_0017E884;
    case 257u: goto L_0017E890;
    case 258u: goto L_0017E8B4;
    case 259u: goto L_0017E8D0;
    case 260u: goto L_0017E8D8;
    case 261u: goto L_0017E8F8;
    case 262u: goto L_0017E90C;
    case 263u: goto L_0017E920;
    case 264u: goto L_0017E928;
    case 265u: goto L_0017E944;
    case 266u: goto L_0017E950;
    case 267u: goto L_0017E958;
    case 268u: goto L_0017E96C;
    case 269u: goto L_0017E978;
    case 270u: goto L_0017E980;
    case 271u: goto L_0017E988;
    case 272u: goto L_0017E998;
    case 273u: goto L_0017E9A0;
    case 274u: goto L_0017E9B0;
    case 275u: goto L_0017E9CC;
    case 276u: goto L_0017E9D4;
    case 277u: goto L_0017E9EC;
    case 278u: goto L_0017EA04;
    case 279u: goto L_0017EA28;
    case 280u: goto L_0017EA80;
    case 281u: goto L_0017EAB0;
    case 282u: goto L_0017EAB8;
    case 283u: goto L_0017EAE0;
    case 284u: goto L_0017EB30;
    case 285u: goto L_0017EB44;
    case 286u: goto L_0017EB80;
    case 287u: goto L_0017EBA8;
    case 288u: goto L_0017EBF0;
    case 289u: goto L_0017EC0C;
    case 290u: goto L_0017EC30;
    case 291u: goto L_0017EC84;
    case 292u: goto L_0017ECB0;
    case 293u: goto L_0017ECD0;
    case 294u: goto L_0017ECEC;
    case 295u: goto L_0017ED08;
    case 296u: goto L_0017EE08;
    case 297u: goto L_0017EE50;
    case 298u: goto L_0017EE78;
    case 299u: goto L_0017EEE0;
    case 300u: goto L_0017EF14;
    case 301u: goto L_0017EF30;
    case 302u: goto L_0017EF64;
    case 303u: goto L_0017EF80;
    case 304u: goto L_0017EFB4;
    case 305u: goto L_0017EFD0;
    case 306u: goto L_0017F00C;
    case 307u: goto L_0017F024;
    case 308u: goto L_0017F040;
    case 309u: goto L_0017F060;
    case 310u: goto L_0017F080;
    case 311u: goto L_0017F090;
    case 312u: goto L_0017F0B0;
    case 313u: goto L_0017F0C8;
    case 314u: goto L_0017F110;
    case 315u: goto L_0017F120;
    case 316u: goto L_0017F130;
    case 317u: goto L_0017F19C;
    case 318u: goto L_0017F1F8;
    case 319u: goto L_0017F294;
    case 320u: goto L_0017F2C0;
    case 321u: goto L_0017F2F0;
    case 322u: goto L_0017F340;
    case 323u: goto L_0017F36C;
    case 324u: goto L_0017F3C0;
    case 325u: goto L_0017F3E0;
    case 326u: goto L_0017F438;
    case 327u: goto L_0017F444;
    case 328u: goto L_0017F458;
    case 329u: goto L_0017F470;
    case 330u: goto L_0017F570;
    case 331u: goto L_0017F5A8;
    case 332u: goto L_0017F5B8;
    case 333u: goto L_0017F660;
    case 334u: goto L_0017F680;
    case 335u: goto L_0017F738;
    case 336u: goto L_0017F758;
    case 337u: goto L_0017F760;
    case 338u: goto L_0017F774;
    case 339u: goto L_0017F7A8;
    case 340u: goto L_0017F7C0;
    case 341u: goto L_0017F9E8;
    case 342u: goto L_0017F9F0;
    case 343u: goto L_0017F9F8;
    case 344u: goto L_0017FA10;
    case 345u: goto L_0017FA20;
    case 346u: goto L_0017FA30;
    case 347u: goto L_0017FA94;
    case 348u: goto L_0017FB90;
    case 349u: goto L_0017FBBC;
    case 350u: goto L_0017FBD8;
    case 351u: goto L_0017FC40;
    case 352u: goto L_0017FC6C;
    case 353u: goto L_0017FCB0;
    case 354u: goto L_0017FCD8;
    case 355u: goto L_0017FD24;
    case 356u: goto L_0017FD40;
    case 357u: goto L_0017FD60;
    case 358u: goto L_0017FD74;
    case 359u: goto L_0017FD90;
    case 360u: goto L_0017FDCC;
    case 361u: goto L_0017FE00;
    case 362u: goto L_0017FE10;
    case 363u: goto L_0017FEA8;
    case 364u: goto L_0017FEC0;
    case 365u: goto L_0017FF48;
    case 366u: goto L_0017FFF0;
    case 367u: goto L_0017FFFC;
    default: bad_entry(c, 0x0017C000u); return;
    }
L_0017C000:
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[1].w[0] + 20252u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 68u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] - 35u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C028u); st32((c.r[1].w[0] + 20272u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x0017C028u) [[unlikely]] return; }
L_0017C028:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[2].w[0]);
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    st32((c.r[1].w[0] + 20288u), 0u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[18].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 23;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0017C094; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 32669u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0017C0B0; } }
L_0017C094:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[28].w[0] - 32669u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_0017C0B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C0B8u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0017C0B8u) [[unlikely]] return; }
L_0017C0B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C0C4u); set32(c.r[4], c.r[4].w[0] + 20224u);  if (depth < kMaxDepth) unit_0067(c, 27u, depth + 1u); else { c.pc = 0x0029C7C0u; return; } if (c.pc != 0x0017C0C4u) [[unlikely]] return; }
L_0017C0C4:
    c.budget -= 1;
L_0017C0C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_0017C0F0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C120u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0017C120u) [[unlikely]] return; }
L_0017C120:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017C130; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0017C190; } }
L_0017C130:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[7], 0u + 19u);
    set32(c.r[6], 0u + 24u);
    set32(c.r[5], c.r[5].w[0] - 10864u);
    set32(c.r[3], c.r[3].w[0] - 15952u);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 24u), c.r[18].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 184u)));
    st32((c.r[2].w[0] + 184u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 188u), c.r[3].w[0]);
    c.budget -= 24;
L_0017C190:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0017C1B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], c.r[2].w[0] + 10464u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0017C000u < 16384u) { entry = entries_001F[(t - 0x0017C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0017C1D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], c.r[2].w[0] + 10496u);
    set32(c.r[5], c.r[4].w[0] + 304u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0017C000u < 16384u) { entry = entries_001F[(t - 0x0017C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0017C200:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[5].w[0] + 92u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 88u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 96u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C254u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0017C254u) [[unlikely]] return; }
L_0017C254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C25Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0017C25Cu) [[unlikely]] return; }
L_0017C25C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C264u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x0017C264u) [[unlikely]] return; }
L_0017C264:
    c.f[0] = ld32((c.r[16].w[0] + 2096u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2100u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2104u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C28Cu); st32((c.r[29].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0017C28Cu) [[unlikely]] return; }
L_0017C28C:
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C2ACu); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0017C2ACu) [[unlikely]] return; }
L_0017C2AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017C340; } }
    c.f[0] = ld32((c.r[16].w[0] + 2736u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2740u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2744u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C2F0u); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0017C2F0u) [[unlikely]] return; }
L_0017C2F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C2F8u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0017C2F8u) [[unlikely]] return; }
L_0017C2F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C300u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017C300u) [[unlikely]] return; }
L_0017C300:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C30Cu); c.r[4].d[0] = c.r[2].d[0] & 511ull;  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0017C30Cu) [[unlikely]] return; }
L_0017C30C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C314u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017C314u) [[unlikely]] return; }
L_0017C314:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C320u); c.r[4].d[0] = c.r[2].d[0] & 511ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0017C320u) [[unlikely]] return; }
L_0017C320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C328u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017C328u) [[unlikely]] return; }
L_0017C328:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C334u); c.r[4].d[0] = c.r[2].d[0] & 511ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0017C334u) [[unlikely]] return; }
L_0017C334:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C340u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0017C340u) [[unlikely]] return; }
L_0017C340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C348u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017C348u) [[unlikely]] return; }
L_0017C348:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 10432u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C36Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x0017C36Cu) [[unlikely]] return; }
L_0017C36C:
    st32((c.r[18].w[0] + 64u), 0u);
    c.f[0] = 0u;
    st32((c.r[18].w[0] + 72u), 0u);
    c.f[1] = ld32((c.r[18].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F730000u);  if (t) { goto L_0017C3A8; } }
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 68u), c.f[0]);  if (t) { goto L_0017C3B8; } }
L_0017C3A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBC130000u);
    c.r[2].d[0] = c.r[2].d[0] | 29888ull;
    st32((c.r[18].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 4;
L_0017C3B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBC130000u);
    c.f[1] = ld32((c.r[18].w[0] + 68u));
    c.r[2].d[0] = c.r[2].d[0] | 29888ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0017C3E0; } }
    st32((c.r[18].w[0] + 68u), c.f[0]);
    c.budget -= 2;
L_0017C3E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C3E8u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017C3E8u) [[unlikely]] return; }
L_0017C3E8:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C3F8u); st32((c.r[17].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017C3F8u) [[unlikely]] return; }
L_0017C3F8:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C408u); st32((c.r[17].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017C408u) [[unlikely]] return; }
L_0017C408:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C448u); st32((c.r[17].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017C448u) [[unlikely]] return; }
L_0017C448:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017C470; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 7;
L_0017C470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C478u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017C478u) [[unlikely]] return; }
L_0017C478:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017C4A0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 7;
L_0017C4A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C4A8u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017C4A8u) [[unlikely]] return; }
L_0017C4A8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017C4D0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 7;
L_0017C4D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C4D8u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017C4D8u) [[unlikely]] return; }
L_0017C4D8:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0017C4F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C4F0u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001F(c, 171u, depth + 1u); else { c.pc = 0x0017D5E0u; return; } if (c.pc != 0x0017C4F0u) [[unlikely]] return; }
L_0017C4F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C4F8u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017C4F8u) [[unlikely]] return; }
L_0017C4F8:
    c.r[3].d[0] = c.r[2].d[0] & 15ull;
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0017C510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C510u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0020(c, 52u, depth + 1u); else { c.pc = 0x001803C0u; return; } if (c.pc != 0x0017C510u) [[unlikely]] return; }
L_0017C510:
    set32(c.r[3], 0u + 2u);
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0017C530:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C558u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x0017C558u) [[unlikely]] return; }
L_0017C558:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);  if (t) { goto L_0017C570; } }
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_0017C578; } }
    c.budget -= 1;
L_0017C570:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_0017C578:
    c.f[1] = ld32((c.r[16].w[0] + 96u));
    c.f[0] = ld32((c.r[16].w[0] + 92u));
    c.f[3] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 92u), c.f[0]);  if (t) { goto L_0017C5A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0017C7C8; } }
    c.budget -= 1;
L_0017C5A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017C5E0; } }
    c.f[1] = ld32((c.r[16].w[0] + 96u));
    c.f[0] = ld32((c.r[16].w[0] + 88u));
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 88u), c.f[0]);  if (t) { goto L_0017C5E0; } }
    st32((c.r[16].w[0] + 88u), c.f[3]);
    c.budget -= 1;
L_0017C5E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);  if (t) { goto L_0017C610; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C604u); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0017C604u) [[unlikely]] return; }
L_0017C604:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017C620; } }
    c.budget -= 1;
L_0017C610:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[12] = ld32((c.r[16].w[0] + 96u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C620u); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0017C620u) [[unlikely]] return; }
L_0017C620:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C62Cu); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0017C62Cu) [[unlikely]] return; }
L_0017C62C:
    c.f[12] = ld32((c.r[16].w[0] + 96u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C63Cu); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0017C63Cu) [[unlikely]] return; }
L_0017C63C:
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[17].w[0] + 128u), c.f[3]);
    st32((c.r[17].w[0] + 132u), c.f[2]);
    st32((c.r[17].w[0] + 136u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C668u); st32((c.r[17].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0017C668u) [[unlikely]] return; }
L_0017C668:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C670u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x0017C670u) [[unlikely]] return; }
L_0017C670:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[20] = c.f[0];  if (t) { goto L_0017C758; } }
    set32(c.r[18], c.r[29].w[0] + 84u);
    set32(c.r[4], c.r[17].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C690u); st32((c.r[18].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x0017C690u) [[unlikely]] return; }
L_0017C690:
    c.f[1] = fp::sub(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0017C710; } }
    c.f[13] = ld32((c.r[17].w[0] + 56u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C6B8u); c.f[12] = ld32((c.r[17].w[0] + 48u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0017C6B8u) [[unlikely]] return; }
L_0017C6B8:
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C6C8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x0017C6C8u) [[unlikely]] return; }
L_0017C6C8:
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C6DCu); st32((c.r[17].w[0] + 48u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x0017C6DCu) [[unlikely]] return; }
L_0017C6DC:
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 56u), c.f[0]);
    c.f[3] = ld32((c.r[17].w[0] + 128u));
    c.f[2] = ld32((c.r[17].w[0] + 132u));
    c.f[1] = ld32((c.r[17].w[0] + 136u));
    c.f[0] = ld32((c.r[17].w[0] + 140u));
    st32((c.r[17].w[0] + 32u), c.f[3]);
    st32((c.r[17].w[0] + 36u), c.f[2]);
    st32((c.r[17].w[0] + 40u), c.f[1]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 44u), c.f[0]);  if (t) { goto L_0017C740; } }
    c.budget -= 1;
L_0017C710:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C728u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0017C728u) [[unlikely]] return; }
L_0017C728:
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.budget -= 6;
L_0017C740:
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    c.budget -= 6;
L_0017C758:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C78Cu); st32((c.r[16].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0017C78Cu) [[unlikely]] return; }
L_0017C78C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C794u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x0017C794u) [[unlikely]] return; }
L_0017C794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C79Cu); set32(c.r[4], ld32((c.r[16].w[0] + 72u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0017C79Cu) [[unlikely]] return; }
L_0017C79C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C7A4u); set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0017C7A4u) [[unlikely]] return; }
L_0017C7A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C7ACu); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0017C7ACu) [[unlikely]] return; }
L_0017C7AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C7B4u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x0017C7B4u) [[unlikely]] return; }
L_0017C7B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C7BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0017C7BCu) [[unlikely]] return; }
L_0017C7BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C7C4u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0017C7C4u) [[unlikely]] return; }
L_0017C7C4:
    c.budget -= 1;
L_0017C7C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0017C7F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0017C800:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_0017C810:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], c.r[2].w[0] + 10512u);
    set32(c.r[5], c.r[4].w[0] + 304u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0017C000u < 16384u) { entry = entries_001F[(t - 0x0017C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0017C840:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[5].w[0] + 92u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 88u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 96u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C898u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0017C898u) [[unlikely]] return; }
L_0017C898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C8A0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0017C8A0u) [[unlikely]] return; }
L_0017C8A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C8A8u); set32(c.r[4], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x0017C8A8u) [[unlikely]] return; }
L_0017C8A8:
    c.f[0] = ld32((c.r[17].w[0] + 2096u));
    set32(c.r[16], c.r[29].w[0] + 100u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2100u));
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2104u));
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2032u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2036u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2040u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C8ECu); st32((c.r[29].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0017C8ECu) [[unlikely]] return; }
L_0017C8EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C900u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0017C900u) [[unlikely]] return; }
L_0017C900:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[3], c.r[29].w[0] + 112u);
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C918u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0017C918u) [[unlikely]] return; }
L_0017C918:
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C93Cu); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0017C93Cu) [[unlikely]] return; }
L_0017C93C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C94Cu); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0017C94Cu) [[unlikely]] return; }
L_0017C94C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C954u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017C954u) [[unlikely]] return; }
L_0017C954:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 10448u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C978u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x0017C978u) [[unlikely]] return; }
L_0017C978:
    st32((c.r[19].w[0] + 64u), 0u);
    c.f[0] = 0u;
    st32((c.r[19].w[0] + 72u), 0u);
    c.f[1] = ld32((c.r[19].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F730000u);  if (t) { goto L_0017C9B8; } }
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 68u), c.f[0]);  if (t) { goto L_0017C9C8; } }
    c.budget -= 1;
L_0017C9B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBC130000u);
    c.r[2].d[0] = c.r[2].d[0] | 29888ull;
    st32((c.r[19].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 4;
L_0017C9C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBC130000u);
    c.f[1] = ld32((c.r[19].w[0] + 68u));
    c.r[2].d[0] = c.r[2].d[0] | 29888ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0017C9F0; } }
    st32((c.r[19].w[0] + 68u), c.f[0]);
    c.budget -= 2;
L_0017C9F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017C9F8u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017C9F8u) [[unlikely]] return; }
L_0017C9F8:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CA08u); st32((c.r[18].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017CA08u) [[unlikely]] return; }
L_0017CA08:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CA18u); st32((c.r[18].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017CA18u) [[unlikely]] return; }
L_0017CA18:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    st32((c.r[18].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[18].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CA58u); st32((c.r[18].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017CA58u) [[unlikely]] return; }
L_0017CA58:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017CA80; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[18].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[18].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 7;
L_0017CA80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CA88u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017CA88u) [[unlikely]] return; }
L_0017CA88:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017CAB0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[18].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 7;
L_0017CAB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CAB8u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017CAB8u) [[unlikely]] return; }
L_0017CAB8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017CAE0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[18].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 7;
L_0017CAE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CAE8u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017CAE8u) [[unlikely]] return; }
L_0017CAE8:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0017CB00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CB00u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001F(c, 171u, depth + 1u); else { c.pc = 0x0017D5E0u; return; } if (c.pc != 0x0017CB00u) [[unlikely]] return; }
L_0017CB00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CB08u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017CB08u) [[unlikely]] return; }
L_0017CB08:
    c.r[3].d[0] = c.r[2].d[0] & 15ull;
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0017CB20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CB20u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0020(c, 52u, depth + 1u); else { c.pc = 0x001803C0u; return; } if (c.pc != 0x0017CB20u) [[unlikely]] return; }
L_0017CB20:
    set32(c.r[3], 0u + 2u);
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0017CB50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], c.r[2].w[0] + 10528u);
    set32(c.r[5], c.r[4].w[0] + 304u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0017C000u < 16384u) { entry = entries_001F[(t - 0x0017C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0017CB80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CBB0u); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017CBB0u) [[unlikely]] return; }
L_0017CBB0:
    c.r[2].d[0] = c.r[2].d[0] & 31ull;
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0017CBC8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0017CBE0; } }
L_0017CBC8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 6;
L_0017CBE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CC0Cu);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x0017CC0Cu) [[unlikely]] return; }
L_0017CC0C:
    st32((c.r[17].w[0] + 92u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CC30u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0017CC30u) [[unlikely]] return; }
L_0017CC30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CC38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0017CC38u) [[unlikely]] return; }
L_0017CC38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CC40u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x0017CC40u) [[unlikely]] return; }
L_0017CC40:
    c.f[0] = ld32((c.r[16].w[0] + 2096u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2100u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2104u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CC68u); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0017CC68u) [[unlikely]] return; }
L_0017CC68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CC70u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x0017CC70u) [[unlikely]] return; }
L_0017CC70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0017CC98; } }
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 72u), 0u);
    c.budget -= 3;
L_0017CC98:
    st32((c.r[18].w[0] + 48u), 0u);
    st32((c.r[18].w[0] + 52u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBC130000u);
    c.r[2].d[0] = c.r[2].d[0] | 29888ull;
    st32((c.r[18].w[0] + 56u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CCB4u); st32((c.r[18].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017CCB4u) [[unlikely]] return; }
L_0017CCB4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CCC0u); st32((c.r[17].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017CCC0u) [[unlikely]] return; }
L_0017CCC0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CCCCu); st32((c.r[17].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017CCCCu) [[unlikely]] return; }
L_0017CCCC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CCD8u); st32((c.r[17].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017CCD8u) [[unlikely]] return; }
L_0017CCD8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017CCF0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 3;
L_0017CCF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CCF8u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017CCF8u) [[unlikely]] return; }
L_0017CCF8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017CD10; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 3;
L_0017CD10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CD18u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017CD18u) [[unlikely]] return; }
L_0017CD18:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017CD30; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 3;
L_0017CD30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CD38u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_001A(c, 40u, depth + 1u); else { c.pc = 0x00168580u; return; } if (c.pc != 0x0017CD38u) [[unlikely]] return; }
L_0017CD38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CD40u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017CD40u) [[unlikely]] return; }
L_0017CD40:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0017CD58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CD58u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001F(c, 171u, depth + 1u); else { c.pc = 0x0017D5E0u; return; } if (c.pc != 0x0017CD58u) [[unlikely]] return; }
L_0017CD58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CD60u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017CD60u) [[unlikely]] return; }
L_0017CD60:
    c.r[3].d[0] = c.r[2].d[0] & 15ull;
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0017CD78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CD78u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0020(c, 52u, depth + 1u); else { c.pc = 0x001803C0u; return; } if (c.pc != 0x0017CD78u) [[unlikely]] return; }
L_0017CD78:
    set32(c.r[3], 0u + 2u);
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0017CDA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CDC0u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x0017CDC0u) [[unlikely]] return; }
L_0017CDC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);  if (t) { goto L_0017CDD8; } }
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_0017CDE0; } }
    c.budget -= 1;
L_0017CDD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_0017CDE0:
    c.f[1] = ld32((c.r[16].w[0] + 96u));
    c.f[0] = ld32((c.r[16].w[0] + 92u));
    c.f[3] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 92u), c.f[0]);  if (t) { goto L_0017CE10; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0017CF38; } }
    c.budget -= 1;
L_0017CE10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017CE48; } }
    c.f[1] = ld32((c.r[16].w[0] + 96u));
    c.f[0] = ld32((c.r[16].w[0] + 88u));
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 88u), c.f[0]);  if (t) { goto L_0017CE48; } }
    st32((c.r[16].w[0] + 88u), c.f[3]);
    c.budget -= 1;
L_0017CE48:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);  if (t) { goto L_0017CE78; } }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CE6Cu); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0017CE6Cu) [[unlikely]] return; }
L_0017CE6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017CE88; } }
    c.budget -= 1;
L_0017CE78:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[12] = ld32((c.r[16].w[0] + 96u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CE88u); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0017CE88u) [[unlikely]] return; }
L_0017CE88:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CE94u); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0017CE94u) [[unlikely]] return; }
L_0017CE94:
    c.f[12] = ld32((c.r[16].w[0] + 96u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CEA4u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0017CEA4u) [[unlikely]] return; }
L_0017CEA4:
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[17].w[0] + 128u), c.f[3]);
    st32((c.r[17].w[0] + 132u), c.f[2]);
    st32((c.r[17].w[0] + 136u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CED0u); st32((c.r[17].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0017CED0u) [[unlikely]] return; }
L_0017CED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CED8u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x0017CED8u) [[unlikely]] return; }
L_0017CED8:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0017CEF8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0017CF38; } }
L_0017CEF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CF00u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0017CF00u) [[unlikely]] return; }
L_0017CF00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CF08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x0017CF08u) [[unlikely]] return; }
L_0017CF08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CF10u); set32(c.r[4], ld32((c.r[16].w[0] + 72u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0017CF10u) [[unlikely]] return; }
L_0017CF10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CF18u); set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0017CF18u) [[unlikely]] return; }
L_0017CF18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CF20u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0017CF20u) [[unlikely]] return; }
L_0017CF20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CF28u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x0017CF28u) [[unlikely]] return; }
L_0017CF28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CF30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0017CF30u) [[unlikely]] return; }
L_0017CF30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CF38u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0017CF38u) [[unlikely]] return; }
L_0017CF38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0017CF50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], c.r[2].w[0] + 10544u);
    set32(c.r[5], c.r[4].w[0] + 304u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0017C000u < 16384u) { entry = entries_001F[(t - 0x0017C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0017CF80:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42800000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[5].w[0] + 92u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 88u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CFD4u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0017CFD4u) [[unlikely]] return; }
L_0017CFD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CFDCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0017CFDCu) [[unlikely]] return; }
L_0017CFDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017CFE4u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x0017CFE4u) [[unlikely]] return; }
L_0017CFE4:
    c.f[0] = ld32((c.r[16].w[0] + 2096u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2100u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2104u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D00Cu); st32((c.r[29].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0017D00Cu) [[unlikely]] return; }
L_0017D00C:
    set32(c.r[19], c.r[29].w[0] + 84u);
    set32(c.r[16], c.r[29].w[0] + 88u);
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D034u); c.f[12] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0017D034u) [[unlikely]] return; }
L_0017D034:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017D068; } }
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 6;
L_0017D068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D070u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017D070u) [[unlikely]] return; }
L_0017D070:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 10432u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D094u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x0017D094u) [[unlikely]] return; }
L_0017D094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D09Cu);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017D09Cu) [[unlikely]] return; }
L_0017D09C:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D0ACu); st32((c.r[17].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017D0ACu) [[unlikely]] return; }
L_0017D0AC:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D0BCu); st32((c.r[17].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017D0BCu) [[unlikely]] return; }
L_0017D0BC:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D0FCu); st32((c.r[17].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017D0FCu) [[unlikely]] return; }
L_0017D0FC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017D120; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 6;
L_0017D120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D128u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017D128u) [[unlikely]] return; }
L_0017D128:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017D150; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 7;
L_0017D150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D158u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017D158u) [[unlikely]] return; }
L_0017D158:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017D180; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 7;
L_0017D180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D188u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017D188u) [[unlikely]] return; }
L_0017D188:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0017D1A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D1A0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_001F(c, 171u, depth + 1u); else { c.pc = 0x0017D5E0u; return; } if (c.pc != 0x0017D1A0u) [[unlikely]] return; }
L_0017D1A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D1A8u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017D1A8u) [[unlikely]] return; }
L_0017D1A8:
    c.r[3].d[0] = c.r[2].d[0] & 15ull;
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0017D1C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D1C0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0020(c, 52u, depth + 1u); else { c.pc = 0x001803C0u; return; } if (c.pc != 0x0017D1C0u) [[unlikely]] return; }
L_0017D1C0:
    set32(c.r[3], 0u + 2u);
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0017D1F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = c.r[3].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.f[2] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[5].w[0] + 92u));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[5].w[0] + 92u), c.f[1]);  if (t) { goto L_0017D238; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0017D2F0; } }
L_0017D238:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017D278; } }
    c.f[1] = ld32((c.r[16].w[0] + 88u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D2A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 43691ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 88u), c.f[0]);  if (t) { goto L_0017D278; } }
    st32((c.r[16].w[0] + 88u), c.f[2]);
    c.budget -= 1;
L_0017D278:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D284u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0017D284u) [[unlikely]] return; }
L_0017D284:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D2B8u); st32((c.r[16].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0017D2B8u) [[unlikely]] return; }
L_0017D2B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D2C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x0017D2C0u) [[unlikely]] return; }
L_0017D2C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D2C8u); set32(c.r[4], ld32((c.r[16].w[0] + 72u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0017D2C8u) [[unlikely]] return; }
L_0017D2C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D2D0u); set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0017D2D0u) [[unlikely]] return; }
L_0017D2D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D2D8u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0017D2D8u) [[unlikely]] return; }
L_0017D2D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D2E0u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x0017D2E0u) [[unlikely]] return; }
L_0017D2E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D2E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0017D2E8u) [[unlikely]] return; }
L_0017D2E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D2F0u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0017D2F0u) [[unlikely]] return; }
L_0017D2F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017D310:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], c.r[2].w[0] + 10560u);
    set32(c.r[5], c.r[4].w[0] + 304u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0017C000u < 16384u) { entry = entries_001F[(t - 0x0017C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0017D340:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42800000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[5].w[0] + 92u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 88u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D390u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0017D390u) [[unlikely]] return; }
L_0017D390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D398u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0017D398u) [[unlikely]] return; }
L_0017D398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D3A0u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x0017D3A0u) [[unlikely]] return; }
L_0017D3A0:
    c.f[0] = ld32((c.r[16].w[0] + 2096u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2100u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2104u));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2032u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2036u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2040u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D3E0u); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0017D3E0u) [[unlikely]] return; }
L_0017D3E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D3F4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0017D3F4u) [[unlikely]] return; }
L_0017D3F4:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D400u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0017D400u) [[unlikely]] return; }
L_0017D400:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D410u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0017D410u) [[unlikely]] return; }
L_0017D410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D418u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017D418u) [[unlikely]] return; }
L_0017D418:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 10448u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D43Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x0017D43Cu) [[unlikely]] return; }
L_0017D43C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D444u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017D444u) [[unlikely]] return; }
L_0017D444:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D454u); st32((c.r[17].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017D454u) [[unlikely]] return; }
L_0017D454:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D464u); st32((c.r[17].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017D464u) [[unlikely]] return; }
L_0017D464:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D4A4u); st32((c.r[17].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017D4A4u) [[unlikely]] return; }
L_0017D4A4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017D4C8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 6;
L_0017D4C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D4D0u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017D4D0u) [[unlikely]] return; }
L_0017D4D0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017D4F8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 7;
L_0017D4F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D500u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017D500u) [[unlikely]] return; }
L_0017D500:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017D528; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 7;
L_0017D528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D530u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017D530u) [[unlikely]] return; }
L_0017D530:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0017D548; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D548u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001F(c, 171u, depth + 1u); else { c.pc = 0x0017D5E0u; return; } if (c.pc != 0x0017D548u) [[unlikely]] return; }
L_0017D548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D550u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017D550u) [[unlikely]] return; }
L_0017D550:
    c.r[3].d[0] = c.r[2].d[0] & 15ull;
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0017D568; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D568u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0020(c, 52u, depth + 1u); else { c.pc = 0x001803C0u; return; } if (c.pc != 0x0017D568u) [[unlikely]] return; }
L_0017D568:
    set32(c.r[3], 0u + 2u);
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0017D590:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 21u)));
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0017D5C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D5B8u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0017D5B8u) [[unlikely]] return; }
L_0017D5B8:
    set32(c.r[5], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D5C4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 89u, depth + 1u); else { c.pc = 0x002A25C0u; return; } if (c.pc != 0x0017D5C4u) [[unlikely]] return; }
L_0017D5C4:
    c.budget -= 1;
L_0017D5C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017D5E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D60Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0017D60Cu) [[unlikely]] return; }
L_0017D60C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0017D620; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0017D6A8; } }
    c.budget -= 1;
L_0017D620:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], 0u + 19u);
    set32(c.r[2], 0u + 25u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[3] = ld32((c.r[18].w[0] + 32u));
    c.f[2] = ld32((c.r[18].w[0] + 36u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0] + 44u));
    st32((c.r[16].w[0] + 32u), c.f[3]);
    st32((c.r[16].w[0] + 36u), c.f[2]);
    st32((c.r[16].w[0] + 40u), c.f[1]);
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[16].w[0] + 48u), c.f[3]);
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D680u); st32((c.r[16].w[0] + 60u), c.f[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017D680u) [[unlikely]] return; }
L_0017D680:
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00180000u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] - 9040u);
    set32(c.r[3], c.r[3].w[0] - 10336u);
    st32((c.r[16].w[0] + 168u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 10;
L_0017D6A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0017D6C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D6ECu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0017D6ECu) [[unlikely]] return; }
L_0017D6EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0017D700; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0017D788; } }
    c.budget -= 1;
L_0017D700:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], 0u + 19u);
    set32(c.r[2], 0u + 25u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[3] = ld32((c.r[18].w[0]));
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    st32((c.r[16].w[0] + 32u), c.f[3]);
    st32((c.r[16].w[0] + 36u), c.f[2]);
    st32((c.r[16].w[0] + 40u), c.f[1]);
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[16].w[0] + 48u), c.f[3]);
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D760u); st32((c.r[16].w[0] + 60u), c.f[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017D760u) [[unlikely]] return; }
L_0017D760:
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00180000u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] - 9040u);
    set32(c.r[3], c.r[3].w[0] - 10336u);
    st32((c.r[16].w[0] + 168u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 10;
L_0017D788:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0017D7A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[17], c.r[18].w[0] + 304u);  if (t) { goto L_0017D890; } }
    set32(c.r[7], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[7].d[0]; set32(c.r[6], 0u + 1u);  if (t) { goto L_0017D880; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { goto L_0017D808; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0017D7F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017D898; } }
    c.budget -= 1;
L_0017D7F0:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] - 29360u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D808u); st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x0017D808u) [[unlikely]] return; }
L_0017D808:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.r[1].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0017D850; } }
L_0017D818:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 10592u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D83Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017D83Cu) [[unlikely]] return; }
L_0017D83C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 80u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017D818u | kUnwind; return; } goto L_0017D818; } }
L_0017D850:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 166u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0017D870; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0017D898; } }
    c.budget -= 1;
L_0017D870:
    st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0017D898; } }
L_0017D880:
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0017D898; } }
    c.budget -= 1;
L_0017D890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D898u);  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x0017D898u) [[unlikely]] return; }
L_0017D898:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0017D8B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42BC0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[5].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D8ECu); st32((c.r[5].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017D8ECu) [[unlikely]] return; }
L_0017D8EC:
    set32(c.r[3], 0u + 3u);
    mmi::divu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] + 2u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[16].w[0] + 16u), c.f[3]);
    st32((c.r[16].w[0] + 20u), c.f[2]);
    st32((c.r[16].w[0] + 24u), c.f[1]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D92Cu); st32((c.r[16].w[0] + 28u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0017D92Cu) [[unlikely]] return; }
L_0017D92C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D934u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017D934u) [[unlikely]] return; }
L_0017D934:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D940u); c.r[4].d[0] = c.r[2].d[0] & 2047ull;  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0017D940u) [[unlikely]] return; }
L_0017D940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D948u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017D948u) [[unlikely]] return; }
L_0017D948:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D954u); c.r[4].d[0] = c.r[2].d[0] & 2047ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0017D954u) [[unlikely]] return; }
L_0017D954:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D95Cu);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017D95Cu) [[unlikely]] return; }
L_0017D95C:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D968u); c.r[4].d[0] = c.r[2].d[0] & 2047ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0017D968u) [[unlikely]] return; }
L_0017D968:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D974u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0017D974u) [[unlikely]] return; }
L_0017D974:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D97Cu);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017D97Cu) [[unlikely]] return; }
L_0017D97C:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 10576u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D9A0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x0017D9A0u) [[unlikely]] return; }
L_0017D9A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xBC2E0000u);  if (t) { goto L_0017DA38; } }
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.r[2].d[0] = c.r[2].d[0] | 19521ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017D9C4u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0017D9C4u) [[unlikely]] return; }
L_0017D9C4:
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F790000u);  if (t) { goto L_0017DA00; } }
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.f[0]);  if (t) { goto L_0017DA10; } }
    c.budget -= 1;
L_0017DA00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBCCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52432ull;
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 4;
L_0017DA10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBCCC0000u);
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.r[2].d[0] = c.r[2].d[0] | 52432ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0017DA38; } }
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.budget -= 2;
L_0017DA38:
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DA48u); st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017DA48u) [[unlikely]] return; }
L_0017DA48:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] & 2047ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DA58u); st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017DA58u) [[unlikely]] return; }
L_0017DA58:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] & 2047ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DA68u); st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017DA68u) [[unlikely]] return; }
L_0017DA68:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] & 2047ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DA78u); st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017DA78u) [[unlikely]] return; }
L_0017DA78:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017DA90; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0017DA90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DA98u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017DA98u) [[unlikely]] return; }
L_0017DA98:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017DAB0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0017DAB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DAB8u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0017DAB8u) [[unlikely]] return; }
L_0017DAB8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017DAD0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0017DAD0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DADCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 202u, depth + 1u); else { c.pc = 0x0017DAF0u; return; } if (c.pc != 0x0017DADCu) [[unlikely]] return; }
L_0017DADC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017DAF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DB08u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x0017DB08u) [[unlikely]] return; }
L_0017DB08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);  if (t) { goto L_0017DB20; } }
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_0017DB28; } }
    c.budget -= 1;
L_0017DB20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 2;
L_0017DB28:
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    c.f[3] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 68u), c.f[0]);  if (t) { goto L_0017DB58; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0017DC88; } }
    c.budget -= 1;
L_0017DB58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017DB90; } }
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 64u), c.f[0]);  if (t) { goto L_0017DB90; } }
    st32((c.r[16].w[0] + 64u), c.f[3]);
    c.budget -= 1;
L_0017DB90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A40000u);
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0017DC20; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);  if (t) { goto L_0017DBD8; } }
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DBD0u); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0017DBD0u) [[unlikely]] return; }
L_0017DBD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DBE8; } }
L_0017DBD8:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[12] = ld32((c.r[16].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DBE8u); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0017DBE8u) [[unlikely]] return; }
L_0017DBE8:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DBF4u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0017DBF4u) [[unlikely]] return; }
L_0017DBF4:
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[2], c.r[29].w[0] + 32u);
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_0017DC38; } }
    c.budget -= 1;
L_0017DC20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE60000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DC38u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0017DC38u) [[unlikely]] return; }
L_0017DC38:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[12] = ld32((c.r[16].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DC48u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0017DC48u) [[unlikely]] return; }
L_0017DC48:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DC54u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0017DC54u) [[unlikely]] return; }
L_0017DC54:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 6u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 13;
L_0017DC88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017DCA0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0017DCB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[18].w[0] + 304u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0017DD60; } }
    c.budget -= 1;
L_0017DCE0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0017DD48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DCF8u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0017DCF8u) [[unlikely]] return; }
L_0017DCF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DD00u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0017DD00u) [[unlikely]] return; }
L_0017DD00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DD08u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0017DD08u) [[unlikely]] return; }
L_0017DD08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DD10u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0017DD10u) [[unlikely]] return; }
L_0017DD10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DD18u); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x0017DD18u) [[unlikely]] return; }
L_0017DD18:
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 21u)));
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0017DD48; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[2], ld32((c.r[18].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DD44u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x0017DD44u) [[unlikely]] return; }
L_0017DD44:
    c.budget -= 1;
L_0017DD48:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 80u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017DCE0u | kUnwind; return; } goto L_0017DCE0; } }
    c.budget -= 1;
L_0017DD60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0017DD80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 10608u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));  if (t) { goto L_0017DE28; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DDBCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0017DDBCu) [[unlikely]] return; }
L_0017DDBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017DE28; } }
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[10], 0u + 19u);
    set32(c.r[9], 0u + 26u);
    set32(c.r[8], c.r[8].w[0] - 8480u);
    set32(c.r[5], c.r[5].w[0] - 8224u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 27712u);
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[11], c.r[11].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[8].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DE24u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x0017DE24u) [[unlikely]] return; }
L_0017DE24:
    c.budget -= 1;
L_0017DE28:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DE38u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0017DE38u) [[unlikely]] return; }
L_0017DE38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0017DED0; } }
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], c.r[16].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 10656u);
    set32(c.r[11], 0u + 22u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[10], 0u + 26u);
    set32(c.r[9], c.r[9].w[0] - 8480u);
    set32(c.r[8], c.r[8].w[0] - 7472u);
    set32(c.r[5], c.r[12].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] - 27712u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], 0u + 2u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[7].d[0] = 0ull + 0ull;
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 168u), c.r[8].w[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[4].w[0] + 32u), c.f[3]);
    st32((c.r[4].w[0] + 36u), c.f[2]);
    st32((c.r[4].w[0] + 40u), c.f[1]);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DECCu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x0017DECCu) [[unlikely]] return; }
L_0017DECC:
    c.budget -= 1;
L_0017DED0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017DEE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], c.r[2].w[0] + 10848u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0017C000u < 16384u) { entry = entries_001F[(t - 0x0017C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0017DF00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 19u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0017DF58; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017DF78; } }
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DF44u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001F(c, 280u, depth + 1u); else { c.pc = 0x0017EA80u; return; } if (c.pc != 0x0017DF44u) [[unlikely]] return; }
L_0017DF44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017DF4Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_001F(c, 280u, depth + 1u); else { c.pc = 0x0017EA80u; return; } if (c.pc != 0x0017DF4Cu) [[unlikely]] return; }
L_0017DF4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017DF78; } }
    c.budget -= 1;
L_0017DF58:
    st32((c.r[4].w[0] + 344u), 0u);
    st32((c.r[4].w[0] + 348u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 352u), 0u);
    st32((c.r[4].w[0] + 356u), 0u);
    st32((c.r[4].w[0] + 360u), 0u);
    st8((c.r[4].w[0] + 364u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_0017DF78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017DF90:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[3], 0u + 22u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0017DFA8; } }
    st8((c.r[4].w[0] + 364u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0017DFA8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0017DFC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0017DFD0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_0017DFE0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 29024u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st32((c.r[29].w[0] + 160u), c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 51u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 52u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 7);
    set32(c.r[20], c.r[3].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E048u); st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001F(c, 252u, depth + 1u); else { c.pc = 0x0017E7B0u; return; } if (c.pc != 0x0017E048u) [[unlikely]] return; }
L_0017E048:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00880000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[12], c.r[12].w[0] + 10864u);
    set32(c.r[11], c.r[11].w[0] + 15680u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[10], 0u + 1u);
    set32(c.r[9], 0u + 10u);
    set32(c.r[8], 0u + 2u);
    set32(c.r[7], c.r[7].w[0] + 10880u);
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 10u)));
    set32(c.r[6], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 204u);
    set32(c.r[4], c.r[4].w[0] + 10896u);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[29].w[0] + 180u);
    set32(c.r[16], c.r[29].w[0] + 184u);
    set32(c.r[21], c.r[29].w[0] + 188u);
    set32(c.r[22], c.r[29].w[0] + 206u);
    set32(c.r[23], c.r[29].w[0] + 205u);
    set32(c.r[30], c.r[29].w[0] + 207u);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[12].d[0] = ld8((c.r[12].w[0]));
    set32(c.r[3], c.r[3].w[0] + 10912u);
    set32(c.r[12], c.r[12].w[0] << 2);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[11], ld32((c.r[11].w[0])));
    st32((c.r[1].w[0] + 20276u), c.r[11].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[10].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20252u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20244u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20260u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20256u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20272u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20288u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20268u), 0u);
    c.budget -= 52;
L_0017E118:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[6], c.r[3].w[0] + 704u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 704u)));
    c.budget -= 12;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0017E290; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[20].w[0] + 16u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0]), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 6u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E198u); st32((c.r[21].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0017E198u) [[unlikely]] return; }
L_0017E198:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[3] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x42B40000u);  if (t) { goto L_0017E290; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 4u, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0017E1FC; } }
    c.f[1] = fp::sub(c.f[3], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017E200; } }
L_0017E1FC:
    c.f[2] = c.r[2].w[0];
    c.budget -= 1;
L_0017E200:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0017E234; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0017E250; } }
L_0017E234:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 7;
L_0017E250:
    set32(c.r[3], 0u + 128u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[29].w[0] + 204u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[30].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20236u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20232u), c.f[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20228u), c.f[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E290u); st32((c.r[1].w[0] + 20224u), c.f[4]);  if (depth < kMaxDepth) unit_0067(c, 3u, depth + 1u); else { c.pc = 0x0029C020u; return; } if (c.pc != 0x0017E290u) [[unlikely]] return; }
L_0017E290:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017E118u | kUnwind; return; } goto L_0017E118; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0017E2D0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    set32(c.r[3], c.r[3].w[0] + 29024u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[2], c.r[2].w[0] - 27856u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[29].w[0] + 208u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[5], c.r[19].w[0] + 32u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[18], c.r[19].w[0] + 304u);
    set32(c.r[6], ld32((c.r[28].w[0] - 23780u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 51u)));
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 7);
    set32(c.r[17], c.r[3].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 9);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E348u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x0017E348u) [[unlikely]] return; }
L_0017E348:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF810000u);
    c.r[3].d[0] = c.r[3].d[0] | 18350ull;
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.f[12] = c.r[3].w[0];
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 51u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E368u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0043(c, 380u, depth + 1u); else { c.pc = 0x0020F600u; return; } if (c.pc != 0x0017E368u) [[unlikely]] return; }
L_0017E368:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[29].w[0] + 200u);  if (t) { goto L_0017E780; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = ld32((c.r[20].w[0]));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[21], c.r[29].w[0] + 196u);  if (t) { goto L_0017E780; } }
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    c.f[1] = ld32((c.r[21].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E3A0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0017E3A0u) [[unlikely]] return; }
L_0017E3A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F0C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);  if (t) { goto L_0017E3C8; } }
    c.f[20] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017E408; } }
L_0017E3C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0017E3F0; } }
    c.f[20] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017E408; } }
L_0017E3F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EB30000u);
    c.f[1] = fp::sub(c.f[2], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] | 13108ull;
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 6;
L_0017E408:
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[17].w[0] + 16u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E41Cu); set32(c.r[7], c.r[29].w[0] + 236u);  if (depth < kMaxDepth) unit_0011(c, 101u, depth + 1u); else { c.pc = 0x00145440u; return; } if (c.pc != 0x0017E41Cu) [[unlikely]] return; }
L_0017E41C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);  if (t) { goto L_0017E428; } }
    c.f[20] = c.r[3].w[0];
    c.budget -= 1;
L_0017E428:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 8816u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0017E4D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017E4D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[20]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[3].w[0] + 40u);  if (t) { goto L_0017E498; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D990000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0]), c.f[0]);  if (t) { goto L_0017E4D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 40u), c.f[20]);  if (t) { goto L_0017E4D0; } }
    c.budget -= 1;
L_0017E498:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);  if (t) { goto L_0017E4D0; } }
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0]), c.f[0]);  if (t) { goto L_0017E4D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[3].w[0] + 40u), c.f[20]);
    c.budget -= 4;
L_0017E4D0:
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[10], c.r[10].w[0] + 10864u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00880000u);
    c.f[3] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[9], c.r[9].w[0] + 15680u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[7], 0u + 2u);
    c.r[10].d[0] = ld8((c.r[10].w[0]));
    c.f[0] = c.r[3].w[0];
    set32(c.r[6], c.r[29].w[0] + 232u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[1] = c.r[5].w[0];
    set32(c.r[3], c.r[10].w[0] << 2);
    set32(c.r[3], c.r[9].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[1].w[0] + 20276u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20260u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20288u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20240u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.f[2] = ld32((c.r[3].w[0] + 40u));
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[20] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 41;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0017E640; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E57Cu);  if (depth < kMaxDepth) unit_0000(c, 262u, depth + 1u); else { c.pc = 0x00102A28u; return; } if (c.pc != 0x0017E57Cu) [[unlikely]] return; }
L_0017E57C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[6], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E58Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 245u, depth + 1u); else { c.pc = 0x001027B0u; return; } if (c.pc != 0x0017E58Cu) [[unlikely]] return; }
L_0017E58C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0017E5C0; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 128u);  if (t) { goto L_0017E5DC; } }
L_0017E5C0:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    set32(c.r[2], 0u + 128u);
    c.budget -= 7;
L_0017E5DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[29].w[0] + 235u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[29].w[0] + 234u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] - 19360u);
    st8((c.r[29].w[0] + 233u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[29].w[0] + 232u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], c.r[2].w[0] - 19356u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st16((c.r[1].w[0] + 20286u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E640u); st32((c.r[1].w[0] + 20300u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0067(c, 136u, depth + 1u); else { c.pc = 0x0029E270u; return; } if (c.pc != 0x0017E640u) [[unlikely]] return; }
L_0017E640:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.f[20] = ld32((c.r[3].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);  if (t) { goto L_0017E780; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 16192u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E678u); set32(c.r[7], 0u + 8191u);  if (depth < kMaxDepth) unit_0067(c, 173u, depth + 1u); else { c.pc = 0x0029ED30u; return; } if (c.pc != 0x0017E678u) [[unlikely]] return; }
L_0017E678:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E684u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0052(c, 78u, depth + 1u); else { c.pc = 0x00248DB0u; return; } if (c.pc != 0x0017E684u) [[unlikely]] return; }
L_0017E684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E68Cu); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0017E68Cu) [[unlikely]] return; }
L_0017E68C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E694u); c.r[4].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0017E694u) [[unlikely]] return; }
L_0017E694:
    c.f[14] = ld32((c.r[20].w[0]));
    c.f[12] = ld32((c.r[29].w[0] + 192u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E6A4u); c.f[13] = ld32((c.r[21].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0017E6A4u) [[unlikely]] return; }
L_0017E6A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E6ACu); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0017E6ACu) [[unlikely]] return; }
L_0017E6AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0017E6E0; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 128u);  if (t) { goto L_0017E6FC; } }
L_0017E6E0:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    set32(c.r[2], 0u + 128u);
    c.budget -= 7;
L_0017E6FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[29].w[0] + 235u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], 0u + 8191u);
    st8((c.r[29].w[0] + 234u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + 11072u);
    st8((c.r[29].w[0] + 233u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[29].w[0] + 232u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] + 11076u);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st16((c.r[1].w[0] + 20286u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E764u); st32((c.r[1].w[0] + 20300u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0067(c, 142u, depth + 1u); else { c.pc = 0x0029E4F0u; return; } if (c.pc != 0x0017E764u) [[unlikely]] return; }
L_0017E764:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 16208u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E77Cu); set32(c.r[7], 0u + 8191u);  if (depth < kMaxDepth) unit_0067(c, 173u, depth + 1u); else { c.pc = 0x0029ED30u; return; } if (c.pc != 0x0017E77Cu) [[unlikely]] return; }
L_0017E77C:
    c.budget -= 1;
L_0017E780:
    st8((c.r[18].w[0] + 60u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_0017E7B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 51u)));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 70u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);  if (t) { goto L_0017E7D8; } }
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0017E7D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[5], c.r[4].w[0] + 304u);
    set32(c.r[2], c.r[2].w[0] + 10920u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0017C000u < 16384u) { entry = entries_001F[(t - 0x0017C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0017E810:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0017EA48; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E84Cu); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0052(c, 78u, depth + 1u); else { c.pc = 0x00248DB0u; return; } if (c.pc != 0x0017E84Cu) [[unlikely]] return; }
L_0017E84C:
    c.f[2] = ld32((c.r[29].w[0] + 160u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42400000u);
    c.f[1] = ld32((c.r[29].w[0] + 164u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    st32((c.r[29].w[0] + 112u), c.f[2]);
    st32((c.r[29].w[0] + 116u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E878u); st32((c.r[29].w[0] + 120u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x0017E878u) [[unlikely]] return; }
L_0017E878:
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E884u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0017E884u) [[unlikely]] return; }
L_0017E884:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E890u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_001F(c, 283u, depth + 1u); else { c.pc = 0x0017EAE0u; return; } if (c.pc != 0x0017E890u) [[unlikely]] return; }
L_0017E890:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st16((c.r[3].w[0] + 32u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E8B4u); set32(c.r[5], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0017E8B4u) [[unlikely]] return; }
L_0017E8B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[17], c.r[29].w[0] + 104u);  if (t) { goto L_0017EA58; } }
    set32(c.r[16], c.r[29].w[0] + 100u);
    c.budget -= 1;
L_0017E8D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E8D8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));  if (depth < kMaxDepth) unit_001F(c, 286u, depth + 1u); else { c.pc = 0x0017EB80u; return; } if (c.pc != 0x0017E8D8u) [[unlikely]] return; }
L_0017E8D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0017EA58; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E8F8u); set32(c.r[6], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x0017E8F8u) [[unlikely]] return; }
L_0017E8F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E90Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x0017E90Cu) [[unlikely]] return; }
L_0017E90C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E920u); set32(c.r[4], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x0017E920u) [[unlikely]] return; }
L_0017E920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E928u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0017E928u) [[unlikely]] return; }
L_0017E928:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.f[14] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E944u); c.f[12] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x0017E944u) [[unlikely]] return; }
L_0017E944:
    c.f[13] = ld32((c.r[17].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E950u); c.f[12] = ld32((c.r[29].w[0] + 96u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0017E950u) [[unlikely]] return; }
L_0017E950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E958u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0017E958u) [[unlikely]] return; }
L_0017E958:
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.f[1] = ld32((c.r[17].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E96Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x0017E96Cu) [[unlikely]] return; }
L_0017E96C:
    c.f[12] = ld32((c.r[16].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E978u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x0017E978u) [[unlikely]] return; }
L_0017E978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E980u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0017E980u) [[unlikely]] return; }
L_0017E980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E988u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_001F(c, 293u, depth + 1u); else { c.pc = 0x0017ECD0u; return; } if (c.pc != 0x0017E988u) [[unlikely]] return; }
L_0017E988:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E998u); c.r[4].d[0] = c.r[2].d[0] & 65280ull;  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x0017E998u) [[unlikely]] return; }
L_0017E998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E9A0u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_001F(c, 293u, depth + 1u); else { c.pc = 0x0017ECD0u; return; } if (c.pc != 0x0017E9A0u) [[unlikely]] return; }
L_0017E9A0:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] << 6);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E9B0u); c.r[4].d[0] = c.r[2].d[0] & 16320ull;  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0017E9B0u) [[unlikely]] return; }
L_0017E9B0:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E9CCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0017E9CCu) [[unlikely]] return; }
L_0017E9CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E9D4u); c.f[12] = ld32((c.r[29].w[0] + 96u));  if (depth < kMaxDepth) unit_0009(c, 163u, depth + 1u); else { c.pc = 0x00126180u; return; } if (c.pc != 0x0017E9D4u) [[unlikely]] return; }
L_0017E9D4:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st16((c.r[18].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017E9ECu); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 163u, depth + 1u); else { c.pc = 0x00126180u; return; } if (c.pc != 0x0017E9ECu) [[unlikely]] return; }
L_0017E9EC:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EA04u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_0009(c, 163u, depth + 1u); else { c.pc = 0x00126180u; return; } if (c.pc != 0x0017EA04u) [[unlikely]] return; }
L_0017EA04:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], c.f[0]);
    st16((c.r[18].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EA28u); set32(c.r[5], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0017EA28u) [[unlikely]] return; }
L_0017EA28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017E8D0u | kUnwind; return; } goto L_0017E8D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017EA58; } }
L_0017EA48:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_0017EA58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0017EA80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[4].w[0] << 2);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] << 5);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[2].w[0] + 704u);
    c.budget -= 12;
L_0017EAB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EAB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 288u, depth + 1u); else { c.pc = 0x0017EBF0u; return; } if (c.pc != 0x0017EAB8u) [[unlikely]] return; }
L_0017EAB8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 8u);
    c.r[3].d[0] = c.r[16].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017EAB0u | kUnwind; return; } goto L_0017EAB0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017EAE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], c.r[4].w[0] << 2);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[3].w[0] << 5);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    c.r[1].d[0] = c.r[17].sd[0] < 20ll ? 1ull : 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] + 704u);  if (t) { goto L_0017EB58; } }
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[19], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_0017EB30:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0017EB48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EB44u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 290u, depth + 1u); else { c.pc = 0x0017EC30u; return; } if (c.pc != 0x0017EB44u) [[unlikely]] return; }
L_0017EB44:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_0017EB48:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017EB30u | kUnwind; return; } goto L_0017EB30; } }
L_0017EB58:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0017EB80:
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] + 704u);  if (t) { goto L_0017EBC8; } }
    c.budget -= 1;
L_0017EBA8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0017EBC0; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
L_0017EBC0:
    set32(c.r[4], c.r[4].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_0017EBC8:
    c.r[1].d[0] = c.r[5].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0017EBE0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017EBA8u | kUnwind; return; } goto L_0017EBA8; } }
    c.budget -= 1;
L_0017EBE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017EBF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 8u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EC0Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0017EC0Cu) [[unlikely]] return; }
L_0017EC0C:
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017EC30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 6u)));
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EC84u); st32((c.r[29].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x0017EC84u) [[unlikely]] return; }
L_0017EC84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0017ECA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017ECB8; } }
    c.budget -= 1;
L_0017ECA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ECB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 288u, depth + 1u); else { c.pc = 0x0017EBF0u; return; } if (c.pc != 0x0017ECB0u) [[unlikely]] return; }
L_0017ECB0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0017ECB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017ECD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ECECu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x0017ECECu) [[unlikely]] return; }
L_0017ECEC:
    c.r[1].d[0] = 0ll < c.r[17].sd[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0017EE38; } }
    c.r[1].d[0] = c.r[17].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] - 8u);  if (t) { goto L_0017EDF8; } }
L_0017ED08:
    set32(c.r[2], c.r[16].w[0] << 1);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.r[7].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[6], c.r[2].w[0] >> 1);
    c.r[7].d[0] = c.r[16].d[0] | c.r[7].d[0];
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    c.r[16].d[0] = c.r[7].d[0] & 65535ull;
    c.r[7].d[0] = c.r[6].d[0] & 1ull;
    set32(c.r[8], c.r[16].w[0] << 1);
    set32(c.r[6], c.r[2].w[0] >> 2);
    c.r[16].d[0] = c.r[8].d[0] & 65535ull;
    c.r[8].d[0] = c.r[16].d[0] | c.r[7].d[0];
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    c.r[7].d[0] = c.r[6].d[0] & 1ull;
    c.r[16].d[0] = c.r[8].d[0] & 65535ull;
    set32(c.r[6], c.r[2].w[0] >> 3);
    set32(c.r[8], c.r[16].w[0] << 1);
    c.r[16].d[0] = c.r[8].d[0] & 65535ull;
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    c.r[8].d[0] = c.r[6].d[0] & 1ull;
    c.r[7].d[0] = c.r[16].d[0] | c.r[7].d[0];
    set32(c.r[6], c.r[2].w[0] >> 4);
    c.r[16].d[0] = c.r[7].d[0] & 65535ull;
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    c.r[7].d[0] = c.r[6].d[0] & 1ull;
    set32(c.r[6], c.r[16].w[0] << 1);
    c.r[16].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[6], c.r[2].w[0] >> 5);
    c.r[8].d[0] = c.r[16].d[0] | c.r[8].d[0];
    c.r[16].d[0] = c.r[8].d[0] & 65535ull;
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    c.r[8].d[0] = c.r[6].d[0] & 1ull;
    set32(c.r[9], c.r[16].w[0] << 1);
    set32(c.r[6], c.r[2].w[0] >> 6);
    c.r[16].d[0] = c.r[9].d[0] & 65535ull;
    c.r[9].d[0] = c.r[16].d[0] | c.r[7].d[0];
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    c.r[7].d[0] = c.r[6].d[0] & 1ull;
    c.r[16].d[0] = c.r[9].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] >> 7);
    set32(c.r[6], c.r[16].w[0] << 1);
    c.r[16].d[0] = c.r[6].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[6].d[0] = c.r[2].d[0] & 1ull;
    c.r[8].d[0] = c.r[16].d[0] | c.r[8].d[0];
    set32(c.r[2], c.r[5].w[0] >> 8);
    c.r[16].d[0] = c.r[8].d[0] & 65535ull;
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[16].w[0] << 1);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[7].d[0] = c.r[16].d[0] | c.r[7].d[0];
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[16].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[7], c.r[16].w[0] << 1);
    c.r[16].d[0] = c.r[7].d[0] & 65535ull;
    c.r[6].d[0] = c.r[16].d[0] | c.r[6].d[0];
    c.budget -= 60;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] & 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017ED08u | kUnwind; return; } goto L_0017ED08; } }
L_0017EDF8:
    c.r[1].d[0] = c.r[4].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0017EE38; } }
    c.budget -= 1;
L_0017EE08:
    set32(c.r[2], c.r[16].w[0] << 1);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[2], c.r[5].w[0] >> 1);
    c.r[3].d[0] = c.r[16].d[0] | c.r[3].d[0];
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[3].d[0] & 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017EE08u | kUnwind; return; } goto L_0017EE08; } }
    c.budget -= 1;
L_0017EE38:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017EE50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EE78u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0017EE78u) [[unlikely]] return; }
L_0017EE78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017EEC0; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[6], 0u + 19u);
    set32(c.r[5], 0u + 27u);
    set32(c.r[4], c.r[4].w[0] - 4032u);
    set32(c.r[3], c.r[3].w[0] - 3792u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 28u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 16;
L_0017EEC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017EEE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 6u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 8u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0017EF18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EF14u);  if (depth < kMaxDepth) unit_001F(c, 297u, depth + 1u); else { c.pc = 0x0017EE50u; return; } if (c.pc != 0x0017EF14u) [[unlikely]] return; }
L_0017EF14:
    c.budget -= 1;
L_0017EF18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017EF30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 6u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 8u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0017EF68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EF64u);  if (depth < kMaxDepth) unit_001F(c, 297u, depth + 1u); else { c.pc = 0x0017EE50u; return; } if (c.pc != 0x0017EF64u) [[unlikely]] return; }
L_0017EF64:
    c.budget -= 1;
L_0017EF68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017EF80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 6u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 8u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_0017EFB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017EFB4u);  if (depth < kMaxDepth) unit_001F(c, 297u, depth + 1u); else { c.pc = 0x0017EE50u; return; } if (c.pc != 0x0017EFB4u) [[unlikely]] return; }
L_0017EFB4:
    c.budget -= 1;
L_0017EFB8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017EFD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[6], ld32((c.r[6].w[0] + 8u)));
    mmi::div(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0017F028; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F00Cu);  if (depth < kMaxDepth) unit_001F(c, 297u, depth + 1u); else { c.pc = 0x0017EE50u; return; } if (c.pc != 0x0017F00Cu) [[unlikely]] return; }
L_0017F00C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0017F028; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F024u); set32(c.r[4], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0017F024u) [[unlikely]] return; }
L_0017F024:
    c.budget -= 1;
L_0017F028:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017F040:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], c.r[2].w[0] + 11104u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0017C000u < 16384u) { entry = entries_001F[(t - 0x0017C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0017F060:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F080u); st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001F(c, 321u, depth + 1u); else { c.pc = 0x0017F2F0u; return; } if (c.pc != 0x0017F080u) [[unlikely]] return; }
L_0017F080:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F090u); st16((c.r[16].w[0] + 332u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001F(c, 324u, depth + 1u); else { c.pc = 0x0017F3C0u; return; } if (c.pc != 0x0017F090u) [[unlikely]] return; }
L_0017F090:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017F0B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F0C8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 324u, depth + 1u); else { c.pc = 0x0017F3C0u; return; } if (c.pc != 0x0017F0C8u) [[unlikely]] return; }
L_0017F0C8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017F0E8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017F0F8; } }
    c.budget -= 1;
L_0017F0E8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0017F100; } }
L_0017F0F8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0017F100:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017F110:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0017F120:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_0017F130:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 10944u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[29].w[0] + 64u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[1].w[0] + 20252u), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[28].w[0] - 32668u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20260u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] + 10928u);
    st32((c.r[1].w[0] + 20256u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 88u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20272u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20244u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F19Cu); st32((c.r[1].w[0] + 20288u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x0017F19Cu) [[unlikely]] return; }
L_0017F19C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[16], 0u + 2u);
    st32((c.r[1].w[0] + 20280u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != c.r[16].d[0]; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));  if (t) { goto L_0017F1E8; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_0017F1E4; } }
    set32(c.r[3], c.r[16].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_0017F1E4:
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0017F1E8:
    set32(c.r[18], c.r[17].w[0] + 304u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0017F2C8; } }
    c.budget -= 1;
L_0017F1F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 30u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0017F2C0; } }
    set32(c.r[2], c.r[29].w[0] + 64u);
    ld128((c.r[18].w[0]) & ~15u, c.vu0.vf[4]);
    vu::move(c.vu0, 1u, 4u, 0u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 26u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], c.r[2].w[0] + 10960u);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] - 121u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st16((c.r[29].w[0] + 88u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st16((c.r[29].w[0] + 90u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st16((c.r[29].w[0] + 92u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 6u));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st16((c.r[29].w[0] + 94u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 24u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F294u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 143u, depth + 1u); else { c.pc = 0x00125E30u; return; } if (c.pc != 0x0017F294u) [[unlikely]] return; }
L_0017F294:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20268u), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20224u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F2C0u); st32((c.r[1].w[0] + 20228u), c.f[0]);  if (depth < kMaxDepth) unit_0067(c, 3u, depth + 1u); else { c.pc = 0x0029C020u; return; } if (c.pc != 0x0017F2C0u) [[unlikely]] return; }
L_0017F2C0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 32u);
    c.budget -= 2;
L_0017F2C8:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017F1F8u | kUnwind; return; } goto L_0017F1F8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0017F2F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[17].d[0]; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0017F330; } }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));  if (t) { goto L_0017F328; } }
    set32(c.r[3], c.r[17].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_0017F328:
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0017F330:
    c.r[1].d[0] = 0ll < c.r[17].sd[0] ? 1ull : 0ull;
    set32(c.r[18], c.r[19].w[0] + 304u);
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0017F398; } }
L_0017F340:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], 0u + 121u);
    set32(c.r[3], c.r[3].w[0] + 11088u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[18].w[0] + 16u), c.f[0]);
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F36Cu); st16((c.r[18].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x0017F36Cu) [[unlikely]] return; }
L_0017F36C:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[16], c.r[16].w[0] + 1u);
    st16((c.r[18].w[0] + 24u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    st8((c.r[18].w[0] + 30u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017F340u | kUnwind; return; } goto L_0017F340; } }
    c.budget -= 1;
L_0017F398:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0017F3C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[18].w[0] + 304u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 8;
L_0017F3E0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 30u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0017F540; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0017F470; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0017F540; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017F460; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F438u); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0017F438u) [[unlikely]] return; }
L_0017F438:
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F444u); set32(c.r[5], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0017F444u) [[unlikely]] return; }
L_0017F444:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[18].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F458u); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x0017F458u) [[unlikely]] return; }
L_0017F458:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017F470; } }
L_0017F460:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F470u); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0017F470u) [[unlikely]] return; }
L_0017F470:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0017F4D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0017F498; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017F498; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017F4E8; } }
L_0017F498:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].d[0] = c.r[4].d[0] & 1ull;  if (t) { goto L_0017F4BC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017F4BC; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_0017F4BC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0017F4E8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0017F4E8; } }
    c.budget -= 1;
L_0017F4D8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0017F4E8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    c.r[1].d[0] = c.r[3].sd[0] < 137ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_0017F500; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 30u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0017F540; } }
L_0017F500:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.f[3] = ld32((c.r[17].w[0] + 20u));
    c.r[4].d[0] = c.r[4].d[0] | 52429ull;
    c.f[2] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 16;
L_0017F540:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017F3E0u | kUnwind; return; } goto L_0017F3E0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0017F570:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23824u)));
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0017F638; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0017F5A8:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F5B8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0017F5B8u) [[unlikely]] return; }
L_0017F5B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017F620; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[6], 0u + 19u);
    set32(c.r[5], 0u + 28u);
    set32(c.r[4], c.r[4].w[0] - 2464u);
    set32(c.r[3], c.r[3].w[0] - 1488u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[2].w[0] + 28u), c.r[19].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.f[3] = ld32((c.r[18].w[0]));
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 24;
L_0017F620:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017F5A8u | kUnwind; return; } goto L_0017F5A8; } }
L_0017F638:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0017F660:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], c.r[2].w[0] + 11120u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0017C000u < 16384u) { entry = entries_001F[(t - 0x0017C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0017F680:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] + 11168u);
    set32(c.r[5], c.r[5].w[0] + 11136u);
    set32(c.r[3], c.r[3].w[0] + 11140u);
    set32(c.r[2], c.r[2].w[0] + 11144u);
    set32(c.r[17], c.r[18].w[0] + 304u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 408u), c.r[8].w[0]);
    st8((c.r[4].w[0] + 413u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[8], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0]));
    st8((c.r[4].w[0] + 412u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 46;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F738u); st32((c.r[4].w[0] + 120u), c.f[0]);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x0017F738u) [[unlikely]] return; }
L_0017F738:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 12);
    st32((c.r[18].w[0] + 88u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0017F7A0; } }
L_0017F758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F760u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x0017F760u) [[unlikely]] return; }
L_0017F760:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[2], c.r[2].w[0] << 12);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F774u); st32((c.r[17].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x0017F774u) [[unlikely]] return; }
L_0017F774:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    c.r[16].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], c.r[3].w[0] << 12);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017F758u | kUnwind; return; } goto L_0017F758; } }
    c.budget -= 1;
L_0017F7A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F7A8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 340u, depth + 1u); else { c.pc = 0x0017F7C0u; return; } if (c.pc != 0x0017F7A8u) [[unlikely]] return; }
L_0017F7A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0017F7C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] + 304u);  if (t) { goto L_0017F880; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[1].d[0] = c.r[4].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0017F800; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0017F800:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0017F840; } }
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 116u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 116u), c.f[0]);  if (t) { goto L_0017F9E0; } }
    c.budget -= 1;
L_0017F840:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.f[1] = ld32((c.r[16].w[0] + 112u));
    c.r[4].d[0] = c.r[4].d[0] | 52432ull;
    c.f[2] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBE000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 112u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 116u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 116u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 104u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 104u), c.f[0]);  if (t) { goto L_0017F9E0; } }
L_0017F880:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[1].d[0] = c.r[4].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0017F8A0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0017F8A0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0017F8D0; } }
    c.f[1] = ld32((c.r[16].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 112u), c.f[0]);  if (t) { goto L_0017F948; } }
L_0017F8D0:
    c.r[1].d[0] = c.r[3].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0017F908; } }
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D080000u);
    c.r[3].d[0] = c.r[3].d[0] | 34955ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 116u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 116u), c.f[0]);  if (t) { goto L_0017F948; } }
L_0017F908:
    c.r[1].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0017F948; } }
    c.f[2] = ld32((c.r[16].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CEA0000u);
    c.r[4].d[0] = c.r[3].d[0] | 3739ull;
    c.f[1] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBE120000u);
    c.r[3].d[0] = c.r[3].d[0] | 18725ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[16].w[0] + 112u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 116u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 116u), c.f[0]);
    c.budget -= 13;
L_0017F948:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].d[0] = c.r[4].d[0] & 1ull;  if (t) { goto L_0017F960; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017F960; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_0017F960:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0017F9B0; } }
    c.r[4].d[0] = ld8((c.r[2].w[0] + 108u));
    set32(c.r[3], 0u + 55u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0] + 108u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 108u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 60u);  if (t) { goto L_0017F9A0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0017F9A0; } }
    set32(c.r[3], 0u + 65u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 70u);  if (t) { goto L_0017F9A0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0017F9B0; } }
L_0017F9A0:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 108u));
    set32(c.r[3], c.r[3].w[0] - 4u);
    st8((c.r[2].w[0] + 108u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0017F9B0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0017F9E0; } }
    c.f[1] = ld32((c.r[2].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 104u), c.f[0]);
    c.budget -= 8;
L_0017F9E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F9E8u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x0017F9E8u) [[unlikely]] return; }
L_0017F9E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F9F0u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x0017F9F0u) [[unlikely]] return; }
L_0017F9F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017F9F8u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0017F9F8u) [[unlikely]] return; }
L_0017F9F8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017FA10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0017FA20:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_0017FA30:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[28].w[0] - 32664u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[19], c.r[20].w[0] + 304u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    st32((c.r[1].w[0] + 20244u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], 0u + 4u);
    st32((c.r[29].w[0] + 108u), c.r[5].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FA94u); st32((c.r[1].w[0] + 20260u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x0017FA94u) [[unlikely]] return; }
L_0017FA94:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 11184u);
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20284u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + 11504u);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st32((c.r[1].w[0] + 20288u), 0u);
    set32(c.r[2], c.r[2].w[0] + 11824u);
    c.r[5].d[0] = ld8((c.r[19].w[0] + 108u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[5], c.r[5].w[0] - 50u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[1].w[0] + 20256u), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[19].w[0] + 108u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[4].w[0] - 50u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[1].w[0] + 20252u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[19].w[0] + 108u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] - 50u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[1].w[0] + 20272u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 10u)));
    c.budget -= 40;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017FBC8; } }
    c.f[1] = ld32((c.r[19].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0017FB6C; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 32661u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0017FB88; } }
L_0017FB6C:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[28].w[0] - 32661u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_0017FB88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FB90u); set32(c.r[4], ld32((c.r[20].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 143u, depth + 1u); else { c.pc = 0x00125E30u; return; } if (c.pc != 0x0017FB90u) [[unlikely]] return; }
L_0017FB90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20268u), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    c.f[0] = ld32((c.r[20].w[0] + 112u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20224u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 116u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FBBCu); st32((c.r[1].w[0] + 20228u), c.f[0]);  if (depth < kMaxDepth) unit_0067(c, 3u, depth + 1u); else { c.pc = 0x0029C020u; return; } if (c.pc != 0x0017FBBCu) [[unlikely]] return; }
L_0017FBBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017FC88; } }
    c.budget -= 1;
L_0017FBC8:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
L_0017FBD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = ld32((c.r[19].w[0] + 104u));
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0017FC10; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 32661u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0017FC2C; } }
L_0017FC10:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[28].w[0] - 32661u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_0017FC2C:
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FC40u); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0009(c, 143u, depth + 1u); else { c.pc = 0x00125E30u; return; } if (c.pc != 0x0017FC40u) [[unlikely]] return; }
L_0017FC40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20268u), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    c.f[0] = ld32((c.r[20].w[0] + 112u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20224u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 116u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FC6Cu); st32((c.r[1].w[0] + 20228u), c.f[0]);  if (depth < kMaxDepth) unit_0067(c, 3u, depth + 1u); else { c.pc = 0x0029C020u; return; } if (c.pc != 0x0017FC6Cu) [[unlikely]] return; }
L_0017FC6C:
    set32(c.r[3], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 13107u);
    c.r[18].d[0] = c.r[3].d[0] << 56;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.r[3].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017FBD8u | kUnwind; return; } goto L_0017FBD8; } }
L_0017FC88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0017FCB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FCD8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x0017FCD8u) [[unlikely]] return; }
L_0017FCD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017FD20; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[6], 0u + 19u);
    set32(c.r[5], 0u + 29u);
    set32(c.r[4], c.r[4].w[0] - 704u);
    set32(c.r[3], c.r[3].w[0] + 240u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[2].w[0] + 28u), c.r[17].w[0]);
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 16;
L_0017FD20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0017FD24:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017FD40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], c.r[2].w[0] + 12000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0017C000u < 16384u) { entry = entries_001F[(t - 0x0017C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0017FD60:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 12016u);
    c.r[2].d[0] = ld64((c.r[2].w[0]));
    c.budget -= 5;
L_0017FD74:
    set32(c.r[3], c.r[29].w[0] + 152u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[7], c.r[4].w[0] + 304u);
    set32(c.r[8], c.r[8].w[0] + 12032u);
    set32(c.r[6], c.r[29].w[0] + 16u);
    set32(c.r[5], 0u + 4u);
    st64((c.r[3].w[0]), c.r[2].d[0]);
    c.budget -= 7;
L_0017FD90:
    ld128((c.r[8].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    ld128((c.r[8].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[8], c.r[8].w[0] + 32u);
    st128((c.r[6].w[0] + 16u) & ~15u, c.r[2]);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017FD90u | kUnwind; return; } goto L_0017FD90; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 7;
L_0017FDCC:
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[8], c.r[8].w[0] + c.r[29].w[0]);
    c.r[8].d[0] = ld8((c.r[8].w[0] + 152u));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[11].d[0] = c.r[9].d[0] | 13107ull;
    set32(c.r[14], c.r[14].w[0] + 11984u);
    set32(c.r[12], 0u + 10u);
    c.r[10].d[0] = c.r[8].d[0] | 52429ull;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 13;
L_0017FE00:
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[8].d[0] = c.r[6].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 4;
L_0017FE10:
    c.r[6].d[0] = c.r[6].d[0] << 56;
    set32(c.r[24], c.r[7].w[0] + c.r[8].w[0]);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[8].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[13], c.r[15].w[0] << 1);
    set32(c.r[13], c.r[13].w[0] + c.r[15].w[0]);
    set32(c.r[13], c.r[14].w[0] + c.r[13].w[0]);
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0])));
    st8((c.r[24].w[0] + 124u), static_cast<std::uint8_t>(c.r[13].w[0]));
    st8((c.r[24].w[0] + 120u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[24].w[0] + 122u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[5], c.r[5].w[0] + 5u);
    st32((c.r[3].w[0] + 80u), c.r[11].w[0]);
    st32((c.r[3].w[0] + 84u), c.r[10].w[0]);
    st32((c.r[3].w[0] + 88u), c.r[11].w[0]);
    st32((c.r[2].w[0] + 112u), c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16u);
    st8((c.r[24].w[0] + 126u), static_cast<std::uint8_t>(0u));
    c.budget -= 20;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017FE00u | kUnwind; return; } goto L_0017FE00; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[7].w[0] + 64u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    st32((c.r[7].w[0] + 68u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    st32((c.r[7].w[0] + 72u), c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017FEA8u); st32((c.r[4].w[0] + 80u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001F(c, 364u, depth + 1u); else { c.pc = 0x0017FEC0u; return; } if (c.pc != 0x0017FEA8u) [[unlikely]] return; }
L_0017FEA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0017FEC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[18].w[0] + 304u);  if (t) { goto L_0017FEF8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0017FEF8:
    c.r[3].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xBE120000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3E2F0000u);
    c.r[5].d[0] = c.r[5].d[0] | 18725ull;
    c.r[4].d[0] = c.r[4].d[0] | 35577ull;
    c.f[2] = c.r[5].w[0];
    set32(c.r[7], 0u + 10u);
    c.f[1] = c.r[4].w[0];
    set32(c.r[10], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3EDD0000u);
    c.r[4].d[0] = c.r[5].d[0] | 56797ull;
    c.f[4] = c.r[4].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3D080000u);
    c.r[4].d[0] = c.r[4].d[0] | 34953ull;
    c.f[3] = c.r[4].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.r[6].d[0] = c.r[4].d[0] | 13107ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[5].d[0] = c.r[4].d[0] | 52429ull;
    c.budget -= 20;
L_0017FF48:
    c.r[12].d[0] = c.r[3].d[0] << 56;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 56);
    set32(c.r[4], c.r[18].w[0] + c.r[12].w[0]);
    set32(c.r[8], c.r[4].w[0] + 5u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[10].d[0];  if (t) { goto L_0017FFA8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017FF78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0020(c, 11u, depth); } }
    c.budget -= 1;
L_0017FF78:
    set32(c.r[11], c.r[17].w[0] + c.r[12].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 120u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[9], c.r[11].w[0] + 120u);  if (t) { goto L_0017FF98; } }
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { [[clang::musttail]] return unit_0020(c, 11u, depth); } }
    c.budget -= 1;
L_0017FF98:
    st8((c.r[11].w[0] + 126u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_0017FFA8:
    set32(c.r[9], c.r[17].w[0] + c.r[12].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 122u)));
    set32(c.r[11], c.r[9].w[0] + 122u);
    set32(c.r[4], c.r[8].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[8].d[0] != 0ull; st8((c.r[9].w[0] + 122u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0017FFD8; } }
    st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[2].w[0] + 80u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 84u), c.r[5].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 88u), c.r[6].w[0]);  if (t) { [[clang::musttail]] return unit_0020(c, 11u, depth); } }
    c.budget -= 1;
L_0017FFD8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    c.r[4].d[0] = c.r[4].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0020(c, 5u, depth); } }
    c.f[0] = ld32((c.r[2].w[0] + 80u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    c.budget -= 2;
L_0017FFF0:
    st32((c.r[2].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 84u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.budget -= 3;
L_0017FFFC:
    st32((c.r[2].w[0] + 84u), c.f[0]);
    c.budget -= 1;
    [[clang::musttail]] return unit_0020(c, 1u, depth);
}

}
