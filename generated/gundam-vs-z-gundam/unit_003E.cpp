#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_003E[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0,
    3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0,
    0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 31, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0,
    0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 49, 0, 50, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0,
    0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 67, 0, 68, 0, 0, 69,
    0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0,
    74, 0, 0, 0, 0, 0, 75, 0, 76, 0, 77, 0, 78, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0,
    0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0,
    92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96,
    0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 113, 0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0,
    0, 117, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 123, 0, 124, 0, 125, 0, 126, 0, 127, 0, 128, 0, 129, 0, 130, 0, 131, 0, 132, 0, 133, 0, 134, 0, 135, 0, 136, 0,
    137, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 141, 0,
    0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0,
    0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0,
    153, 0, 154, 0, 155, 0, 156, 0, 157, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0,
    0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0,
    165, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 170, 0, 171, 0, 0, 172, 0, 0, 0, 173, 0, 0,
    174, 0, 0, 0, 175, 0, 176, 0, 177, 0, 0, 0, 178, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 187, 0, 0, 0, 188, 0, 189, 0, 190, 0, 0, 0, 191, 0,
    192, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 198, 0, 199, 0, 200, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 213, 0, 0, 0, 214, 0, 215, 0, 216, 0, 0, 0, 217, 0, 218, 0, 219, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 223, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 226, 0, 0, 227, 0, 0, 0, 228, 0, 229, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 237, 0, 238, 0, 0, 239, 0, 0, 0, 240, 0, 0,
    0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0,
    249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0,
    255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259,
    0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 264, 0, 265, 0, 266, 0, 267, 0, 268, 0,
    0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 273, 0, 0, 0, 274, 0, 275, 0, 0, 0,
    0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0,
    0, 278, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 281, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0,
    0, 0, 0, 0, 287, 0, 288, 0, 289, 0, 0, 0, 290, 0, 291, 0, 292, 0, 0, 0, 293, 0, 294, 0, 295, 0, 0, 0, 0, 296, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 299, 0, 0, 0, 0, 300, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 302, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0,
    0, 306, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 313, 0, 0, 0, 314, 0, 315, 0, 316, 0, 0, 0, 317, 0,
    318, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 324, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 327, 0, 0, 328, 0, 0, 0, 329, 0, 330, 0,
    0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 337,
    0, 0, 0, 338, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 350, 0, 351, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 354, 0, 0, 0, 355,
    0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 359, 0, 0, 0, 360, 0, 361, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363,
    0, 0, 0, 0, 364, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0,
    0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 374, 0, 0, 0,
    0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0,
    0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 383, 0,
    384, 0, 385, 0, 386, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 389, 0, 390, 0, 391, 0, 392, 0, 393, 0, 0, 0, 394, 0,
    0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 398, 0, 0, 0, 399, 0, 400, 0, 0, 401, 0, 0, 0, 402,
    0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    407, 0, 0, 0, 0, 0, 0, 0, 408, 0, 409, 0, 410, 0, 0, 0, 411, 0, 412, 0, 413, 0, 0, 0, 414, 0, 415, 0, 416, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 419, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 426, 0, 427, 0, 428, 0, 0, 0, 429, 0, 430, 0, 431, 0, 0, 0, 432, 0, 433, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0,
    437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 441, 0, 0, 442, 0, 0,
    0, 443, 0, 444, 0, 0, 0, 445, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_003E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001F8000;
    case 2u: goto L_001F8074;
    case 3u: goto L_001F8080;
    case 4u: goto L_001F80D4;
    case 5u: goto L_001F80F8;
    case 6u: goto L_001F8108;
    case 7u: goto L_001F8120;
    case 8u: goto L_001F8128;
    case 9u: goto L_001F8150;
    case 10u: goto L_001F8160;
    case 11u: goto L_001F8170;
    case 12u: goto L_001F8198;
    case 13u: goto L_001F81A4;
    case 14u: goto L_001F81C0;
    case 15u: goto L_001F81E8;
    case 16u: goto L_001F8230;
    case 17u: goto L_001F8288;
    case 18u: goto L_001F82AC;
    case 19u: goto L_001F82B8;
    case 20u: goto L_001F82D0;
    case 21u: goto L_001F82F0;
    case 22u: goto L_001F8338;
    case 23u: goto L_001F8350;
    case 24u: goto L_001F8380;
    case 25u: goto L_001F8410;
    case 26u: goto L_001F8520;
    case 27u: goto L_001F8560;
    case 28u: goto L_001F8570;
    case 29u: goto L_001F859C;
    case 30u: goto L_001F85A4;
    case 31u: goto L_001F85B4;
    case 32u: goto L_001F85BC;
    case 33u: goto L_001F85C4;
    case 34u: goto L_001F85E0;
    case 35u: goto L_001F8610;
    case 36u: goto L_001F8674;
    case 37u: goto L_001F8690;
    case 38u: goto L_001F86B0;
    case 39u: goto L_001F86D0;
    case 40u: goto L_001F8770;
    case 41u: goto L_001F87C0;
    case 42u: goto L_001F87E0;
    case 43u: goto L_001F8840;
    case 44u: goto L_001F8850;
    case 45u: goto L_001F88BC;
    case 46u: goto L_001F88F4;
    case 47u: goto L_001F8920;
    case 48u: goto L_001F8940;
    case 49u: goto L_001F8984;
    case 50u: goto L_001F898C;
    case 51u: goto L_001F8994;
    case 52u: goto L_001F89AC;
    case 53u: goto L_001F89C8;
    case 54u: goto L_001F89D0;
    case 55u: goto L_001F89D8;
    case 56u: goto L_001F89F8;
    case 57u: goto L_001F8A18;
    case 58u: goto L_001F8A30;
    case 59u: goto L_001F8ACC;
    case 60u: goto L_001F8AE0;
    case 61u: goto L_001F8B80;
    case 62u: goto L_001F8BF0;
    case 63u: goto L_001F8C00;
    case 64u: goto L_001F8C3C;
    case 65u: goto L_001F8C58;
    case 66u: goto L_001F8C60;
    case 67u: goto L_001F8C68;
    case 68u: goto L_001F8C70;
    case 69u: goto L_001F8C7C;
    case 70u: goto L_001F8CA0;
    case 71u: goto L_001F8CC0;
    case 72u: goto L_001F8CDC;
    case 73u: goto L_001F8CE8;
    case 74u: goto L_001F8D00;
    case 75u: goto L_001F8D18;
    case 76u: goto L_001F8D20;
    case 77u: goto L_001F8D28;
    case 78u: goto L_001F8D30;
    case 79u: goto L_001F8D38;
    case 80u: goto L_001F8D44;
    case 81u: goto L_001F8D60;
    case 82u: goto L_001F8D9C;
    case 83u: goto L_001F8DF4;
    case 84u: goto L_001F8E18;
    case 85u: goto L_001F8E40;
    case 86u: goto L_001F8E60;
    case 87u: goto L_001F900C;
    case 88u: goto L_001F9028;
    case 89u: goto L_001F9040;
    case 90u: goto L_001F904C;
    case 91u: goto L_001F9068;
    case 92u: goto L_001F9080;
    case 93u: goto L_001F90F4;
    case 94u: goto L_001F90FC;
    case 95u: goto L_001F9140;
    case 96u: goto L_001F917C;
    case 97u: goto L_001F9190;
    case 98u: goto L_001F91CC;
    case 99u: goto L_001F9244;
    case 100u: goto L_001F9258;
    case 101u: goto L_001F9270;
    case 102u: goto L_001F92D0;
    case 103u: goto L_001F930C;
    case 104u: goto L_001F9350;
    case 105u: goto L_001F9360;
    case 106u: goto L_001F93D0;
    case 107u: goto L_001F93E0;
    case 108u: goto L_001F9458;
    case 109u: goto L_001F9480;
    case 110u: goto L_001F9490;
    case 111u: goto L_001F94A8;
    case 112u: goto L_001F94B8;
    case 113u: goto L_001F94C0;
    case 114u: goto L_001F94D0;
    case 115u: goto L_001F94D8;
    case 116u: goto L_001F94F0;
    case 117u: goto L_001F9504;
    case 118u: goto L_001F950C;
    case 119u: goto L_001F9520;
    case 120u: goto L_001F9548;
    case 121u: goto L_001F9594;
    case 122u: goto L_001F95B0;
    case 123u: goto L_001F9610;
    case 124u: goto L_001F9618;
    case 125u: goto L_001F9620;
    case 126u: goto L_001F9628;
    case 127u: goto L_001F9630;
    case 128u: goto L_001F9638;
    case 129u: goto L_001F9640;
    case 130u: goto L_001F9648;
    case 131u: goto L_001F9650;
    case 132u: goto L_001F9658;
    case 133u: goto L_001F9660;
    case 134u: goto L_001F9668;
    case 135u: goto L_001F9670;
    case 136u: goto L_001F9678;
    case 137u: goto L_001F9680;
    case 138u: goto L_001F9688;
    case 139u: goto L_001F96D8;
    case 140u: goto L_001F96E8;
    case 141u: goto L_001F96F8;
    case 142u: goto L_001F9708;
    case 143u: goto L_001F9718;
    case 144u: goto L_001F9730;
    case 145u: goto L_001F9750;
    case 146u: goto L_001F983C;
    case 147u: goto L_001F9870;
    case 148u: goto L_001F988C;
    case 149u: goto L_001F98B0;
    case 150u: goto L_001F98C4;
    case 151u: goto L_001F98D0;
    case 152u: goto L_001F98DC;
    case 153u: goto L_001F9900;
    case 154u: goto L_001F9908;
    case 155u: goto L_001F9910;
    case 156u: goto L_001F9918;
    case 157u: goto L_001F9920;
    case 158u: goto L_001F9928;
    case 159u: goto L_001F9940;
    case 160u: goto L_001F9970;
    case 161u: goto L_001F9984;
    case 162u: goto L_001F99AC;
    case 163u: goto L_001F99C8;
    case 164u: goto L_001F99DC;
    case 165u: goto L_001F9A00;
    case 166u: goto L_001F9A10;
    case 167u: goto L_001F9A20;
    case 168u: goto L_001F9A40;
    case 169u: goto L_001F9A48;
    case 170u: goto L_001F9A50;
    case 171u: goto L_001F9A58;
    case 172u: goto L_001F9A64;
    case 173u: goto L_001F9A74;
    case 174u: goto L_001F9A80;
    case 175u: goto L_001F9A90;
    case 176u: goto L_001F9A98;
    case 177u: goto L_001F9AA0;
    case 178u: goto L_001F9AB0;
    case 179u: goto L_001F9AB8;
    case 180u: goto L_001F9AC0;
    case 181u: goto L_001F9AF0;
    case 182u: goto L_001F9B58;
    case 183u: goto L_001F9B68;
    case 184u: goto L_001F9C18;
    case 185u: goto L_001F9C38;
    case 186u: goto L_001F9C40;
    case 187u: goto L_001F9C48;
    case 188u: goto L_001F9C58;
    case 189u: goto L_001F9C60;
    case 190u: goto L_001F9C68;
    case 191u: goto L_001F9C78;
    case 192u: goto L_001F9C80;
    case 193u: goto L_001F9C88;
    case 194u: goto L_001F9CCC;
    case 195u: goto L_001F9D40;
    case 196u: goto L_001F9D4C;
    case 197u: goto L_001F9D5C;
    case 198u: goto L_001F9D84;
    case 199u: goto L_001F9D8C;
    case 200u: goto L_001F9D94;
    case 201u: goto L_001F9D9C;
    case 202u: goto L_001F9DAC;
    case 203u: goto L_001F9DC0;
    case 204u: goto L_001F9E30;
    case 205u: goto L_001F9E48;
    case 206u: goto L_001F9E50;
    case 207u: goto L_001F9E5C;
    case 208u: goto L_001F9FA0;
    case 209u: goto L_001F9FC0;
    case 210u: goto L_001F9FF0;
    case 211u: goto L_001FA098;
    case 212u: goto L_001FA0A0;
    case 213u: goto L_001FA0A8;
    case 214u: goto L_001FA0B8;
    case 215u: goto L_001FA0C0;
    case 216u: goto L_001FA0C8;
    case 217u: goto L_001FA0D8;
    case 218u: goto L_001FA0E0;
    case 219u: goto L_001FA0E8;
    case 220u: goto L_001FA160;
    case 221u: goto L_001FA1B0;
    case 222u: goto L_001FA1C0;
    case 223u: goto L_001FA204;
    case 224u: goto L_001FA214;
    case 225u: goto L_001FA224;
    case 226u: goto L_001FA230;
    case 227u: goto L_001FA23C;
    case 228u: goto L_001FA24C;
    case 229u: goto L_001FA254;
    case 230u: goto L_001FA264;
    case 231u: goto L_001FA26C;
    case 232u: goto L_001FA2C0;
    case 233u: goto L_001FA300;
    case 234u: goto L_001FA320;
    case 235u: goto L_001FA3B8;
    case 236u: goto L_001FA3C0;
    case 237u: goto L_001FA3D0;
    case 238u: goto L_001FA3D8;
    case 239u: goto L_001FA3E4;
    case 240u: goto L_001FA3F4;
    case 241u: goto L_001FA410;
    case 242u: goto L_001FA450;
    case 243u: goto L_001FA460;
    case 244u: goto L_001FA4C0;
    case 245u: goto L_001FA550;
    case 246u: goto L_001FA57C;
    case 247u: goto L_001FA5D4;
    case 248u: goto L_001FA5E0;
    case 249u: goto L_001FA600;
    case 250u: goto L_001FA630;
    case 251u: goto L_001FA640;
    case 252u: goto L_001FA698;
    case 253u: goto L_001FA6A4;
    case 254u: goto L_001FA6E0;
    case 255u: goto L_001FA700;
    case 256u: goto L_001FA78C;
    case 257u: goto L_001FA7C0;
    case 258u: goto L_001FA7DC;
    case 259u: goto L_001FA7FC;
    case 260u: goto L_001FA814;
    case 261u: goto L_001FA820;
    case 262u: goto L_001FA82C;
    case 263u: goto L_001FA850;
    case 264u: goto L_001FA858;
    case 265u: goto L_001FA860;
    case 266u: goto L_001FA868;
    case 267u: goto L_001FA870;
    case 268u: goto L_001FA878;
    case 269u: goto L_001FA888;
    case 270u: goto L_001FA898;
    case 271u: goto L_001FA8B8;
    case 272u: goto L_001FA8D0;
    case 273u: goto L_001FA8D8;
    case 274u: goto L_001FA8E8;
    case 275u: goto L_001FA8F0;
    case 276u: goto L_001FA908;
    case 277u: goto L_001FA96C;
    case 278u: goto L_001FA984;
    case 279u: goto L_001FA998;
    case 280u: goto L_001FA9A4;
    case 281u: goto L_001FA9B8;
    case 282u: goto L_001FA9C0;
    case 283u: goto L_001FA9CC;
    case 284u: goto L_001FA9F0;
    case 285u: goto L_001FAA54;
    case 286u: goto L_001FAAF4;
    case 287u: goto L_001FAB10;
    case 288u: goto L_001FAB18;
    case 289u: goto L_001FAB20;
    case 290u: goto L_001FAB30;
    case 291u: goto L_001FAB38;
    case 292u: goto L_001FAB40;
    case 293u: goto L_001FAB50;
    case 294u: goto L_001FAB58;
    case 295u: goto L_001FAB60;
    case 296u: goto L_001FAB74;
    case 297u: goto L_001FABB8;
    case 298u: goto L_001FABD8;
    case 299u: goto L_001FABE4;
    case 300u: goto L_001FABF8;
    case 301u: goto L_001FAC88;
    case 302u: goto L_001FAD08;
    case 303u: goto L_001FAD18;
    case 304u: goto L_001FAD20;
    case 305u: goto L_001FAD64;
    case 306u: goto L_001FAD84;
    case 307u: goto L_001FAD90;
    case 308u: goto L_001FADA0;
    case 309u: goto L_001FADD0;
    case 310u: goto L_001FADF0;
    case 311u: goto L_001FAEB8;
    case 312u: goto L_001FAEC0;
    case 313u: goto L_001FAEC8;
    case 314u: goto L_001FAED8;
    case 315u: goto L_001FAEE0;
    case 316u: goto L_001FAEE8;
    case 317u: goto L_001FAEF8;
    case 318u: goto L_001FAF00;
    case 319u: goto L_001FAF08;
    case 320u: goto L_001FAF90;
    case 321u: goto L_001FAFA0;
    case 322u: goto L_001FAFB0;
    case 323u: goto L_001FB020;
    case 324u: goto L_001FB028;
    case 325u: goto L_001FB038;
    case 326u: goto L_001FB048;
    case 327u: goto L_001FB054;
    case 328u: goto L_001FB060;
    case 329u: goto L_001FB070;
    case 330u: goto L_001FB078;
    case 331u: goto L_001FB088;
    case 332u: goto L_001FB090;
    case 333u: goto L_001FB100;
    case 334u: goto L_001FB12C;
    case 335u: goto L_001FB150;
    case 336u: goto L_001FB1F4;
    case 337u: goto L_001FB1FC;
    case 338u: goto L_001FB20C;
    case 339u: goto L_001FB214;
    case 340u: goto L_001FB22C;
    case 341u: goto L_001FB244;
    case 342u: goto L_001FB258;
    case 343u: goto L_001FB270;
    case 344u: goto L_001FB2AC;
    case 345u: goto L_001FB2BC;
    case 346u: goto L_001FB2F0;
    case 347u: goto L_001FB354;
    case 348u: goto L_001FB370;
    case 349u: goto L_001FB3A8;
    case 350u: goto L_001FB3B4;
    case 351u: goto L_001FB3BC;
    case 352u: goto L_001FB3C8;
    case 353u: goto L_001FB3E4;
    case 354u: goto L_001FB3EC;
    case 355u: goto L_001FB3FC;
    case 356u: goto L_001FB408;
    case 357u: goto L_001FB428;
    case 358u: goto L_001FB450;
    case 359u: goto L_001FB45C;
    case 360u: goto L_001FB46C;
    case 361u: goto L_001FB474;
    case 362u: goto L_001FB4E0;
    case 363u: goto L_001FB4FC;
    case 364u: goto L_001FB510;
    case 365u: goto L_001FB51C;
    case 366u: goto L_001FB540;
    case 367u: goto L_001FB5C8;
    case 368u: goto L_001FB5F0;
    case 369u: goto L_001FB604;
    case 370u: goto L_001FB62C;
    case 371u: goto L_001FB660;
    case 372u: goto L_001FB68C;
    case 373u: goto L_001FB6E4;
    case 374u: goto L_001FB6F0;
    case 375u: goto L_001FB710;
    case 376u: goto L_001FB730;
    case 377u: goto L_001FB7C0;
    case 378u: goto L_001FB7F0;
    case 379u: goto L_001FB80C;
    case 380u: goto L_001FB82C;
    case 381u: goto L_001FB844;
    case 382u: goto L_001FB870;
    case 383u: goto L_001FB878;
    case 384u: goto L_001FB880;
    case 385u: goto L_001FB888;
    case 386u: goto L_001FB890;
    case 387u: goto L_001FB89C;
    case 388u: goto L_001FB8C0;
    case 389u: goto L_001FB8C8;
    case 390u: goto L_001FB8D0;
    case 391u: goto L_001FB8D8;
    case 392u: goto L_001FB8E0;
    case 393u: goto L_001FB8E8;
    case 394u: goto L_001FB8F8;
    case 395u: goto L_001FB908;
    case 396u: goto L_001FB928;
    case 397u: goto L_001FB940;
    case 398u: goto L_001FB948;
    case 399u: goto L_001FB958;
    case 400u: goto L_001FB960;
    case 401u: goto L_001FB96C;
    case 402u: goto L_001FB97C;
    case 403u: goto L_001FB988;
    case 404u: goto L_001FB9A0;
    case 405u: goto L_001FB9F8;
    case 406u: goto L_001FBA50;
    case 407u: goto L_001FBA80;
    case 408u: goto L_001FBAA0;
    case 409u: goto L_001FBAA8;
    case 410u: goto L_001FBAB0;
    case 411u: goto L_001FBAC0;
    case 412u: goto L_001FBAC8;
    case 413u: goto L_001FBAD0;
    case 414u: goto L_001FBAE0;
    case 415u: goto L_001FBAE8;
    case 416u: goto L_001FBAF0;
    case 417u: goto L_001FBBB4;
    case 418u: goto L_001FBBE8;
    case 419u: goto L_001FBC14;
    case 420u: goto L_001FBC20;
    case 421u: goto L_001FBC90;
    case 422u: goto L_001FBC9C;
    case 423u: goto L_001FBCC0;
    case 424u: goto L_001FBCE0;
    case 425u: goto L_001FBD5C;
    case 426u: goto L_001FBD88;
    case 427u: goto L_001FBD90;
    case 428u: goto L_001FBD98;
    case 429u: goto L_001FBDA8;
    case 430u: goto L_001FBDB0;
    case 431u: goto L_001FBDB8;
    case 432u: goto L_001FBDC8;
    case 433u: goto L_001FBDD0;
    case 434u: goto L_001FBDD8;
    case 435u: goto L_001FBE60;
    case 436u: goto L_001FBE70;
    case 437u: goto L_001FBE80;
    case 438u: goto L_001FBEBC;
    case 439u: goto L_001FBECC;
    case 440u: goto L_001FBEDC;
    case 441u: goto L_001FBEE8;
    case 442u: goto L_001FBEF4;
    case 443u: goto L_001FBF04;
    case 444u: goto L_001FBF0C;
    case 445u: goto L_001FBF1C;
    case 446u: goto L_001FBF24;
    case 447u: goto L_001FBF8C;
    case 448u: goto L_001FBFB0;
    case 449u: goto L_001FBFB8;
    case 450u: goto L_001FBFD0;
    default: bad_entry(c, 0x001F8000u); return;
    }
