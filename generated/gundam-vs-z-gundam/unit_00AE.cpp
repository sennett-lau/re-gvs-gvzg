#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00AE[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0,
    0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0,
    0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 21, 0,
    0, 22, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26,
    0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0,
    39, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0,
    0, 44, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 62, 0, 0, 63, 0, 0, 64, 0,
    0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74,
    0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 80, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0,
    83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0,
    0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 94, 0, 0,
    95, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 110,
    0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0,
    116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0,
    120, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 125, 0,
    0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0,
    147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 162, 0, 0, 163, 0,
    0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 0, 172, 0, 0, 0,
    173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0,
    0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 185,
    0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    200, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 0,
    0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 223, 0, 0, 224, 0, 0, 225, 0,
    0, 226, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0,
    230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0,
    0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0,
    0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0,
    244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0,
    0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248,
    0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0,
    257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0,
    0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0,
    0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0,
    0, 0, 268, 0, 0, 269, 0, 0, 270, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 283, 0, 284, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 291, 0,
    292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0,
    0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0,
    300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 304, 0,
    0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0,
    0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311,
    0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 0, 317, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0,
    321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326,
    0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0,
    329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 334, 0, 335, 0, 336, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338,
    0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 341, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 344, 0, 0, 0, 345, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0,
    0, 0, 0, 354, 0, 0, 355, 0, 356, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 362, 0, 363, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0,
    0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 377, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0,
    386, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 391, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399,
    0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0,
    402, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 416, 0, 0, 417, 0,
    418, 0, 419, 0, 0, 0, 420, 0, 0, 421, 0, 422, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0,
    0, 0, 428, 0, 0, 0, 429, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    432, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0, 436, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 439, 0, 0, 0, 440, 0, 0, 441, 0, 0, 442, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 0, 445, 0, 446, 0, 0, 0, 447,
    0, 448, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0,
    0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 459, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    463, 0, 0, 0, 464, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 467,
};

void unit_00AE(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003B8000;
    case 2u: goto L_003B802C;
    case 3u: goto L_003B8038;
    case 4u: goto L_003B8040;
    case 5u: goto L_003B8060;
    case 6u: goto L_003B80A0;
    case 7u: goto L_003B80AC;
    case 8u: goto L_003B80C0;
    case 9u: goto L_003B80D0;
    case 10u: goto L_003B80F8;
    case 11u: goto L_003B8104;
    case 12u: goto L_003B8120;
    case 13u: goto L_003B8130;
    case 14u: goto L_003B8164;
    case 15u: goto L_003B8178;
    case 16u: goto L_003B8184;
    case 17u: goto L_003B8194;
    case 18u: goto L_003B81C4;
    case 19u: goto L_003B81E0;
    case 20u: goto L_003B81EC;
    case 21u: goto L_003B81F8;
    case 22u: goto L_003B8204;
    case 23u: goto L_003B8218;
    case 24u: goto L_003B8224;
    case 25u: goto L_003B8240;
    case 26u: goto L_003B827C;
    case 27u: goto L_003B8290;
    case 28u: goto L_003B829C;
    case 29u: goto L_003B82AC;
    case 30u: goto L_003B82C0;
    case 31u: goto L_003B82CC;
    case 32u: goto L_003B82D8;
    case 33u: goto L_003B830C;
    case 34u: goto L_003B8324;
    case 35u: goto L_003B8330;
    case 36u: goto L_003B8348;
    case 37u: goto L_003B8360;
    case 38u: goto L_003B836C;
    case 39u: goto L_003B8380;
    case 40u: goto L_003B8390;
    case 41u: goto L_003B839C;
    case 42u: goto L_003B83C0;
    case 43u: goto L_003B83E8;
    case 44u: goto L_003B8404;
    case 45u: goto L_003B8414;
    case 46u: goto L_003B8420;
    case 47u: goto L_003B8440;
    case 48u: goto L_003B8450;
    case 49u: goto L_003B8620;
    case 50u: goto L_003B8630;
    case 51u: goto L_003B8714;
    case 52u: goto L_003B8724;
    case 53u: goto L_003B8810;
    case 54u: goto L_003B8840;
    case 55u: goto L_003B8850;
    case 56u: goto L_003B885C;
    case 57u: goto L_003B8868;
    case 58u: goto L_003B8880;
    case 59u: goto L_003B8900;
    case 60u: goto L_003B8944;
    case 61u: goto L_003B8954;
    case 62u: goto L_003B8960;
    case 63u: goto L_003B896C;
    case 64u: goto L_003B8978;
    case 65u: goto L_003B898C;
    case 66u: goto L_003B8998;
    case 67u: goto L_003B89C4;
    case 68u: goto L_003B8A50;
    case 69u: goto L_003B8A80;
    case 70u: goto L_003B8A98;
    case 71u: goto L_003B8AA8;
    case 72u: goto L_003B8AC4;
    case 73u: goto L_003B8ACC;
    case 74u: goto L_003B8AFC;
    case 75u: goto L_003B8B04;
    case 76u: goto L_003B8B14;
    case 77u: goto L_003B8BF0;
    case 78u: goto L_003B8C3C;
    case 79u: goto L_003B8C48;
    case 80u: goto L_003B8C50;
    case 81u: goto L_003B8C60;
    case 82u: goto L_003B8C6C;
    case 83u: goto L_003B8C80;
    case 84u: goto L_003B8CA0;
    case 85u: goto L_003B8CC0;
    case 86u: goto L_003B8CE0;
    case 87u: goto L_003B8D00;
    case 88u: goto L_003B8D34;
    case 89u: goto L_003B8D70;
    case 90u: goto L_003B8D84;
    case 91u: goto L_003B8DC0;
    case 92u: goto L_003B8DDC;
    case 93u: goto L_003B8DE8;
    case 94u: goto L_003B8DF4;
    case 95u: goto L_003B8E00;
    case 96u: goto L_003B8E0C;
    case 97u: goto L_003B8E18;
    case 98u: goto L_003B8E24;
    case 99u: goto L_003B8E30;
    case 100u: goto L_003B8E48;
    case 101u: goto L_003B8E60;
    case 102u: goto L_003B8E8C;
    case 103u: goto L_003B8EA0;
    case 104u: goto L_003B8ECC;
    case 105u: goto L_003B8ED8;
    case 106u: goto L_003B8F08;
    case 107u: goto L_003B8F20;
    case 108u: goto L_003B8F58;
    case 109u: goto L_003B8F64;
    case 110u: goto L_003B8F7C;
    case 111u: goto L_003B8F90;
    case 112u: goto L_003B8FA4;
    case 113u: goto L_003B8FB0;
    case 114u: goto L_003B8FE0;
    case 115u: goto L_003B8FF4;
    case 116u: goto L_003B9000;
    case 117u: goto L_003B9028;
    case 118u: goto L_003B9060;
    case 119u: goto L_003B9074;
    case 120u: goto L_003B9080;
    case 121u: goto L_003B9088;
    case 122u: goto L_003B90C4;
    case 123u: goto L_003B90E0;
    case 124u: goto L_003B90EC;
    case 125u: goto L_003B90F8;
    case 126u: goto L_003B9104;
    case 127u: goto L_003B9110;
    case 128u: goto L_003B911C;
    case 129u: goto L_003B9128;
    case 130u: goto L_003B9134;
    case 131u: goto L_003B9150;
    case 132u: goto L_003B9160;
    case 133u: goto L_003B918C;
    case 134u: goto L_003B91A0;
    case 135u: goto L_003B91CC;
    case 136u: goto L_003B91D4;
    case 137u: goto L_003B91EC;
    case 138u: goto L_003B9220;
    case 139u: goto L_003B9230;
    case 140u: goto L_003B9258;
    case 141u: goto L_003B9270;
    case 142u: goto L_003B92A8;
    case 143u: goto L_003B92B4;
    case 144u: goto L_003B92CC;
    case 145u: goto L_003B92E0;
    case 146u: goto L_003B92F4;
    case 147u: goto L_003B9300;
    case 148u: goto L_003B9330;
    case 149u: goto L_003B9344;
    case 150u: goto L_003B9350;
    case 151u: goto L_003B9378;
    case 152u: goto L_003B93B0;
    case 153u: goto L_003B93C4;
    case 154u: goto L_003B93D0;
    case 155u: goto L_003B93D8;
    case 156u: goto L_003B9414;
    case 157u: goto L_003B9430;
    case 158u: goto L_003B943C;
    case 159u: goto L_003B9448;
    case 160u: goto L_003B9454;
    case 161u: goto L_003B9460;
    case 162u: goto L_003B946C;
    case 163u: goto L_003B9478;
    case 164u: goto L_003B9484;
    case 165u: goto L_003B94A0;
    case 166u: goto L_003B94B0;
    case 167u: goto L_003B94FC;
    case 168u: goto L_003B9510;
    case 169u: goto L_003B9530;
    case 170u: goto L_003B955C;
    case 171u: goto L_003B9564;
    case 172u: goto L_003B9570;
    case 173u: goto L_003B9580;
    case 174u: goto L_003B95E0;
    case 175u: goto L_003B9614;
    case 176u: goto L_003B9660;
    case 177u: goto L_003B9684;
    case 178u: goto L_003B96AC;
    case 179u: goto L_003B96E0;
    case 180u: goto L_003B9704;
    case 181u: goto L_003B970C;
    case 182u: goto L_003B9748;
    case 183u: goto L_003B9764;
    case 184u: goto L_003B9770;
    case 185u: goto L_003B977C;
    case 186u: goto L_003B9788;
    case 187u: goto L_003B9794;
    case 188u: goto L_003B97A0;
    case 189u: goto L_003B97AC;
    case 190u: goto L_003B97B8;
    case 191u: goto L_003B97D0;
    case 192u: goto L_003B97E0;
    case 193u: goto L_003B9814;
    case 194u: goto L_003B9830;
    case 195u: goto L_003B9840;
    case 196u: goto L_003B9864;
    case 197u: goto L_003B989C;
    case 198u: goto L_003B98B0;
    case 199u: goto L_003B98C0;
    case 200u: goto L_003B9900;
    case 201u: goto L_003B9910;
    case 202u: goto L_003B9924;
    case 203u: goto L_003B9930;
    case 204u: goto L_003B99E0;
    case 205u: goto L_003B9A28;
    case 206u: goto L_003B9A38;
    case 207u: goto L_003B9A44;
    case 208u: goto L_003B9A60;
    case 209u: goto L_003B9A70;
    case 210u: goto L_003B9AA4;
    case 211u: goto L_003B9AB4;
    case 212u: goto L_003B9AC0;
    case 213u: goto L_003B9AF0;
    case 214u: goto L_003B9B1C;
    case 215u: goto L_003B9B28;
    case 216u: goto L_003B9B34;
    case 217u: goto L_003B9B58;
    case 218u: goto L_003B9B68;
    case 219u: goto L_003B9B74;
    case 220u: goto L_003B9B90;
    case 221u: goto L_003B9BC4;
    case 222u: goto L_003B9BD4;
    case 223u: goto L_003B9BE0;
    case 224u: goto L_003B9BEC;
    case 225u: goto L_003B9BF8;
    case 226u: goto L_003B9C04;
    case 227u: goto L_003B9C10;
    case 228u: goto L_003B9C38;
    case 229u: goto L_003B9C68;
    case 230u: goto L_003B9C80;
    case 231u: goto L_003B9C90;
    case 232u: goto L_003B9CC4;
    case 233u: goto L_003B9CE0;
    case 234u: goto L_003B9CF0;
    case 235u: goto L_003B9D14;
    case 236u: goto L_003B9D70;
    case 237u: goto L_003B9D88;
    case 238u: goto L_003B9DE8;
    case 239u: goto L_003B9E10;
    case 240u: goto L_003B9E40;
    case 241u: goto L_003B9E70;
    case 242u: goto L_003B9EC0;
    case 243u: goto L_003B9EE8;
    case 244u: goto L_003B9F00;
    case 245u: goto L_003B9F80;
    case 246u: goto L_003B9FF8;
    case 247u: goto L_003BA010;
    case 248u: goto L_003BA07C;
    case 249u: goto L_003BA090;
    case 250u: goto L_003BA0B0;
    case 251u: goto L_003BA100;
    case 252u: goto L_003BA110;
    case 253u: goto L_003BA130;
    case 254u: goto L_003BA148;
    case 255u: goto L_003BA154;
    case 256u: goto L_003BA170;
    case 257u: goto L_003BA180;
    case 258u: goto L_003BA1A0;
    case 259u: goto L_003BA1E0;
    case 260u: goto L_003BA1F8;
    case 261u: goto L_003BA208;
    case 262u: goto L_003BA248;
    case 263u: goto L_003BA254;
    case 264u: goto L_003BA270;
    case 265u: goto L_003BA288;
    case 266u: goto L_003BA2B0;
    case 267u: goto L_003BA2EC;
    case 268u: goto L_003BA308;
    case 269u: goto L_003BA314;
    case 270u: goto L_003BA320;
    case 271u: goto L_003BA32C;
    case 272u: goto L_003BA338;
    case 273u: goto L_003BA350;
    case 274u: goto L_003BA360;
    case 275u: goto L_003BA378;
    case 276u: goto L_003BA3A4;
    case 277u: goto L_003BA3C0;
    case 278u: goto L_003BA3F8;
    case 279u: goto L_003BA428;
    case 280u: goto L_003BA488;
    case 281u: goto L_003BA4C0;
    case 282u: goto L_003BA4E4;
    case 283u: goto L_003BA4EC;
    case 284u: goto L_003BA4F4;
    case 285u: goto L_003BA54C;
    case 286u: goto L_003BA56C;
    case 287u: goto L_003BA578;
    case 288u: goto L_003BA5FC;
    case 289u: goto L_003BA634;
    case 290u: goto L_003BA66C;
    case 291u: goto L_003BA678;
    case 292u: goto L_003BA680;
    case 293u: goto L_003BA6B0;
    case 294u: goto L_003BA6F8;
    case 295u: goto L_003BA708;
    case 296u: goto L_003BA714;
    case 297u: goto L_003BA730;
    case 298u: goto L_003BA740;
    case 299u: goto L_003BA760;
    case 300u: goto L_003BA780;
    case 301u: goto L_003BA7B8;
    case 302u: goto L_003BA7E0;
    case 303u: goto L_003BA7EC;
    case 304u: goto L_003BA7F8;
    case 305u: goto L_003BA81C;
    case 306u: goto L_003BA830;
    case 307u: goto L_003BA85C;
    case 308u: goto L_003BA870;
    case 309u: goto L_003BA890;
    case 310u: goto L_003BA8B0;
    case 311u: goto L_003BA8FC;
    case 312u: goto L_003BA90C;
    case 313u: goto L_003BA91C;
    case 314u: goto L_003BA92C;
    case 315u: goto L_003BA958;
    case 316u: goto L_003BA964;
    case 317u: goto L_003BA970;
    case 318u: goto L_003BA9A0;
    case 319u: goto L_003BA9C0;
    case 320u: goto L_003BA9EC;
    case 321u: goto L_003BAA00;
    case 322u: goto L_003BAA10;
    case 323u: goto L_003BAB54;
    case 324u: goto L_003BAB70;
    case 325u: goto L_003BAB9C;
    case 326u: goto L_003BABFC;
    case 327u: goto L_003BAC20;
    case 328u: goto L_003BAC60;
    case 329u: goto L_003BAC80;
    case 330u: goto L_003BACA8;
    case 331u: goto L_003BACC0;
    case 332u: goto L_003BAD3C;
    case 333u: goto L_003BAD54;
    case 334u: goto L_003BAD5C;
    case 335u: goto L_003BAD64;
    case 336u: goto L_003BAD6C;
    case 337u: goto L_003BADA0;
    case 338u: goto L_003BADFC;
    case 339u: goto L_003BAE18;
    case 340u: goto L_003BAE20;
    case 341u: goto L_003BAE28;
    case 342u: goto L_003BAE30;
    case 343u: goto L_003BAE38;
    case 344u: goto L_003BAE88;
    case 345u: goto L_003BAE98;
    case 346u: goto L_003BAEA4;
    case 347u: goto L_003BAEB0;
    case 348u: goto L_003BAEC8;
    case 349u: goto L_003BAED4;
    case 350u: goto L_003BAEDC;
    case 351u: goto L_003BAEE8;
    case 352u: goto L_003BAF10;
    case 353u: goto L_003BAF68;
    case 354u: goto L_003BAF8C;
    case 355u: goto L_003BAF98;
    case 356u: goto L_003BAFA0;
    case 357u: goto L_003BAFA8;
    case 358u: goto L_003BAFE0;
    case 359u: goto L_003BB02C;
    case 360u: goto L_003BB05C;
    case 361u: goto L_003BB0B4;
    case 362u: goto L_003BB0BC;
    case 363u: goto L_003BB0C4;
    case 364u: goto L_003BB0CC;
    case 365u: goto L_003BB100;
    case 366u: goto L_003BB1BC;
    case 367u: goto L_003BB1D0;
    case 368u: goto L_003BB1DC;
    case 369u: goto L_003BB1F0;
    case 370u: goto L_003BB210;
    case 371u: goto L_003BB258;
    case 372u: goto L_003BB2C4;
    case 373u: goto L_003BB2D4;
    case 374u: goto L_003BB310;
    case 375u: goto L_003BB334;
    case 376u: goto L_003BB34C;
    case 377u: goto L_003BB388;
    case 378u: goto L_003BB394;
    case 379u: goto L_003BB418;
    case 380u: goto L_003BB430;
    case 381u: goto L_003BB454;
    case 382u: goto L_003BB49C;
    case 383u: goto L_003BB4D8;
    case 384u: goto L_003BB4F0;
    case 385u: goto L_003BB570;
    case 386u: goto L_003BB580;
    case 387u: goto L_003BB58C;
    case 388u: goto L_003BB5A0;
    case 389u: goto L_003BB5E0;
    case 390u: goto L_003BB644;
    case 391u: goto L_003BB684;
    case 392u: goto L_003BB68C;
    case 393u: goto L_003BB6CC;
    case 394u: goto L_003BB6E8;
    case 395u: goto L_003BB710;
    case 396u: goto L_003BB740;
    case 397u: goto L_003BB76C;
    case 398u: goto L_003BB7C8;
    case 399u: goto L_003BB7FC;
    case 400u: goto L_003BB820;
    case 401u: goto L_003BB870;
    case 402u: goto L_003BB880;
    case 403u: goto L_003BB88C;
    case 404u: goto L_003BB8A0;
    case 405u: goto L_003BB900;
    case 406u: goto L_003BB960;
    case 407u: goto L_003BB998;
    case 408u: goto L_003BB9AC;
    case 409u: goto L_003BB9BC;
    case 410u: goto L_003BB9C8;
    case 411u: goto L_003BBA1C;
    case 412u: goto L_003BBA2C;
    case 413u: goto L_003BBA38;
    case 414u: goto L_003BBA48;
    case 415u: goto L_003BBA60;
    case 416u: goto L_003BBA6C;
    case 417u: goto L_003BBA78;
    case 418u: goto L_003BBA80;
    case 419u: goto L_003BBA88;
    case 420u: goto L_003BBA98;
    case 421u: goto L_003BBAA4;
    case 422u: goto L_003BBAAC;
    case 423u: goto L_003BBAB8;
    case 424u: goto L_003BBAE0;
    case 425u: goto L_003BBB38;
    case 426u: goto L_003BBB5C;
    case 427u: goto L_003BBB70;
    case 428u: goto L_003BBB88;
    case 429u: goto L_003BBB98;
    case 430u: goto L_003BBBA4;
    case 431u: goto L_003BBBB8;
    case 432u: goto L_003BBC00;
    case 433u: goto L_003BBC10;
    case 434u: goto L_003BBC20;
    case 435u: goto L_003BBC38;
    case 436u: goto L_003BBC40;
    case 437u: goto L_003BBC48;
    case 438u: goto L_003BBC60;
    case 439u: goto L_003BBC88;
    case 440u: goto L_003BBC98;
    case 441u: goto L_003BBCA4;
    case 442u: goto L_003BBCB0;
    case 443u: goto L_003BBCBC;
    case 444u: goto L_003BBCD0;
    case 445u: goto L_003BBCE4;
    case 446u: goto L_003BBCEC;
    case 447u: goto L_003BBCFC;
    case 448u: goto L_003BBD04;
    case 449u: goto L_003BBD10;
    case 450u: goto L_003BBD20;
    case 451u: goto L_003BBD4C;
    case 452u: goto L_003BBD90;
    case 453u: goto L_003BBDBC;
    case 454u: goto L_003BBDC8;
    case 455u: goto L_003BBDDC;
    case 456u: goto L_003BBDF4;
    case 457u: goto L_003BBE10;
    case 458u: goto L_003BBEBC;
    case 459u: goto L_003BBECC;
    case 460u: goto L_003BBED4;
    case 461u: goto L_003BBF04;
    case 462u: goto L_003BBF30;
    case 463u: goto L_003BBF80;
    case 464u: goto L_003BBF90;
    case 465u: goto L_003BBF9C;
    case 466u: goto L_003BBFE4;
    case 467u: goto L_003BBFFC;
    default: bad_entry(c, 0x003B8000u); return;
    }
