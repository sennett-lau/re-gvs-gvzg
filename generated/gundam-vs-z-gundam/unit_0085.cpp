#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0085[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0,
    0, 5, 0, 6, 0, 0, 7, 0, 8, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0,
    24, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57,
    0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0,
    0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0,
    0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0,
    78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0,
    0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88,
    0, 0, 0, 0, 89, 0, 90, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0,
    95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0,
    0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0,
    0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0,
    109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0,
    117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0,
    120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 133, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0,
    139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 143, 0,
    0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0,
    0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157,
    0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0,
    160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0,
    173, 0, 174, 0, 175, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0,
    180, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0,
    186, 0, 187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 193, 0, 194, 0,
    0, 0, 195, 0, 0, 0, 196, 0, 197, 0, 198, 0, 199, 0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0,
    204, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0,
    211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0,
    237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242,
    0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0,
    250, 0, 251, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 256, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 258, 0, 259, 0, 0, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 0, 0, 0, 262, 0,
    263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0,
    270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0,
    281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0,
    295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 306, 0, 0,
    0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 314,
    0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 322,
    0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 330,
    0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 340, 0, 341, 0, 0, 342, 0, 0, 0, 343, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 346, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    349, 0, 0, 0, 0, 350, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0,
    355, 0, 0, 0, 356, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 359, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363,
    0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 369, 0, 0, 0, 0, 0, 370, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0,
    373, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 376, 0, 0, 377, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0,
    0, 0, 0, 0, 0, 389, 0, 0, 390, 0, 0, 0, 0, 0, 0, 391, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0,
    394, 0, 395, 0, 0, 0, 0, 0, 0, 396, 0, 397, 0, 398, 0, 0, 399, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 403, 0, 404, 0, 405, 0, 406, 0, 0, 407, 0, 408, 0, 0, 0, 0,
    0, 0, 409, 0, 410, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0,
    0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 416, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 419, 0, 420, 0, 421, 0, 422, 0,
    423, 0, 0, 0, 424, 0, 425, 0, 426, 0, 0, 0, 0, 0, 427, 0, 428, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 434, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 441, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 444,
    0, 0, 445, 0, 0, 0, 446, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 449, 0, 0, 0, 0, 450,
    0, 0, 451, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 456, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 461, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 465, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 468, 0, 0, 0, 0, 0, 469, 0,
    0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 472, 0, 473, 0, 474, 0, 0, 475, 0, 476, 0, 0, 0, 0,
    0, 0, 477, 0, 0, 478, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0,
    482, 0, 483, 0, 0, 0, 0, 0, 0, 484, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 488, 0, 489, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 493, 0, 0, 0, 494, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 498, 0, 0, 0,
    499, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0,
    0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0085(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00314000;
    case 2u: goto L_00314010;
    case 3u: goto L_00314040;
    case 4u: goto L_00314060;
    case 5u: goto L_00314084;
    case 6u: goto L_0031408C;
    case 7u: goto L_00314098;
    case 8u: goto L_003140A0;
    case 9u: goto L_003140A8;
    case 10u: goto L_003140B8;
    case 11u: goto L_003140D0;
    case 12u: goto L_00314120;
    case 13u: goto L_0031412C;
    case 14u: goto L_00314134;
    case 15u: goto L_0031413C;
    case 16u: goto L_00314160;
    case 17u: goto L_00314178;
    case 18u: goto L_003141A8;
    case 19u: goto L_003141F8;
    case 20u: goto L_00314234;
    case 21u: goto L_0031423C;
    case 22u: goto L_00314260;
    case 23u: goto L_00314278;
    case 24u: goto L_00314280;
    case 25u: goto L_0031428C;
    case 26u: goto L_0031429C;
    case 27u: goto L_003142B0;
    case 28u: goto L_003142DC;
    case 29u: goto L_003142EC;
    case 30u: goto L_00314330;
    case 31u: goto L_00314380;
    case 32u: goto L_00314398;
    case 33u: goto L_003143D4;
    case 34u: goto L_003143F4;
    case 35u: goto L_00314430;
    case 36u: goto L_00314440;
    case 37u: goto L_0031445C;
    case 38u: goto L_00314490;
    case 39u: goto L_003144B0;
    case 40u: goto L_003144CC;
    case 41u: goto L_003144D4;
    case 42u: goto L_003144E0;
    case 43u: goto L_00314514;
    case 44u: goto L_00314570;
    case 45u: goto L_003145F8;
    case 46u: goto L_0031464C;
    case 47u: goto L_00314684;
    case 48u: goto L_003146E0;
    case 49u: goto L_00314748;
    case 50u: goto L_00314758;
    case 51u: goto L_0031476C;
    case 52u: goto L_003147A4;
    case 53u: goto L_003147D0;
    case 54u: goto L_00314810;
    case 55u: goto L_00314880;
    case 56u: goto L_003148F0;
    case 57u: goto L_0031497C;
    case 58u: goto L_00314988;
    case 59u: goto L_003149AC;
    case 60u: goto L_003149BC;
    case 61u: goto L_003149C8;
    case 62u: goto L_00314A30;
    case 63u: goto L_00314A50;
    case 64u: goto L_00314A58;
    case 65u: goto L_00314AC8;
    case 66u: goto L_00314AD0;
    case 67u: goto L_00314AD8;
    case 68u: goto L_00314AE8;
    case 69u: goto L_00314B04;
    case 70u: goto L_00314B18;
    case 71u: goto L_00314B5C;
    case 72u: goto L_00314B68;
    case 73u: goto L_00314B8C;
    case 74u: goto L_00314B94;
    case 75u: goto L_00314BC4;
    case 76u: goto L_00314BE4;
    case 77u: goto L_00314BF0;
    case 78u: goto L_00314C00;
    case 79u: goto L_00314C68;
    case 80u: goto L_00314CA8;
    case 81u: goto L_00314CC0;
    case 82u: goto L_00314CE8;
    case 83u: goto L_00314CF8;
    case 84u: goto L_00314D1C;
    case 85u: goto L_00314D38;
    case 86u: goto L_00314D54;
    case 87u: goto L_00314D64;
    case 88u: goto L_00314D7C;
    case 89u: goto L_00314D90;
    case 90u: goto L_00314D98;
    case 91u: goto L_00314DA0;
    case 92u: goto L_00314DB8;
    case 93u: goto L_00314DD0;
    case 94u: goto L_00314DE8;
    case 95u: goto L_00314E00;
    case 96u: goto L_00314E20;
    case 97u: goto L_00314E40;
    case 98u: goto L_00314E50;
    case 99u: goto L_00314E84;
    case 100u: goto L_00314EB4;
    case 101u: goto L_00314ED0;
    case 102u: goto L_00314EF0;
    case 103u: goto L_00314F0C;
    case 104u: goto L_00314F30;
    case 105u: goto L_00314F6C;
    case 106u: goto L_00314F90;
    case 107u: goto L_00314FD4;
    case 108u: goto L_00314FF8;
    case 109u: goto L_00315000;
    case 110u: goto L_0031500C;
    case 111u: goto L_00315070;
    case 112u: goto L_003150C0;
    case 113u: goto L_003150D0;
    case 114u: goto L_00315128;
    case 115u: goto L_00315150;
    case 116u: goto L_00315170;
    case 117u: goto L_00315180;
    case 118u: goto L_00315190;
    case 119u: goto L_003151E4;
    case 120u: goto L_00315200;
    case 121u: goto L_00315214;
    case 122u: goto L_0031523C;
    case 123u: goto L_00315290;
    case 124u: goto L_003152A4;
    case 125u: goto L_003152B8;
    case 126u: goto L_003152EC;
    case 127u: goto L_00315320;
    case 128u: goto L_00315380;
    case 129u: goto L_003153AC;
    case 130u: goto L_00315408;
    case 131u: goto L_00315430;
    case 132u: goto L_00315454;
    case 133u: goto L_00315484;
    case 134u: goto L_0031548C;
    case 135u: goto L_0031549C;
    case 136u: goto L_003154D4;
    case 137u: goto L_003154E8;
    case 138u: goto L_003154F4;
    case 139u: goto L_00315500;
    case 140u: goto L_00315540;
    case 141u: goto L_00315560;
    case 142u: goto L_00315568;
    case 143u: goto L_00315578;
    case 144u: goto L_0031558C;
    case 145u: goto L_003155F4;
    case 146u: goto L_00315618;
    case 147u: goto L_00315620;
    case 148u: goto L_00315630;
    case 149u: goto L_00315644;
    case 150u: goto L_00315650;
    case 151u: goto L_00315660;
    case 152u: goto L_003156A8;
    case 153u: goto L_003156B8;
    case 154u: goto L_003156C8;
    case 155u: goto L_00315750;
    case 156u: goto L_00315764;
    case 157u: goto L_0031577C;
    case 158u: goto L_00315788;
    case 159u: goto L_003157F0;
    case 160u: goto L_00315800;
    case 161u: goto L_00315810;
    case 162u: goto L_00315850;
    case 163u: goto L_00315880;
    case 164u: goto L_003158A0;
    case 165u: goto L_003158B0;
    case 166u: goto L_003158F0;
    case 167u: goto L_00315934;
    case 168u: goto L_0031599C;
    case 169u: goto L_003159A4;
    case 170u: goto L_003159AC;
    case 171u: goto L_003159E0;
    case 172u: goto L_003159F0;
    case 173u: goto L_00315A00;
    case 174u: goto L_00315A08;
    case 175u: goto L_00315A10;
    case 176u: goto L_00315A18;
    case 177u: goto L_00315A30;
    case 178u: goto L_00315A68;
    case 179u: goto L_00315A74;
    case 180u: goto L_00315A80;
    case 181u: goto L_00315A88;
    case 182u: goto L_00315A90;
    case 183u: goto L_00315AC0;
    case 184u: goto L_00315ADC;
    case 185u: goto L_00315AE8;
    case 186u: goto L_00315B00;
    case 187u: goto L_00315B08;
    case 188u: goto L_00315B18;
    case 189u: goto L_00315B28;
    case 190u: goto L_00315B3C;
    case 191u: goto L_00315B60;
    case 192u: goto L_00315B68;
    case 193u: goto L_00315B70;
    case 194u: goto L_00315B78;
    case 195u: goto L_00315B88;
    case 196u: goto L_00315B98;
    case 197u: goto L_00315BA0;
    case 198u: goto L_00315BA8;
    case 199u: goto L_00315BB0;
    case 200u: goto L_00315BC0;
    case 201u: goto L_00315BC8;
    case 202u: goto L_00315BE0;
    case 203u: goto L_00315BE8;
    case 204u: goto L_00315C00;
    case 205u: goto L_00315C18;
    case 206u: goto L_00315C24;
    case 207u: goto L_00315C38;
    case 208u: goto L_00315C48;
    case 209u: goto L_00315C50;
    case 210u: goto L_00315C78;
    case 211u: goto L_00315C80;
    case 212u: goto L_00315C9C;
    case 213u: goto L_00315CAC;
    case 214u: goto L_00315CD0;
    case 215u: goto L_00315D08;
    case 216u: goto L_00315D18;
    case 217u: goto L_00315D40;
    case 218u: goto L_00315D50;
    case 219u: goto L_00315D70;
    case 220u: goto L_00315D9C;
    case 221u: goto L_00315DA8;
    case 222u: goto L_00315DC0;
    case 223u: goto L_00315E34;
    case 224u: goto L_00315E44;
    case 225u: goto L_00315E90;
    case 226u: goto L_00315ED4;
    case 227u: goto L_00315EE0;
    case 228u: goto L_00315EFC;
    case 229u: goto L_00315F28;
    case 230u: goto L_00315F34;
    case 231u: goto L_00315F80;
    case 232u: goto L_00315FBC;
    case 233u: goto L_00315FC8;
    case 234u: goto L_00315FE0;
    case 235u: goto L_00316038;
    case 236u: goto L_003160F0;
    case 237u: goto L_00316100;
    case 238u: goto L_00316110;
    case 239u: goto L_00316144;
    case 240u: goto L_00316150;
    case 241u: goto L_00316164;
    case 242u: goto L_0031617C;
    case 243u: goto L_003161A0;
    case 244u: goto L_003161E0;
    case 245u: goto L_003161F0;
    case 246u: goto L_00316220;
    case 247u: goto L_00316250;
    case 248u: goto L_00316264;
    case 249u: goto L_00316270;
    case 250u: goto L_00316280;
    case 251u: goto L_00316288;
    case 252u: goto L_00316290;
    case 253u: goto L_003162B4;
    case 254u: goto L_003162C0;
    case 255u: goto L_003162F0;
    case 256u: goto L_003162F8;
    case 257u: goto L_00316328;
    case 258u: goto L_00316330;
    case 259u: goto L_00316338;
    case 260u: goto L_00316350;
    case 261u: goto L_00316358;
    case 262u: goto L_00316378;
    case 263u: goto L_00316380;
    case 264u: goto L_00316390;
    case 265u: goto L_003163DC;
    case 266u: goto L_0031643C;
    case 267u: goto L_00316448;
    case 268u: goto L_00316450;
    case 269u: goto L_00316470;
    case 270u: goto L_00316480;
    case 271u: goto L_003164B0;
    case 272u: goto L_0031654C;
    case 273u: goto L_003165A4;
    case 274u: goto L_00316618;
    case 275u: goto L_00316654;
    case 276u: goto L_00316660;
    case 277u: goto L_00316690;
    case 278u: goto L_003166A0;
    case 279u: goto L_003166C0;
    case 280u: goto L_003166F0;
    case 281u: goto L_00316700;
    case 282u: goto L_00316710;
    case 283u: goto L_00316738;
    case 284u: goto L_00316750;
    case 285u: goto L_00316770;
    case 286u: goto L_003167A4;
    case 287u: goto L_003167D0;
    case 288u: goto L_003167E4;
    case 289u: goto L_00316834;
    case 290u: goto L_00316880;
    case 291u: goto L_0031689C;
    case 292u: goto L_003168B0;
    case 293u: goto L_003168C0;
    case 294u: goto L_003168E0;
    case 295u: goto L_00316900;
    case 296u: goto L_0031691C;
    case 297u: goto L_00316970;
    case 298u: goto L_003169E0;
    case 299u: goto L_00316A98;
    case 300u: goto L_00316AC4;
    case 301u: goto L_00316AE0;
    case 302u: goto L_00316B10;
    case 303u: goto L_00316BC4;
    case 304u: goto L_00316BD8;
    case 305u: goto L_00316BEC;
    case 306u: goto L_00316BF4;
    case 307u: goto L_00316C0C;
    case 308u: goto L_00316C1C;
    case 309u: goto L_00316C2C;
    case 310u: goto L_00316C3C;
    case 311u: goto L_00316C4C;
    case 312u: goto L_00316C5C;
    case 313u: goto L_00316C6C;
    case 314u: goto L_00316C7C;
    case 315u: goto L_00316C8C;
    case 316u: goto L_00316C9C;
    case 317u: goto L_00316CAC;
    case 318u: goto L_00316CBC;
    case 319u: goto L_00316CCC;
    case 320u: goto L_00316CDC;
    case 321u: goto L_00316CEC;
    case 322u: goto L_00316CFC;
    case 323u: goto L_00316D0C;
    case 324u: goto L_00316D1C;
    case 325u: goto L_00316D2C;
    case 326u: goto L_00316D3C;
    case 327u: goto L_00316D4C;
    case 328u: goto L_00316D5C;
    case 329u: goto L_00316D6C;
    case 330u: goto L_00316D7C;
    case 331u: goto L_00316D8C;
    case 332u: goto L_00316D9C;
    case 333u: goto L_00316DAC;
    case 334u: goto L_00316DBC;
    case 335u: goto L_00316DD0;
    case 336u: goto L_00316DF8;
    case 337u: goto L_00316E30;
    case 338u: goto L_00316F34;
    case 339u: goto L_00316F4C;
    case 340u: goto L_00316F54;
    case 341u: goto L_00316F5C;
    case 342u: goto L_00316F68;
    case 343u: goto L_00316F78;
    case 344u: goto L_00316FA0;
    case 345u: goto L_00316FB0;
    case 346u: goto L_00316FB8;
    case 347u: goto L_00316FC8;
    case 348u: goto L_00316FD0;
    case 349u: goto L_00317000;
    case 350u: goto L_00317014;
    case 351u: goto L_0031701C;
    case 352u: goto L_0031704C;
    case 353u: goto L_00317068;
    case 354u: goto L_00317078;
    case 355u: goto L_00317080;
    case 356u: goto L_00317090;
    case 357u: goto L_00317098;
    case 358u: goto L_003170B0;
    case 359u: goto L_0031710C;
    case 360u: goto L_00317114;
    case 361u: goto L_00317148;
    case 362u: goto L_00317164;
    case 363u: goto L_0031717C;
    case 364u: goto L_00317184;
    case 365u: goto L_00317198;
    case 366u: goto L_003171B0;
    case 367u: goto L_003172F0;
    case 368u: goto L_00317328;
    case 369u: goto L_00317330;
    case 370u: goto L_00317348;
    case 371u: goto L_00317350;
    case 372u: goto L_00317374;
    case 373u: goto L_00317380;
    case 374u: goto L_00317388;
    case 375u: goto L_003173A4;
    case 376u: goto L_003173AC;
    case 377u: goto L_003173B8;
    case 378u: goto L_003173C0;
    case 379u: goto L_003173C8;
    case 380u: goto L_003173F0;
    case 381u: goto L_0031741C;
    case 382u: goto L_00317438;
    case 383u: goto L_00317440;
    case 384u: goto L_00317448;
    case 385u: goto L_003174B0;
    case 386u: goto L_003174D4;
    case 387u: goto L_003174E0;
    case 388u: goto L_003174F0;
    case 389u: goto L_00317514;
    case 390u: goto L_00317520;
    case 391u: goto L_0031753C;
    case 392u: goto L_00317548;
    case 393u: goto L_00317574;
    case 394u: goto L_00317580;
    case 395u: goto L_00317588;
    case 396u: goto L_003175A4;
    case 397u: goto L_003175AC;
    case 398u: goto L_003175B4;
    case 399u: goto L_003175C0;
    case 400u: goto L_003175C8;
    case 401u: goto L_003175E0;
    case 402u: goto L_00317620;
    case 403u: goto L_00317640;
    case 404u: goto L_00317648;
    case 405u: goto L_00317650;
    case 406u: goto L_00317658;
    case 407u: goto L_00317664;
    case 408u: goto L_0031766C;
    case 409u: goto L_00317688;
    case 410u: goto L_00317690;
    case 411u: goto L_0031769C;
    case 412u: goto L_003176BC;
    case 413u: goto L_003176F4;
    case 414u: goto L_00317710;
    case 415u: goto L_00317720;
    case 416u: goto L_00317728;
    case 417u: goto L_00317730;
    case 418u: goto L_00317758;
    case 419u: goto L_00317760;
    case 420u: goto L_00317768;
    case 421u: goto L_00317770;
    case 422u: goto L_00317778;
    case 423u: goto L_00317780;
    case 424u: goto L_00317790;
    case 425u: goto L_00317798;
    case 426u: goto L_003177A0;
    case 427u: goto L_003177B8;
    case 428u: goto L_003177C0;
    case 429u: goto L_003177D0;
    case 430u: goto L_00317818;
    case 431u: goto L_00317844;
    case 432u: goto L_00317858;
    case 433u: goto L_0031786C;
    case 434u: goto L_00317874;
    case 435u: goto L_003178A0;
    case 436u: goto L_003178B0;
    case 437u: goto L_003178C4;
    case 438u: goto L_003178D8;
    case 439u: goto L_00317900;
    case 440u: goto L_00317928;
    case 441u: goto L_00317934;
    case 442u: goto L_00317948;
    case 443u: goto L_00317970;
    case 444u: goto L_0031797C;
    case 445u: goto L_00317988;
    case 446u: goto L_00317998;
    case 447u: goto L_003179A4;
    case 448u: goto L_003179DC;
    case 449u: goto L_003179E8;
    case 450u: goto L_003179FC;
    case 451u: goto L_00317A08;
    case 452u: goto L_00317A10;
    case 453u: goto L_00317A3C;
    case 454u: goto L_00317A78;
    case 455u: goto L_00317AA4;
    case 456u: goto L_00317AB0;
    case 457u: goto L_00317AB8;
    case 458u: goto L_00317AE0;
    case 459u: goto L_00317B18;
    case 460u: goto L_00317B2C;
    case 461u: goto L_00317B38;
    case 462u: goto L_00317B40;
    case 463u: goto L_00317B70;
    case 464u: goto L_00317BA0;
    case 465u: goto L_00317BA8;
    case 466u: goto L_00317BB0;
    case 467u: goto L_00317BD8;
    case 468u: goto L_00317BE0;
    case 469u: goto L_00317BF8;
    case 470u: goto L_00317C08;
    case 471u: goto L_00317C2C;
    case 472u: goto L_00317C48;
    case 473u: goto L_00317C50;
    case 474u: goto L_00317C58;
    case 475u: goto L_00317C64;
    case 476u: goto L_00317C6C;
    case 477u: goto L_00317C88;
    case 478u: goto L_00317C94;
    case 479u: goto L_00317CA0;
    case 480u: goto L_00317CCC;
    case 481u: goto L_00317CF4;
    case 482u: goto L_00317D00;
    case 483u: goto L_00317D08;
    case 484u: goto L_00317D24;
    case 485u: goto L_00317D30;
    case 486u: goto L_00317D60;
    case 487u: goto L_00317DA8;
    case 488u: goto L_00317DB0;
    case 489u: goto L_00317DB8;
    case 490u: goto L_00317DD4;
    case 491u: goto L_00317E0C;
    case 492u: goto L_00317E34;
    case 493u: goto L_00317E40;
    case 494u: goto L_00317E50;
    case 495u: goto L_00317E60;
    case 496u: goto L_00317E90;
    case 497u: goto L_00317EDC;
    case 498u: goto L_00317EF0;
    case 499u: goto L_00317F00;
    case 500u: goto L_00317F08;
    case 501u: goto L_00317F78;
    case 502u: goto L_00317F98;
    case 503u: goto L_00317FA8;
    case 504u: goto L_00317FE0;
    default: bad_entry(c, 0x00314000u); return;
    }