L_001F8000:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F8048; } }
    c.f[0] = ld32((c.r[18].w[0] + 8252u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x459A0000u);
    c.r[4].d[0] = c.r[2].d[0] | 47104ull;
    c.f[1] = c.r[4].w[0];
    set32(c.r[2], ld32((c.r[19].w[0] + 80u)));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_001F8050; } }
    c.budget -= 1;
L_001F8048:
    set32(c.r[2], 0u + 16384u);
    st32((c.r[19].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 2;
L_001F8050:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 6u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8074u); set32(c.r[5], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0031(c, 443u, depth + 1u); else { c.pc = 0x001C56E0u; return; } if (c.pc != 0x001F8074u) [[unlikely]] return; }
L_001F8074:
    set32(c.r[3], 0u + 1u);
    st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001F8080:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F80E0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_001F80A8; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F8128; } }
L_001F80A8:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001F8128; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F8128; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F80D4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x001F80D4u) [[unlikely]] return; }
L_001F80D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F8128; } }
    c.budget -= 1;
L_001F80E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F80F8; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F80F8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 153u, depth + 1u); else { c.pc = 0x0023A1C0u; return; } if (c.pc != 0x001F80F8u) [[unlikely]] return; }
L_001F80F8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F8128; } }
    c.budget -= 1;
L_001F8108:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001F8120; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8120u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 153u, depth + 1u); else { c.pc = 0x0023A1C0u; return; } if (c.pc != 0x001F8120u) [[unlikely]] return; }
L_001F8120:
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001F8128:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001F8150:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001F8160:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_001F8170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 306u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8198u); set32(c.r[5], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0031(c, 443u, depth + 1u); else { c.pc = 0x001C56E0u; return; } if (c.pc != 0x001F8198u) [[unlikely]] return; }
L_001F8198:
    set32(c.r[5], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F81A4u); set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  if (depth < kMaxDepth) unit_0068(c, 89u, depth + 1u); else { c.pc = 0x002A25C0u; return; } if (c.pc != 0x001F81A4u) [[unlikely]] return; }
L_001F81A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F81C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F81E8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x001F81E8u) [[unlikely]] return; }
L_001F81E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_001F8218; } }
    set32(c.r[3], 0u + 18u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 10u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[3], c.r[3].w[0] - 32208u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[17].w[0]);
    c.budget -= 10;
L_001F8218:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F8230:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 109u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 77u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[5], ld32((c.r[16].w[0] + 592u)));  if (t) { goto L_001F82B8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 21u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F82B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F82B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8288u); c.r[4].d[0] = ld8((c.r[5].w[0] + 8658u));  if (depth < kMaxDepth) unit_004E(c, 88u, depth + 1u); else { c.pc = 0x00238F50u; return; } if (c.pc != 0x001F8288u) [[unlikely]] return; }
L_001F8288:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[5], 0u + 2u);
    if (c.r[2].d[0] == 0) c.r[5].d[0] = 0ull;
    set32(c.r[2], c.r[28].w[0] - 32524u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F82ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x001F82ACu) [[unlikely]] return; }
L_001F82AC:
    c.budget -= 1;
L_001F82B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F82B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 5u, depth + 1u); else { c.pc = 0x002AC040u; return; } if (c.pc != 0x001F82B8u) [[unlikely]] return; }
L_001F82B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F82D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F82F0u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x001F82F0u) [[unlikely]] return; }
L_001F82F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F8338; } }
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], 0u + 18u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], 0u + 11u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] - 31920u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[2], c.r[2].w[0] - 31376u);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 168u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8338u); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x001F8338u) [[unlikely]] return; }
L_001F8338:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F8350:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 29920u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 304u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F8000u < 16384u) { entry = entries_003E[(t - 0x001F8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F8380:
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_001F83A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F8400; } }
    c.budget -= 1;
L_001F83A0:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 23u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F8400; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[5].d[0] = ld8((c.r[5].w[0] + 23u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001F83E8; } }
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F8400; } }
    c.budget -= 1;
L_001F83E8:
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 48u), 0u);
    set32(c.r[3], 0u + 8192u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 6;
L_001F8400:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F8410:
    set32(c.r[8], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[7], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_001F8430; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_001F8518; } }
    c.budget -= 1;
L_001F8430:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F84B8; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 23u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F8458; } }
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001F8518; } }
L_001F8458:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_001F8488; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 18u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_001F8490; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_001F8490; } }
L_001F8488:
    set32(c.r[3], 0u + 4096u);
    st32((c.r[4].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 2;
L_001F8490:
    c.r[6].d[0] = ld8((c.r[5].w[0] + 23u));
    set32(c.r[3], 0u + 129u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_001F8508; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 23u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001F8508; } }
L_001F84B8:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 23u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F8518; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_001F84E8; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 18u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[7].d[0]; set32(c.r[3], c.r[6].w[0] + 1u);  if (t) { goto L_001F8508; } }
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 80u), 0u);  if (t) { goto L_001F8508; } }
L_001F84E8:
    st32((c.r[4].w[0] + 52u), 0u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 18u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F8508; } }
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001F8518; } }
L_001F8508:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001F8518; } }
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001F8518:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F8520:
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 750u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F8540; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F8558; } }
L_001F8540:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001F8558; } }
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001F8558:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F8560:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_001F8570:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] + 29904u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F859Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x001F859Cu) [[unlikely]] return; }
L_001F859C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F85A4u); set32(c.r[4], c.r[16].w[0] + 3264u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001F85A4u) [[unlikely]] return; }
L_001F85A4:
    c.f[13] = ld32((c.r[29].w[0] + 52u));
    c.f[14] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F85B4u); c.f[12] = ld32((c.r[29].w[0] + 48u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001F85B4u) [[unlikely]] return; }
