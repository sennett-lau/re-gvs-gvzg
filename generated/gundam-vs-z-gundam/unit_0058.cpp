#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0058[4096] = {
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 15, 0, 0, 0, 16,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    20, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 26, 0, 0, 0,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29,
    0, 30, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 39, 40, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0,
    0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 54, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0,
    0, 64, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0,
    0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0,
    0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0,
    0, 103, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0,
    108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0,
    0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0,
    0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 158,
    0, 0, 0, 0, 0, 0, 0, 159, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0,
    0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0,
    0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0,
    191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198,
    0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 205, 0, 206, 0, 207, 0, 0, 0, 0,
    0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0,
    0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0,
    0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0,
    0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 253, 0, 254, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0,
    0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0,
    0, 0, 273, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 275, 0, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285,
    0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0,
    0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0,
    0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0,
    0, 303, 0, 0, 0, 0, 304, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 317, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 325, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333,
    0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0,
    0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0,
    354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358,
    0, 0, 0, 0, 0, 0, 359, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0,
    0, 0, 365, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    373, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0,
    0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 379, 0, 0, 0, 380, 0,
    0, 381, 0, 382, 0, 0, 383, 0, 0, 0, 384, 0, 0, 385, 0, 386, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    391, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0,
    407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0,
    0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 411,
};

void unit_0058(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00260000;
    case 2u: goto L_00260004;
    case 3u: goto L_00260008;
    case 4u: goto L_0026000C;
    case 5u: goto L_00260010;
    case 6u: goto L_00260014;
    case 7u: goto L_00260018;
    case 8u: goto L_0026001C;
    case 9u: goto L_00260020;
    case 10u: goto L_00260024;
    case 11u: goto L_00260028;
    case 12u: goto L_00260038;
    case 13u: goto L_00260054;
    case 14u: goto L_00260064;
    case 15u: goto L_0026006C;
    case 16u: goto L_0026007C;
    case 17u: goto L_002600AC;
    case 18u: goto L_002600B8;
    case 19u: goto L_002600C4;
    case 20u: goto L_00260100;
    case 21u: goto L_00260108;
    case 22u: goto L_00260114;
    case 23u: goto L_00260138;
    case 24u: goto L_00260160;
    case 25u: goto L_00260168;
    case 26u: goto L_00260170;
    case 27u: goto L_00260190;
    case 28u: goto L_002601E8;
    case 29u: goto L_002601FC;
    case 30u: goto L_00260204;
    case 31u: goto L_00260210;
    case 32u: goto L_00260220;
    case 33u: goto L_00260258;
    case 34u: goto L_0026026C;
    case 35u: goto L_00260298;
    case 36u: goto L_002602CC;
    case 37u: goto L_002602E4;
    case 38u: goto L_00260300;
    case 39u: goto L_00260314;
    case 40u: goto L_00260318;
    case 41u: goto L_00260320;
    case 42u: goto L_00260328;
    case 43u: goto L_00260348;
    case 44u: goto L_002603C0;
    case 45u: goto L_002603F8;
    case 46u: goto L_0026040C;
    case 47u: goto L_00260438;
    case 48u: goto L_0026044C;
    case 49u: goto L_00260484;
    case 50u: goto L_0026048C;
    case 51u: goto L_002604A8;
    case 52u: goto L_002604C0;
    case 53u: goto L_002604E0;
    case 54u: goto L_002604E4;
    case 55u: goto L_00260524;
    case 56u: goto L_0026052C;
    case 57u: goto L_00260534;
    case 58u: goto L_00260548;
    case 59u: goto L_002605B0;
    case 60u: goto L_002605C0;
    case 61u: goto L_002605C8;
    case 62u: goto L_002605E4;
    case 63u: goto L_002605EC;
    case 64u: goto L_00260604;
    case 65u: goto L_0026060C;
    case 66u: goto L_00260614;
    case 67u: goto L_00260638;
    case 68u: goto L_00260680;
    case 69u: goto L_00260698;
    case 70u: goto L_002606B0;
    case 71u: goto L_002606D8;
    case 72u: goto L_00260704;
    case 73u: goto L_0026073C;
    case 74u: goto L_002607A0;
    case 75u: goto L_002607AC;
    case 76u: goto L_002607C0;
    case 77u: goto L_002607D4;
    case 78u: goto L_002607E8;
    case 79u: goto L_00260830;
    case 80u: goto L_00260844;
    case 81u: goto L_00260860;
    case 82u: goto L_00260874;
    case 83u: goto L_002608A8;
    case 84u: goto L_002608F0;
    case 85u: goto L_00260938;
    case 86u: goto L_00260950;
    case 87u: goto L_00260984;
    case 88u: goto L_0026099C;
    case 89u: goto L_002609C0;
    case 90u: goto L_002609F0;
    case 91u: goto L_00260A18;
    case 92u: goto L_00260A28;
    case 93u: goto L_00260A6C;
    case 94u: goto L_00260A84;
    case 95u: goto L_00260AA0;
    case 96u: goto L_00260AB8;
    case 97u: goto L_00260ACC;
    case 98u: goto L_00260AF8;
    case 99u: goto L_00260B08;
    case 100u: goto L_00260B10;
    case 101u: goto L_00260B30;
    case 102u: goto L_00260B60;
    case 103u: goto L_00260B84;
    case 104u: goto L_00260B8C;
    case 105u: goto L_00260B98;
    case 106u: goto L_00260BD4;
    case 107u: goto L_00260BEC;
    case 108u: goto L_00260C00;
    case 109u: goto L_00260C40;
    case 110u: goto L_00260C78;
    case 111u: goto L_00260C94;
    case 112u: goto L_00260CE0;
    case 113u: goto L_00260D40;
    case 114u: goto L_00260D94;
    case 115u: goto L_00260DD0;
    case 116u: goto L_00260E40;
    case 117u: goto L_00260E80;
    case 118u: goto L_00260ECC;
    case 119u: goto L_00260ED4;
    case 120u: goto L_00260EF4;
    case 121u: goto L_00260F10;
    case 122u: goto L_00260F60;
    case 123u: goto L_00260F98;
    case 124u: goto L_00260FA4;
    case 125u: goto L_00260FD4;
    case 126u: goto L_00261010;
    case 127u: goto L_00261040;
    case 128u: goto L_0026105C;
    case 129u: goto L_002610A0;
    case 130u: goto L_002610D0;
    case 131u: goto L_002610D8;
    case 132u: goto L_00261130;
    case 133u: goto L_00261190;
    case 134u: goto L_00261240;
    case 135u: goto L_0026128C;
    case 136u: goto L_002612BC;
    case 137u: goto L_00261324;
    case 138u: goto L_00261370;
    case 139u: goto L_00261378;
    case 140u: goto L_002613BC;
    case 141u: goto L_002613D0;
    case 142u: goto L_002613D4;
    case 143u: goto L_00261458;
    case 144u: goto L_00261528;
    case 145u: goto L_00261548;
    case 146u: goto L_00261554;
    case 147u: goto L_00261560;
    case 148u: goto L_0026157C;
    case 149u: goto L_002615D8;
    case 150u: goto L_002615E4;
    case 151u: goto L_00261624;
    case 152u: goto L_0026163C;
    case 153u: goto L_00261648;
    case 154u: goto L_00261654;
    case 155u: goto L_00261758;
    case 156u: goto L_00261764;
    case 157u: goto L_00261770;
    case 158u: goto L_0026177C;
    case 159u: goto L_0026179C;
    case 160u: goto L_002617A0;
    case 161u: goto L_002617E0;
    case 162u: goto L_0026180C;
    case 163u: goto L_00261820;
    case 164u: goto L_0026185C;
    case 165u: goto L_00261874;
    case 166u: goto L_00261890;
    case 167u: goto L_002618BC;
    case 168u: goto L_00261900;
    case 169u: goto L_0026193C;
    case 170u: goto L_00261954;
    case 171u: goto L_00261970;
    case 172u: goto L_0026199C;
    case 173u: goto L_002619CC;
    case 174u: goto L_002619E4;
    case 175u: goto L_00261A00;
    case 176u: goto L_00261A24;
    case 177u: goto L_00261A48;
    case 178u: goto L_00261A60;
    case 179u: goto L_00261A8C;
    case 180u: goto L_00261AA0;
    case 181u: goto L_00261AC0;
    case 182u: goto L_00261AC8;
    case 183u: goto L_00261ADC;
    case 184u: goto L_00261AF4;
    case 185u: goto L_00261B10;
    case 186u: goto L_00261B3C;
    case 187u: goto L_00261B88;
    case 188u: goto L_00261BA8;
    case 189u: goto L_00261BC4;
    case 190u: goto L_00261BDC;
    case 191u: goto L_00261C00;
    case 192u: goto L_00261C2C;
    case 193u: goto L_00261C40;
    case 194u: goto L_00261C80;
    case 195u: goto L_00261C9C;
    case 196u: goto L_00261CB4;
    case 197u: goto L_00261CD0;
    case 198u: goto L_00261CFC;
    case 199u: goto L_00261D10;
    case 200u: goto L_00261D2C;
    case 201u: goto L_00261D44;
    case 202u: goto L_00261D60;
    case 203u: goto L_00261DA4;
    case 204u: goto L_00261DD4;
    case 205u: goto L_00261DDC;
    case 206u: goto L_00261DE4;
    case 207u: goto L_00261DEC;
    case 208u: goto L_00261E0C;
    case 209u: goto L_00261E20;
    case 210u: goto L_00261E48;
    case 211u: goto L_00261E54;
    case 212u: goto L_00261E5C;
    case 213u: goto L_00261E74;
    case 214u: goto L_00261E90;
    case 215u: goto L_00261EB0;
    case 216u: goto L_00261EB8;
    case 217u: goto L_00261EC0;
    case 218u: goto L_00261ED0;
    case 219u: goto L_00261EDC;
    case 220u: goto L_00261EEC;
    case 221u: goto L_00261F2C;
    case 222u: goto L_00261F44;
    case 223u: goto L_00261F84;
    case 224u: goto L_00262024;
    case 225u: goto L_00262040;
    case 226u: goto L_00262074;
    case 227u: goto L_00262084;
    case 228u: goto L_002620F0;
    case 229u: goto L_00262128;
    case 230u: goto L_00262140;
    case 231u: goto L_00262184;
    case 232u: goto L_002621BC;
    case 233u: goto L_002621D8;
    case 234u: goto L_0026220C;
    case 235u: goto L_00262224;
    case 236u: goto L_00262240;
    case 237u: goto L_0026225C;
    case 238u: goto L_00262264;
    case 239u: goto L_00262320;
    case 240u: goto L_0026233C;
    case 241u: goto L_00262354;
    case 242u: goto L_00262370;
    case 243u: goto L_002623A0;
    case 244u: goto L_002623B4;
    case 245u: goto L_002623D4;
    case 246u: goto L_002623EC;
    case 247u: goto L_002623F8;
    case 248u: goto L_00262410;
    case 249u: goto L_0026249C;
    case 250u: goto L_002624BC;
    case 251u: goto L_002624D0;
    case 252u: goto L_00262524;
    case 253u: goto L_00262584;
    case 254u: goto L_0026258C;
    case 255u: goto L_00262594;
    case 256u: goto L_002625B0;
    case 257u: goto L_002625E4;
    case 258u: goto L_002625F8;
    case 259u: goto L_0026261C;
    case 260u: goto L_00262634;
    case 261u: goto L_00262650;
    case 262u: goto L_0026267C;
    case 263u: goto L_00262710;
    case 264u: goto L_00262728;
    case 265u: goto L_00262730;
    case 266u: goto L_002627A4;
    case 267u: goto L_002627BC;
    case 268u: goto L_002627D4;
    case 269u: goto L_002627DC;
    case 270u: goto L_002627F0;
    case 271u: goto L_00262830;
    case 272u: goto L_00262870;
    case 273u: goto L_00262888;
    case 274u: goto L_00262890;
    case 275u: goto L_00262908;
    case 276u: goto L_00262918;
    case 277u: goto L_00262920;
    case 278u: goto L_0026293C;
    case 279u: goto L_00262944;
    case 280u: goto L_00262960;
    case 281u: goto L_002629AC;
    case 282u: goto L_002629C8;
    case 283u: goto L_002629D4;
    case 284u: goto L_00262A4C;
    case 285u: goto L_00262A7C;
    case 286u: goto L_00262A90;
    case 287u: goto L_00262AF4;
    case 288u: goto L_00262B08;
    case 289u: goto L_00262B20;
    case 290u: goto L_00262B60;
    case 291u: goto L_00262B78;
    case 292u: goto L_00262BA0;
    case 293u: goto L_00262BB0;
    case 294u: goto L_00262BC0;
    case 295u: goto L_00262BD4;
    case 296u: goto L_00262BE0;
    case 297u: goto L_00262BF8;
    case 298u: goto L_00262C40;
    case 299u: goto L_00262C74;
    case 300u: goto L_00262C88;
    case 301u: goto L_00262CD8;
    case 302u: goto L_00262CF0;
    case 303u: goto L_00262D04;
    case 304u: goto L_00262D18;
    case 305u: goto L_00262D20;
    case 306u: goto L_00262D3C;
    case 307u: goto L_00262D44;
    case 308u: goto L_00262D54;
    case 309u: goto L_00262E0C;
    case 310u: goto L_00262E24;
    case 311u: goto L_00262E3C;
    case 312u: goto L_00262E44;
    case 313u: goto L_00262E60;
    case 314u: goto L_00262E9C;
    case 315u: goto L_00262F00;
    case 316u: goto L_00262F3C;
    case 317u: goto L_00262F44;
    case 318u: goto L_00262F60;
    case 319u: goto L_00262FA0;
    case 320u: goto L_00262FB8;
    case 321u: goto L_00262FC0;
    case 322u: goto L_00262FD0;
    case 323u: goto L_00263000;
    case 324u: goto L_00263018;
    case 325u: goto L_00263108;
    case 326u: goto L_00263110;
    case 327u: goto L_00263138;
    case 328u: goto L_00263154;
    case 329u: goto L_00263160;
    case 330u: goto L_002631A0;
    case 331u: goto L_002631C8;
    case 332u: goto L_002631D0;
    case 333u: goto L_002631FC;
    case 334u: goto L_00263204;
    case 335u: goto L_00263220;
    case 336u: goto L_00263238;
    case 337u: goto L_00263298;
    case 338u: goto L_002632A8;
    case 339u: goto L_002632B0;
    case 340u: goto L_002632D8;
    case 341u: goto L_002632F8;
    case 342u: goto L_00263324;
    case 343u: goto L_00263348;
    case 344u: goto L_00263374;
    case 345u: goto L_00263390;
    case 346u: goto L_002633E0;
    case 347u: goto L_0026341C;
    case 348u: goto L_00263440;
    case 349u: goto L_00263454;
    case 350u: goto L_00263490;
    case 351u: goto L_002634A0;
    case 352u: goto L_002634B4;
    case 353u: goto L_00263568;
    case 354u: goto L_00263580;
    case 355u: goto L_00263594;
    case 356u: goto L_002635C8;
    case 357u: goto L_002635E0;
    case 358u: goto L_002635FC;
    case 359u: goto L_00263618;
    case 360u: goto L_00263620;
    case 361u: goto L_00263630;
    case 362u: goto L_00263650;
    case 363u: goto L_00263658;
    case 364u: goto L_00263670;
    case 365u: goto L_00263688;
    case 366u: goto L_00263690;
    case 367u: goto L_00263704;
    case 368u: goto L_0026371C;
    case 369u: goto L_00263734;
    case 370u: goto L_0026373C;
    case 371u: goto L_00263750;
    case 372u: goto L_00263870;
    case 373u: goto L_00263900;
    case 374u: goto L_00263924;
    case 375u: goto L_00263970;
    case 376u: goto L_00263994;
    case 377u: goto L_002639E0;
    case 378u: goto L_00263A60;
    case 379u: goto L_00263A68;
    case 380u: goto L_00263A78;
    case 381u: goto L_00263A84;
    case 382u: goto L_00263A8C;
    case 383u: goto L_00263A98;
    case 384u: goto L_00263AA8;
    case 385u: goto L_00263AB4;
    case 386u: goto L_00263ABC;
    case 387u: goto L_00263AC8;
    case 388u: goto L_00263B50;
    case 389u: goto L_00263B80;
    case 390u: goto L_00263BC0;
    case 391u: goto L_00263C00;
    case 392u: goto L_00263C14;
    case 393u: goto L_00263C28;
    case 394u: goto L_00263C40;
    case 395u: goto L_00263C80;
    case 396u: goto L_00263CB0;
    case 397u: goto L_00263D14;
    case 398u: goto L_00263D50;
    case 399u: goto L_00263D60;
    case 400u: goto L_00263D70;
    case 401u: goto L_00263DE0;
    case 402u: goto L_00263E24;
    case 403u: goto L_00263E38;
    case 404u: goto L_00263E54;
    case 405u: goto L_00263E60;
    case 406u: goto L_00263E74;
    case 407u: goto L_00263E80;
    case 408u: goto L_00263F78;
    case 409u: goto L_00263F94;
    case 410u: goto L_00263FF4;
    case 411u: goto L_00263FFC;
    default: bad_entry(c, 0x00260000u); return;
    }