L_003B8000:
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2356u));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2360u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8532u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B802Cu); st32((c.r[2].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_001D(c, 96u, depth + 1u); else { c.pc = 0x00175AB0u; return; } if (c.pc != 0x003B802Cu) [[unlikely]] return; }
L_003B802C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8038u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 157u, depth + 1u); else { c.pc = 0x0023A290u; return; } if (c.pc != 0x003B8038u) [[unlikely]] return; }
L_003B8038:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B80B0; } }
L_003B8040:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8565u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003B80B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8060u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 148u, depth + 1u); else { c.pc = 0x001DD100u; return; } if (c.pc != 0x003B8060u) [[unlikely]] return; }
L_003B8060:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B80B0; } }
    c.f[0] = ld32((c.r[16].w[0] + 2544u));
    set32(c.r[2], c.r[29].w[0] + 36u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2548u));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2552u));
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8532u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B80A0u); st32((c.r[2].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_001D(c, 96u, depth + 1u); else { c.pc = 0x00175AB0u; return; } if (c.pc != 0x003B80A0u) [[unlikely]] return; }
L_003B80A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B80ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 157u, depth + 1u); else { c.pc = 0x0023A290u; return; } if (c.pc != 0x003B80ACu) [[unlikely]] return; }
L_003B80AC:
    c.budget -= 1;
L_003B80B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B80C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B80D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 4208u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 636u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B80F8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x003B80F8u) [[unlikely]] return; }
L_003B80F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8104u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0077(c, 370u, depth + 1u); else { c.pc = 0x002DF630u; return; } if (c.pc != 0x003B8104u) [[unlikely]] return; }
L_003B8104:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B8120:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B8130:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B8170; } }
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[5], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st8((c.r[17].w[0] + 705u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8164u); st32((c.r[17].w[0] + 712u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x003B8164u) [[unlikely]] return; }
L_003B8164:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B8228; } }
    c.budget -= 1;
L_003B8170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8178u);  if (depth < kMaxDepth) unit_003B(c, 6u, depth + 1u); else { c.pc = 0x001EC130u; return; } if (c.pc != 0x003B8178u) [[unlikely]] return; }
L_003B8178:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8184u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AE(c, 50u, depth + 1u); else { c.pc = 0x003B8630u; return; } if (c.pc != 0x003B8184u) [[unlikely]] return; }
L_003B8184:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8194u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 68u, depth + 1u); else { c.pc = 0x003B8A50u; return; } if (c.pc != 0x003B8194u) [[unlikely]] return; }
L_003B8194:
    c.f[2] = ld32((c.r[17].w[0] + 8292u));
    c.f[1] = ld32((c.r[17].w[0] + 712u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 712u), c.f[1]);  if (t) { goto L_003B8228; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B81C4u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x003B81C4u) [[unlikely]] return; }
L_003B81C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B8210; } }
    set32(c.r[2], c.r[16].w[0] << 1);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B81E0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003B81E0u) [[unlikely]] return; }
L_003B81E0:
    set32(c.r[5], c.r[16].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B81ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003B81ECu) [[unlikely]] return; }
L_003B81EC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B81F8u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_004E(c, 157u, depth + 1u); else { c.pc = 0x0023A290u; return; } if (c.pc != 0x003B81F8u) [[unlikely]] return; }
L_003B81F8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8204u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x003B8204u) [[unlikely]] return; }
L_003B8204:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B8218; } }
    c.budget -= 1;
L_003B8210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8218u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 162u, depth + 1u); else { c.pc = 0x0023A310u; return; } if (c.pc != 0x003B8218u) [[unlikely]] return; }
L_003B8218:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8224u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_002E(c, 79u, depth + 1u); else { c.pc = 0x001B9200u; return; } if (c.pc != 0x003B8224u) [[unlikely]] return; }
L_003B8224:
    c.budget -= 1;
L_003B8228:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B8240:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B8288; } }
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B827Cu); st32((c.r[16].w[0] + 712u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x003B827Cu) [[unlikely]] return; }
L_003B827C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B83A0; } }
    c.budget -= 1;
L_003B8288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8290u);  if (depth < kMaxDepth) unit_003B(c, 6u, depth + 1u); else { c.pc = 0x001EC130u; return; } if (c.pc != 0x003B8290u) [[unlikely]] return; }
L_003B8290:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B829Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 50u, depth + 1u); else { c.pc = 0x003B8630u; return; } if (c.pc != 0x003B829Cu) [[unlikely]] return; }
L_003B829C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B82ACu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 59u, depth + 1u); else { c.pc = 0x003B8900u; return; } if (c.pc != 0x003B82ACu) [[unlikely]] return; }
L_003B82AC:
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B82C0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 59u, depth + 1u); else { c.pc = 0x003B8900u; return; } if (c.pc != 0x003B82C0u) [[unlikely]] return; }
L_003B82C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B82CCu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 53u, depth + 1u); else { c.pc = 0x003B8810u; return; } if (c.pc != 0x003B82CCu) [[unlikely]] return; }
L_003B82CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B82D8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 53u, depth + 1u); else { c.pc = 0x003B8810u; return; } if (c.pc != 0x003B82D8u) [[unlikely]] return; }
L_003B82D8:
    c.f[2] = ld32((c.r[16].w[0] + 8292u));
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 712u), c.f[1]);  if (t) { goto L_003B83A0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B830Cu); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x003B830Cu) [[unlikely]] return; }
L_003B830C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B8338; } }
    set32(c.r[19], c.r[19].w[0] << 1);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8324u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003B8324u) [[unlikely]] return; }
L_003B8324:
    set32(c.r[5], c.r[19].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8330u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003B8330u) [[unlikely]] return; }
L_003B8330:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_003B8338:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8348u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x003B8348u) [[unlikely]] return; }
L_003B8348:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B8370; } }
    set32(c.r[17], c.r[17].w[0] << 1);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8360u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003B8360u) [[unlikely]] return; }
L_003B8360:
    set32(c.r[5], c.r[17].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B836Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003B836Cu) [[unlikely]] return; }
L_003B836C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_003B8370:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B8388; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8380u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 157u, depth + 1u); else { c.pc = 0x0023A290u; return; } if (c.pc != 0x003B8380u) [[unlikely]] return; }
L_003B8380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B8390; } }
L_003B8388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8390u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 162u, depth + 1u); else { c.pc = 0x0023A310u; return; } if (c.pc != 0x003B8390u) [[unlikely]] return; }
L_003B8390:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B839Cu); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_002E(c, 79u, depth + 1u); else { c.pc = 0x001B9200u; return; } if (c.pc != 0x003B839Cu) [[unlikely]] return; }
L_003B839C:
    c.budget -= 1;
