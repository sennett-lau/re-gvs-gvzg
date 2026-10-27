#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0040[4096] = {
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 14, 0, 15, 16, 0, 0, 0, 0, 0, 17, 0,
    18, 0, 0, 0, 0, 0, 19, 20, 21, 0, 22, 23, 0, 0, 24, 25, 26, 0, 27, 28, 0, 0, 29, 0, 30, 0, 31, 0, 0, 0, 0, 0,
    32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 43, 44, 0, 45,
    46, 0, 47, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0,
    53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 56, 0,
    57, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0,
    60, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 75, 0, 0, 0, 76, 0, 77, 0,
    78, 0, 0, 0, 79, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 85, 0, 86, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 0, 91, 0, 92, 0, 93, 0, 94, 0, 0, 0,
    95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0,
    0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0,
    105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 137, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0,
    0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 156, 0, 157, 0, 158, 0, 159, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165,
    166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 170, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177,
    0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 182, 0, 183, 0, 184, 0, 185, 0, 0, 0, 0, 0, 186, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0,
    190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0,
    196, 197, 0, 0, 198, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0,
    0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 211, 0, 212, 0, 0, 0, 213, 0, 214, 0, 215, 0, 0, 0, 216, 0, 217, 0, 218, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 222, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 223, 0, 224, 0, 225, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 229, 0, 0, 0, 230, 231, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 239, 0, 240, 0, 0, 0, 241, 0, 242, 0, 243, 0,
    0, 0, 244, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 259, 0, 0, 260, 0, 0, 0, 261, 0, 262, 0,
    0, 0, 263, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 273, 0, 0, 274, 0, 0, 0,
    275, 0, 276, 0, 0, 0, 277, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 282, 283, 284, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 287, 0, 0, 288, 0, 0, 0, 289, 0, 290, 0,
    0, 0, 291, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0,
    0, 0, 0, 0, 0, 0, 0, 294, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 299, 0, 300, 0,
    0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0,
    305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0,
    0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0,
    0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 318, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0,
    0, 0, 0, 322, 0, 0, 323, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328,
    0, 0, 0, 329, 0, 330, 0, 331, 0, 332, 0, 333, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0,
    337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 339, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0,
    341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 345, 0, 0, 346, 0, 0, 347, 0, 0, 348, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0,
    0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 354, 0, 0, 355, 0, 0,
    356, 0, 0, 357, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 360, 0, 0, 361, 0, 0, 362, 0, 0, 363, 0, 0, 364, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0040(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00200000;
    case 2u: goto L_00200004;
    case 3u: goto L_00200008;
    case 4u: goto L_0020000C;
    case 5u: goto L_00200010;
    case 6u: goto L_00200014;
    case 7u: goto L_00200018;
    case 8u: goto L_0020001C;
    case 9u: goto L_00200020;
    case 10u: goto L_00200024;
    case 11u: goto L_00200028;
    case 12u: goto L_00200040;
    case 13u: goto L_00200050;
    case 14u: goto L_00200054;
    case 15u: goto L_0020005C;
    case 16u: goto L_00200060;
    case 17u: goto L_00200078;
    case 18u: goto L_00200080;
    case 19u: goto L_00200098;
    case 20u: goto L_0020009C;
    case 21u: goto L_002000A0;
    case 22u: goto L_002000A8;
    case 23u: goto L_002000AC;
    case 24u: goto L_002000B8;
    case 25u: goto L_002000BC;
    case 26u: goto L_002000C0;
    case 27u: goto L_002000C8;
    case 28u: goto L_002000CC;
    case 29u: goto L_002000D8;
    case 30u: goto L_002000E0;
    case 31u: goto L_002000E8;
    case 32u: goto L_00200100;
    case 33u: goto L_0020012C;
    case 34u: goto L_00200140;
    case 35u: goto L_00200150;
    case 36u: goto L_00200160;
    case 37u: goto L_0020016C;
    case 38u: goto L_002001A0;
    case 39u: goto L_002001AC;
    case 40u: goto L_002001BC;
    case 41u: goto L_002001E4;
    case 42u: goto L_002001EC;
    case 43u: goto L_002001F0;
    case 44u: goto L_002001F4;
    case 45u: goto L_002001FC;
    case 46u: goto L_00200200;
    case 47u: goto L_00200208;
    case 48u: goto L_0020020C;
    case 49u: goto L_00200238;
    case 50u: goto L_00200280;
    case 51u: goto L_0020028C;
    case 52u: goto L_002002F8;
    case 53u: goto L_00200300;
    case 54u: goto L_00200358;
    case 55u: goto L_00200370;
    case 56u: goto L_00200378;
    case 57u: goto L_00200380;
    case 58u: goto L_00200384;
    case 59u: goto L_002003DC;
    case 60u: goto L_00200400;
    case 61u: goto L_00200408;
    case 62u: goto L_00200444;
    case 63u: goto L_00200450;
    case 64u: goto L_00200460;
    case 65u: goto L_00200468;
    case 66u: goto L_002004F8;
    case 67u: goto L_00200520;
    case 68u: goto L_0020054C;
    case 69u: goto L_00200554;
    case 70u: goto L_00200570;
    case 71u: goto L_002005A8;
    case 72u: goto L_002005D8;
    case 73u: goto L_00200650;
    case 74u: goto L_00200658;
    case 75u: goto L_00200660;
    case 76u: goto L_00200670;
    case 77u: goto L_00200678;
    case 78u: goto L_00200680;
    case 79u: goto L_00200690;
    case 80u: goto L_00200698;
    case 81u: goto L_002006A0;
    case 82u: goto L_002006F0;
    case 83u: goto L_00200730;
    case 84u: goto L_00200740;
    case 85u: goto L_00200788;
    case 86u: goto L_00200790;
    case 87u: goto L_002007A0;
    case 88u: goto L_002007B0;
    case 89u: goto L_002007BC;
    case 90u: goto L_002007C8;
    case 91u: goto L_002007D8;
    case 92u: goto L_002007E0;
    case 93u: goto L_002007E8;
    case 94u: goto L_002007F0;
    case 95u: goto L_00200800;
    case 96u: goto L_00200858;
    case 97u: goto L_00200870;
    case 98u: goto L_00200894;
    case 99u: goto L_0020089C;
    case 100u: goto L_0020094C;
    case 101u: goto L_00200970;
    case 102u: goto L_002009B0;
    case 103u: goto L_002009E0;
    case 104u: goto L_002009F8;
    case 105u: goto L_00200A00;
    case 106u: goto L_00200A30;
    case 107u: goto L_00200A70;
    case 108u: goto L_00200A98;
    case 109u: goto L_00200AD0;
    case 110u: goto L_00200AE0;
    case 111u: goto L_00200B18;
    case 112u: goto L_00200B20;
    case 113u: goto L_00200B2C;
    case 114u: goto L_00200B3C;
    case 115u: goto L_00200B60;
    case 116u: goto L_00200BA0;
    case 117u: goto L_00200D08;
    case 118u: goto L_00200D20;
    case 119u: goto L_00200DC0;
    case 120u: goto L_00200DD0;
    case 121u: goto L_00200E20;
    case 122u: goto L_00200E30;
    case 123u: goto L_00200E90;
    case 124u: goto L_00200EB0;
    case 125u: goto L_00200EC0;
    case 126u: goto L_00200F18;
    case 127u: goto L_00200F30;
    case 128u: goto L_00200F60;
    case 129u: goto L_00200F80;
    case 130u: goto L_00200FC0;
    case 131u: goto L_00200FF4;
    case 132u: goto L_0020101C;
    case 133u: goto L_00201028;
    case 134u: goto L_00201030;
    case 135u: goto L_00201048;
    case 136u: goto L_00201058;
    case 137u: goto L_00201094;
    case 138u: goto L_0020109C;
    case 139u: goto L_002010A4;
    case 140u: goto L_002010C8;
    case 141u: goto L_002010DC;
    case 142u: goto L_002010F0;
    case 143u: goto L_0020110C;
    case 144u: goto L_00201114;
    case 145u: goto L_00201130;
    case 146u: goto L_00201158;
    case 147u: goto L_00201168;
    case 148u: goto L_002011D8;
    case 149u: goto L_00201224;
    case 150u: goto L_0020122C;
    case 151u: goto L_00201240;
    case 152u: goto L_00201248;
    case 153u: goto L_00201264;
    case 154u: goto L_002012C8;
    case 155u: goto L_002012D8;
    case 156u: goto L_002012E0;
    case 157u: goto L_002012E8;
    case 158u: goto L_002012F0;
    case 159u: goto L_002012F8;
    case 160u: goto L_00201320;
    case 161u: goto L_00201330;
    case 162u: goto L_00201340;
    case 163u: goto L_00201390;
    case 164u: goto L_002013A0;
    case 165u: goto L_002013FC;
    case 166u: goto L_00201400;
    case 167u: goto L_00201408;
    case 168u: goto L_0020143C;
    case 169u: goto L_00201460;
    case 170u: goto L_002014A0;
    case 171u: goto L_002014A4;
    case 172u: goto L_002014C0;
    case 173u: goto L_002015EC;
    case 174u: goto L_00201620;
    case 175u: goto L_0020163C;
    case 176u: goto L_00201664;
    case 177u: goto L_0020167C;
    case 178u: goto L_00201688;
    case 179u: goto L_00201694;
    case 180u: goto L_002016B8;
    case 181u: goto L_002016C0;
    case 182u: goto L_002016C8;
    case 183u: goto L_002016D0;
    case 184u: goto L_002016D8;
    case 185u: goto L_002016E0;
    case 186u: goto L_002016F8;
    case 187u: goto L_00201728;
    case 188u: goto L_0020173C;
    case 189u: goto L_00201764;
    case 190u: goto L_00201780;
    case 191u: goto L_00201794;
    case 192u: goto L_002017B8;
    case 193u: goto L_002017C8;
    case 194u: goto L_002017D8;
    case 195u: goto L_002017F8;
    case 196u: goto L_00201800;
    case 197u: goto L_00201804;
    case 198u: goto L_00201810;
    case 199u: goto L_00201818;
    case 200u: goto L_00201830;
    case 201u: goto L_00201844;
    case 202u: goto L_00201858;
    case 203u: goto L_00201880;
    case 204u: goto L_002018A0;
    case 205u: goto L_0020190C;
    case 206u: goto L_00201920;
    case 207u: goto L_002019C8;
    case 208u: goto L_002019E4;
    case 209u: goto L_00201A08;
    case 210u: goto L_00201A20;
    case 211u: goto L_00201A28;
    case 212u: goto L_00201A30;
    case 213u: goto L_00201A40;
    case 214u: goto L_00201A48;
    case 215u: goto L_00201A50;
    case 216u: goto L_00201A60;
    case 217u: goto L_00201A68;
    case 218u: goto L_00201A70;
    case 219u: goto L_00201AE4;
    case 220u: goto L_00201B58;
    case 221u: goto L_00201B64;
    case 222u: goto L_00201B74;
    case 223u: goto L_00201B9C;
    case 224u: goto L_00201BA4;
    case 225u: goto L_00201BAC;
    case 226u: goto L_00201BB4;
    case 227u: goto L_00201BC4;
    case 228u: goto L_00201C60;
    case 229u: goto L_00201D10;
    case 230u: goto L_00201D20;
    case 231u: goto L_00201D24;
    case 232u: goto L_00201D28;
    case 233u: goto L_00201DB0;
    case 234u: goto L_00201E00;
    case 235u: goto L_00201E20;
    case 236u: goto L_00201E70;
    case 237u: goto L_00201F30;
    case 238u: goto L_00201F48;
    case 239u: goto L_00201F50;
    case 240u: goto L_00201F58;
    case 241u: goto L_00201F68;
    case 242u: goto L_00201F70;
    case 243u: goto L_00201F78;
    case 244u: goto L_00201F88;
    case 245u: goto L_00201F90;
    case 246u: goto L_00201F98;
    case 247u: goto L_00202008;
    case 248u: goto L_00202020;
    case 249u: goto L_00202030;
    case 250u: goto L_00202034;
    case 251u: goto L_002020B0;
    case 252u: goto L_002020C0;
    case 253u: goto L_002020E0;
    case 254u: goto L_002020E8;
    case 255u: goto L_00202120;
    case 256u: goto L_00202128;
    case 257u: goto L_00202138;
    case 258u: goto L_00202148;
    case 259u: goto L_00202154;
    case 260u: goto L_00202160;
    case 261u: goto L_00202170;
    case 262u: goto L_00202178;
    case 263u: goto L_00202188;
    case 264u: goto L_00202190;
    case 265u: goto L_002021E0;
    case 266u: goto L_00202220;
    case 267u: goto L_00202240;
    case 268u: goto L_00202254;
    case 269u: goto L_002022B0;
    case 270u: goto L_002022B8;
    case 271u: goto L_002022C8;
    case 272u: goto L_002022D8;
    case 273u: goto L_002022E4;
    case 274u: goto L_002022F0;
    case 275u: goto L_00202300;
    case 276u: goto L_00202308;
    case 277u: goto L_00202318;
    case 278u: goto L_00202320;
    case 279u: goto L_00202390;
    case 280u: goto L_002023BC;
    case 281u: goto L_002023E0;
    case 282u: goto L_00202420;
    case 283u: goto L_00202424;
    case 284u: goto L_00202428;
    case 285u: goto L_00202438;
    case 286u: goto L_00202448;
    case 287u: goto L_00202454;
    case 288u: goto L_00202460;
    case 289u: goto L_00202470;
    case 290u: goto L_00202478;
    case 291u: goto L_00202488;
    case 292u: goto L_00202490;
    case 293u: goto L_002024F8;
    case 294u: goto L_0020251C;
    case 295u: goto L_00202524;
    case 296u: goto L_00202540;
    case 297u: goto L_002025D8;
    case 298u: goto L_002025E0;
    case 299u: goto L_002025F0;
    case 300u: goto L_002025F8;
    case 301u: goto L_00202604;
    case 302u: goto L_00202614;
    case 303u: goto L_00202630;
    case 304u: goto L_00202670;
    case 305u: goto L_00202680;
    case 306u: goto L_002026E0;
    case 307u: goto L_00202704;
    case 308u: goto L_00202758;
    case 309u: goto L_0020276C;
    case 310u: goto L_00202790;
    case 311u: goto L_002027A8;
    case 312u: goto L_002027B8;
    case 313u: goto L_00202814;
    case 314u: goto L_00202840;
    case 315u: goto L_00202860;
    case 316u: goto L_00202910;
    case 317u: goto L_002029F8;
    case 318u: goto L_00202C14;
    case 319u: goto L_00202C1C;
    case 320u: goto L_00202C50;
    case 321u: goto L_00202CF8;
    case 322u: goto L_00202D0C;
    case 323u: goto L_00202D18;
    case 324u: goto L_00202D24;
    case 325u: goto L_00202E70;
    case 326u: goto L_00202EA0;
    case 327u: goto L_00202F64;
    case 328u: goto L_00202F7C;
    case 329u: goto L_00202F8C;
    case 330u: goto L_00202F94;
    case 331u: goto L_00202F9C;
    case 332u: goto L_00202FA4;
    case 333u: goto L_00202FAC;
    case 334u: goto L_00202FB4;
    case 335u: goto L_00202FE0;
    case 336u: goto L_00202FF0;
    case 337u: goto L_00203000;
    case 338u: goto L_00203048;
    case 339u: goto L_00203050;
    case 340u: goto L_0020305C;
    case 341u: goto L_00203080;
    case 342u: goto L_00203118;
    case 343u: goto L_00203120;
    case 344u: goto L_00203140;
    case 345u: goto L_0020320C;
    case 346u: goto L_00203218;
    case 347u: goto L_00203224;
    case 348u: goto L_00203230;
    case 349u: goto L_0020323C;
    case 350u: goto L_00203248;
    case 351u: goto L_002035F4;
    case 352u: goto L_00203610;
    case 353u: goto L_002036DC;
    case 354u: goto L_002036E8;
    case 355u: goto L_002036F4;
    case 356u: goto L_00203700;
    case 357u: goto L_0020370C;
    case 358u: goto L_00203718;
    case 359u: goto L_00203A78;
    case 360u: goto L_00203B10;
    case 361u: goto L_00203B1C;
    case 362u: goto L_00203B28;
    case 363u: goto L_00203B34;
    case 364u: goto L_00203B40;
    case 365u: goto L_00203B4C;
    case 366u: goto L_00203E60;
    case 367u: goto L_00203E9C;
    case 368u: goto L_00203F68;
    case 369u: goto L_00203FA0;
    default: bad_entry(c, 0x00200000u); return;
    }