L_00260000:
    set32(c.r[17], 0u + 2u);
    c.budget -= 1;
L_00260004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00260038; } }
    goto L_0026000C;
L_00260008:
    c.budget -= 1;
L_0026000C:
    c.budget -= 1;
L_00260010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260018u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x00260018u) [[unlikely]] return; }
    goto L_00260018;
L_00260014:
    c.budget -= 1;
L_00260018:
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_0026001C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00260020:
    mmi::divu(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.budget -= 1;
L_00260024:
    c.budget -= 1;
L_00260028:
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[17], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.budget -= 4;
L_00260038:
    c.r[2].d[0] = c.r[17].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00260048; } }
    set32(c.r[17], 0u + 3u);
    c.budget -= 1;
L_00260048:
    st8((c.r[20].w[0] + 518u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[20].w[0] + 517u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
L_00260054:
    st8((c.r[20].w[0] + 571u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 1608u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 124u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002600A0; } }
    goto L_00260068;
L_00260064:
    c.budget -= 1;
L_00260068:
    set32(c.r[3], ld32((c.r[20].w[0] + 1236u)));
    c.budget -= 1;
L_0026006C:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    c.r[4].d[0] = ~(c.r[4].d[0] | 0ull);
    set32(c.r[2], 0u + 37u);
    c.budget -= 4;
L_0026007C:
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st32((c.r[20].w[0] + 1236u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[20].w[0] + 8658u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002600A0; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 1236u)));
    c.r[2].d[0] = c.r[2].d[0] << 33;
    c.r[2].d[0] = c.r[2].d[0] >> 33;
    st32((c.r[20].w[0] + 1236u), c.r[2].w[0]);
    c.budget -= 4;
L_002600A0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002600ACu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0075(c, 31u, depth + 1u); else { c.pc = 0x002D4A30u; return; } if (c.pc != 0x002600ACu) [[unlikely]] return; }
L_002600AC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002600B8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0075(c, 31u, depth + 1u); else { c.pc = 0x002D4A30u; return; } if (c.pc != 0x002600B8u) [[unlikely]] return; }
L_002600B8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002600C4u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0075(c, 31u, depth + 1u); else { c.pc = 0x002D4A30u; return; } if (c.pc != 0x002600C4u) [[unlikely]] return; }
L_002600C4:
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[20].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st8((c.r[20].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 49u);
    st32((c.r[20].w[0] + 1488u), 0u);
    st32((c.r[20].w[0] + 504u), 0u);
    st32((c.r[20].w[0] + 508u), 0u);
    st32((c.r[20].w[0] + 1492u), 0u);
    st32((c.r[20].w[0] + 1508u), 0u);
    st32((c.r[20].w[0] + 104u), 0u);
    st32((c.r[20].w[0] + 108u), 0u);
    st32((c.r[20].w[0] + 736u), 0u);
    st32((c.r[20].w[0] + 740u), 0u);
    c.budget -= 15;
L_00260100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260108u); st8((c.r[20].w[0] + 787u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x00260108u) [[unlikely]] return; }
L_00260108:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260114u); set32(c.r[5], 0u + 49u);  if (depth < kMaxDepth) unit_003A(c, 68u, depth + 1u); else { c.pc = 0x001E9DF0u; return; } if (c.pc != 0x00260114u) [[unlikely]] return; }
L_00260114:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 571u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 16064u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00260138u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00260138u) [[unlikely]] return; }
L_00260138:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 822u)));
    set32(c.r[2], 0u - 24576u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 12u);
    c.r[3].d[0] = c.r[3].d[0] & 3584ull;
    st16((c.r[20].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 822u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260160u); st16((c.r[20].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x00260160u) [[unlikely]] return; }
L_00260160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260168u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 232u, depth + 1u); else { c.pc = 0x0023BE60u; return; } if (c.pc != 0x00260168u) [[unlikely]] return; }
L_00260168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260170u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 432u, depth + 1u); else { c.pc = 0x002B36A0u; return; } if (c.pc != 0x00260170u) [[unlikely]] return; }
L_00260170:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00260190:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 12u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 571u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002601F0; } }
    c.f[0] = ld32((c.r[4].w[0] + 736u));
    st32((c.r[4].w[0] + 740u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 8292u));
    c.f[0] = ld32((c.r[4].w[0] + 736u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 736u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 21u)));
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002601F0; } }
    set32(c.r[2], 0u - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 712u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002601E8u); st8((c.r[4].w[0] + 517u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0058(c, 109u, depth + 1u); else { c.pc = 0x00260C40u; return; } if (c.pc != 0x002601E8u) [[unlikely]] return; }
L_002601E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00260210; } }
L_002601F0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 571u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 16112u);
    c.budget -= 3;
L_002601FC:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_00260204:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00260210u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00260210u) [[unlikely]] return; }
L_00260210:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00260220:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 578u)));
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00260280; } }
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260258u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 372u, depth + 1u); else { c.pc = 0x00263870u; return; } if (c.pc != 0x00260258u) [[unlikely]] return; }
L_00260258:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026026Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 372u, depth + 1u); else { c.pc = 0x00263870u; return; } if (c.pc != 0x0026026Cu) [[unlikely]] return; }
L_0026026C:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002602A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 4u);  if (t) { goto L_002602A0; } }
L_00260280:
    c.r[1].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002602A0; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260298u); set32(c.r[16], 0u + 5u);  if (depth < kMaxDepth) unit_0058(c, 372u, depth + 1u); else { c.pc = 0x00263870u; return; } if (c.pc != 0x00260298u) [[unlikely]] return; }
L_00260298:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_002602A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F590000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    set32(c.r[3], 0u + 2u);
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[17].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDAE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 5243ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002602CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 377u, depth + 1u); else { c.pc = 0x002639E0u; return; } if (c.pc != 0x002602CCu) [[unlikely]] return; }
L_002602CC:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002602E4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x002602E4u) [[unlikely]] return; }
L_002602E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00260300:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260318u); set32(c.r[5], c.r[16].w[0] + 1440u);  if (depth < kMaxDepth) unit_005A(c, 199u, depth + 1u); else { c.pc = 0x00269F90u; return; } if (c.pc != 0x00260318u) [[unlikely]] return; }
    goto L_00260318;
L_00260314:
    set32(c.r[5], c.r[16].w[0] + 1440u);
    c.budget -= 1;
L_00260318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260320u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x00260320u) [[unlikely]] return; }
L_00260320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260328u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 113u, depth + 1u); else { c.pc = 0x00260D40u; return; } if (c.pc != 0x00260328u) [[unlikely]] return; }
L_00260328:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00260340; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8325u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00260350; } }
L_00260340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260348u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 109u, depth + 1u); else { c.pc = 0x00260C40u; return; } if (c.pc != 0x00260348u) [[unlikely]] return; }
L_00260348:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002603B0; } }
L_00260350:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3ED10000u);
    c.r[4].d[0] = c.r[3].d[0] | 60293ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 600u)));
    c.f[2] = c.r[4].w[0];
    c.r[3].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] << 2);  if (t) { goto L_00260398; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] + 5120u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.budget -= 10;
L_00260398:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002603B0; } }
    st32((c.r[16].w[0] + 104u), c.f[2]);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 2;
L_002603B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002603C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 578u)));
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00260420; } }
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002603F8u); set32(c.r[16], 0u + 17u);  if (depth < kMaxDepth) unit_0058(c, 372u, depth + 1u); else { c.pc = 0x00263870u; return; } if (c.pc != 0x002603F8u) [[unlikely]] return; }
L_002603F8:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026040Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 372u, depth + 1u); else { c.pc = 0x00263870u; return; } if (c.pc != 0x0026040Cu) [[unlikely]] return; }
L_0026040C:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00260478; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 21u);  if (t) { goto L_00260478; } }
L_00260420:
    c.r[1].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00260478; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260438u); set32(c.r[16], 0u + 23u);  if (depth < kMaxDepth) unit_0058(c, 372u, depth + 1u); else { c.pc = 0x00263870u; return; } if (c.pc != 0x00260438u) [[unlikely]] return; }
L_00260438:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026044Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 372u, depth + 1u); else { c.pc = 0x00263870u; return; } if (c.pc != 0x0026044Cu) [[unlikely]] return; }
L_0026044C:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00260470; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00260468; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00260478; } }
L_00260468:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 28u);  if (t) { goto L_00260478; } }
L_00260470:
    set32(c.r[16], 0u + 27u);
    c.budget -= 2;
L_00260478:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260484u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 390u, depth + 1u); else { c.pc = 0x00263BC0u; return; } if (c.pc != 0x00260484u) [[unlikely]] return; }
L_00260484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026048Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 388u, depth + 1u); else { c.pc = 0x00263B50u; return; } if (c.pc != 0x0026048Cu) [[unlikely]] return; }
L_0026048C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FAE0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 5243ull;
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002604A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 377u, depth + 1u); else { c.pc = 0x002639E0u; return; } if (c.pc != 0x002604A8u) [[unlikely]] return; }
L_002604A8:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002604C0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x002604C0u) [[unlikely]] return; }
L_002604C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002604E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.budget -= 1;
L_002604E4:
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 808u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00260510; } }
    set32(c.r[3], 0u + 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1088u), c.r[2].w[0]);
    c.budget -= 5;
L_00260510:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002605F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260524u); set32(c.r[5], c.r[16].w[0] + 1440u);  if (depth < kMaxDepth) unit_005A(c, 199u, depth + 1u); else { c.pc = 0x00269F90u; return; } if (c.pc != 0x00260524u) [[unlikely]] return; }
L_00260524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026052Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x0026052Cu) [[unlikely]] return; }
L_0026052C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260534u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 113u, depth + 1u); else { c.pc = 0x00260D40u; return; } if (c.pc != 0x00260534u) [[unlikely]] return; }
L_00260534:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00260550; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260548u);  if (depth < kMaxDepth) unit_0058(c, 109u, depth + 1u); else { c.pc = 0x00260C40u; return; } if (c.pc != 0x00260548u) [[unlikely]] return; }
L_00260548:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00260698; } }
L_00260550:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xBD0B0000u);  if (t) { goto L_00260578; } }
    c.r[2].d[0] = c.r[2].d[0] | 17302ull;
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 3;
L_00260578:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8325u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002605B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    set32(c.r[7], 0u + 25u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 579u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002605B0u); set32(c.r[6], c.r[2].w[0] + 37u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x002605B0u) [[unlikely]] return; }
L_002605B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00260698; } }
L_002605B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002605C0u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002605C0u) [[unlikely]] return; }
L_002605C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002605C8u); set32(c.r[4], c.r[16].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x002605C8u) [[unlikely]] return; }
L_002605C8:
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = ld32((c.r[16].w[0] + 8292u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002605E4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002605E4u) [[unlikely]] return; }
L_002605E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002605ECu); set32(c.r[4], c.r[16].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002605ECu) [[unlikely]] return; }
L_002605EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00260698; } }
    c.budget -= 1;