L_00314000:
    st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00314010:
    set32(c.r[3], 0u + 23u);
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23720u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[28].w[0] - 23036u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00314040:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23028u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 17792u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00314000u < 16384u) { entry = entries_0085[(t - 0x00314000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00314060:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23028u));
    st8((c.r[28].w[0] - 23036u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));
    st16((c.r[28].w[0] - 23008u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314084u); st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0085(c, 102u, depth + 1u); else { c.pc = 0x00314EF0u; return; } if (c.pc != 0x00314084u) [[unlikely]] return; }
L_00314084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031408Cu);  if (depth < kMaxDepth) unit_008D(c, 57u, depth + 1u); else { c.pc = 0x00334D60u; return; } if (c.pc != 0x0031408Cu) [[unlikely]] return; }
L_0031408C:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314098u); st16((c.r[28].w[0] - 23008u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 608u, depth + 1u); else { c.pc = 0x00363EB0u; return; } if (c.pc != 0x00314098u) [[unlikely]] return; }
L_00314098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003140A0u);  if (depth < kMaxDepth) unit_0098(c, 610u, depth + 1u); else { c.pc = 0x00363EF0u; return; } if (c.pc != 0x003140A0u) [[unlikely]] return; }
L_003140A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003140A8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0099(c, 3u, depth + 1u); else { c.pc = 0x00364090u; return; } if (c.pc != 0x003140A8u) [[unlikely]] return; }
L_003140A8:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003140B8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x003140B8u) [[unlikely]] return; }
L_003140B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003140D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 23008u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[28].w[0] - 23008u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 23008u)));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00314150; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[28].w[0] - 23064u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 99u);
    st8((c.r[28].w[0] - 23016u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23028u));
    st16((c.r[1].w[0] + 11302u), static_cast<std::uint16_t>(0u));
    st8((c.r[28].w[0] - 23036u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314120u); st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008C(c, 200u, depth + 1u); else { c.pc = 0x00333640u; return; } if (c.pc != 0x00314120u) [[unlikely]] return; }
L_00314120:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031412Cu);  if (depth < kMaxDepth) unit_008C(c, 212u, depth + 1u); else { c.pc = 0x00333960u; return; } if (c.pc != 0x0031412Cu) [[unlikely]] return; }
L_0031412C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314134u);  if (depth < kMaxDepth) unit_0099(c, 4u, depth + 1u); else { c.pc = 0x003640E0u; return; } if (c.pc != 0x00314134u) [[unlikely]] return; }
L_00314134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031413Cu);  if (depth < kMaxDepth) unit_008C(c, 210u, depth + 1u); else { c.pc = 0x003338F0u; return; } if (c.pc != 0x0031413Cu) [[unlikely]] return; }
L_0031413C:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], c.f[0]);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_00314150:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00314160:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = 0ull | 32768ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314178u); st8((c.r[28].w[0] - 23064u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 50u, depth + 1u); else { c.pc = 0x00334C90u; return; } if (c.pc != 0x00314178u) [[unlikely]] return; }
L_00314178:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00314198; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 11302u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 11302u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003141A0; } }
    c.budget -= 1;
L_00314198:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 11302u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_003141A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003141A8u);  if (depth < kMaxDepth) unit_008B(c, 284u, depth + 1u); else { c.pc = 0x0032FC10u; return; } if (c.pc != 0x003141A8u) [[unlikely]] return; }
L_003141A8:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_003141D8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003141C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003141F8; } }
    c.budget -= 1;
L_003141C8:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23028u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003141F8; } }
L_003141D8:
    set32(c.r[2], 0u + 5u);
    st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 11311u)));
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003141F8u); st8((c.r[28].w[0] - 22760u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 57u, depth + 1u); else { c.pc = 0x00334D60u; return; } if (c.pc != 0x003141F8u) [[unlikely]] return; }
L_003141F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 11309u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00314214; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0031422C; } }
L_00314214:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[12] = fp::add(c.f[12], c.f[12]);
    c.budget -= 6;
L_0031422C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314234u);  if (depth < kMaxDepth) unit_008C(c, 212u, depth + 1u); else { c.pc = 0x00333960u; return; } if (c.pc != 0x00314234u) [[unlikely]] return; }
L_00314234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031423Cu);  if (depth < kMaxDepth) unit_008C(c, 210u, depth + 1u); else { c.pc = 0x003338F0u; return; } if (c.pc != 0x0031423Cu) [[unlikely]] return; }
L_0031423C:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], c.f[0]);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00314260:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23028u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314278u); st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 57u, depth + 1u); else { c.pc = 0x00334D60u; return; } if (c.pc != 0x00314278u) [[unlikely]] return; }
L_00314278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314280u); set32(c.r[4], 0u + 8192u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x00314280u) [[unlikely]] return; }
L_00314280:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031428Cu); st16((c.r[28].w[0] - 23008u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 602u, depth + 1u); else { c.pc = 0x00363D90u; return; } if (c.pc != 0x0031428Cu) [[unlikely]] return; }
L_0031428C:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031429Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x0031429Cu) [[unlikely]] return; }
L_0031429C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003142B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 23008u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[28].w[0] - 23008u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00314320; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003142DCu);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x003142DCu) [[unlikely]] return; }
L_003142DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00314320; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003142ECu);  if (depth < kMaxDepth) unit_0098(c, 601u, depth + 1u); else { c.pc = 0x00363D80u; return; } if (c.pc != 0x003142ECu) [[unlikely]] return; }
L_003142EC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 23716u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00314308; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23020u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00314310; } }
L_00314308:
    set32(c.r[3], 0u + 23u);
    st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00314310:
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23036u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00314320:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00314330:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 10u);
    c.r[4].d[0] = ld8((c.r[28].w[0] - 23024u));
    st32((c.r[1].w[0] + 4772u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st32((c.r[1].w[0] + 4780u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st32((c.r[1].w[0] + 4776u), 0u);  if (t) { goto L_00314428; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00314390; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00314378; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00314430; } }
L_00314378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314380u);  if (depth < kMaxDepth) unit_008C(c, 105u, depth + 1u); else { c.pc = 0x00331DE0u; return; } if (c.pc != 0x00314380u) [[unlikely]] return; }
L_00314380:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23024u));
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00314390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314398u);  if (depth < kMaxDepth) unit_008C(c, 120u, depth + 1u); else { c.pc = 0x003320A0u; return; } if (c.pc != 0x00314398u) [[unlikely]] return; }
L_00314398:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003143E0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003143C8; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00314430; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00314430; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00314430; } }
L_003143C8:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003143D4u); st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 57u, depth + 1u); else { c.pc = 0x00334D60u; return; } if (c.pc != 0x003143D4u) [[unlikely]] return; }
L_003143D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00314430; } }
    c.budget -= 1;
L_003143E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 22812u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00314408; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003143F4u);  if (depth < kMaxDepth) unit_008D(c, 57u, depth + 1u); else { c.pc = 0x00334D60u; return; } if (c.pc != 0x003143F4u) [[unlikely]] return; }
L_003143F4:
    set32(c.r[4], 0u + 16u);
    set32(c.r[3], 0u - 8u);
    st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23056u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00314430; } }
L_00314408:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23020u));
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23036u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00314430; } }
L_00314428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314430u);  if (depth < kMaxDepth) unit_0085(c, 3u, depth + 1u); else { c.pc = 0x00314040u; return; } if (c.pc != 0x00314430u) [[unlikely]] return; }
L_00314430:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00314440:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[28].w[0] - 23052u);
    st8((c.r[28].w[0] - 23064u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031445Cu); set32(c.r[5], c.r[28].w[0] - 23008u);  if (depth < kMaxDepth) unit_008C(c, 76u, depth + 1u); else { c.pc = 0x003317B0u; return; } if (c.pc != 0x0031445Cu) [[unlikely]] return; }
L_0031445C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00314478; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    st8((c.r[28].w[0] - 23016u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23052u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00314480; } }
L_00314478:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00314480:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00314490:
    set32(c.r[3], 0u + 1u);
    st32((c.r[28].w[0] - 22788u), 0u);
    st32((c.r[28].w[0] - 22784u), 0u);
    st8((c.r[28].w[0] - 22780u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[28].w[0] - 22776u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_003144B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 24u), c.r[4].w[0]);
    st16((c.r[29].w[0] + 28u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[29].w[0] + 24u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003144CCu); st16((c.r[29].w[0] + 30u), static_cast<std::uint16_t>(c.r[6].w[0]));  if (depth < kMaxDepth) unit_0083(c, 422u, depth + 1u); else { c.pc = 0x0030FE90u; return; } if (c.pc != 0x003144CCu) [[unlikely]] return; }
L_003144CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003144D4u);  if (depth < kMaxDepth) unit_0085(c, 38u, depth + 1u); else { c.pc = 0x00314490u; return; } if (c.pc != 0x003144D4u) [[unlikely]] return; }
L_003144D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003144E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314514u); set32(c.r[5], c.r[5].w[0] + 10176u);  if (depth < kMaxDepth) unit_0083(c, 440u, depth + 1u); else { c.pc = 0x0030FFF0u; return; } if (c.pc != 0x00314514u) [[unlikely]] return; }
L_00314514:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00314528; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003146C0; } }
    c.budget -= 1;
L_00314528:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 10176u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_00314548; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003146C0; } }
    c.budget -= 1;
L_00314548:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 22776u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_003145D0; } }
    c.r[2].d[0] = ld16((c.r[1].w[0] + 10182u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003145D0; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314570u); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_0084(c, 49u, depth + 1u); else { c.pc = 0x00310120u; return; } if (c.pc != 0x00314570u) [[unlikely]] return; }
L_00314570:
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00314588; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003146C0; } }
    c.budget -= 1;
L_00314588:
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 22776u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 4u));
    c.r[2].d[0] = ld16((c.r[1].w[0] + 10182u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - 12u);
    st32((c.r[28].w[0] - 22784u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[4].d[0] = ld8((c.r[18].w[0] + 5u));
    set32(c.r[3], ld32((c.r[28].w[0] - 22784u)));
    st16((c.r[1].w[0] + 10182u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 22788u), 0u);
    st32((c.r[28].w[0] - 22784u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[28].w[0] - 22784u));
    st32((c.r[28].w[0] - 22784u), c.r[2].w[0]);
    c.budget -= 18;
L_003145D0:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 22776u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003146B8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22788u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 22784u)));
    set32(c.r[4], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00314600; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003145F8u);  if (depth < kMaxDepth) unit_0085(c, 38u, depth + 1u); else { c.pc = 0x00314490u; return; } if (c.pc != 0x003145F8u) [[unlikely]] return; }
L_003145F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003146C0; } }
L_00314600:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 10182u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00314618; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00314618:
    set32(c.r[2], c.r[16].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00314630; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00314630:
    c.r[1].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = c.r[4].d[0] << 48;  if (t) { goto L_003146B8; } }
    set32(c.r[5], c.r[17].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031464Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 49u, depth + 1u); else { c.pc = 0x00310120u; return; } if (c.pc != 0x0031464Cu) [[unlikely]] return; }
L_0031464C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00314660; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003146C0; } }
    c.budget -= 1;
L_00314660:
    set32(c.r[4], ld32((c.r[28].w[0] - 22788u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 22784u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[28].w[0] - 22788u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22788u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00314690; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314684u);  if (depth < kMaxDepth) unit_0085(c, 38u, depth + 1u); else { c.pc = 0x00314490u; return; } if (c.pc != 0x00314684u) [[unlikely]] return; }
L_00314684:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003146C0; } }
    c.budget -= 1;
L_00314690:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_003146B8; } }
    set32(c.r[2], c.r[3].w[0] - c.r[16].w[0]);
    st32((c.r[28].w[0] - 22788u), 0u);
    st32((c.r[28].w[0] - 22784u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[28].w[0] - 22780u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[28].w[0] - 22780u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003146C0; } }
L_003146B8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003146C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003146E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23028u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st32((c.r[29].w[0] + 60u), 0u);  if (t) { goto L_00314928; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00314868; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00314720; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00314A08; } }
    c.budget -= 1;