L_00200000:
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 1;
L_00200004:
    st32((c.r[17].w[0] + 64u), c.f[0]);
    c.budget -= 1;
L_00200008:
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.budget -= 1;
L_0020000C:
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 1;
L_00200010:
    c.f[2] = ld32((c.r[16].w[0] + 52u));
    c.budget -= 1;
L_00200014:
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 1;
L_00200018:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 1;
L_0020001C:
    c.budget -= 2;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_00200028; } }
    goto L_00200024;
L_00200020:
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 1;
L_00200024:
    st32((c.r[17].w[0] + 104u), c.f[2]);
    c.budget -= 1;
L_00200028:
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00200044; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);  if (t) { goto L_0020004C; } }
    goto L_00200044;
L_00200040:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.budget -= 1;
L_00200044:
    c.f[1] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.budget -= 2;
L_0020004C:
    c.f[0] = c.r[2].w[0];
    c.budget -= 1;
L_00200050:
    c.budget -= 1;
L_00200054:
    st32((c.r[17].w[0] + 72u), c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 2;
L_0020005C:
    c.budget -= 1;
L_00200060:
    st32((c.r[17].w[0] + 116u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00200088; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200078u);  if (depth < kMaxDepth) unit_0040(c, 120u, depth + 1u); else { c.pc = 0x00200DD0u; return; } if (c.pc != 0x00200078u) [[unlikely]] return; }
L_00200078:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00200088; } }
L_00200080:
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_00200088:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200098u); set32(c.r[6], c.r[17].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00200098u) [[unlikely]] return; }
L_00200098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002000A0u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x002000A0u) [[unlikely]] return; }
    goto L_002000A0;
L_0020009C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_002000A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002000A8u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002000A8u) [[unlikely]] return; }
L_002000A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.budget -= 1;
L_002000AC:
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002000B8u); set32(c.r[4], c.r[4].w[0] - 24784u);  if (depth < kMaxDepth) unit_0009(c, 197u, depth + 1u); else { c.pc = 0x00126FE0u; return; } if (c.pc != 0x002000B8u) [[unlikely]] return; }
L_002000B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002000C0u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002000C0u) [[unlikely]] return; }
    goto L_002000C0;
L_002000BC:
    set32(c.r[4], c.r[17].w[0] + 192u);
    c.budget -= 1;
L_002000C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002000C8u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002000C8u) [[unlikely]] return; }
L_002000C8:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.budget -= 1;
L_002000CC:
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002000D8u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002000D8u) [[unlikely]] return; }
L_002000D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002000E0u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x002000E0u) [[unlikely]] return; }
L_002000E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002000E8u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002000E8u) [[unlikely]] return; }
L_002000E8:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 564u));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00200218; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 580u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00200218; } }
    goto L_00200104;
L_00200100:
    c.budget -= 1;
L_00200104:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[2], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00200130; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], 0u + 36u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00200130; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020012Cu); set32(c.r[4], ld32((c.r[16].w[0] + 264u)));  if (depth < kMaxDepth) unit_00B1(c, 250u, depth + 1u); else { c.pc = 0x003C5FD0u; return; } if (c.pc != 0x0020012Cu) [[unlikely]] return; }
L_0020012C:
    c.budget -= 1;
L_00200130:
    st16((c.r[17].w[0] + 560u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 515u));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 515u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00200150; } }
    goto L_00200144;
L_00200140:
    c.budget -= 1;
L_00200144:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 562u));
    c.r[2].d[0] = c.r[2].d[0] ^ 16ull;
    st16((c.r[17].w[0] + 562u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00200150:
    set32(c.r[2], ld32((c.r[16].w[0] + 264u)));
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[5], c.r[17].w[0] + 640u);
    st32((c.r[17].w[0] + 264u), c.r[2].w[0]);
    c.budget -= 4;
L_00200160:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 270u)));
    st8((c.r[17].w[0] + 270u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 268u)));
    c.budget -= 3;
L_0020016C:
    st8((c.r[17].w[0] + 268u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 269u)));
    st8((c.r[17].w[0] + 269u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 515u));
    st8((c.r[17].w[0] + 515u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 562u));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st16((c.r[17].w[0] + 562u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 64u), 0u);
    st32((c.r[17].w[0] + 116u), 0u);
    st32((c.r[17].w[0] + 504u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002001A0u); st32((c.r[17].w[0] + 508u), 0u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002001A0u) [[unlikely]] return; }
L_002001A0:
    set32(c.r[4], c.r[17].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002001ACu); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002001ACu) [[unlikely]] return; }
L_002001AC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[17].w[0] + 656u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002001BCu); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x002001BCu) [[unlikely]] return; }
L_002001BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[7], c.r[17].w[0] + 192u);
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[29].w[0] + 68u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002001E4u); st32((c.r[29].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_002E(c, 179u, depth + 1u); else { c.pc = 0x001BA240u; return; } if (c.pc != 0x002001E4u) [[unlikely]] return; }
L_002001E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002001ECu); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002001ECu) [[unlikely]] return; }
L_002001EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002001F4u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x002001F4u) [[unlikely]] return; }
    goto L_002001F4;
L_002001F0:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 1;
L_002001F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002001FCu); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002001FCu) [[unlikely]] return; }
L_002001FC:
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 1;
L_00200200:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020020Cu); set32(c.r[5], c.r[17].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0020020Cu) [[unlikely]] return; }
    goto L_0020020C;
L_00200208:
    set32(c.r[5], c.r[17].w[0] + 208u);
    c.budget -= 1;
L_0020020C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00200500; } }
L_00200218:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 560u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.r[3].d[0] = c.r[3].d[0] & 166ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_002002E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200238u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x00200238u) [[unlikely]] return; }
L_00200238:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0020024C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020024C:
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    set32(c.r[5], 0u + 1u);
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00200290; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44F10000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
L_00200280:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00200290; } }
L_0020028C:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00200290:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002002B8; } }
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002002B8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002002B8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002002E0; } }
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44F10000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002002E0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002002E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00200318; } }
L_002002E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002002F8u); set32(c.r[4], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x002002F8u) [[unlikely]] return; }
L_002002F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x442F0000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 2;
L_00200300:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], 0u + 1u);  if (t) { goto L_00200314; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00200314:
    c.budget -= 1;
L_00200318:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00200400; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[16], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 144u);  if (t) { goto L_002003B0; } }
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200358u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0012(c, 159u, depth + 1u); else { c.pc = 0x00149A80u; return; } if (c.pc != 0x00200358u) [[unlikely]] return; }
L_00200358:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002003B0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8661u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200370u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_001A(c, 95u, depth + 1u); else { c.pc = 0x001696C0u; return; } if (c.pc != 0x00200370u) [[unlikely]] return; }
L_00200370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200378u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_001A(c, 61u, depth + 1u); else { c.pc = 0x00168A20u; return; } if (c.pc != 0x00200378u) [[unlikely]] return; }
L_00200378:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200384u); set32(c.r[5], 0u + 130u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x00200384u) [[unlikely]] return; }
    goto L_00200384;
L_00200380:
    set32(c.r[5], 0u + 130u);
    c.budget -= 1;
L_00200384:
    set32(c.r[2], c.r[29].w[0] + 48u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[17].w[0] + 32u), c.f[3]);
    st32((c.r[17].w[0] + 36u), c.f[2]);
    st32((c.r[17].w[0] + 40u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 44u), c.f[0]);  if (t) { goto L_002003D0; } }
    c.budget -= 1;
L_002003B0:
    c.f[3] = ld32((c.r[17].w[0] + 144u));
    c.f[2] = ld32((c.r[17].w[0] + 148u));
    c.f[1] = ld32((c.r[17].w[0] + 152u));
    c.f[0] = ld32((c.r[17].w[0] + 156u));
    st32((c.r[17].w[0] + 32u), c.f[3]);
    st32((c.r[17].w[0] + 36u), c.f[2]);
    st32((c.r[17].w[0] + 40u), c.f[1]);
    st32((c.r[17].w[0] + 44u), c.f[0]);
    c.budget -= 8;
L_002003D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.f[2] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = ld32((c.r[17].w[0] + 72u));
    c.budget -= 3;
L_002003DC:
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 72u), c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 116u), c.f[0]);  if (t) { goto L_00200420; } }
    c.budget -= 1;
L_00200400:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00200420; } }
L_00200408:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_00200420:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002004F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200444u);  if (depth < kMaxDepth) unit_0040(c, 109u, depth + 1u); else { c.pc = 0x00200AD0u; return; } if (c.pc != 0x00200444u) [[unlikely]] return; }
L_00200444:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002004E8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 11u)));
    c.budget -= 1;
L_00200450:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[7], c.r[7].w[0] - 24688u);
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
L_00200460:
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    st8((c.r[17].w[0] + 11u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 2;
L_00200468:
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[2].w[0] + 16u), c.f[0]);
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002004F0; } }
    c.budget -= 1;
L_002004E8:
    set32(c.r[2], 0u + 1u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002004F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002004F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 106u, depth + 1u); else { c.pc = 0x00200A30u; return; } if (c.pc != 0x002004F8u) [[unlikely]] return; }
L_002004F8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00200500:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00200520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 24656u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020054Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020054Cu) [[unlikely]] return; }
L_0020054C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200554u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 106u, depth + 1u); else { c.pc = 0x00200A30u; return; } if (c.pc != 0x00200554u) [[unlikely]] return; }
L_00200554:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00200570:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 24848u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 104u));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002005A8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x002005A8u) [[unlikely]] return; }
L_002005A8:
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
    c.budget -= 12;
L_002005D8:
    c.f[1] = ld32((c.r[17].w[0] + 44u));
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[2] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 104u), c.f[0]);  if (t) { goto L_00200608; } }
    st32((c.r[16].w[0] + 104u), c.f[2]);
    c.budget -= 1;
L_00200608:
    c.f[0] = ld32((c.r[17].w[0] + 56u));
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00200624; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);  if (t) { goto L_0020062C; } }
L_00200624:
    c.f[1] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.budget -= 2;
L_0020062C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[16].w[0] + 32u);
    set32(c.r[6], c.r[16].w[0] + 128u);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200650u); st32((c.r[16].w[0] + 116u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00200650u) [[unlikely]] return; }
L_00200650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200658u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x00200658u) [[unlikely]] return; }
L_00200658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200660u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00200660u) [[unlikely]] return; }
L_00200660:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200670u); set32(c.r[4], c.r[4].w[0] - 24784u);  if (depth < kMaxDepth) unit_0009(c, 197u, depth + 1u); else { c.pc = 0x00126FE0u; return; } if (c.pc != 0x00200670u) [[unlikely]] return; }
L_00200670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200678u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00200678u) [[unlikely]] return; }
L_00200678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200680u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00200680u) [[unlikely]] return; }
L_00200680:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200690u); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00200690u) [[unlikely]] return; }
L_00200690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200698u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x00200698u) [[unlikely]] return; }
L_00200698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002006A0u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002006A0u) [[unlikely]] return; }
L_002006A0:
    c.f[1] = ld32((c.r[16].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 112u), c.f[1]);  if (t) { goto L_002006D8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002006D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002006F0:
    c.f[3] = ld32((c.r[4].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.f[2] = ld32((c.r[4].w[0] + 72u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    st32((c.r[4].w[0] + 72u), c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 116u), c.f[1]);  if (t) { goto L_00200728; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00200728:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00200730:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_00200740:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[19].w[0] + 304u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 51u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200788u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00200788u) [[unlikely]] return; }
L_00200788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200790u); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x00200790u) [[unlikely]] return; }
L_00200790:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002007A0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x002007A0u) [[unlikely]] return; }
L_002007A0:
    set32(c.r[5], c.r[16].w[0] + 16u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002007B0u); set32(c.r[6], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x002007B0u) [[unlikely]] return; }