L_001F85B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F85BCu); set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001F85BCu) [[unlikely]] return; }
L_001F85BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F85C4u); set32(c.r[4], ld32((c.r[17].w[0] + 188u)));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x001F85C4u) [[unlikely]] return; }
L_001F85C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F85E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8610u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x001F8610u) [[unlikely]] return; }
L_001F8610:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F8678; } }
    set32(c.r[2], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 18u);
    set32(c.r[2], 0u + 12u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[17].w[0] << 6);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[2], c.r[2].w[0] + 29936u);
    set32(c.r[5], c.r[5].w[0] - 31088u);
    set32(c.r[3], c.r[2].w[0] + c.r[6].w[0]);
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 29940u);
    st32((c.r[4].w[0] + 24u), c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8674u); set32(c.r[5], ld32((c.r[18].w[0] + 176u)));  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x001F8674u) [[unlikely]] return; }
L_001F8674:
    c.budget -= 1;
L_001F8678:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F8690:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 30128u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F8000u < 16384u) { entry = entries_003E[(t - 0x001F8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F86B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 30144u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F8000u < 16384u) { entry = entries_003E[(t - 0x001F8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F86D0:
    set32(c.r[7], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001F86F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F8768; } }
    c.budget -= 1;
L_001F86F0:
    c.r[3].d[0] = ld8((c.r[7].w[0] + 964u));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_001F8768; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] + 29944u);
    c.f[1] = ld32((c.r[4].w[0] + 112u));
    set32(c.r[5], c.r[5].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F8758; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[3], c.r[3].w[0] - 29696u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 112u), 0u);
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 769u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F8768; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_001F8768; } }
L_001F8758:
    c.f[0] = ld32((c.r[7].w[0] + 8252u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.budget -= 4;
L_001F8768:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F8770:
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001F8790; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F87B8; } }
    c.budget -= 1;
L_001F8790:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 964u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F87A8; } }
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001F87B8; } }
L_001F87A8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001F87B8; } }
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001F87B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F87C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 30160u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F8000u < 16384u) { entry = entries_003E[(t - 0x001F8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F87E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001F8808; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F8840; } }
    c.budget -= 1;
L_001F8808:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 767u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001F8840; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 964u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F8840; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[2], c.r[2].w[0] - 29536u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8840u); st32((c.r[4].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8850u; return; } if (c.pc != 0x001F8840u) [[unlikely]] return; }
L_001F8840:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F8850:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F8880; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_001F8908; } }
    c.budget -= 1;
L_001F8880:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 767u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_001F8908; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001F88E0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 964u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_001F88C8; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F88BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 34u, depth + 1u); else { c.pc = 0x001F85E0u; return; } if (c.pc != 0x001F88BCu) [[unlikely]] return; }
L_001F88BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F8908; } }
    c.budget -= 1;
L_001F88C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F8908; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_001F8908; } }
    c.budget -= 1;
L_001F88E0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 964u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001F8908; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F88F4u); st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004E(c, 167u, depth + 1u); else { c.pc = 0x0023A3C0u; return; } if (c.pc != 0x001F88F4u) [[unlikely]] return; }
L_001F88F4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001F8908; } }
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001F8908:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F8920:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 30176u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F8000u < 16384u) { entry = entries_003E[(t - 0x001F8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F8940:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 160u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8984u); st32((c.r[4].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001F8984u) [[unlikely]] return; }
L_001F8984:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F898Cu); st32((c.r[17].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001F898Cu) [[unlikely]] return; }
L_001F898C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8994u); st32((c.r[17].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001F8994u) [[unlikely]] return; }
L_001F8994:
    st32((c.r[17].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 2624u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[2], c.r[2].w[0] - 29440u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F89ACu); st32((c.r[17].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001F89ACu) [[unlikely]] return; }
L_001F89AC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 29936u);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F89C8u); set32(c.r[4], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x001F89C8u) [[unlikely]] return; }
L_001F89C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F89D0u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x001F89D0u) [[unlikely]] return; }
L_001F89D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F89D8u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001F89D8u) [[unlikely]] return; }
L_001F89D8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F8A00; } }
    c.f[12] = ld32((c.r[28].w[0] - 32520u));
    set32(c.r[5], c.r[16].w[0] + 8608u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F89F8u); set32(c.r[4], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001F89F8u) [[unlikely]] return; }
L_001F89F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F8A10; } }
L_001F8A00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBCCC0000u);
    st32((c.r[17].w[0] + 52u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 4;
L_001F8A10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8A18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 58u, depth + 1u); else { c.pc = 0x001F8A30u; return; } if (c.pc != 0x001F8A18u) [[unlikely]] return; }
L_001F8A18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F8A30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F8A68; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F8B68; } }
L_001F8A68:
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 52u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 23;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001F8AD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8ACCu); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x001F8ACCu) [[unlikely]] return; }
L_001F8ACC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F8B28; } }
    c.budget -= 1;
L_001F8AD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8AE0u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x001F8AE0u) [[unlikely]] return; }
L_001F8AE0:
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F8B28; } }
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.budget -= 9;
L_001F8B28:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F8B50; } }
    c.f[1] = ld32((c.r[16].w[0] + 160u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 160u), c.f[0]);
    c.budget -= 6;
L_001F8B50:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 769u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001F8B68; } }
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001F8B68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F8B80:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001F8BD0; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 750u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F8BB0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F8BE0; } }
L_001F8BB0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001F8BE0; } }
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001F8BE0; } }
    c.budget -= 1;
L_001F8BD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001F8BE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F8BF0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_001F8C00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 29936u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 2368u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8C3Cu); set32(c.r[18], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001F8C3Cu) [[unlikely]] return; }
L_001F8C3C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 29936u);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8C58u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x001F8C58u) [[unlikely]] return; }
L_001F8C58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8C60u); set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001F8C60u) [[unlikely]] return; }
L_001F8C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8C68u); set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001F8C68u) [[unlikely]] return; }
L_001F8C68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8C70u); set32(c.r[4], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001F8C70u) [[unlikely]] return; }
L_001F8C70:
    set32(c.r[5], ld32((c.r[17].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8C7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 89u, depth + 1u); else { c.pc = 0x002A25C0u; return; } if (c.pc != 0x001F8C7Cu) [[unlikely]] return; }
L_001F8C7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F8CA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8CC0u); set32(c.r[4], c.r[16].w[0] + 2624u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001F8CC0u) [[unlikely]] return; }
L_001F8CC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 29936u);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8CDCu); set32(c.r[4], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x001F8CDCu) [[unlikely]] return; }
L_001F8CDC:
    set32(c.r[5], ld32((c.r[17].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8CE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 89u, depth + 1u); else { c.pc = 0x002A25C0u; return; } if (c.pc != 0x001F8CE8u) [[unlikely]] return; }
L_001F8CE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F8D00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8D18u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001F8D18u) [[unlikely]] return; }
L_001F8D18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8D20u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001F8D20u) [[unlikely]] return; }
L_001F8D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8D28u); set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001F8D28u) [[unlikely]] return; }
L_001F8D28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8D30u); set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001F8D30u) [[unlikely]] return; }
L_001F8D30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8D38u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x001F8D38u) [[unlikely]] return; }
L_001F8D38:
    set32(c.r[5], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8D44u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0068(c, 89u, depth + 1u); else { c.pc = 0x002A25C0u; return; } if (c.pc != 0x001F8D44u) [[unlikely]] return; }
L_001F8D44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F8D60:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 1u);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8D9Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x001F8D9Cu) [[unlikely]] return; }
L_001F8D9C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001F8E18; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[6], 0u + 17u);
    set32(c.r[3], c.r[3].w[0] - 29120u);
    set32(c.r[2], c.r[2].w[0] - 27408u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st32((c.r[16].w[0] + 24u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8DF4u); st32((c.r[16].w[0] + 636u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x001F8DF4u) [[unlikely]] return; }
L_001F8DF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[18].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + 30192u);
    set32(c.r[5], ld32((c.r[20].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8E18u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x001F8E18u) [[unlikely]] return; }
L_001F8E18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001F8E40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 32176u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F8000u < 16384u) { entry = entries_003E[(t - 0x001F8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F8E60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], c.r[6].w[0] + 30192u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], 0u - 1u);
    set32(c.r[7], c.r[7].w[0] << 5);
    set32(c.r[16], c.r[6].w[0] + c.r[7].w[0]);
    c.f[3] = ld32((c.r[16].w[0] + 16u));
    c.f[2] = ld32((c.r[16].w[0] + 20u));
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    st32((c.r[4].w[0] + 32u), c.f[3]);
    st32((c.r[4].w[0] + 36u), c.f[2]);
    st32((c.r[4].w[0] + 40u), c.f[1]);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[4].w[0] + 80u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.budget -= 30;
    { const bool t = c.r[4].d[0] != c.r[5].d[0]; set32(c.r[3], c.r[17].w[0] + 304u);  if (t) { goto L_001F8EE8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], c.r[4].w[0] + 192u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { goto L_001F8F00; } }
L_001F8EE8:
    set32(c.r[5], c.r[4].w[0] << 6);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1984u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_001F8F00:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 9u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[4], 0u + 20481u);  if (t) { goto L_001F8F18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 562u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_001F8F20; } }
    c.budget -= 1;
L_001F8F18:
    set32(c.r[4], 0u + 16385u);
    st16((c.r[17].w[0] + 562u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 2;
L_001F8F20:
    set32(c.r[8], 0u + 1u);
    st16((c.r[17].w[0] + 566u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st8((c.r[17].w[0] + 516u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[6], c.r[6].w[0] + 32112u);
    set32(c.r[5], c.r[5].w[0] + 32144u);
    set32(c.r[4], 0u + 3u);
    st32((c.r[17].w[0] + 160u), c.f[0]);
    st32((c.r[17].w[0] + 112u), 0u);
    st32((c.r[17].w[0] + 116u), 0u);
    st32((c.r[17].w[0] + 120u), 0u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.f[1] = ld32((c.r[17].w[0] + 160u));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.f[1] = ld32((c.r[17].w[0] + 160u));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 31;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_001F8FE8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_001F8FD8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[8].d[0];  if (t) { goto L_001F8FC8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001F8FC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F8FF0; } }
    c.budget -= 1;
L_001F8FC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 16u), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { goto L_001F8FF0; } }
L_001F8FC8:
    set32(c.r[4], 0u + 16u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 16u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001F8FF0; } }
    c.budget -= 1;
L_001F8FD8:
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 16u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001F8FF0; } }
    c.budget -= 1;
L_001F8FE8:
    set32(c.r[4], 0u + 64u);
    st8((c.r[3].w[0] + 16u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_001F8FF0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_001F9010; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F900Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 276u, depth + 1u); else { c.pc = 0x00167680u; return; } if (c.pc != 0x001F900Cu) [[unlikely]] return; }
L_001F900C:
    c.budget -= 1;
L_001F9010:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001F9050; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9028u);  if (depth < kMaxDepth) unit_001C(c, 124u, depth + 1u); else { c.pc = 0x00171AF0u; return; } if (c.pc != 0x001F9028u) [[unlikely]] return; }
L_001F9028:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[3], 0u + 59u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001F9050; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9040u); set32(c.r[5], 0u + 21u);  if (depth < kMaxDepth) unit_001C(c, 124u, depth + 1u); else { c.pc = 0x00171AF0u; return; } if (c.pc != 0x001F9040u) [[unlikely]] return; }
L_001F9040:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F904Cu); set32(c.r[5], 0u + 22u);  if (depth < kMaxDepth) unit_001C(c, 124u, depth + 1u); else { c.pc = 0x00171AF0u; return; } if (c.pc != 0x001F904Cu) [[unlikely]] return; }
L_001F904C:
    c.budget -= 1;
L_001F9050:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F9068; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9068u); c.r[4].d[0] = ld8((c.r[2].w[0] + 8656u));  if (depth < kMaxDepth) unit_004B(c, 41u, depth + 1u); else { c.pc = 0x0022C850u; return; } if (c.pc != 0x001F9068u) [[unlikely]] return; }
L_001F9068:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F9080:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F90D0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 750u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F90D0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F9128; } }
    c.budget -= 1;
L_001F90D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 32192u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F90F4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F90F4u) [[unlikely]] return; }
L_001F90F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F90FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 110u, depth + 1u); else { c.pc = 0x001F9490u; return; } if (c.pc != 0x001F90FCu) [[unlikely]] return; }
L_001F90FC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F9128; } }
    c.f[1] = ld32((c.r[17].w[0] + 116u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_001F9128; } }
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001F9128:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F9140:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 838u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 320u)));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[7], c.r[4].w[0] + 304u);  if (t) { goto L_001F9180; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 516u), static_cast<std::uint8_t>(0u));
    st16((c.r[7].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F917Cu); st16((c.r[7].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003E(c, 97u, depth + 1u); else { c.pc = 0x001F9190u; return; } if (c.pc != 0x001F917Cu) [[unlikely]] return; }
L_001F917C:
    c.budget -= 1;
L_001F9180:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F9190:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 838u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 320u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[4].w[0] + 304u);  if (t) { goto L_001F91B8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001F91D8; } }
L_001F91B8:
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F91CCu); st8((c.r[4].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003E(c, 101u, depth + 1u); else { c.pc = 0x001F9270u; return; } if (c.pc != 0x001F91CCu) [[unlikely]] return; }
L_001F91CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F9258; } }
    c.budget -= 1;
L_001F91D8:
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 120u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 120u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 160u));
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F9230; } }
    st32((c.r[4].w[0] + 120u), c.f[1]);
    set32(c.r[2], 0u + 3u);
    st32((c.r[4].w[0] + 116u), c.f[1]);
    st32((c.r[4].w[0] + 112u), c.f[1]);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_001F9230:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F9250; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9244u);  if (depth < kMaxDepth) unit_003E(c, 105u, depth + 1u); else { c.pc = 0x001F9360u; return; } if (c.pc != 0x001F9244u) [[unlikely]] return; }
L_001F9244:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F9258; } }
    c.budget -= 1;