L_00314720:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 13600u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 64u);
    st8((c.r[1].w[0] + 13600u), static_cast<std::uint8_t>(0u));
    st16((c.r[28].w[0] - 22796u), static_cast<std::uint16_t>(0u));
    st16((c.r[28].w[0] - 22792u), static_cast<std::uint16_t>(0u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314748u); st8((c.r[28].w[0] - 23036u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00314748u) [[unlikely]] return; }
L_00314748:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] + 5184u);
    c.budget -= 4;
L_00314758:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 13664u);
    set32(c.r[5], c.r[16].w[0] + 1539u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031476Cu); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_0007(c, 138u, depth + 1u); else { c.pc = 0x0011E108u; return; } if (c.pc != 0x0031476Cu) [[unlikely]] return; }
L_0031476C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] << 3);  if (t) { goto L_003147B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[5], c.r[3].w[0] - c.r[17].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 5184u);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 13600u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[6], 0u + 64u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003147A4u); set32(c.r[5], c.r[2].w[0] + 559u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x003147A4u) [[unlikely]] return; }
L_003147A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003147C0; } }
    c.budget -= 1;
L_003147B0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 257u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00314758u | kUnwind; return; } goto L_00314758; } }
L_003147C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[5], c.r[5].w[0] + 13600u);
    set32(c.r[2], 0u + 58u);
    c.budget -= 4;
L_003147D0:
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003147F0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003147F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003147D0u | kUnwind; return; } goto L_003147D0; } }
    c.budget -= 1;
L_003147F0:
    set32(c.r[2], 0u + 58u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00314858; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 32u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_00314840; } }
    c.budget -= 1;
L_00314810:
    c.r[4].d[0] = ld16((c.r[28].w[0] - 22796u));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    st16((c.r[28].w[0] - 22796u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = ld16((c.r[28].w[0] - 22796u));
    set32(c.r[4], c.r[4].w[0] - 48u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[28].w[0] - 22796u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 12;
L_00314840:
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00314858; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00314810u | kUnwind; return; } goto L_00314810; } }
    c.budget -= 1;
L_00314858:
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_00314A10; } }
L_00314868:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[28].w[0] - 23036u);
    set32(c.r[5], c.r[28].w[0] - 22792u);
    set32(c.r[6], c.r[29].w[0] + 60u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314880u); set32(c.r[7], c.r[7].w[0] + 13600u);  if (depth < kMaxDepth) unit_008B(c, 259u, depth + 1u); else { c.pc = 0x0032F670u; return; } if (c.pc != 0x00314880u) [[unlikely]] return; }
L_00314880:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003148B8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003148B0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003148A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003148C8; } }
L_003148A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_00314A10; } }
L_003148B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23036u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003148C8; } }
L_003148B8:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23036u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00314A10; } }
    c.budget -= 1;
L_003148C8:
    c.r[2].d[0] = ld16((c.r[28].w[0] - 22796u));
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.r[3].d[0] = c.r[3].d[0] & 65280ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003148F0u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0085(c, 39u, depth + 1u); else { c.pc = 0x003144B0u; return; } if (c.pc != 0x003148F0u) [[unlikely]] return; }
L_003148F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[1].w[0] + 10160u), c.r[2].w[0]);  if (t) { goto L_00314908; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00314A10; } }
    c.budget -= 1;
L_00314908:
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], 0u + 60u);
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[28].w[0] - 22756u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 2u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22752u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00314A10; } }
    c.budget -= 1;
L_00314928:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22752u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[28].w[0] - 22752u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_00314950; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00314A10; } }
L_00314950:
    set32(c.r[2], 0u + 60u);
    st8((c.r[28].w[0] - 22752u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22756u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[28].w[0] - 22756u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22756u)));
    c.r[1].d[0] = c.r[2].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00314998; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031497Cu); set32(c.r[4], ld32((c.r[1].w[0] + 10160u)));  if (depth < kMaxDepth) unit_0084(c, 76u, depth + 1u); else { c.pc = 0x00310240u; return; } if (c.pc != 0x0031497Cu) [[unlikely]] return; }
L_0031497C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314988u); set32(c.r[4], c.r[4].w[0] + 10160u);  if (depth < kMaxDepth) unit_0084(c, 80u, depth + 1u); else { c.pc = 0x00310270u; return; } if (c.pc != 0x00314988u) [[unlikely]] return; }
L_00314988:
    st8((c.r[28].w[0] - 22752u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22756u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00314A10; } }
L_00314998:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 10160u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003149ACu); set32(c.r[5], c.r[5].w[0] + 10176u);  if (depth < kMaxDepth) unit_0083(c, 440u, depth + 1u); else { c.pc = 0x0030FFF0u; return; } if (c.pc != 0x003149ACu) [[unlikely]] return; }
L_003149AC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_003149D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003149BCu); set32(c.r[4], ld32((c.r[1].w[0] + 10160u)));  if (depth < kMaxDepth) unit_0084(c, 76u, depth + 1u); else { c.pc = 0x00310240u; return; } if (c.pc != 0x003149BCu) [[unlikely]] return; }
L_003149BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003149C8u); set32(c.r[4], c.r[4].w[0] + 10160u);  if (depth < kMaxDepth) unit_0084(c, 80u, depth + 1u); else { c.pc = 0x00310270u; return; } if (c.pc != 0x003149C8u) [[unlikely]] return; }
L_003149C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00314A10; } }
L_003149D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 10176u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 2u);  if (t) { goto L_003149F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00314A10; } }
    c.budget -= 1;
L_003149F0:
    st8((c.r[28].w[0] - 22752u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 22756u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00314A10; } }
    c.budget -= 1;
L_00314A08:
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_00314A10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00314A30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = ld8((c.r[28].w[0] - 23720u));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00314A58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314A50u);  if (depth < kMaxDepth) unit_008B(c, 19u, depth + 1u); else { c.pc = 0x0032C150u; return; } if (c.pc != 0x00314A50u) [[unlikely]] return; }
L_00314A50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314A58u);  if (depth < kMaxDepth) unit_00AA(c, 36u, depth + 1u); else { c.pc = 0x003A8430u; return; } if (c.pc != 0x00314A58u) [[unlikely]] return; }
L_00314A58:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 23028u));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_00314DC8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00314DB0; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_00314D88; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00314D70; } }
    set32(c.r[3], 0u + 99u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00314D00; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00314BF8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00314AE0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00314AB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00314DD0; } }
    c.budget -= 1;
L_00314AB8:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314AC8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008B(c, 218u, depth + 1u); else { c.pc = 0x0032EEC0u; return; } if (c.pc != 0x00314AC8u) [[unlikely]] return; }
L_00314AC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314AD0u);  if (depth < kMaxDepth) unit_008B(c, 219u, depth + 1u); else { c.pc = 0x0032EED0u; return; } if (c.pc != 0x00314AD0u) [[unlikely]] return; }
L_00314AD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314AD8u); st8((c.r[28].w[0] - 22948u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0049(c, 11u, depth + 1u); else { c.pc = 0x00224150u; return; } if (c.pc != 0x00314AD8u) [[unlikely]] return; }
L_00314AD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00314DD0; } }
L_00314AE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314AE8u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x00314AE8u) [[unlikely]] return; }
L_00314AE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00314DD0; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23028u));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314B04u); st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0001(c, 82u, depth + 1u); else { c.pc = 0x00104560u; return; } if (c.pc != 0x00314B04u) [[unlikely]] return; }
L_00314B04:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 18288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314B18u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00314B18u) [[unlikely]] return; }
L_00314B18:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23720u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00314B70; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00314B70; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00314B48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00314BA0; } }
    c.budget -= 1;
L_00314B48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[4], c.r[4].w[0] + 18288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314B5Cu); set32(c.r[5], c.r[5].w[0] + 5212u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00314B5Cu) [[unlikely]] return; }
L_00314B5C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314B68u); st8((c.r[28].w[0] - 22084u), static_cast<std::uint8_t>(0u));  call(c, 0x011902A0u, depth + 1u); if (c.pc != 0x00314B68u) [[unlikely]] return; }
L_00314B68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00314DD0; } }
L_00314B70:
    set32(c.r[2], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00900000u);
    st8((c.r[28].w[0] - 22084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 18288u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314B8Cu); set32(c.r[5], c.r[5].w[0] + 5469u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00314B8Cu) [[unlikely]] return; }
L_00314B8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314B94u); c.r[4].d[0] = 0ull + 0ull;  call(c, 0x011902A0u, depth + 1u); if (c.pc != 0x00314B94u) [[unlikely]] return; }
L_00314B94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00314DD0; } }
    c.budget -= 1;
L_00314BA0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 23716u)));
    st8((c.r[28].w[0] - 23720u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[28].w[0] - 22084u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00314BD0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 18288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314BC4u); set32(c.r[5], c.r[5].w[0] - 18720u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00314BC4u) [[unlikely]] return; }
L_00314BC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00314BE8; } }
    c.budget -= 1;
L_00314BD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 18288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314BE4u); set32(c.r[5], c.r[5].w[0] - 18672u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00314BE4u) [[unlikely]] return; }
L_00314BE4:
    c.budget -= 1;
L_00314BE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314BF0u); c.r[4].d[0] = 0ull + 0ull;  call(c, 0x011902A0u, depth + 1u); if (c.pc != 0x00314BF0u) [[unlikely]] return; }
L_00314BF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00314DD0; } }
L_00314BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314C00u);  call(c, 0x01190820u, depth + 1u); if (c.pc != 0x00314C00u) [[unlikely]] return; }
L_00314C00:
    set32(c.r[3], 0u - 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_00314CE0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_00314CB8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00314CA0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00314C38; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00314DD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00314DD0; } }
    c.budget -= 1;
L_00314C38:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23720u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00314C60; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00314C88; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 21964u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 46u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00314C88; } }
    c.budget -= 1;
L_00314C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314C68u);  call(c, 0x01190570u, depth + 1u); if (c.pc != 0x00314C68u) [[unlikely]] return; }
L_00314C68:
    set32(c.r[3], 0u + 5u);
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23036u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23720u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00314DD0; } }
L_00314C88:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 23028u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[28].w[0] - 23720u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00314DD0; } }
L_00314CA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314CA8u);  call(c, 0x01190570u, depth + 1u); if (c.pc != 0x00314CA8u) [[unlikely]] return; }
L_00314CA8:
    set32(c.r[3], 0u + 99u);
    st8((c.r[28].w[0] - 23720u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00314DD0; } }
L_00314CB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314CC0u);  call(c, 0x01190570u, depth + 1u); if (c.pc != 0x00314CC0u) [[unlikely]] return; }
L_00314CC0:
    set32(c.r[3], 0u + 5u);
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23036u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23720u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00314DD0; } }
L_00314CE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314CE8u);  call(c, 0x01190570u, depth + 1u); if (c.pc != 0x00314CE8u) [[unlikely]] return; }
L_00314CE8:
    set32(c.r[2], 0u + 99u);
    st8((c.r[28].w[0] - 23720u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314CF8u); st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0089(c, 236u, depth + 1u); else { c.pc = 0x003264F0u; return; } if (c.pc != 0x00314CF8u) [[unlikely]] return; }
L_00314CF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00314DD0; } }
L_00314D00:
    set32(c.r[2], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00900000u);
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 18288u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314D1Cu); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00314D1Cu) [[unlikely]] return; }
L_00314D1C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 23716u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00900000u);  if (t) { goto L_00314D40; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 18288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314D38u); set32(c.r[5], c.r[5].w[0] - 18720u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00314D38u) [[unlikely]] return; }
L_00314D38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00314D58; } }
L_00314D40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 18288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314D54u); set32(c.r[5], c.r[5].w[0] - 18672u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00314D54u) [[unlikely]] return; }
L_00314D54:
    c.budget -= 1;
L_00314D58:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314D64u); st8((c.r[28].w[0] - 22084u), static_cast<std::uint8_t>(0u));  call(c, 0x011902A0u, depth + 1u); if (c.pc != 0x00314D64u) [[unlikely]] return; }
L_00314D64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00314DD0; } }
    c.budget -= 1;
L_00314D70:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314D7Cu); st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(c.r[2].w[0]));  call(c, 0x01190570u, depth + 1u); if (c.pc != 0x00314D7Cu) [[unlikely]] return; }
L_00314D7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00314DD0; } }
    c.budget -= 1;
L_00314D88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314D90u);  if (depth < kMaxDepth) unit_008B(c, 219u, depth + 1u); else { c.pc = 0x0032EED0u; return; } if (c.pc != 0x00314D90u) [[unlikely]] return; }
L_00314D90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314D98u);  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00314D98u) [[unlikely]] return; }
L_00314D98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314DA0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 130u, depth + 1u); else { c.pc = 0x003355C0u; return; } if (c.pc != 0x00314DA0u) [[unlikely]] return; }
L_00314DA0:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00314DD0; } }
    c.budget -= 1;
L_00314DB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314DB8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 144u, depth + 1u); else { c.pc = 0x00335690u; return; } if (c.pc != 0x00314DB8u) [[unlikely]] return; }
L_00314DB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 6u);  if (t) { goto L_00314DE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00314DD0; } }
L_00314DC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314DD0u);  if (depth < kMaxDepth) unit_0084(c, 484u, depth + 1u); else { c.pc = 0x00313FD0u; return; } if (c.pc != 0x00314DD0u) [[unlikely]] return; }
L_00314DD0:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 23720u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00314DE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314DE8u);  if (depth < kMaxDepth) unit_008B(c, 22u, depth + 1u); else { c.pc = 0x0032C1B0u; return; } if (c.pc != 0x00314DE8u) [[unlikely]] return; }
L_00314DE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00314E00:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23024u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 17768u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00314000u < 16384u) { entry = entries_0085[(t - 0x00314000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00314E20:
    set32(c.r[3], 0u + 1u);
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00314E40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314E50u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0085(c, 48u, depth + 1u); else { c.pc = 0x003146E0u; return; } if (c.pc != 0x00314E50u) [[unlikely]] return; }
L_00314E50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u - 2u);  if (t) { goto L_00314E90; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00314EB8; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00314E78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00314EB8; } }
    c.budget -= 1;
L_00314E78:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314E84u); st8((c.r[2].w[0] + 54u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0084(c, 485u, depth + 1u); else { c.pc = 0x00313FF0u; return; } if (c.pc != 0x00314E84u) [[unlikely]] return; }
L_00314E84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00314EB8; } }
    c.budget -= 1;
L_00314E90:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 3u);
    st8((c.r[3].w[0] + 54u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314EB4u); st16((c.r[28].w[0] - 23008u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0089(c, 143u, depth + 1u); else { c.pc = 0x003258A0u; return; } if (c.pc != 0x00314EB4u) [[unlikely]] return; }
L_00314EB4:
    c.budget -= 1;
L_00314EB8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00314ED0:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23024u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 17760u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00314000u < 16384u) { entry = entries_0085[(t - 0x00314000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00314EF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 13696u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314F0Cu); set32(c.r[6], 0u + 200u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00314F0Cu) [[unlikely]] return; }
L_00314F0C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[28].w[0] - 22772u), static_cast<std::uint8_t>(0u));
    st8((c.r[1].w[0] + 4758u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00314F30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = ld8((c.r[28].w[0] - 22772u));
    c.r[1].d[0] = c.r[4].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] << 2);  if (t) { goto L_00314F78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[2], c.r[2].w[0] + 13696u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 13664u);
    set32(c.r[6], 0u + 20u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314F6Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00314F6Cu) [[unlikely]] return; }
L_00314F6C:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 22772u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[28].w[0] - 22772u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00314F78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00314F90:
    set32(c.r[29], c.r[29].w[0] - 464u);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != 0ull; st8((c.r[1].w[0] + 4756u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003151C8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 13904u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314FD4u); set32(c.r[6], 0u + 200u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00314FD4u) [[unlikely]] return; }
L_00314FD4:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23724u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00315050; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[18], c.r[29].w[0] + 208u);
    set32(c.r[19], c.r[19].w[0] + 5184u);
    set32(c.r[17], c.r[29].w[0] + 160u);
    set32(c.r[16], c.r[29].w[0] + 112u);
    c.budget -= 5;
L_00314FF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315000u); set32(c.r[4], c.r[19].w[0] + 9836u);  if (depth < kMaxDepth) unit_0005(c, 103u, depth + 1u); else { c.pc = 0x00116610u; return; } if (c.pc != 0x00315000u) [[unlikely]] return; }
L_00315000:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031500Cu); set32(c.r[4], c.r[19].w[0] + 9506u);  if (depth < kMaxDepth) unit_0005(c, 103u, depth + 1u); else { c.pc = 0x00116610u; return; } if (c.pc != 0x0031500Cu) [[unlikely]] return; }
L_0031500C:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00315030; } }
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_00315030:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23724u));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 33u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.r[4].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00314FF8u | kUnwind; return; } goto L_00314FF8; } }
L_00315050:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00315098; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[4], c.r[4].w[0] + 13904u);
    set32(c.r[5], c.r[5].w[0] + 2336u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315070u); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00315070u) [[unlikely]] return; }