L_002007B0:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002007BCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x002007BCu) [[unlikely]] return; }
L_002007BC:
    c.f[13] = ld32((c.r[29].w[0] + 152u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002007C8u); c.f[12] = ld32((c.r[29].w[0] + 144u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x002007C8u) [[unlikely]] return; }
L_002007C8:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[19].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002007D8u); st32((c.r[19].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002007D8u) [[unlikely]] return; }
L_002007D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002007E0u); set32(c.r[4], ld32((c.r[19].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002007E0u) [[unlikely]] return; }
L_002007E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002007E8u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002007E8u) [[unlikely]] return; }
L_002007E8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002007F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002009B0; } }
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 1;
L_00200800:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00200834; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 32501u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00200850; } }
L_00200834:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[28].w[0] - 32501u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_00200850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200858u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00200858u) [[unlikely]] return; }
L_00200858:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull | 32768ull;  if (t) { goto L_00200870; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200870u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00200870u) [[unlikely]] return; }
L_00200870:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[19].w[0] + 112u));
    c.f[2] = ld32((c.r[18].w[0] + 12u));
    c.f[1] = ld32((c.r[19].w[0] + 116u));
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    c.f[14] = c.r[2].w[0];
    c.f[12] = fp::mul(c.f[3], c.f[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200894u); c.f[13] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00200894u) [[unlikely]] return; }
L_00200894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020089Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x0020089Cu) [[unlikely]] return; }
L_0020089C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8661u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00200900; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002008E8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002008E8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002008D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00200950; } }
L_002008D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 24640u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20300u), c.r[2].w[0]);  if (t) { goto L_00200950; } }
    c.budget -= 1;
L_002008E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 24000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20300u), c.r[2].w[0]);  if (t) { goto L_00200950; } }
    c.budget -= 1;
L_00200900:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00200940; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00200940; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00200928; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00200950; } }
L_00200928:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 23360u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20300u), c.r[2].w[0]);  if (t) { goto L_00200950; } }
    c.budget -= 1;
L_00200940:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 3;
L_0020094C:
    st32((c.r[1].w[0] + 20300u), c.r[2].w[0]);
    c.budget -= 1;
L_00200950:
    set32(c.r[2], c.r[29].w[0] + 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], 0u + 2u);
    st32((c.r[1].w[0] + 20240u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 32504u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200970u); st32((c.r[1].w[0] + 20260u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x00200970u) [[unlikely]] return; }
L_00200970:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20280u), c.r[2].w[0]);
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st16((c.r[1].w[0] + 20286u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002009B0u); st32((c.r[1].w[0] + 20288u), 0u);  if (depth < kMaxDepth) unit_0067(c, 136u, depth + 1u); else { c.pc = 0x0029E270u; return; } if (c.pc != 0x002009B0u) [[unlikely]] return; }
L_002009B0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002007F0u | kUnwind; return; } goto L_002007F0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_002009E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[4].w[0] + 304u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_002009F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200A00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 112u, depth + 1u); else { c.pc = 0x00200B20u; return; } if (c.pc != 0x00200A00u) [[unlikely]] return; }
L_00200A00:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 20u);
    c.r[3].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002009F8u | kUnwind; return; } goto L_002009F8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00200A30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[1].d[0] = c.r[18].sd[0] < 6ll ? 1ull : 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[19].w[0] + 304u);
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00200AB0; } }
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00200A70:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] << 2);  if (t) { goto L_00200AA0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 22080u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00200A98u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00200A98u) [[unlikely]] return; }
L_00200A98:
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_00200AA0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00200A70u | kUnwind; return; } goto L_00200A70; } }
L_00200AB0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00200AD0:
    set32(c.r[4], c.r[4].w[0] + 304u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00200B00; } }
L_00200AE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00200AF8; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
L_00200AF8:
    set32(c.r[4], c.r[4].w[0] + 20u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_00200B00:
    c.r[1].d[0] = c.r[5].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00200B18; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00200AE0u | kUnwind; return; } goto L_00200AE0; } }
    c.budget -= 1;
L_00200B18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00200B20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 3;
L_00200B2C:
    set32(c.r[6], 0u + 20u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200B3Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00200B3Cu) [[unlikely]] return; }
L_00200B3C:
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00200B60:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00200B8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 12u), c.f[0]);  if (t) { goto L_00200B94; } }
L_00200B8C:
    c.f[0] = c.r[2].w[0];
    st32((c.r[5].w[0] + 12u), c.f[0]);
    c.budget -= 2;
L_00200B94:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00200BA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[4].w[0] - 24688u);
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = c.r[3].w[0];
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[5].w[0] + 4u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[4] = ld32((c.r[2].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[4]));
    c.budget -= 24;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00200D00; } }
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00200D00; } }
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[3] = ld32((c.r[2].w[0] + 16u));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    c.f[1] = fp::sub(c.f[4], c.f[1]);
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 12u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[4] = ld32((c.r[2].w[0] + 20u));
    c.f[3] = ld32((c.r[2].w[0] + 8u));
    c.f[2] = ld32((c.r[2].w[0] + 12u));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 1u, c.f[3], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 16u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 34;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00200CA8; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00200CA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);  if (t) { goto L_00200CF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[5].w[0] + 8u), c.f[1]);  if (t) { goto L_00200CF8; } }
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.budget -= 2;
L_00200CF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00200D10; } }
L_00200D00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200D08u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 112u, depth + 1u); else { c.pc = 0x00200B20u; return; } if (c.pc != 0x00200D08u) [[unlikely]] return; }
L_00200D08:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00200D10:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00200D20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00200DC0; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[6], ld32((c.r[4].w[0] + 504u)));
    set32(c.r[3], c.r[3].w[0] - 24848u);
    set32(c.r[5], c.r[5].w[0] << 6);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 33u)));
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00200D98; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00200D98; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00200DB0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00200DB0; } }
L_00200D98:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 512u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 504u), 0u);  if (t) { goto L_00200DC0; } }
    c.budget -= 1;
L_00200DB0:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 34u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 504u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200DC0u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_003B(c, 238u, depth + 1u); else { c.pc = 0x001EE9F0u; return; } if (c.pc != 0x00200DC0u) [[unlikely]] return; }
L_00200DC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00200DD0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 24848u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[4].w[0] + 504u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[17].d[0] = c.r[18].d[0] ^ 0ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    c.r[17].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00200E60; } }
    c.f[12] = ld32((c.r[19].w[0] + 36u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200E20u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 244u, depth + 1u); else { c.pc = 0x001FA4C0u; return; } if (c.pc != 0x00200E20u) [[unlikely]] return; }
L_00200E20:
    set32(c.r[4], c.r[18].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200E30u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x00200E30u) [[unlikely]] return; }
L_00200E30:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00200E40; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00200E40:
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_00200E5C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00200E5C:
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 1;
L_00200E60:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00200E90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 8;
L_00200EB0:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200EC0u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x00200EC0u) [[unlikely]] return; }
L_00200EC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00200F30; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[7], 0u + 17u);
    set32(c.r[6], 0u + 12u);
    set32(c.r[3], c.r[3].w[0] + 3936u);
    set32(c.r[2], c.r[2].w[0] - 16u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 24u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200F18u); st32((c.r[17].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x00200F18u) [[unlikely]] return; }
L_00200F18:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 29360u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00200F30u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x00200F30u) [[unlikely]] return; }
L_00200F30:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00200EB0u | kUnwind; return; } goto L_00200EB0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00200F60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 21968u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00200000u < 16384u) { entry = entries_0040[(t - 0x00200000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00200F80:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[6], 0u + 8192u);
    set32(c.r[5], 0u + 25600u);
    set32(c.r[3], 0u + 16384u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st16((c.r[4].w[0] + 562u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 566u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 88u), 0u);
    st16((c.r[4].w[0] + 500u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 498u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 16;
    { st16((c.r[4].w[0] + 496u), static_cast<std::uint16_t>(c.r[2].w[0]));  goto L_00200FC0; }
L_00200FC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00201170; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00200FF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00201300; } }
L_00200FF4:
    c.budget -= 1;
L_00200FF8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00201030; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[6], 0u + 72u);
    c.budget -= 5;
L_0020101C:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201028u); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003F(c, 124u, depth + 1u); else { c.pc = 0x001FD300u; return; } if (c.pc != 0x00201028u) [[unlikely]] return; }
L_00201028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201030u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x00201030u) [[unlikely]] return; }
L_00201030:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 2176u);  if (t) { goto L_00201050; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201048u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00201048u) [[unlikely]] return; }
L_00201048:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00201058; } }
L_00201050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201058u); set32(c.r[4], c.r[16].w[0] + 2432u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00201058u) [[unlikely]] return; }
L_00201058:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[4].w[0] - 22064u);
    set32(c.r[3], c.r[3].w[0] - 22060u);
    set32(c.r[2], c.r[2].w[0] - 22056u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.f[13] = ld32((c.r[3].w[0]));
    c.f[14] = ld32((c.r[2].w[0]));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201094u); c.f[12] = ld32((c.r[4].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00201094u) [[unlikely]] return; }
L_00201094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020109Cu); set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x0020109Cu) [[unlikely]] return; }
L_0020109C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002010A4u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002010A4u) [[unlikely]] return; }
L_002010A4:
    set32(c.r[4], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 322u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00201300; } }
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 2;
L_002010C8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002010E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002010DCu); set32(c.r[4], c.r[16].w[0] + 2176u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002010DCu) [[unlikely]] return; }
L_002010DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002010F0; } }
    c.budget -= 1;
L_002010E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002010F0u); set32(c.r[4], c.r[16].w[0] + 2432u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x002010F0u) [[unlikely]] return; }
L_002010F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] - 22064u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020110Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x0020110Cu) [[unlikely]] return; }
L_0020110C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201114u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00201114u) [[unlikely]] return; }
L_00201114:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[5], c.r[17].w[0] + 48u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201130u); st32((c.r[29].w[0] + 56u), 0u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x00201130u) [[unlikely]] return; }
L_00201130:
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 16384u);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 80u));
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201158u); st32((c.r[17].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x00201158u) [[unlikely]] return; }
L_00201158:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201168u); st16((c.r[17].w[0] + 560u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_006A(c, 150u, depth + 1u); else { c.pc = 0x002AA460u; return; } if (c.pc != 0x00201168u) [[unlikely]] return; }
L_00201168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00201300; } }
L_00201170:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x44F10000u);  if (t) { goto L_002011C0; } }
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002011C0; } }
    c.f[2] = ld32((c.r[17].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002011C0; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002011D0; } }
    c.budget -= 1;
L_002011C0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002011D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002011D8u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x002011D8u) [[unlikely]] return; }
L_002011D8:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00201200; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 560u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00201200; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 564u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00201238; } }
L_00201200:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[6], 0u + 72u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201224u); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003F(c, 124u, depth + 1u); else { c.pc = 0x001FD300u; return; } if (c.pc != 0x00201224u) [[unlikely]] return; }
L_00201224:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020122Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x0020122Cu) [[unlikely]] return; }
L_0020122C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00201300; } }
    c.budget -= 1;
L_00201238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201240u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 299u, depth + 1u); else { c.pc = 0x0017EEE0u; return; } if (c.pc != 0x00201240u) [[unlikely]] return; }
L_00201240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201248u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00201248u) [[unlikely]] return; }
L_00201248:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[5], c.r[17].w[0] + 48u);
    st32((c.r[29].w[0] + 48u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201264u); st32((c.r[29].w[0] + 56u), 0u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x00201264u) [[unlikely]] return; }
L_00201264:
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 40u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.r[2].d[0] = c.r[3].sd[0] < 20480ll ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 20480u);  if (t) { goto L_002012B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_002012C0; } }
    c.budget -= 1;
L_002012B0:
    set32(c.r[2], c.r[3].w[0] + 64u);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 80u));
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 4;
L_002012C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002012C8u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002012C8u) [[unlikely]] return; }
L_002012C8:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002012D8u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002012D8u) [[unlikely]] return; }
L_002012D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002012E0u); set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002012E0u) [[unlikely]] return; }
L_002012E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002012E8u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002012E8u) [[unlikely]] return; }
L_002012E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002012F0u); set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x002012F0u) [[unlikely]] return; }
L_002012F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002012F8u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002012F8u) [[unlikely]] return; }
L_002012F8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00201300:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00201320:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00201330:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_00201340:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 4u));
    set32(c.r[16], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != c.r[16].d[0]; c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00201380; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_00201380:
    c.r[1].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00201478; } }
L_00201390:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002013A0u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x002013A0u) [[unlikely]] return; }
L_002013A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00201460; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[7], 0u + 17u);
    set32(c.r[6], 0u + 13u);
    set32(c.r[3], c.r[3].w[0] + 5280u);
    set32(c.r[2], c.r[2].w[0] + 8384u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[20].w[0] + 4u));
    c.r[6].d[0] = c.r[6].d[0] & 15ull;
    st8((c.r[19].w[0] + 10u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[19].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 168u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 24u), c.r[21].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002013FCu); st32((c.r[19].w[0] + 28u), c.r[20].w[0]);  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x002013FCu) [[unlikely]] return; }
L_002013FC:
    st32((c.r[19].w[0] + 448u), c.r[18].w[0]);
    c.budget -= 1;
L_00201400:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 2;
L_00201408:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00201448; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 515u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] - 21888u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 29360u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020143Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x0020143Cu) [[unlikely]] return; }
L_0020143C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00201460; } }
    c.budget -= 1;
L_00201448:
    c.r[7].d[0] = ld8((c.r[20].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 29360u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201460u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x00201460u) [[unlikely]] return; }
L_00201460:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.r[18].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 96u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00201390u | kUnwind; return; } goto L_00201390; } }
    c.budget -= 1;
L_00201478:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002014A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_002014A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 21872u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00200000u < 16384u) { entry = entries_0040[(t - 0x00200000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002014C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[18].w[0] + 28u));
    st32((c.r[4].w[0] + 112u), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 19;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[19], c.r[20].w[0] + 304u);  if (t) { goto L_00201514; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 116u), c.f[0]);  if (t) { goto L_0020151C; } }
L_00201514:
    c.f[0] = ld32((c.r[18].w[0] + 28u));
    st32((c.r[20].w[0] + 116u), c.f[0]);
    c.budget -= 2;