L_001F9250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9258u);  if (depth < kMaxDepth) unit_003E(c, 102u, depth + 1u); else { c.pc = 0x001F92D0u; return; } if (c.pc != 0x001F9258u) [[unlikely]] return; }
L_001F9258:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F9270:
    c.f[2] = ld32((c.r[4].w[0] + 316u));
    c.f[1] = ld32((c.r[4].w[0] + 112u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 112u), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 316u));
    c.f[1] = ld32((c.r[4].w[0] + 116u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 116u), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 316u));
    c.f[1] = ld32((c.r[4].w[0] + 120u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 120u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 116u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F92C8; } }
    st32((c.r[4].w[0] + 112u), c.f[0]);
    st32((c.r[4].w[0] + 116u), c.f[0]);
    st32((c.r[4].w[0] + 120u), c.f[0]);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_001F92C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F92D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 838u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 320u)));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[7], c.r[4].w[0] + 304u);  if (t) { goto L_001F92F8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001F9318; } }
L_001F92F8:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F930Cu); st8((c.r[4].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_003E(c, 101u, depth + 1u); else { c.pc = 0x001F9270u; return; } if (c.pc != 0x001F930Cu) [[unlikely]] return; }
L_001F930C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F9350; } }
    c.budget -= 1;
L_001F9318:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8256u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_001F9338; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8258u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 6u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_001F9350; } }
L_001F9338:
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8256u)));
    st16((c.r[7].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8258u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9350u); st16((c.r[7].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003E(c, 105u, depth + 1u); else { c.pc = 0x001F9360u; return; } if (c.pc != 0x001F9350u) [[unlikely]] return; }
L_001F9350:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F9360:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8256u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_001F93D0; } }
    set32(c.r[7], ld32((c.r[4].w[0] + 636u)));
    set32(c.r[3], 0u - 1u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8258u)));
    set32(c.r[7], c.r[7].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[8], c.r[4].w[0] + 304u);  if (t) { goto L_001F93D0; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8256u)));
    st16((c.r[8].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8258u)));
    st16((c.r[8].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[5].w[0] + 504u)));
    st32((c.r[4].w[0] + 504u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 508u)));
    st32((c.r[4].w[0] + 508u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    st16((c.r[4].w[0] + 560u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F93D0u); c.r[6].d[0] = c.r[2].d[0] & 127ull;  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x001F93D0u) [[unlikely]] return; }
L_001F93D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F93E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[2] = ld32((c.r[4].w[0] + 316u));
    c.f[1] = ld32((c.r[4].w[0] + 112u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 112u), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 316u));
    c.f[1] = ld32((c.r[4].w[0] + 116u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 116u), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 316u));
    c.f[1] = ld32((c.r[4].w[0] + 120u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 120u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 116u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 20;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F9450; } }
    st32((c.r[16].w[0] + 112u), c.f[0]);
    st32((c.r[16].w[0] + 116u), c.f[0]);
    st32((c.r[16].w[0] + 120u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F9470; } }
    c.budget -= 1;
L_001F9450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9458u);  if (depth < kMaxDepth) unit_003E(c, 110u, depth + 1u); else { c.pc = 0x001F9490u; return; } if (c.pc != 0x001F9458u) [[unlikely]] return; }
L_001F9458:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 769u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001F9470; } }
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001F9470:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F9480:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_001F9490:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F94A8u); set32(c.r[4], ld32((c.r[4].w[0] + 304u)));  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001F94A8u) [[unlikely]] return; }
L_001F94A8:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F94B8u); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001F94B8u) [[unlikely]] return; }
L_001F94B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F94C0u); set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001F94C0u) [[unlikely]] return; }
L_001F94C0:
    c.f[13] = ld32((c.r[16].w[0] + 116u));
    c.f[14] = ld32((c.r[16].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F94D0u); c.f[12] = ld32((c.r[16].w[0] + 112u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001F94D0u) [[unlikely]] return; }
L_001F94D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F94D8u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001F94D8u) [[unlikely]] return; }
L_001F94D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F94F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9504u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 110u, depth + 1u); else { c.pc = 0x001F9490u; return; } if (c.pc != 0x001F9504u) [[unlikely]] return; }
L_001F9504:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F950Cu); set32(c.r[4], ld32((c.r[16].w[0] + 188u)));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x001F950Cu) [[unlikely]] return; }
L_001F950C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F9520:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9548u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x001F9548u) [[unlikely]] return; }
L_001F9548:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F9598; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[7], 0u + 17u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 26832u);
    set32(c.r[2], c.r[2].w[0] - 24128u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[5].w[0] + 24u), c.r[17].w[0]);
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9594u); st32((c.r[5].w[0] + 28u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x001F9594u) [[unlikely]] return; }
L_001F9594:
    c.budget -= 1;
L_001F9598:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F95B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], c.r[5].w[0] << 1);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 264u)));
    set32(c.r[6], c.r[5].w[0] << 5);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[5], ld32((c.r[7].w[0] + 636u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld16((c.r[5].w[0] + 4u));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = c.r[6].d[0] & 15ull;  if (t) { goto L_001F9690; } }
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F9680; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006A0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 16752u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001F8000u < 16384u) { entry = entries_003E[(t - 0x001F8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F9610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9618u);  if (depth < kMaxDepth) unit_003E(c, 119u, depth + 1u); else { c.pc = 0x001F9520u; return; } if (c.pc != 0x001F9618u) [[unlikely]] return; }
L_001F9618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F9718; } }
L_001F9620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9628u);  if (depth < kMaxDepth) unit_003E(c, 249u, depth + 1u); else { c.pc = 0x001FA600u; return; } if (c.pc != 0x001F9628u) [[unlikely]] return; }
L_001F9628:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F9718; } }
L_001F9630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9638u);  if (depth < kMaxDepth) unit_003E(c, 371u, depth + 1u); else { c.pc = 0x001FB660u; return; } if (c.pc != 0x001F9638u) [[unlikely]] return; }
L_001F9638:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F9718; } }
L_001F9640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9648u);  if (depth < kMaxDepth) unit_003F(c, 79u, depth + 1u); else { c.pc = 0x001FCCD0u; return; } if (c.pc != 0x001F9648u) [[unlikely]] return; }
L_001F9648:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F9718; } }
L_001F9650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9658u);  if (depth < kMaxDepth) unit_0043(c, 58u, depth + 1u); else { c.pc = 0x0020C870u; return; } if (c.pc != 0x001F9658u) [[unlikely]] return; }
L_001F9658:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F9718; } }
L_001F9660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9668u);  if (depth < kMaxDepth) unit_0042(c, 31u, depth + 1u); else { c.pc = 0x002084A0u; return; } if (c.pc != 0x001F9668u) [[unlikely]] return; }
L_001F9668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F9718; } }
L_001F9670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9678u);  if (depth < kMaxDepth) unit_00A9(c, 140u, depth + 1u); else { c.pc = 0x003A5C20u; return; } if (c.pc != 0x001F9678u) [[unlikely]] return; }
L_001F9678:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F9718; } }
L_001F9680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9688u);  if (depth < kMaxDepth) unit_003E(c, 245u, depth + 1u); else { c.pc = 0x001FA550u; return; } if (c.pc != 0x001F9688u) [[unlikely]] return; }
L_001F9688:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F9718; } }
L_001F9690:
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 6u);  if (t) { goto L_001F9700; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_001F96F0; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_001F96E0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_001F96D0; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_001F9718; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F9710; } }
    c.budget -= 1;
L_001F96D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F96D8u);  if (depth < kMaxDepth) unit_003F(c, 79u, depth + 1u); else { c.pc = 0x001FCCD0u; return; } if (c.pc != 0x001F96D8u) [[unlikely]] return; }
L_001F96D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F9718; } }
L_001F96E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F96E8u);  if (depth < kMaxDepth) unit_0043(c, 58u, depth + 1u); else { c.pc = 0x0020C870u; return; } if (c.pc != 0x001F96E8u) [[unlikely]] return; }
L_001F96E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F9718; } }
L_001F96F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F96F8u);  if (depth < kMaxDepth) unit_0042(c, 31u, depth + 1u); else { c.pc = 0x002084A0u; return; } if (c.pc != 0x001F96F8u) [[unlikely]] return; }
L_001F96F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F9718; } }
L_001F9700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9708u);  if (depth < kMaxDepth) unit_00A9(c, 140u, depth + 1u); else { c.pc = 0x003A5C20u; return; } if (c.pc != 0x001F9708u) [[unlikely]] return; }
L_001F9708:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F9718; } }
L_001F9710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9718u);  if (depth < kMaxDepth) unit_0040(c, 162u, depth + 1u); else { c.pc = 0x00201340u; return; } if (c.pc != 0x001F9718u) [[unlikely]] return; }
L_001F9718:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F9730:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 32288u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F8000u < 16384u) { entry = entries_003E[(t - 0x001F8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F9750:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[2], 0u + 19970u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[0] = ld32((c.r[18].w[0] + 28u));
    st32((c.r[4].w[0] + 112u), c.f[0]);
    st32((c.r[4].w[0] + 116u), 0u);
    st32((c.r[4].w[0] + 120u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 160u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 40u)));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    st32((c.r[4].w[0] + 104u), c.f[0]);
    st32((c.r[4].w[0] + 64u), 0u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 515u));
    st8((c.r[4].w[0] + 432u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 562u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 566u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = ld16((c.r[18].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 32;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], c.r[20].w[0] + 304u);  if (t) { goto L_001F97E0; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 562u));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st16((c.r[20].w[0] + 562u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001F97E0:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F9810; } }
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[20].w[0] + 108u), c.f[0]);
    st8((c.r[20].w[0] + 512u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[20].w[0] + 504u), 0u);
    st32((c.r[20].w[0] + 508u), 0u);
    st16((c.r[20].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 8;
L_001F9810:
    st16((c.r[20].w[0] + 560u), static_cast<std::uint16_t>(0u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 2u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001F9890; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 270u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = c.r[5].d[0] & 127ull;  if (t) { goto L_001F9848; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F983Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x001F983Cu) [[unlikely]] return; }
L_001F983C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F9890; } }
    c.budget -= 1;
L_001F9848:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001F9860; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F9878; } }
    c.budget -= 1;
L_001F9860:
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9870u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 150u, depth + 1u); else { c.pc = 0x002AA460u; return; } if (c.pc != 0x001F9870u) [[unlikely]] return; }
L_001F9870:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F9890; } }
L_001F9878:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001F9890; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F988Cu);  if (depth < kMaxDepth) unit_006A(c, 150u, depth + 1u); else { c.pc = 0x002AA460u; return; } if (c.pc != 0x001F988Cu) [[unlikely]] return; }
L_001F988C:
    c.budget -= 1;
L_001F9890:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[2].w[0] << 6);  if (t) { goto L_001F98B8; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F98B0u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001F98B0u) [[unlikely]] return; }
L_001F98B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F98C8; } }
L_001F98B8:
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F98C4u); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001F98C4u) [[unlikely]] return; }
L_001F98C4:
    c.budget -= 1;
L_001F98C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F98D0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001F98D0u) [[unlikely]] return; }
L_001F98D0:
    set32(c.r[4], c.r[18].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F98DCu); set32(c.r[5], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001F98DCu) [[unlikely]] return; }
L_001F98DC:
    c.f[3] = ld32((c.r[20].w[0] + 32u));
    c.f[2] = ld32((c.r[20].w[0] + 36u));
    c.f[1] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = ld32((c.r[20].w[0] + 44u));
    st32((c.r[20].w[0] + 128u), c.f[3]);
    st32((c.r[20].w[0] + 132u), c.f[2]);
    st32((c.r[20].w[0] + 136u), c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9900u); st32((c.r[20].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001F9900u) [[unlikely]] return; }
L_001F9900:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9908u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x001F9908u) [[unlikely]] return; }
L_001F9908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9910u); set32(c.r[4], c.r[19].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001F9910u) [[unlikely]] return; }
L_001F9910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9918u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 38u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001F9918u) [[unlikely]] return; }
L_001F9918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9920u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 36u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001F9920u) [[unlikely]] return; }
L_001F9920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9928u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 34u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001F9928u) [[unlikely]] return; }
L_001F9928:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F9A00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9940u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001F9940u) [[unlikely]] return; }
L_001F9940:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 6u)));
    c.r[5].d[0] = c.r[2].d[0] & 7ull;
    set32(c.r[2], c.r[5].w[0] << 1);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 32256u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 32240u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[16].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9970u); set32(c.r[17], c.r[4].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001F9970u) [[unlikely]] return; }
L_001F9970:
    c.r[2].d[0] = c.r[16].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9984u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001F9984u) [[unlikely]] return; }
L_001F9984:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[16].w[0] - c.r[3].w[0]);
    c.r[16].d[0] = c.r[3].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F99ACu); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001F99ACu) [[unlikely]] return; }
L_001F99AC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 6u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 32240u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[16].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F99C8u); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001F99C8u) [[unlikely]] return; }
L_001F99C8:
    c.r[2].d[0] = c.r[16].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F99DCu); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001F99DCu) [[unlikely]] return; }
L_001F99DC:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[16].w[0] - c.r[3].w[0]);
    c.r[16].d[0] = c.r[3].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9A00u); mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]); c.r[4].d[0] = c.lo.d[0];  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001F9A00u) [[unlikely]] return; }
L_001F9A00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[4], c.r[4].w[0] + 32224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9A10u); set32(c.r[5], c.r[20].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001F9A10u) [[unlikely]] return; }
L_001F9A10:
    c.f[12] = ld32((c.r[20].w[0] + 104u));
    set32(c.r[4], c.r[20].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9A20u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x001F9A20u) [[unlikely]] return; }
L_001F9A20:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F9A78; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[2].w[0] + 64u);  if (t) { goto L_001F9A78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9A40u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001F9A40u) [[unlikely]] return; }
L_001F9A40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9A48u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001F9A48u) [[unlikely]] return; }
L_001F9A48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9A50u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x001F9A50u) [[unlikely]] return; }
L_001F9A50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9A58u); set32(c.r[4], c.r[19].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x001F9A58u) [[unlikely]] return; }
L_001F9A58:
    set32(c.r[4], c.r[18].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9A64u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001F9A64u) [[unlikely]] return; }
L_001F9A64:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 32u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9A74u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_003B(c, 238u, depth + 1u); else { c.pc = 0x001EE9F0u; return; } if (c.pc != 0x001F9A74u) [[unlikely]] return; }
L_001F9A74:
    c.budget -= 1;