L_00315070:
    set32(c.r[5], ld32((c.r[29].w[0] + 208u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    st16((c.r[1].w[0] + 13920u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[1].w[0] + 13918u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 13922u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003152F0; } }
L_00315098:
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00315110; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[21], c.r[21].w[0] + 2336u);
    set32(c.r[20], c.r[20].w[0] + 13904u);
    set32(c.r[19], c.r[29].w[0] + 208u);
    set32(c.r[18], c.r[29].w[0] + 160u);
    set32(c.r[17], c.r[29].w[0] + 112u);
    c.budget -= 7;
L_003150C0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003150D0u); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x003150D0u) [[unlikely]] return; }
L_003150D0:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[21], c.r[21].w[0] + 258u);
    st16((c.r[20].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[19], c.r[19].w[0] + 4u);
    set32(c.r[3], ld32((c.r[18].w[0])));
    st16((c.r[20].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    st16((c.r[20].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23724u));
    c.r[4].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003150C0u | kUnwind; return; } goto L_003150C0; } }
    c.budget -= 1;
L_00315110:
    set32(c.r[4], c.r[3].w[0] - 1u);
    c.r[1].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003152F0; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[18], c.r[18].w[0] + 13904u);
    c.budget -= 2;
L_00315128:
    set32(c.r[19], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[19].w[0] << 2);  if (t) { goto L_003151A8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] + 13904u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
L_00315150:
    c.r[4].d[0] = ld16((c.r[18].w[0] + 18u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 18u));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 256u);  if (t) { goto L_00315190; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315170u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00315170u) [[unlikely]] return; }
L_00315170:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315180u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00315180u) [[unlikely]] return; }
L_00315180:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315190u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00315190u) [[unlikely]] return; }
L_00315190:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23724u));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[4].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00315150u | kUnwind; return; } goto L_00315150; } }
    c.budget -= 1;
L_003151A8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[3].w[0] - 1u);
    c.r[4].d[0] = c.r[16].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00315128u | kUnwind; return; } goto L_00315128; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003152F0; } }
    c.budget -= 1;
L_003151C8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003152F0; } }
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003151E4u); set32(c.r[6], 0u + 200u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003151E4u) [[unlikely]] return; }
L_003151E4:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23724u));
    c.r[19].d[0] = 0ull + 0ull;
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00315260; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[17], c.r[17].w[0] + 13904u);
    c.budget -= 2;
L_00315200:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 13664u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315214u); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_0007(c, 138u, depth + 1u); else { c.pc = 0x0011E108u; return; } if (c.pc != 0x00315214u) [[unlikely]] return; }
L_00315214:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] << 2);  if (t) { goto L_00315248; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 13904u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[6], 0u + 20u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031523Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0031523Cu) [[unlikely]] return; }
L_0031523C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_00315260; } }
    c.budget -= 1;
L_00315248:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23724u));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00315200u | kUnwind; return; } goto L_00315200; } }
    c.budget -= 1;
L_00315260:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23724u));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003152D8; } }
    set32(c.r[2], c.r[19].w[0] << 2);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[18], c.r[18].w[0] + 13904u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[17], c.r[2].w[0] + 256u);
    c.budget -= 8;
L_00315290:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 13664u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003152A4u); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_0007(c, 138u, depth + 1u); else { c.pc = 0x0011E108u; return; } if (c.pc != 0x003152A4u) [[unlikely]] return; }
L_003152A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003152C0; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003152B8u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x003152B8u) [[unlikely]] return; }
L_003152B8:
    set32(c.r[17], c.r[17].w[0] + 20u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_003152C0:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23724u));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00315290u | kUnwind; return; } goto L_00315290; } }
    c.budget -= 1;
L_003152D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 13904u);
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003152ECu); set32(c.r[6], 0u + 200u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x003152ECu) [[unlikely]] return; }
L_003152EC:
    c.budget -= 1;
L_003152F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 464u);  c.pc = t; return; }
L_00315320:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 13920u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 4756u));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00315410; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4758u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003153D8; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 22772u));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003153D8; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[16], c.r[16].w[0] + 13696u);
    c.budget -= 2;
L_00315380:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 4756u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[2], c.r[2].w[0] + 13904u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 12u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003153ACu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0007(c, 138u, depth + 1u); else { c.pc = 0x0011E108u; return; } if (c.pc != 0x003153ACu) [[unlikely]] return; }
L_003153AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003153C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00315418; } }
    c.budget -= 1;
L_003153C0:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 22772u));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00315380u | kUnwind; return; } goto L_00315380; } }
    c.budget -= 1;
L_003153D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 4756u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[2], c.r[2].w[0] + 13904u);
    set32(c.r[4], c.r[4].w[0] + 13664u);
    set32(c.r[6], 0u + 20u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315408u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00315408u) [[unlikely]] return; }
L_00315408:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00315418; } }
L_00315410:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00315418:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00315430:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 4757u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 55u);  if (t) { goto L_00315458; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315454u);  if (depth < kMaxDepth) unit_008D(c, 61u, depth + 1u); else { c.pc = 0x00334DB0u; return; } if (c.pc != 0x00315454u) [[unlikely]] return; }
L_00315454:
    c.budget -= 1;
L_00315458:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[6].d[0] = ld8((c.r[1].w[0] + 4757u));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_003154A8; } }
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315484u); st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0085(c, 106u, depth + 1u); else { c.pc = 0x00314F90u; return; } if (c.pc != 0x00315484u) [[unlikely]] return; }
L_00315484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031548Cu);  if (depth < kMaxDepth) unit_0085(c, 127u, depth + 1u); else { c.pc = 0x00315320u; return; } if (c.pc != 0x0031548Cu) [[unlikely]] return; }
L_0031548C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00315650; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031549Cu);  if (depth < kMaxDepth) unit_0084(c, 485u, depth + 1u); else { c.pc = 0x00313FF0u; return; } if (c.pc != 0x0031549Cu) [[unlikely]] return; }
L_0031549C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00315650; } }
    c.budget -= 1;
L_003154A8:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[4].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_003154C0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00315508; } }
    c.budget -= 1;
L_003154C0:
    set32(c.r[2], 0u + 2u);
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003154D4u); st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x003154D4u) [[unlikely]] return; }
L_003154D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003154E8u); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003154E8u) [[unlikely]] return; }
L_003154E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003154F4u); set32(c.r[4], c.r[4].w[0] + 15536u);  if (depth < kMaxDepth) unit_009B(c, 144u, depth + 1u); else { c.pc = 0x0036DC40u; return; } if (c.pc != 0x003154F4u) [[unlikely]] return; }
L_003154F4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315500u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 83u, depth + 1u); else { c.pc = 0x00334FC0u; return; } if (c.pc != 0x00315500u) [[unlikely]] return; }
L_00315500:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00315650; } }
L_00315508:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_00315650; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 22764u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00315598; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4758u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00315548; } }
    st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315540u); st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0085(c, 106u, depth + 1u); else { c.pc = 0x00314F90u; return; } if (c.pc != 0x00315540u) [[unlikely]] return; }
L_00315540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00315580; } }
L_00315548:
    st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315560u); st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0085(c, 106u, depth + 1u); else { c.pc = 0x00314F90u; return; } if (c.pc != 0x00315560u) [[unlikely]] return; }
L_00315560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315568u);  if (depth < kMaxDepth) unit_0085(c, 127u, depth + 1u); else { c.pc = 0x00315320u; return; } if (c.pc != 0x00315568u) [[unlikely]] return; }
L_00315568:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00315580; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315578u);  if (depth < kMaxDepth) unit_0084(c, 485u, depth + 1u); else { c.pc = 0x00313FF0u; return; } if (c.pc != 0x00315578u) [[unlikely]] return; }
L_00315578:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00315650; } }
L_00315580:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031558Cu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x0031558Cu) [[unlikely]] return; }
L_0031558C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00315650; } }
    c.budget -= 1;
L_00315598:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_003155C8; } }
    set32(c.r[3], 0u + 23u);
    st8((c.r[28].w[0] - 23720u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[28].w[0] - 22764u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23036u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00315650; } }
    c.budget -= 1;
L_003155C8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00315650; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4758u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00315600; } }
    st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003155F4u); st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0085(c, 106u, depth + 1u); else { c.pc = 0x00314F90u; return; } if (c.pc != 0x003155F4u) [[unlikely]] return; }
L_003155F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00315638; } }
    c.budget -= 1;
L_00315600:
    st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315618u); st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0085(c, 106u, depth + 1u); else { c.pc = 0x00314F90u; return; } if (c.pc != 0x00315618u) [[unlikely]] return; }
L_00315618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315620u);  if (depth < kMaxDepth) unit_0085(c, 127u, depth + 1u); else { c.pc = 0x00315320u; return; } if (c.pc != 0x00315620u) [[unlikely]] return; }
L_00315620:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00315638; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315630u);  if (depth < kMaxDepth) unit_0084(c, 485u, depth + 1u); else { c.pc = 0x00313FF0u; return; } if (c.pc != 0x00315630u) [[unlikely]] return; }
L_00315630:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00315650; } }
L_00315638:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315644u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x00315644u) [[unlikely]] return; }
L_00315644:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315650u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x00315650u) [[unlikely]] return; }
L_00315650:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00315660:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = ld8((c.r[1].w[0] + 4757u));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_003156F0; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23724u));
    c.r[4].d[0] = ld8((c.r[1].w[0] + 4756u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 4756u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 4756u));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003156D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003156A8u);  if (depth < kMaxDepth) unit_0085(c, 127u, depth + 1u); else { c.pc = 0x00315320u; return; } if (c.pc != 0x003156A8u) [[unlikely]] return; }
L_003156A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003156C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003156B8u);  if (depth < kMaxDepth) unit_0084(c, 485u, depth + 1u); else { c.pc = 0x00313FF0u; return; } if (c.pc != 0x003156B8u) [[unlikely]] return; }
L_003156B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00315838; } }
L_003156C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003156C8u);  if (depth < kMaxDepth) unit_0084(c, 481u, depth + 1u); else { c.pc = 0x00313F90u; return; } if (c.pc != 0x003156C8u) [[unlikely]] return; }
L_003156C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00315838; } }
L_003156D0:
    set32(c.r[3], 0u + 5u);
    st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u - 17u);
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 22760u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00315838; } }
L_003156F0:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_00315708; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_00315790; } }
    c.budget -= 1;
L_00315708:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 23724u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_00315738; } }
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u - 17u);
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 22760u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00315838; } }
    c.budget -= 1;
L_00315738:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23024u));
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315750u); st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00315750u) [[unlikely]] return; }
L_00315750:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315764u); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00315764u) [[unlikely]] return; }
L_00315764:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031577Cu); st8((c.r[1].w[0] + 15543u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009B(c, 144u, depth + 1u); else { c.pc = 0x0036DC40u; return; } if (c.pc != 0x0031577Cu) [[unlikely]] return; }
L_0031577C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315788u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 83u, depth + 1u); else { c.pc = 0x00334FC0u; return; } if (c.pc != 0x00315788u) [[unlikely]] return; }
L_00315788:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00315838; } }
L_00315790:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_00315838; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 22764u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_003157B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_003157B8; } }
L_003157B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22764u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003157D0; } }
L_003157B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4756u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 4756u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_003157D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 4756u));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23724u));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00315818; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003157F0u);  if (depth < kMaxDepth) unit_0085(c, 127u, depth + 1u); else { c.pc = 0x00315320u; return; } if (c.pc != 0x003157F0u) [[unlikely]] return; }
L_003157F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00315808; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315800u);  if (depth < kMaxDepth) unit_0084(c, 485u, depth + 1u); else { c.pc = 0x00313FF0u; return; } if (c.pc != 0x00315800u) [[unlikely]] return; }
L_00315800:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00315838; } }
L_00315808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315810u);  if (depth < kMaxDepth) unit_0084(c, 481u, depth + 1u); else { c.pc = 0x00313F90u; return; } if (c.pc != 0x00315810u) [[unlikely]] return; }
L_00315810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00315838; } }
L_00315818:
    set32(c.r[3], 0u + 5u);
    st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u - 17u);
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 22760u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_00315838:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00315850:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 2572u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] << 4);  if (t) { goto L_00315870; } }
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 22768u), c.r[3].w[0]);  if (t) { goto L_00315878; } }
L_00315870:
    c.r[3].d[0] = 0ull | 36000ull;
    st32((c.r[28].w[0] - 22768u), c.r[3].w[0]);
    c.budget -= 2;
L_00315878:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00315880:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23024u));
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00315850u | kUnwind; return; } goto L_00315850; }
L_003158A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003158B0u);  if (depth < kMaxDepth) unit_0083(c, 414u, depth + 1u); else { c.pc = 0x0030FD80u; return; } if (c.pc != 0x003158B0u) [[unlikely]] return; }
L_003158B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_003158C8; } }
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003159C8; } }
L_003158C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 2384u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003158E8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22568u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1628u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003158F0; } }
L_003158E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003158F0u);  if (depth < kMaxDepth) unit_0085(c, 162u, depth + 1u); else { c.pc = 0x00315850u; return; } if (c.pc != 0x003158F0u) [[unlikely]] return; }
L_003158F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 2572u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00315928; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22768u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; st32((c.r[28].w[0] - 22768u), c.r[3].w[0]);  if (t) { goto L_00315928; } }
    set32(c.r[3], 0u + 5u);
    st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003159C8; } }
L_00315928:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315934u); set32(c.r[4], c.r[4].w[0] + 15536u);  if (depth < kMaxDepth) unit_009B(c, 144u, depth + 1u); else { c.pc = 0x0036DC40u; return; } if (c.pc != 0x00315934u) [[unlikely]] return; }
L_00315934:
    set32(c.r[3], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_003159B8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003159C8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00315958; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003159C8; } }
L_00315958:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 15545u));
    set32(c.r[2], 0u + 2u);
    st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[4], c.r[4].w[0] + 13664u);
    set32(c.r[2], c.r[2].w[0] + 2336u);
    set32(c.r[6], 0u + 20u);
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[5].w[0] << 7);
    st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031599Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0031599Cu) [[unlikely]] return; }
L_0031599C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003159A4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 19u, depth + 1u); else { c.pc = 0x003341C0u; return; } if (c.pc != 0x003159A4u) [[unlikely]] return; }
L_003159A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003159ACu); set32(c.r[4], 0u + 145u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x003788A0u; return; } if (c.pc != 0x003159ACu) [[unlikely]] return; }
L_003159AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003159C8; } }
    c.budget -= 1;
L_003159B8:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23024u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003159C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003159E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003159F0u);  if (depth < kMaxDepth) unit_008B(c, 217u, depth + 1u); else { c.pc = 0x0032EEB0u; return; } if (c.pc != 0x003159F0u) [[unlikely]] return; }
L_003159F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00315A18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315A00u);  if (depth < kMaxDepth) unit_008B(c, 218u, depth + 1u); else { c.pc = 0x0032EEC0u; return; } if (c.pc != 0x00315A00u) [[unlikely]] return; }
L_00315A00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315A08u);  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00315A08u) [[unlikely]] return; }
L_00315A08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315A10u);  if (depth < kMaxDepth) unit_008B(c, 219u, depth + 1u); else { c.pc = 0x0032EED0u; return; } if (c.pc != 0x00315A10u) [[unlikely]] return; }
L_00315A10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315A18u);  if (depth < kMaxDepth) unit_0085(c, 2u, depth + 1u); else { c.pc = 0x00314010u; return; } if (c.pc != 0x00315A18u) [[unlikely]] return; }
L_00315A18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00315A30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = ld8((c.r[28].w[0] - 23032u));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00315D40; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 18576u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00314000u < 16384u) { entry = entries_0085[(t - 0x00314000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00315A68:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315A74u); st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 57u, depth + 1u); else { c.pc = 0x00334D60u; return; } if (c.pc != 0x00315A74u) [[unlikely]] return; }
L_00315A74:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315A80u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x00315A80u) [[unlikely]] return; }
L_00315A80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00315D40; } }
L_00315A88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315A90u);  if (depth < kMaxDepth) unit_008B(c, 217u, depth + 1u); else { c.pc = 0x0032EEB0u; return; } if (c.pc != 0x00315A90u) [[unlikely]] return; }
L_00315A90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00315D40; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23028u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00315AB8; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23032u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00315AF8; } }
    c.budget -= 1;
L_00315AB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315AC0u);  if (depth < kMaxDepth) unit_008D(c, 149u, depth + 1u); else { c.pc = 0x00335720u; return; } if (c.pc != 0x00315AC0u) [[unlikely]] return; }
L_00315AC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00315AF0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], ld32((c.r[1].w[0] + 10160u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315ADCu); st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0084(c, 76u, depth + 1u); else { c.pc = 0x00310240u; return; } if (c.pc != 0x00315ADCu) [[unlikely]] return; }
L_00315ADC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315AE8u); set32(c.r[4], c.r[4].w[0] + 10160u);  if (depth < kMaxDepth) unit_0084(c, 80u, depth + 1u); else { c.pc = 0x00310270u; return; } if (c.pc != 0x00315AE8u) [[unlikely]] return; }
L_00315AE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00315AF8; } }
L_00315AF0:
    set32(c.r[2], 0u + 7u);
    st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00315AF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315B00u);  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00315B00u) [[unlikely]] return; }
L_00315B00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23052u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00315D40; } }
L_00315B08:
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00315D40; } }
    c.budget -= 1;