L_0020151C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[20].w[0] + 120u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 160u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 40u)));
    st16((c.r[20].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 515u));
    st8((c.r[19].w[0] + 148u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    st32((c.r[20].w[0] + 104u), c.f[0]);
    st32((c.r[20].w[0] + 64u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 10u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 19970u);  if (t) { goto L_00201560; } }
    set32(c.r[2], 0u + 1024u);
    st16((c.r[20].w[0] + 562u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 566u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00201570; } }
L_00201560:
    set32(c.r[2], 0u + 16384u);
    st16((c.r[20].w[0] + 562u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = 0ull | 58368ull;
    st16((c.r[20].w[0] + 566u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00201570:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00201590; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 562u));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st16((c.r[20].w[0] + 562u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00201590:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002015C0; } }
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[20].w[0] + 108u), c.f[0]);
    st8((c.r[20].w[0] + 512u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[20].w[0] + 504u), 0u);
    st32((c.r[20].w[0] + 508u), 0u);
    st16((c.r[20].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 8;
L_002015C0:
    st16((c.r[20].w[0] + 560u), static_cast<std::uint16_t>(0u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 2u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00201640; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 270u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = c.r[5].d[0] & 127ull;  if (t) { goto L_002015F8; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002015ECu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x002015ECu) [[unlikely]] return; }
L_002015EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00201640; } }
    c.budget -= 1;
L_002015F8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00201610; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00201628; } }
    c.budget -= 1;
L_00201610:
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201620u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 150u, depth + 1u); else { c.pc = 0x002AA460u; return; } if (c.pc != 0x00201620u) [[unlikely]] return; }
L_00201620:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00201640; } }
L_00201628:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00201640; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020163Cu);  if (depth < kMaxDepth) unit_006A(c, 150u, depth + 1u); else { c.pc = 0x002AA460u; return; } if (c.pc != 0x0020163Cu) [[unlikely]] return; }
L_0020163C:
    c.budget -= 1;
L_00201640:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00201670; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201664u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00201664u) [[unlikely]] return; }
L_00201664:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00201680; } }
    c.budget -= 1;
L_00201670:
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020167Cu); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x0020167Cu) [[unlikely]] return; }
L_0020167C:
    c.budget -= 1;
L_00201680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201688u); set32(c.r[4], c.r[20].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00201688u) [[unlikely]] return; }
L_00201688:
    set32(c.r[4], c.r[18].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201694u); set32(c.r[5], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x00201694u) [[unlikely]] return; }
L_00201694:
    c.f[3] = ld32((c.r[20].w[0] + 32u));
    c.f[2] = ld32((c.r[20].w[0] + 36u));
    c.f[1] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = ld32((c.r[20].w[0] + 44u));
    st32((c.r[20].w[0] + 128u), c.f[3]);
    st32((c.r[20].w[0] + 132u), c.f[2]);
    st32((c.r[20].w[0] + 136u), c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002016B8u); st32((c.r[20].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002016B8u) [[unlikely]] return; }
L_002016B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002016C0u); set32(c.r[4], c.r[20].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x002016C0u) [[unlikely]] return; }
L_002016C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002016C8u); set32(c.r[4], c.r[19].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x002016C8u) [[unlikely]] return; }
L_002016C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002016D0u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 38u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x002016D0u) [[unlikely]] return; }
L_002016D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002016D8u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 36u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x002016D8u) [[unlikely]] return; }
L_002016D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002016E0u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 34u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x002016E0u) [[unlikely]] return; }
L_002016E0:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002017B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002016F8u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x002016F8u) [[unlikely]] return; }
L_002016F8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 6u)));
    c.r[5].d[0] = c.r[2].d[0] & 7ull;
    set32(c.r[2], c.r[5].w[0] << 1);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] - 21936u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 21952u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[16].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201728u); set32(c.r[17], c.r[4].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x00201728u) [[unlikely]] return; }
L_00201728:
    c.r[2].d[0] = c.r[16].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020173Cu); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x0020173Cu) [[unlikely]] return; }
L_0020173C:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201764u); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x00201764u) [[unlikely]] return; }
L_00201764:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 6u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 21952u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[16].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201780u); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x00201780u) [[unlikely]] return; }
L_00201780:
    c.r[2].d[0] = c.r[16].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201794u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x00201794u) [[unlikely]] return; }
L_00201794:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[16].w[0] - c.r[3].w[0]);
    c.r[16].d[0] = c.r[3].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002017B8u); mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]); c.r[4].d[0] = c.lo.d[0];  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x002017B8u) [[unlikely]] return; }
L_002017B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[4].w[0] - 21904u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002017C8u); set32(c.r[5], c.r[20].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x002017C8u) [[unlikely]] return; }
L_002017C8:
    c.f[12] = ld32((c.r[20].w[0] + 104u));
    set32(c.r[4], c.r[20].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002017D8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x002017D8u) [[unlikely]] return; }
L_002017D8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00201878; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[2].w[0] + 64u);  if (t) { goto L_00201878; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002017F8u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002017F8u) [[unlikely]] return; }
L_002017F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201800u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00201800u) [[unlikely]] return; }
L_00201800:
    c.f[13] = ld32((c.r[29].w[0] + 100u));
    c.budget -= 1;
L_00201804:
    c.f[14] = ld32((c.r[29].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201810u); c.f[12] = ld32((c.r[29].w[0] + 96u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00201810u) [[unlikely]] return; }
L_00201810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201818u); set32(c.r[4], c.r[19].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x00201818u) [[unlikely]] return; }
L_00201818:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[20].w[0] + 432u);  if (t) { goto L_00201838; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201830u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x00201830u) [[unlikely]] return; }
L_00201830:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00201848; } }
L_00201838:
    set32(c.r[4], c.r[18].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201844u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x00201844u) [[unlikely]] return; }
L_00201844:
    c.budget -= 1;
L_00201848:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 32u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201858u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_003B(c, 238u, depth + 1u); else { c.pc = 0x001EE9F0u; return; } if (c.pc != 0x00201858u) [[unlikely]] return; }
L_00201858:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00201878; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00201878; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[20].w[0] + 512u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[20].w[0] + 504u), 0u);
    c.budget -= 3;
L_00201878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201880u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 204u, depth + 1u); else { c.pc = 0x002018A0u; return; } if (c.pc != 0x00201880u) [[unlikely]] return; }
L_00201880:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002018A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
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
    c.budget -= 22;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[18], c.r[19].w[0] + 304u);  if (t) { goto L_00201910; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00201910; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020190Cu);  if (depth < kMaxDepth) unit_0040(c, 296u, depth + 1u); else { c.pc = 0x00202540u; return; } if (c.pc != 0x0020190Cu) [[unlikely]] return; }
L_0020190C:
    c.budget -= 1;
L_00201910:
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.f[12] = ld32((c.r[19].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201920u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x00201920u) [[unlikely]] return; }
L_00201920:
    c.f[1] = ld32((c.r[19].w[0] + 48u));
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 52u));
    c.f[0] = ld32((c.r[19].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 56u));
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 40u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 104u));
    c.f[0] = ld32((c.r[19].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 64u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.f[0] = ld32((c.r[19].w[0] + 104u));
    c.f[2] = ld32((c.r[17].w[0] + 16u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 23;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[19].w[0] + 104u), c.f[0]);  if (t) { goto L_00201980; } }
    st32((c.r[19].w[0] + 104u), c.f[2]);
    c.budget -= 1;
L_00201980:
    c.f[2] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002019D0; } }
    c.f[1] = ld32((c.r[19].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002019B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_002019B8; } }
L_002019B0:
    c.f[1] = c.f[2];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.budget -= 2;
L_002019B8:
    c.f[0] = c.r[2].w[0];
    st32((c.r[19].w[0] + 72u), c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 4;
L_002019C8:
    st32((c.r[19].w[0] + 116u), c.f[0]);
    c.budget -= 2;
L_002019D0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_002019F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002019E4u);  if (depth < kMaxDepth) unit_0040(c, 303u, depth + 1u); else { c.pc = 0x00202630u; return; } if (c.pc != 0x002019E4u) [[unlikely]] return; }
L_002019E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002019F0; } }
    st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002019F0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_00201A10; } }
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201A08u); set32(c.r[6], c.r[19].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00201A08u) [[unlikely]] return; }
L_00201A08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00201A20; } }
L_00201A10:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201A20u); set32(c.r[6], c.r[19].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00201A20u) [[unlikely]] return; }
L_00201A20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201A28u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x00201A28u) [[unlikely]] return; }
L_00201A28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201A30u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00201A30u) [[unlikely]] return; }
L_00201A30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201A40u); set32(c.r[4], c.r[4].w[0] - 21904u);  if (depth < kMaxDepth) unit_0009(c, 197u, depth + 1u); else { c.pc = 0x00126FE0u; return; } if (c.pc != 0x00201A40u) [[unlikely]] return; }
L_00201A40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201A48u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00201A48u) [[unlikely]] return; }
L_00201A48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201A50u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00201A50u) [[unlikely]] return; }
L_00201A50:
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201A60u); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00201A60u) [[unlikely]] return; }
L_00201A60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201A68u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x00201A68u) [[unlikely]] return; }
L_00201A68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201A70u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00201A70u) [[unlikely]] return; }
L_00201A70:
    set32(c.r[16], ld32((c.r[19].w[0] + 448u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00201CB8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = ld8((c.r[19].w[0] + 560u));  if (t) { goto L_00201BD0; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 4u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] & 166ull;  if (t) { goto L_00201AA0; } }
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 2;
L_00201AA0:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 564u));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00201BD0; } }
    set32(c.r[16], ld32((c.r[19].w[0] + 580u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00201BD0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[2], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00201AE8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], 0u + 36u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00201AE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201AE4u); set32(c.r[4], ld32((c.r[16].w[0] + 264u)));  if (depth < kMaxDepth) unit_00B1(c, 250u, depth + 1u); else { c.pc = 0x003C5FD0u; return; } if (c.pc != 0x00201AE4u) [[unlikely]] return; }
L_00201AE4:
    c.budget -= 1;
L_00201AE8:
    st16((c.r[19].w[0] + 560u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 515u));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 515u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00201B08; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 562u));
    c.r[2].d[0] = c.r[2].d[0] ^ 16ull;
    st16((c.r[19].w[0] + 562u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00201B08:
    set32(c.r[2], ld32((c.r[16].w[0] + 264u)));
    set32(c.r[4], c.r[19].w[0] + 32u);
    set32(c.r[5], c.r[19].w[0] + 640u);
    st32((c.r[19].w[0] + 264u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 270u)));
    st8((c.r[19].w[0] + 270u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 268u)));
    st8((c.r[19].w[0] + 268u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 269u)));
    st8((c.r[19].w[0] + 269u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 515u));
    st8((c.r[19].w[0] + 515u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 562u));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st16((c.r[19].w[0] + 562u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[19].w[0] + 64u), 0u);
    st32((c.r[19].w[0] + 116u), 0u);
    st32((c.r[19].w[0] + 504u), 0u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201B58u); st32((c.r[19].w[0] + 508u), 0u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00201B58u) [[unlikely]] return; }
L_00201B58:
    set32(c.r[4], c.r[19].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201B64u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x00201B64u) [[unlikely]] return; }
L_00201B64:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[19].w[0] + 656u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201B74u); set32(c.r[6], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00201B74u) [[unlikely]] return; }
L_00201B74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[6], 0u + 3u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[29].w[0] + 100u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201B9Cu); st32((c.r[29].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_002E(c, 179u, depth + 1u); else { c.pc = 0x001BA240u; return; } if (c.pc != 0x00201B9Cu) [[unlikely]] return; }
L_00201B9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201BA4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00201BA4u) [[unlikely]] return; }
L_00201BA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201BACu); set32(c.r[4], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x00201BACu) [[unlikely]] return; }
L_00201BAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201BB4u); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00201BB4u) [[unlikely]] return; }
L_00201BB4:
    c.f[12] = ld32((c.r[19].w[0] + 104u));
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201BC4u); set32(c.r[5], c.r[19].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x00201BC4u) [[unlikely]] return; }
L_00201BC4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00201DD8; } }
L_00201BD0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00201C50; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.f[0] = 0u;
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00201DA8; } }
    c.f[4] = ld32((c.r[19].w[0] + 144u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[3] = ld32((c.r[19].w[0] + 148u));
    c.f[2] = ld32((c.r[19].w[0] + 152u));
    c.f[1] = ld32((c.r[19].w[0] + 156u));
    c.f[0] = c.r[3].w[0];
    st32((c.r[19].w[0] + 32u), c.f[4]);
    st32((c.r[19].w[0] + 36u), c.f[3]);
    st32((c.r[19].w[0] + 40u), c.f[2]);
    st32((c.r[19].w[0] + 44u), c.f[1]);
    c.f[2] = ld32((c.r[19].w[0] + 104u));
    c.f[1] = ld32((c.r[19].w[0] + 72u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 72u), c.f[1]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 116u), c.f[0]);  if (t) { goto L_00201DA8; } }
    c.budget -= 1;
L_00201C50:
    set32(c.r[2], ld32((c.r[28].w[0] - 30368u)));
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201C60u); set32(c.r[4], c.r[2].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x00201C60u) [[unlikely]] return; }
L_00201C60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x442F0000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00201C98; } }
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = ld32((c.r[19].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00201DA8; } }
L_00201C98:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00201DA8; } }
    c.budget -= 1;
L_00201CB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[6] = ld32((c.r[19].w[0] + 32u));
    c.f[5] = ld32((c.r[16].w[0] + 32u));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[4] = c.r[2].w[0];
    c.f[5] = fp::add(c.f[6], c.f[5]);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 22u, c.f[5], c.f[4]);
    fpu_div(c, 21u, c.f[2], c.f[4]);
    fpu_div(c, 20u, c.f[0], c.f[4]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201D10u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00201D10u) [[unlikely]] return; }
L_00201D10:
    c.f[12] = c.f[22];
    c.f[13] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201D20u); c.f[14] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00201D20u) [[unlikely]] return; }
L_00201D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201D28u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00201D28u) [[unlikely]] return; }
    goto L_00201D28;