L_003B83A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003B83C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 336u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_003B8408; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B83E8u);  if (depth < kMaxDepth) unit_00B2(c, 367u, depth + 1u); else { c.pc = 0x003CBDD0u; return; } if (c.pc != 0x003B83E8u) [[unlikely]] return; }
L_003B83E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B8408; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8404u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 157u, depth + 1u); else { c.pc = 0x0023A290u; return; } if (c.pc != 0x003B8404u) [[unlikely]] return; }
L_003B8404:
    c.budget -= 1;
L_003B8408:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8414u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x003B8414u) [[unlikely]] return; }
L_003B8414:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8420u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_002E(c, 79u, depth + 1u); else { c.pc = 0x001B9200u; return; } if (c.pc != 0x003B8420u) [[unlikely]] return; }
L_003B8420:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B8440:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B8450:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[4].w[0] + 304u);  if (t) { goto L_003B8610; } }
    c.f[1] = ld32((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[3].d[0] = c.r[3].d[0] | 26214ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[5].w[0] + 16u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    st32((c.r[5].w[0] + 16u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[5].w[0] + 20u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    st32((c.r[5].w[0] + 20u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[5].w[0] + 24u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[5].w[0] + 28u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    st32((c.r[5].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 5132u)));
    set32(c.r[3], c.r[3].w[0] + 8192u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    set32(c.r[3], c.r[3].w[0] - 8192u);
    st32((c.r[4].w[0] + 5132u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 5144u)));
    set32(c.r[3], c.r[3].w[0] + 24576u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    set32(c.r[3], c.r[3].w[0] - 24576u);
    st32((c.r[4].w[0] + 5144u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 5156u)));
    set32(c.r[3], c.r[3].w[0] + 32767u);
    set32(c.r[3], c.r[3].w[0] + 8193u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    set32(c.r[3], c.r[3].w[0] - 32768u);
    set32(c.r[3], c.r[3].w[0] - 8192u);
    st32((c.r[4].w[0] + 5156u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 5168u)));
    set32(c.r[3], c.r[3].w[0] + 32767u);
    set32(c.r[3], c.r[3].w[0] + 24577u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 32768u);
    set32(c.r[3], c.r[3].w[0] - 24576u);
    st32((c.r[4].w[0] + 5168u), c.r[3].w[0]);
    c.budget -= 108;
L_003B8610:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B8620:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B8630:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_003B8680; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 1260u)));
    set32(c.r[3], 0u - 8192u);
    c.r[2].d[0] = c.r[4].d[0] & 49152ull;
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);  if (t) { goto L_003B8698; } }
L_003B8680:
    set32(c.r[4], ld32((c.r[20].w[0] + 1260u)));
    set32(c.r[2], c.r[4].w[0] + 8192u);
    c.r[2].d[0] = c.r[2].d[0] & 49152ull;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
L_003B8698:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    set32(c.r[3], ld32((c.r[20].w[0] + 84u)));
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = ld8((c.r[20].w[0] + 8658u));
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] - 23004u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[18].d[0] = c.r[3].d[0] << 48;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[21].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 18;
    { const bool t = c.r[17].sd[0] >= 0; c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);  if (t) { goto L_003B86F8; } }
    c.r[2].d[0] = c.r[21].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[21].d[0] = c.r[2].d[0] << 48;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 48);
    c.budget -= 6;
L_003B86F8:
    c.f[1] = c.r[21].w[0];
    c.f[0] = ld32((c.r[20].w[0] + 8292u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8714u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x003B8714u) [[unlikely]] return; }
L_003B8714:
    c.f[20] = c.f[0];
    c.f[0] = c.r[17].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8724u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x003B8724u) [[unlikely]] return; }
L_003B8724:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B8790; } }
    c.f[2] = c.r[21].w[0];
    c.f[0] = c.r[18].w[0];
    c.f[1] = ld32((c.r[20].w[0] + 8292u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    set32(c.r[2], c.r[18].w[0] - c.r[16].w[0]);
    st32((c.r[20].w[0] + 84u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[20].w[0] + 1260u));
    c.f[1] = ld32((c.r[20].w[0] + 8292u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 1260u), c.r[2].w[0]);  if (t) { goto L_003B87A8; } }
    c.budget -= 1;
L_003B8790:
    set32(c.r[2], c.r[18].w[0] + c.r[17].w[0]);
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    set32(c.r[2], c.r[18].w[0] - c.r[16].w[0]);
    st32((c.r[20].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 1260u), 0u);
    c.budget -= 6;
L_003B87A8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 14));  if (t) { goto L_003B87CC; } }
    set32(c.r[2], c.r[16].w[0] + 8192u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);  if (t) { goto L_003B87D8; } }
L_003B87CC:
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
L_003B87D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003B8810:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + 6u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8840u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003B8840u) [[unlikely]] return; }
L_003B8840:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8850u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003B8850u) [[unlikely]] return; }
L_003B8850:
    set32(c.r[4], c.r[17].w[0] + 1296u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B885Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003B885Cu) [[unlikely]] return; }
L_003B885C:
    c.f[13] = ld32((c.r[29].w[0] + 72u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8868u); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003B8868u) [[unlikely]] return; }
L_003B8868:
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.f[0] = c.r[18].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8880u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x003B8880u) [[unlikely]] return; }
L_003B8880:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44400000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = c.r[18].d[0] << 48;  if (t) { goto L_003B88B8; } }
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[18], 0u + 768u);  if (t) { goto L_003B88B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B88B8; } }
    c.budget -= 1;
L_003B88B0:
    set32(c.r[18], 0u - 768u);
    c.budget -= 2;
L_003B88B8:
    set32(c.r[5], c.r[16].w[0] + 6u);
    set32(c.r[4], c.r[5].w[0] << 1);
    c.r[3].d[0] = c.r[18].d[0] << 48;
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 5060u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    st32((c.r[5].w[0] + 5060u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003B8900:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], c.r[5].w[0] << 6);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 3504u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 2048u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 3508u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 3512u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8944u); st32((c.r[29].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003B8944u) [[unlikely]] return; }
L_003B8944:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8954u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003B8954u) [[unlikely]] return; }
L_003B8954:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8960u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003B8960u) [[unlikely]] return; }
L_003B8960:
    set32(c.r[4], c.r[16].w[0] + 1296u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B896Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003B896Cu) [[unlikely]] return; }
L_003B896C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8978u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x00127450u; return; } if (c.pc != 0x003B8978u) [[unlikely]] return; }
L_003B8978:
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = ld32((c.r[29].w[0] + 88u));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B898Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003B898Cu) [[unlikely]] return; }
L_003B898C:
    c.f[12] = ld32((c.r[29].w[0] + 84u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8998u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003B8998u) [[unlikely]] return; }
L_003B8998:
    set32(c.r[3], c.r[17].w[0] + 4u);
    c.r[17].d[0] = c.r[2].d[0] << 48;
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[16], c.r[2].w[0] + 304u);
    set32(c.r[2], ld32((c.r[2].w[0] + 304u)));
    set32(c.r[18], c.r[17].w[0] - c.r[2].w[0]);
    c.f[0] = c.r[18].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B89C4u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x003B89C4u) [[unlikely]] return; }
L_003B89C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B8A08; } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_003B89F8; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] + 256u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003B8A30; } }
    c.budget -= 1;
L_003B89F8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 256u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003B8A30; } }
L_003B8A08:
    c.r[1].d[0] = c.r[17].sd[0] < 4097ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003B8A18; } }
    set32(c.r[17], 0u + 4096u);
    c.budget -= 1;
L_003B8A18:
    c.r[1].d[0] = c.r[17].sd[0] < -12288ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003B8A28; } }
    set32(c.r[17], 0u - 12288u);
    c.budget -= 1;
L_003B8A28:
    st32((c.r[16].w[0]), c.r[17].w[0]);
    c.budget -= 2;
L_003B8A30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003B8A50:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[18].w[0] + 2048u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8A80u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003B8A80u) [[unlikely]] return; }
L_003B8A80:
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[16], c.r[2].w[0] + 304u);
    set32(c.r[2], ld32((c.r[2].w[0] + 304u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8A98u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x003B8A98u) [[unlikely]] return; }
L_003B8A98:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8AA8u); set32(c.r[4], c.r[4].w[0] + 5744u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x003B8AA8u) [[unlikely]] return; }
L_003B8AA8:
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    st32((c.r[29].w[0] + 116u), 0u);
    st32((c.r[29].w[0] + 112u), c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8AC4u); st32((c.r[29].w[0] + 120u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003B8AC4u) [[unlikely]] return; }
L_003B8AC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8ACCu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003B8ACCu) [[unlikely]] return; }
L_003B8ACC:
    set32(c.r[19], c.r[29].w[0] + 100u);
    c.f[20] = ld32((c.r[19].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B8B50; } }
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_003B8B50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8AFCu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 217u, depth + 1u); else { c.pc = 0x00127620u; return; } if (c.pc != 0x003B8AFCu) [[unlikely]] return; }
L_003B8AFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8B04u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x003B8B04u) [[unlikely]] return; }
L_003B8B04:
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8B14u); c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x003B8B14u) [[unlikely]] return; }
L_003B8B14:
    c.f[1] = ld32((c.r[19].w[0]));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::mult(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[17].w[0] - c.r[3].w[0]);
    c.r[17].d[0] = c.r[3].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.budget -= 15;
L_003B8B50:
    c.r[4].d[0] = c.r[17].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[3].d[0] = c.r[4].d[0] & 32768ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].d[0] = c.r[4].sd[0] < -256ll ? 1ull : 0ull;  if (t) { goto L_003B8B88; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003B8B78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u - 256u);  if (t) { goto L_003B8B88; } }
    c.budget -= 1;
L_003B8B78:
    c.r[1].d[0] = c.r[4].sd[0] < 257ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003B8B88; } }
    set32(c.r[17], 0u + 256u);
    c.budget -= 1;
L_003B8B88:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.r[17].d[0] = c.r[3].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[17].sd[0] >= 0; c.r[1].d[0] = c.r[17].sd[0] < -4096ll ? 1ull : 0ull;  if (t) { goto L_003B8BC0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003B8BB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u - 4096u);  if (t) { goto L_003B8BC0; } }
L_003B8BB0:
    c.r[1].d[0] = c.r[17].sd[0] < 12289ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003B8BC0; } }
    set32(c.r[17], 0u + 12288u);
    c.budget -= 1;
L_003B8BC0:
    c.r[3].d[0] = c.r[17].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003B8BF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B8C20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] + 6144u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 636u), c.r[2].w[0]);  if (t) { goto L_003B8C30; } }
    c.budget -= 1;
L_003B8C20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] + 5952u);
    st32((c.r[16].w[0] + 636u), c.r[2].w[0]);
    c.budget -= 4;
L_003B8C30:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8C3Cu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_003D(c, 112u, depth + 1u); else { c.pc = 0x001F54F0u; return; } if (c.pc != 0x003B8C3Cu) [[unlikely]] return; }
L_003B8C3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8C48u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_003D(c, 112u, depth + 1u); else { c.pc = 0x001F54F0u; return; } if (c.pc != 0x003B8C48u) [[unlikely]] return; }
L_003B8C48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8C50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 186u, depth + 1u); else { c.pc = 0x0016EB40u; return; } if (c.pc != 0x003B8C50u) [[unlikely]] return; }
L_003B8C50:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8C60u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x003B8C60u) [[unlikely]] return; }
L_003B8C60:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8C6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0077(c, 370u, depth + 1u); else { c.pc = 0x002DF630u; return; } if (c.pc != 0x003B8C6Cu) [[unlikely]] return; }
L_003B8C6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B8C80:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 839u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 1244u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 1240u), 0u);  c.pc = t; return; }
L_003B8CA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 704u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] + 6336u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003B8000u < 16384u) { entry = entries_00AE[(t - 0x003B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003B8CC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] + 6352u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003B8000u < 16384u) { entry = entries_00AE[(t - 0x003B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003B8CE0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 705u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 712u), c.r[3].w[0]);  c.pc = t; return; }
L_003B8D00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[2] = ld32((c.r[4].w[0] + 8252u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 712u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 712u), c.f[1]);  if (t) { goto L_003B8D40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8D34u);  if (depth < kMaxDepth) unit_00AE(c, 199u, depth + 1u); else { c.pc = 0x003B98C0u; return; } if (c.pc != 0x003B8D34u) [[unlikely]] return; }
L_003B8D34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B8D58; } }
    c.budget -= 1;
L_003B8D40:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 712u), c.r[3].w[0]);
    c.budget -= 6;
L_003B8D58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B8D70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8D84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 199u, depth + 1u); else { c.pc = 0x003B98C0u; return; } if (c.pc != 0x003B8D84u) [[unlikely]] return; }
L_003B8D84:
    c.f[2] = ld32((c.r[16].w[0] + 8252u));
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 712u), c.f[1]);  if (t) { goto L_003B8E48; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8DC0u); st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x003B8DC0u) [[unlikely]] return; }
L_003B8DC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B8E38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 712u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8DDCu); set32(c.r[5], 0u + 107u);  if (depth < kMaxDepth) unit_001A(c, 156u, depth + 1u); else { c.pc = 0x0016A7C0u; return; } if (c.pc != 0x003B8DDCu) [[unlikely]] return; }
L_003B8DDC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8DE8u); set32(c.r[5], 0u + 108u);  if (depth < kMaxDepth) unit_001A(c, 156u, depth + 1u); else { c.pc = 0x0016A7C0u; return; } if (c.pc != 0x003B8DE8u) [[unlikely]] return; }
L_003B8DE8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8DF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003B8DF4u) [[unlikely]] return; }
L_003B8DF4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8E00u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003B8E00u) [[unlikely]] return; }
L_003B8E00:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8656u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8E0Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C640u; return; } if (c.pc != 0x003B8E0Cu) [[unlikely]] return; }
L_003B8E0C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8E18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x003B8E18u) [[unlikely]] return; }
L_003B8E18:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8E24u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 157u, depth + 1u); else { c.pc = 0x0023A290u; return; } if (c.pc != 0x003B8E24u) [[unlikely]] return; }
L_003B8E24:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8E30u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x003B8E30u) [[unlikely]] return; }
L_003B8E30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B8E48; } }
L_003B8E38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    st32((c.r[16].w[0] + 712u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8E48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 162u, depth + 1u); else { c.pc = 0x0023A310u; return; } if (c.pc != 0x003B8E48u) [[unlikely]] return; }
L_003B8E48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B8E60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[4].w[0] + 8252u));
    c.f[1] = ld32((c.r[4].w[0] + 712u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 712u), c.f[1]);  if (t) { goto L_003B8E90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8E8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 79u, depth + 1u); else { c.pc = 0x001B9200u; return; } if (c.pc != 0x003B8E8Cu) [[unlikely]] return; }