L_00315B18:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315B28u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 82u, depth + 1u); else { c.pc = 0x00104560u; return; } if (c.pc != 0x00315B28u) [[unlikely]] return; }
L_00315B28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 18288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315B3Cu); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00315B3Cu) [[unlikely]] return; }
L_00315B3C:
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00900000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00900000u);
    st8((c.r[28].w[0] - 23720u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 18288u);
    st8((c.r[28].w[0] - 22084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315B60u); set32(c.r[5], c.r[5].w[0] + 5469u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00315B60u) [[unlikely]] return; }
L_00315B60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315B68u); c.r[4].d[0] = 0ull + 0ull;  call(c, 0x011902A0u, depth + 1u); if (c.pc != 0x00315B68u) [[unlikely]] return; }
L_00315B68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00315D40; } }
L_00315B70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315B78u);  call(c, 0x01190820u, depth + 1u); if (c.pc != 0x00315B78u) [[unlikely]] return; }
L_00315B78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00315D40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315B88u);  call(c, 0x01190570u, depth + 1u); if (c.pc != 0x00315B88u) [[unlikely]] return; }
L_00315B88:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23032u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00315D40; } }
L_00315B98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315BA0u);  if (depth < kMaxDepth) unit_008B(c, 219u, depth + 1u); else { c.pc = 0x0032EED0u; return; } if (c.pc != 0x00315BA0u) [[unlikely]] return; }
L_00315BA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315BA8u);  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00315BA8u) [[unlikely]] return; }
L_00315BA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315BB0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_008D(c, 130u, depth + 1u); else { c.pc = 0x003355C0u; return; } if (c.pc != 0x00315BB0u) [[unlikely]] return; }
L_00315BB0:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23032u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00315D40; } }
L_00315BC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315BC8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_008D(c, 144u, depth + 1u); else { c.pc = 0x00335690u; return; } if (c.pc != 0x00315BC8u) [[unlikely]] return; }
L_00315BC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00315D40; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23032u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00315D40; } }
L_00315BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315BE8u);  if (depth < kMaxDepth) unit_0085(c, 36u, depth + 1u); else { c.pc = 0x00314440u; return; } if (c.pc != 0x00315BE8u) [[unlikely]] return; }
L_00315BE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00315D40; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23032u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00315D40; } }
L_00315C00:
    set32(c.r[2], 0u + 9u);
    st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 15u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315C18u); st16((c.r[28].w[0] - 23008u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 19u, depth + 1u); else { c.pc = 0x003341C0u; return; } if (c.pc != 0x00315C18u) [[unlikely]] return; }
L_00315C18:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315C24u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 83u, depth + 1u); else { c.pc = 0x00334FC0u; return; } if (c.pc != 0x00315C24u) [[unlikely]] return; }
L_00315C24:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23028u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00315C40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315C38u); set32(c.r[4], 0u + 17u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x003788A0u; return; } if (c.pc != 0x00315C38u) [[unlikely]] return; }
L_00315C38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00315D40; } }
L_00315C40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315C48u); set32(c.r[4], 0u + 42u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x003788A0u; return; } if (c.pc != 0x00315C48u) [[unlikely]] return; }
L_00315C48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00315D40; } }
L_00315C50:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 23008u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[28].w[0] - 23008u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 23008u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00315D40; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00315D40; } }
    c.budget -= 1;
L_00315C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315C80u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00315C80u) [[unlikely]] return; }
L_00315C80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00315D00; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23028u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00315CD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315C9Cu);  if (depth < kMaxDepth) unit_008D(c, 149u, depth + 1u); else { c.pc = 0x00335720u; return; } if (c.pc != 0x00315C9Cu) [[unlikely]] return; }
L_00315C9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00315CD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315CACu);  if (depth < kMaxDepth) unit_0086(c, 83u, depth + 1u); else { c.pc = 0x003188D0u; return; } if (c.pc != 0x00315CACu) [[unlikely]] return; }
L_00315CAC:
    set32(c.r[2], 0u + 23u);
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23036u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315CD0u); st8((c.r[2].w[0] + 2535u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0089(c, 236u, depth + 1u); else { c.pc = 0x003264F0u; return; } if (c.pc != 0x00315CD0u) [[unlikely]] return; }
L_00315CD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00315CF8; } }
L_00315CD8:
    set32(c.r[2], 0u + 16u);
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23056u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 22760u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_00315CF8:
    st8((c.r[28].w[0] - 23720u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00315D00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315D08u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00315D08u) [[unlikely]] return; }
L_00315D08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315D18u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_008D(c, 98u, depth + 1u); else { c.pc = 0x003351D0u; return; } if (c.pc != 0x00315D18u) [[unlikely]] return; }
L_00315D18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x438D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43470000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[13] = c.r[2].w[0];
    c.f[12] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315D40u); set32(c.r[4], c.r[4].w[0] - 18608u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00315D40u) [[unlikely]] return; }
L_00315D40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00315D50:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23024u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 17728u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00314000u < 16384u) { entry = entries_0085[(t - 0x00314000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00315D70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23024u));
    set32(c.r[4], ld32((c.r[1].w[0] + 10160u)));
    st16((c.r[28].w[0] - 23008u), static_cast<std::uint16_t>(0u));
    st16((c.r[28].w[0] - 23012u), static_cast<std::uint16_t>(0u));
    st8((c.r[28].w[0] - 22764u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315D9Cu); st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0084(c, 76u, depth + 1u); else { c.pc = 0x00310240u; return; } if (c.pc != 0x00315D9Cu) [[unlikely]] return; }
L_00315D9C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315DA8u); set32(c.r[4], c.r[4].w[0] + 10160u);  if (depth < kMaxDepth) unit_0084(c, 80u, depth + 1u); else { c.pc = 0x00310270u; return; } if (c.pc != 0x00315DA8u) [[unlikely]] return; }
L_00315DA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00315DC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 23008u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[28].w[0] - 23008u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00315E78; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 23012u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[28].w[0] - 23012u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 23012u)));
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; st16((c.r[28].w[0] - 23008u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00315E28; } }
    set32(c.r[3], 0u + 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 5u);
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    st32((c.r[1].w[0] + 11236u), c.r[3].w[0]);
    st16((c.r[28].w[0] - 23008u), static_cast<std::uint16_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 23012u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00315E78; } }
    c.budget -= 1;
L_00315E28:
    set32(c.r[4], c.r[29].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315E34u); set32(c.r[5], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0094(c, 89u, depth + 1u); else { c.pc = 0x003507B0u; return; } if (c.pc != 0x00315E34u) [[unlikely]] return; }
L_00315E34:
    set32(c.r[4], ld32((c.r[29].w[0] + 24u)));
    c.r[5].d[0] = ld16((c.r[29].w[0] + 30u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315E44u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0085(c, 39u, depth + 1u); else { c.pc = 0x003144B0u; return; } if (c.pc != 0x00315E44u) [[unlikely]] return; }
L_00315E44:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[1].w[0] + 10160u), c.r[2].w[0]);  if (t) { goto L_00315E60; } }
    set32(c.r[3], 0u + 600u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 23008u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00315E78; } }
    c.budget -= 1;
L_00315E60:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 23024u));
    set32(c.r[3], 0u + 600u);
    st16((c.r[28].w[0] - 23008u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_00315E78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00315E90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 23008u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[28].w[0] - 23008u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00315EE8; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23024u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[2], 0u + 10u);
    set32(c.r[4], ld32((c.r[1].w[0] + 10160u)));
    st16((c.r[28].w[0] - 23008u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315ED4u); st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0084(c, 76u, depth + 1u); else { c.pc = 0x00310240u; return; } if (c.pc != 0x00315ED4u) [[unlikely]] return; }
L_00315ED4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315EE0u); set32(c.r[4], c.r[4].w[0] + 10160u);  if (depth < kMaxDepth) unit_0084(c, 80u, depth + 1u); else { c.pc = 0x00310270u; return; } if (c.pc != 0x00315EE0u) [[unlikely]] return; }
L_00315EE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00315F68; } }
L_00315EE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 10160u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315EFCu); set32(c.r[5], c.r[5].w[0] + 10176u);  if (depth < kMaxDepth) unit_0083(c, 440u, depth + 1u); else { c.pc = 0x0030FFF0u; return; } if (c.pc != 0x00315EFCu) [[unlikely]] return; }
L_00315EFC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00315F40; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23024u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 23008u)));
    set32(c.r[4], ld32((c.r[1].w[0] + 10160u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 10u);
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315F28u); st16((c.r[28].w[0] - 23008u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0084(c, 76u, depth + 1u); else { c.pc = 0x00310240u; return; } if (c.pc != 0x00315F28u) [[unlikely]] return; }
L_00315F28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315F34u); set32(c.r[4], c.r[4].w[0] + 10160u);  if (depth < kMaxDepth) unit_0084(c, 80u, depth + 1u); else { c.pc = 0x00310270u; return; } if (c.pc != 0x00315F34u) [[unlikely]] return; }
L_00315F34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00315F68; } }
    c.budget -= 1;
L_00315F40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 10176u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00315F68; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23024u));
    st16((c.r[28].w[0] - 23008u), static_cast<std::uint16_t>(0u));
    st16((c.r[28].w[0] - 23012u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_00315F68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00315F80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = ld8((c.r[28].w[0] - 23024u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 23060u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 82u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 23060u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2608u)));
    c.r[7].d[0] = ld8((c.r[2].w[0] + 10313u));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 10314u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315FBCu); set32(c.r[6], c.r[2].w[0] + 10348u);  if (depth < kMaxDepth) unit_008C(c, 114u, depth + 1u); else { c.pc = 0x00331EC0u; return; } if (c.pc != 0x00315FBCu) [[unlikely]] return; }
L_00315FBC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315FC8u); set32(c.r[4], ld32((c.r[1].w[0] + 10160u)));  if (depth < kMaxDepth) unit_008C(c, 111u, depth + 1u); else { c.pc = 0x00331E70u; return; } if (c.pc != 0x00315FC8u) [[unlikely]] return; }
L_00315FC8:
    set32(c.r[3], 0u + 3600u);
    st16((c.r[28].w[0] - 23008u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00315FE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 23008u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0; st16((c.r[28].w[0] - 23008u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00316018; } }
    set32(c.r[3], 0u + 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 5u);
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 11236u), c.r[3].w[0]);  if (t) { goto L_003161D0; } }
L_00316018:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 10160u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[5], c.r[5].w[0] + 6832u);
    set32(c.r[6], c.r[6].w[0] + 6064u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316038u); set32(c.r[7], 0u + 768u);  if (depth < kMaxDepth) unit_0085(c, 42u, depth + 1u); else { c.pc = 0x003144E0u; return; } if (c.pc != 0x00316038u) [[unlikely]] return; }
L_00316038:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00316068; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00316060; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00316088; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00316088; } }
    c.budget -= 1;
L_00316060:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003161D0; } }
L_00316068:
    set32(c.r[4], 0u + 7u);
    set32(c.r[3], 0u + 5u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 11236u), c.r[3].w[0]);  if (t) { goto L_003161D0; } }
    c.budget -= 1;
L_00316088:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 6834u));
    set32(c.r[3], 0u + 4145u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[5], c.r[5].w[0] << 8);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 6835u));
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003160C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003161D0; } }
    c.budget -= 1;
L_003160C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 6838u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] + 5201u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 6839u));
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003160F0u); c.r[6].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_008C(c, 195u, depth + 1u); else { c.pc = 0x003335C0u; return; } if (c.pc != 0x003160F0u) [[unlikely]] return; }
L_003160F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[5], 0u + 4145u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316100u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 192u, depth + 1u); else { c.pc = 0x00345CF0u; return; } if (c.pc != 0x00316100u) [[unlikely]] return; }
L_00316100:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316110u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 195u, depth + 1u); else { c.pc = 0x00345D80u; return; } if (c.pc != 0x00316110u) [[unlikely]] return; }
L_00316110:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 6838u));
    set32(c.r[4], c.r[4].w[0] + 6848u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[6], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 6839u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[1].w[0] + 6858u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316144u); st8((c.r[1].w[0] + 6859u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0091(c, 201u, depth + 1u); else { c.pc = 0x00345E70u; return; } if (c.pc != 0x00316144u) [[unlikely]] return; }
L_00316144:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316150u); set32(c.r[4], c.r[4].w[0] + 6848u);  if (depth < kMaxDepth) unit_0091(c, 197u, depth + 1u); else { c.pc = 0x00345DA0u; return; } if (c.pc != 0x00316150u) [[unlikely]] return; }
L_00316150:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] + 6852u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316164u); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00316164u) [[unlikely]] return; }
L_00316164:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[6].d[0] = ld16((c.r[1].w[0] + 6848u));
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031617Cu); set32(c.r[5], c.r[5].w[0] + 6864u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0031617Cu) [[unlikely]] return; }
L_0031617C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 6848u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[16], c.r[2].w[0] + 12u);
    set32(c.r[4], ld32((c.r[1].w[0] + 10160u)));
    c.r[6].d[0] = c.r[16].d[0] << 48;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003161A0u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);  if (depth < kMaxDepth) unit_0084(c, 54u, depth + 1u); else { c.pc = 0x00310150u; return; } if (c.pc != 0x003161A0u) [[unlikely]] return; }
L_003161A0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 7u);  if (t) { goto L_003161C0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 5u);
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 11236u), c.r[3].w[0]);  if (t) { goto L_003161D0; } }
L_003161C0:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23024u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003161D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003161E0:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23024u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(c.r[2].w[0]));  [[clang::musttail]] return unit_008D(c, 155u, depth); }
L_003161F0:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[28].w[0] - 23080u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00316220:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = ld8((c.r[28].w[0] - 23028u));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00316380; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 18528u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00314000u < 16384u) { entry = entries_0085[(t - 0x00314000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00316250:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316264u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 83u, depth + 1u); else { c.pc = 0x00334FC0u; return; } if (c.pc != 0x00316264u) [[unlikely]] return; }
L_00316264:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00316380; } }
    c.budget -= 1;
L_00316270:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316280u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 19u, depth + 1u); else { c.pc = 0x003341C0u; return; } if (c.pc != 0x00316280u) [[unlikely]] return; }
L_00316280:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00316380; } }
L_00316288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316290u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x00316290u) [[unlikely]] return; }
L_00316290:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00316380; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23028u));
    set32(c.r[2], 0u + 480u);
    st16((c.r[28].w[0] - 23008u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 43u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003162B4u); st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x003788A0u; return; } if (c.pc != 0x003162B4u) [[unlikely]] return; }
L_003162B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00316380; } }
    c.budget -= 1;
L_003162C0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 23008u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[28].w[0] - 23008u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_00316380; } }
    set32(c.r[2], 0u + 20u);
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 76u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003162F0u); st16((c.r[28].w[0] - 23008u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x003162F0u) [[unlikely]] return; }
L_003162F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00316380; } }
L_003162F8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 23008u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[28].w[0] - 23008u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00316380; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    set32(c.r[4], 0u + 1u);
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316328u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x00316328u) [[unlikely]] return; }
L_00316328:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00316380; } }
L_00316330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316338u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x00316338u) [[unlikely]] return; }
L_00316338:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00316380; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23028u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316350u); st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00316350u) [[unlikely]] return; }
L_00316350:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00316380; } }
L_00316358:
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 22764u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 22992u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316378u); st8((c.r[2].w[0] + 2535u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0086(c, 83u, depth + 1u); else { c.pc = 0x003188D0u; return; } if (c.pc != 0x00316378u) [[unlikely]] return; }
L_00316378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316380u);  if (depth < kMaxDepth) unit_0084(c, 484u, depth + 1u); else { c.pc = 0x00313FD0u; return; } if (c.pc != 0x00316380u) [[unlikely]] return; }
L_00316380:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00316390:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = ld8((c.r[28].w[0] - 23024u));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00316428; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00316400; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003163E8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003163D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00316498; } }
    c.budget -= 1;
L_003163D0:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003163DCu); st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 57u, depth + 1u); else { c.pc = 0x00334D60u; return; } if (c.pc != 0x003163DCu) [[unlikely]] return; }
L_003163DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00316498; } }
    c.budget -= 1;
L_003163E8:
    st16((c.r[28].w[0] - 23008u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23052u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00316498; } }
L_00316400:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 23008u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[28].w[0] - 23008u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_00316498; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00316498; } }
    c.budget -= 1;
L_00316428:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23720u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00316468; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031643Cu); set32(c.r[4], ld32((c.r[1].w[0] + 10160u)));  if (depth < kMaxDepth) unit_0084(c, 76u, depth + 1u); else { c.pc = 0x00310240u; return; } if (c.pc != 0x0031643Cu) [[unlikely]] return; }
L_0031643C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316448u); set32(c.r[4], c.r[4].w[0] + 10160u);  if (depth < kMaxDepth) unit_0084(c, 80u, depth + 1u); else { c.pc = 0x00310270u; return; } if (c.pc != 0x00316448u) [[unlikely]] return; }
L_00316448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316450u);  if (depth < kMaxDepth) unit_008D(c, 57u, depth + 1u); else { c.pc = 0x00334D60u; return; } if (c.pc != 0x00316450u) [[unlikely]] return; }
L_00316450:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22760u)));
    set32(c.r[4], 0u + 16u);
    st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[28].w[0] - 23056u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22760u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00316498; } }