L_00201D24:
    set32(c.r[4], c.r[16].w[0] + 192u);
    c.budget -= 1;
L_00201D28:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00201DA8; } }
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], 0u + 1u);
    st8((c.r[19].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00201DA8; } }
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00201DA8; } }
    c.f[4] = ld32((c.r[19].w[0] + 144u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[3] = ld32((c.r[19].w[0] + 148u));
    c.f[2] = ld32((c.r[19].w[0] + 152u));
    c.f[1] = ld32((c.r[19].w[0] + 156u));
    c.f[0] = c.r[3].w[0];
    st32((c.r[19].w[0] + 32u), c.f[4]);
    st32((c.r[19].w[0] + 36u), c.f[3]);
    st32((c.r[19].w[0] + 40u), c.f[2]);
    st32((c.r[19].w[0] + 44u), c.f[1]);
    c.f[2] = ld32((c.r[19].w[0] + 104u));
    c.f[1] = ld32((c.r[19].w[0] + 72u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 72u), c.f[1]);
    st32((c.r[19].w[0] + 116u), c.f[0]);
    c.budget -= 16;
L_00201DA8:
    set32(c.r[6], c.r[19].w[0] + 192u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 2;
L_00201DB0:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[18], c.r[18].w[0] + 8u);
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00201DB0u | kUnwind; return; } goto L_00201DB0; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00201DD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00201E00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 21856u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00200000u < 16384u) { entry = entries_0040[(t - 0x00200000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00201E20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 28u)));
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    set32(c.r[18], c.r[16].w[0] + 304u);
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    st32((c.r[4].w[0] + 144u), c.f[3]);
    st32((c.r[4].w[0] + 148u), c.f[2]);
    st32((c.r[4].w[0] + 152u), c.f[1]);
    st32((c.r[4].w[0] + 156u), c.f[0]);
    c.f[12] = ld32((c.r[16].w[0] + 104u));
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201E70u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x00201E70u) [[unlikely]] return; }
L_00201E70:
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
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 104u), c.f[0]);  if (t) { goto L_00201ED0; } }
    st32((c.r[16].w[0] + 104u), c.f[2]);
    c.budget -= 1;
L_00201ED0:
    c.f[2] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00201F18; } }
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00201F00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_00201F08; } }
L_00201F00:
    c.f[1] = c.f[2];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.budget -= 2;
L_00201F08:
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 116u), c.f[0]);
    c.budget -= 4;
L_00201F18:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_00201F38; } }
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201F30u); set32(c.r[6], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00201F30u) [[unlikely]] return; }
L_00201F30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00201F48; } }
L_00201F38:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201F48u); set32(c.r[6], c.r[16].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00201F48u) [[unlikely]] return; }
L_00201F48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201F50u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x00201F50u) [[unlikely]] return; }
L_00201F50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201F58u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00201F58u) [[unlikely]] return; }
L_00201F58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201F68u); set32(c.r[4], c.r[4].w[0] - 21904u);  if (depth < kMaxDepth) unit_0009(c, 197u, depth + 1u); else { c.pc = 0x00126FE0u; return; } if (c.pc != 0x00201F68u) [[unlikely]] return; }
L_00201F68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201F70u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00201F70u) [[unlikely]] return; }
L_00201F70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201F78u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00201F78u) [[unlikely]] return; }
L_00201F78:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201F88u); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00201F88u) [[unlikely]] return; }
L_00201F88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201F90u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x00201F90u) [[unlikely]] return; }
L_00201F90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00201F98u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00201F98u) [[unlikely]] return; }
L_00201F98:
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 112u), c.f[0]);  if (t) { goto L_00201FE0; } }
    c.f[1] = ld32((c.r[16].w[0] + 160u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 160u), c.f[1]);  if (t) { goto L_00201FF0; } }
    c.budget -= 1;
L_00201FE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00201FF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00202008; } }
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    st32((c.r[16].w[0] + 116u), c.f[0]);
    c.budget -= 3;
L_00202008:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
L_00202020:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00202030:
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 1;
L_00202034:
    c.f[3] = 0u;
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[3]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00202090; } }
    c.f[2] = ld32((c.r[4].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = ld32((c.r[4].w[0] + 72u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 72u), c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 116u), c.f[0]);  if (t) { goto L_00202080; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00202080:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002020A0; } }
    c.budget -= 1;
L_00202090:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002020A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002020B0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_002020C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 21840u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00200000u < 16384u) { entry = entries_0040[(t - 0x00200000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002020E0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.budget -= 2;
L_002020E8:
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 29024u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[16], c.r[17].w[0] + 304u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 51u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202120u); set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00202120u) [[unlikely]] return; }
L_00202120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202128u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x00202128u) [[unlikely]] return; }
L_00202128:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202138u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x00202138u) [[unlikely]] return; }
L_00202138:
    set32(c.r[5], c.r[18].w[0] + 16u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202148u); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00202148u) [[unlikely]] return; }
L_00202148:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202154u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x00202154u) [[unlikely]] return; }
L_00202154:
    c.f[13] = ld32((c.r[29].w[0] + 136u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202160u); c.f[12] = ld32((c.r[29].w[0] + 128u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x00202160u) [[unlikely]] return; }
L_00202160:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202170u); st32((c.r[17].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00202170u) [[unlikely]] return; }
L_00202170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202178u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00202178u) [[unlikely]] return; }
L_00202178:
    c.f[13] = ld32((c.r[17].w[0] + 116u));
    c.f[14] = ld32((c.r[17].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202188u); c.f[12] = ld32((c.r[17].w[0] + 112u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00202188u) [[unlikely]] return; }
L_00202188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202190u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00202190u) [[unlikely]] return; }
L_00202190:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 148u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);  if (t) { goto L_002021B0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 19648u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] + 20300u), c.r[2].w[0]);  if (t) { goto L_002021C0; } }
L_002021B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 21824u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20300u), c.r[2].w[0]);
    c.budget -= 4;
L_002021C0:
    set32(c.r[2], c.r[29].w[0] + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], 0u + 2u);
    st32((c.r[1].w[0] + 20240u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 32500u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002021E0u); st32((c.r[1].w[0] + 20260u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x002021E0u) [[unlikely]] return; }
L_002021E0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202220u); st32((c.r[1].w[0] + 20288u), 0u);  if (depth < kMaxDepth) unit_0067(c, 136u, depth + 1u); else { c.pc = 0x0029E270u; return; } if (c.pc != 0x00202220u) [[unlikely]] return; }
L_00202220:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00202240:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[2], 0u + 68u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.budget -= 5;
L_00202254:
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[19].w[0] + 304u);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[28].w[0] - 23780u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00830000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 51u)));
    set32(c.r[4], c.r[4].w[0] + 29024u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    c.budget -= 16;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[18], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_00202298; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_00202298:
    set32(c.r[2], 0u + 65u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_002022A8; } }
    set32(c.r[16], 0u + 2u);
    c.budget -= 1;
L_002022A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002022B0u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002022B0u) [[unlikely]] return; }
L_002022B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002022B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x002022B8u) [[unlikely]] return; }
L_002022B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002022C8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x002022C8u) [[unlikely]] return; }
L_002022C8:
    set32(c.r[5], c.r[18].w[0] + 16u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002022D8u); set32(c.r[6], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x002022D8u) [[unlikely]] return; }
L_002022D8:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002022E4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x002022E4u) [[unlikely]] return; }
L_002022E4:
    c.f[13] = ld32((c.r[29].w[0] + 152u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002022F0u); c.f[12] = ld32((c.r[29].w[0] + 144u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x002022F0u) [[unlikely]] return; }
L_002022F0:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202300u); st32((c.r[19].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00202300u) [[unlikely]] return; }
L_00202300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202308u); set32(c.r[4], ld32((c.r[19].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00202308u) [[unlikely]] return; }
L_00202308:
    c.f[13] = ld32((c.r[19].w[0] + 116u));
    c.f[14] = ld32((c.r[19].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202318u); c.f[12] = ld32((c.r[19].w[0] + 112u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00202318u) [[unlikely]] return; }
L_00202318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202320u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00202320u) [[unlikely]] return; }
L_00202320:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[1].w[0] + 20288u), 0u);
    set32(c.r[2], c.r[29].w[0] + 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[4], c.r[16].w[0] << 6);
    st32((c.r[1].w[0] + 20240u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 17472u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 17232u);
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202390u); st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x00202390u) [[unlikely]] return; }
L_00202390:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    set32(c.r[3], c.r[16].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 17280u);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002023BCu); st32((c.r[1].w[0] + 20272u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0067(c, 128u, depth + 1u); else { c.pc = 0x0029E100u; return; } if (c.pc != 0x002023BCu) [[unlikely]] return; }
L_002023BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002023E0:
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
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 51u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202420u); set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00202420u) [[unlikely]] return; }
L_00202420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202428u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00126880u; return; } if (c.pc != 0x00202428u) [[unlikely]] return; }
    goto L_00202428;
L_00202424:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00202428:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202438u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 225u, depth + 1u); else { c.pc = 0x00102370u; return; } if (c.pc != 0x00202438u) [[unlikely]] return; }
L_00202438:
    set32(c.r[5], c.r[18].w[0] + 16u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202448u); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x00202448u) [[unlikely]] return; }
L_00202448:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202454u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x00202454u) [[unlikely]] return; }
L_00202454:
    c.f[13] = ld32((c.r[29].w[0] + 136u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202460u); c.f[12] = ld32((c.r[29].w[0] + 128u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x00202460u) [[unlikely]] return; }
L_00202460:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202470u); st32((c.r[17].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00202470u) [[unlikely]] return; }
L_00202470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202478u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00202478u) [[unlikely]] return; }
L_00202478:
    c.f[13] = ld32((c.r[17].w[0] + 116u));
    c.f[14] = ld32((c.r[17].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202488u); c.f[12] = ld32((c.r[17].w[0] + 112u));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001271F0u; return; } if (c.pc != 0x00202488u) [[unlikely]] return; }
L_00202488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202490u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00202490u) [[unlikely]] return; }
L_00202490:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[29].w[0] + 64u);
    st32((c.r[1].w[0] + 20288u), 0u);
    set32(c.r[4], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20240u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 17216u);
    st32((c.r[1].w[0] + 20244u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 17136u);
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002024F8u); st8((c.r[1].w[0] + 20293u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (depth < kMaxDepth) unit_0048(c, 23u, depth + 1u); else { c.pc = 0x00220380u; return; } if (c.pc != 0x002024F8u) [[unlikely]] return; }
L_002024F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00840000u);
    st32((c.r[1].w[0] + 20276u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 20224u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[2], c.r[2].w[0] - 17152u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020251Cu); st32((c.r[1].w[0] + 20272u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0067(c, 128u, depth + 1u); else { c.pc = 0x0029E100u; return; } if (c.pc != 0x0020251Cu) [[unlikely]] return; }
L_0020251C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202524u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x00202524u) [[unlikely]] return; }
L_00202524:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00202540:
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
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00202618; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 504u)));
    set32(c.r[16], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 41u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002025B0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002025B0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002025C8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002025C8; } }
L_002025B0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 512u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 504u), 0u);  if (t) { goto L_00202618; } }
    c.budget -= 1;
L_002025C8:
    set32(c.r[2], ld32((c.r[17].w[0] + 504u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002025D8u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x002025D8u) [[unlikely]] return; }
L_002025D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002025E0u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002025E0u) [[unlikely]] return; }
L_002025E0:
    c.f[13] = ld32((c.r[29].w[0] + 52u));
    c.f[14] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002025F0u); c.f[12] = ld32((c.r[29].w[0] + 48u));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x002025F0u) [[unlikely]] return; }
L_002025F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002025F8u); set32(c.r[4], c.r[17].w[0] + 368u);  if (depth < kMaxDepth) unit_0009(c, 182u, depth + 1u); else { c.pc = 0x001268B0u; return; } if (c.pc != 0x002025F8u) [[unlikely]] return; }
L_002025F8:
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202604u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x00202604u) [[unlikely]] return; }
L_00202604:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 42u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202614u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_003B(c, 238u, depth + 1u); else { c.pc = 0x001EE9F0u; return; } if (c.pc != 0x00202614u) [[unlikely]] return; }
L_00202614:
    c.budget -= 1;
L_00202618:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00202630:
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
    { const bool t = c.r[16].d[0] != 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002026B0; } }
    c.f[12] = ld32((c.r[18].w[0] + 44u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202670u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 244u, depth + 1u); else { c.pc = 0x001FA4C0u; return; } if (c.pc != 0x00202670u) [[unlikely]] return; }
L_00202670:
    set32(c.r[4], c.r[17].w[0] + 64u);
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202680u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x00202680u) [[unlikely]] return; }
L_00202680:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00202690; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00202690:
    c.f[1] = ld32((c.r[19].w[0] + 64u));
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_002026AC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002026AC:
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 1;
L_002026B0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002026E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202704u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x00202704u) [[unlikely]] return; }
L_00202704:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00202770; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[7], 0u + 17u);
    set32(c.r[6], 0u + 14u);
    set32(c.r[3], c.r[3].w[0] + 10304u);
    set32(c.r[2], c.r[2].w[0] + 12288u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 24u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202758u); st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x00202758u) [[unlikely]] return; }
L_00202758:
    set32(c.r[5], ld32((c.r[17].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020276Cu); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x0020276Cu) [[unlikely]] return; }
L_0020276C:
    c.budget -= 1;
L_00202770:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00202790:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_002027A8:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002027B8u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x002027B8u) [[unlikely]] return; }
L_002027B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00202818; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[8], 0u + 17u);
    set32(c.r[7], 0u + 14u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 17840u);
    set32(c.r[2], c.r[2].w[0] + 18336u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[5].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[6], ld32((c.r[17].w[0] + 24u)));
    st32((c.r[5].w[0] + 24u), c.r[6].w[0]);
    st32((c.r[5].w[0] + 28u), c.r[17].w[0]);
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202814u); st32((c.r[5].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x00202814u) [[unlikely]] return; }
L_00202814:
    c.budget -= 1;