L_003B8E8C:
    c.budget -= 1;
L_003B8E90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B8EA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 6368u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8ECCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B8ECCu) [[unlikely]] return; }
L_003B8ECC:
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8ED8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 57u, depth + 1u); else { c.pc = 0x001E4C20u; return; } if (c.pc != 0x003B8ED8u) [[unlikely]] return; }
L_003B8ED8:
    c.f[2] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B8F00; } }
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 2;
L_003B8F00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8F08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x003B8F08u) [[unlikely]] return; }
L_003B8F08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B8F20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D800000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[1] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 705u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8F58u); st32((c.r[4].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_003B(c, 6u, depth + 1u); else { c.pc = 0x001EC130u; return; } if (c.pc != 0x003B8F58u) [[unlikely]] return; }
L_003B8F58:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8F64u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003A(c, 118u, depth + 1u); else { c.pc = 0x001EAA20u; return; } if (c.pc != 0x003B8F64u) [[unlikely]] return; }
L_003B8F64:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8F7Cu); set32(c.r[7], 0u + 11u);  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x003B8F7Cu) [[unlikely]] return; }
L_003B8F7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B8F90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8FA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 6u, depth + 1u); else { c.pc = 0x001EC130u; return; } if (c.pc != 0x003B8FA4u) [[unlikely]] return; }
L_003B8FA4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8FB0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003A(c, 118u, depth + 1u); else { c.pc = 0x001EAA20u; return; } if (c.pc != 0x003B8FB0u) [[unlikely]] return; }
L_003B8FB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B8FD0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 712u), c.r[3].w[0]);
    c.budget -= 6;
L_003B8FD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B8FE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8FF4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 6u, depth + 1u); else { c.pc = 0x001EC130u; return; } if (c.pc != 0x003B8FF4u) [[unlikely]] return; }
L_003B8FF4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9000u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003A(c, 118u, depth + 1u); else { c.pc = 0x001EAA20u; return; } if (c.pc != 0x003B9000u) [[unlikely]] return; }
L_003B9000:
    c.f[2] = ld32((c.r[16].w[0] + 8252u));
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 712u), c.f[1]);  if (t) { goto L_003B9030; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9028u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 199u, depth + 1u); else { c.pc = 0x003B98C0u; return; } if (c.pc != 0x003B9028u) [[unlikely]] return; }
L_003B9028:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B9048; } }
L_003B9030:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 712u), c.r[3].w[0]);
    c.budget -= 6;
L_003B9048:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B9060:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9074u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 6u, depth + 1u); else { c.pc = 0x001EC130u; return; } if (c.pc != 0x003B9074u) [[unlikely]] return; }
L_003B9074:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9080u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003A(c, 118u, depth + 1u); else { c.pc = 0x001EAA20u; return; } if (c.pc != 0x003B9080u) [[unlikely]] return; }
L_003B9080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9088u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 199u, depth + 1u); else { c.pc = 0x003B98C0u; return; } if (c.pc != 0x003B9088u) [[unlikely]] return; }
L_003B9088:
    c.f[2] = ld32((c.r[16].w[0] + 8252u));
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 712u), c.f[1]);  if (t) { goto L_003B9150; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B90C4u); st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x003B90C4u) [[unlikely]] return; }
L_003B90C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B9140; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 712u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B90E0u); set32(c.r[5], 0u + 107u);  if (depth < kMaxDepth) unit_001A(c, 156u, depth + 1u); else { c.pc = 0x0016A7C0u; return; } if (c.pc != 0x003B90E0u) [[unlikely]] return; }
L_003B90E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B90ECu); set32(c.r[5], 0u + 108u);  if (depth < kMaxDepth) unit_001A(c, 156u, depth + 1u); else { c.pc = 0x0016A7C0u; return; } if (c.pc != 0x003B90ECu) [[unlikely]] return; }
L_003B90EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B90F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003B90F8u) [[unlikely]] return; }
L_003B90F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9104u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003B9104u) [[unlikely]] return; }
L_003B9104:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8656u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9110u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C640u; return; } if (c.pc != 0x003B9110u) [[unlikely]] return; }
L_003B9110:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B911Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x003B911Cu) [[unlikely]] return; }
L_003B911C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9128u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 157u, depth + 1u); else { c.pc = 0x0023A290u; return; } if (c.pc != 0x003B9128u) [[unlikely]] return; }
L_003B9128:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9134u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x003B9134u) [[unlikely]] return; }
L_003B9134:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B9150; } }
    c.budget -= 1;
L_003B9140:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    st32((c.r[16].w[0] + 712u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9150u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 162u, depth + 1u); else { c.pc = 0x0023A310u; return; } if (c.pc != 0x003B9150u) [[unlikely]] return; }
L_003B9150:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B9160:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[4].w[0] + 8252u));
    c.f[1] = ld32((c.r[4].w[0] + 712u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 712u), c.f[1]);  if (t) { goto L_003B9190; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B918Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 68u, depth + 1u); else { c.pc = 0x001B9070u; return; } if (c.pc != 0x003B918Cu) [[unlikely]] return; }
L_003B918C:
    c.budget -= 1;
L_003B9190:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B91A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 6400u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B91CCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B91CCu) [[unlikely]] return; }
L_003B91CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B91D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x003B91D4u) [[unlikely]] return; }
L_003B91D4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B9258; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B91ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 69u, depth + 1u); else { c.pc = 0x001E4E00u; return; } if (c.pc != 0x003B91ECu) [[unlikely]] return; }
L_003B91EC:
    c.f[2] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003B9218; } }
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 3;
L_003B9218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9220u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 56u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x003B9220u) [[unlikely]] return; }
L_003B9220:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B9258; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9230u);  if (depth < kMaxDepth) unit_003B(c, 180u, depth + 1u); else { c.pc = 0x001EDE90u; return; } if (c.pc != 0x003B9230u) [[unlikely]] return; }
L_003B9230:
    st32((c.r[16].w[0] + 68u), 0u);
    c.f[12] = 0u;
    st32((c.r[16].w[0] + 52u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 5u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9258u); st32((c.r[16].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x003B9258u) [[unlikely]] return; }
L_003B9258:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B9270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01FF0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 63999ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 705u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 280u), 0u);
    st8((c.r[4].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B92A8u); st32((c.r[4].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_003B(c, 6u, depth + 1u); else { c.pc = 0x001EC130u; return; } if (c.pc != 0x003B92A8u) [[unlikely]] return; }
L_003B92A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B92B4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003A(c, 118u, depth + 1u); else { c.pc = 0x001EAA20u; return; } if (c.pc != 0x003B92B4u) [[unlikely]] return; }
L_003B92B4:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B92CCu); set32(c.r[7], 0u + 11u);  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x003B92CCu) [[unlikely]] return; }
L_003B92CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B92E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B92F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 6u, depth + 1u); else { c.pc = 0x001EC130u; return; } if (c.pc != 0x003B92F4u) [[unlikely]] return; }
L_003B92F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9300u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003A(c, 118u, depth + 1u); else { c.pc = 0x001EAA20u; return; } if (c.pc != 0x003B9300u) [[unlikely]] return; }
L_003B9300:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B9320; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 712u), c.r[3].w[0]);
    c.budget -= 6;
L_003B9320:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B9330:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9344u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 6u, depth + 1u); else { c.pc = 0x001EC130u; return; } if (c.pc != 0x003B9344u) [[unlikely]] return; }
L_003B9344:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9350u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003A(c, 118u, depth + 1u); else { c.pc = 0x001EAA20u; return; } if (c.pc != 0x003B9350u) [[unlikely]] return; }
L_003B9350:
    c.f[2] = ld32((c.r[16].w[0] + 8252u));
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 712u), c.f[1]);  if (t) { goto L_003B9380; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9378u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 199u, depth + 1u); else { c.pc = 0x003B98C0u; return; } if (c.pc != 0x003B9378u) [[unlikely]] return; }
L_003B9378:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B9398; } }
L_003B9380:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 712u), c.r[3].w[0]);
    c.budget -= 6;
L_003B9398:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B93B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B93C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 6u, depth + 1u); else { c.pc = 0x001EC130u; return; } if (c.pc != 0x003B93C4u) [[unlikely]] return; }
L_003B93C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B93D0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003A(c, 118u, depth + 1u); else { c.pc = 0x001EAA20u; return; } if (c.pc != 0x003B93D0u) [[unlikely]] return; }
L_003B93D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B93D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 199u, depth + 1u); else { c.pc = 0x003B98C0u; return; } if (c.pc != 0x003B93D8u) [[unlikely]] return; }
L_003B93D8:
    c.f[2] = ld32((c.r[16].w[0] + 8252u));
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 712u), c.f[1]);  if (t) { goto L_003B94A0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9414u); st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x003B9414u) [[unlikely]] return; }
L_003B9414:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B9490; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 712u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9430u); set32(c.r[5], 0u + 107u);  if (depth < kMaxDepth) unit_001A(c, 156u, depth + 1u); else { c.pc = 0x0016A7C0u; return; } if (c.pc != 0x003B9430u) [[unlikely]] return; }
L_003B9430:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B943Cu); set32(c.r[5], 0u + 108u);  if (depth < kMaxDepth) unit_001A(c, 156u, depth + 1u); else { c.pc = 0x0016A7C0u; return; } if (c.pc != 0x003B943Cu) [[unlikely]] return; }
L_003B943C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9448u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003B9448u) [[unlikely]] return; }
L_003B9448:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9454u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003B9454u) [[unlikely]] return; }
L_003B9454:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8656u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9460u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C640u; return; } if (c.pc != 0x003B9460u) [[unlikely]] return; }
L_003B9460:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B946Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x003B946Cu) [[unlikely]] return; }
L_003B946C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9478u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 157u, depth + 1u); else { c.pc = 0x0023A290u; return; } if (c.pc != 0x003B9478u) [[unlikely]] return; }
L_003B9478:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9484u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x003B9484u) [[unlikely]] return; }
L_003B9484:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B94A0; } }
    c.budget -= 1;
L_003B9490:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    st32((c.r[16].w[0] + 712u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B94A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 162u, depth + 1u); else { c.pc = 0x0023A310u; return; } if (c.pc != 0x003B94A0u) [[unlikely]] return; }
L_003B94A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B94B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[1] = ld32((c.r[4].w[0] + 8252u));
    c.f[0] = ld32((c.r[4].w[0] + 712u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 712u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8325u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B9500; } }
    c.f[1] = ld32((c.r[4].w[0] + 712u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B9500; } }
    st32((c.r[4].w[0] + 108u), c.f[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B94FCu); st32((c.r[4].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 68u, depth + 1u); else { c.pc = 0x001B9070u; return; } if (c.pc != 0x003B94FCu) [[unlikely]] return; }
L_003B94FC:
    c.budget -= 1;
L_003B9500:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B9510:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 704u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] + 6424u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003B8000u < 16384u) { entry = entries_00AE[(t - 0x003B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003B9530:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 6432u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B955Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B955Cu) [[unlikely]] return; }
L_003B955C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9564u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x003B9564u) [[unlikely]] return; }
L_003B9564:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9570u); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 202u, depth + 1u); else { c.pc = 0x0026A010u; return; } if (c.pc != 0x003B9570u) [[unlikely]] return; }
L_003B9570:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B9580:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01FF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 63999ull;
    set32(c.r[8], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.f[1] = c.r[2].w[0];
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = 0u;
    set32(c.r[7], 0u + 11u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[4].w[0] + 705u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[4].w[0] + 276u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 280u), 0u);
    st8((c.r[4].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[4].w[0] + 108u), c.f[0]);
    c.budget -= 23;
    { st32((c.r[4].w[0] + 712u), c.r[2].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B0B00u | kUnwind; return; } [[clang::musttail]] return unit_002C(c, 88u, depth); }
L_003B95E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 2u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 8252u));
    c.f[0] = ld32((c.r[4].w[0] + 712u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9614u); st32((c.r[4].w[0] + 712u), c.f[0]);  if (depth < kMaxDepth) unit_005A(c, 266u, depth + 1u); else { c.pc = 0x0026AD70u; return; } if (c.pc != 0x003B9614u) [[unlikely]] return; }
L_003B9614:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B9638; } }
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003B9650; } }
    c.budget -= 1;
L_003B9638:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 712u), c.r[3].w[0]);
    c.budget -= 6;
L_003B9650:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B9660:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 2u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9684u); st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_005A(c, 266u, depth + 1u); else { c.pc = 0x0026AD70u; return; } if (c.pc != 0x003B9684u) [[unlikely]] return; }
L_003B9684:
    c.f[2] = ld32((c.r[16].w[0] + 8252u));
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 712u), c.f[1]);  if (t) { goto L_003B96B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B96ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 199u, depth + 1u); else { c.pc = 0x003B98C0u; return; } if (c.pc != 0x003B96ACu) [[unlikely]] return; }
L_003B96AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B96D0; } }
    c.budget -= 1;
L_003B96B8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 712u), c.r[3].w[0]);
    c.budget -= 6;