L_002605F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260604u); set32(c.r[5], c.r[16].w[0] + 1440u);  if (depth < kMaxDepth) unit_005A(c, 199u, depth + 1u); else { c.pc = 0x00269F90u; return; } if (c.pc != 0x00260604u) [[unlikely]] return; }
L_00260604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026060Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x0026060Cu) [[unlikely]] return; }
L_0026060C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260614u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 113u, depth + 1u); else { c.pc = 0x00260D40u; return; } if (c.pc != 0x00260614u) [[unlikely]] return; }
L_00260614:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00260630; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8325u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00260640; } }
    c.budget -= 1;
L_00260630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260638u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 109u, depth + 1u); else { c.pc = 0x00260C40u; return; } if (c.pc != 0x00260638u) [[unlikely]] return; }
L_00260638:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00260698; } }
L_00260640:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[3] = ld32((c.r[16].w[0] + 1440u));
    c.f[2] = ld32((c.r[16].w[0] + 1444u));
    c.f[1] = ld32((c.r[16].w[0] + 1448u));
    c.f[0] = ld32((c.r[16].w[0] + 1452u));
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 579u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_00260680; } }
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260680u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00260680u) [[unlikely]] return; }
L_00260680:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260698u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_005A(c, 182u, depth + 1u); else { c.pc = 0x00269D20u; return; } if (c.pc != 0x00260698u) [[unlikely]] return; }
L_00260698:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002606B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002606E8; } }
    set32(c.r[2], 0u + 50u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002606E8; } }
L_002606D8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002606E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    st32((c.r[16].w[0] + 728u), c.r[2].w[0]);
    set32(c.r[2], 0u + 20u);
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260704u); st32((c.r[16].w[0] + 1268u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x00260704u) [[unlikely]] return; }
L_00260704:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + 16176u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE60000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    set32(c.r[4], c.r[16].w[0] + 1392u);
    set32(c.r[5], c.r[16].w[0] + 8624u);
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026073Cu); st32((c.r[16].w[0] + 52u), 0u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x0026073Cu) [[unlikely]] return; }
L_0026073C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 35u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 40u);  if (t) { goto L_00260758; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00260780; } }
    c.budget -= 1;
L_00260758:
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 10;
L_00260780:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 44u), 0u);
    st32((c.r[29].w[0] + 40u), 0u);
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002607A0u); st32((c.r[29].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_0046(c, 14u, depth + 1u); else { c.pc = 0x00218290u; return; } if (c.pc != 0x002607A0u) [[unlikely]] return; }
L_002607A0:
    set32(c.r[4], c.r[16].w[0] + 2096u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002607ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0045(c, 210u, depth + 1u); else { c.pc = 0x00216220u; return; } if (c.pc != 0x002607ACu) [[unlikely]] return; }
L_002607AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002607C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002607D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 113u, depth + 1u); else { c.pc = 0x00260D40u; return; } if (c.pc != 0x002607D4u) [[unlikely]] return; }
L_002607D4:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002607F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002607E8u);  if (depth < kMaxDepth) unit_0058(c, 109u, depth + 1u); else { c.pc = 0x00260C40u; return; } if (c.pc != 0x002607E8u) [[unlikely]] return; }
L_002607E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002608E0; } }
L_002607F0:
    c.f[2] = ld32((c.r[16].w[0] + 8292u));
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 728u), c.f[1]);  if (t) { goto L_00260848; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    st32((c.r[16].w[0] + 728u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 2096u);  if (t) { goto L_00260838; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260830u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0045(c, 210u, depth + 1u); else { c.pc = 0x00216220u; return; } if (c.pc != 0x00260830u) [[unlikely]] return; }
L_00260830:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00260848; } }
L_00260838:
    set32(c.r[4], c.r[16].w[0] + 2096u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260844u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0045(c, 210u, depth + 1u); else { c.pc = 0x00216220u; return; } if (c.pc != 0x00260844u) [[unlikely]] return; }
L_00260844:
    c.budget -= 1;
L_00260848:
    set32(c.r[3], ld32((c.r[16].w[0] + 852u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[4], c.r[16].w[0] + 1392u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260860u); st32((c.r[16].w[0] + 852u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x00260860u) [[unlikely]] return; }
L_00260860:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 1392u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260874u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005A(c, 210u, depth + 1u); else { c.pc = 0x0026A1A0u; return; } if (c.pc != 0x00260874u) [[unlikely]] return; }
L_00260874:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE60000u);
    c.r[3].d[0] = c.r[3].d[0] | 26214ull;
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002608B8; } }
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002608E0; } }
    goto L_002608AC;
L_002608A8:
    c.budget -= 1;
L_002608AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 104u), c.f[2]);  if (t) { goto L_002608E0; } }
    c.budget -= 1;
L_002608B8:
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);  if (t) { goto L_002608E0; } }
    st32((c.r[16].w[0] + 104u), c.f[2]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    c.budget -= 4;
L_002608E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002608F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 16u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 568u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00260940; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F590000u);
    c.r[3].d[0] = c.r[2].d[0] | 39322ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDAE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 5243ull;
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260938u); set32(c.r[16], 0u + 31u);  if (depth < kMaxDepth) unit_0058(c, 377u, depth + 1u); else { c.pc = 0x002639E0u; return; } if (c.pc != 0x00260938u) [[unlikely]] return; }
L_00260938:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00260958; } }
L_00260940:
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260950u); set32(c.r[16], 0u + 27u);  if (depth < kMaxDepth) unit_0058(c, 372u, depth + 1u); else { c.pc = 0x00263870u; return; } if (c.pc != 0x00260950u) [[unlikely]] return; }
L_00260950:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_00260958:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F590000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    set32(c.r[3], 0u + 2u);
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[18].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDAE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 5243ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260984u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 377u, depth + 1u); else { c.pc = 0x002639E0u; return; } if (c.pc != 0x00260984u) [[unlikely]] return; }
L_00260984:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026099Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x0026099Cu) [[unlikely]] return; }
L_0026099C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002609C0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 568u));
    set32(c.r[2], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 128u);  if (t) { goto L_002609E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st8((c.r[4].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 1088u), c.r[2].w[0]);
    c.budget -= 4;
L_002609E0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00260300u | kUnwind; return; } goto L_00260300; }
L_002609F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260A18u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0074(c, 336u, depth + 1u); else { c.pc = 0x002D37E0u; return; } if (c.pc != 0x00260A18u) [[unlikely]] return; }
L_00260A18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00260A30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260A28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0074(c, 336u, depth + 1u); else { c.pc = 0x002D37E0u; return; } if (c.pc != 0x00260A28u) [[unlikely]] return; }
L_00260A28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00260A40; } }
L_00260A30:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00260A48; } }
    c.budget -= 1;
L_00260A40:
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00260A48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[4], c.r[16].w[0] + 1392u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[16].w[0] + 8624u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260A6Cu); st32((c.r[16].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00260A6Cu) [[unlikely]] return; }
L_00260A6C:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260A84u); set32(c.r[7], 0u + 20u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x00260A84u) [[unlikely]] return; }
L_00260A84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00260AA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260AB8u); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 202u, depth + 1u); else { c.pc = 0x0026A010u; return; } if (c.pc != 0x00260AB8u) [[unlikely]] return; }
L_00260AB8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00260B00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260ACCu);  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x00260ACCu) [[unlikely]] return; }
L_00260ACC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00260B08; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 39u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260AF8u); st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x00260AF8u) [[unlikely]] return; }
L_00260AF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00260B08; } }
L_00260B00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260B08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x00260B08u) [[unlikely]] return; }
L_00260B08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260B10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 113u, depth + 1u); else { c.pc = 0x00260D40u; return; } if (c.pc != 0x00260B10u) [[unlikely]] return; }
L_00260B10:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00260B28; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8325u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00260B38; } }
L_00260B28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260B30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 109u, depth + 1u); else { c.pc = 0x00260C40u; return; } if (c.pc != 0x00260B30u) [[unlikely]] return; }
L_00260B30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00260BF0; } }
L_00260B38:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00260BF0; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260B60u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x00260B60u) [[unlikely]] return; }
L_00260B60:
    c.r[3].d[0] = c.r[2].d[0] & 31ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 16208u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260B84u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00260B84u) [[unlikely]] return; }
L_00260B84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260B8Cu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x00260B8Cu) [[unlikely]] return; }
L_00260B8C:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260B98u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0045(c, 210u, depth + 1u); else { c.pc = 0x00216220u; return; } if (c.pc != 0x00260B98u) [[unlikely]] return; }
L_00260B98:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00260BF0; } }
    set32(c.r[2], 0u + 2u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00260BE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260BD4u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00260BD4u) [[unlikely]] return; }
L_00260BD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00260BF0; } }
    c.budget -= 1;
L_00260BE0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260BECu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x00260BECu) [[unlikely]] return; }
L_00260BEC:
    c.budget -= 1;
L_00260BF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00260C00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 709u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00260C18; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 709u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00260C38; } }
L_00260C18:
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    set32(c.r[3], 0u + 3u);
    st8((c.r[4].w[0] + 8287u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 8327u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 1236u), 0u);
    c.budget -= 8;
L_00260C38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00260C40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st8((c.r[4].w[0] + 8287u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 8327u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 517u)));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00260C78; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260C78u); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_0058(c, 121u, depth + 1u); else { c.pc = 0x00260F10u; return; } if (c.pc != 0x00260C78u) [[unlikely]] return; }
L_00260C78:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 517u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00260C98; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260C94u); set32(c.r[6], 0u + 129u);  if (depth < kMaxDepth) unit_0058(c, 121u, depth + 1u); else { c.pc = 0x00260F10u; return; } if (c.pc != 0x00260C94u) [[unlikely]] return; }
L_00260C94:
    c.budget -= 1;
L_00260C98:
    set32(c.r[3], 0u + 11u);
    st8((c.r[16].w[0] + 571u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 30u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1236u), 0u);
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00260CD0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_00260CD0; } }
    st8((c.r[4].w[0] + 22u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00260CD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00260CE0:
    c.f[2] = ld32((c.r[4].w[0] + 712u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00260D10; } }
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 712u), c.f[0]);  if (t) { goto L_00260D38; } }
L_00260D10:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_00260D38; } }
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_00260D38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00260D40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 518u)));
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00260DD8; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 517u)));
    c.r[3].d[0] = c.r[6].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00260D98; } }
    set32(c.r[2], 0u - 2u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    st8((c.r[16].w[0] + 517u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 517u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260D94u); st8((c.r[16].w[0] + 517u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0058(c, 121u, depth + 1u); else { c.pc = 0x00260F10u; return; } if (c.pc != 0x00260D94u) [[unlikely]] return; }
L_00260D94:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00260D98:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 517u)));
    c.r[3].d[0] = c.r[5].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00260E88; } }
    set32(c.r[2], 0u - 3u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    st8((c.r[16].w[0] + 517u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 517u)));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260DD0u); st8((c.r[16].w[0] + 517u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0058(c, 121u, depth + 1u); else { c.pc = 0x00260F10u; return; } if (c.pc != 0x00260DD0u) [[unlikely]] return; }
L_00260DD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00260E88; } }
L_00260DD8:
    c.r[3].d[0] = c.r[5].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00260E88; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 571u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] + 23408u);
    c.f[0] = ld32((c.r[16].w[0] + 736u));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00260E88; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 517u)));
    c.r[3].d[0] = c.r[6].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00260E48; } }
    set32(c.r[2], 0u - 2u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    st8((c.r[16].w[0] + 517u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 517u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260E40u); st8((c.r[16].w[0] + 517u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0058(c, 121u, depth + 1u); else { c.pc = 0x00260F10u; return; } if (c.pc != 0x00260E40u) [[unlikely]] return; }
L_00260E40:
    set32(c.r[2], 0u + 2u);
    c.budget -= 2;
L_00260E48:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 517u)));
    c.r[3].d[0] = c.r[5].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00260E88; } }
    set32(c.r[2], 0u - 3u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    st8((c.r[16].w[0] + 517u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 517u)));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260E80u); st8((c.r[16].w[0] + 517u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0058(c, 121u, depth + 1u); else { c.pc = 0x00260F10u; return; } if (c.pc != 0x00260E80u) [[unlikely]] return; }
L_00260E80:
    set32(c.r[2], 0u + 2u);
    c.budget -= 2;
L_00260E88:
    c.f[2] = ld32((c.r[16].w[0] + 712u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00260F00; } }
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 712u), c.f[0]);  if (t) { goto L_00260F00; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 517u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00260ED8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00260ECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260ED4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 121u, depth + 1u); else { c.pc = 0x00260F10u; return; } if (c.pc != 0x00260ED4u) [[unlikely]] return; }
L_00260ED4:
    c.budget -= 1;
L_00260ED8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 517u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00260EF8; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260EF4u); set32(c.r[6], 0u + 129u);  if (depth < kMaxDepth) unit_0058(c, 121u, depth + 1u); else { c.pc = 0x00260F10u; return; } if (c.pc != 0x00260EF4u) [[unlikely]] return; }
L_00260EF4:
    c.budget -= 1;
L_00260EF8:
    set32(c.r[2], 0u + 3u);
    c.budget -= 2;
L_00260F00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00260F10:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].d[0] = c.r[6].d[0] & 128ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.f[0] = ld32((c.r[4].w[0] + 2096u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2100u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 2104u));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260F60u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0045(c, 208u, depth + 1u); else { c.pc = 0x00216100u; return; } if (c.pc != 0x00260F60u) [[unlikely]] return; }
L_00260F60:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 42u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00260F98; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 82u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00260F98; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00260F98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260F98u);  if (depth < kMaxDepth) unit_004D(c, 64u, depth + 1u); else { c.pc = 0x00235140u; return; } if (c.pc != 0x00260F98u) [[unlikely]] return; }
L_00260F98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260FA4u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x00260FA4u) [[unlikely]] return; }
L_00260FA4:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00260FC8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00260FD8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_00260FD8; } }
L_00260FC8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260FD4u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x00260FD4u) [[unlikely]] return; }
L_00260FD4:
    c.budget -= 1;
L_00260FD8:
    c.r[3].d[0] = c.r[20].d[0] & 127ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[20], c.r[3].w[0] + 3u);  if (t) { goto L_00260FF8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1608u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1236u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[4].d[0] & c.r[3].d[0];  if (t) { goto L_00261008; } }