L_001F9A78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9A80u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001F9A80u) [[unlikely]] return; }
L_001F9A80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[5], c.r[20].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9A90u); set32(c.r[4], c.r[4].w[0] + 32224u);  if (depth < kMaxDepth) unit_0009(c, 197u, depth + 1u); else { c.pc = 0x00126FE0u; return; } if (c.pc != 0x001F9A90u) [[unlikely]] return; }
L_001F9A90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9A98u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001F9A98u) [[unlikely]] return; }
L_001F9A98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9AA0u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001F9AA0u) [[unlikely]] return; }
L_001F9AA0:
    c.f[13] = ld32((c.r[20].w[0] + 36u));
    c.f[14] = ld32((c.r[20].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9AB0u); c.f[12] = ld32((c.r[20].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001F9AB0u) [[unlikely]] return; }
L_001F9AB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9AB8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x001F9AB8u) [[unlikely]] return; }
L_001F9AB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9AC0u); set32(c.r[4], c.r[20].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001F9AC0u) [[unlikely]] return; }
L_001F9AC0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[20].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001F9AF0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[4].w[0] + 28u)));
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    set32(c.r[17], ld32((c.r[4].w[0] + 24u)));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    st32((c.r[4].w[0] + 144u), c.f[3]);
    st32((c.r[4].w[0] + 148u), c.f[2]);
    st32((c.r[4].w[0] + 152u), c.f[1]);
    st32((c.r[4].w[0] + 156u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 21;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[19], c.r[20].w[0] + 304u);  if (t) { goto L_001F9B58; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F9B58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9B58u);  if (depth < kMaxDepth) unit_003E(c, 234u, depth + 1u); else { c.pc = 0x001FA320u; return; } if (c.pc != 0x001F9B58u) [[unlikely]] return; }
L_001F9B58:
    set32(c.r[4], c.r[20].w[0] + 48u);
    c.f[12] = ld32((c.r[20].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9B68u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x001F9B68u) [[unlikely]] return; }
L_001F9B68:
    c.f[1] = ld32((c.r[20].w[0] + 48u));
    c.f[0] = ld32((c.r[20].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 52u));
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 56u));
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 40u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 104u));
    c.f[0] = ld32((c.r[20].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 64u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 12u));
    c.f[0] = ld32((c.r[20].w[0] + 104u));
    c.f[2] = ld32((c.r[18].w[0] + 16u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 23;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[20].w[0] + 104u), c.f[0]);  if (t) { goto L_001F9BC8; } }
    st32((c.r[20].w[0] + 104u), c.f[2]);
    c.budget -= 1;
L_001F9BC8:
    c.f[0] = ld32((c.r[18].w[0] + 24u));
    c.f[1] = ld32((c.r[20].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F9BE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_001F9BEC; } }
L_001F9BE4:
    c.f[1] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.budget -= 2;
L_001F9BEC:
    c.f[0] = c.r[2].w[0];
    st32((c.r[20].w[0] + 72u), c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 116u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 164u)));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001F9C28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9C18u);  if (depth < kMaxDepth) unit_003E(c, 241u, depth + 1u); else { c.pc = 0x001FA410u; return; } if (c.pc != 0x001F9C18u) [[unlikely]] return; }
L_001F9C18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F9C28; } }
    st16((c.r[20].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_001F9C28:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[20].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9C38u); set32(c.r[6], c.r[20].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001F9C38u) [[unlikely]] return; }
L_001F9C38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9C40u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001F9C40u) [[unlikely]] return; }
L_001F9C40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9C48u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001F9C48u) [[unlikely]] return; }
L_001F9C48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9C58u); set32(c.r[4], c.r[4].w[0] + 32224u);  if (depth < kMaxDepth) unit_0009(c, 197u, depth + 1u); else { c.pc = 0x00126FE0u; return; } if (c.pc != 0x001F9C58u) [[unlikely]] return; }
L_001F9C58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9C60u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001F9C60u) [[unlikely]] return; }
L_001F9C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9C68u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001F9C68u) [[unlikely]] return; }
L_001F9C68:
    c.f[13] = ld32((c.r[20].w[0] + 36u));
    c.f[14] = ld32((c.r[20].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9C78u); c.f[12] = ld32((c.r[20].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001F9C78u) [[unlikely]] return; }
L_001F9C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9C80u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x001F9C80u) [[unlikely]] return; }
L_001F9C80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9C88u); set32(c.r[4], c.r[20].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001F9C88u) [[unlikely]] return; }
L_001F9C88:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 564u));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F9DB8; } }
    set32(c.r[16], ld32((c.r[20].w[0] + 580u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001F9DB8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[2], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F9CD0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], 0u + 36u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F9CD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9CCCu); set32(c.r[4], ld32((c.r[16].w[0] + 264u)));  if (depth < kMaxDepth) unit_00B1(c, 250u, depth + 1u); else { c.pc = 0x003C5FD0u; return; } if (c.pc != 0x001F9CCCu) [[unlikely]] return; }
L_001F9CCC:
    c.budget -= 1;
L_001F9CD0:
    st16((c.r[20].w[0] + 560u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 515u));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 515u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F9CF0; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 562u));
    c.r[2].d[0] = c.r[2].d[0] ^ 16ull;
    st16((c.r[20].w[0] + 562u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001F9CF0:
    set32(c.r[2], ld32((c.r[16].w[0] + 264u)));
    set32(c.r[4], c.r[20].w[0] + 32u);
    set32(c.r[5], c.r[20].w[0] + 640u);
    st32((c.r[20].w[0] + 264u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 270u)));
    st8((c.r[20].w[0] + 270u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 268u)));
    st8((c.r[20].w[0] + 268u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 269u)));
    st8((c.r[20].w[0] + 269u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 515u));
    st8((c.r[20].w[0] + 515u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[20].w[0] + 562u));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st16((c.r[20].w[0] + 562u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[20].w[0] + 64u), 0u);
    st32((c.r[20].w[0] + 116u), 0u);
    st32((c.r[20].w[0] + 504u), 0u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9D40u); st32((c.r[20].w[0] + 508u), 0u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001F9D40u) [[unlikely]] return; }
L_001F9D40:
    set32(c.r[4], c.r[20].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9D4Cu); set32(c.r[5], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001F9D4Cu) [[unlikely]] return; }
L_001F9D4C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[20].w[0] + 656u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9D5Cu); set32(c.r[6], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001F9D5Cu) [[unlikely]] return; }
L_001F9D5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], 0u + 3u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 112u), 0u);
    st32((c.r[29].w[0] + 116u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9D84u); st32((c.r[29].w[0] + 124u), 0u);  if (depth < kMaxDepth) unit_002E(c, 179u, depth + 1u); else { c.pc = 0x001BA240u; return; } if (c.pc != 0x001F9D84u) [[unlikely]] return; }
L_001F9D84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9D8Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001F9D8Cu) [[unlikely]] return; }
L_001F9D8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9D94u); set32(c.r[4], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x001F9D94u) [[unlikely]] return; }
L_001F9D94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9D9Cu); set32(c.r[4], c.r[20].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001F9D9Cu) [[unlikely]] return; }
L_001F9D9C:
    c.f[12] = ld32((c.r[20].w[0] + 104u));
    set32(c.r[4], c.r[20].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9DACu); set32(c.r[5], c.r[20].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001F9DACu) [[unlikely]] return; }
L_001F9DAC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F9F80; } }
L_001F9DB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9DC0u); set32(c.r[4], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x001F9DC0u) [[unlikely]] return; }
L_001F9DC0:
    c.r[3].d[0] = ld16((c.r[20].w[0] + 564u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F9E08; } }
    c.r[4].d[0] = ld16((c.r[20].w[0] + 560u));
    c.r[3].d[0] = c.r[4].d[0] & 166ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F9E08; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F9DF8; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 4u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F9E08; } }
    c.budget -= 1;
L_001F9DF8:
    c.f[2] = ld32((c.r[20].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F9ED8; } }
L_001F9E08:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[20].w[0] + 144u);
    set32(c.r[5], c.r[20].w[0] + 32u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[20].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[20].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9E30u); st8((c.r[20].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0012(c, 159u, depth + 1u); else { c.pc = 0x00149A80u; return; } if (c.pc != 0x001F9E30u) [[unlikely]] return; }
L_001F9E30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F9E88; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 515u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9E48u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_001A(c, 95u, depth + 1u); else { c.pc = 0x001696C0u; return; } if (c.pc != 0x001F9E48u) [[unlikely]] return; }
L_001F9E48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9E50u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001A(c, 61u, depth + 1u); else { c.pc = 0x00168A20u; return; } if (c.pc != 0x001F9E50u) [[unlikely]] return; }
L_001F9E50:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9E5Cu); set32(c.r[5], 0u + 130u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001F9E5Cu) [[unlikely]] return; }
L_001F9E5C:
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[20].w[0] + 32u), c.f[3]);
    st32((c.r[20].w[0] + 36u), c.f[2]);
    st32((c.r[20].w[0] + 40u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 44u), c.f[0]);  if (t) { goto L_001F9EA8; } }
    c.budget -= 1;
L_001F9E88:
    c.f[3] = ld32((c.r[20].w[0] + 144u));
    c.f[2] = ld32((c.r[20].w[0] + 148u));
    c.f[1] = ld32((c.r[20].w[0] + 152u));
    c.f[0] = ld32((c.r[20].w[0] + 156u));
    st32((c.r[20].w[0] + 32u), c.f[3]);
    st32((c.r[20].w[0] + 36u), c.f[2]);
    st32((c.r[20].w[0] + 40u), c.f[1]);
    st32((c.r[20].w[0] + 44u), c.f[0]);
    c.budget -= 8;
L_001F9EA8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[2] = ld32((c.r[20].w[0] + 104u));
    c.f[1] = ld32((c.r[20].w[0] + 72u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 72u), c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 116u), c.f[0]);  if (t) { goto L_001F9F78; } }
    c.budget -= 1;
L_001F9ED8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B00000u);
    c.f[3] = ld32((c.r[20].w[0] + 32u));
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44E70000u);  if (t) { goto L_001F9F60; } }
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F9F60; } }
    c.f[3] = ld32((c.r[20].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F9F60; } }
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x45030000u);  if (t) { goto L_001F9F60; } }
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F9F60; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 4u));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F9F78; } }
    c.f[1] = ld32((c.r[20].w[0] + 64u));
    c.f[0] = ld32((c.r[20].w[0] + 108u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F9F78; } }
L_001F9F60:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[20].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[20].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001F9F78:
    set32(c.r[3], 0u + 1u);
    st8((c.r[20].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001F9F80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001F9FA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 32304u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F8000u < 16384u) { entry = entries_003E[(t - 0x001F8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F9FC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 28u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 104u));
    set32(c.r[18], c.r[16].w[0] + 304u);
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9FF0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x001F9FF0u) [[unlikely]] return; }
L_001F9FF0:
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[2] = ld32((c.r[17].w[0] + 16u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 23;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 104u), c.f[0]);  if (t) { goto L_001FA050; } }
    st32((c.r[16].w[0] + 104u), c.f[2]);
    c.budget -= 1;
L_001FA050:
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001FA06C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_001FA074; } }
L_001FA06C:
    c.f[1] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.budget -= 2;
L_001FA074:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[16].w[0] + 32u);
    set32(c.r[6], c.r[16].w[0] + 128u);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA098u); st32((c.r[16].w[0] + 116u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001FA098u) [[unlikely]] return; }
L_001FA098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA0A0u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001FA0A0u) [[unlikely]] return; }
L_001FA0A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA0A8u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001FA0A8u) [[unlikely]] return; }
L_001FA0A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA0B8u); set32(c.r[4], c.r[4].w[0] + 32224u);  if (depth < kMaxDepth) unit_0009(c, 197u, depth + 1u); else { c.pc = 0x00126FE0u; return; } if (c.pc != 0x001FA0B8u) [[unlikely]] return; }
L_001FA0B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA0C0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FA0C0u) [[unlikely]] return; }
L_001FA0C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA0C8u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001FA0C8u) [[unlikely]] return; }
L_001FA0C8:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA0D8u); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001FA0D8u) [[unlikely]] return; }
L_001FA0D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA0E0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x001FA0E0u) [[unlikely]] return; }
L_001FA0E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA0E8u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FA0E8u) [[unlikely]] return; }
L_001FA0E8:
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 112u), c.f[0]);  if (t) { goto L_001FA130; } }
    c.f[1] = ld32((c.r[16].w[0] + 160u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 160u), c.f[1]);  if (t) { goto L_001FA140; } }
    c.budget -= 1;
L_001FA130:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001FA140:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001FA160:
    c.f[3] = ld32((c.r[4].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[2] = ld32((c.r[4].w[0] + 72u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    st32((c.r[4].w[0] + 72u), c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 116u), c.f[1]);  if (t) { goto L_001FA198; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001FA198:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001FA1B0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_001FA1C0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[16], c.r[17].w[0] + 304u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 51u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA204u); set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001FA204u) [[unlikely]] return; }
L_001FA204:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA214u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x001FA214u) [[unlikely]] return; }
L_001FA214:
    set32(c.r[5], c.r[18].w[0] + 16u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA224u); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001FA224u) [[unlikely]] return; }
L_001FA224:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA230u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001FA230u) [[unlikely]] return; }
L_001FA230:
    c.f[13] = ld32((c.r[29].w[0] + 136u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA23Cu); c.f[12] = ld32((c.r[29].w[0] + 128u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001FA23Cu) [[unlikely]] return; }
L_001FA23C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[17].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA24Cu); st32((c.r[17].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001FA24Cu) [[unlikely]] return; }
L_001FA24C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA254u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001FA254u) [[unlikely]] return; }
L_001FA254:
    c.f[13] = ld32((c.r[17].w[0] + 116u));
    c.f[14] = ld32((c.r[17].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA264u); c.f[12] = ld32((c.r[17].w[0] + 112u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001FA264u) [[unlikely]] return; }
L_001FA264:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA26Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FA26Cu) [[unlikely]] return; }
L_001FA26C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 128u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);  if (t) { goto L_001FA290; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 31040u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20300u), c.r[2].w[0]);  if (t) { goto L_001FA2A0; } }
    c.budget -= 1;