L_003B96D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B96E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 2u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9704u); st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_005A(c, 266u, depth + 1u); else { c.pc = 0x0026AD70u; return; } if (c.pc != 0x003B9704u) [[unlikely]] return; }
L_003B9704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B970Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 199u, depth + 1u); else { c.pc = 0x003B98C0u; return; } if (c.pc != 0x003B970Cu) [[unlikely]] return; }
L_003B970C:
    c.f[2] = ld32((c.r[16].w[0] + 8252u));
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 712u), c.f[1]);  if (t) { goto L_003B97D0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9748u); st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x003B9748u) [[unlikely]] return; }
L_003B9748:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B97C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 712u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9764u); set32(c.r[5], 0u + 107u);  if (depth < kMaxDepth) unit_001A(c, 156u, depth + 1u); else { c.pc = 0x0016A7C0u; return; } if (c.pc != 0x003B9764u) [[unlikely]] return; }
L_003B9764:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9770u); set32(c.r[5], 0u + 108u);  if (depth < kMaxDepth) unit_001A(c, 156u, depth + 1u); else { c.pc = 0x0016A7C0u; return; } if (c.pc != 0x003B9770u) [[unlikely]] return; }
L_003B9770:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B977Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003B977Cu) [[unlikely]] return; }
L_003B977C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9788u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003B9788u) [[unlikely]] return; }
L_003B9788:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8656u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9794u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C640u; return; } if (c.pc != 0x003B9794u) [[unlikely]] return; }
L_003B9794:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B97A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x003B97A0u) [[unlikely]] return; }
L_003B97A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B97ACu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 157u, depth + 1u); else { c.pc = 0x0023A290u; return; } if (c.pc != 0x003B97ACu) [[unlikely]] return; }
L_003B97AC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B97B8u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x003B97B8u) [[unlikely]] return; }
L_003B97B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B97D0; } }
L_003B97C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    st32((c.r[16].w[0] + 712u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B97D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 162u, depth + 1u); else { c.pc = 0x0023A310u; return; } if (c.pc != 0x003B97D0u) [[unlikely]] return; }
L_003B97D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B97E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[4].w[0] + 8252u));
    c.f[1] = ld32((c.r[4].w[0] + 712u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 712u), c.f[1]);  if (t) { goto L_003B9818; } }
    st32((c.r[4].w[0] + 108u), c.f[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9814u); st32((c.r[4].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_0056(c, 315u, depth + 1u); else { c.pc = 0x0025BC70u; return; } if (c.pc != 0x003B9814u) [[unlikely]] return; }
L_003B9814:
    c.budget -= 1;
L_003B9818:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B9830:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B9840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 771u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B98A0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9864u); set32(c.r[5], c.r[5].w[0] + 5760u);  if (depth < kMaxDepth) unit_0012(c, 257u, depth + 1u); else { c.pc = 0x0014B900u; return; } if (c.pc != 0x003B9864u) [[unlikely]] return; }
L_003B9864:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 304u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 746u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B98A0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 746u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B98A0; } }
    set32(c.r[5], 0u + 19u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B989Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 153u, depth + 1u); else { c.pc = 0x0023A1C0u; return; } if (c.pc != 0x003B989Cu) [[unlikely]] return; }
L_003B989C:
    c.budget -= 1;
L_003B98A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B98B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B98C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[4].w[0] + 3248u));
    set32(c.r[5], c.r[17].w[0] + 1296u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 3252u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 3256u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9900u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003B9900u) [[unlikely]] return; }
L_003B9900:
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[4], c.r[17].w[0] + 3200u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9910u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 126u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x003B9910u) [[unlikely]] return; }
L_003B9910:
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.f[1] = ld32((c.r[29].w[0] + 56u));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9924u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 160u, depth + 1u); else { c.pc = 0x00126100u; return; } if (c.pc != 0x003B9924u) [[unlikely]] return; }
L_003B9924:
    c.f[12] = ld32((c.r[29].w[0] + 52u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9930u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003B9930u) [[unlikely]] return; }
L_003B9930:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 513ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003B9958; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1244u)));
    set32(c.r[2], c.r[2].w[0] + 512u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1244u), c.r[2].w[0]);  if (t) { goto L_003B9988; } }
    c.budget -= 1;
L_003B9958:
    c.r[1].d[0] = c.r[3].sd[0] < -512ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003B9978; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1244u)));
    set32(c.r[2], c.r[2].w[0] - 512u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1244u), c.r[2].w[0]);  if (t) { goto L_003B9988; } }
    c.budget -= 1;
L_003B9978:
    set32(c.r[2], ld32((c.r[17].w[0] + 1244u)));
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 1244u), c.r[2].w[0]);
    c.budget -= 4;
L_003B9988:
    set32(c.r[3], ld32((c.r[17].w[0] + 1244u)));
    c.r[2].d[0] = c.r[3].sd[0] < 9216ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 9216u);  if (t) { goto L_003B99A8; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1244u), c.r[2].w[0]);  if (t) { goto L_003B99C0; } }
    c.budget -= 1;
L_003B99A8:
    c.r[1].d[0] = c.r[3].sd[0] < -6143ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u - 6144u);  if (t) { goto L_003B99C0; } }
    set32(c.r[16], 0u + 1u);
    st32((c.r[17].w[0] + 1244u), c.r[2].w[0]);
    c.budget -= 3;
L_003B99C0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003B99E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B9A10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] + 7104u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 636u), c.r[2].w[0]);  if (t) { goto L_003B9A20; } }
    c.budget -= 1;
L_003B9A10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] + 6528u);
    st32((c.r[16].w[0] + 636u), c.r[2].w[0]);
    c.budget -= 4;
L_003B9A20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9A28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 186u, depth + 1u); else { c.pc = 0x0016EB40u; return; } if (c.pc != 0x003B9A28u) [[unlikely]] return; }
L_003B9A28:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9A38u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x003B9A38u) [[unlikely]] return; }
L_003B9A38:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9A44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0077(c, 370u, depth + 1u); else { c.pc = 0x002DF630u; return; } if (c.pc != 0x003B9A44u) [[unlikely]] return; }
L_003B9A44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B9A60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B9A70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 704u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B9AC0; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[6], 0u + 4u);
    st8((c.r[16].w[0] + 704u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9AA4u); st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[6].w[0]));  if (depth < kMaxDepth) unit_00B1(c, 277u, depth + 1u); else { c.pc = 0x003C6580u; return; } if (c.pc != 0x003B9AA4u) [[unlikely]] return; }
L_003B9AA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B9AC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9AB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x003B9AB4u) [[unlikely]] return; }
L_003B9AB4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9AC0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 157u, depth + 1u); else { c.pc = 0x0023A290u; return; } if (c.pc != 0x003B9AC0u) [[unlikely]] return; }
L_003B9AC0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003B9AD8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003B9B78; } }
L_003B9AD8:
    set32(c.r[2], 0u + 3u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9AF0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x003B9AF0u) [[unlikely]] return; }
L_003B9AF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B9B60; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[5].d[0] = c.r[2].d[0] & 1ull;  if (t) { goto L_003B9B10; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B9B14; } }
    set32(c.r[5], c.r[5].w[0] - 2u);
    c.budget -= 1;
L_003B9B10:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003B9B14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9B1Cu);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003B9B1Cu) [[unlikely]] return; }
L_003B9B1C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9B28u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x003B9B28u) [[unlikely]] return; }
L_003B9B28:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8656u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9B34u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C640u; return; } if (c.pc != 0x003B9B34u) [[unlikely]] return; }
L_003B9B34:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B9B78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9B58u); set32(c.r[5], 0u + 30u);  if (depth < kMaxDepth) unit_002E(c, 79u, depth + 1u); else { c.pc = 0x001B9200u; return; } if (c.pc != 0x003B9B58u) [[unlikely]] return; }
L_003B9B58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B9B78; } }
L_003B9B60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9B68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 162u, depth + 1u); else { c.pc = 0x0023A310u; return; } if (c.pc != 0x003B9B68u) [[unlikely]] return; }
L_003B9B68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9B74u); set32(c.r[5], 0u + 30u);  if (depth < kMaxDepth) unit_002E(c, 79u, depth + 1u); else { c.pc = 0x001B9200u; return; } if (c.pc != 0x003B9B74u) [[unlikely]] return; }
L_003B9B74:
    c.budget -= 1;
L_003B9B78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B9B90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B9C40; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 712u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9BC4u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x003B9BC4u) [[unlikely]] return; }
L_003B9BC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B9C18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9BD4u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003B9BD4u) [[unlikely]] return; }
L_003B9BD4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9BE0u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003B9BE0u) [[unlikely]] return; }
L_003B9BE0:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8656u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9BECu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C640u; return; } if (c.pc != 0x003B9BECu) [[unlikely]] return; }
L_003B9BEC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9BF8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x003B9BF8u) [[unlikely]] return; }
L_003B9BF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9C04u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 157u, depth + 1u); else { c.pc = 0x0023A290u; return; } if (c.pc != 0x003B9C04u) [[unlikely]] return; }
L_003B9C04:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9C10u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x003B9C10u) [[unlikely]] return; }
L_003B9C10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B9C68; } }
L_003B9C18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = ld32((c.r[16].w[0] + 712u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9C38u); st32((c.r[16].w[0] + 712u), c.f[0]);  if (depth < kMaxDepth) unit_004E(c, 162u, depth + 1u); else { c.pc = 0x0023A310u; return; } if (c.pc != 0x003B9C38u) [[unlikely]] return; }
L_003B9C38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B9C68; } }
L_003B9C40:
    c.f[2] = ld32((c.r[16].w[0] + 8252u));
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 712u), c.f[1]);  if (t) { goto L_003B9C68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9C68u); set32(c.r[5], 0u + 30u);  if (depth < kMaxDepth) unit_002E(c, 79u, depth + 1u); else { c.pc = 0x001B9200u; return; } if (c.pc != 0x003B9C68u) [[unlikely]] return; }
L_003B9C68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B9C80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B9C90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B9CD0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003B9CD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9CC4u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x003B9CC4u) [[unlikely]] return; }
L_003B9CC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B9CD0; } }
    st32((c.r[16].w[0] + 36u), 0u);
    c.budget -= 1;
L_003B9CD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B9CE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B9CF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9D14u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x003B9D14u) [[unlikely]] return; }
L_003B9D14:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003B9D78; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[7], 0u + 17u);
    set32(c.r[6], 0u + 30u);
    set32(c.r[3], 0u + 5u);
    set32(c.r[2], c.r[2].w[0] - 25072u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 24u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 168u), 0u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 184u), 0u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9D70u); st32((c.r[16].w[0] + 188u), 0u);  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x003B9D70u) [[unlikely]] return; }
L_003B9D70:
    st32((c.r[16].w[0] + 504u), 0u);
    st32((c.r[16].w[0] + 508u), 0u);
    c.budget -= 2;
L_003B9D78:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9D88u); c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x003B9D88u) [[unlikely]] return; }
L_003B9D88:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003B9DF0; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[8], 0u + 17u);
    set32(c.r[7], 0u + 30u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] - 25072u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 24u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 168u), 0u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 184u), 0u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9DE8u); st32((c.r[16].w[0] + 188u), 0u);  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x003B9DE8u) [[unlikely]] return; }
L_003B9DE8:
    st32((c.r[16].w[0] + 504u), 0u);
    st32((c.r[16].w[0] + 508u), 0u);
    c.budget -= 2;
L_003B9DF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B9E10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] + 13504u);
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[6], c.r[4].w[0] + 304u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003B8000u < 16384u) { entry = entries_00AE[(t - 0x003B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003B9E40:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 8193u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    st16((c.r[4].w[0] + 562u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003B9E70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 70u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[5].w[0] + 8658u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003B9EA8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003B9EC8; } }
    c.budget -= 1;
L_003B9EA8:
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9EC0u); st8((c.r[17].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x003B9EC0u) [[unlikely]] return; }
L_003B9EC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B9F60; } }
L_003B9EC8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] + 13520u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9EE8u); set32(c.r[7], c.r[16].w[0] + 304u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B9EE8u) [[unlikely]] return; }
L_003B9EE8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[6], c.r[17].w[0] + 192u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[7], c.r[3].w[0] + 1984u);
    c.budget -= 6;
L_003B9F00:
    set32(c.r[4], ld32((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9F00u | kUnwind; return; } goto L_003B9F00; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 2032u));
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 2036u));
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 2040u));
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.budget -= 16;
L_003B9F60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B9F80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 3u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[8].d[0] = c.r[3].d[0] << 56;  if (t) { goto L_003B9FF8; } }
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[9], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + 13480u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[9], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[3], 0u - 1u);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.r[8].d[0] = ld8((c.r[8].w[0]));
    c.budget -= 11;
    { const bool t = c.r[8].d[0] == c.r[3].d[0];  if (t) { goto L_003B9FF8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 516u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 3u)));
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8296u)));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8298u)));
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9FF8u); st16((c.r[4].w[0] + 560u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x003B9FF8u) [[unlikely]] return; }
L_003B9FF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BA010:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 3u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003BA068; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8296u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003BA068; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8298u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003BA090; } }
    c.budget -= 1;
L_003BA068:
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA07Cu); st8((c.r[19].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x003BA07Cu) [[unlikely]] return; }
L_003BA07C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA090u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 245u, depth + 1u); else { c.pc = 0x003B9F80u; return; } if (c.pc != 0x003BA090u) [[unlikely]] return; }
L_003BA090:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003BA0B0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003BA0F0; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 750u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BA0E0; } }
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003BA0F0; } }
    c.budget -= 1;
L_003BA0E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003BA0F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BA100:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_003BA110:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 13600u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA130u); st32((c.r[4].w[0] + 636u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 186u, depth + 1u); else { c.pc = 0x0016EB40u; return; } if (c.pc != 0x003BA130u) [[unlikely]] return; }
L_003BA130:
    st32((c.r[16].w[0] + 304u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA148u); st32((c.r[16].w[0] + 308u), 0u);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x003BA148u) [[unlikely]] return; }