L_00260FF8:
    set32(c.r[3], ld32((c.r[16].w[0] + 1608u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1236u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 84u)));
    c.r[19].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
L_00261008:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00261010:
    set32(c.r[3], 0u + 1u);
    set32(c.r[17], c.r[3].w[0] << (c.r[18].w[0] & 31u));
    c.r[3].d[0] = c.r[19].d[0] & c.r[17].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00261070; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1608u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 88u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[17].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00261060; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261040u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x00261040u) [[unlikely]] return; }
L_00261040:
    c.r[3].d[0] = c.r[2].d[0] & 31ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00261060; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026105Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 6u, depth + 1u); else { c.pc = 0x0017C0F0u; return; } if (c.pc != 0x0026105Cu) [[unlikely]] return; }
L_0026105C:
    c.budget -= 1;
L_00261060:
    set32(c.r[3], ld32((c.r[16].w[0] + 1236u)));
    c.r[4].d[0] = ~(c.r[17].d[0] | 0ull);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st32((c.r[16].w[0] + 1236u), c.r[3].w[0]);
    c.budget -= 4;
L_00261070:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00261010u | kUnwind; return; } goto L_00261010; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002610A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002610D0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0075(c, 31u, depth + 1u); else { c.pc = 0x002D4A30u; return; } if (c.pc != 0x002610D0u) [[unlikely]] return; }
L_002610D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002610D8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 44u, depth + 1u); else { c.pc = 0x002D5100u; return; } if (c.pc != 0x002610D8u) [[unlikely]] return; }
L_002610D8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1625u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00261100; } }
    c.r[4].d[0] = ld16((c.r[20].w[0] + 564u));
    set32(c.r[3], 0u - 129u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002617B8; } }
    c.budget -= 1;
L_00261100:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 564u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], ld32((c.r[20].w[0] + 600u)));  if (t) { goto L_00261120; } }
    set32(c.r[17], 0u + 19u);
    set32(c.r[21], 0u + 16u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00261138; } }
L_00261120:
    c.r[21].d[0] = ld8((c.r[18].w[0] + 6u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261130u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 371u, depth + 1u); else { c.pc = 0x00263750u; return; } if (c.pc != 0x00261130u) [[unlikely]] return; }
L_00261130:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00261138:
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] > 0;  if (t) { goto L_00261148; } }
    set32(c.r[21], 0u + 1u);
    c.budget -= 2;
L_00261148:
    st8((c.r[20].w[0] + 570u), static_cast<std::uint8_t>(c.r[21].w[0]));
    st8((c.r[19].w[0] + 570u), static_cast<std::uint8_t>(c.r[21].w[0]));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 562u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[21].d[0] & 255ull;  if (t) { goto L_00261168; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 264u)));
    st8((c.r[2].w[0] + 570u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00261168:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 14u);  if (t) { goto L_00261198; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[20].w[0] + 568u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st8((c.r[20].w[0] + 578u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[20].w[0] + 8287u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261190u); st8((c.r[20].w[0] + 8327u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0057(c, 363u, depth + 1u); else { c.pc = 0x0025FE10u; return; } if (c.pc != 0x00261190u) [[unlikely]] return; }
L_00261190:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002617B8; } }
L_00261198:
    c.r[4].d[0] = ld16((c.r[20].w[0] + 564u));
    c.r[3].d[0] = c.r[4].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[4].d[0] & 128ull;  if (t) { goto L_002611D8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002611D8; } }
    c.r[2].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002611D0; } }
    c.r[2].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], 0u + 10u);  if (t) { goto L_002611D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261238; } }
L_002611D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 15u);  if (t) { goto L_00261238; } }
L_002611D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00261210; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 8658u));
    c.r[2].d[0] = c.r[2].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[4].d[0] & 32ull;  if (t) { goto L_00261210; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00261210; } }
    st8((c.r[20].w[0] + 808u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[20].w[0] + 1216u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 15u);  if (t) { goto L_00261238; } }
    c.budget -= 1;
L_00261210:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 834u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00261228; } }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 15u);  if (t) { goto L_00261238; } }
L_00261228:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 832u)));
    st16((c.r[20].w[0] + 834u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[20].w[0] + 830u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
L_00261238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261240u);  if (depth < kMaxDepth) unit_00AC(c, 34u, depth + 1u); else { c.pc = 0x003B0320u; return; } if (c.pc != 0x00261240u) [[unlikely]] return; }
L_00261240:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00261250; } }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], 0u + 15u);
    c.budget -= 2;
L_00261250:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1625u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00261300; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 1608u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 114u));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00261298; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 851u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00261298; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026128Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 251u, depth + 1u); else { c.pc = 0x001E7BE0u; return; } if (c.pc != 0x0026128Cu) [[unlikely]] return; }
L_0026128C:
    set32(c.r[3], 0u - 1u);
    st8((c.r[20].w[0] + 8513u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[20].w[0] + 8512u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00261298:
    c.r[4].d[0] = ld8((c.r[20].w[0] + 8658u));
    set32(c.r[3], 0u + 40u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 128u);  if (t) { goto L_002612D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st8((c.r[20].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002612BCu); st32((c.r[20].w[0] + 1088u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0036(c, 51u, depth + 1u); else { c.pc = 0x001D9170u; return; } if (c.pc != 0x002612BCu) [[unlikely]] return; }
L_002612BC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1625u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_002612D0; } }
    st8((c.r[20].w[0] + 1625u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002612D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002617B8; } }
L_002612D8:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[3].w[0] << (c.r[17].w[0] & 31u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[3].d[0] = c.r[3].d[0] | 33023ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00261300; } }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 23u);  if (t) { goto L_002615A0; } }
L_00261300:
    set32(c.r[5], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[5].d[0];  if (t) { goto L_002617B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8693u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00261330; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261324u);  if (depth < kMaxDepth) unit_0036(c, 51u, depth + 1u); else { c.pc = 0x001D9170u; return; } if (c.pc != 0x00261324u) [[unlikely]] return; }
L_00261324:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002617B8; } }
    c.budget -= 1;
L_00261330:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00261358; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 8658u));
    set32(c.r[2], 0u + 35u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 40u);  if (t) { goto L_00261358; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261398; } }
    c.budget -= 1;
L_00261358:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00261370; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261370u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x00261370u) [[unlikely]] return; }
L_00261370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261378u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 51u, depth + 1u); else { c.pc = 0x001D9170u; return; } if (c.pc != 0x00261378u) [[unlikely]] return; }
L_00261378:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1625u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_00261390; } }
    st8((c.r[20].w[0] + 1625u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00261390:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002617B8; } }
L_00261398:
    set32(c.r[4], ld32((c.r[19].w[0] + 264u)));
    c.r[3].d[0] = ld8((c.r[20].w[0] + 515u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 515u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002613C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[20].d[0];  if (t) { goto L_002613C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002613BCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x002613BCu) [[unlikely]] return; }
L_002613BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002613D8; } }
    c.budget -= 1;
L_002613C8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002613D4u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x002613D4u) [[unlikely]] return; }
    goto L_002613D4;
L_002613D0:
    set32(c.r[5], 0u + 9u);
    c.budget -= 1;
L_002613D4:
    c.budget -= 1;
L_002613D8:
    c.f[1] = ld32((c.r[20].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00261420; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 568u));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 21u);  if (t) { goto L_00261410; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261420; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00261420; } }
L_00261410:
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] | 1ull;
    c.r[17].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 4;
L_00261420:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 808u)));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00261450; } }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[20].w[0] + 808u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st8((c.r[20].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[20].w[0] + 1088u), c.r[2].w[0]);
    set32(c.r[17], 0u + 1u);
    c.budget -= 8;
L_00261450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261458u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 58u, depth + 1u); else { c.pc = 0x001E93E0u; return; } if (c.pc != 0x00261458u) [[unlikely]] return; }
L_00261458:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00261520; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 564u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00261480; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 808u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261520; } }
L_00261480:
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], 0u + 16u);  if (t) { goto L_002614A0; } }
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002614C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 18u);  if (t) { goto L_002614C0; } }
L_002614A0:
    set32(c.r[2], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 18u);  if (t) { goto L_002614B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002614C0; } }
    c.budget -= 1;
L_002614B8:
    set32(c.r[4], 0u + 17u);
    c.budget -= 2;
L_002614C0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002614F0; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 749u));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002614F0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 808u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261518; } }
L_002614F0:
    set32(c.r[2], 0u - 1u);
    st8((c.r[20].w[0] + 808u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 128u);
    st8((c.r[20].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[20].w[0] + 1088u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00261518; } }
    set32(c.r[4], 0u + 17u);
    c.budget -= 1;
L_00261518:
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_00261520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261528u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 128u, depth + 1u); else { c.pc = 0x001D5A40u; return; } if (c.pc != 0x00261528u) [[unlikely]] return; }
L_00261528:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00261580; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 24576ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00261580; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261548u);  if (depth < kMaxDepth) unit_0035(c, 128u, depth + 1u); else { c.pc = 0x001D5A40u; return; } if (c.pc != 0x00261548u) [[unlikely]] return; }
L_00261548:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261554u); set32(c.r[4], c.r[20].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00261554u) [[unlikely]] return; }
L_00261554:
    set32(c.r[19], c.r[19].w[0] << 14);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261560u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00261560u) [[unlikely]] return; }
L_00261560:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 574u)));
    c.r[3].d[0] = c.r[19].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[4], c.r[20].w[0] + 8592u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026157Cu); st16((c.r[20].w[0] + 574u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0026157Cu) [[unlikely]] return; }
L_0026157C:
    c.budget -= 1;
L_00261580:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1625u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 128u);  if (t) { goto L_002615A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st8((c.r[20].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[20].w[0] + 1088u), c.r[2].w[0]);
    c.budget -= 4;
L_002615A0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00261630; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 851u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00261618; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1625u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00261618; } }
    st8((c.r[20].w[0] + 711u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002615D8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002615E4u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_003A(c, 27u, depth + 1u); else { c.pc = 0x001E89E0u; return; } if (c.pc != 0x002615E4u) [[unlikely]] return; }
L_002615E4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002615D8u | kUnwind; return; } goto L_002615D8; } }
    set32(c.r[3], 0u + 32u);
    set32(c.r[2], 0u + 45u);
    st8((c.r[20].w[0] + 851u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[20].w[0] + 8658u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261630; } }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 18u);  if (t) { goto L_00261630; } }
L_00261618:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261624u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 251u, depth + 1u); else { c.pc = 0x001E7BE0u; return; } if (c.pc != 0x00261624u) [[unlikely]] return; }
L_00261624:
    set32(c.r[2], 0u - 1u);
    st8((c.r[20].w[0] + 8513u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[20].w[0] + 8512u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00261630:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026163Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0075(c, 31u, depth + 1u); else { c.pc = 0x002D4A30u; return; } if (c.pc != 0x0026163Cu) [[unlikely]] return; }
L_0026163C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261648u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0075(c, 31u, depth + 1u); else { c.pc = 0x002D4A30u; return; } if (c.pc != 0x00261648u) [[unlikely]] return; }
L_00261648:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261654u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0075(c, 31u, depth + 1u); else { c.pc = 0x002D4A30u; return; } if (c.pc != 0x00261654u) [[unlikely]] return; }
L_00261654:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002616F8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 242u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002616F8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8663u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002616F8; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 8658u));
    set32(c.r[2], 0u + 42u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 24u);  if (t) { goto L_002616D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002616A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002616F8; } }
L_002616A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1964u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002616F8; } }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[20].w[0] + 516u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44FA0000u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 1088u), c.r[2].w[0]);  if (t) { goto L_002616F8; } }
L_002616D0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1964u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002616F8; } }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[20].w[0] + 516u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44FA0000u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[20].w[0] + 1088u), c.r[2].w[0]);
    c.budget -= 6;
L_002616F8:
    st8((c.r[20].w[0] + 568u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[20].w[0] + 578u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3584ull;
    st16((c.r[20].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    st16((c.r[20].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[20].w[0] + 800u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 850u));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00261730; } }
    st8((c.r[20].w[0] + 745u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00261730:
    st8((c.r[20].w[0] + 787u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 766u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st8((c.r[20].w[0] + 8287u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st8((c.r[20].w[0] + 8327u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 48u);
    st32((c.r[20].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261758u); st32((c.r[20].w[0] + 1220u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003A(c, 69u, depth + 1u); else { c.pc = 0x001E9EF0u; return; } if (c.pc != 0x00261758u) [[unlikely]] return; }
L_00261758:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261764u); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_003A(c, 68u, depth + 1u); else { c.pc = 0x001E9DF0u; return; } if (c.pc != 0x00261764u) [[unlikely]] return; }
L_00261764:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261770u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000D(c, 223u, depth + 1u); else { c.pc = 0x001371F0u; return; } if (c.pc != 0x00261770u) [[unlikely]] return; }
L_00261770:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026177Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 50u, depth + 1u); else { c.pc = 0x001D9100u; return; } if (c.pc != 0x0026177Cu) [[unlikely]] return; }
L_0026177C:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 568u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 16240u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002617A0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002617A0u) [[unlikely]] return; }
    goto L_002617A0;
L_0026179C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002617A0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1625u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_002617B8; } }
    st8((c.r[20].w[0] + 1625u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002617B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002617E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026180Cu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 372u, depth + 1u); else { c.pc = 0x00263870u; return; } if (c.pc != 0x0026180Cu) [[unlikely]] return; }
L_0026180C:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261820u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 372u, depth + 1u); else { c.pc = 0x00263870u; return; } if (c.pc != 0x00261820u) [[unlikely]] return; }
L_00261820:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00261830; } }
    set32(c.r[16], 0u + 4u);
    c.budget -= 1;