L_001FA290:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 32320u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20300u), c.r[2].w[0]);
    c.budget -= 4;
L_001FA2A0:
    set32(c.r[2], c.r[29].w[0] + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], 0u + 2u);
    st32((c.r[1].w[0] + 20240u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 32516u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA2C0u); st32((c.r[1].w[0] + 20260u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x001FA2C0u) [[unlikely]] return; }
L_001FA2C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[2].w[0]);
    set32(c.r[2], 0u + 34u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20286u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA300u); st32((c.r[1].w[0] + 20288u), 0u);  if (depth < kMaxDepth) unit_0067(c, 136u, depth + 1u); else { c.pc = 0x0029E270u; return; } if (c.pc != 0x001FA300u) [[unlikely]] return; }
L_001FA300:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001FA320:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001FA3F8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 504u)));
    set32(c.r[16], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 41u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001FA390; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FA390; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001FA3A8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FA3A8; } }
L_001FA390:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 512u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 504u), 0u);  if (t) { goto L_001FA3F8; } }
    c.budget -= 1;
L_001FA3A8:
    set32(c.r[2], ld32((c.r[17].w[0] + 504u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA3B8u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001FA3B8u) [[unlikely]] return; }
L_001FA3B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA3C0u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001FA3C0u) [[unlikely]] return; }
L_001FA3C0:
    c.f[13] = ld32((c.r[29].w[0] + 52u));
    c.f[14] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA3D0u); c.f[12] = ld32((c.r[29].w[0] + 48u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001FA3D0u) [[unlikely]] return; }
L_001FA3D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA3D8u); set32(c.r[4], c.r[17].w[0] + 368u);  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x001FA3D8u) [[unlikely]] return; }
L_001FA3D8:
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA3E4u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001FA3E4u) [[unlikely]] return; }
L_001FA3E4:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 42u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA3F4u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_003B(c, 238u, depth + 1u); else { c.pc = 0x001EE9F0u; return; } if (c.pc != 0x001FA3F4u) [[unlikely]] return; }
L_001FA3F4:
    c.budget -= 1;
L_001FA3F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FA410:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[17], ld32((c.r[4].w[0] + 504u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 28u)));
    c.r[16].d[0] = c.r[17].d[0] ^ 0ull;
    c.r[16].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[16].d[0] != 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001FA490; } }
    c.f[12] = ld32((c.r[18].w[0] + 44u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA450u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 244u, depth + 1u); else { c.pc = 0x001FA4C0u; return; } if (c.pc != 0x001FA450u) [[unlikely]] return; }
L_001FA450:
    set32(c.r[4], c.r[17].w[0] + 64u);
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA460u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001FA460u) [[unlikely]] return; }
L_001FA460:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001FA470; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FA470:
    c.f[1] = ld32((c.r[19].w[0] + 64u));
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001FA48C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FA48C:
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 1;
L_001FA490:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001FA4C0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.f[0] = c.f[12];  if (t) { goto L_001FA4D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FA540; } }
L_001FA4D0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FA538; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001FA538; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001FA500; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001FA538; } }
    c.budget -= 1;
L_001FA500:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 9u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001FA538; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FA538; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { goto L_001FA538; } }
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 4;
L_001FA538:
    c.f[0] = c.f[12];
    c.budget -= 2;
L_001FA540:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001FA550:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA57Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x001FA57Cu) [[unlikely]] return; }
L_001FA57C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FA5E8; } }
    set32(c.r[2], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 17u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    st32((c.r[16].w[0] + 28u), c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[3], c.r[3].w[0] - 22816u);
    st32((c.r[16].w[0] + 24u), c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] - 20560u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[5], c.r[5].w[0] - 29360u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA5D4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x001FA5D4u) [[unlikely]] return; }
L_001FA5D4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA5E0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x001FA5E0u) [[unlikely]] return; }
L_001FA5E0:
    st32((c.r[16].w[0] + 448u), 0u);
    c.budget -= 2;
L_001FA5E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FA600:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 12;
L_001FA630:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA640u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x001FA640u) [[unlikely]] return; }
L_001FA640:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FA6B0; } }
    set32(c.r[2], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 17u);
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 2u);
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    st32((c.r[18].w[0] + 28u), c.r[19].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[3], c.r[3].w[0] - 22816u);
    st32((c.r[18].w[0] + 24u), c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] - 20560u);
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 168u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = ld8((c.r[19].w[0]));
    set32(c.r[5], c.r[5].w[0] - 29360u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA698u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x001FA698u) [[unlikely]] return; }
L_001FA698:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA6A4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x001FA6A4u) [[unlikely]] return; }
L_001FA6A4:
    st32((c.r[18].w[0] + 448u), c.r[17].w[0]);
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
L_001FA6B0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 96u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FA630u | kUnwind; return; } goto L_001FA630; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001FA6E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 28848u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F8000u < 16384u) { entry = entries_003E[(t - 0x001F8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001FA700:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[5], 0u + 16384u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[3].d[0] = 0ull | 58368ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u - 1u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    st32((c.r[4].w[0] + 116u), c.f[0]);
    st32((c.r[4].w[0] + 120u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 160u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 40u)));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    st16((c.r[4].w[0] + 562u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 566u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 560u), static_cast<std::uint16_t>(0u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    c.budget -= 30;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[18].w[0] + 304u);  if (t) { goto L_001FA7E0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 270u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = c.r[5].d[0] & 127ull;  if (t) { goto L_001FA798; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA78Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x001FA78Cu) [[unlikely]] return; }
L_001FA78C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FA7E0; } }
    c.budget -= 1;
L_001FA798:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001FA7B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001FA7C8; } }
    c.budget -= 1;
L_001FA7B0:
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA7C0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 150u, depth + 1u); else { c.pc = 0x002AA460u; return; } if (c.pc != 0x001FA7C0u) [[unlikely]] return; }
L_001FA7C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FA7E0; } }
L_001FA7C8:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001FA7E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA7DCu);  if (depth < kMaxDepth) unit_006A(c, 150u, depth + 1u); else { c.pc = 0x002AA460u; return; } if (c.pc != 0x001FA7DCu) [[unlikely]] return; }
L_001FA7DC:
    c.budget -= 1;
L_001FA7E0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] << 6);  if (t) { goto L_001FA808; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA7FCu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001FA7FCu) [[unlikely]] return; }
L_001FA7FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FA818; } }
    c.budget -= 1;
L_001FA808:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA814u); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001FA814u) [[unlikely]] return; }
L_001FA814:
    c.budget -= 1;
L_001FA818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA820u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FA820u) [[unlikely]] return; }
L_001FA820:
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA82Cu); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001FA82Cu) [[unlikely]] return; }
L_001FA82C:
    c.f[3] = ld32((c.r[18].w[0] + 32u));
    c.f[2] = ld32((c.r[18].w[0] + 36u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0] + 44u));
    st32((c.r[18].w[0] + 128u), c.f[3]);
    st32((c.r[18].w[0] + 132u), c.f[2]);
    st32((c.r[18].w[0] + 136u), c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA850u); st32((c.r[18].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001FA850u) [[unlikely]] return; }
L_001FA850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA858u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x001FA858u) [[unlikely]] return; }
L_001FA858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA860u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FA860u) [[unlikely]] return; }
L_001FA860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA868u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 38u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001FA868u) [[unlikely]] return; }
L_001FA868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA870u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001FA870u) [[unlikely]] return; }
L_001FA870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA878u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 34u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001FA878u) [[unlikely]] return; }
L_001FA878:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], c.r[18].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA888u); set32(c.r[4], c.r[4].w[0] - 28864u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001FA888u) [[unlikely]] return; }
L_001FA888:
    c.f[12] = ld32((c.r[17].w[0] + 8u));
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA898u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x001FA898u) [[unlikely]] return; }
L_001FA898:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FA998; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[2].w[0] + 64u);  if (t) { goto L_001FA8C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA8B8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001FA8B8u) [[unlikely]] return; }
L_001FA8B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FA8D0; } }
L_001FA8C0:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA8D0u); set32(c.r[5], c.r[2].w[0] + 1360u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001FA8D0u) [[unlikely]] return; }
L_001FA8D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA8D8u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001FA8D8u) [[unlikely]] return; }
L_001FA8D8:
    c.f[13] = ld32((c.r[29].w[0] + 84u));
    c.f[14] = ld32((c.r[29].w[0] + 88u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA8E8u); c.f[12] = ld32((c.r[29].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001FA8E8u) [[unlikely]] return; }
L_001FA8E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA8F0u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x001FA8F0u) [[unlikely]] return; }
L_001FA8F0:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FA978; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA908u); set32(c.r[16], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001FA908u) [[unlikely]] return; }
L_001FA908:
    c.r[3].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001FA930; } }
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_001FA958; } }
    c.budget -= 1;
L_001FA930:
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 10;
L_001FA958:
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA96Cu); st32((c.r[16].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001FA96Cu) [[unlikely]] return; }
L_001FA96C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FA988; } }
    c.budget -= 1;
L_001FA978:
    set32(c.r[4], c.r[17].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA984u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001FA984u) [[unlikely]] return; }
L_001FA984:
    c.budget -= 1;
L_001FA988:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 32u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA998u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_003B(c, 238u, depth + 1u); else { c.pc = 0x001EE9F0u; return; } if (c.pc != 0x001FA998u) [[unlikely]] return; }
L_001FA998:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA9A4u); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001FA9A4u) [[unlikely]] return; }
L_001FA9A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA9B8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001FA9B8u) [[unlikely]] return; }
L_001FA9B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA9C0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 284u, depth + 1u); else { c.pc = 0x001FA9F0u; return; } if (c.pc != 0x001FA9C0u) [[unlikely]] return; }
L_001FA9C0:
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA9CCu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001FA9CCu) [[unlikely]] return; }
L_001FA9CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001FA9F0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 28u)));
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    st32((c.r[4].w[0] + 144u), c.f[3]);
    st32((c.r[4].w[0] + 148u), c.f[2]);
    st32((c.r[4].w[0] + 152u), c.f[1]);
    st32((c.r[4].w[0] + 156u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 20;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[18], c.r[19].w[0] + 304u);  if (t) { goto L_001FAA58; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FAA58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAA54u);  if (depth < kMaxDepth) unit_003E(c, 335u, depth + 1u); else { c.pc = 0x001FB150u; return; } if (c.pc != 0x001FAA54u) [[unlikely]] return; }
L_001FAA54:
    c.budget -= 1;
L_001FAA58:
    c.f[2] = ld32((c.r[19].w[0] + 48u));
    c.f[1] = ld32((c.r[19].w[0] + 32u));
    c.f[0] = 0u;
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 32u), c.f[1]);
    c.f[2] = ld32((c.r[19].w[0] + 52u));
    c.f[1] = ld32((c.r[19].w[0] + 36u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 36u), c.f[1]);
    c.f[2] = ld32((c.r[19].w[0] + 56u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 40u), c.f[1]);
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    c.f[1] = ld32((c.r[19].w[0] + 64u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 64u), c.f[1]);
    c.f[2] = ld32((c.r[19].w[0] + 68u));
    c.f[1] = ld32((c.r[19].w[0] + 52u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[19].w[0] + 52u), c.f[1]);
    c.f[1] = ld32((c.r[19].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 26;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001FAAE0; } }
    c.f[1] = ld32((c.r[19].w[0] + 64u));
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001FAAE0; } }
    st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    st32((c.r[19].w[0] + 68u), c.f[0]);
    c.budget -= 3;
L_001FAAE0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001FAB00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAAF4u);  if (depth < kMaxDepth) unit_003E(c, 343u, depth + 1u); else { c.pc = 0x001FB270u; return; } if (c.pc != 0x001FAAF4u) [[unlikely]] return; }
L_001FAAF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FAB00; } }
    st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_001FAB00:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAB10u); set32(c.r[6], c.r[19].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001FAB10u) [[unlikely]] return; }
L_001FAB10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAB18u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001FAB18u) [[unlikely]] return; }
L_001FAB18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAB20u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001FAB20u) [[unlikely]] return; }
L_001FAB20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAB30u); set32(c.r[4], c.r[4].w[0] - 28864u);  if (depth < kMaxDepth) unit_0009(c, 197u, depth + 1u); else { c.pc = 0x00126FE0u; return; } if (c.pc != 0x001FAB30u) [[unlikely]] return; }
L_001FAB30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAB38u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FAB38u) [[unlikely]] return; }
L_001FAB38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAB40u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001FAB40u) [[unlikely]] return; }
L_001FAB40:
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAB50u); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001FAB50u) [[unlikely]] return; }
L_001FAB50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAB58u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x001FAB58u) [[unlikely]] return; }
L_001FAB58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAB60u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FAB60u) [[unlikely]] return; }
L_001FAB60:
    set32(c.r[16], ld32((c.r[19].w[0] + 448u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[4], c.r[19].w[0] + 32u);  if (t) { goto L_001FACB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAB74u);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x001FAB74u) [[unlikely]] return; }
L_001FAB74:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 560u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001FAB90; } }
    c.f[2] = ld32((c.r[19].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001FAC00; } }
L_001FAB90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[19].w[0] + 144u);
    set32(c.r[5], c.r[19].w[0] + 32u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FABB8u); st8((c.r[19].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0012(c, 159u, depth + 1u); else { c.pc = 0x00149A80u; return; } if (c.pc != 0x001FABB8u) [[unlikely]] return; }
L_001FABB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FAC80; } }
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[2], 0u + 65u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_001FABF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FABD8u);  if (depth < kMaxDepth) unit_001D(c, 32u, depth + 1u); else { c.pc = 0x00174520u; return; } if (c.pc != 0x001FABD8u) [[unlikely]] return; }
L_001FABD8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FABE4u); set32(c.r[5], 0u + 144u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001FABE4u) [[unlikely]] return; }
L_001FABE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FAC80; } }
    c.budget -= 1;