L_00316468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316470u);  if (depth < kMaxDepth) unit_0085(c, 36u, depth + 1u); else { c.pc = 0x00314440u; return; } if (c.pc != 0x00316470u) [[unlikely]] return; }
L_00316470:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00316498; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316480u);  if (depth < kMaxDepth) unit_008D(c, 57u, depth + 1u); else { c.pc = 0x00334D60u; return; } if (c.pc != 0x00316480u) [[unlikely]] return; }
L_00316480:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22760u)));
    set32(c.r[4], 0u + 16u);
    st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[28].w[0] - 23056u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[28].w[0] - 22760u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_00316498:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003164B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23016u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003164D0; } }
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00316678; } }
L_003164D0:
    c.r[5].d[0] = ld8((c.r[28].w[0] - 23024u));
    set32(c.r[4], 0u + 30u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00316648; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00316610; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003165F8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00316500; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00316670; } }
L_00316500:
    set32(c.r[2], ld32((c.r[28].w[0] - 22812u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00316518; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00316670; } }
L_00316518:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 11236u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_00316540; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00316540; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00316670; } }
    c.budget -= 1;
L_00316540:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031654Cu); set32(c.r[4], c.r[4].w[0] + 10128u);  if (depth < kMaxDepth) unit_0084(c, 128u, depth + 1u); else { c.pc = 0x00310A60u; return; } if (c.pc != 0x0031654Cu) [[unlikely]] return; }
L_0031654C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00316568; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23024u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00316670; } }
    c.budget -= 1;
L_00316568:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 10140u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00316590; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23024u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00316670; } }
    c.budget -= 1;
L_00316590:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 10160u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003165A4u); set32(c.r[5], c.r[5].w[0] + 10176u);  if (depth < kMaxDepth) unit_0083(c, 440u, depth + 1u); else { c.pc = 0x0030FFF0u; return; } if (c.pc != 0x003165A4u) [[unlikely]] return; }
L_003165A4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003165C0; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23024u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00316670; } }
    c.budget -= 1;
L_003165C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 10180u));
    c.r[1].d[0] = c.r[2].sd[0] < 4054ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003165E8; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23024u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00316670; } }
    c.budget -= 1;
L_003165E8:
    set32(c.r[2], 0u + 30u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00316670; } }
    c.budget -= 1;
L_003165F8:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[28].w[0] - 23052u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 23008u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00316670; } }
    c.budget -= 1;
L_00316610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316618u);  if (depth < kMaxDepth) unit_0085(c, 36u, depth + 1u); else { c.pc = 0x00314440u; return; } if (c.pc != 0x00316618u) [[unlikely]] return; }
L_00316618:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00316670; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22760u)));
    set32(c.r[2], 0u + 16u);
    st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23036u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23056u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00316678; } }
L_00316648:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316654u); set32(c.r[4], ld32((c.r[1].w[0] + 10160u)));  if (depth < kMaxDepth) unit_0084(c, 76u, depth + 1u); else { c.pc = 0x00310240u; return; } if (c.pc != 0x00316654u) [[unlikely]] return; }
L_00316654:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316660u); set32(c.r[4], c.r[4].w[0] + 10160u);  if (depth < kMaxDepth) unit_0084(c, 80u, depth + 1u); else { c.pc = 0x00310270u; return; } if (c.pc != 0x00316660u) [[unlikely]] return; }
L_00316660:
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00316678; } }
    c.budget -= 1;
L_00316670:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00316678:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00316690:
    st8((c.r[28].w[0] - 23056u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003166A0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003166C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23720u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 23u);  if (t) { goto L_003166E8; } }
    st8((c.r[28].w[0] - 23024u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 23020u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[28].w[0] - 23028u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 23032u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003166F0; } }
L_003166E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003166F0u);  if (depth < kMaxDepth) unit_008D(c, 16u, depth + 1u); else { c.pc = 0x00334180u; return; } if (c.pc != 0x003166F0u) [[unlikely]] return; }
L_003166F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00316700:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00316710:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 17696u);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23020u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00316738u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00316738u) [[unlikely]] return; }
L_00316738:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 23056u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00316750:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 7200u);
    st32((c.r[3].w[0] + 10344u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 10340u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00316770:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 10344u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 10344u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 10344u)));
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_003167B0; } }
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003167A4u); st8((c.r[3].w[0] + 10340u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321A80u; return; } if (c.pc != 0x003167A4u) [[unlikely]] return; }
L_003167A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003167B8; } }
    c.budget -= 1;
L_003167B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003167B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003167D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003167E4u); set32(c.r[4], ld32((c.r[1].w[0] + 10160u)));  if (depth < kMaxDepth) unit_0091(c, 112u, depth + 1u); else { c.pc = 0x00345320u; return; } if (c.pc != 0x003167E4u) [[unlikely]] return; }
L_003167E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003167F8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 7200u);
    st32((c.r[2].w[0] + 10368u), c.r[3].w[0]);
    c.budget -= 3;
L_003167F8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], 0u + 7u);
    set32(c.r[3], ld32((c.r[4].w[0] + 10364u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 10364u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 10368u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 10368u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2589u));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003169F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316834u);  if (depth < kMaxDepth) unit_008D(c, 150u, depth + 1u); else { c.pc = 0x00335730u; return; } if (c.pc != 0x00316834u) [[unlikely]] return; }
L_00316834:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00316928; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2528u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00316928; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 2568u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_003168A8; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 2384u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00316878; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1628u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00316880; } }
    c.budget -= 1;
L_00316878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316880u); set32(c.r[4], c.r[3].w[0] + 10372u);  if (depth < kMaxDepth) unit_008D(c, 153u, depth + 1u); else { c.pc = 0x00335760u; return; } if (c.pc != 0x00316880u) [[unlikely]] return; }
L_00316880:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 10372u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[3].w[0] + 10372u), c.r[2].w[0]);  if (t) { goto L_003168A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031689Cu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321A80u; return; } if (c.pc != 0x0031689Cu) [[unlikely]] return; }
L_0031689C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00316AC8; } }
    c.budget -= 1;
L_003168A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003168B0u);  if (depth < kMaxDepth) unit_0083(c, 414u, depth + 1u); else { c.pc = 0x0030FD80u; return; } if (c.pc != 0x003168B0u) [[unlikely]] return; }
L_003168B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 6u);  if (t) { goto L_003168C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003168C0u);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321A80u; return; } if (c.pc != 0x003168C0u) [[unlikely]] return; }
L_003168C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00316AC8; } }
L_003168C8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 10368u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], 0u + 6u);  if (t) { goto L_003168E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003168E0u);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321A80u; return; } if (c.pc != 0x003168E0u) [[unlikely]] return; }
L_003168E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00316AC8; } }
L_003168E8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2534u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 5u);  if (t) { goto L_00316908; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316900u);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321A80u; return; } if (c.pc != 0x00316900u) [[unlikely]] return; }
L_00316900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00316AC8; } }
L_00316908:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 7u);  if (t) { goto L_003169F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031691Cu);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321A80u; return; } if (c.pc != 0x0031691Cu) [[unlikely]] return; }
L_0031691C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00316AC8; } }
    c.budget -= 1;
L_00316928:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2605u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003169F0; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 22996u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_003169F0; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 2384u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00316968; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22568u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1628u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00316970; } }
    c.budget -= 1;
L_00316968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316970u); set32(c.r[4], c.r[4].w[0] + 10372u);  if (depth < kMaxDepth) unit_008D(c, 153u, depth + 1u); else { c.pc = 0x00335760u; return; } if (c.pc != 0x00316970u) [[unlikely]] return; }
L_00316970:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 10368u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00316988; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22996u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003169F0; } }
L_00316988:
    set32(c.r[2], ld32((c.r[3].w[0] + 10372u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[3].w[0] + 10372u), c.r[2].w[0]);  if (t) { goto L_003169A8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22996u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003169F0; } }
    c.budget -= 1;
L_003169A8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2534u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_003169C8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003169D8; } }
    c.budget -= 1;
L_003169C8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22996u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003169F0; } }
    c.budget -= 1;
L_003169D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003169E0u);  if (depth < kMaxDepth) unit_0083(c, 414u, depth + 1u); else { c.pc = 0x0030FD80u; return; } if (c.pc != 0x003169E0u) [[unlikely]] return; }
L_003169E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003169F0; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 22996u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003169F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8286u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0] + 8286u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], c.r[2].w[0] + 8286u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8286u)));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], 0u + 60u);  if (t) { goto L_00316A90; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], c.r[2].w[0] + 8284u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8284u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00316A58; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], c.r[2].w[0] + 8284u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8284u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00316A58; } }
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 4u);
    st16((c.r[2].w[0] + 8288u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00316A58:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8288u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 8288u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[2].w[0] + 8288u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8288u)));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], 0u + 20u);  if (t) { goto L_00316A90; } }
    set32(c.r[3], 0u + 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 8290u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_00316A90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316A98u);  if (depth < kMaxDepth) unit_0088(c, 237u, depth + 1u); else { c.pc = 0x00321D20u; return; } if (c.pc != 0x00316A98u) [[unlikely]] return; }
L_00316A98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00316AC8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 2784u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2589u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00316AC4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00316AC4u) [[unlikely]] return; }
L_00316AC4:
    c.budget -= 1;
L_00316AC8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00316AE0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 2720u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2591u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00314000u < 16384u) { entry = entries_0085[(t - 0x00314000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00316B10:
    set32(c.r[29], c.r[29].w[0] - 192u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[4].w[0] + 2592u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2592u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00317088; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00316F70; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00316F40; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00316B58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00317098; } }
    c.budget -= 1;
L_00316B58:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 10363u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st32((c.r[2].w[0] + 10364u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2528u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2576u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4757u));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00316BB0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], 0u + 60u);
    st8((c.r[2].w[0] + 9847u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 9848u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st16((c.r[2].w[0] + 9850u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
L_00316BB0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 796u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316BC4u); set32(c.r[4], c.r[2].w[0] + 2620u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00316BC4u) [[unlikely]] return; }
L_00316BC4:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 4100u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316BD8u); set32(c.r[4], c.r[2].w[0] + 10378u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00316BD8u) [[unlikely]] return; }
L_00316BD8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 4097u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316BECu); set32(c.r[4], c.r[2].w[0] + 14478u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00316BECu) [[unlikely]] return; }
L_00316BEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316BF4u);  if (depth < kMaxDepth) unit_0093(c, 185u, depth + 1u); else { c.pc = 0x0034D300u; return; } if (c.pc != 0x00316BF4u) [[unlikely]] return; }
L_00316BF4:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[1].d[0] = 0ull | 45028ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 103u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316C0Cu); set32(c.r[4], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00316C0Cu) [[unlikely]] return; }
L_00316C0C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316C1Cu); set32(c.r[5], c.r[5].w[0] + 23568u);  if (depth < kMaxDepth) unit_0091(c, 87u, depth + 1u); else { c.pc = 0x00344E50u; return; } if (c.pc != 0x00316C1Cu) [[unlikely]] return; }
L_00316C1C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316C2Cu); set32(c.r[5], c.r[5].w[0] + 22928u);  if (depth < kMaxDepth) unit_0091(c, 87u, depth + 1u); else { c.pc = 0x00344E50u; return; } if (c.pc != 0x00316C2Cu) [[unlikely]] return; }
L_00316C2C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316C3Cu); set32(c.r[5], c.r[5].w[0] + 23184u);  if (depth < kMaxDepth) unit_0091(c, 87u, depth + 1u); else { c.pc = 0x00344E50u; return; } if (c.pc != 0x00316C3Cu) [[unlikely]] return; }
L_00316C3C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316C4Cu); set32(c.r[5], c.r[5].w[0] + 23616u);  if (depth < kMaxDepth) unit_0091(c, 87u, depth + 1u); else { c.pc = 0x00344E50u; return; } if (c.pc != 0x00316C4Cu) [[unlikely]] return; }
L_00316C4C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316C5Cu); set32(c.r[5], c.r[5].w[0] + 24192u);  if (depth < kMaxDepth) unit_0091(c, 87u, depth + 1u); else { c.pc = 0x00344E50u; return; } if (c.pc != 0x00316C5Cu) [[unlikely]] return; }
L_00316C5C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316C6Cu); set32(c.r[5], c.r[5].w[0] + 23056u);  if (depth < kMaxDepth) unit_0091(c, 87u, depth + 1u); else { c.pc = 0x00344E50u; return; } if (c.pc != 0x00316C6Cu) [[unlikely]] return; }
L_00316C6C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316C7Cu); set32(c.r[5], c.r[5].w[0] + 23104u);  if (depth < kMaxDepth) unit_0091(c, 87u, depth + 1u); else { c.pc = 0x00344E50u; return; } if (c.pc != 0x00316C7Cu) [[unlikely]] return; }
L_00316C7C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316C8Cu); set32(c.r[5], c.r[5].w[0] + 22992u);  if (depth < kMaxDepth) unit_0091(c, 87u, depth + 1u); else { c.pc = 0x00344E50u; return; } if (c.pc != 0x00316C8Cu) [[unlikely]] return; }
L_00316C8C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], 0u + 15u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316C9Cu); set32(c.r[5], c.r[5].w[0] + 24272u);  if (depth < kMaxDepth) unit_0091(c, 87u, depth + 1u); else { c.pc = 0x00344E50u; return; } if (c.pc != 0x00316C9Cu) [[unlikely]] return; }
L_00316C9C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], 0u + 21u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316CACu); set32(c.r[5], c.r[5].w[0] + 24368u);  if (depth < kMaxDepth) unit_0091(c, 87u, depth + 1u); else { c.pc = 0x00344E50u; return; } if (c.pc != 0x00316CACu) [[unlikely]] return; }
L_00316CAC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316CBCu); set32(c.r[5], c.r[5].w[0] + 24368u);  if (depth < kMaxDepth) unit_0091(c, 87u, depth + 1u); else { c.pc = 0x00344E50u; return; } if (c.pc != 0x00316CBCu) [[unlikely]] return; }
L_00316CBC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], 0u + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316CCCu); set32(c.r[5], c.r[5].w[0] + 24464u);  if (depth < kMaxDepth) unit_0091(c, 87u, depth + 1u); else { c.pc = 0x00344E50u; return; } if (c.pc != 0x00316CCCu) [[unlikely]] return; }
L_00316CCC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], 0u + 26u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316CDCu); set32(c.r[5], c.r[5].w[0] + 24528u);  if (depth < kMaxDepth) unit_0091(c, 87u, depth + 1u); else { c.pc = 0x00344E50u; return; } if (c.pc != 0x00316CDCu) [[unlikely]] return; }
L_00316CDC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], 0u + 25u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316CECu); set32(c.r[5], c.r[5].w[0] + 24592u);  if (depth < kMaxDepth) unit_0091(c, 87u, depth + 1u); else { c.pc = 0x00344E50u; return; } if (c.pc != 0x00316CECu) [[unlikely]] return; }
L_00316CEC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], 0u + 29u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316CFCu); set32(c.r[5], c.r[5].w[0] + 24656u);  if (depth < kMaxDepth) unit_0091(c, 87u, depth + 1u); else { c.pc = 0x00344E50u; return; } if (c.pc != 0x00316CFCu) [[unlikely]] return; }
L_00316CFC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], 0u + 30u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316D0Cu); set32(c.r[5], c.r[5].w[0] + 24736u);  if (depth < kMaxDepth) unit_0091(c, 87u, depth + 1u); else { c.pc = 0x00344E50u; return; } if (c.pc != 0x00316D0Cu) [[unlikely]] return; }
L_00316D0C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316D1Cu); set32(c.r[5], c.r[5].w[0] + 23248u);  if (depth < kMaxDepth) unit_0091(c, 87u, depth + 1u); else { c.pc = 0x00344E50u; return; } if (c.pc != 0x00316D1Cu) [[unlikely]] return; }
L_00316D1C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316D2Cu); set32(c.r[5], c.r[5].w[0] + 23344u);  if (depth < kMaxDepth) unit_0091(c, 87u, depth + 1u); else { c.pc = 0x00344E50u; return; } if (c.pc != 0x00316D2Cu) [[unlikely]] return; }
L_00316D2C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], 0u + 11u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316D3Cu); set32(c.r[5], c.r[5].w[0] + 23440u);  if (depth < kMaxDepth) unit_0091(c, 87u, depth + 1u); else { c.pc = 0x00344E50u; return; } if (c.pc != 0x00316D3Cu) [[unlikely]] return; }
L_00316D3C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], 0u + 31u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316D4Cu); set32(c.r[5], c.r[5].w[0] + 24992u);  if (depth < kMaxDepth) unit_0091(c, 87u, depth + 1u); else { c.pc = 0x00344E50u; return; } if (c.pc != 0x00316D4Cu) [[unlikely]] return; }
L_00316D4C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316D5Cu); set32(c.r[5], c.r[5].w[0] + 25168u);  if (depth < kMaxDepth) unit_0091(c, 87u, depth + 1u); else { c.pc = 0x00344E50u; return; } if (c.pc != 0x00316D5Cu) [[unlikely]] return; }
L_00316D5C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], 0u + 33u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316D6Cu); set32(c.r[5], c.r[5].w[0] + 24800u);  if (depth < kMaxDepth) unit_0091(c, 87u, depth + 1u); else { c.pc = 0x00344E50u; return; } if (c.pc != 0x00316D6Cu) [[unlikely]] return; }
L_00316D6C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], 0u + 35u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316D7Cu); set32(c.r[5], c.r[5].w[0] + 25712u);  if (depth < kMaxDepth) unit_0091(c, 87u, depth + 1u); else { c.pc = 0x00344E50u; return; } if (c.pc != 0x00316D7Cu) [[unlikely]] return; }
L_00316D7C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], 0u + 34u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316D8Cu); set32(c.r[5], c.r[5].w[0] + 24880u);  if (depth < kMaxDepth) unit_0091(c, 87u, depth + 1u); else { c.pc = 0x00344E50u; return; } if (c.pc != 0x00316D8Cu) [[unlikely]] return; }
L_00316D8C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], 0u + 40u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316D9Cu); set32(c.r[5], c.r[5].w[0] + 25552u);  if (depth < kMaxDepth) unit_0091(c, 87u, depth + 1u); else { c.pc = 0x00344E50u; return; } if (c.pc != 0x00316D9Cu) [[unlikely]] return; }
L_00316D9C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316DACu); set32(c.r[6], 0u + 36u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00316DACu) [[unlikely]] return; }
L_00316DAC:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316DBCu); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00316DBCu) [[unlikely]] return; }
L_00316DBC:
    set32(c.r[4], c.r[29].w[0] + 190u);
    set32(c.r[5], c.r[29].w[0] + 188u);
    set32(c.r[6], c.r[29].w[0] + 186u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316DD0u); set32(c.r[7], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_008D(c, 195u, depth + 1u); else { c.pc = 0x00336270u; return; } if (c.pc != 0x00316DD0u) [[unlikely]] return; }