L_00261830:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F590000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    set32(c.r[3], 0u + 2u);
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[17].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDAE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 5243ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026185Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 373u, depth + 1u); else { c.pc = 0x00263900u; return; } if (c.pc != 0x0026185Cu) [[unlikely]] return; }
L_0026185C:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261874u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x00261874u) [[unlikely]] return; }
L_00261874:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00261890:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[16], 0u + 9u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002618BCu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 372u, depth + 1u); else { c.pc = 0x00263870u; return; } if (c.pc != 0x002618BCu) [[unlikely]] return; }
L_002618BC:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 569u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00070000u);
    c.r[2].d[0] = c.r[3].d[0] | 59384ull;
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00261910; } }
    c.r[2].d[0] = c.r[3].d[0] | 1920ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002618F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 2u);  if (t) { goto L_00261910; } }
L_002618F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261900u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x00261900u) [[unlikely]] return; }
L_00261900:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00261910; } }
    set32(c.r[16], c.r[16].w[0] + 2u);
    c.budget -= 1;
L_00261910:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F590000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    set32(c.r[3], 0u + 2u);
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[18].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDAE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 5243ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026193Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 373u, depth + 1u); else { c.pc = 0x00263900u; return; } if (c.pc != 0x0026193Cu) [[unlikely]] return; }
L_0026193C:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261954u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x00261954u) [[unlikely]] return; }
L_00261954:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00261970:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 1u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026199Cu); set32(c.r[17], 0u + 5u);  if (depth < kMaxDepth) unit_0058(c, 372u, depth + 1u); else { c.pc = 0x00263870u; return; } if (c.pc != 0x0026199Cu) [[unlikely]] return; }
L_0026199C:
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F590000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDAE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 5243ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002619CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 373u, depth + 1u); else { c.pc = 0x00263900u; return; } if (c.pc != 0x002619CCu) [[unlikely]] return; }
L_002619CC:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002619E4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x002619E4u) [[unlikely]] return; }
L_002619E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00261A00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261A24u); set32(c.r[16], 0u + 13u);  if (depth < kMaxDepth) unit_0058(c, 372u, depth + 1u); else { c.pc = 0x00263870u; return; } if (c.pc != 0x00261A24u) [[unlikely]] return; }
L_00261A24:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], 0u + 5u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    st8((c.r[17].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 4u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261A48u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x00261A48u) [[unlikely]] return; }
L_00261A48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00261A60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261A8Cu); set32(c.r[16], 0u + 17u);  if (depth < kMaxDepth) unit_0058(c, 372u, depth + 1u); else { c.pc = 0x00263870u; return; } if (c.pc != 0x00261A8Cu) [[unlikely]] return; }
L_00261A8C:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261AA0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 372u, depth + 1u); else { c.pc = 0x00263870u; return; } if (c.pc != 0x00261AA0u) [[unlikely]] return; }
L_00261AA0:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00261AB0; } }
    set32(c.r[16], 0u + 21u);
    c.budget -= 1;
L_00261AB0:
    set32(c.r[2], c.r[16].w[0] - 17u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261AC0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 388u, depth + 1u); else { c.pc = 0x00263B50u; return; } if (c.pc != 0x00261AC0u) [[unlikely]] return; }
L_00261AC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FAE0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00261AC8:
    c.r[2].d[0] = c.r[2].d[0] | 5243ull;
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261ADCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 375u, depth + 1u); else { c.pc = 0x00263970u; return; } if (c.pc != 0x00261ADCu) [[unlikely]] return; }
L_00261ADC:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261AF4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x00261AF4u) [[unlikely]] return; }
L_00261AF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00261B10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[16], 0u + 29u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261B3Cu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 372u, depth + 1u); else { c.pc = 0x00263870u; return; } if (c.pc != 0x00261B3Cu) [[unlikely]] return; }
L_00261B3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00261B48; } }
    set32(c.r[16], c.r[16].w[0] + 2u);
    c.budget -= 1;
L_00261B48:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 569u));
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00070000u);
    c.r[2].d[0] = c.r[3].d[0] | 59384ull;
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] | 1920ull;  if (t) { goto L_00261B98; } }
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00261B80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_00261B98; } }
    c.budget -= 1;
L_00261B80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261B88u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x00261B88u) [[unlikely]] return; }
L_00261B88:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00261B98; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00261B98:
    set32(c.r[2], c.r[16].w[0] - 17u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261BA8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 388u, depth + 1u); else { c.pc = 0x00263B50u; return; } if (c.pc != 0x00261BA8u) [[unlikely]] return; }
L_00261BA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FAE0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 5243ull;
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261BC4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 375u, depth + 1u); else { c.pc = 0x00263970u; return; } if (c.pc != 0x00261BC4u) [[unlikely]] return; }
L_00261BC4:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261BDCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x00261BDCu) [[unlikely]] return; }
L_00261BDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00261C00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 1u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261C2Cu); set32(c.r[17], 0u + 23u);  if (depth < kMaxDepth) unit_0058(c, 372u, depth + 1u); else { c.pc = 0x00263870u; return; } if (c.pc != 0x00261C2Cu) [[unlikely]] return; }
L_00261C2C:
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261C40u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 372u, depth + 1u); else { c.pc = 0x00263870u; return; } if (c.pc != 0x00261C40u) [[unlikely]] return; }
L_00261C40:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00261C68; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00261C60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261C70; } }
    c.budget -= 1;
L_00261C60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 28u);  if (t) { goto L_00261C70; } }
L_00261C68:
    set32(c.r[17], 0u + 27u);
    c.budget -= 2;
L_00261C70:
    set32(c.r[2], c.r[17].w[0] - 17u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261C80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 388u, depth + 1u); else { c.pc = 0x00263B50u; return; } if (c.pc != 0x00261C80u) [[unlikely]] return; }
L_00261C80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FAE0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 5243ull;
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261C9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 375u, depth + 1u); else { c.pc = 0x00263970u; return; } if (c.pc != 0x00261C9Cu) [[unlikely]] return; }
L_00261C9C:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261CB4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x00261CB4u) [[unlikely]] return; }
L_00261CB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00261CD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261CFCu); set32(c.r[16], 0u + 33u);  if (depth < kMaxDepth) unit_0058(c, 372u, depth + 1u); else { c.pc = 0x00263870u; return; } if (c.pc != 0x00261CFCu) [[unlikely]] return; }
L_00261CFC:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] - 17u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261D10u); st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0058(c, 388u, depth + 1u); else { c.pc = 0x00263B50u; return; } if (c.pc != 0x00261D10u) [[unlikely]] return; }
L_00261D10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FAE0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 5243ull;
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261D2Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 375u, depth + 1u); else { c.pc = 0x00263970u; return; } if (c.pc != 0x00261D2Cu) [[unlikely]] return; }
L_00261D2C:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261D44u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x00261D44u) [[unlikely]] return; }
L_00261D44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00261D60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 9u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00261D90; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261DB0; } }
L_00261D90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261DA4u); set32(c.r[5], c.r[17].w[0] + 1440u);  if (depth < kMaxDepth) unit_005A(c, 164u, depth + 1u); else { c.pc = 0x00269AD0u; return; } if (c.pc != 0x00261DA4u) [[unlikely]] return; }
L_00261DA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261E20; } }
    c.budget -= 1;
L_00261DB0:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261DF8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 767u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00261DF8; } }
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261DD4u); set32(c.r[5], c.r[17].w[0] + 1440u);  if (depth < kMaxDepth) unit_005A(c, 164u, depth + 1u); else { c.pc = 0x00269AD0u; return; } if (c.pc != 0x00261DD4u) [[unlikely]] return; }
L_00261DD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261DDCu); set32(c.r[4], c.r[17].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00261DDCu) [[unlikely]] return; }
L_00261DDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261DE4u); set32(c.r[4], 0u + 16384u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00261DE4u) [[unlikely]] return; }
L_00261DE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261DECu); set32(c.r[4], c.r[17].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00261DECu) [[unlikely]] return; }
L_00261DEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261E20; } }
    c.budget -= 1;
L_00261DF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261E0Cu); set32(c.r[5], c.r[17].w[0] + 1440u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00261E0Cu) [[unlikely]] return; }
L_00261E0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261E20u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_005A(c, 164u, depth + 1u); else { c.pc = 0x00269AD0u; return; } if (c.pc != 0x00261E20u) [[unlikely]] return; }
L_00261E20:
    set32(c.r[2], 0u + 48u);
    st32((c.r[17].w[0] + 276u), c.r[2].w[0]);
    set32(c.r[3], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ED10000u);
    st32((c.r[17].w[0] + 280u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 60293ull;
    st8((c.r[17].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = 0u;
    c.budget -= 10;
L_00261E48:
    st8((c.r[17].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261E54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 373u, depth + 1u); else { c.pc = 0x00263900u; return; } if (c.pc != 0x00261E54u) [[unlikely]] return; }
L_00261E54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261E5Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 52u, depth + 1u); else { c.pc = 0x001D9190u; return; } if (c.pc != 0x00261E5Cu) [[unlikely]] return; }
L_00261E5C:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 25u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261E74u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x00261E74u) [[unlikely]] return; }
L_00261E74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00261E90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld16((c.r[4].w[0] + 680u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261EB0u); c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x00261EB0u) [[unlikely]] return; }
L_00261EB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261EB8u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00261EB8u) [[unlikely]] return; }
L_00261EB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261EC0u); set32(c.r[4], c.r[18].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x00261EC0u) [[unlikely]] return; }
L_00261EC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261ED0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x00261ED0u) [[unlikely]] return; }
L_00261ED0:
    set32(c.r[4], c.r[18].w[0] + 1376u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261EDCu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x00261EDCu) [[unlikely]] return; }
L_00261EDC:
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.f[13] = ld32((c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261EECu); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x00261EECu) [[unlikely]] return; }
L_00261EEC:
    set32(c.r[2], c.r[2].w[0] + 8192u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00261F10; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00261F50; } }
    c.budget -= 1;
L_00261F10:
    set32(c.r[2], 0u + 2u);
    c.f[0] = ld32((c.r[18].w[0] + 8624u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8628u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8632u));
    c.budget -= 8;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_00261F88; } }
    goto L_00261F30;
L_00261F2C:
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 1;
L_00261F30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261F44u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00261F44u) [[unlikely]] return; }
L_00261F44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261F88; } }
    c.budget -= 1;
L_00261F50:
    set32(c.r[2], 0u + 1u);
    c.f[0] = ld32((c.r[18].w[0] + 8592u));
    st32((c.r[18].w[0] + 1392u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8596u));
    st32((c.r[18].w[0] + 1396u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8600u));
    c.budget -= 8;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; st32((c.r[18].w[0] + 1400u), c.f[0]);  if (t) { goto L_00261F88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261F84u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00261F84u) [[unlikely]] return; }
L_00261F84:
    c.budget -= 1;
L_00261F88:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 16864u);
    set32(c.r[7], c.r[7].w[0] + 16464u);
    set32(c.r[11], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[6], 0u + 12u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FCC0000u);
    set32(c.r[9], 0u + 128u);
    c.r[10].d[0] = c.r[2].d[0] | 52429ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], c.r[5].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42CC0000u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    set32(c.r[12], c.r[5].w[0] << 2);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[12], c.r[7].w[0] + c.r[12].w[0]);
    set32(c.r[5], 0u + 4u);
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[12].w[0] + 18u)));
    c.f[12] = 0u;
    set32(c.r[7], 0u + 16u);
    set32(c.r[12], c.r[12].w[0] << 2);
    set32(c.r[11], c.r[12].w[0] + c.r[11].w[0]);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    st8((c.r[18].w[0] + 568u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[18].w[0] + 709u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], c.r[11].w[0] + 47u);
    st8((c.r[18].w[0] + 710u), static_cast<std::uint8_t>(0u));
    st32((c.r[18].w[0] + 104u), c.r[10].w[0]);
    st32((c.r[18].w[0] + 108u), 0u);
    st8((c.r[18].w[0] + 516u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[18].w[0] + 1088u), c.r[8].w[0]);
    st32((c.r[18].w[0] + 728u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 732u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 680u));
    c.r[2].d[0] = c.r[2].d[0] & 15360ull;
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262024u); st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x00262024u) [[unlikely]] return; }
L_00262024:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00262040:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 12u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 276u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 280u), 0u);
    st8((c.r[4].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 568u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00262090; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262074u); c.r[5].d[0] = ld16((c.r[16].w[0] + 680u));  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x00262074u) [[unlikely]] return; }
L_00262074:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00262090; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262084u);  if (depth < kMaxDepth) unit_0058(c, 214u, depth + 1u); else { c.pc = 0x00261E90u; return; } if (c.pc != 0x00262084u) [[unlikely]] return; }
L_00262084:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00262128; } }
    c.budget -= 1;
L_00262090:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 568u));
    set32(c.r[2], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002620B0; } }
    c.f[2] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 43u);  if (t) { goto L_002620D8; } }
    c.budget -= 1;
L_002620B0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 16464u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 12u)));
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 10;
L_002620D8:
    set32(c.r[2], 0u + 13u);
    st8((c.r[16].w[0] + 568u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 128u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    st8((c.r[16].w[0] + 710u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_002620F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[1] = c.r[2].w[0];
    st32((c.r[16].w[0] + 1088u), c.r[3].w[0]);
    c.f[12] = 0u;
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    set32(c.r[7], 0u + 20u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262128u); st32((c.r[16].w[0] + 728u), c.f[2]);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x00262128u) [[unlikely]] return; }
L_00262128:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00262140:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 16u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 568u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002621C8; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 8658u));
    set32(c.r[2], 0u + 45u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_00262190; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262184u); set32(c.r[16], 0u + 27u);  if (depth < kMaxDepth) unit_0058(c, 372u, depth + 1u); else { c.pc = 0x00263870u; return; } if (c.pc != 0x00262184u) [[unlikely]] return; }
L_00262184:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_00262198; } }
    c.budget -= 1;
L_00262190:
    set32(c.r[16], 0u + 31u);
    c.budget -= 2;
L_00262198:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F590000u);
    c.r[3].d[0] = c.r[2].d[0] | 39322ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDAE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 5243ull;
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002621BCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 373u, depth + 1u); else { c.pc = 0x00263900u; return; } if (c.pc != 0x002621BCu) [[unlikely]] return; }
L_002621BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002621E0; } }
    c.budget -= 1;