L_001FABF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FABF8u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_001A(c, 61u, depth + 1u); else { c.pc = 0x00168A20u; return; } if (c.pc != 0x001FABF8u) [[unlikely]] return; }
L_001FABF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FAC80; } }
L_001FAC00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43DB0000u);
    c.f[3] = ld32((c.r[19].w[0] + 32u));
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44BB0000u);  if (t) { goto L_001FAC68; } }
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001FAC68; } }
    c.f[3] = ld32((c.r[19].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001FAC68; } }
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x45030000u);  if (t) { goto L_001FAC68; } }
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001FAC80; } }
L_001FAC68:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001FAC80:
    set32(c.r[6], c.r[19].w[0] + 192u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 2;
L_001FAC88:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[18], c.r[18].w[0] + 8u);
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FAC88u | kUnwind; return; } goto L_001FAC88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FADA0; } }
L_001FACB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = ld32((c.r[19].w[0] + 32u));
    set32(c.r[18], c.r[29].w[0] + 100u);
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[20], c.r[29].w[0] + 104u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 36u));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAD08u); st32((c.r[20].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001FAD08u) [[unlikely]] return; }
L_001FAD08:
    c.f[14] = ld32((c.r[20].w[0]));
    c.f[12] = ld32((c.r[29].w[0] + 96u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAD18u); c.f[13] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001FAD18u) [[unlikely]] return; }
L_001FAD18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAD20u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FAD20u) [[unlikely]] return; }
L_001FAD20:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_001FADA0; } }
    set32(c.r[4], 0u + 1u);
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 516u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001FAD50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001FADA0; } }
L_001FAD50:
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], c.r[19].w[0] + 144u);
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAD64u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0012(c, 159u, depth + 1u); else { c.pc = 0x00149A80u; return; } if (c.pc != 0x001FAD64u) [[unlikely]] return; }
L_001FAD64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FADA0; } }
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[2], 0u + 65u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_001FAD98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAD84u);  if (depth < kMaxDepth) unit_001D(c, 32u, depth + 1u); else { c.pc = 0x00174520u; return; } if (c.pc != 0x001FAD84u) [[unlikely]] return; }
L_001FAD84:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAD90u); set32(c.r[5], 0u + 144u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001FAD90u) [[unlikely]] return; }
L_001FAD90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FADA0; } }
L_001FAD98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FADA0u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001A(c, 61u, depth + 1u); else { c.pc = 0x00168A20u; return; } if (c.pc != 0x001FADA0u) [[unlikely]] return; }
L_001FADA0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001FADD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 28832u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F8000u < 16384u) { entry = entries_003E[(t - 0x001F8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001FADF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.f[4] = ld32((c.r[4].w[0] + 32u));
    c.f[3] = ld32((c.r[4].w[0] + 36u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[2] = ld32((c.r[4].w[0] + 40u));
    c.f[1] = ld32((c.r[4].w[0] + 44u));
    st32((c.r[4].w[0] + 144u), c.f[4]);
    st32((c.r[4].w[0] + 148u), c.f[3]);
    st32((c.r[4].w[0] + 152u), c.f[2]);
    st32((c.r[4].w[0] + 156u), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 48u));
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 32u), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 52u));
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 36u), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 56u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 40u), c.f[1]);
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = ld32((c.r[4].w[0] + 64u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 64u), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 68u));
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 52u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 39;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[17], c.r[16].w[0] + 304u);  if (t) { goto L_001FAEA8; } }
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001FAEA8; } }
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.budget -= 2;
L_001FAEA8:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAEB8u); set32(c.r[6], c.r[16].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001FAEB8u) [[unlikely]] return; }
L_001FAEB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAEC0u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001FAEC0u) [[unlikely]] return; }
L_001FAEC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAEC8u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001FAEC8u) [[unlikely]] return; }
L_001FAEC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAED8u); set32(c.r[4], c.r[4].w[0] - 28864u);  if (depth < kMaxDepth) unit_0009(c, 197u, depth + 1u); else { c.pc = 0x00126FE0u; return; } if (c.pc != 0x001FAED8u) [[unlikely]] return; }
L_001FAED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAEE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FAEE0u) [[unlikely]] return; }
L_001FAEE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAEE8u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001FAEE8u) [[unlikely]] return; }
L_001FAEE8:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAEF8u); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001FAEF8u) [[unlikely]] return; }
L_001FAEF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAF00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x001FAF00u) [[unlikely]] return; }
L_001FAF00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAF08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FAF08u) [[unlikely]] return; }
L_001FAF08:
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 112u), c.f[0]);  if (t) { goto L_001FAF50; } }
    c.f[1] = ld32((c.r[16].w[0] + 160u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 160u), c.f[1]);  if (t) { goto L_001FAF60; } }
    c.budget -= 1;
L_001FAF50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001FAF60:
    set32(c.r[3], 0u + 1u);
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    st32((c.r[16].w[0] + 116u), c.f[0]);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FAF90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001FAFA0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_001FAFB0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[2], 0u + 68u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[19].w[0] + 304u);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[6].d[0] = ld8((c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 51u)));
    set32(c.r[4], c.r[4].w[0] + 29024u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    c.budget -= 21;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[18], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_001FB008; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_001FB008:
    set32(c.r[2], 0u + 65u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_001FB018; } }
    set32(c.r[16], 0u + 2u);
    c.budget -= 1;
L_001FB018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB020u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001FB020u) [[unlikely]] return; }
L_001FB020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB028u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x001FB028u) [[unlikely]] return; }
L_001FB028:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB038u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x001FB038u) [[unlikely]] return; }
L_001FB038:
    set32(c.r[5], c.r[18].w[0] + 16u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB048u); set32(c.r[6], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001FB048u) [[unlikely]] return; }
L_001FB048:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB054u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001FB054u) [[unlikely]] return; }
L_001FB054:
    c.f[13] = ld32((c.r[29].w[0] + 152u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB060u); c.f[12] = ld32((c.r[29].w[0] + 144u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001FB060u) [[unlikely]] return; }
L_001FB060:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB070u); st32((c.r[19].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001FB070u) [[unlikely]] return; }
L_001FB070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB078u); set32(c.r[4], ld32((c.r[19].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001FB078u) [[unlikely]] return; }
L_001FB078:
    c.f[13] = ld32((c.r[19].w[0] + 116u));
    c.f[14] = ld32((c.r[19].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB088u); c.f[12] = ld32((c.r[19].w[0] + 112u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001FB088u) [[unlikely]] return; }
L_001FB088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB090u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FB090u) [[unlikely]] return; }
L_001FB090:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[1].w[0] + 20288u), 0u);
    set32(c.r[2], c.r[29].w[0] + 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[16].w[0] << 6);
    st32((c.r[1].w[0] + 20240u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 28816u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 28576u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20260u), c.r[2].w[0]);
    set32(c.r[4], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[1].w[0] + 20244u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20296u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20286u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB100u); st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x001FB100u) [[unlikely]] return; }
L_001FB100:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    set32(c.r[3], c.r[16].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 28624u);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB12Cu); st32((c.r[1].w[0] + 20272u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0067(c, 128u, depth + 1u); else { c.pc = 0x0029E100u; return; } if (c.pc != 0x001FB12Cu) [[unlikely]] return; }
L_001FB12C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001FB150:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001FB258; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 504u)));
    set32(c.r[16], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 40u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001FB1C8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FB1C8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001FB1E0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FB1E0; } }
    c.budget -= 1;
L_001FB1C8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 512u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 504u), 0u);  if (t) { goto L_001FB258; } }
    c.budget -= 1;
L_001FB1E0:
    set32(c.r[2], ld32((c.r[17].w[0] + 504u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[18], c.r[17].w[0] + 304u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB1F4u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001FB1F4u) [[unlikely]] return; }
L_001FB1F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB1FCu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001FB1FCu) [[unlikely]] return; }
L_001FB1FC:
    c.f[13] = ld32((c.r[29].w[0] + 68u));
    c.f[14] = ld32((c.r[29].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB20Cu); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001FB20Cu) [[unlikely]] return; }
L_001FB20C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB214u); set32(c.r[4], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x001FB214u) [[unlikely]] return; }
L_001FB214:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[2], 0u + 144u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[18].w[0] + 128u);  if (t) { goto L_001FB238; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB22Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001FB22Cu) [[unlikely]] return; }
L_001FB22C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FB248; } }
    c.budget -= 1;
L_001FB238:
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB244u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001FB244u) [[unlikely]] return; }
L_001FB244:
    c.budget -= 1;
L_001FB248:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 42u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB258u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_003B(c, 238u, depth + 1u); else { c.pc = 0x001EE9F0u; return; } if (c.pc != 0x001FB258u) [[unlikely]] return; }
L_001FB258:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001FB270:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[17], ld32((c.r[4].w[0] + 504u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.r[16].d[0] = c.r[17].d[0] ^ 0ull;
    c.r[16].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[16].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001FB2D0; } }
    c.f[12] = ld32((c.r[2].w[0] + 44u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB2ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 244u, depth + 1u); else { c.pc = 0x001FA4C0u; return; } if (c.pc != 0x001FB2ACu) [[unlikely]] return; }
L_001FB2AC:
    set32(c.r[4], c.r[17].w[0] + 64u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB2BCu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001FB2BCu) [[unlikely]] return; }
L_001FB2BC:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001FB2CC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001FB2CC:
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 1;
L_001FB2D0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001FB2F0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001FB328; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001FB640; } }
    c.budget -= 1;
L_001FB328:
    set32(c.r[17], ld32((c.r[16].w[0] + 636u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[16].w[0] + 192u);  if (t) { goto L_001FB360; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB354u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001FB354u) [[unlikely]] return; }
L_001FB354:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FB370; } }
    c.budget -= 1;
L_001FB360:
    set32(c.r[2], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB370u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001FB370u) [[unlikely]] return; }
L_001FB370:
    set32(c.r[18], ld32((c.r[16].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[2], 0u + 4096u);  if (t) { goto L_001FB388; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FB640; } }
    c.budget -= 1;
L_001FB388:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 4096u);  if (t) { goto L_001FB3A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FB640; } }
    c.budget -= 1;
L_001FB3A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB3A8u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x001FB3A8u) [[unlikely]] return; }
L_001FB3A8:
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB3B4u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001FB3B4u) [[unlikely]] return; }
L_001FB3B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB3BCu); set32(c.r[4], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x001FB3BCu) [[unlikely]] return; }
L_001FB3BC:
    set32(c.r[4], c.r[17].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB3C8u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001FB3C8u) [[unlikely]] return; }
L_001FB3C8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_001FB4B0; } }
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB3E4u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001FB3E4u) [[unlikely]] return; }
L_001FB3E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB3ECu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001FB3ECu) [[unlikely]] return; }
L_001FB3EC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB3FCu); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001FB3FCu) [[unlikely]] return; }
L_001FB3FC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB408u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x001FB408u) [[unlikely]] return; }
L_001FB408:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 144u);  if (t) { goto L_001FB440; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB428u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x001FB428u) [[unlikely]] return; }
L_001FB428:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001FB4B0; } }
L_001FB440:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB450u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001FB450u) [[unlikely]] return; }
L_001FB450:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB45Cu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001FB45Cu) [[unlikely]] return; }
L_001FB45C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB46Cu); st32((c.r[29].w[0] + 100u), 0u);  if (depth < kMaxDepth) unit_0009(c, 217u, depth + 1u); else { c.pc = 0x00127620u; return; } if (c.pc != 0x001FB46Cu) [[unlikely]] return; }
L_001FB46C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB474u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x001FB474u) [[unlikely]] return; }
L_001FB474:
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);  if (t) { goto L_001FB4A8; } }
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
L_001FB4A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FB640; } }
L_001FB4B0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001FB4E8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 144u);  if (t) { goto L_001FB4E8; } }
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB4E0u); set32(c.r[7], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_0011(c, 101u, depth + 1u); else { c.pc = 0x00145440u; return; } if (c.pc != 0x001FB4E0u) [[unlikely]] return; }
L_001FB4E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FB4F0; } }
L_001FB4E8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001FB4F0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB4FCu); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x00127450u; return; } if (c.pc != 0x001FB4FCu) [[unlikely]] return; }
L_001FB4FC:
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.f[1] = ld32((c.r[29].w[0] + 120u));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB510u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001FB510u) [[unlikely]] return; }
L_001FB510:
    c.f[21] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB51Cu); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0005(c, 46u, depth + 1u); else { c.pc = 0x001158E0u; return; } if (c.pc != 0x001FB51Cu) [[unlikely]] return; }
L_001FB51C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F500000u);
    c.r[3].d[0] = 0ull | 54001ull;
    c.r[4].d[0] = c.r[4].d[0] | 25165ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | 43516ull;
    c.r[5].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB540u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 33u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x001FB540u) [[unlikely]] return; }
L_001FB540:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FB558; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[21] = c.r[2].w[0];
    c.budget -= 4;
L_001FB558:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[4] = ld32((c.r[17].w[0] + 20u));
    c.f[5] = ld32((c.r[17].w[0] + 8u));
    c.f[3] = c.r[2].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[2] = c.r[2].w[0];
    c.f[4] = fp::mul(c.f[4], c.f[21]);
    c.f[3] = fp::mul(c.f[3], c.f[5]);
    c.f[4] = fp::mul(c.f[21], c.f[4]);
    c.f[3] = fp::mul(c.f[3], c.f[5]);
    fpu_div(c, 20u, c.f[4], c.f[3]);
    c.f[2] = fp::mul(c.f[2], c.f[20]);
    c.f[1] = fp::add(c.f[20], c.f[1]);
    c.f[0] = fp::mul(c.f[21], c.f[21]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[12] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 22;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001FB5B8; } }
    c.f[12] = c.f[0];
    c.budget -= 2;
L_001FB5B8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001FB5FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB5C8u);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001FB5C8u) [[unlikely]] return; }
L_001FB5C8:
    c.f[1] = fp::add(c.f[21], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB5F0u);  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00126010u; return; } if (c.pc != 0x001FB5F0u) [[unlikely]] return; }