L_00202818:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002027A8u | kUnwind; return; } goto L_002027A8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00202840:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 16960u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00200000u < 16384u) { entry = entries_0040[(t - 0x00200000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00202860:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    set32(c.r[6], 0u + 8193u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    set32(c.r[5], 0u + 25600u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[3].d[0] = 0ull | 32768ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[2], c.r[2].w[0] - 17120u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[10].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[20], c.r[4].w[0] + 304u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[21], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[4].w[0] + 112u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 120u), c.r[7].w[0]);
    st16((c.r[4].w[0] + 562u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 566u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 92u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 100u), 0u);
    st32((c.r[4].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 88u), 0u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[4].w[0] + 304u), c.f[3]);
    st32((c.r[4].w[0] + 308u), c.f[2]);
    st32((c.r[4].w[0] + 312u), c.f[1]);
    st32((c.r[4].w[0] + 316u), c.f[0]);
    st32((c.r[4].w[0] + 384u), 0u);
    c.budget -= 44;
L_00202910:
    st16((c.r[9].w[0] + 16u), static_cast<std::uint16_t>(0u));
    st16((c.r[9].w[0] + 48u), static_cast<std::uint16_t>(0u));
    set32(c.r[10], c.r[10].w[0] + 8u);
    st16((c.r[9].w[0] + 18u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[10].sd[0] < 16ll ? 1ull : 0ull;
    st16((c.r[9].w[0] + 50u), static_cast<std::uint16_t>(0u));
    st16((c.r[9].w[0] + 20u), static_cast<std::uint16_t>(0u));
    st16((c.r[9].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st16((c.r[9].w[0] + 22u), static_cast<std::uint16_t>(0u));
    st16((c.r[9].w[0] + 54u), static_cast<std::uint16_t>(0u));
    st16((c.r[9].w[0] + 24u), static_cast<std::uint16_t>(0u));
    st16((c.r[9].w[0] + 56u), static_cast<std::uint16_t>(0u));
    st16((c.r[9].w[0] + 26u), static_cast<std::uint16_t>(0u));
    st16((c.r[9].w[0] + 58u), static_cast<std::uint16_t>(0u));
    st16((c.r[9].w[0] + 28u), static_cast<std::uint16_t>(0u));
    st16((c.r[9].w[0] + 60u), static_cast<std::uint16_t>(0u));
    st16((c.r[9].w[0] + 30u), static_cast<std::uint16_t>(0u));
    st16((c.r[9].w[0] + 62u), static_cast<std::uint16_t>(0u));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00202910u | kUnwind; return; } goto L_00202910; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[25].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[24].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[16], c.r[16].w[0] - 272u);
    set32(c.r[25], c.r[25].w[0] - 624u);
    set32(c.r[24], c.r[24].w[0] - 976u);
    set32(c.r[15], c.r[15].w[0] - 1328u);
    set32(c.r[14], c.r[14].w[0] - 1680u);
    set32(c.r[13], c.r[13].w[0] - 2032u);
    set32(c.r[12], c.r[12].w[0] - 2384u);
    set32(c.r[11], c.r[11].w[0] - 2736u);
    set32(c.r[10], c.r[10].w[0] - 3088u);
    set32(c.r[9], c.r[9].w[0] - 3440u);
    set32(c.r[8], c.r[8].w[0] - 3792u);
    set32(c.r[7], c.r[7].w[0] - 4144u);
    set32(c.r[6], c.r[6].w[0] - 4496u);
    set32(c.r[5], c.r[5].w[0] - 4848u);
    set32(c.r[3], c.r[3].w[0] - 5200u);
    set32(c.r[2], c.r[2].w[0] - 5552u);
    set32(c.r[23], c.r[23].w[0] - 5904u);
    set32(c.r[30], c.r[30].w[0] - 6256u);
    c.budget -= 38;
L_002029F8:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8656u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[22].d[0] = c.r[18].sd[0] < 17ll ? 1ull : 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[22]);
    set32(c.r[22], c.r[17].w[0] << 4);
    set32(c.r[17], c.r[22].w[0] + c.r[17].w[0]);
    set32(c.r[17], c.r[17].w[0] << 2);
    set32(c.r[17], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[17], c.r[19].w[0] + c.r[17].w[0]);
    st32((c.r[17].w[0]), 0u);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8656u)));
    set32(c.r[17], c.r[22].w[0] << 4);
    set32(c.r[17], c.r[17].w[0] + c.r[22].w[0]);
    set32(c.r[17], c.r[17].w[0] << 2);
    set32(c.r[17], c.r[25].w[0] + c.r[17].w[0]);
    set32(c.r[17], c.r[19].w[0] + c.r[17].w[0]);
    st32((c.r[17].w[0]), 0u);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8656u)));
    set32(c.r[17], c.r[22].w[0] << 4);
    set32(c.r[17], c.r[17].w[0] + c.r[22].w[0]);
    set32(c.r[17], c.r[17].w[0] << 2);
    set32(c.r[17], c.r[24].w[0] + c.r[17].w[0]);
    set32(c.r[17], c.r[19].w[0] + c.r[17].w[0]);
    st32((c.r[17].w[0]), 0u);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8656u)));
    set32(c.r[17], c.r[22].w[0] << 4);
    set32(c.r[17], c.r[17].w[0] + c.r[22].w[0]);
    set32(c.r[17], c.r[17].w[0] << 2);
    set32(c.r[17], c.r[15].w[0] + c.r[17].w[0]);
    set32(c.r[17], c.r[19].w[0] + c.r[17].w[0]);
    st32((c.r[17].w[0]), 0u);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8656u)));
    set32(c.r[17], c.r[22].w[0] << 4);
    set32(c.r[17], c.r[17].w[0] + c.r[22].w[0]);
    set32(c.r[17], c.r[17].w[0] << 2);
    set32(c.r[17], c.r[14].w[0] + c.r[17].w[0]);
    set32(c.r[17], c.r[19].w[0] + c.r[17].w[0]);
    st32((c.r[17].w[0]), 0u);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8656u)));
    set32(c.r[17], c.r[22].w[0] << 4);
    set32(c.r[17], c.r[17].w[0] + c.r[22].w[0]);
    set32(c.r[17], c.r[17].w[0] << 2);
    set32(c.r[17], c.r[13].w[0] + c.r[17].w[0]);
    set32(c.r[17], c.r[19].w[0] + c.r[17].w[0]);
    st32((c.r[17].w[0]), 0u);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8656u)));
    set32(c.r[17], c.r[22].w[0] << 4);
    set32(c.r[17], c.r[17].w[0] + c.r[22].w[0]);
    set32(c.r[17], c.r[17].w[0] << 2);
    set32(c.r[17], c.r[12].w[0] + c.r[17].w[0]);
    set32(c.r[17], c.r[19].w[0] + c.r[17].w[0]);
    st32((c.r[17].w[0]), 0u);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8656u)));
    set32(c.r[17], c.r[22].w[0] << 4);
    set32(c.r[17], c.r[17].w[0] + c.r[22].w[0]);
    set32(c.r[17], c.r[17].w[0] << 2);
    set32(c.r[17], c.r[11].w[0] + c.r[17].w[0]);
    set32(c.r[17], c.r[19].w[0] + c.r[17].w[0]);
    st32((c.r[17].w[0]), 0u);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8656u)));
    set32(c.r[17], c.r[22].w[0] << 4);
    set32(c.r[17], c.r[17].w[0] + c.r[22].w[0]);
    set32(c.r[17], c.r[17].w[0] << 2);
    set32(c.r[17], c.r[10].w[0] + c.r[17].w[0]);
    set32(c.r[17], c.r[19].w[0] + c.r[17].w[0]);
    st32((c.r[17].w[0]), 0u);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8656u)));
    set32(c.r[17], c.r[22].w[0] << 4);
    set32(c.r[17], c.r[17].w[0] + c.r[22].w[0]);
    set32(c.r[17], c.r[17].w[0] << 2);
    set32(c.r[17], c.r[9].w[0] + c.r[17].w[0]);
    set32(c.r[17], c.r[19].w[0] + c.r[17].w[0]);
    st32((c.r[17].w[0]), 0u);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8656u)));
    set32(c.r[17], c.r[22].w[0] << 4);
    set32(c.r[17], c.r[17].w[0] + c.r[22].w[0]);
    set32(c.r[17], c.r[17].w[0] << 2);
    set32(c.r[17], c.r[8].w[0] + c.r[17].w[0]);
    set32(c.r[17], c.r[19].w[0] + c.r[17].w[0]);
    st32((c.r[17].w[0]), 0u);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8656u)));
    set32(c.r[17], c.r[22].w[0] << 4);
    set32(c.r[17], c.r[17].w[0] + c.r[22].w[0]);
    set32(c.r[17], c.r[17].w[0] << 2);
    set32(c.r[17], c.r[7].w[0] + c.r[17].w[0]);
    set32(c.r[17], c.r[19].w[0] + c.r[17].w[0]);
    st32((c.r[17].w[0]), 0u);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8656u)));
    set32(c.r[17], c.r[22].w[0] << 4);
    set32(c.r[17], c.r[17].w[0] + c.r[22].w[0]);
    set32(c.r[17], c.r[17].w[0] << 2);
    set32(c.r[17], c.r[6].w[0] + c.r[17].w[0]);
    set32(c.r[17], c.r[19].w[0] + c.r[17].w[0]);
    st32((c.r[17].w[0]), 0u);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8656u)));
    set32(c.r[17], c.r[22].w[0] << 4);
    set32(c.r[17], c.r[17].w[0] + c.r[22].w[0]);
    set32(c.r[17], c.r[17].w[0] << 2);
    set32(c.r[17], c.r[5].w[0] + c.r[17].w[0]);
    set32(c.r[17], c.r[19].w[0] + c.r[17].w[0]);
    st32((c.r[17].w[0]), 0u);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8656u)));
    set32(c.r[17], c.r[22].w[0] << 4);
    set32(c.r[17], c.r[17].w[0] + c.r[22].w[0]);
    set32(c.r[17], c.r[17].w[0] << 2);
    set32(c.r[17], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[17], c.r[19].w[0] + c.r[17].w[0]);
    st32((c.r[17].w[0]), 0u);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8656u)));
    set32(c.r[17], c.r[22].w[0] << 4);
    set32(c.r[17], c.r[17].w[0] + c.r[22].w[0]);
    set32(c.r[17], c.r[17].w[0] << 2);
    set32(c.r[17], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[17], c.r[19].w[0] + c.r[17].w[0]);
    st32((c.r[17].w[0]), 0u);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8656u)));
    set32(c.r[17], c.r[22].w[0] << 4);
    set32(c.r[17], c.r[17].w[0] + c.r[22].w[0]);
    set32(c.r[17], c.r[17].w[0] << 2);
    set32(c.r[17], c.r[23].w[0] + c.r[17].w[0]);
    set32(c.r[17], c.r[19].w[0] + c.r[17].w[0]);
    st32((c.r[17].w[0]), 0u);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8656u)));
    set32(c.r[17], c.r[22].w[0] << 4);
    set32(c.r[17], c.r[17].w[0] + c.r[22].w[0]);
    set32(c.r[17], c.r[17].w[0] << 2);
    set32(c.r[17], c.r[30].w[0] + c.r[17].w[0]);
    set32(c.r[17], c.r[19].w[0] + c.r[17].w[0]);
    st32((c.r[17].w[0]), 0u);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    c.budget -= 132;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002029F8u | kUnwind; return; } goto L_002029F8; } }
    st8((c.r[20].w[0] + 84u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202C14u); st8((c.r[20].w[0] + 85u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0040(c, 320u, depth + 1u); else { c.pc = 0x00202C50u; return; } if (c.pc != 0x00202C14u) [[unlikely]] return; }
L_00202C14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202C1Cu);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x00202C1Cu) [[unlikely]] return; }
L_00202C1C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00202C50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[16], c.r[18].w[0] + 304u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[4], 0u + 3u);
    c.budget -= 12;
    { const bool t = c.r[6].d[0] == c.r[4].d[0]; set32(c.r[7], c.r[17].w[0] + 304u);  if (t) { goto L_00202E78; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00202DE8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00202D30; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00202CA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00202F68; } }
    c.budget -= 1;
L_00202CA8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00202CD0; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 750u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00202CD0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00202F68; } }
L_00202CD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00202F68; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 564u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00202F68; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202CF8u); st32((c.r[18].w[0] + 84u), 0u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x00202CF8u) [[unlikely]] return; }
L_00202CF8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    st8((c.r[16].w[0] + 85u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 85u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202D0Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 7u, depth + 1u); else { c.pc = 0x00204490u; return; } if (c.pc != 0x00202D0Cu) [[unlikely]] return; }
L_00202D0C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202D18u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x00202D18u) [[unlikely]] return; }
L_00202D18:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202D24u); st16((c.r[18].w[0] + 560u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0040(c, 310u, depth + 1u); else { c.pc = 0x00202790u; return; } if (c.pc != 0x00202D24u) [[unlikely]] return; }
L_00202D24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00202F68; } }
    c.budget -= 1;
L_00202D30:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 564u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00202D48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00202F68; } }
    c.budget -= 1;
L_00202D48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = ld32((c.r[16].w[0] + 80u));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00202D98; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 560u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00202D98; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 580u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00202D98; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[3], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00202D98; } }
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 2;
L_00202D98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41880000u);
    c.f[2] = ld32((c.r[16].w[0] + 80u));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00202DC8; } }
    st32((c.r[16].w[0] + 80u), c.f[0]);
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00202F68; } }
    c.budget -= 1;
L_00202DC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = ld32((c.r[17].w[0] + 8252u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 80u), c.f[0]);  if (t) { goto L_00202F68; } }
L_00202DE8:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 564u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00202E00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00202F68; } }
    c.budget -= 1;
L_00202E00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00202E18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00202F68; } }
    c.budget -= 1;
L_00202E18:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 16384u);  if (t) { goto L_00202E40; } }
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 85u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00202E38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 85u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00202E68; } }
L_00202E38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 85u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00202E68; } }
L_00202E40:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[2].d[0] = 0ull | 49152ull;  if (t) { goto L_00202E68; } }
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 85u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00202E60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 85u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00202E68; } }
L_00202E60:
    st8((c.r[16].w[0] + 85u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_00202E68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202E70u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 4u, depth + 1u); else { c.pc = 0x00204360u; return; } if (c.pc != 0x00202E70u) [[unlikely]] return; }