L_00316DD0:
    set32(c.r[2], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st8((c.r[29].w[0] + 65u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 67u);
    set32(c.r[2], 0u + 6u);
    set32(c.r[5], c.r[5].w[0] + 9296u);
    st8((c.r[29].w[0] + 66u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], 0u + 10u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316DF8u); st8((c.r[29].w[0] + 64u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x00316DF8u) [[unlikely]] return; }
L_00316DF8:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 190u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 188u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 186u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 184u)));
    st16((c.r[29].w[0] + 92u), static_cast<std::uint16_t>(0u));
    st16((c.r[29].w[0] + 94u), static_cast<std::uint16_t>(0u));
    st16((c.r[29].w[0] + 84u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[29].w[0] + 86u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[29].w[0] + 88u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[29].w[0] + 90u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[29].w[0] + 96u), static_cast<std::uint16_t>(0u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316E30u); st16((c.r[29].w[0] + 98u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0093(c, 210u, depth + 1u); else { c.pc = 0x0034D610u; return; } if (c.pc != 0x00316E30u) [[unlikely]] return; }
L_00316E30:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 22992u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[29].w[0] + 52u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 10317u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + 10317u);  if (t) { goto L_00316E58; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 53u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00316E60; } }
    c.budget -= 1;
L_00316E58:
    st8((c.r[29].w[0] + 53u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00316E60:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[12], ld32((c.r[28].w[0] - 23068u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 11276u)));
    st8((c.r[29].w[0] + 54u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[11].d[0] = ld8((c.r[12].w[0] + 10315u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 11278u)));
    st8((c.r[29].w[0] + 55u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[12].w[0] + 10316u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 11280u)));
    st8((c.r[29].w[0] + 56u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[11], ld32((c.r[12].w[0] + 10320u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 11282u)));
    st32((c.r[29].w[0] + 32u), c.r[11].w[0]);
    set32(c.r[11], ld32((c.r[12].w[0] + 10324u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 11284u)));
    st32((c.r[29].w[0] + 36u), c.r[11].w[0]);
    set32(c.r[11], ld32((c.r[12].w[0] + 10328u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 11286u)));
    st32((c.r[29].w[0] + 40u), c.r[11].w[0]);
    set32(c.r[11], ld32((c.r[12].w[0] + 10336u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 11288u)));
    st32((c.r[29].w[0] + 44u), c.r[11].w[0]);
    set32(c.r[11], ld32((c.r[12].w[0] + 10332u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 11290u)));
    st32((c.r[29].w[0] + 48u), c.r[11].w[0]);
    c.r[11].d[0] = ld8((c.r[12].w[0] + 666u));
    st8((c.r[29].w[0] + 57u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st8((c.r[29].w[0] + 58u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 59u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 60u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 61u), static_cast<std::uint8_t>(0u));
    c.r[11].d[0] = ld8((c.r[12].w[0] + 10294u));
    st8((c.r[29].w[0] + 62u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[12].w[0] + 10295u));
    st8((c.r[29].w[0] + 63u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st16((c.r[29].w[0] + 16u), static_cast<std::uint16_t>(c.r[10].w[0]));
    st16((c.r[29].w[0] + 18u), static_cast<std::uint16_t>(c.r[9].w[0]));
    st16((c.r[29].w[0] + 20u), static_cast<std::uint16_t>(c.r[8].w[0]));
    st16((c.r[29].w[0] + 22u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[29].w[0] + 24u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[29].w[0] + 26u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[29].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 53;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316F34u); st16((c.r[29].w[0] + 30u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 337u, depth + 1u); else { c.pc = 0x0034E540u; return; } if (c.pc != 0x00316F34u) [[unlikely]] return; }
L_00316F34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00317098; } }
    c.budget -= 1;
L_00316F40:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316F4Cu); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00316F4Cu) [[unlikely]] return; }
L_00316F4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316F54u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 19u, depth + 1u); else { c.pc = 0x003341C0u; return; } if (c.pc != 0x00316F54u) [[unlikely]] return; }
L_00316F54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316F5Cu); set32(c.r[4], 0u + 81u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x003788A0u; return; } if (c.pc != 0x00316F5Cu) [[unlikely]] return; }
L_00316F5C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316F68u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 83u, depth + 1u); else { c.pc = 0x00334FC0u; return; } if (c.pc != 0x00316F68u) [[unlikely]] return; }
L_00316F68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00317098; } }
L_00316F70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316F78u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x00316F78u) [[unlikely]] return; }
L_00316F78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00317098; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull | 65440ull;
    set32(c.r[6], 0u + 120u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2592u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316FA0u); st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008C(c, 201u, depth + 1u); else { c.pc = 0x003336A0u; return; } if (c.pc != 0x00316FA0u) [[unlikely]] return; }
L_00316FA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42AA0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316FB0u);  if (depth < kMaxDepth) unit_008C(c, 211u, depth + 1u); else { c.pc = 0x00333900u; return; } if (c.pc != 0x00316FB0u) [[unlikely]] return; }
L_00316FB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316FB8u);  if (depth < kMaxDepth) unit_0088(c, 419u, depth + 1u); else { c.pc = 0x00323870u; return; } if (c.pc != 0x00316FB8u) [[unlikely]] return; }
L_00316FB8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316FC8u); set32(c.r[6], 0u + 60u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00316FC8u) [[unlikely]] return; }
L_00316FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316FD0u);  if (depth < kMaxDepth) unit_008D(c, 149u, depth + 1u); else { c.pc = 0x00335720u; return; } if (c.pc != 0x00316FD0u) [[unlikely]] return; }
L_00316FD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[29].w[0] + 112u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 4978u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01CD0000u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00900000u);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[5].w[0] + 5201u);
    set32(c.r[6], 0u + 10u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317000u); st8((c.r[29].w[0] + 113u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x00317000u) [[unlikely]] return; }
L_00317000:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00900000u);
    set32(c.r[4], c.r[29].w[0] + 155u);
    set32(c.r[5], c.r[5].w[0] + 5184u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317014u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x00317014u) [[unlikely]] return; }
L_00317014:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031701Cu);  if (depth < kMaxDepth) unit_008D(c, 148u, depth + 1u); else { c.pc = 0x00335710u; return; } if (c.pc != 0x0031701Cu) [[unlikely]] return; }
L_0031701C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00317068; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 4978u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00317058; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4757u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_00317058; } }
    set32(c.r[4], c.r[29].w[0] + 114u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031704Cu); set32(c.r[5], c.r[5].w[0] + 4982u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0031704Cu) [[unlikely]] return; }
L_0031704C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00317068; } }
    c.budget -= 1;
L_00317058:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[29].w[0] + 114u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317068u); set32(c.r[5], c.r[5].w[0] - 6168u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00317068u) [[unlikely]] return; }
L_00317068:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317078u); set32(c.r[5], c.r[5].w[0] - 31184u);  if (depth < kMaxDepth) unit_0093(c, 190u, depth + 1u); else { c.pc = 0x0034D380u; return; } if (c.pc != 0x00317078u) [[unlikely]] return; }
L_00317078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317080u);  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x00317080u) [[unlikely]] return; }
L_00317080:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00317098; } }
L_00317088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317090u);  if (depth < kMaxDepth) unit_008C(c, 207u, depth + 1u); else { c.pc = 0x00333870u; return; } if (c.pc != 0x00317090u) [[unlikely]] return; }
L_00317090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317098u);  if (depth < kMaxDepth) unit_0085(c, 285u, depth + 1u); else { c.pc = 0x00316770u; return; } if (c.pc != 0x00317098u) [[unlikely]] return; }
L_00317098:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003170B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 2592u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[7], c.r[6].w[0] + 2592u);  if (t) { goto L_00317190; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00317150; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00317120; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003170F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00317198; } }
L_003170F0:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] - 11488u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031710Cu); set32(c.r[5], c.r[5].w[0] - 6152u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x0031710Cu) [[unlikely]] return; }
L_0031710C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317114u);  if (depth < kMaxDepth) unit_0086(c, 82u, depth + 1u); else { c.pc = 0x003188A0u; return; } if (c.pc != 0x00317114u) [[unlikely]] return; }
L_00317114:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00317198; } }
    c.budget -= 1;
L_00317120:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 2605u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_00317140; } }
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2605u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00317198; } }
    c.budget -= 1;
L_00317140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317148u);  if (depth < kMaxDepth) unit_0086(c, 81u, depth + 1u); else { c.pc = 0x00318870u; return; } if (c.pc != 0x00317148u) [[unlikely]] return; }
L_00317148:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00317198; } }
L_00317150:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 23000u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00317170; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317164u);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321A80u; return; } if (c.pc != 0x00317164u) [[unlikely]] return; }
L_00317164:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00317198; } }
    c.budget -= 1;
L_00317170:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031717Cu); st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x0031717Cu) [[unlikely]] return; }
L_0031717C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317184u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0094(c, 170u, depth + 1u); else { c.pc = 0x003511C0u; return; } if (c.pc != 0x00317184u) [[unlikely]] return; }
L_00317184:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00317198; } }
    c.budget -= 1;
L_00317190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317198u);  if (depth < kMaxDepth) unit_0085(c, 285u, depth + 1u); else { c.pc = 0x00316770u; return; } if (c.pc != 0x00317198u) [[unlikely]] return; }
L_00317198:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003171B0:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00317278; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00317238; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00317210; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003171F8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003171F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003172D8; } }
L_003171F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003172E0; } }
L_003171F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4757u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003172D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003172E0; } }
L_00317210:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4757u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00317228; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003172E0; } }
L_00317228:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_003172D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003172E0; } }
L_00317238:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4757u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00317250; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003172E0; } }
L_00317250:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00317260; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003172E0; } }
L_00317260:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003172D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003172E0; } }
    c.budget -= 1;
L_00317278:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4757u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00317290; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003172E0; } }
L_00317290:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003172A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003172E0; } }
    c.budget -= 1;
L_003172A8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003172C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003172E0; } }
    c.budget -= 1;
L_003172C0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003172D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003172E0; } }
    c.budget -= 1;
L_003172D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003172E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003172F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 2592u));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[6].w[0] + 2592u);  if (t) { goto L_003175C8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 6128u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00314000u < 16384u) { entry = entries_0085[(t - 0x00314000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00317328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317330u); c.r[4].d[0] = ld8((c.r[6].w[0] + 10378u));  if (depth < kMaxDepth) unit_0085(c, 366u, depth + 1u); else { c.pc = 0x003171B0u; return; } if (c.pc != 0x00317330u) [[unlikely]] return; }
L_00317330:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00317358; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317348u); st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x00317348u) [[unlikely]] return; }
L_00317348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317350u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0093(c, 254u, depth + 1u); else { c.pc = 0x0034DB80u; return; } if (c.pc != 0x00317350u) [[unlikely]] return; }
L_00317350:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003175C8; } }
L_00317358:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 16u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2592u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317374u); st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x00317374u) [[unlikely]] return; }
L_00317374:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003175C8; } }
    c.budget -= 1;
L_00317380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317388u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x00317388u) [[unlikely]] return; }
L_00317388:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003175C8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2592u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003173A4u); st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x003173A4u) [[unlikely]] return; }
L_003173A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003173ACu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 19u, depth + 1u); else { c.pc = 0x003341C0u; return; } if (c.pc != 0x003173ACu) [[unlikely]] return; }
L_003173AC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003173B8u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 83u, depth + 1u); else { c.pc = 0x00334FC0u; return; } if (c.pc != 0x003173B8u) [[unlikely]] return; }
L_003173B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003175C8; } }
L_003173C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003173C8u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x003173C8u) [[unlikely]] return; }
L_003173C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003175C8; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 60u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2592u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 2612u), c.r[4].w[0]);  if (t) { goto L_003175C8; } }
L_003173F0:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 10378u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 15u);  if (t) { goto L_00317428; } }
    set32(c.r[4], 0u + 20u);
    st32((c.r[3].w[0] + 2616u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031741Cu); set32(c.r[5], c.r[2].w[0] + 10382u);  if (depth < kMaxDepth) unit_009E(c, 55u, depth + 1u); else { c.pc = 0x00378F60u; return; } if (c.pc != 0x0031741Cu) [[unlikely]] return; }
L_0031741C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003175C8; } }
    c.budget -= 1;
L_00317428:
    set32(c.r[4], c.r[3].w[0] + 8291u);
    set32(c.r[5], c.r[3].w[0] + 10382u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317438u); set32(c.r[6], 0u + 768u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00317438u) [[unlikely]] return; }
L_00317438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317440u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321A80u; return; } if (c.pc != 0x00317440u) [[unlikely]] return; }
L_00317440:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003175C8; } }
L_00317448:
    c.r[3].d[0] = ld16((c.r[6].w[0] + 10380u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003174A8; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[6].w[0] + 2612u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[3].w[0] + 2612u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2612u)));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[3], 0u + 60u);  if (t) { goto L_003175C8; } }
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 10380u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 10380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[3].w[0] + 10380u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 10380u)));
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_003175C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_003175C8; } }
    c.budget -= 1;
L_003174A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003174B0u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x003174B0u) [[unlikely]] return; }
L_003174B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003174D8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2592u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003174D4u); st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x003174D4u) [[unlikely]] return; }
L_003174D4:
    c.budget -= 1;
L_003174D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003174E0u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x003174E0u) [[unlikely]] return; }
L_003174E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003174F0u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_008D(c, 98u, depth + 1u); else { c.pc = 0x003351D0u; return; } if (c.pc != 0x003174F0u) [[unlikely]] return; }
L_003174F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43470000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B00000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[13] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317514u); set32(c.r[4], c.r[4].w[0] - 14112u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00317514u) [[unlikely]] return; }
L_00317514:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003175C8; } }
    c.budget -= 1;
L_00317520:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 15u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 76u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031753Cu); st32((c.r[2].w[0] + 2612u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x0031753Cu) [[unlikely]] return; }
L_0031753C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003175C8; } }
    c.budget -= 1;
L_00317548:
    set32(c.r[3], ld32((c.r[6].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0; st32((c.r[6].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_003175C8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 16u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2592u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317574u); st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x00317574u) [[unlikely]] return; }
L_00317574:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003175C8; } }
    c.budget -= 1;
L_00317580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317588u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x00317588u) [[unlikely]] return; }
L_00317588:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003175C8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2592u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003175A4u); st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x003175A4u) [[unlikely]] return; }
L_003175A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003175ACu);  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x003175ACu) [[unlikely]] return; }
L_003175AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003175B4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0093(c, 254u, depth + 1u); else { c.pc = 0x0034DB80u; return; } if (c.pc != 0x003175B4u) [[unlikely]] return; }
L_003175B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003175C8; } }
    c.budget -= 1;
L_003175C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003175C8u);  if (depth < kMaxDepth) unit_0085(c, 285u, depth + 1u); else { c.pc = 0x00316770u; return; } if (c.pc != 0x003175C8u) [[unlikely]] return; }
L_003175C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003175E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 2592u));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[3].w[0] + 2592u);  if (t) { goto L_003177C0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 6080u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00314000u < 16384u) { entry = entries_0085[(t - 0x00314000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00317620:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].d[0] = 0ull | 45000ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2528u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317640u); set32(c.r[4], c.r[2].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0094(c, 128u, depth + 1u); else { c.pc = 0x00350BE0u; return; } if (c.pc != 0x00317640u) [[unlikely]] return; }
L_00317640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317648u);  if (depth < kMaxDepth) unit_0098(c, 302u, depth + 1u); else { c.pc = 0x00361C50u; return; } if (c.pc != 0x00317648u) [[unlikely]] return; }
L_00317648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317650u);  if (depth < kMaxDepth) unit_008D(c, 57u, depth + 1u); else { c.pc = 0x00334D60u; return; } if (c.pc != 0x00317650u) [[unlikely]] return; }
L_00317650:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003177C0; } }
L_00317658:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317664u); st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00317664u) [[unlikely]] return; }
L_00317664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031766Cu);  if (depth < kMaxDepth) unit_008B(c, 6u, depth + 1u); else { c.pc = 0x0032C080u; return; } if (c.pc != 0x0031766Cu) [[unlikely]] return; }
L_0031766C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[3].w[0] + 2535u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5648u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003177C0; } }
    c.budget -= 1;