L_003BA148:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA154u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0077(c, 370u, depth + 1u); else { c.pc = 0x002DF630u; return; } if (c.pc != 0x003BA154u) [[unlikely]] return; }
L_003BA154:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BA170:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BA180:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 709u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] + 13696u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003B8000u < 16384u) { entry = entries_00AE[(t - 0x003B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003BA1A0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 709u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    set32(c.r[5], c.r[4].w[0] + 1392u);
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 728u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 14;
    { st32((c.r[4].w[0] + 108u), c.f[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A010u | kUnwind; return; } [[clang::musttail]] return unit_005A(c, 202u, depth); }
L_003BA1E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA1F8u); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 202u, depth + 1u); else { c.pc = 0x0026A010u; return; } if (c.pc != 0x003BA1F8u) [[unlikely]] return; }
L_003BA1F8:
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA208u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 266u, depth + 1u); else { c.pc = 0x0026AD70u; return; } if (c.pc != 0x003BA208u) [[unlikely]] return; }
L_003BA208:
    c.f[2] = ld32((c.r[16].w[0] + 8252u));
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 728u), c.f[1]);  if (t) { goto L_003BA258; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 18u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA248u); st32((c.r[16].w[0] + 728u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0021(c, 20u, depth + 1u); else { c.pc = 0x001848B0u; return; } if (c.pc != 0x003BA248u) [[unlikely]] return; }
L_003BA248:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA254u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 146u, depth + 1u); else { c.pc = 0x0023A0A0u; return; } if (c.pc != 0x003BA254u) [[unlikely]] return; }
L_003BA254:
    c.budget -= 1;
L_003BA258:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BA270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA288u); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 202u, depth + 1u); else { c.pc = 0x0026A010u; return; } if (c.pc != 0x003BA288u) [[unlikely]] return; }
L_003BA288:
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], 0u + 1u);  if (t) { goto L_003BA2B0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA2B0u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 266u, depth + 1u); else { c.pc = 0x0026AD70u; return; } if (c.pc != 0x003BA2B0u) [[unlikely]] return; }
L_003BA2B0:
    c.f[2] = ld32((c.r[16].w[0] + 8252u));
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 728u), c.f[1]);  if (t) { goto L_003BA350; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 709u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA2ECu); st8((c.r[16].w[0] + 709u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x003BA2ECu) [[unlikely]] return; }
L_003BA2EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BA340; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 728u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA308u); set32(c.r[5], 0u + 200u);  if (depth < kMaxDepth) unit_001A(c, 156u, depth + 1u); else { c.pc = 0x0016A7C0u; return; } if (c.pc != 0x003BA308u) [[unlikely]] return; }
L_003BA308:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA314u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003BA314u) [[unlikely]] return; }
L_003BA314:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA320u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 146u, depth + 1u); else { c.pc = 0x0023A0A0u; return; } if (c.pc != 0x003BA320u) [[unlikely]] return; }
L_003BA320:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA32Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x003BA32Cu) [[unlikely]] return; }
L_003BA32C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA338u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x003BA338u) [[unlikely]] return; }
L_003BA338:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BA350; } }
L_003BA340:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 8292u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA350u); st32((c.r[16].w[0] + 728u), c.f[0]);  if (depth < kMaxDepth) unit_004E(c, 162u, depth + 1u); else { c.pc = 0x0023A310u; return; } if (c.pc != 0x003BA350u) [[unlikely]] return; }
L_003BA350:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BA360:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA378u); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 202u, depth + 1u); else { c.pc = 0x0026A010u; return; } if (c.pc != 0x003BA378u) [[unlikely]] return; }
L_003BA378:
    c.f[2] = ld32((c.r[16].w[0] + 8252u));
    c.f[1] = ld32((c.r[16].w[0] + 728u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 728u), c.f[1]);  if (t) { goto L_003BA3A8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA3A4u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0056(c, 315u, depth + 1u); else { c.pc = 0x0025BC70u; return; } if (c.pc != 0x003BA3A4u) [[unlikely]] return; }
L_003BA3A4:
    c.budget -= 1;
L_003BA3A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BA3C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 308u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[18].w[0] + 308u);  if (t) { goto L_003BA4A0; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00840000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] - 27856u);
    set32(c.r[4], 0u + 51u);
    c.budget -= 5;
L_003BA3F8:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8658u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_003BA490; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 304u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_003BA420; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003BA4A0; } }
L_003BA420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA428u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 5u, depth + 1u); else { c.pc = 0x0025C080u; return; } if (c.pc != 0x003BA428u) [[unlikely]] return; }
L_003BA428:
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 750u));
    st8((c.r[17].w[0] + 750u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 304u), c.r[17].w[0]);
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 264u)));
    st32((c.r[17].w[0] + 264u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 270u)));
    st8((c.r[17].w[0] + 270u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 268u)));
    st8((c.r[17].w[0] + 268u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 269u)));
    st8((c.r[17].w[0] + 269u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 504u)));
    st32((c.r[17].w[0] + 504u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 508u)));
    st32((c.r[17].w[0] + 508u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 515u));
    st8((c.r[17].w[0] + 515u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 628u)));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA488u); st32((c.r[17].w[0] + 628u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x003BA488u) [[unlikely]] return; }
L_003BA488:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BA4A0; } }
L_003BA490:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8704u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA3F8u | kUnwind; return; } goto L_003BA3F8; } }
L_003BA4A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003BA4C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 304u)));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BA690; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA4E4u);  if (depth < kMaxDepth) unit_002C(c, 126u, depth + 1u); else { c.pc = 0x001B1CE0u; return; } if (c.pc != 0x003BA4E4u) [[unlikely]] return; }
L_003BA4E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA4ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 352u, depth + 1u); else { c.pc = 0x001BB820u; return; } if (c.pc != 0x003BA4ECu) [[unlikely]] return; }
L_003BA4EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA4F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0031(c, 466u, depth + 1u); else { c.pc = 0x001C5810u; return; } if (c.pc != 0x003BA4F4u) [[unlikely]] return; }
L_003BA4F4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_003BA560; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 500u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 498u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 834u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 559u));
    st8((c.r[16].w[0] + 559u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 572u)));
    st16((c.r[16].w[0] + 572u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 574u)));
    st16((c.r[16].w[0] + 574u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 584u)));
    st32((c.r[16].w[0] + 584u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 592u)));
    st32((c.r[16].w[0] + 592u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 600u)));
    st32((c.r[16].w[0] + 600u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 600u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA54Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 363u, depth + 1u); else { c.pc = 0x0025FE10u; return; } if (c.pc != 0x003BA54Cu) [[unlikely]] return; }
L_003BA54C:
    st32((c.r[17].w[0] + 304u), 0u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 308u), c.r[3].w[0]);  if (t) { goto L_003BA690; } }
    c.budget -= 1;
L_003BA560:
    set32(c.r[4], c.r[16].w[0] + 8592u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA56Cu); set32(c.r[5], c.r[17].w[0] + 2048u);  if (depth < kMaxDepth) unit_0000(c, 251u, depth + 1u); else { c.pc = 0x00102880u; return; } if (c.pc != 0x003BA56Cu) [[unlikely]] return; }
L_003BA56C:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA578u); set32(c.r[5], c.r[16].w[0] + 8640u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003BA578u) [[unlikely]] return; }
L_003BA578:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 769u)));
    st8((c.r[16].w[0] + 769u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 312u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 814u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[17].w[0] + 312u);  if (t) { goto L_003BA5A0; } }
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 814u)));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_003BA5A0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 814u)));
    set32(c.r[2], 0u + 23u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 22u);  if (t) { goto L_003BA640; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003BA608; } }
    set32(c.r[2], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003BA5D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BA670; } }
    c.budget -= 1;
L_003BA5D0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BA670; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA5FCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x003BA5FCu) [[unlikely]] return; }
L_003BA5FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BA670; } }
    c.budget -= 1;
L_003BA608:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BA670; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA634u); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x003BA634u) [[unlikely]] return; }
L_003BA634:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BA670; } }
    c.budget -= 1;
L_003BA640:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 708u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BA670; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 708u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA66Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 53u, depth + 1u); else { c.pc = 0x001D9200u; return; } if (c.pc != 0x003BA66Cu) [[unlikely]] return; }
L_003BA66C:
    c.budget -= 1;
L_003BA670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA678u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 82u, depth + 1u); else { c.pc = 0x001DA300u; return; } if (c.pc != 0x003BA678u) [[unlikely]] return; }
L_003BA678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA680u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 139u, depth + 1u); else { c.pc = 0x001DCFF0u; return; } if (c.pc != 0x003BA680u) [[unlikely]] return; }
L_003BA680:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003BA690; } }
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_003BA690:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BA6B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BA6E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] + 15968u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 636u), c.r[2].w[0]);  if (t) { goto L_003BA6F0; } }
    c.budget -= 1;
L_003BA6E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] + 15296u);
    st32((c.r[16].w[0] + 636u), c.r[2].w[0]);
    c.budget -= 4;
L_003BA6F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA6F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 186u, depth + 1u); else { c.pc = 0x0016EB40u; return; } if (c.pc != 0x003BA6F8u) [[unlikely]] return; }
L_003BA6F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA708u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x003BA708u) [[unlikely]] return; }
L_003BA708:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA714u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0077(c, 370u, depth + 1u); else { c.pc = 0x002DF630u; return; } if (c.pc != 0x003BA714u) [[unlikely]] return; }
L_003BA714:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BA730:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BA740:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] + 16640u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003B8000u < 16384u) { entry = entries_00AE[(t - 0x003B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003BA760:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 705u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 712u), c.r[3].w[0]);  c.pc = t; return; }
L_003BA780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[2] = ld32((c.r[4].w[0] + 8252u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 712u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 712u), c.f[1]);  if (t) { goto L_003BA820; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA7B8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x003BA7B8u) [[unlikely]] return; }
L_003BA7B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BA800; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA7E0u); st32((c.r[16].w[0] + 712u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003BA7E0u) [[unlikely]] return; }
L_003BA7E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA7ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 146u, depth + 1u); else { c.pc = 0x0023A0A0u; return; } if (c.pc != 0x003BA7ECu) [[unlikely]] return; }
L_003BA7EC:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8656u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA7F8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C640u; return; } if (c.pc != 0x003BA7F8u) [[unlikely]] return; }
L_003BA7F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BA820; } }
L_003BA800:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA81Cu); st32((c.r[16].w[0] + 712u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004E(c, 162u, depth + 1u); else { c.pc = 0x0023A310u; return; } if (c.pc != 0x003BA81Cu) [[unlikely]] return; }
L_003BA81C:
    c.budget -= 1;
L_003BA820:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BA830:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[4].w[0] + 8252u));
    c.f[1] = ld32((c.r[4].w[0] + 712u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 712u), c.f[1]);  if (t) { goto L_003BA860; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA85Cu); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_002E(c, 79u, depth + 1u); else { c.pc = 0x001B9200u; return; } if (c.pc != 0x003BA85Cu) [[unlikely]] return; }
L_003BA85C:
    c.budget -= 1;
L_003BA860:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BA870:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] + 16656u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003B8000u < 16384u) { entry = entries_00AE[(t - 0x003B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003BA890:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 705u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 712u), c.r[5].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 304u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003BA8B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[2] = ld32((c.r[4].w[0] + 8252u));
    c.f[1] = ld32((c.r[4].w[0] + 712u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 712u), c.f[1]);  if (t) { goto L_003BA9A8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1592u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_003BA988; } }
    set32(c.r[16], c.r[17].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA8FCu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x003BA8FCu) [[unlikely]] return; }
L_003BA8FC:
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA90Cu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x003BA90Cu) [[unlikely]] return; }
L_003BA90C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA91Cu); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003BA91Cu) [[unlikely]] return; }
L_003BA91C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA92Cu); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003BA92Cu) [[unlikely]] return; }
L_003BA92C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[2], 0u + 3u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA958u); st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 146u, depth + 1u); else { c.pc = 0x0023A0A0u; return; } if (c.pc != 0x003BA958u) [[unlikely]] return; }
L_003BA958:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA964u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x003BA964u) [[unlikely]] return; }
L_003BA964:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 8656u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA970u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C640u; return; } if (c.pc != 0x003BA970u) [[unlikely]] return; }
L_003BA970:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 705u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 705u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 712u), c.r[3].w[0]);  if (t) { goto L_003BA9A0; } }
L_003BA988:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 705u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA9A0u); st32((c.r[17].w[0] + 712u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004E(c, 162u, depth + 1u); else { c.pc = 0x0023A310u; return; } if (c.pc != 0x003BA9A0u) [[unlikely]] return; }
L_003BA9A0:
    st8((c.r[17].w[0] + 304u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003BA9A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BA9C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[4].w[0] + 8252u));
    c.f[1] = ld32((c.r[4].w[0] + 712u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 712u), c.f[1]);  if (t) { goto L_003BA9F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA9ECu); set32(c.r[5], 0u + 30u);  if (depth < kMaxDepth) unit_002E(c, 79u, depth + 1u); else { c.pc = 0x001B9200u; return; } if (c.pc != 0x003BA9ECu) [[unlikely]] return; }
L_003BA9EC:
    c.budget -= 1;
L_003BA9F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BAA00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BAA10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[16].w[0] + 304u);  if (t) { goto L_003BAA40; } }
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BAA40; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003BAA40:
    c.r[4].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003BAAC8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003BAA60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BAB28; } }
    c.budget -= 1;
L_003BAA60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = ld32((c.r[16].w[0] + 8252u));
    set32(c.r[4], ld32((c.r[16].w[0] + 5292u)));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[3], 0u - c.r[4].w[0]);
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003BAAB0; } }
    set32(c.r[3], 0u + 8192u);
    c.budget -= 2;
L_003BAAB0:
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 5292u), c.r[3].w[0]);  if (t) { goto L_003BAB30; } }
    c.budget -= 1;
L_003BAAC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44800000u);
    c.f[0] = ld32((c.r[16].w[0] + 8252u));
    set32(c.r[4], ld32((c.r[16].w[0] + 5292u)));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[3], 0u - c.r[4].w[0]);
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 17;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_003BAB10; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BAB10:
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 5292u), c.r[3].w[0]);  if (t) { goto L_003BAB30; } }
    c.budget -= 1;