L_001FB5F0:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);  if (t) { goto L_001FB634; } }
L_001FB5FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB604u);  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001FB604u) [[unlikely]] return; }
L_001FB604:
    c.f[1] = fp::sub(c.f[21], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB62Cu);  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00126010u; return; } if (c.pc != 0x001FB62Cu) [[unlikely]] return; }
L_001FB62C:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 2;
L_001FB634:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
L_001FB640:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001FB660:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB68Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x001FB68Cu) [[unlikely]] return; }
L_001FB68C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001FB6F0; } }
    set32(c.r[2], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 17u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    st32((c.r[16].w[0] + 24u), c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[3], c.r[3].w[0] - 18672u);
    st32((c.r[16].w[0] + 28u), c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] - 16768u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[5], c.r[5].w[0] - 29360u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB6E4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x001FB6E4u) [[unlikely]] return; }
L_001FB6E4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB6F0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x001FB6F0u) [[unlikely]] return; }
L_001FB6F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FB710:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 28544u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F8000u < 16384u) { entry = entries_003E[(t - 0x001F8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001FB730:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[5], 0u + 16384u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[3].d[0] = 0ull | 58368ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u - 1u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    st32((c.r[4].w[0] + 116u), c.f[0]);
    st32((c.r[4].w[0] + 120u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 160u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 40u)));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 64u), 0u);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    st32((c.r[4].w[0] + 68u), c.f[0]);
    st16((c.r[4].w[0] + 562u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 566u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 560u), static_cast<std::uint16_t>(0u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.budget -= 31;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[17], c.r[18].w[0] + 304u);  if (t) { goto L_001FB810; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 270u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = c.r[5].d[0] & 127ull;  if (t) { goto L_001FB7C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB7C0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x001FB7C0u) [[unlikely]] return; }
L_001FB7C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FB810; } }
L_001FB7C8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001FB7E0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001FB7F8; } }
    c.budget -= 1;
L_001FB7E0:
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB7F0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 150u, depth + 1u); else { c.pc = 0x002AA460u; return; } if (c.pc != 0x001FB7F0u) [[unlikely]] return; }
L_001FB7F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FB810; } }
L_001FB7F8:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001FB810; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB80Cu);  if (depth < kMaxDepth) unit_006A(c, 150u, depth + 1u); else { c.pc = 0x002AA460u; return; } if (c.pc != 0x001FB80Cu) [[unlikely]] return; }
L_001FB80C:
    c.budget -= 1;
L_001FB810:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] << 6);  if (t) { goto L_001FB838; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB82Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001FB82Cu) [[unlikely]] return; }
L_001FB82C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FB848; } }
    c.budget -= 1;
L_001FB838:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB844u); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001FB844u) [[unlikely]] return; }
L_001FB844:
    c.budget -= 1;
L_001FB848:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], 0u + 58u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 59u);  if (t) { goto L_001FB860; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001FB888; } }
L_001FB860:
    c.f[13] = ld32((c.r[18].w[0] + 52u));
    c.f[14] = ld32((c.r[18].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB870u); c.f[12] = ld32((c.r[18].w[0] + 48u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001FB870u) [[unlikely]] return; }
L_001FB870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB878u); set32(c.r[4], ld32((c.r[18].w[0] + 96u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001FB878u) [[unlikely]] return; }
L_001FB878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB880u); set32(c.r[4], ld32((c.r[18].w[0] + 100u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001FB880u) [[unlikely]] return; }
L_001FB880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB888u); set32(c.r[4], ld32((c.r[18].w[0] + 92u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001FB888u) [[unlikely]] return; }
L_001FB888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB890u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FB890u) [[unlikely]] return; }
L_001FB890:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB89Cu); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001FB89Cu) [[unlikely]] return; }
L_001FB89C:
    c.f[3] = ld32((c.r[18].w[0] + 32u));
    c.f[2] = ld32((c.r[18].w[0] + 36u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0] + 44u));
    st32((c.r[18].w[0] + 128u), c.f[3]);
    st32((c.r[18].w[0] + 132u), c.f[2]);
    st32((c.r[18].w[0] + 136u), c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB8C0u); st32((c.r[18].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001FB8C0u) [[unlikely]] return; }
L_001FB8C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB8C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x001FB8C8u) [[unlikely]] return; }
L_001FB8C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB8D0u); set32(c.r[4], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FB8D0u) [[unlikely]] return; }
L_001FB8D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB8D8u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 38u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x001FB8D8u) [[unlikely]] return; }
L_001FB8D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB8E0u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001FB8E0u) [[unlikely]] return; }
L_001FB8E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB8E8u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 34u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001FB8E8u) [[unlikely]] return; }
L_001FB8E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], c.r[18].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB8F8u); set32(c.r[4], c.r[4].w[0] - 28560u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001FB8F8u) [[unlikely]] return; }
L_001FB8F8:
    c.f[12] = ld32((c.r[16].w[0] + 8u));
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB908u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x001FB908u) [[unlikely]] return; }
L_001FB908:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FB980; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[2].w[0] + 64u);  if (t) { goto L_001FB930; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB928u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001FB928u) [[unlikely]] return; }
L_001FB928:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FB940; } }
L_001FB930:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB940u); set32(c.r[5], c.r[2].w[0] + 1360u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001FB940u) [[unlikely]] return; }
L_001FB940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB948u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001FB948u) [[unlikely]] return; }
L_001FB948:
    c.f[13] = ld32((c.r[29].w[0] + 68u));
    c.f[14] = ld32((c.r[29].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB958u); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001FB958u) [[unlikely]] return; }
L_001FB958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB960u); set32(c.r[4], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x001FB960u) [[unlikely]] return; }
L_001FB960:
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB96Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x001FB96Cu) [[unlikely]] return; }
L_001FB96C:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 32u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB97Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_003B(c, 241u, depth + 1u); else { c.pc = 0x001EEA30u; return; } if (c.pc != 0x001FB97Cu) [[unlikely]] return; }
L_001FB97C:
    c.budget -= 1;
L_001FB980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB988u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 404u, depth + 1u); else { c.pc = 0x001FB9A0u; return; } if (c.pc != 0x001FB988u) [[unlikely]] return; }
L_001FB988:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001FB9A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    st32((c.r[4].w[0] + 144u), c.f[3]);
    st32((c.r[4].w[0] + 148u), c.f[2]);
    st32((c.r[4].w[0] + 152u), c.f[1]);
    st32((c.r[4].w[0] + 156u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 17;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_001FB9F8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FB9F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB9F8u);  if (depth < kMaxDepth) unit_003E(c, 450u, depth + 1u); else { c.pc = 0x001FBFD0u; return; } if (c.pc != 0x001FB9F8u) [[unlikely]] return; }
L_001FB9F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 68u));
    c.f[3] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[1] = fp::sub(c.f[3], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBA50u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001FBA50u) [[unlikely]] return; }
L_001FBA50:
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 64u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 68u));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001FBA90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBA80u);  if (depth < kMaxDepth) unit_003F(c, 15u, depth + 1u); else { c.pc = 0x001FC1C0u; return; } if (c.pc != 0x001FBA80u) [[unlikely]] return; }
L_001FBA80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FBA90; } }
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_001FBA90:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBAA0u); set32(c.r[6], c.r[17].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001FBAA0u) [[unlikely]] return; }
L_001FBAA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBAA8u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001FBAA8u) [[unlikely]] return; }
L_001FBAA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBAB0u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001FBAB0u) [[unlikely]] return; }
L_001FBAB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBAC0u); set32(c.r[4], c.r[4].w[0] - 28560u);  if (depth < kMaxDepth) unit_0009(c, 197u, depth + 1u); else { c.pc = 0x00126FE0u; return; } if (c.pc != 0x001FBAC0u) [[unlikely]] return; }
L_001FBAC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBAC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FBAC8u) [[unlikely]] return; }
L_001FBAC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBAD0u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001FBAD0u) [[unlikely]] return; }
L_001FBAD0:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBAE0u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001FBAE0u) [[unlikely]] return; }
L_001FBAE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBAE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x001FBAE8u) [[unlikely]] return; }
L_001FBAE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBAF0u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FBAF0u) [[unlikely]] return; }
L_001FBAF0:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 560u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FBB18; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001FBCA0; } }
L_001FBB18:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B00000u);
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x44E70000u);  if (t) { goto L_001FBB88; } }
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001FBB88; } }
    c.f[2] = ld32((c.r[17].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001FBB88; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001FBB88; } }
    c.f[20] = ld32((c.r[17].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x45030000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001FBBA8; } }
    c.budget -= 1;
L_001FBB88:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001FBCA0; } }
    c.budget -= 1;
L_001FBBA8:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBBB4u); set32(c.r[16], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x001FBBB4u) [[unlikely]] return; }
L_001FBBB4:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_001FBC28; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[17].w[0] + 144u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBBE8u); st8((c.r[17].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0012(c, 159u, depth + 1u); else { c.pc = 0x00149A80u; return; } if (c.pc != 0x001FBBE8u) [[unlikely]] return; }
L_001FBBE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FBCA0; } }
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBC14u); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_001D(c, 32u, depth + 1u); else { c.pc = 0x00174520u; return; } if (c.pc != 0x001FBC14u) [[unlikely]] return; }
L_001FBC14:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBC20u); set32(c.r[5], 0u + 144u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001FBC20u) [[unlikely]] return; }
L_001FBC20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FBCA0; } }
L_001FBC28:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 13u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x43660000u);  if (t) { goto L_001FBC50; } }
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001FBC70; } }
L_001FBC50:
    set32(c.r[3], 0u + 34u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x43950000u);  if (t) { goto L_001FBCA0; } }
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001FBCA0; } }
L_001FBC70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBC90u); st8((c.r[17].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001D(c, 32u, depth + 1u); else { c.pc = 0x00174520u; return; } if (c.pc != 0x001FBC90u) [[unlikely]] return; }
L_001FBC90:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBC9Cu); set32(c.r[5], 0u + 144u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001FBC9Cu) [[unlikely]] return; }
L_001FBC9C:
    c.budget -= 1;
L_001FBCA0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001FBCC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 28528u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F8000u < 16384u) { entry = entries_003E[(t - 0x001F8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001FBCE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    set32(c.r[17], c.r[16].w[0] + 304u);
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    st32((c.r[4].w[0] + 144u), c.f[3]);
    st32((c.r[4].w[0] + 148u), c.f[2]);
    st32((c.r[4].w[0] + 152u), c.f[1]);
    st32((c.r[4].w[0] + 156u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 56u));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    c.f[1] = ld32((c.r[4].w[0] + 56u));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBD5Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x001FBD5Cu) [[unlikely]] return; }
L_001FBD5C:
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    set32(c.r[6], c.r[16].w[0] + 144u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBD88u); st32((c.r[16].w[0] + 52u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001FBD88u) [[unlikely]] return; }
L_001FBD88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBD90u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001FBD90u) [[unlikely]] return; }
L_001FBD90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBD98u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001FBD98u) [[unlikely]] return; }
L_001FBD98:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBDA8u); set32(c.r[4], c.r[4].w[0] - 28560u);  if (depth < kMaxDepth) unit_0009(c, 197u, depth + 1u); else { c.pc = 0x00126FE0u; return; } if (c.pc != 0x001FBDA8u) [[unlikely]] return; }
L_001FBDA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBDB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FBDB0u) [[unlikely]] return; }
L_001FBDB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBDB8u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x001FBDB8u) [[unlikely]] return; }
L_001FBDB8:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBDC8u); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x001FBDC8u) [[unlikely]] return; }
L_001FBDC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBDD0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x001FBDD0u) [[unlikely]] return; }
L_001FBDD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBDD8u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FBDD8u) [[unlikely]] return; }
L_001FBDD8:
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 112u), c.f[0]);  if (t) { goto L_001FBE20; } }
    c.f[1] = ld32((c.r[16].w[0] + 160u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 160u), c.f[1]);  if (t) { goto L_001FBE30; } }
    c.budget -= 1;
L_001FBE20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001FBE30:
    set32(c.r[3], 0u + 1u);
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    st32((c.r[16].w[0] + 116u), c.f[0]);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FBE60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001FBE70:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_001FBE80:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 304u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 51u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBEBCu); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x001FBEBCu) [[unlikely]] return; }
L_001FBEBC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBECCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x001FBECCu) [[unlikely]] return; }
L_001FBECC:
    set32(c.r[5], c.r[17].w[0] + 16u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBEDCu); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001FBEDCu) [[unlikely]] return; }
L_001FBEDC:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBEE8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001FBEE8u) [[unlikely]] return; }
L_001FBEE8:
    c.f[13] = ld32((c.r[29].w[0] + 120u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBEF4u); c.f[12] = ld32((c.r[29].w[0] + 112u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001FBEF4u) [[unlikely]] return; }
L_001FBEF4:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[16].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBF04u); st32((c.r[16].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001FBF04u) [[unlikely]] return; }
L_001FBF04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBF0Cu); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x001FBF0Cu) [[unlikely]] return; }
L_001FBF0C:
    c.f[13] = ld32((c.r[16].w[0] + 116u));
    c.f[14] = ld32((c.r[16].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBF1Cu); c.f[12] = ld32((c.r[16].w[0] + 112u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x001FBF1Cu) [[unlikely]] return; }
L_001FBF1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBF24u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x001FBF24u) [[unlikely]] return; }
L_001FBF24:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[29].w[0] + 48u);
    st32((c.r[1].w[0] + 20288u), 0u);
    set32(c.r[4], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20240u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 28512u);
    st32((c.r[1].w[0] + 20244u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 28432u);
    st32((c.r[1].w[0] + 20260u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20296u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20286u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBF8Cu); st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x001FBF8Cu) [[unlikely]] return; }
L_001FBF8C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBFB0u); st32((c.r[1].w[0] + 20272u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0067(c, 128u, depth + 1u); else { c.pc = 0x0029E100u; return; } if (c.pc != 0x001FBFB0u) [[unlikely]] return; }
L_001FBFB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBFB8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x001FBFB8u) [[unlikely]] return; }
L_001FBFB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001FBFD0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_003F(c, 14u, depth); } }
    [[clang::musttail]] return unit_003F(c, 2u, depth);
}

}