L_00202E70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00202F68; } }
L_00202E78:
    c.f[1] = ld32((c.r[16].w[0] + 80u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00202F18; } }
    st32((c.r[16].w[0] + 80u), c.f[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_00202EA0:
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], c.r[5].w[0] + 8u);
    st16((c.r[4].w[0] + 18u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    st16((c.r[4].w[0] + 50u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 20u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 22u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 24u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 26u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 58u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 28u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 60u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 30u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 62u), static_cast<std::uint16_t>(0u));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00202EA0u | kUnwind; return; } goto L_00202EA0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00202F68; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 750u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00202F68; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00202F68; } }
L_00202F18:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 85u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00202F30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 85u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00202F40; } }
L_00202F30:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00202F40; } }
    st8((c.r[16].w[0] + 85u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00202F40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F600000u);
    c.f[1] = ld32((c.r[17].w[0] + 8252u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202F64u); st32((c.r[16].w[0] + 80u), c.f[0]);  if (depth < kMaxDepth) unit_0041(c, 4u, depth + 1u); else { c.pc = 0x00204360u; return; } if (c.pc != 0x00202F64u) [[unlikely]] return; }
L_00202F64:
    c.budget -= 1;
L_00202F68:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 2560u);  if (t) { goto L_00202FC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202F7Cu);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x00202F7Cu) [[unlikely]] return; }
L_00202F7C:
    c.f[13] = ld32((c.r[16].w[0] + 4u));
    c.f[14] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202F8Cu); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x00202F8Cu) [[unlikely]] return; }
L_00202F8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202F94u); set32(c.r[4], ld32((c.r[18].w[0] + 88u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x00202F94u) [[unlikely]] return; }
L_00202F94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202F9Cu); set32(c.r[4], ld32((c.r[18].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x00202F9Cu) [[unlikely]] return; }
L_00202F9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202FA4u); set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x00202FA4u) [[unlikely]] return; }
L_00202FA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202FACu); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x00202FACu) [[unlikely]] return; }
L_00202FAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00202FB4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 341u, depth + 1u); else { c.pc = 0x00203080u; return; } if (c.pc != 0x00202FB4u) [[unlikely]] return; }
L_00202FB4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00202FC8; } }
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00202FC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00202FE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00202FF0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_00203000:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00203060; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x008B0000u);
    set32(c.r[3], 0u + 26064u);
    set32(c.r[2], c.r[2].w[0] - 608u);
    set32(c.r[5], c.r[16].w[0] + 192u);
    set32(c.r[6], 0u + 64u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203048u); set32(c.r[4], c.r[2].w[0] + 20928u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00203048u) [[unlikely]] return; }
L_00203048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203050u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 366u, depth + 1u); else { c.pc = 0x00203E60u; return; } if (c.pc != 0x00203050u) [[unlikely]] return; }
L_00203050:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020305Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0068(c, 108u, depth + 1u); else { c.pc = 0x002A2AF0u; return; } if (c.pc != 0x0020305Cu) [[unlikely]] return; }
L_0020305C:
    c.budget -= 1;
L_00203060:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00203080:
    set32(c.r[29], c.r[29].w[0] - 336u);
    set32(c.r[2], c.r[4].w[0] + 304u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    set32(c.r[30], c.r[29].w[0] + 292u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    set32(c.r[23], c.r[29].w[0] + 308u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    set32(c.r[16], c.r[29].w[0] + 324u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[19], ld32((c.r[4].w[0] + 24u)));
    c.f[22] = 0u;
    c.f[21] = c.f[22];
    c.f[20] = c.f[22];
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 384u));
    set32(c.r[18], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[2], 0u + 17u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.budget -= 38;
L_00203118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203120u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x00203120u) [[unlikely]] return; }
L_00203120:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[3].d[0] = c.r[20].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00203158; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203140u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 16u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x00203140u) [[unlikely]] return; }
L_00203140:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x404B0000u);
    c.r[2].d[0] = c.r[2].d[0] | 19274ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[30].w[0]), c.r[2].w[0]);  if (t) { goto L_00203168; } }
L_00203158:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[23].w[0]), 0u);
    st32((c.r[30].w[0]), 0u);
    c.budget -= 4;
L_00203168:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBE7D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE5B0000u);
    c.r[4].d[0] = c.r[3].d[0] | 28836ull;
    c.r[3].d[0] = c.r[2].d[0] | 31797ull;
    st32((c.r[29].w[0] + 320u), 0u);
    set32(c.r[2], c.r[29].w[0] + 328u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xBFC00000u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DFD0000u);
    st32((c.r[29].w[0] + 304u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[2].d[0] | 28836ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBFA60000u);
    set32(c.r[2], c.r[29].w[0] + 312u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E5B0000u);
    c.r[2].d[0] = c.r[2].d[0] | 31797ull;
    st32((c.r[29].w[0] + 288u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 296u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 272u), 0u);
    set32(c.r[2], c.r[29].w[0] + 276u);
    st32((c.r[2].w[0]), 0u);
    c.r[4].d[0] = c.r[3].d[0] | 18140ull;
    set32(c.r[2], c.r[29].w[0] + 280u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FA60000u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 18140ull;
    st32((c.r[29].w[0] + 256u), c.r[4].w[0]);
    set32(c.r[2], c.r[29].w[0] + 260u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[2], c.r[29].w[0] + 264u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[2].w[0]), c.r[6].w[0]);
    st32((c.r[29].w[0] + 240u), c.r[3].w[0]);
    set32(c.r[2], c.r[29].w[0] + 244u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[29].w[0] + 248u);
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020320Cu); st32((c.r[2].w[0]), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0020320Cu) [[unlikely]] return; }
L_0020320C:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203218u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x00203218u) [[unlikely]] return; }
L_00203218:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203224u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x00203224u) [[unlikely]] return; }
L_00203224:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203230u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x00203230u) [[unlikely]] return; }
L_00203230:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020323Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0020323Cu) [[unlikely]] return; }
L_0020323C:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203248u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x00203248u) [[unlikely]] return; }
L_00203248:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[1] = ld32((c.r[29].w[0] + 320u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[25].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[24].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], c.r[4].w[0] << 4);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.f[0] = fp::add(c.f[1], c.f[22]);
    set32(c.r[2], c.r[2].w[0] - 272u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00820000u);
    st32((c.r[2].w[0]), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[25], c.r[25].w[0] - 624u);
    set32(c.r[2], c.r[2].w[0] - 5904u);
    set32(c.r[24], c.r[24].w[0] - 976u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    set32(c.r[15], c.r[15].w[0] - 1328u);
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[2], c.r[2].w[0] - 6256u);
    set32(c.r[14], c.r[14].w[0] - 1680u);
    set32(c.r[13], c.r[13].w[0] - 2032u);
    set32(c.r[12], c.r[12].w[0] - 2384u);
    set32(c.r[11], c.r[11].w[0] - 2736u);
    set32(c.r[10], c.r[10].w[0] - 3088u);
    set32(c.r[9], c.r[9].w[0] - 3440u);
    set32(c.r[8], c.r[8].w[0] - 3792u);
    set32(c.r[7], c.r[7].w[0] - 4144u);
    set32(c.r[6], c.r[6].w[0] - 4496u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.f[0] = fp::add(c.f[0], c.f[21]);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    set32(c.r[5], c.r[5].w[0] - 4848u);
    set32(c.r[4], c.r[4].w[0] - 5200u);
    set32(c.r[3], c.r[3].w[0] - 5552u);
    set32(c.r[18], c.r[18].w[0] + 2u);
    c.f[6] = c.r[2].w[0];
    set32(c.r[2], c.r[20].w[0] + 1u);
    set32(c.r[21], c.r[22].w[0] << 4);
    c.r[20].d[0] = c.r[2].d[0] << 56;
    set32(c.r[21], c.r[21].w[0] + c.r[22].w[0]);
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 56);
    set32(c.r[21], c.r[21].w[0] << 2);
    c.r[2].d[0] = c.r[20].sd[0] < 15ll ? 1ull : 0ull;
    set32(c.r[21], c.r[25].w[0] + c.r[21].w[0]);
    set32(c.r[21], c.r[17].w[0] + c.r[21].w[0]);
    st32((c.r[21].w[0]), c.f[0]);
    set32(c.r[21], c.r[29].w[0] + 328u);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[0] = ld32((c.r[21].w[0]));
    set32(c.r[21], c.r[22].w[0] << 4);
    set32(c.r[21], c.r[21].w[0] + c.r[22].w[0]);
    set32(c.r[21], c.r[21].w[0] << 2);
    set32(c.r[21], c.r[24].w[0] + c.r[21].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[20]);
    set32(c.r[21], c.r[17].w[0] + c.r[21].w[0]);
    st32((c.r[21].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 304u));
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[0] = fp::add(c.f[1], c.f[2]);
    set32(c.r[21], c.r[22].w[0] << 4);
    set32(c.r[21], c.r[21].w[0] + c.r[22].w[0]);
    set32(c.r[21], c.r[21].w[0] << 2);
    set32(c.r[15], c.r[15].w[0] + c.r[21].w[0]);
    c.f[1] = fp::add(c.f[2], c.f[22]);
    set32(c.r[15], c.r[17].w[0] + c.r[15].w[0]);
    st32((c.r[15].w[0]), c.f[1]);
    c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[1] = ld32((c.r[23].w[0]));
    set32(c.r[15], c.r[21].w[0] << 4);
    set32(c.r[15], c.r[15].w[0] + c.r[21].w[0]);
    set32(c.r[15], c.r[15].w[0] << 2);
    set32(c.r[14], c.r[14].w[0] + c.r[15].w[0]);
    c.f[1] = fp::add(c.f[1], c.f[21]);
    set32(c.r[14], c.r[17].w[0] + c.r[14].w[0]);
    st32((c.r[14].w[0]), c.f[1]);
    set32(c.r[14], c.r[29].w[0] + 312u);
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[1] = ld32((c.r[14].w[0]));
    set32(c.r[14], c.r[15].w[0] << 4);
    set32(c.r[14], c.r[14].w[0] + c.r[15].w[0]);
    set32(c.r[14], c.r[14].w[0] << 2);
    set32(c.r[13], c.r[13].w[0] + c.r[14].w[0]);
    c.f[1] = fp::add(c.f[1], c.f[20]);
    set32(c.r[13], c.r[17].w[0] + c.r[13].w[0]);
    st32((c.r[13].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 288u));
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    set32(c.r[13], c.r[14].w[0] << 4);
    set32(c.r[13], c.r[13].w[0] + c.r[14].w[0]);
    set32(c.r[13], c.r[13].w[0] << 2);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    fpu_div(c, 0u, c.f[0], c.f[6]);
    set32(c.r[12], c.r[17].w[0] + c.r[12].w[0]);
    c.f[1] = fp::add(c.f[1], c.f[22]);
    st32((c.r[12].w[0]), c.f[1]);
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[1] = ld32((c.r[30].w[0]));
    c.f[22] = fp::add(c.f[22], c.f[0]);
    set32(c.r[12], c.r[13].w[0] << 4);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    set32(c.r[12], c.r[12].w[0] << 2);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    c.f[1] = fp::add(c.f[1], c.f[21]);
    set32(c.r[11], c.r[17].w[0] + c.r[11].w[0]);
    st32((c.r[11].w[0]), c.f[1]);
    set32(c.r[11], c.r[29].w[0] + 296u);
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[0] = ld32((c.r[11].w[0]));
    set32(c.r[11], c.r[12].w[0] << 4);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[20]);
    set32(c.r[10], c.r[17].w[0] + c.r[10].w[0]);
    st32((c.r[10].w[0]), c.f[0]);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[0] = ld32((c.r[29].w[0] + 272u));
    set32(c.r[10], c.r[11].w[0] << 4);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[17].w[0] + c.r[9].w[0]);
    st32((c.r[9].w[0]), c.f[0]);
    set32(c.r[9], c.r[29].w[0] + 276u);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[0] = ld32((c.r[9].w[0]));
    set32(c.r[9], c.r[10].w[0] << 4);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[17].w[0] + c.r[8].w[0]);
    st32((c.r[8].w[0]), c.f[0]);
    set32(c.r[8], c.r[29].w[0] + 280u);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[0] = ld32((c.r[8].w[0]));
    set32(c.r[8], c.r[9].w[0] << 4);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[17].w[0] + c.r[7].w[0]);
    st32((c.r[7].w[0]), c.f[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[0] = ld32((c.r[29].w[0] + 256u));
    set32(c.r[7], c.r[8].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[17].w[0] + c.r[6].w[0]);
    st32((c.r[6].w[0]), c.f[0]);
    set32(c.r[6], c.r[29].w[0] + 260u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[6], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[17].w[0] + c.r[5].w[0]);
    st32((c.r[5].w[0]), c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 264u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[5], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0]), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[0] = ld32((c.r[29].w[0] + 240u));
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[29].w[0] + 244u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[3]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[29].w[0] + 248u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[3], c.r[29].w[0] + 328u);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[5] = ld32((c.r[16].w[0]));
    c.f[4] = ld32((c.r[23].w[0]));
    c.f[3] = ld32((c.r[30].w[0]));
    set32(c.r[3], c.r[29].w[0] + 312u);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[4] = fp::add(c.f[5], c.f[4]);
    c.f[3] = fp::add(c.f[3], c.f[4]);
    set32(c.r[3], c.r[29].w[0] + 296u);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_div(c, 1u, c.f[3], c.f[6]);
    fpu_div(c, 0u, c.f[0], c.f[6]);
    c.f[21] = fp::add(c.f[21], c.f[1]);
    c.budget -= 233;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00203118u | kUnwind; return; } goto L_00203118; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002035F4u);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x002035F4u) [[unlikely]] return; }
L_002035F4:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[1].d[0] = c.r[2].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00203628; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203610u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 46u)));  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x00203610u) [[unlikely]] return; }
L_00203610:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FD60000u);
    c.r[2].d[0] = c.r[2].d[0] | 38537ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[30].w[0]), c.r[2].w[0]);  if (t) { goto L_00203638; } }
L_00203628:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[23].w[0]), 0u);
    st32((c.r[30].w[0]), 0u);
    c.budget -= 4;