L_002621C8:
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002621D8u); set32(c.r[16], 0u + 27u);  if (depth < kMaxDepth) unit_0058(c, 372u, depth + 1u); else { c.pc = 0x00263870u; return; } if (c.pc != 0x002621D8u) [[unlikely]] return; }
L_002621D8:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_002621E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F590000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    set32(c.r[3], 0u + 2u);
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[18].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDAE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 5243ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026220Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 373u, depth + 1u); else { c.pc = 0x00263900u; return; } if (c.pc != 0x0026220Cu) [[unlikely]] return; }
L_0026220C:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262224u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x00262224u) [[unlikely]] return; }
L_00262224:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00262240:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
L_0026225C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262264u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 372u, depth + 1u); else { c.pc = 0x00263870u; return; } if (c.pc != 0x00262264u) [[unlikely]] return; }
L_00262264:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_002622F8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002622D8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002622B8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00262298; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00262318; } }
    c.budget -= 1;
L_00262298:
    set32(c.r[2], 0u + 27u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    st32((c.r[17].w[0] + 728u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC42A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 43691ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 732u), c.r[2].w[0]);  if (t) { goto L_00262318; } }
L_002622B8:
    set32(c.r[2], 0u + 28u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    st32((c.r[17].w[0] + 728u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x442A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 43691ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 732u), c.r[2].w[0]);  if (t) { goto L_00262318; } }
L_002622D8:
    set32(c.r[2], 0u + 29u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    st32((c.r[17].w[0] + 728u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x442A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 43691ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 732u), c.r[2].w[0]);  if (t) { goto L_00262318; } }
L_002622F8:
    set32(c.r[2], 0u + 30u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    st32((c.r[17].w[0] + 728u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC42A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 43691ull;
    st32((c.r[17].w[0] + 732u), c.r[2].w[0]);
    c.budget -= 8;
L_00262318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262320u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 388u, depth + 1u); else { c.pc = 0x00263B50u; return; } if (c.pc != 0x00262320u) [[unlikely]] return; }
L_00262320:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FAE0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 5243ull;
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026233Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 375u, depth + 1u); else { c.pc = 0x00263970u; return; } if (c.pc != 0x0026233Cu) [[unlikely]] return; }
L_0026233C:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262354u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x00262354u) [[unlikely]] return; }
L_00262354:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00262370:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[16].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002623A0u); set32(c.r[6], c.r[16].w[0] + 1440u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x002623A0u) [[unlikely]] return; }
L_002623A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002623B4u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_005A(c, 156u, depth + 1u); else { c.pc = 0x002699E0u; return; } if (c.pc != 0x002623B4u) [[unlikely]] return; }
L_002623B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBCCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002623D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 373u, depth + 1u); else { c.pc = 0x00263900u; return; } if (c.pc != 0x002623D4u) [[unlikely]] return; }
L_002623D4:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 26u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002623ECu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x002623ECu) [[unlikely]] return; }
L_002623EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002623F8u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x002623F8u) [[unlikely]] return; }
L_002623F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00262410:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 17u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 584u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00262440; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[2], 0u + 15u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00262440; } }
    st8((c.r[4].w[0] + 710u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00262440:
    st32((c.r[4].w[0] + 732u), 0u);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8296u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002624A8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8298u)));
    set32(c.r[2], 0u + 53u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 54u);  if (t) { goto L_00262470; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002624A8; } }
L_00262470:
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    set32(c.r[5], 0u + 4u);
    st32((c.r[4].w[0] + 728u), c.r[2].w[0]);
    set32(c.r[6], 0u + 54u);
    set32(c.r[2], 0u + 200u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026249Cu); st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x0026249Cu) [[unlikely]] return; }
L_0026249C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002624C0; } }
    c.budget -= 1;
L_002624A8:
    set32(c.r[5], 0u + 4u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 53u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002624BCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x002624BCu) [[unlikely]] return; }
L_002624BC:
    c.budget -= 1;
L_002624C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002624D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 22u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 11u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 568u));
    st8((c.r[4].w[0] + 578u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 568u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 728u), c.f[12]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00262520; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46800000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[12]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 732u), c.f[0]);  if (t) { goto L_00262568; } }
L_00262520:
    set32(c.r[2], 0u + 24u);
    c.budget -= 1;
L_00262524:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x460E0000u);  if (t) { goto L_00262568; } }
    c.r[2].d[0] = c.r[2].d[0] | 14541ull;
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[12]);
    st32((c.r[16].w[0] + 732u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 767u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00262568; } }
    c.f[0] = ld32((c.r[16].w[0] + 732u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 732u), c.f[0]);
    c.budget -= 6;
L_00262568:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 767u)));
    c.f[0] = fp::cvt_w_s(c.f[12]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.f[0]);
    c.f[12] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262584u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x00262584u) [[unlikely]] return; }
L_00262584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026258Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 105u, depth + 1u); else { c.pc = 0x001EA5C0u; return; } if (c.pc != 0x0026258Cu) [[unlikely]] return; }
L_0026258C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262594u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 11u, depth + 1u); else { c.pc = 0x001EC290u; return; } if (c.pc != 0x00262594u) [[unlikely]] return; }
L_00262594:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002625B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002625E4u); set32(c.r[5], c.r[16].w[0] + 1440u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x002625E4u) [[unlikely]] return; }
L_002625E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002625F8u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_005A(c, 164u, depth + 1u); else { c.pc = 0x00269AD0u; return; } if (c.pc != 0x002625F8u) [[unlikely]] return; }
L_002625F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F590000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[2].d[0] | 39322ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDAE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 5243ull;
    c.f[12] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026261Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 373u, depth + 1u); else { c.pc = 0x00263900u; return; } if (c.pc != 0x0026261Cu) [[unlikely]] return; }
L_0026261C:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 55u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262634u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x00262634u) [[unlikely]] return; }
L_00262634:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00262650:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 16352u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 568u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026267Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026267Cu) [[unlikely]] return; }
L_0026267C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002626A0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 808u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002626A0; } }
    st8((c.r[16].w[0] + 808u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002626A0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1625u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00262700; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 814u)));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002626D0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002626F0; } }
L_002626D0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1625u)));
    set32(c.r[4], 0u + 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 1625u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1088u), c.r[3].w[0]);  if (t) { goto L_00262700; } }
L_002626F0:
    set32(c.r[3], 0u + 128u);
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[16].w[0] + 1088u), c.r[3].w[0]);
    c.budget -= 4;
L_00262700:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00262710:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262728u); set32(c.r[5], c.r[16].w[0] + 1440u);  if (depth < kMaxDepth) unit_005A(c, 202u, depth + 1u); else { c.pc = 0x0026A010u; return; } if (c.pc != 0x00262728u) [[unlikely]] return; }
L_00262728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262730u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x00262730u) [[unlikely]] return; }
L_00262730:
    set32(c.r[3], ld32((c.r[16].w[0] + 600u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3ED10000u);
    c.r[4].d[0] = c.r[4].d[0] | 60293ull;
    c.f[2] = c.r[4].w[0];
    c.r[3].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] << 2);  if (t) { goto L_00262778; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] + 5184u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.budget -= 10;
L_00262778:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00262790; } }
    st32((c.r[16].w[0] + 104u), c.f[2]);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 2;
L_00262790:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8325u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002627E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002627A4u);  if (depth < kMaxDepth) unit_0035(c, 128u, depth + 1u); else { c.pc = 0x001D5A40u; return; } if (c.pc != 0x002627A4u) [[unlikely]] return; }
L_002627A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002627C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002627BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 251u, depth + 1u); else { c.pc = 0x002624D0u; return; } if (c.pc != 0x002627BCu) [[unlikely]] return; }
L_002627BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002627E0; } }
    c.budget -= 1;
L_002627C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002627D4u); set32(c.r[5], 0u + 21u);  if (depth < kMaxDepth) unit_005A(c, 250u, depth + 1u); else { c.pc = 0x0026A890u; return; } if (c.pc != 0x002627D4u) [[unlikely]] return; }
L_002627D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002627DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 242u, depth + 1u); else { c.pc = 0x0026A770u; return; } if (c.pc != 0x002627DCu) [[unlikely]] return; }
L_002627DC:
    c.budget -= 1;
L_002627E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002627F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 808u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 128u);  if (t) { goto L_00262810; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st8((c.r[4].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 1088u), c.r[2].w[0]);
    c.budget -= 4;
L_00262810:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 709u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 16904u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00260000u < 16384u) { entry = entries_0058[(t - 0x00260000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00262830:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 709u)));
    set32(c.r[3], c.r[3].w[0] + 16464u);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st8((c.r[4].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[4].w[0] + 728u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    c.budget -= 15;
    { st8((c.r[4].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));  goto L_00262870; }
L_00262870:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262888u); set32(c.r[5], c.r[16].w[0] + 1440u);  if (depth < kMaxDepth) unit_005A(c, 202u, depth + 1u); else { c.pc = 0x0026A010u; return; } if (c.pc != 0x00262888u) [[unlikely]] return; }
L_00262888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262890u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x00262890u) [[unlikely]] return; }
L_00262890:
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xBD0B0000u);  if (t) { goto L_002628B8; } }
    c.r[2].d[0] = c.r[2].d[0] | 17302ull;
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 3;
L_002628B8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8325u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00262910; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 16464u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    set32(c.r[5], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262908u); set32(c.r[7], 0u + 25u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x00262908u) [[unlikely]] return; }
L_00262908:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00262948; } }
L_00262910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262918u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00262918u) [[unlikely]] return; }
L_00262918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262920u); set32(c.r[4], c.r[16].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x00262920u) [[unlikely]] return; }
L_00262920:
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = ld32((c.r[16].w[0] + 8292u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026293Cu);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x0026293Cu) [[unlikely]] return; }
L_0026293C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262944u); set32(c.r[4], c.r[16].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00262944u) [[unlikely]] return; }
L_00262944:
    c.budget -= 1;
L_00262948:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00262960:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = ld32((c.r[4].w[0] + 1440u));
    c.f[2] = ld32((c.r[4].w[0] + 1444u));
    c.f[1] = ld32((c.r[4].w[0] + 1448u));
    c.f[0] = ld32((c.r[4].w[0] + 1452u));
    st32((c.r[5].w[0]), c.f[3]);
    st32((c.r[5].w[0] + 4u), c.f[2]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    st32((c.r[5].w[0] + 12u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 579u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002629B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002629ACu); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x002629ACu) [[unlikely]] return; }
L_002629AC:
    c.budget -= 1;
L_002629B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002629C8u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_005A(c, 164u, depth + 1u); else { c.pc = 0x00269AD0u; return; } if (c.pc != 0x002629C8u) [[unlikely]] return; }
L_002629C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002629D4u); set32(c.r[5], c.r[16].w[0] + 1440u);  if (depth < kMaxDepth) unit_005A(c, 199u, depth + 1u); else { c.pc = 0x00269F90u; return; } if (c.pc != 0x002629D4u) [[unlikely]] return; }
L_002629D4:
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00262A88; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 242u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00262A88; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8663u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00262A88; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], 0u + 42u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 24u);  if (t) { goto L_00262A58; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00262A28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00262A88; } }
L_00262A28:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1964u)));
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00262A88; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8325u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00262A50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262A4Cu);  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x00262A4Cu) [[unlikely]] return; }
L_00262A4C:
    c.budget -= 1;
L_00262A50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00262B50; } }
L_00262A58:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1964u)));
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00262A88; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8325u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00262A80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262A7Cu);  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x00262A7Cu) [[unlikely]] return; }
L_00262A7C:
    c.budget -= 1;
L_00262A80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00262B50; } }
L_00262A88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262A90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x00262A90u) [[unlikely]] return; }
L_00262A90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 808u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00262AA8; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 2;
L_00262AA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 16876u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8304u));
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00262AE0; } }
    set32(c.r[3], 0u + 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1088u), c.r[2].w[0]);
    c.budget -= 5;
L_00262AE0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8326u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00262AF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262AF4u);  if (depth < kMaxDepth) unit_0058(c, 389u, depth + 1u); else { c.pc = 0x00263B80u; return; } if (c.pc != 0x00262AF4u) [[unlikely]] return; }
L_00262AF4:
    c.budget -= 1;
L_00262AF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42600000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262B08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 148u, depth + 1u); else { c.pc = 0x001DD100u; return; } if (c.pc != 0x00262B08u) [[unlikely]] return; }
L_00262B08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00262B28; } }
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262B20u); st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0058(c, 225u, depth + 1u); else { c.pc = 0x00262040u; return; } if (c.pc != 0x00262B20u) [[unlikely]] return; }
L_00262B20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00262B50; } }
L_00262B28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 128u);  if (t) { goto L_00262B50; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 1088u), c.r[3].w[0]);
    c.budget -= 3;
L_00262B50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00262B60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262B78u); set32(c.r[5], c.r[16].w[0] + 1440u);  if (depth < kMaxDepth) unit_005A(c, 199u, depth + 1u); else { c.pc = 0x00269F90u; return; } if (c.pc != 0x00262B78u) [[unlikely]] return; }
L_00262B78:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00262B98; } }
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 2;
L_00262B98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262BA0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x00262BA0u) [[unlikely]] return; }
L_00262BA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00262BE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262BB0u);  if (depth < kMaxDepth) unit_0035(c, 128u, depth + 1u); else { c.pc = 0x001D5A40u; return; } if (c.pc != 0x00262BB0u) [[unlikely]] return; }
L_00262BB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00262BC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262BC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 250u, depth + 1u); else { c.pc = 0x0026A890u; return; } if (c.pc != 0x00262BC0u) [[unlikely]] return; }
L_00262BC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00262BD8; } }
L_00262BC8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262BD4u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_005A(c, 250u, depth + 1u); else { c.pc = 0x0026A890u; return; } if (c.pc != 0x00262BD4u) [[unlikely]] return; }
L_00262BD4:
    c.budget -= 1;