L_00317688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317690u);  if (depth < kMaxDepth) unit_0098(c, 303u, depth + 1u); else { c.pc = 0x00361C70u; return; } if (c.pc != 0x00317690u) [[unlikely]] return; }
L_00317690:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031769Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0098(c, 541u, depth + 1u); else { c.pc = 0x00363860u; return; } if (c.pc != 0x0031769Cu) [[unlikely]] return; }
L_0031769C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_003176D8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2592u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003176BCu); st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x003176BCu) [[unlikely]] return; }
L_003176BC:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[3].w[0] + 2535u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5648u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003177C0; } }
    c.budget -= 1;
L_003176D8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_003177C0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003176F4u); st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x003176F4u) [[unlikely]] return; }
L_003176F4:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[3].w[0] + 2535u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 5648u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003177C0; } }
    c.budget -= 1;
L_00317710:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317720u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0089(c, 139u, depth + 1u); else { c.pc = 0x00325850u; return; } if (c.pc != 0x00317720u) [[unlikely]] return; }
L_00317720:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003177C0; } }
L_00317728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317730u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 144u, depth + 1u); else { c.pc = 0x00335690u; return; } if (c.pc != 0x00317730u) [[unlikely]] return; }
L_00317730:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003177C0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2592u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317758u); st8((c.r[2].w[0] + 2528u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x00317758u) [[unlikely]] return; }
L_00317758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317760u);  if (depth < kMaxDepth) unit_0094(c, 121u, depth + 1u); else { c.pc = 0x00350B70u; return; } if (c.pc != 0x00317760u) [[unlikely]] return; }
L_00317760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317768u); set32(c.r[4], 0u + 55u);  if (depth < kMaxDepth) unit_008D(c, 61u, depth + 1u); else { c.pc = 0x00334DB0u; return; } if (c.pc != 0x00317768u) [[unlikely]] return; }
L_00317768:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003177C0; } }
L_00317770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317778u);  if (depth < kMaxDepth) unit_0085(c, 285u, depth + 1u); else { c.pc = 0x00316770u; return; } if (c.pc != 0x00317778u) [[unlikely]] return; }
L_00317778:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003177C0; } }
L_00317780:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317790u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0089(c, 139u, depth + 1u); else { c.pc = 0x00325850u; return; } if (c.pc != 0x00317790u) [[unlikely]] return; }
L_00317790:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003177C0; } }
L_00317798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003177A0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 144u, depth + 1u); else { c.pc = 0x00335690u; return; } if (c.pc != 0x003177A0u) [[unlikely]] return; }
L_003177A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003177C0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003177B8u); st8((c.r[2].w[0] + 2528u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321A80u; return; } if (c.pc != 0x003177B8u) [[unlikely]] return; }
L_003177B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003177C0u); set32(c.r[4], 0u + 55u);  if (depth < kMaxDepth) unit_008D(c, 61u, depth + 1u); else { c.pc = 0x00334DB0u; return; } if (c.pc != 0x003177C0u) [[unlikely]] return; }
L_003177C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003177D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 2592u));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[3].w[0] + 2592u);  if (t) { goto L_00317AB8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 6048u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00314000u < 16384u) { entry = entries_0085[(t - 0x00314000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00317818:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[6], 0u + 32u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317844u); set32(c.r[4], c.r[2].w[0] + 3u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00317844u) [[unlikely]] return; }
L_00317844:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 68u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317858u); set32(c.r[4], c.r[2].w[0] + 35u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00317858u) [[unlikely]] return; }
L_00317858:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031786Cu); set32(c.r[4], c.r[2].w[0] + 103u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0031786Cu) [[unlikely]] return; }
L_0031786C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317874u);  if (depth < kMaxDepth) unit_0093(c, 212u, depth + 1u); else { c.pc = 0x0034D650u; return; } if (c.pc != 0x00317874u) [[unlikely]] return; }
L_00317874:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003178F8; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_003178A0:
    set32(c.r[2], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[5], c.r[2].w[0] + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003178B0u); c.r[4].d[0] = c.r[19].d[0] & 255ull;  if (depth < kMaxDepth) unit_0093(c, 213u, depth + 1u); else { c.pc = 0x0034D660u; return; } if (c.pc != 0x003178B0u) [[unlikely]] return; }
L_003178B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = c.r[19].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003178C4u); set32(c.r[5], c.r[2].w[0] + 35u);  if (depth < kMaxDepth) unit_0093(c, 215u, depth + 1u); else { c.pc = 0x0034D6A0u; return; } if (c.pc != 0x003178C4u) [[unlikely]] return; }
L_003178C4:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = c.r[19].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003178D8u); set32(c.r[5], c.r[2].w[0] + 103u);  if (depth < kMaxDepth) unit_0093(c, 217u, depth + 1u); else { c.pc = 0x0034D6E0u; return; } if (c.pc != 0x003178D8u) [[unlikely]] return; }
L_003178D8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 8u);
    set32(c.r[17], c.r[17].w[0] + 17u);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003178A0u | kUnwind; return; } goto L_003178A0; } }
L_003178F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317900u);  if (depth < kMaxDepth) unit_008D(c, 148u, depth + 1u); else { c.pc = 0x00335710u; return; } if (c.pc != 0x00317900u) [[unlikely]] return; }
L_00317900:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00317AB8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_00317AB8; } }
    st8((c.r[4].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00317AB8; } }
L_00317928:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317934u); st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00317934u) [[unlikely]] return; }
L_00317934:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317948u); set32(c.r[6], 0u + 56u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00317948u) [[unlikely]] return; }
L_00317948:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[4], c.r[4].w[0] + 15536u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2u));
    st8((c.r[1].w[0] + 15543u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317970u); st8((c.r[1].w[0] + 15545u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 204u, depth + 1u); else { c.pc = 0x00351600u; return; } if (c.pc != 0x00317970u) [[unlikely]] return; }
L_00317970:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031797Cu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 83u, depth + 1u); else { c.pc = 0x00334FC0u; return; } if (c.pc != 0x0031797Cu) [[unlikely]] return; }
L_0031797C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00317AB8; } }
    c.budget -= 1;
L_00317988:
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00317AB8; } }
    c.budget -= 1;
L_00317998:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003179A4u); set32(c.r[4], c.r[4].w[0] + 15536u);  if (depth < kMaxDepth) unit_0094(c, 204u, depth + 1u); else { c.pc = 0x00351600u; return; } if (c.pc != 0x003179A4u) [[unlikely]] return; }
L_003179A4:
    set32(c.r[3], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_00317AB8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00317AB8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003179C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00317AB8; } }
L_003179C8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2592u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003179DCu); st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x003179DCu) [[unlikely]] return; }
L_003179DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00317AB8; } }
    c.budget -= 1;
L_003179E8:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003179FCu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x003179FCu) [[unlikely]] return; }
L_003179FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00317AB8; } }
    c.budget -= 1;
L_00317A08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317A10u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x00317A10u) [[unlikely]] return; }
L_00317A10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00317AB8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2592u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].d[0] = ld8((c.r[1].w[0] + 15545u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317A3Cu); st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x00317A3Cu) [[unlikely]] return; }
L_00317A3C:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00317A80; } }
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[2], c.r[6].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[2].w[0] + 103u);
    set32(c.r[5], c.r[3].w[0] + 35u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317A78u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0093(c, 197u, depth + 1u); else { c.pc = 0x0034D4D0u; return; } if (c.pc != 0x00317A78u) [[unlikely]] return; }
L_00317A78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00317AB8; } }
L_00317A80:
    set32(c.r[4], c.r[3].w[0] + 3u);
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[2], c.r[6].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[2].w[0] + 103u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317AA4u); set32(c.r[5], c.r[3].w[0] + 35u);  if (depth < kMaxDepth) unit_0093(c, 197u, depth + 1u); else { c.pc = 0x0034D4D0u; return; } if (c.pc != 0x00317AA4u) [[unlikely]] return; }
L_00317AA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00317AB8; } }
    c.budget -= 1;
L_00317AB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317AB8u);  if (depth < kMaxDepth) unit_0085(c, 285u, depth + 1u); else { c.pc = 0x00316770u; return; } if (c.pc != 0x00317AB8u) [[unlikely]] return; }
L_00317AB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00317AE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 2592u));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[6].w[0] + 2592u);  if (t) { goto L_00317D50; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 6000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00314000u < 16384u) { entry = entries_0085[(t - 0x00314000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00317B18:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317B2Cu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x00317B2Cu) [[unlikely]] return; }
L_00317B2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00317D50; } }
    c.budget -= 1;
L_00317B38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317B40u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x00317B40u) [[unlikely]] return; }
L_00317B40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00317D50; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[5], c.r[5].w[0] + 4288u);
    set32(c.r[4], c.r[4].w[0] - 11952u);
    set32(c.r[3], 0u + 29u);
    c.r[2].d[0] = ld8((c.r[6].w[0] + 2592u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[6].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
L_00317B70:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00317B70u | kUnwind; return; } goto L_00317B70; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] - 11488u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317BA0u); set32(c.r[5], c.r[5].w[0] - 6016u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00317BA0u) [[unlikely]] return; }
L_00317BA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317BA8u);  if (depth < kMaxDepth) unit_0086(c, 82u, depth + 1u); else { c.pc = 0x003188A0u; return; } if (c.pc != 0x00317BA8u) [[unlikely]] return; }
L_00317BA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00317D50; } }
L_00317BB0:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 2605u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_00317BD0; } }
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2605u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00317D50; } }
L_00317BD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317BD8u);  if (depth < kMaxDepth) unit_0086(c, 81u, depth + 1u); else { c.pc = 0x00318870u; return; } if (c.pc != 0x00317BD8u) [[unlikely]] return; }
L_00317BD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00317D50; } }
L_00317BE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] - 11952u);
    set32(c.r[5], c.r[5].w[0] + 4288u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317BF8u); set32(c.r[6], 0u + 464u);  if (depth < kMaxDepth) unit_0006(c, 189u, depth + 1u); else { c.pc = 0x0011A900u; return; } if (c.pc != 0x00317BF8u) [[unlikely]] return; }
L_00317BF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00317C38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317C08u);  if (depth < kMaxDepth) unit_0085(c, 284u, depth + 1u); else { c.pc = 0x00316750u; return; } if (c.pc != 0x00317C08u) [[unlikely]] return; }
L_00317C08:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    set32(c.r[4], c.r[4].w[0] + 4288u);
    set32(c.r[5], c.r[5].w[0] - 31504u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2592u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317C2Cu); st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0091(c, 214u, depth + 1u); else { c.pc = 0x00346030u; return; } if (c.pc != 0x00317C2Cu) [[unlikely]] return; }
L_00317C2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00317D50; } }
    c.budget -= 1;
L_00317C38:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 7u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00317D50; } }
L_00317C48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317C50u);  if (depth < kMaxDepth) unit_0085(c, 285u, depth + 1u); else { c.pc = 0x00316770u; return; } if (c.pc != 0x00317C50u) [[unlikely]] return; }
L_00317C50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00317D50; } }
L_00317C58:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317C64u); st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00317C64u) [[unlikely]] return; }
L_00317C64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317C6Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 19u, depth + 1u); else { c.pc = 0x003341C0u; return; } if (c.pc != 0x00317C6Cu) [[unlikely]] return; }
L_00317C6C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 600u);
    set32(c.r[4], 0u + 20u);
    st32((c.r[2].w[0] + 2612u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317C88u); set32(c.r[5], c.r[2].w[0] + 8291u);  if (depth < kMaxDepth) unit_009E(c, 53u, depth + 1u); else { c.pc = 0x00378EA0u; return; } if (c.pc != 0x00317C88u) [[unlikely]] return; }
L_00317C88:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317C94u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 83u, depth + 1u); else { c.pc = 0x00334FC0u; return; } if (c.pc != 0x00317C94u) [[unlikely]] return; }
L_00317C94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00317D50; } }
    c.budget -= 1;
L_00317CA0:
    set32(c.r[3], ld32((c.r[6].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[3].sd[0] < 481ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[6].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_00317D50; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 2612u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 96u);  if (t) { goto L_00317CD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317CCCu);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00317CCCu) [[unlikely]] return; }
L_00317CCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00317D50; } }
    c.budget -= 1;
L_00317CD8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 16u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2592u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317CF4u); st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x00317CF4u) [[unlikely]] return; }
L_00317CF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00317D50; } }
    c.budget -= 1;
L_00317D00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317D08u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x00317D08u) [[unlikely]] return; }
L_00317D08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00317D50; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2592u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317D24u); st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00317D24u) [[unlikely]] return; }
L_00317D24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00317D50; } }
    c.budget -= 1;
L_00317D30:
    set32(c.r[3], 0u + 4u);
    st8((c.r[6].w[0] + 2591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2593u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_00317D50:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00317D60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[6].w[0] + 2592u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[7], c.r[6].w[0] + 2592u);  if (t) { goto L_00317E48; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_00317DE0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00317D98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00317E78; } }
L_00317D98:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317DA8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 83u, depth + 1u); else { c.pc = 0x00334FC0u; return; } if (c.pc != 0x00317DA8u) [[unlikely]] return; }
L_00317DA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317DB0u);  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00317DB0u) [[unlikely]] return; }
L_00317DB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317DB8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 19u, depth + 1u); else { c.pc = 0x003341C0u; return; } if (c.pc != 0x00317DB8u) [[unlikely]] return; }
L_00317DB8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 600u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 2612u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317DD4u); set32(c.r[5], c.r[2].w[0] + 8291u);  if (depth < kMaxDepth) unit_009E(c, 53u, depth + 1u); else { c.pc = 0x00378EA0u; return; } if (c.pc != 0x00317DD4u) [[unlikely]] return; }
L_00317DD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00317E78; } }
    c.budget -= 1;
L_00317DE0:
    set32(c.r[3], ld32((c.r[6].w[0] + 2612u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[3].sd[0] < 481ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[6].w[0] + 2612u), c.r[3].w[0]);  if (t) { goto L_00317E78; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 2612u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_00317E18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317E0Cu);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00317E0Cu) [[unlikely]] return; }
L_00317E0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00317E78; } }
    c.budget -= 1;
L_00317E18:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2592u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317E34u); st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x00317E34u) [[unlikely]] return; }
L_00317E34:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317E40u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x00317E40u) [[unlikely]] return; }
L_00317E40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00317E78; } }
L_00317E48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317E50u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x00317E50u) [[unlikely]] return; }
L_00317E50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00317E78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317E60u);  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00317E60u) [[unlikely]] return; }
L_00317E60:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 4u);
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
L_00317E78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00317E90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[4].w[0] + 2592u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2592u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00317FA0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00317EE8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00317EC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00317FC8; } }
L_00317EC8:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317EDCu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x00317EDCu) [[unlikely]] return; }
L_00317EDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00317FC8; } }
    c.budget -= 1;
L_00317EE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317EF0u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x00317EF0u) [[unlikely]] return; }
L_00317EF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00317FC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317F00u);  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00317F00u) [[unlikely]] return; }
L_00317F00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317F08u);  if (depth < kMaxDepth) unit_0085(c, 102u, depth + 1u); else { c.pc = 0x00314EF0u; return; } if (c.pc != 0x00317F08u) [[unlikely]] return; }
L_00317F08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4757u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00317F30; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st16((c.r[2].w[0] + 660u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st16((c.r[2].w[0] + 658u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st16((c.r[2].w[0] + 664u), static_cast<std::uint16_t>(0u));
    c.budget -= 6;
L_00317F30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4757u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00317F58; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 23724u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);  if (t) { goto L_00317F58; } }
    st8((c.r[1].w[0] + 4757u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00317F58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4757u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00317F80; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317F78u); st8((c.r[1].w[0] + 4757u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0088(c, 215u, depth + 1u); else { c.pc = 0x00321A80u; return; } if (c.pc != 0x00317F78u) [[unlikely]] return; }
L_00317F78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00317FC8; } }
L_00317F80:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2592u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317F98u); st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 130u, depth + 1u); else { c.pc = 0x003355C0u; return; } if (c.pc != 0x00317F98u) [[unlikely]] return; }
L_00317F98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00317FC8; } }
L_00317FA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317FA8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_008D(c, 144u, depth + 1u); else { c.pc = 0x00335690u; return; } if (c.pc != 0x00317FA8u) [[unlikely]] return; }
L_00317FA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00317FC8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 8u);
    st8((c.r[3].w[0] + 2591u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_00317FC8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00317FE0:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[2], 0u + 2u);  if (t) { [[clang::musttail]] return unit_0086(c, 5u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0086(c, 4u, depth); } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0086(c, 3u, depth); } }
    [[clang::musttail]] return unit_0086(c, 2u, depth);
}

}