L_00203638:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBEBE0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBEA40000u);
    c.r[4].d[0] = c.r[3].d[0] | 5243ull;
    c.r[3].d[0] = c.r[2].d[0] | 40232ull;
    st32((c.r[29].w[0] + 320u), 0u);
    set32(c.r[2], c.r[29].w[0] + 328u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xBFC00000u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E3E0000u);
    st32((c.r[29].w[0] + 304u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[2].d[0] | 5243ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBFA60000u);
    set32(c.r[2], c.r[29].w[0] + 312u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EA40000u);
    c.r[2].d[0] = c.r[2].d[0] | 40232ull;
    st32((c.r[29].w[0] + 288u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 296u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 272u), 0u);
    set32(c.r[2], c.r[29].w[0] + 276u);
    st32((c.r[2].w[0]), 0u);
    c.r[4].d[0] = c.r[3].d[0] | 18140ull;
    set32(c.r[2], c.r[29].w[0] + 280u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FA60000u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 18140ull;
    st32((c.r[29].w[0] + 256u), c.r[4].w[0]);
    set32(c.r[2], c.r[29].w[0] + 260u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[2], c.r[29].w[0] + 264u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[2].w[0]), c.r[6].w[0]);
    st32((c.r[29].w[0] + 240u), c.r[3].w[0]);
    set32(c.r[2], c.r[29].w[0] + 244u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[29].w[0] + 248u);
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002036DCu); st32((c.r[2].w[0]), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x002036DCu) [[unlikely]] return; }
L_002036DC:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002036E8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x002036E8u) [[unlikely]] return; }
L_002036E8:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002036F4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x002036F4u) [[unlikely]] return; }
L_002036F4:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203700u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x00203700u) [[unlikely]] return; }
L_00203700:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020370Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x0020370Cu) [[unlikely]] return; }
L_0020370C:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203718u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x00203718u) [[unlikely]] return; }
L_00203718:
    c.f[1] = ld32((c.r[29].w[0] + 320u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], c.r[4].w[0] << 4);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.f[0] = fp::add(c.f[1], c.f[22]);
    set32(c.r[2], c.r[2].w[0] - 212u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00820000u);
    st32((c.r[2].w[0]), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.f[5] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[3] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[22], c.r[22].w[0] - 564u);
    set32(c.r[21], c.r[21].w[0] - 916u);
    set32(c.r[20], c.r[20].w[0] - 1268u);
    set32(c.r[18], c.r[18].w[0] - 1620u);
    set32(c.r[17], c.r[17].w[0] - 1972u);
    set32(c.r[15], c.r[15].w[0] - 2324u);
    set32(c.r[14], c.r[14].w[0] - 2676u);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[13], c.r[13].w[0] - 3028u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[12], c.r[12].w[0] - 3380u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[11], c.r[11].w[0] - 3732u);
    c.f[0] = fp::add(c.f[5], c.f[21]);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[10], c.r[10].w[0] - 4084u);
    set32(c.r[9], c.r[9].w[0] - 4436u);
    set32(c.r[8], c.r[8].w[0] - 4788u);
    set32(c.r[7], c.r[7].w[0] - 5140u);
    set32(c.r[6], c.r[6].w[0] - 5492u);
    set32(c.r[5], c.r[5].w[0] - 5844u);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[4], c.r[4].w[0] - 6196u);
    set32(c.r[2], c.r[29].w[0] + 328u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[4] = ld32((c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.f[0] = fp::add(c.f[4], c.f[20]);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 304u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[2] = fp::add(c.f[1], c.f[0]);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[22]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[23].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[1] = fp::add(c.f[5], c.f[0]);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[21]);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 312u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[5] = ld32((c.r[2].w[0]));
    c.f[0] = fp::add(c.f[4], c.f[5]);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.f[4] = fp::add(c.f[5], c.f[20]);
    st32((c.r[2].w[0]), c.f[4]);
    c.f[4] = ld32((c.r[29].w[0] + 288u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[2] = fp::add(c.f[4], c.f[2]);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[15].w[0] + c.r[2].w[0]);
    fpu_div(c, 2u, c.f[2], c.f[3]);
    c.f[4] = fp::add(c.f[4], c.f[22]);
    st32((c.r[2].w[0]), c.f[4]);
    c.f[4] = ld32((c.r[30].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[22] = fp::add(c.f[22], c.f[2]);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.f[1] = fp::add(c.f[4], c.f[1]);
    set32(c.r[2], c.r[14].w[0] + c.r[2].w[0]);
    c.f[2] = fp::add(c.f[4], c.f[21]);
    st32((c.r[2].w[0]), c.f[2]);
    set32(c.r[2], c.r[29].w[0] + 296u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[2] = ld32((c.r[2].w[0]));
    fpu_div(c, 1u, c.f[1], c.f[3]);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[13].w[0] + c.r[2].w[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.f[21] = fp::add(c.f[21], c.f[1]);
    c.f[1] = fp::add(c.f[2], c.f[20]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[2].w[0]), c.f[1]);
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[0] = ld32((c.r[29].w[0] + 272u));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[12].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 276u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 280u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[10].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[0] = ld32((c.r[29].w[0] + 256u));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[9].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 260u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 264u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[0] = ld32((c.r[29].w[0] + 240u));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 244u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 248u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[1].d[0] = c.r[2].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 198;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3FD60000u);  if (t) { goto L_00203A48; } }
    c.r[2].d[0] = c.r[2].d[0] | 38525ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[30].w[0]), c.r[2].w[0]);  if (t) { goto L_00203A58; } }
    c.budget -= 1;
L_00203A48:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[23].w[0]), 0u);
    st32((c.r[30].w[0]), 0u);
    c.budget -= 4;
L_00203A58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBE7D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE5B0000u);
    c.r[4].d[0] = c.r[3].d[0] | 28836ull;
    c.r[3].d[0] = c.r[2].d[0] | 31797ull;
    st32((c.r[29].w[0] + 320u), 0u);
    set32(c.r[2], c.r[29].w[0] + 328u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DFD0000u);
    c.budget -= 8;
L_00203A78:
    st32((c.r[29].w[0] + 304u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] | 28836ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    set32(c.r[2], c.r[29].w[0] + 312u);
    c.r[4].d[0] = c.r[3].d[0] | 36004ull;
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E5B0000u);
    c.r[2].d[0] = c.r[2].d[0] | 31797ull;
    st32((c.r[29].w[0] + 288u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 296u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.r[5].d[0] = c.r[3].d[0] | 35991ull;
    st32((c.r[29].w[0] + 272u), 0u);
    set32(c.r[2], c.r[29].w[0] + 276u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF820000u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52744ull;
    set32(c.r[2], c.r[29].w[0] + 280u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF620000u);
    c.r[3].d[0] = c.r[2].d[0] | 36750ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F020000u);
    st32((c.r[29].w[0] + 256u), c.r[3].w[0]);
    c.r[6].d[0] = c.r[2].d[0] | 52731ull;
    set32(c.r[2], c.r[29].w[0] + 260u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F620000u);
    c.r[3].d[0] = c.r[2].d[0] | 36750ull;
    set32(c.r[2], c.r[29].w[0] + 264u);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    st32((c.r[29].w[0] + 240u), c.r[3].w[0]);
    set32(c.r[2], c.r[29].w[0] + 244u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[2], c.r[29].w[0] + 248u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203B10u); st32((c.r[2].w[0]), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x00203B10u) [[unlikely]] return; }
L_00203B10:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203B1Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x00203B1Cu) [[unlikely]] return; }
L_00203B1C:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203B28u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x00203B28u) [[unlikely]] return; }
L_00203B28:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203B34u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x00203B34u) [[unlikely]] return; }
L_00203B34:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203B40u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x00203B40u) [[unlikely]] return; }
L_00203B40:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203B4Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x00203B4Cu) [[unlikely]] return; }
L_00203B4C:
    c.f[0] = ld32((c.r[29].w[0] + 320u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[5], c.r[6].w[0] << 4);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.f[0] = fp::add(c.f[0], c.f[22]);
    set32(c.r[4], c.r[4].w[0] - 208u);
    set32(c.r[5], c.r[5].w[0] << 2);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00820000u);
    st32((c.r[4].w[0]), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], c.r[3].w[0] - 560u);
    set32(c.r[21], c.r[21].w[0] - 912u);
    set32(c.r[20], c.r[20].w[0] - 1264u);
    set32(c.r[18], c.r[18].w[0] - 1616u);
    set32(c.r[17], c.r[17].w[0] - 1968u);
    set32(c.r[15], c.r[15].w[0] - 2320u);
    set32(c.r[14], c.r[14].w[0] - 2672u);
    set32(c.r[13], c.r[13].w[0] - 3024u);
    set32(c.r[12], c.r[12].w[0] - 3376u);
    set32(c.r[16], c.r[22].w[0] << 4);
    set32(c.r[11], c.r[11].w[0] - 3728u);
    set32(c.r[16], c.r[16].w[0] + c.r[22].w[0]);
    set32(c.r[10], c.r[10].w[0] - 4080u);
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] - 4432u);
    c.f[0] = fp::add(c.f[0], c.f[21]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[8], c.r[8].w[0] - 4784u);
    set32(c.r[7], c.r[7].w[0] - 5136u);
    set32(c.r[6], c.r[6].w[0] - 5488u);
    set32(c.r[5], c.r[5].w[0] - 5840u);
    set32(c.r[4], c.r[4].w[0] - 6192u);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[29].w[0] + 328u);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[0] = fp::add(c.f[0], c.f[20]);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 304u));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[0] = fp::add(c.f[0], c.f[22]);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[23].w[0]));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[0] = fp::add(c.f[0], c.f[21]);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[29].w[0] + 312u);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[0] = fp::add(c.f[0], c.f[20]);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 288u));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[0] = fp::add(c.f[0], c.f[22]);
    set32(c.r[3], c.r[15].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[30].w[0]));
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    set32(c.r[3], c.r[15].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[15].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[0] = fp::add(c.f[0], c.f[21]);
    set32(c.r[3], c.r[14].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[29].w[0] + 296u);
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[3], c.r[14].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[14].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[0] = fp::add(c.f[0], c.f[20]);
    set32(c.r[3], c.r[13].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[0] = ld32((c.r[29].w[0] + 272u));
    set32(c.r[3], c.r[13].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[13].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[12].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[29].w[0] + 276u);
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[3], c.r[12].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[11].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[29].w[0] + 280u);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[3], c.r[11].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[0] = ld32((c.r[29].w[0] + 256u));
    set32(c.r[3], c.r[10].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[9].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[29].w[0] + 260u);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[3], c.r[9].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[29].w[0] + 264u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[3], c.r[8].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[0] = ld32((c.r[29].w[0] + 240u));
    set32(c.r[3], c.r[7].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[29].w[0] + 244u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[29].w[0] + 248u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8656u)));
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 195;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_00203E60:
    set32(c.r[29], c.r[29].w[0] - 320u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00203E9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 170u, depth + 1u); else { c.pc = 0x002A6AE0u; return; } if (c.pc != 0x00203E9Cu) [[unlikely]] return; }
L_00203E9C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 16944u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[13], c.r[13].w[0] - 976u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00820000u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[13]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[13], c.r[13].w[0] - 3440u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00820000u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[13]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[13], c.r[13].w[0] - 3792u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00820000u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[13]);
    set32(c.r[12], c.r[12].w[0] - 2384u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[11], c.r[11].w[0] - 2736u);
    set32(c.r[13], c.r[13].w[0] - 4144u);
    set32(c.r[10], c.r[10].w[0] - 3088u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[13]);
    set32(c.r[9], c.r[9].w[0] - 5552u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[8], c.r[8].w[0] - 5904u);
    set32(c.r[13], c.r[13].w[0] - 1328u);
    set32(c.r[7], c.r[7].w[0] - 6256u);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[13]);
    set32(c.r[23], c.r[23].w[0] - 272u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[30], c.r[30].w[0] - 624u);
    set32(c.r[13], c.r[13].w[0] - 1680u);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[13]);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[13], c.r[13].w[0] - 2032u);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[13]);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[13], c.r[13].w[0] - 4496u);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[13]);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[13], c.r[13].w[0] - 4848u);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[13]);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[13], c.r[13].w[0] - 5200u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[13]);
    c.budget -= 51;
L_00203F68:
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[13]);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[13].w[0] + c.r[3].w[0]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[13]);
    set32(c.r[17], c.r[13].w[0] + c.r[3].w[0]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[13]);
    set32(c.r[25], c.r[13].w[0] + c.r[3].w[0]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[13]);
    set32(c.r[24], c.r[13].w[0] + c.r[3].w[0]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[13]);
    set32(c.r[15], c.r[13].w[0] + c.r[3].w[0]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[13]);
    set32(c.r[14], c.r[13].w[0] + c.r[3].w[0]);
    c.budget -= 14;
L_00203FA0:
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    set32(c.r[13], ld32((c.r[5].w[0])));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[20].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[21], c.r[22].w[0] << 4);
    set32(c.r[21], c.r[21].w[0] + c.r[22].w[0]);
    set32(c.r[13], c.r[13].w[0] << 4);
    set32(c.r[21], c.r[21].w[0] << 2);
    set32(c.r[13], c.r[6].w[0] + c.r[13].w[0]);
    set32(c.r[21], c.r[18].w[0] + c.r[21].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.f[0] = ld32((c.r[21].w[0]));
    st32((c.r[13].w[0]), c.f[0]);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    set32(c.r[21], c.r[22].w[0] << 4);
    set32(c.r[21], c.r[21].w[0] + c.r[22].w[0]);
    set32(c.r[21], c.r[21].w[0] << 2);
    set32(c.r[21], c.r[17].w[0] + c.r[21].w[0]);
    c.f[0] = ld32((c.r[21].w[0]));
    st32((c.r[13].w[0] + 4u), c.f[0]);
    c.r[22].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    set32(c.r[21], c.r[22].w[0] << 4);
    set32(c.r[21], c.r[21].w[0] + c.r[22].w[0]);
    set32(c.r[21], c.r[21].w[0] << 2);
    c.budget -= 24;
    [[clang::musttail]] return unit_0041(c, 1u, depth);
}

}