L_00262BD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262BE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 242u, depth + 1u); else { c.pc = 0x0026A770u; return; } if (c.pc != 0x00262BE0u) [[unlikely]] return; }
L_00262BE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00262C28; } }
L_00262BE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262BF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 148u, depth + 1u); else { c.pc = 0x001DD100u; return; } if (c.pc != 0x00262BF8u) [[unlikely]] return; }
L_00262BF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 48u);  if (t) { goto L_00262C28; } }
    set32(c.r[4], 0u + 20u);
    st32((c.r[16].w[0] + 280u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = c.r[3].w[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 10;
L_00262C28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00262C40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 48u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 280u), c.r[2].w[0]);
    set32(c.r[3], 0u + 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st8((c.r[4].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262C74u); st32((c.r[4].w[0] + 1088u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x00262C74u) [[unlikely]] return; }
L_00262C74:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8326u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00262C88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262C88u); set32(c.r[5], c.r[16].w[0] + 1376u);  if (depth < kMaxDepth) unit_005A(c, 199u, depth + 1u); else { c.pc = 0x00269F90u; return; } if (c.pc != 0x00262C88u) [[unlikely]] return; }
L_00262C88:
    c.f[2] = ld32((c.r[16].w[0] + 8292u));
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 728u), c.f[1]);  if (t) { goto L_00262CD0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42500000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00262CD8; } }
    c.r[4].d[0] = ld16((c.r[16].w[0] + 680u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00262CD8; } }
L_00262CD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262CD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 225u, depth + 1u); else { c.pc = 0x00262040u; return; } if (c.pc != 0x00262CD8u) [[unlikely]] return; }
L_00262CD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00262CF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262D04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x00262D04u) [[unlikely]] return; }
L_00262D04:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8326u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00262D48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262D18u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00262D18u) [[unlikely]] return; }
L_00262D18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262D20u); set32(c.r[4], c.r[16].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x00262D20u) [[unlikely]] return; }
L_00262D20:
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = ld32((c.r[16].w[0] + 8292u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262D3Cu);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00262D3Cu) [[unlikely]] return; }
L_00262D3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262D44u); set32(c.r[4], c.r[16].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00262D44u) [[unlikely]] return; }
L_00262D44:
    c.budget -= 1;
L_00262D48:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262D54u); set32(c.r[5], c.r[16].w[0] + 1440u);  if (depth < kMaxDepth) unit_005A(c, 199u, depth + 1u); else { c.pc = 0x00269F90u; return; } if (c.pc != 0x00262D54u) [[unlikely]] return; }
L_00262D54:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00262D78; } }
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 3;
L_00262D78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x41980000u);  if (t) { goto L_00262DB8; } }
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], 0u + 2u);  if (t) { goto L_00262DB8; } }
    set32(c.r[3], 0u + 48u);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 280u), c.r[3].w[0]);
    c.budget -= 4;
L_00262DB8:
    set32(c.r[3], 0u + 128u);
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[16].w[0] + 1088u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8325u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00262E48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    st32((c.r[16].w[0] + 1088u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 1072u), c.r[3].w[0]);
    set32(c.r[2], 0u - 24577u);
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 514u));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262E0Cu); st8((c.r[16].w[0] + 514u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0035(c, 128u, depth + 1u); else { c.pc = 0x001D5A40u; return; } if (c.pc != 0x00262E0Cu) [[unlikely]] return; }
L_00262E0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00262E30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A80000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262E24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 251u, depth + 1u); else { c.pc = 0x002624D0u; return; } if (c.pc != 0x00262E24u) [[unlikely]] return; }
L_00262E24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00262E48; } }
    c.budget -= 1;
L_00262E30:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262E3Cu); set32(c.r[5], 0u + 21u);  if (depth < kMaxDepth) unit_005A(c, 250u, depth + 1u); else { c.pc = 0x0026A890u; return; } if (c.pc != 0x00262E3Cu) [[unlikely]] return; }
L_00262E3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262E44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 242u, depth + 1u); else { c.pc = 0x0026A770u; return; } if (c.pc != 0x00262E44u) [[unlikely]] return; }
L_00262E44:
    c.budget -= 1;
L_00262E48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00262E60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 17u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 568u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00262E90; } }
    set32(c.r[3], 0u + 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1088u), c.r[2].w[0]);
    c.budget -= 5;
L_00262E90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262E9Cu); set32(c.r[5], c.r[16].w[0] + 1440u);  if (depth < kMaxDepth) unit_005A(c, 199u, depth + 1u); else { c.pc = 0x00269F90u; return; } if (c.pc != 0x00262E9Cu) [[unlikely]] return; }
L_00262E9C:
    set32(c.r[2], ld32((c.r[16].w[0] + 600u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3ED10000u);
    c.r[3].d[0] = c.r[3].d[0] | 60293ull;
    c.f[2] = c.r[3].w[0];
    c.r[2].d[0] = ld8((c.r[2].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] << 2);  if (t) { goto L_00262EE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] + 5184u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.budget -= 9;
L_00262EE0:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00262EF8; } }
    st32((c.r[16].w[0] + 104u), c.f[2]);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 2;
L_00262EF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262F00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x00262F00u) [[unlikely]] return; }
L_00262F00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00262F48; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 568u));
    set32(c.r[2], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);  if (t) { goto L_00262F30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    st32((c.r[16].w[0] + 1088u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1072u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 808u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 1216u), 0u);
    st32((c.r[16].w[0] + 1220u), 0u);
    c.budget -= 6;
L_00262F30:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262F3Cu); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_005A(c, 250u, depth + 1u); else { c.pc = 0x0026A890u; return; } if (c.pc != 0x00262F3Cu) [[unlikely]] return; }
L_00262F3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262F44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 242u, depth + 1u); else { c.pc = 0x0026A770u; return; } if (c.pc != 0x00262F44u) [[unlikely]] return; }
L_00262F44:
    c.budget -= 1;
L_00262F48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00262F60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 808u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 128u);  if (t) { goto L_00262F80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st8((c.r[4].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 1088u), c.r[2].w[0]);
    c.budget -= 4;
L_00262F80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 709u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 16920u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00260000u < 16384u) { entry = entries_0058[(t - 0x00260000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00262FA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262FB8u); set32(c.r[5], c.r[16].w[0] + 1440u);  if (depth < kMaxDepth) unit_005A(c, 202u, depth + 1u); else { c.pc = 0x0026A010u; return; } if (c.pc != 0x00262FB8u) [[unlikely]] return; }
L_00262FB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262FC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x00262FC0u) [[unlikely]] return; }
L_00262FC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262FD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 148u, depth + 1u); else { c.pc = 0x001DD100u; return; } if (c.pc != 0x00262FD0u) [[unlikely]] return; }
L_00262FD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00262FF0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD0B0000u);
    c.r[3].d[0] = c.r[3].d[0] | 17302ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    c.budget -= 6;
L_00262FF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00263000:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263018u); set32(c.r[5], c.r[16].w[0] + 1440u);  if (depth < kMaxDepth) unit_005A(c, 202u, depth + 1u); else { c.pc = 0x0026A010u; return; } if (c.pc != 0x00263018u) [[unlikely]] return; }
L_00263018:
    c.f[2] = ld32((c.r[16].w[0] + 8292u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A20000u);
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 728u), c.f[1]);  if (t) { goto L_002630A8; } }
    st32((c.r[16].w[0] + 108u), 0u);
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 808u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00263058; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 2;
L_00263058:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 16876u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[3] = ld32((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 728u));
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002630A8; } }
    set32(c.r[3], 0u + 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1088u), c.r[2].w[0]);
    c.budget -= 5;
L_002630A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 128u);  if (t) { goto L_002630D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1088u), c.r[2].w[0]);
    c.budget -= 3;
L_002630D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00263108; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00263108; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263108u); st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0058(c, 389u, depth + 1u); else { c.pc = 0x00263B80u; return; } if (c.pc != 0x00263108u) [[unlikely]] return; }
L_00263108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263110u); set32(c.r[4], c.r[16].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00263110u) [[unlikely]] return; }
L_00263110:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 27u);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00263140; } }
    c.f[0] = ld32((c.r[16].w[0] + 732u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263138u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x00263138u) [[unlikely]] return; }
L_00263138:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00263158; } }
L_00263140:
    c.f[0] = ld32((c.r[16].w[0] + 732u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263154u);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x00263154u) [[unlikely]] return; }
L_00263154:
    c.budget -= 1;
L_00263158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263160u); set32(c.r[4], c.r[16].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00263160u) [[unlikely]] return; }
L_00263160:
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00263188; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00263188:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002631A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 128u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[16].w[0] + 1440u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002631C8u); st32((c.r[4].w[0] + 1088u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005A(c, 202u, depth + 1u); else { c.pc = 0x0026A010u; return; } if (c.pc != 0x002631C8u) [[unlikely]] return; }
L_002631C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002631D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x002631D0u) [[unlikely]] return; }
L_002631D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);  if (t) { goto L_00263208; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    st32((c.r[16].w[0] + 1088u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 1072u), c.r[2].w[0]);
    set32(c.r[5], 0u + 21u);
    st8((c.r[16].w[0] + 808u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 1216u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002631FCu); st32((c.r[16].w[0] + 1220u), 0u);  if (depth < kMaxDepth) unit_005A(c, 250u, depth + 1u); else { c.pc = 0x0026A890u; return; } if (c.pc != 0x002631FCu) [[unlikely]] return; }
L_002631FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263204u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 242u, depth + 1u); else { c.pc = 0x0026A770u; return; } if (c.pc != 0x00263204u) [[unlikely]] return; }
L_00263204:
    c.budget -= 1;
L_00263208:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00263220:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263238u); set32(c.r[5], c.r[16].w[0] + 1440u);  if (depth < kMaxDepth) unit_005A(c, 199u, depth + 1u); else { c.pc = 0x00269F90u; return; } if (c.pc != 0x00263238u) [[unlikely]] return; }
L_00263238:
    set32(c.r[2], ld32((c.r[16].w[0] + 600u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[3].w[0];
    c.r[2].d[0] = ld8((c.r[2].w[0] + 9u));
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] << 2);  if (t) { goto L_00263278; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] + 5184u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.budget -= 9;
L_00263278:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00263290; } }
    st32((c.r[16].w[0] + 104u), c.f[2]);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 2;
L_00263290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263298u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x00263298u) [[unlikely]] return; }
L_00263298:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002632B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002632A8u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_005A(c, 250u, depth + 1u); else { c.pc = 0x0026A890u; return; } if (c.pc != 0x002632A8u) [[unlikely]] return; }
L_002632A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002632B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 242u, depth + 1u); else { c.pc = 0x0026A770u; return; } if (c.pc != 0x002632B0u) [[unlikely]] return; }
L_002632B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00263380; } }
L_002632B8:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], 0u + 38u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00263308; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F80000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002632D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 148u, depth + 1u); else { c.pc = 0x001DD100u; return; } if (c.pc != 0x002632D8u) [[unlikely]] return; }
L_002632D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002632E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 838u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00263380; } }
L_002632E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42100000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002632F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 148u, depth + 1u); else { c.pc = 0x001DD100u; return; } if (c.pc != 0x002632F8u) [[unlikely]] return; }
L_002632F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00263380; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 757u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00263380; } }
L_00263308:
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00263358; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263324u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 148u, depth + 1u); else { c.pc = 0x001DD100u; return; } if (c.pc != 0x00263324u) [[unlikely]] return; }
L_00263324:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00263338; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 838u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00263380; } }
    c.budget -= 1;
L_00263338:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263348u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 148u, depth + 1u); else { c.pc = 0x001DD100u; return; } if (c.pc != 0x00263348u) [[unlikely]] return; }
L_00263348:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00263380; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 757u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00263380; } }
L_00263358:
    set32(c.r[3], 0u + 52u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00263380; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263374u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 148u, depth + 1u); else { c.pc = 0x001DD100u; return; } if (c.pc != 0x00263374u) [[unlikely]] return; }
L_00263374:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00263380; } }
    st8((c.r[16].w[0] + 838u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00263380:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00263390:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 808u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002633C0; } }
    set32(c.r[3], 0u + 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1088u), c.r[2].w[0]);
    c.budget -= 5;
L_002633C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 16936u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002633E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002633E0u) [[unlikely]] return; }
L_002633E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 710u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00263428; } }
    c.f[2] = ld32((c.r[16].w[0] + 8292u));
    c.f[1] = ld32((c.r[16].w[0] + 732u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 732u), c.f[1]);  if (t) { goto L_00263428; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1608u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 113u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026341Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 218u, depth + 1u); else { c.pc = 0x002F7130u; return; } if (c.pc != 0x0026341Cu) [[unlikely]] return; }
L_0026341C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 732u), c.r[3].w[0]);
    c.budget -= 3;
L_00263428:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00263440:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263454u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x00263454u) [[unlikely]] return; }
L_00263454:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00263490; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    set32(c.r[2], 0u + 200u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 54u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[16].w[0] + 728u), c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263490u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x00263490u) [[unlikely]] return; }
L_00263490:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002634A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002634B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x002634B4u) [[unlikely]] return; }
L_002634B4:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 684u));
    c.r[3].d[0] = c.r[3].d[0] & 15360ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002634D0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 35u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002634D0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 684u));
    c.r[3].d[0] = c.r[3].d[0] & 1008ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002634F0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 20u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002634F0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00263508; } }
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 728u), 0u);
    c.budget -= 3;
L_00263508:
    set32(c.r[3], ld32((c.r[16].w[0] + 592u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00263520; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[3].w[0] + 8252u));  if (t) { goto L_00263528; } }
    c.budget -= 1;
L_00263520:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[3].w[0];
    c.budget -= 2;
L_00263528:
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 728u), c.f[1]);  if (t) { goto L_00263568; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 600u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 568u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 578u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 568u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 710u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263568u); st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0058(c, 178u, depth + 1u); else { c.pc = 0x00261A60u; return; } if (c.pc != 0x00263568u) [[unlikely]] return; }
L_00263568:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00263580:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263594u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x00263594u) [[unlikely]] return; }
L_00263594:
    c.f[2] = ld32((c.r[16].w[0] + 8292u));
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 728u), c.f[1]);  if (t) { goto L_002635E8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 578u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002635C8u); st8((c.r[16].w[0] + 568u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_005A(c, 250u, depth + 1u); else { c.pc = 0x0026A890u; return; } if (c.pc != 0x002635C8u) [[unlikely]] return; }
L_002635C8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00263658; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002635E0u);  if (depth < kMaxDepth) unit_005A(c, 242u, depth + 1u); else { c.pc = 0x0026A770u; return; } if (c.pc != 0x002635E0u) [[unlikely]] return; }
L_002635E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00263658; } }
L_002635E8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 767u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 8592u);  if (t) { goto L_00263628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002635FCu);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002635FCu) [[unlikely]] return; }
L_002635FC:
    c.f[1] = ld32((c.r[16].w[0] + 732u));
    c.f[0] = ld32((c.r[16].w[0] + 8292u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263618u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00263618u) [[unlikely]] return; }