L_003BAB28:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003BAB30:
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BAB60; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BAB60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAB54u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x003BAB54u) [[unlikely]] return; }
L_003BAB54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BAB60; } }
    st32((c.r[16].w[0] + 36u), 0u);
    c.budget -= 1;
L_003BAB60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BAB70:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAB9Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x003BAB9Cu) [[unlikely]] return; }
L_003BAB9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003BAC00; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 17u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 23u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[3], c.r[3].w[0] - 21472u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[2], c.r[2].w[0] - 17376u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 180u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BABFCu); st32((c.r[16].w[0] + 188u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x003BABFCu) [[unlikely]] return; }
L_003BABFC:
    c.budget -= 1;
L_003BAC00:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003BAC20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 17824u);
    set32(c.r[6], ld32((c.r[4].w[0] + 264u)));
    set32(c.r[5], c.r[4].w[0] + 304u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[7], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] + 304u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003B8000u < 16384u) { entry = entries_00AE[(t - 0x003B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003BAC60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BAC88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAC80u); c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 462u, depth + 1u); else { c.pc = 0x003BBF30u; return; } if (c.pc != 0x003BAC80u) [[unlikely]] return; }
L_003BAC80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BACA8; } }
L_003BAC88:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] + 17840u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BACA8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BACA8u) [[unlikely]] return; }
L_003BACA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BACC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[3].w[0] + 340u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 340u));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003BAD80; } }
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], 0u - 16384u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].d[0] = 0ull | 58368ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    set32(c.r[4], c.r[17].w[0] + 2048u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[19].w[0] + 104u), 0u);
    st32((c.r[19].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 84u), 0u);
    st16((c.r[19].w[0] + 562u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0] + 566u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[19].w[0] + 500u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAD3Cu); st16((c.r[19].w[0] + 498u), static_cast<std::uint16_t>(c.r[6].w[0]));  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003BAD3Cu) [[unlikely]] return; }
L_003BAD3C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] + 16672u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAD54u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x003BAD54u) [[unlikely]] return; }
L_003BAD54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAD5Cu); set32(c.r[4], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x003BAD5Cu) [[unlikely]] return; }
L_003BAD5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAD64u); set32(c.r[4], ld32((c.r[19].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x003BAD64u) [[unlikely]] return; }
L_003BAD64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAD6Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x003BAD6Cu) [[unlikely]] return; }
L_003BAD6C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003BAD80; } }
    st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003BAD80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003BADA0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBFA00000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.f[0] = c.r[3].w[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 16672u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 3u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BADFCu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003BADFCu) [[unlikely]] return; }
L_003BADFC:
    set32(c.r[16], c.r[29].w[0] + 104u);
    set32(c.r[4], c.r[18].w[0] + 2048u);
    c.f[1] = ld32((c.r[20].w[0] + 104u));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAE18u); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003BAE18u) [[unlikely]] return; }
L_003BAE18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAE20u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x003BAE20u) [[unlikely]] return; }
L_003BAE20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAE28u); set32(c.r[4], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x003BAE28u) [[unlikely]] return; }
L_003BAE28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAE30u); set32(c.r[4], ld32((c.r[20].w[0] + 80u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x003BAE30u) [[unlikely]] return; }
L_003BAE30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAE38u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x003BAE38u) [[unlikely]] return; }
L_003BAE38:
    c.f[1] = ld32((c.r[20].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BAF90; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[18].w[0] + 2048u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[20].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[20].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAE88u); st8((c.r[2].w[0] + 340u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003BAE88u) [[unlikely]] return; }
L_003BAE88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAE98u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003BAE98u) [[unlikely]] return; }
L_003BAE98:
    set32(c.r[4], c.r[20].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAEA4u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003BAEA4u) [[unlikely]] return; }
L_003BAEA4:
    c.f[13] = ld32((c.r[16].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAEB0u); c.f[12] = ld32((c.r[29].w[0] + 96u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003BAEB0u) [[unlikely]] return; }
L_003BAEB0:
    st32((c.r[20].w[0] + 96u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAEC8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003BAEC8u) [[unlikely]] return; }
L_003BAEC8:
    c.f[12] = ld32((c.r[29].w[0] + 100u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAED4u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003BAED4u) [[unlikely]] return; }
L_003BAED4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAEDCu); st32((c.r[20].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003BAEDCu) [[unlikely]] return; }
L_003BAEDC:
    c.r[16].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAEE8u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x003BAEE8u) [[unlikely]] return; }
L_003BAEE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 16736u);
    set32(c.r[2], 0u + 793u);
    st32((c.r[20].w[0] + 104u), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[20].w[0] + 108u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAF10u); st32((c.r[20].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003BAF10u) [[unlikely]] return; }
L_003BAF10:
    c.r[3].d[0] = c.r[2].d[0] & 7ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 16752u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[20].w[0] + 100u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BAF50; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[20].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 100u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[20].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 6;
L_003BAF50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 16704u);
    set32(c.r[4], c.r[19].w[0] + 96u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAF68u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003BAF68u) [[unlikely]] return; }
L_003BAF68:
    st32((c.r[19].w[0] + 124u), 0u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[19].w[0] + 120u), 0u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[19].w[0] + 116u), 0u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAF8Cu); st32((c.r[19].w[0] + 112u), 0u);  if (depth < kMaxDepth) unit_00AF(c, 2u, depth + 1u); else { c.pc = 0x003BC020u; return; } if (c.pc != 0x003BAF8Cu) [[unlikely]] return; }
L_003BAF8C:
    c.budget -= 1;
L_003BAF90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAF98u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003BAF98u) [[unlikely]] return; }
L_003BAF98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAFA0u); set32(c.r[4], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x003BAFA0u) [[unlikely]] return; }
L_003BAFA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAFA8u); set32(c.r[4], c.r[20].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x003BAFA8u) [[unlikely]] return; }
L_003BAFA8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003BAFB8; } }
    st8((c.r[20].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_003BAFB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003BAFE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003BB020; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 498u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BB038; } }
L_003BB020:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB02Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 462u, depth + 1u); else { c.pc = 0x003BBF30u; return; } if (c.pc != 0x003BB02Cu) [[unlikely]] return; }
L_003BB02C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BB0E0; } }
    c.budget -= 1;
L_003BB038:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BB088; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[4], c.r[19].w[0] + 32u);  if (t) { goto L_003BB088; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB05Cu);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x003BB05Cu) [[unlikely]] return; }
L_003BB05C:
    c.f[1] = ld32((c.r[19].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40990000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[2] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BB088; } }
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[19].w[0] + 36u), c.f[0]);
    c.budget -= 2;
L_003BB088:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 17856u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB0B4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003BB0B4u) [[unlikely]] return; }
L_003BB0B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB0BCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003BB0BCu) [[unlikely]] return; }
L_003BB0BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB0C4u); set32(c.r[4], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x003BB0C4u) [[unlikely]] return; }
L_003BB0C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB0CCu); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x003BB0CCu) [[unlikely]] return; }
L_003BB0CC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003BB0E0; } }
    st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003BB0E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003BB100:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[4].w[0] + 92u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[4].w[0] + 88u)));
    c.f[2] = c.r[3].w[0];
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 96u);
    set32(c.r[6], c.r[18].w[0] + 112u);
    set32(c.r[2], c.r[8].w[0] + c.r[7].w[0]);
    st32((c.r[4].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 100u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0] + 96u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 80u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    st32((c.r[4].w[0] + 80u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 84u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    st32((c.r[4].w[0] + 84u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[2] = ld32((c.r[4].w[0] + 104u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.budget -= 47;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB1BCu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003BB1BCu) [[unlikely]] return; }
L_003BB1BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D800000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB1D0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x003BB1D0u) [[unlikely]] return; }
L_003BB1D0:
    set32(c.r[4], c.r[18].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB1DCu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x003BB1DCu) [[unlikely]] return; }
L_003BB1DC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB1F0u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 2u, depth + 1u); else { c.pc = 0x003BC020u; return; } if (c.pc != 0x003BB1F0u) [[unlikely]] return; }
L_003BB1F0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BB2E8; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003BB210; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB210u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x003BB210u) [[unlikely]] return; }
L_003BB210:
    set32(c.r[16], ld32((c.r[19].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003BB2E0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BB2E0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BB2E0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BB2E0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[19].w[0] + 32u);  if (t) { goto L_003BB278; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB258u);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x003BB258u) [[unlikely]] return; }
L_003BB258:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40990000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[19].w[0] + 36u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BB2E8; } }
L_003BB278:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F230000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[3].d[0] = c.r[2].d[0] | 55050ull;
    set32(c.r[4], c.r[18].w[0] + 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    set32(c.r[5], c.r[16].w[0] + 64u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[7].d[0] = c.r[7].d[0] & 15ull;
    st8((c.r[19].w[0] + 10u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[19].w[0] + 514u));
    c.r[7].d[0] = c.r[7].d[0] | 64ull;
    st8((c.r[19].w[0] + 514u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[19].w[0] + 104u), c.r[6].w[0]);
    st32((c.r[19].w[0] + 108u), c.r[3].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB2C4u); st32((c.r[19].w[0] + 112u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003BB2C4u) [[unlikely]] return; }
L_003BB2C4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB2D4u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x003BB2D4u) [[unlikely]] return; }
L_003BB2D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BB2E8; } }
    c.budget -= 1;
L_003BB2E0:
    st32((c.r[19].w[0] + 504u), 0u);
    c.budget -= 2;
L_003BB2E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003BB310:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB334u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 457u, depth + 1u); else { c.pc = 0x003BBE10u; return; } if (c.pc != 0x003BB334u) [[unlikely]] return; }
L_003BB334:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003BB418; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB34Cu); set32(c.r[7], 0u + 512u);  if (depth < kMaxDepth) unit_00AE(c, 452u, depth + 1u); else { c.pc = 0x003BBD90u; return; } if (c.pc != 0x003BB34Cu) [[unlikely]] return; }
L_003BB34C:
    c.f[2] = ld32((c.r[17].w[0] + 108u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41180000u);
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 104u), c.f[1]);  if (t) { goto L_003BB378; } }
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 2;
L_003BB378:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB388u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x003BB388u) [[unlikely]] return; }
L_003BB388:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB394u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x003BB394u) [[unlikely]] return; }
L_003BB394:
    c.f[2] = ld32((c.r[17].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 112u), c.f[1]);  if (t) { goto L_003BB418; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[3], 0u + 300u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[7], c.r[7].w[0] + 17632u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 112u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[8], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB418u); st32((c.r[16].w[0] + 128u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 438u, depth + 1u); else { c.pc = 0x003BBC60u; return; } if (c.pc != 0x003BB418u) [[unlikely]] return; }
L_003BB418:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003BB430:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB454u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 457u, depth + 1u); else { c.pc = 0x003BBE10u; return; } if (c.pc != 0x003BB454u) [[unlikely]] return; }
L_003BB454:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BB5C0; } }
    c.f[1] = ld32((c.r[18].w[0] + 112u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BB5A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);  if (t) { goto L_003BB4A0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8658u)));
    set32(c.r[2], c.r[2].w[0] + 17808u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB49Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 159u, depth + 1u); else { c.pc = 0x0023A2B0u; return; } if (c.pc != 0x003BB49Cu) [[unlikely]] return; }
L_003BB49C:
    c.budget -= 1;
L_003BB4A0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_003BB4C8; } }
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003BB4C8:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB4D8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 438u, depth + 1u); else { c.pc = 0x003BBC60u; return; } if (c.pc != 0x003BB4D8u) [[unlikely]] return; }
L_003BB4D8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[4], c.r[18].w[0] + 32u);
    set32(c.r[5], c.r[17].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB4F0u); st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x003BB4F0u) [[unlikely]] return; }
L_003BB4F0:
    c.f[1] = ld32((c.r[18].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BB510; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BB560; } }
    c.budget -= 1;
L_003BB510:
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[3], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003BB540; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 112u), c.r[3].w[0]);  if (t) { goto L_003BB5C0; } }
L_003BB540:
    set32(c.r[3], 0u + 300u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    st32((c.r[18].w[0] + 112u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 128u), c.r[3].w[0]);  if (t) { goto L_003BB5C0; } }
L_003BB560:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB570u); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003BB570u) [[unlikely]] return; }
L_003BB570:
    c.f[12] = ld32((c.r[18].w[0] + 104u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB580u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x003BB580u) [[unlikely]] return; }
L_003BB580:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB58Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x003BB58Cu) [[unlikely]] return; }
L_003BB58C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB5A0u); set32(c.r[7], 0u + 3072u);  if (depth < kMaxDepth) unit_00AE(c, 452u, depth + 1u); else { c.pc = 0x003BBD90u; return; } if (c.pc != 0x003BB5A0u) [[unlikely]] return; }
L_003BB5A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BB5C0; } }
L_003BB5A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 112u), c.f[0]);
    c.budget -= 6;
L_003BB5C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003BB5E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 508u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003BB670; } }
    set32(c.r[19], ld32((c.r[18].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003BB670; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BB670; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BB670; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 64u);  if (t) { goto L_003BB670; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB644u); set32(c.r[5], c.r[19].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003BB644u) [[unlikely]] return; }
L_003BB644:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003BB670; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BB670; } }
    st32((c.r[18].w[0] + 504u), 0u);
    c.budget -= 2;
L_003BB670:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB684u); set32(c.r[7], 0u + 1024u);  if (depth < kMaxDepth) unit_00AE(c, 452u, depth + 1u); else { c.pc = 0x003BBD90u; return; } if (c.pc != 0x003BB684u) [[unlikely]] return; }
L_003BB684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB68Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 337u, depth + 1u); else { c.pc = 0x001EFA80u; return; } if (c.pc != 0x003BB68Cu) [[unlikely]] return; }
L_003BB68C:
    c.f[2] = ld32((c.r[18].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[18].w[0] + 112u), c.f[1]);  if (t) { goto L_003BB720; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB6CCu); st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x003BB6CCu) [[unlikely]] return; }