L_00263618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263620u); set32(c.r[4], c.r[16].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00263620u) [[unlikely]] return; }
L_00263620:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00263658; } }
L_00263628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263630u); set32(c.r[4], c.r[16].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00263630u) [[unlikely]] return; }
L_00263630:
    c.f[1] = ld32((c.r[16].w[0] + 732u));
    c.f[0] = ld32((c.r[16].w[0] + 8292u));
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263650u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00263650u) [[unlikely]] return; }
L_00263650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263658u); set32(c.r[4], c.r[16].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00263658u) [[unlikely]] return; }
L_00263658:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00263670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263688u); set32(c.r[5], c.r[16].w[0] + 1440u);  if (depth < kMaxDepth) unit_005A(c, 202u, depth + 1u); else { c.pc = 0x0026A010u; return; } if (c.pc != 0x00263688u) [[unlikely]] return; }
L_00263688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263690u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x00263690u) [[unlikely]] return; }
L_00263690:
    set32(c.r[3], ld32((c.r[16].w[0] + 600u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3ED10000u);
    c.r[4].d[0] = c.r[4].d[0] | 60293ull;
    c.f[2] = c.r[4].w[0];
    c.r[3].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] << 2);  if (t) { goto L_002636D8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] + 5184u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.budget -= 10;
L_002636D8:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002636F0; } }
    st32((c.r[16].w[0] + 104u), c.f[2]);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 2;
L_002636F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8325u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00263740; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263704u);  if (depth < kMaxDepth) unit_0035(c, 128u, depth + 1u); else { c.pc = 0x001D5A40u; return; } if (c.pc != 0x00263704u) [[unlikely]] return; }
L_00263704:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00263728; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026371Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 251u, depth + 1u); else { c.pc = 0x002624D0u; return; } if (c.pc != 0x0026371Cu) [[unlikely]] return; }
L_0026371C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00263740; } }
    c.budget -= 1;
L_00263728:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263734u); set32(c.r[5], 0u + 21u);  if (depth < kMaxDepth) unit_005A(c, 250u, depth + 1u); else { c.pc = 0x0026A890u; return; } if (c.pc != 0x00263734u) [[unlikely]] return; }
L_00263734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026373Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 242u, depth + 1u); else { c.pc = 0x0026A770u; return; } if (c.pc != 0x0026373Cu) [[unlikely]] return; }
L_0026373C:
    c.budget -= 1;
L_00263740:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00263750:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 5u));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00263790; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 24576ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 21u);  if (t) { goto L_00263788; } }
    c.r[4].d[0] = ld8((c.r[4].w[0] + 749u));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00263788; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00263788:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00263860; } }
L_00263790:
    c.r[7].d[0] = ld8((c.r[5].w[0] + 13u));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 569u));
    c.r[2].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[5], 0u + 1u);
    c.r[3].d[0] = c.r[7].d[0] & 4ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] << (c.r[6].w[0] & 31u));  if (t) { goto L_002637E0; } }
    c.r[3].d[0] = c.r[7].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002637C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 4ull;  if (t) { goto L_002637E0; } }
    c.budget -= 1;
L_002637C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00070000u);
    c.r[3].d[0] = c.r[3].d[0] | 61443ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002637E0; } }
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.budget -= 1;
L_002637E0:
    c.r[3].d[0] = c.r[7].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[7].d[0] & 16ull;  if (t) { goto L_00263818; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00263800; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 2ull;  if (t) { goto L_00263818; } }
    c.budget -= 1;
L_00263800:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00070000u);
    c.r[3].d[0] = c.r[3].d[0] | 59384ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00263818; } }
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.budget -= 1;
L_00263818:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[6].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00263858; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 749u));
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00263858; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[6].d[0] & 24576ull;  if (t) { goto L_00263858; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00263860; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00263860; } }
L_00263858:
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 2;
L_00263860:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00263870:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00263880; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 572u)));  if (t) { goto L_00263884; } }
L_00263880:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 574u)));
    c.budget -= 1;
L_00263884:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);  if (t) { goto L_002638C8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002638A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002638E8; } }
    c.budget -= 1;
L_002638A8:
    c.r[2].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 8193u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_002638F0; } }
    c.budget -= 1;
L_002638C8:
    c.r[2].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 16385u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 15));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { goto L_002638F0; } }
    c.budget -= 1;
L_002638E8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002638F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00263900:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = c.f[12];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263924u); c.f[20] = c.f[13];  if (depth < kMaxDepth) unit_0058(c, 377u, depth + 1u); else { c.pc = 0x002639E0u; return; } if (c.pc != 0x00263924u) [[unlikely]] return; }
L_00263924:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 5184u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), c.f[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00263970:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = c.f[12];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263994u); c.f[20] = c.f[13];  if (depth < kMaxDepth) unit_0058(c, 377u, depth + 1u); else { c.pc = 0x002639E0u; return; } if (c.pc != 0x00263994u) [[unlikely]] return; }
L_00263994:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 5216u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), c.f[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002639E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 108u), 0u);
    set32(c.r[16], ld32((c.r[4].w[0] + 584u)));
    c.budget -= 11;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00263A18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_00263B38; } }
    c.budget -= 1;
L_00263A18:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 562u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00263A40; } }
    set32(c.r[16], ld32((c.r[18].w[0] + 592u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_00263A40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00263B38; } }
    c.budget -= 1;
L_00263A40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00263A58; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00263AC8; } }
    c.budget -= 1;
L_00263A58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263A60u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00263A60u) [[unlikely]] return; }
L_00263A60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263A68u); set32(c.r[4], c.r[16].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x00263A68u) [[unlikely]] return; }
L_00263A68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263A78u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x00263A78u) [[unlikely]] return; }
L_00263A78:
    set32(c.r[4], c.r[18].w[0] + 1440u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263A84u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x00263A84u) [[unlikely]] return; }
L_00263A84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263A8Cu);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00263A8Cu) [[unlikely]] return; }
L_00263A8C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 11u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263A98u); set32(c.r[4], c.r[2].w[0] << 12);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00263A98u) [[unlikely]] return; }
L_00263A98:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263AA8u); set32(c.r[4], c.r[2].w[0] << 12);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x00263AA8u) [[unlikely]] return; }
L_00263AA8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263AB4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x00263AB4u) [[unlikely]] return; }
L_00263AB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263ABCu); set32(c.r[4], c.r[16].w[0] + 8592u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x00263ABCu) [[unlikely]] return; }
L_00263ABC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263AC8u); set32(c.r[5], c.r[18].w[0] + 1440u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x00263AC8u) [[unlikely]] return; }
L_00263AC8:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 5u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = ld8((c.r[17].w[0] + 9u));  if (t) { goto L_00263B38; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00263B08; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 749u));
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00263B08; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00263B38; } }
    c.budget -= 1;
L_00263B08:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 808u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00263B20; } }
    set32(c.r[4], 0u + 5u);
    c.budget -= 2;
L_00263B20:
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00263B38; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 2;
L_00263B38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00263B50:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 744u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 7u);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st16((c.r[4].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 514u));
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 514u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00263B80:
    st8((c.r[4].w[0] + 744u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 5u);
    st8((c.r[4].w[0] + 849u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    set32(c.r[3], 0u - 9u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st16((c.r[4].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st16((c.r[4].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 514u));
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 514u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00263BC0:
    set32(c.r[6], c.r[5].w[0] - 17u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 16464u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 728u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 579u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00263C00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263C14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 85u, depth + 1u); else { c.pc = 0x001DA350u; return; } if (c.pc != 0x00263C14u) [[unlikely]] return; }
L_00263C14:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8286u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00263C28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263C28u);  if (depth < kMaxDepth) unit_003B(c, 11u, depth + 1u); else { c.pc = 0x001EC290u; return; } if (c.pc != 0x00263C28u) [[unlikely]] return; }
L_00263C28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00263C40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00263C78; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8326u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00263C78; } }
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 276u), 0u);
    st32((c.r[16].w[0] + 280u), 0u);
    st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_00263C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263C80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x00263C80u) [[unlikely]] return; }
L_00263C80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8326u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00263C98; } }
    st8((c.r[16].w[0] + 744u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 849u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_00263C98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00263CB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 704u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00263D58; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 704u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8327u)));
    st8((c.r[4].w[0] + 8287u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00263D20; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 17329u);
    c.r[5].d[0] = 0ull + 0ull;
    c.f[12] = 0u;
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263D14u); set32(c.r[6], 0u + 22u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x00263D14u) [[unlikely]] return; }
L_00263D14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00263D60; } }
    c.budget -= 1;
L_00263D20:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 17329u);
    c.f[12] = 0u;
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263D50u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0036(c, 63u, depth + 1u); else { c.pc = 0x001D96E0u; return; } if (c.pc != 0x00263D50u) [[unlikely]] return; }
L_00263D50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00263D60; } }
L_00263D58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263D60u);  if (depth < kMaxDepth) unit_0036(c, 85u, depth + 1u); else { c.pc = 0x001DA350u; return; } if (c.pc != 0x00263D60u) [[unlikely]] return; }
L_00263D60:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00263D70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 708u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00263FA0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[6], 0u + 1u);
    st8((c.r[17].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u - 201u);
    st8((c.r[17].w[0] + 749u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], 0u + 16u);
    st8((c.r[17].w[0] + 744u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 849u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st16((c.r[17].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st16((c.r[17].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 276u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 280u), 0u);
    st8((c.r[17].w[0] + 286u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263DE0u); c.r[5].d[0] = ld16((c.r[17].w[0] + 680u));  if (depth < kMaxDepth) unit_0039(c, 47u, depth + 1u); else { c.pc = 0x001E4870u; return; } if (c.pc != 0x00263DE0u) [[unlikely]] return; }
L_00263DE0:
    set32(c.r[3], ld32((c.r[17].w[0] + 1264u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 13));  if (t) { goto L_00263DF4; } }
    set32(c.r[2], c.r[3].w[0] + 8191u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));
    c.budget -= 2;
L_00263DF4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8682u)));
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[3].d[0] = c.r[16].d[0] & 255ull;  if (t) { goto L_00263E68; } }
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;  if (t) { goto L_00263E48; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 1392u);  if (t) { goto L_00263E48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263E24u); set32(c.r[5], c.r[17].w[0] + 1376u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00263E24u) [[unlikely]] return; }
L_00263E24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[17].w[0] + 1408u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263E38u); set32(c.r[5], c.r[17].w[0] + 1392u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00263E38u) [[unlikely]] return; }
L_00263E38:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00263E80; } }
L_00263E48:
    set32(c.r[4], c.r[17].w[0] + 1392u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263E54u); set32(c.r[5], c.r[17].w[0] + 1376u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00263E54u) [[unlikely]] return; }
L_00263E54:
    set32(c.r[4], c.r[17].w[0] + 1408u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263E60u); set32(c.r[5], c.r[17].w[0] + 1376u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00263E60u) [[unlikely]] return; }
L_00263E60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00263E80; } }
L_00263E68:
    set32(c.r[4], c.r[17].w[0] + 1392u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263E74u); set32(c.r[5], c.r[17].w[0] + 1376u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00263E74u) [[unlikely]] return; }
L_00263E74:
    set32(c.r[4], c.r[17].w[0] + 1408u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263E80u); set32(c.r[5], c.r[17].w[0] + 1376u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00263E80u) [[unlikely]] return; }
L_00263E80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.f[2] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = c.r[3].w[0];
    c.r[6].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] + 17328u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 18576u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], c.r[6].w[0] + c.r[5].w[0]);
    c.f[12] = 0u;
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[17].w[0] + 728u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[17].w[0] + 732u), c.f[1]);
    c.f[3] = ld32((c.r[17].w[0] + 1260u));
    c.f[1] = ld32((c.r[17].w[0] + 732u));
    c.f[3] = fp::cvt_s_w(c.f[3]);
    fpu_div(c, 1u, c.f[3], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    st16((c.r[17].w[0] + 862u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 732u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 732u), c.f[0]);
    st32((c.r[17].w[0] + 68u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 108u), 0u);
    st32((c.r[17].w[0] + 104u), 0u);
    c.f[0] = ld32((c.r[17].w[0] + 1156u));
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 1156u));
    c.f[0] = ld32((c.r[17].w[0] + 732u));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[17].w[0] + 108u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[17].w[0] + 740u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 57;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00263F80; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 22u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263F78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x00263F78u) [[unlikely]] return; }
L_00263F78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 3u, depth); } }
L_00263F80:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263F94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 67u, depth + 1u); else { c.pc = 0x001D9AC0u; return; } if (c.pc != 0x00263F94u) [[unlikely]] return; }
L_00263F94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 3u, depth); } }
    c.budget -= 1;
L_00263FA0:
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = ld32((c.r[17].w[0] + 1016u));  if (t) { goto L_00263FC8; } }
    c.f[0] = ld32((c.r[17].w[0] + 740u));
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    st32((c.r[17].w[0] + 1016u), c.f[0]);
    c.budget -= 4;
L_00263FC8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 862u)));
    c.f[0] = ld32((c.r[17].w[0] + 1016u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263FF4u); set32(c.r[5], c.r[17].w[0] + 1408u);  if (depth < kMaxDepth) unit_005A(c, 187u, depth + 1u); else { c.pc = 0x00269DD0u; return; } if (c.pc != 0x00263FF4u) [[unlikely]] return; }
L_00263FF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263FFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 92u, depth + 1u); else { c.pc = 0x001DA430u; return; } if (c.pc != 0x00263FFCu) [[unlikely]] return; }
L_00263FFC:
    c.f[1] = ld32((c.r[17].w[0] + 8304u));
    c.budget -= 1;
    [[clang::musttail]] return unit_0059(c, 1u, depth);
}

}