L_003BB6CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BB718; } }
    set32(c.r[2], 0u + 128u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[18].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB6E8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x003BB6E8u) [[unlikely]] return; }
L_003BB6E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st32((c.r[18].w[0] + 112u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 17816u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8658u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB710u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 159u, depth + 1u); else { c.pc = 0x0023A2B0u; return; } if (c.pc != 0x003BB710u) [[unlikely]] return; }
L_003BB710:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BB720; } }
L_003BB718:
    st32((c.r[18].w[0] + 112u), 0u);
    c.budget -= 2;
L_003BB720:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003BB740:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[7], 0u + 1024u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB76Cu); set32(c.r[6], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_00AE(c, 452u, depth + 1u); else { c.pc = 0x003BBD90u; return; } if (c.pc != 0x003BB76Cu) [[unlikely]] return; }
L_003BB76C:
    c.f[2] = ld32((c.r[17].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 112u), c.f[1]);  if (t) { goto L_003BB800; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] + 17712u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB7C8u); st32((c.r[16].w[0] + 128u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 438u, depth + 1u); else { c.pc = 0x003BBC60u; return; } if (c.pc != 0x003BB7C8u) [[unlikely]] return; }
L_003BB7C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F230000u);
    st32((c.r[17].w[0] + 104u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[17].w[0] + 108u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    st32((c.r[17].w[0] + 112u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 514u));
    c.r[2].d[0] = c.r[2].d[0] & 191ull;
    st8((c.r[17].w[0] + 514u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB7FCu); st8((c.r[17].w[0] + 516u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x003BB7FCu) [[unlikely]] return; }
L_003BB7FC:
    c.budget -= 1;
L_003BB800:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003BB820:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41180000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.f[2] = ld32((c.r[4].w[0] + 108u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 104u), c.f[1]);  if (t) { goto L_003BB860; } }
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 2;
L_003BB860:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[17].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB870u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003BB870u) [[unlikely]] return; }
L_003BB870:
    c.f[12] = ld32((c.r[16].w[0] + 104u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB880u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x003BB880u) [[unlikely]] return; }
L_003BB880:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB88Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x003BB88Cu) [[unlikely]] return; }
L_003BB88C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB8A0u); set32(c.r[7], 0u + 3072u);  if (depth < kMaxDepth) unit_00AE(c, 452u, depth + 1u); else { c.pc = 0x003BBD90u; return; } if (c.pc != 0x003BB8A0u) [[unlikely]] return; }
L_003BB8A0:
    c.f[2] = ld32((c.r[16].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 112u), c.f[1]);  if (t) { goto L_003BB8E8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41180000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 104u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 9;
L_003BB8E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003BB900:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 112u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003BBBC0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 6u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);  if (t) { goto L_003BB960; } }
    set32(c.r[2], c.r[2].w[0] + 17808u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB960u); c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8658u)));  if (depth < kMaxDepth) unit_004E(c, 159u, depth + 1u); else { c.pc = 0x0023A2B0u; return; } if (c.pc != 0x003BB960u) [[unlikely]] return; }
L_003BB960:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[20].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_003BB988; } }
    st8((c.r[20].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003BB988:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[20].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB998u); set32(c.r[6], c.r[18].w[0] + 2096u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003BB998u) [[unlikely]] return; }
L_003BB998:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB9ACu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x003BB9ACu) [[unlikely]] return; }
L_003BB9AC:
    set32(c.r[4], c.r[19].w[0] + 80u);
    set32(c.r[5], c.r[18].w[0] + 2096u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB9BCu); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x003BB9BCu) [[unlikely]] return; }
L_003BB9BC:
    set32(c.r[4], c.r[20].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB9C8u); set32(c.r[5], c.r[19].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x003BB9C8u) [[unlikely]] return; }
L_003BB9C8:
    c.f[1] = ld32((c.r[20].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003BBB78; } }
    c.f[3] = ld32((c.r[19].w[0] + 80u));
    set32(c.r[2], 0u + 1u);
    c.f[2] = ld32((c.r[19].w[0] + 84u));
    set32(c.r[4], c.r[18].w[0] + 2048u);
    c.f[1] = ld32((c.r[19].w[0] + 88u));
    c.f[0] = ld32((c.r[19].w[0] + 92u));
    st32((c.r[20].w[0] + 32u), c.f[3]);
    st32((c.r[20].w[0] + 36u), c.f[2]);
    st32((c.r[20].w[0] + 40u), c.f[1]);
    st32((c.r[20].w[0] + 44u), c.f[0]);
    st8((c.r[20].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[20].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st32((c.r[20].w[0] + 504u), 0u);
    st32((c.r[20].w[0] + 508u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBA1Cu); st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003BBA1Cu) [[unlikely]] return; }
L_003BBA1C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBA2Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003BBA2Cu) [[unlikely]] return; }
L_003BBA2C:
    set32(c.r[4], c.r[20].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBA38u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003BBA38u) [[unlikely]] return; }
L_003BBA38:
    set32(c.r[16], c.r[29].w[0] + 104u);
    c.f[13] = ld32((c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBA48u); c.f[12] = ld32((c.r[29].w[0] + 96u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003BBA48u) [[unlikely]] return; }
L_003BBA48:
    st32((c.r[20].w[0] + 96u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBA60u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00126110u; return; } if (c.pc != 0x003BBA60u) [[unlikely]] return; }
L_003BBA60:
    c.f[12] = ld32((c.r[29].w[0] + 100u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBA6Cu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003BBA6Cu) [[unlikely]] return; }
L_003BBA6C:
    st32((c.r[20].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBA78u); set32(c.r[4], c.r[18].w[0] + 2048u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003BBA78u) [[unlikely]] return; }
L_003BBA78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBA80u); set32(c.r[4], ld32((c.r[20].w[0] + 96u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x003BBA80u) [[unlikely]] return; }
L_003BBA80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBA88u); set32(c.r[4], ld32((c.r[20].w[0] + 92u)));  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x003BBA88u) [[unlikely]] return; }
L_003BBA88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBA98u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003BBA98u) [[unlikely]] return; }
L_003BBA98:
    set32(c.r[4], c.r[20].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBAA4u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003BBAA4u) [[unlikely]] return; }
L_003BBAA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBAACu);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003BBAACu) [[unlikely]] return; }
L_003BBAAC:
    c.r[16].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBAB8u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 202u, depth + 1u); else { c.pc = 0x00127320u; return; } if (c.pc != 0x003BBAB8u) [[unlikely]] return; }
L_003BBAB8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 16736u);
    set32(c.r[2], 0u + 793u);
    st32((c.r[20].w[0] + 104u), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[20].w[0] + 108u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBAE0u); st32((c.r[20].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003BBAE0u) [[unlikely]] return; }
L_003BBAE0:
    c.r[3].d[0] = c.r[2].d[0] & 7ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 16752u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[20].w[0] + 100u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BBB20; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[20].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 100u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[20].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 6;
L_003BBB20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 16704u);
    set32(c.r[4], c.r[19].w[0] + 96u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBB38u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003BBB38u) [[unlikely]] return; }
L_003BBB38:
    st32((c.r[19].w[0] + 124u), 0u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[19].w[0] + 120u), 0u);
    st32((c.r[19].w[0] + 116u), 0u);
    st32((c.r[19].w[0] + 112u), 0u);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 514u));
    c.r[2].d[0] = c.r[2].d[0] & 191ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBB5Cu); st8((c.r[20].w[0] + 514u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x003BBB5Cu) [[unlikely]] return; }
L_003BBB5C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBB70u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 2u, depth + 1u); else { c.pc = 0x003BC020u; return; } if (c.pc != 0x003BBB70u) [[unlikely]] return; }
L_003BBB70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BBBD8; } }
L_003BBB78:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[19].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBB88u); set32(c.r[6], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003BBB88u) [[unlikely]] return; }
L_003BBB88:
    c.f[12] = ld32((c.r[20].w[0] + 104u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBB98u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x003BBB98u) [[unlikely]] return; }
L_003BBB98:
    set32(c.r[4], c.r[20].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBBA4u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x003BBBA4u) [[unlikely]] return; }
L_003BBBA4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[19].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBBB8u); set32(c.r[7], 0u + 3072u);  if (depth < kMaxDepth) unit_00AE(c, 452u, depth + 1u); else { c.pc = 0x003BBD90u; return; } if (c.pc != 0x003BBBB8u) [[unlikely]] return; }
L_003BBBB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003BBBD8; } }
L_003BBBC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 112u), c.f[0]);
    c.budget -= 6;
L_003BBBD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003BBC00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003BBC10:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_003BBC20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBC38u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003BBC38u) [[unlikely]] return; }
L_003BBC38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBC40u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x003BBC40u) [[unlikely]] return; }
L_003BBC40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBC48u); set32(c.r[4], ld32((c.r[16].w[0] + 188u)));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x003BBC48u) [[unlikely]] return; }
L_003BBC48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BBC60:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[18].w[0] + 2048u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBC88u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003BBC88u) [[unlikely]] return; }
L_003BBC88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBC98u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003BBC98u) [[unlikely]] return; }
L_003BBC98:
    set32(c.r[4], c.r[19].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBCA4u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003BBCA4u) [[unlikely]] return; }
L_003BBCA4:
    c.f[13] = ld32((c.r[29].w[0] + 88u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBCB0u); c.f[12] = ld32((c.r[29].w[0] + 80u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x003BBCB0u) [[unlikely]] return; }
L_003BBCB0:
    set32(c.r[17], ld32((c.r[19].w[0] + 128u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBCBCu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x003BBCBCu) [[unlikely]] return; }
L_003BBCBC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] << 12);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBCD0u); set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x003BBCD0u) [[unlikely]] return; }
L_003BBCD0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBCE4u); set32(c.r[4], c.r[2].w[0] << 12);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x003BBCE4u) [[unlikely]] return; }
L_003BBCE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBCECu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x003BBCECu) [[unlikely]] return; }
L_003BBCEC:
    c.f[12] = ld32((c.r[17].w[0] + 4u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBCFCu); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x003BBCFCu) [[unlikely]] return; }
L_003BBCFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBD04u); set32(c.r[4], c.r[18].w[0] + 2048u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003BBD04u) [[unlikely]] return; }
L_003BBD04:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBD10u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x003BBD10u) [[unlikely]] return; }
L_003BBD10:
    set32(c.r[4], c.r[19].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBD20u); set32(c.r[6], c.r[19].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x003BBD20u) [[unlikely]] return; }
L_003BBD20:
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003BBD70; } }
    c.f[1] = ld32((c.r[19].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[19].w[0] + 80u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBD4Cu); st32((c.r[19].w[0] + 84u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x003BBD4Cu) [[unlikely]] return; }
L_003BBD4C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40990000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[19].w[0] + 84u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003BBD70; } }
    st32((c.r[19].w[0] + 84u), c.f[0]);
    c.budget -= 1;
L_003BBD70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003BBD90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBDBCu); set32(c.r[6], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003BBDBCu) [[unlikely]] return; }
L_003BBDBC:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBDC8u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003BBDC8u) [[unlikely]] return; }
L_003BBDC8:
    c.r[6].d[0] = c.r[16].d[0] << 48;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBDDCu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_002E(c, 328u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x003BBDDCu) [[unlikely]] return; }
L_003BBDDC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBDF4u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_002E(c, 179u, depth + 1u); else { c.pc = 0x001BA240u; return; } if (c.pc != 0x003BBDF4u) [[unlikely]] return; }
L_003BBDF4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003BBE10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 504u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BBF08; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003BBE80; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BBE80; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BBE80; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003BBE80; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003BBEF8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003BBEF8; } }
    c.budget -= 1;
L_003BBE80:
    st32((c.r[17].w[0] + 504u), 0u);
    st32((c.r[17].w[0] + 508u), 0u);
    set32(c.r[2], 0u + 5u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] + 17712u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBEBCu); st32((c.r[16].w[0] + 128u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 438u, depth + 1u); else { c.pc = 0x003BBC60u; return; } if (c.pc != 0x003BBEBCu) [[unlikely]] return; }
L_003BBEBC:
    set32(c.r[5], c.r[16].w[0] + 80u);
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBECCu); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003BBECCu) [[unlikely]] return; }
L_003BBECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBED4u); set32(c.r[4], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003BBED4u) [[unlikely]] return; }
L_003BBED4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F230000u);
    st32((c.r[17].w[0] + 104u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[17].w[0] + 108u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    st32((c.r[17].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003BBF10; } }
L_003BBEF8:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBF04u); set32(c.r[5], c.r[5].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003BBF04u) [[unlikely]] return; }
L_003BBF04:
    c.budget -= 1;
L_003BBF08:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003BBF10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BBF30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], 0u + 255u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 90u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 264u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 336u)));
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBF80u); st16((c.r[3].w[0] + 336u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0045(c, 208u, depth + 1u); else { c.pc = 0x00216100u; return; } if (c.pc != 0x003BBF80u) [[unlikely]] return; }
L_003BBF80:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] + 17744u);
    c.budget -= 4;
L_003BBF90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBF9Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 171u, depth + 1u); else { c.pc = 0x0017D5E0u; return; } if (c.pc != 0x003BBF9Cu) [[unlikely]] return; }
L_003BBF9C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBF90u | kUnwind; return; } goto L_003BBF90; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003BBFF0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003BBFF0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00AF(c, 1u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBFE4u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x003BBFE4u) [[unlikely]] return; }
L_003BBFE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00AF(c, 1u, depth); } }
    c.budget -= 1;
L_003BBFF0:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBFFCu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_004E(c, 110u, depth + 1u); else { c.pc = 0x00239510u; return; } if (c.pc != 0x003BBFFCu) [[unlikely]] return; }
L_003BBFFC:
    c.budget -= 1;
    [[clang::musttail]] return unit_00AF(c, 1u, depth);
}

}
