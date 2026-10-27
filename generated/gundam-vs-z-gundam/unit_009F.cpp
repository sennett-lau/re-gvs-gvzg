#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_009F[4096] = {
    1, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0,
    9, 0, 10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0,
    17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 24, 0, 25, 0, 0, 26, 0, 0, 0, 0, 27, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0,
    31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 36, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0,
    0, 0, 41, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0,
    46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 61, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70,
    0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 75, 0, 0, 0, 76, 0, 0, 0, 77, 0,
    0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0,
    97, 0, 98, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 105, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 109, 0, 110, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0,
    0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 116, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 120,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 123, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 134, 0, 0, 0, 0, 0, 135, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 140, 0, 141, 0, 142, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0,
    0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 168, 0, 169, 0, 170, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0,
    0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 178, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0,
    193, 0, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0,
    0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 203, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 208, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 218,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 221, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0,
    0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 251, 0, 252, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257,
    0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 265, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0,
    269, 0, 0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0,
    0, 0, 0, 0, 273, 0, 274, 0, 0, 0, 275, 0, 276, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0,
    280, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 0, 0, 286, 0, 287, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0,
    0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 0,
    0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0,
    0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0,
    312, 0, 313, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0,
    317, 0, 0, 0, 318, 0, 319, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 323, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 324, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 328, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 333, 0,
    0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 336, 0, 337, 0,
    338, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 342, 0, 343, 0, 0, 0, 344, 0, 0, 0,
    345, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 355, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 357, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 359, 0, 360, 0, 361, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 365, 0, 0, 0, 0, 366, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 369, 0, 370, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 374, 0, 0, 0, 375, 0, 0, 0, 376, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0,
    378, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 381, 0, 382, 383, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 385, 0, 386, 0, 387, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 389, 0, 390, 0, 391, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 395, 0, 0, 0, 396, 0,
    0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0,
    403, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0,
    408, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 411, 0, 412, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 415, 0, 416, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 419, 0, 420, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 426, 0, 427, 0, 0, 0, 0, 428, 0, 429, 0, 430, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 433, 0, 434, 0,
    0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 437, 0, 438, 0, 439, 0,
    440, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 443, 0, 444, 0, 0, 0, 445, 0, 0, 0, 446, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0,
    449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 452, 0, 453, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 455, 0, 456, 0, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 461, 0, 0, 0, 0, 0,
    462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 464, 0, 465, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 466, 0, 467, 0, 468, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 472, 0, 473, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 476, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0,
    479, 0, 480, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 483, 0, 484, 0, 0, 0, 0, 485, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 489, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0,
    492, 0, 493, 494, 0, 0, 495, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497,
    0, 0, 0, 498, 0, 0, 0, 0, 499, 0, 500, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 502, 0, 503, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 506, 0, 507, 0, 0, 0, 508, 0, 0, 0,
    509, 0, 0, 510, 0, 511, 512, 513, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0,
};

void unit_009F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0037C000;
    case 2u: goto L_0037C004;
    case 3u: goto L_0037C010;
    case 4u: goto L_0037C040;
    case 5u: goto L_0037C048;
    case 6u: goto L_0037C050;
    case 7u: goto L_0037C058;
    case 8u: goto L_0037C078;
    case 9u: goto L_0037C080;
    case 10u: goto L_0037C088;
    case 11u: goto L_0037C098;
    case 12u: goto L_0037C0A8;
    case 13u: goto L_0037C0B0;
    case 14u: goto L_0037C0B8;
    case 15u: goto L_0037C0F0;
    case 16u: goto L_0037C0F8;
    case 17u: goto L_0037C100;
    case 18u: goto L_0037C130;
    case 19u: goto L_0037C138;
    case 20u: goto L_0037C18C;
    case 21u: goto L_0037C1A0;
    case 22u: goto L_0037C1C0;
    case 23u: goto L_0037C3A8;
    case 24u: goto L_0037C408;
    case 25u: goto L_0037C410;
    case 26u: goto L_0037C41C;
    case 27u: goto L_0037C430;
    case 28u: goto L_0037C438;
    case 29u: goto L_0037C440;
    case 30u: goto L_0037C464;
    case 31u: goto L_0037C480;
    case 32u: goto L_0037C4B0;
    case 33u: goto L_0037C4C8;
    case 34u: goto L_0037C4E0;
    case 35u: goto L_0037C4F0;
    case 36u: goto L_0037C4F8;
    case 37u: goto L_0037C500;
    case 38u: goto L_0037C544;
    case 39u: goto L_0037C564;
    case 40u: goto L_0037C578;
    case 41u: goto L_0037C588;
    case 42u: goto L_0037C590;
    case 43u: goto L_0037C598;
    case 44u: goto L_0037C5C0;
    case 45u: goto L_0037C5F8;
    case 46u: goto L_0037C600;
    case 47u: goto L_0037C698;
    case 48u: goto L_0037C6A0;
    case 49u: goto L_0037C6E8;
    case 50u: goto L_0037C6F0;
    case 51u: goto L_0037C728;
    case 52u: goto L_0037C760;
    case 53u: goto L_0037C768;
    case 54u: goto L_0037C7A0;
    case 55u: goto L_0037C7D8;
    case 56u: goto L_0037C810;
    case 57u: goto L_0037C820;
    case 58u: goto L_0037C82C;
    case 59u: goto L_0037C85C;
    case 60u: goto L_0037C864;
    case 61u: goto L_0037C86C;
    case 62u: goto L_0037C894;
    case 63u: goto L_0037C8A8;
    case 64u: goto L_0037C8B0;
    case 65u: goto L_0037C8F0;
    case 66u: goto L_0037C940;
    case 67u: goto L_0037C948;
    case 68u: goto L_0037C950;
    case 69u: goto L_0037C964;
    case 70u: goto L_0037C97C;
    case 71u: goto L_0037C988;
    case 72u: goto L_0037C99C;
    case 73u: goto L_0037C9C8;
    case 74u: goto L_0037C9D0;
    case 75u: goto L_0037C9D8;
    case 76u: goto L_0037C9E8;
    case 77u: goto L_0037C9F8;
    case 78u: goto L_0037CA08;
    case 79u: goto L_0037CA40;
    case 80u: goto L_0037CA48;
    case 81u: goto L_0037CAE4;
    case 82u: goto L_0037CAEC;
    case 83u: goto L_0037CB2C;
    case 84u: goto L_0037CB40;
    case 85u: goto L_0037CB7C;
    case 86u: goto L_0037CBD8;
    case 87u: goto L_0037CC14;
    case 88u: goto L_0037CC68;
    case 89u: goto L_0037CC78;
    case 90u: goto L_0037CCC0;
    case 91u: goto L_0037CCC8;
    case 92u: goto L_0037CD00;
    case 93u: goto L_0037CD3C;
    case 94u: goto L_0037CD44;
    case 95u: goto L_0037CD4C;
    case 96u: goto L_0037CD78;
    case 97u: goto L_0037CD80;
    case 98u: goto L_0037CD88;
    case 99u: goto L_0037CD98;
    case 100u: goto L_0037CDA8;
    case 101u: goto L_0037CDC0;
    case 102u: goto L_0037CE08;
    case 103u: goto L_0037CE10;
    case 104u: goto L_0037CE48;
    case 105u: goto L_0037CE84;
    case 106u: goto L_0037CE8C;
    case 107u: goto L_0037CE94;
    case 108u: goto L_0037CEC0;
    case 109u: goto L_0037CEC8;
    case 110u: goto L_0037CED0;
    case 111u: goto L_0037CEE0;
    case 112u: goto L_0037CEF0;
    case 113u: goto L_0037CF08;
    case 114u: goto L_0037CF60;
    case 115u: goto L_0037CF70;
    case 116u: goto L_0037CF78;
    case 117u: goto L_0037CFB0;
    case 118u: goto L_0037CFEC;
    case 119u: goto L_0037CFF4;
    case 120u: goto L_0037CFFC;
    case 121u: goto L_0037D028;
    case 122u: goto L_0037D030;
    case 123u: goto L_0037D038;
    case 124u: goto L_0037D048;
    case 125u: goto L_0037D058;
    case 126u: goto L_0037D080;
    case 127u: goto L_0037D090;
    case 128u: goto L_0037D0D8;
    case 129u: goto L_0037D0E0;
    case 130u: goto L_0037D118;
    case 131u: goto L_0037D124;
    case 132u: goto L_0037D150;
    case 133u: goto L_0037D158;
    case 134u: goto L_0037D160;
    case 135u: goto L_0037D178;
    case 136u: goto L_0037D1C0;
    case 137u: goto L_0037D1C8;
    case 138u: goto L_0037D1D0;
    case 139u: goto L_0037D1DC;
    case 140u: goto L_0037D208;
    case 141u: goto L_0037D210;
    case 142u: goto L_0037D218;
    case 143u: goto L_0037D228;
    case 144u: goto L_0037D238;
    case 145u: goto L_0037D248;
    case 146u: goto L_0037D270;
    case 147u: goto L_0037D278;
    case 148u: goto L_0037D2BC;
    case 149u: goto L_0037D2F0;
    case 150u: goto L_0037D2F8;
    case 151u: goto L_0037D304;
    case 152u: goto L_0037D384;
    case 153u: goto L_0037D39C;
    case 154u: goto L_0037D3A8;
    case 155u: goto L_0037D3BC;
    case 156u: goto L_0037D3EC;
    case 157u: goto L_0037D424;
    case 158u: goto L_0037D43C;
    case 159u: goto L_0037D448;
    case 160u: goto L_0037D45C;
    case 161u: goto L_0037D4C4;
    case 162u: goto L_0037D4D8;
    case 163u: goto L_0037D4E0;
    case 164u: goto L_0037D518;
    case 165u: goto L_0037D554;
    case 166u: goto L_0037D55C;
    case 167u: goto L_0037D564;
    case 168u: goto L_0037D590;
    case 169u: goto L_0037D598;
    case 170u: goto L_0037D5A0;
    case 171u: goto L_0037D5B0;
    case 172u: goto L_0037D5C0;
    case 173u: goto L_0037D5D8;
    case 174u: goto L_0037D674;
    case 175u: goto L_0037D688;
    case 176u: goto L_0037D690;
    case 177u: goto L_0037D6C8;
    case 178u: goto L_0037D710;
    case 179u: goto L_0037D718;
    case 180u: goto L_0037D720;
    case 181u: goto L_0037D748;
    case 182u: goto L_0037D750;
    case 183u: goto L_0037D758;
    case 184u: goto L_0037D768;
    case 185u: goto L_0037D778;
    case 186u: goto L_0037D7C0;
    case 187u: goto L_0037D7C8;
    case 188u: goto L_0037D800;
    case 189u: goto L_0037D83C;
    case 190u: goto L_0037D844;
    case 191u: goto L_0037D84C;
    case 192u: goto L_0037D878;
    case 193u: goto L_0037D880;
    case 194u: goto L_0037D888;
    case 195u: goto L_0037D898;
    case 196u: goto L_0037D8A8;
    case 197u: goto L_0037D8C0;
    case 198u: goto L_0037D954;
    case 199u: goto L_0037D978;
    case 200u: goto L_0037D988;
    case 201u: goto L_0037D990;
    case 202u: goto L_0037D9C8;
    case 203u: goto L_0037DA04;
    case 204u: goto L_0037DA0C;
    case 205u: goto L_0037DA14;
    case 206u: goto L_0037DA40;
    case 207u: goto L_0037DA48;
    case 208u: goto L_0037DA50;
    case 209u: goto L_0037DA60;
    case 210u: goto L_0037DA70;
    case 211u: goto L_0037DA98;
    case 212u: goto L_0037DAA8;
    case 213u: goto L_0037DAF0;
    case 214u: goto L_0037DAF8;
    case 215u: goto L_0037DB30;
    case 216u: goto L_0037DB6C;
    case 217u: goto L_0037DB74;
    case 218u: goto L_0037DB7C;
    case 219u: goto L_0037DBA8;
    case 220u: goto L_0037DBB0;
    case 221u: goto L_0037DBB8;
    case 222u: goto L_0037DBC8;
    case 223u: goto L_0037DBD8;
    case 224u: goto L_0037DBF0;
    case 225u: goto L_0037DC40;
    case 226u: goto L_0037DCA0;
    case 227u: goto L_0037DCB8;
    case 228u: goto L_0037DCC8;
    case 229u: goto L_0037DD00;
    case 230u: goto L_0037DDD0;
    case 231u: goto L_0037DDF0;
    case 232u: goto L_0037DDF8;
    case 233u: goto L_0037DE08;
    case 234u: goto L_0037DE40;
    case 235u: goto L_0037DE60;
    case 236u: goto L_0037DE70;
    case 237u: goto L_0037DE98;
    case 238u: goto L_0037DEA0;
    case 239u: goto L_0037DF1C;
    case 240u: goto L_0037DF34;
    case 241u: goto L_0037DF40;
    case 242u: goto L_0037DF54;
    case 243u: goto L_0037DF88;
    case 244u: goto L_0037E004;
    case 245u: goto L_0037E018;
    case 246u: goto L_0037E040;
    case 247u: goto L_0037E048;
    case 248u: goto L_0037E0D0;
    case 249u: goto L_0037E108;
    case 250u: goto L_0037E144;
    case 251u: goto L_0037E188;
    case 252u: goto L_0037E190;
    case 253u: goto L_0037E198;
    case 254u: goto L_0037E1B0;
    case 255u: goto L_0037E1BC;
    case 256u: goto L_0037E1E0;
    case 257u: goto L_0037E1FC;
    case 258u: goto L_0037E204;
    case 259u: goto L_0037E258;
    case 260u: goto L_0037E290;
    case 261u: goto L_0037E298;
    case 262u: goto L_0037E2D4;
    case 263u: goto L_0037E318;
    case 264u: goto L_0037E328;
    case 265u: goto L_0037E330;
    case 266u: goto L_0037E338;
    case 267u: goto L_0037E350;
    case 268u: goto L_0037E35C;
    case 269u: goto L_0037E380;
    case 270u: goto L_0037E398;
    case 271u: goto L_0037E3A0;
    case 272u: goto L_0037E3F8;
    case 273u: goto L_0037E410;
    case 274u: goto L_0037E418;
    case 275u: goto L_0037E428;
    case 276u: goto L_0037E430;
    case 277u: goto L_0037E438;
    case 278u: goto L_0037E450;
    case 279u: goto L_0037E45C;
    case 280u: goto L_0037E480;
    case 281u: goto L_0037E498;
    case 282u: goto L_0037E4A0;
    case 283u: goto L_0037E4F0;
    case 284u: goto L_0037E520;
    case 285u: goto L_0037E528;
    case 286u: goto L_0037E538;
    case 287u: goto L_0037E540;
    case 288u: goto L_0037E548;
    case 289u: goto L_0037E56C;
    case 290u: goto L_0037E588;
    case 291u: goto L_0037E5B4;
    case 292u: goto L_0037E5D0;
    case 293u: goto L_0037E5D8;
    case 294u: goto L_0037E5E0;
    case 295u: goto L_0037E604;
    case 296u: goto L_0037E620;
    case 297u: goto L_0037E64C;
    case 298u: goto L_0037E680;
    case 299u: goto L_0037E830;
    case 300u: goto L_0037E83C;
    case 301u: goto L_0037E854;
    case 302u: goto L_0037E868;
    case 303u: goto L_0037E8A8;
    case 304u: goto L_0037E8B8;
    case 305u: goto L_0037E8C0;
    case 306u: goto L_0037E8D8;
    case 307u: goto L_0037E8F8;
    case 308u: goto L_0037E910;
    case 309u: goto L_0037E944;
    case 310u: goto L_0037E960;
    case 311u: goto L_0037E970;
    case 312u: goto L_0037E980;
    case 313u: goto L_0037E988;
    case 314u: goto L_0037E990;
    case 315u: goto L_0037E9BC;
    case 316u: goto L_0037E9EC;
    case 317u: goto L_0037EA00;
    case 318u: goto L_0037EA10;
    case 319u: goto L_0037EA18;
    case 320u: goto L_0037EA20;
    case 321u: goto L_0037EA58;
    case 322u: goto L_0037EA70;
    case 323u: goto L_0037EA78;
    case 324u: goto L_0037EB10;
    case 325u: goto L_0037EB18;
    case 326u: goto L_0037EB40;
    case 327u: goto L_0037EBA0;
    case 328u: goto L_0037EBA8;
    case 329u: goto L_0037EBB0;
    case 330u: goto L_0037EBBC;
    case 331u: goto L_0037EBE8;
    case 332u: goto L_0037EBF0;
    case 333u: goto L_0037EBF8;
    case 334u: goto L_0037EC18;
    case 335u: goto L_0037EC68;
    case 336u: goto L_0037EC70;
    case 337u: goto L_0037EC78;
    case 338u: goto L_0037EC80;
    case 339u: goto L_0037EC88;
    case 340u: goto L_0037EC9C;
    case 341u: goto L_0037ECD0;
    case 342u: goto L_0037ECD8;
    case 343u: goto L_0037ECE0;
    case 344u: goto L_0037ECF0;
    case 345u: goto L_0037ED00;
    case 346u: goto L_0037ED20;
    case 347u: goto L_0037ED38;
    case 348u: goto L_0037ED40;
    case 349u: goto L_0037EDC8;
    case 350u: goto L_0037EDF8;
    case 351u: goto L_0037EE48;
    case 352u: goto L_0037EEC4;
    case 353u: goto L_0037EED8;
    case 354u: goto L_0037EEE0;
    case 355u: goto L_0037EEF8;
    case 356u: goto L_0037EF48;
    case 357u: goto L_0037EF50;
    case 358u: goto L_0037EF58;
    case 359u: goto L_0037EF88;
    case 360u: goto L_0037EF90;
    case 361u: goto L_0037EF98;
    case 362u: goto L_0037EFA8;
    case 363u: goto L_0037EFB8;
    case 364u: goto L_0037F024;
    case 365u: goto L_0037F084;
    case 366u: goto L_0037F098;
    case 367u: goto L_0037F0A0;
    case 368u: goto L_0037F0B8;
    case 369u: goto L_0037F108;
    case 370u: goto L_0037F110;
    case 371u: goto L_0037F118;
    case 372u: goto L_0037F148;
    case 373u: goto L_0037F150;
    case 374u: goto L_0037F158;
    case 375u: goto L_0037F168;
    case 376u: goto L_0037F178;
    case 377u: goto L_0037F1EC;
    case 378u: goto L_0037F200;
    case 379u: goto L_0037F20C;
    case 380u: goto L_0037F240;
    case 381u: goto L_0037F248;
    case 382u: goto L_0037F250;
    case 383u: goto L_0037F254;
    case 384u: goto L_0037F25C;
    case 385u: goto L_0037F288;
    case 386u: goto L_0037F290;
    case 387u: goto L_0037F298;
    case 388u: goto L_0037F2B8;
    case 389u: goto L_0037F308;
    case 390u: goto L_0037F310;
    case 391u: goto L_0037F318;
    case 392u: goto L_0037F324;
    case 393u: goto L_0037F358;
    case 394u: goto L_0037F360;
    case 395u: goto L_0037F368;
    case 396u: goto L_0037F378;
    case 397u: goto L_0037F388;
    case 398u: goto L_0037F3A8;
    case 399u: goto L_0037F3C0;
    case 400u: goto L_0037F3C8;
    case 401u: goto L_0037F41C;
    case 402u: goto L_0037F460;
    case 403u: goto L_0037F480;
    case 404u: goto L_0037F488;
    case 405u: goto L_0037F4A0;
    case 406u: goto L_0037F4F0;
    case 407u: goto L_0037F4F8;
    case 408u: goto L_0037F500;
    case 409u: goto L_0037F50C;
    case 410u: goto L_0037F540;
    case 411u: goto L_0037F548;
    case 412u: goto L_0037F550;
    case 413u: goto L_0037F560;
    case 414u: goto L_0037F570;
    case 415u: goto L_0037F598;
    case 416u: goto L_0037F5A0;
    case 417u: goto L_0037F5AC;
    case 418u: goto L_0037F5D8;
    case 419u: goto L_0037F5E0;
    case 420u: goto L_0037F5E8;
    case 421u: goto L_0037F634;
    case 422u: goto L_0037F648;
    case 423u: goto L_0037F66C;
    case 424u: goto L_0037F694;
    case 425u: goto L_0037F6A8;
    case 426u: goto L_0037F704;
    case 427u: goto L_0037F70C;
    case 428u: goto L_0037F720;
    case 429u: goto L_0037F728;
    case 430u: goto L_0037F730;
    case 431u: goto L_0037F73C;
    case 432u: goto L_0037F768;
    case 433u: goto L_0037F770;
    case 434u: goto L_0037F778;
    case 435u: goto L_0037F798;
    case 436u: goto L_0037F7E0;
    case 437u: goto L_0037F7E8;
    case 438u: goto L_0037F7F0;
    case 439u: goto L_0037F7F8;
    case 440u: goto L_0037F800;
    case 441u: goto L_0037F814;
    case 442u: goto L_0037F848;
    case 443u: goto L_0037F850;
    case 444u: goto L_0037F858;
    case 445u: goto L_0037F868;
    case 446u: goto L_0037F878;
    case 447u: goto L_0037F8E4;
    case 448u: goto L_0037F8F8;
    case 449u: goto L_0037F900;
    case 450u: goto L_0037F918;
    case 451u: goto L_0037F968;
    case 452u: goto L_0037F970;
    case 453u: goto L_0037F978;
    case 454u: goto L_0037F9A8;
    case 455u: goto L_0037F9B0;
    case 456u: goto L_0037F9B8;
    case 457u: goto L_0037F9C8;
    case 458u: goto L_0037F9D8;
    case 459u: goto L_0037FA4C;
    case 460u: goto L_0037FA60;
    case 461u: goto L_0037FA68;
    case 462u: goto L_0037FA80;
    case 463u: goto L_0037FAD0;
    case 464u: goto L_0037FAD8;
    case 465u: goto L_0037FAE0;
    case 466u: goto L_0037FB10;
    case 467u: goto L_0037FB18;
    case 468u: goto L_0037FB20;
    case 469u: goto L_0037FB30;
    case 470u: goto L_0037FB40;
    case 471u: goto L_0037FBB4;
    case 472u: goto L_0037FBC8;
    case 473u: goto L_0037FBD0;
    case 474u: goto L_0037FBE8;
    case 475u: goto L_0037FC38;
    case 476u: goto L_0037FC40;
    case 477u: goto L_0037FC48;
    case 478u: goto L_0037FC78;
    case 479u: goto L_0037FC80;
    case 480u: goto L_0037FC88;
    case 481u: goto L_0037FC98;
    case 482u: goto L_0037FCA8;
    case 483u: goto L_0037FD1C;
    case 484u: goto L_0037FD24;
    case 485u: goto L_0037FD38;
    case 486u: goto L_0037FD40;
    case 487u: goto L_0037FD78;
    case 488u: goto L_0037FDB4;
    case 489u: goto L_0037FDBC;
    case 490u: goto L_0037FDC4;
    case 491u: goto L_0037FDF8;
    case 492u: goto L_0037FE00;
    case 493u: goto L_0037FE08;
    case 494u: goto L_0037FE0C;
    case 495u: goto L_0037FE18;
    case 496u: goto L_0037FE28;
    case 497u: goto L_0037FE7C;
    case 498u: goto L_0037FE8C;
    case 499u: goto L_0037FEA0;
    case 500u: goto L_0037FEA8;
    case 501u: goto L_0037FEC0;
    case 502u: goto L_0037FF10;
    case 503u: goto L_0037FF18;
    case 504u: goto L_0037FF20;
    case 505u: goto L_0037FF50;
    case 506u: goto L_0037FF58;
    case 507u: goto L_0037FF60;
    case 508u: goto L_0037FF70;
    case 509u: goto L_0037FF80;
    case 510u: goto L_0037FF8C;
    case 511u: goto L_0037FF94;
    case 512u: goto L_0037FF98;
    case 513u: goto L_0037FF9C;
    case 514u: goto L_0037FFC0;
    case 515u: goto L_0037FFF0;
    default: bad_entry(c, 0x0037C000u); return;
    }
L_0037C000:
    c.budget -= 1;
L_0037C004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037C1A0; } }
    c.budget -= 1;
L_0037C010:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C040u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037C040u) [[unlikely]] return; }
L_0037C040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C048u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037C048u) [[unlikely]] return; }
L_0037C048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C050u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037C050u) [[unlikely]] return; }
L_0037C050:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037C1A0; } }
L_0037C058:
    set32(c.r[2], 0u + 35u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C078u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037C078u) [[unlikely]] return; }
L_0037C078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C080u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037C080u) [[unlikely]] return; }
L_0037C080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C088u);  if (depth < kMaxDepth) unit_0098(c, 529u, depth + 1u); else { c.pc = 0x00363720u; return; } if (c.pc != 0x0037C088u) [[unlikely]] return; }
L_0037C088:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (t) { goto L_0037C0A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C098u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037C098u) [[unlikely]] return; }
L_0037C098:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037C1A0; } }
L_0037C0A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C0A8u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0037C0A8u) [[unlikely]] return; }
L_0037C0A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037C1A0; } }
L_0037C0B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C0B8u); set32(c.r[4], 0u + 150u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037C0B8u) [[unlikely]] return; }
L_0037C0B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037C1A0; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0037C1A0; } }
L_0037C0F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_0037C1A0; } }
L_0037C0F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C100u); set32(c.r[4], 0u + 150u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037C100u) [[unlikely]] return; }
L_0037C100:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037C1A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0037C1A0; } }
    c.budget -= 1;
L_0037C130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C138u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037C138u) [[unlikely]] return; }
L_0037C138:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037C170; } }
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0037C1A0; } }
    c.budget -= 1;
L_0037C170:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.r[1].d[0] = c.r[2].sd[0] < 270ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0037C1A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C18Cu);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x0037C18Cu) [[unlikely]] return; }
L_0037C18C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037C1A0; } }
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_0037C1A0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037C1C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], 0u + 82u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0037DBE8; } }
    set32(c.r[3], 0u + 81u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 80u);  if (t) { goto L_0037DBE0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037DAE8; } }
    set32(c.r[3], 0u + 73u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 72u);  if (t) { goto L_0037DA80; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037DA78; } }
    set32(c.r[3], 0u + 71u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 70u);  if (t) { goto L_0037D960; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037D900; } }
    set32(c.r[3], 0u + 62u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 61u);  if (t) { goto L_0037D8B8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037D8B0; } }
    set32(c.r[3], 0u + 60u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 53u);  if (t) { goto L_0037D7B8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037D7B0; } }
    set32(c.r[3], 0u + 52u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 51u);  if (t) { goto L_0037D780; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037D680; } }
    set32(c.r[3], 0u + 50u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 49u);  if (t) { goto L_0037D620; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037D5D0; } }
    set32(c.r[3], 0u + 47u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 46u);  if (t) { goto L_0037D5C8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037D4D0; } }
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 42u);  if (t) { goto L_0037D468; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037D2E8; } }
    set32(c.r[3], 0u + 41u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 40u);  if (t) { goto L_0037D240; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037D0D0; } }
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 31u);  if (t) { goto L_0037D068; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037D060; } }
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 22u);  if (t) { goto L_0037CF48; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037CF00; } }
    set32(c.r[3], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[7], 0u + 20u);  if (t) { goto L_0037CEF8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[7].d[0]; set32(c.r[3], 0u + 12u);  if (t) { goto L_0037CE00; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037CDB8; } }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[6], 0u + 10u);  if (t) { goto L_0037CDB0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; set32(c.r[5], 0u + 9u);  if (t) { goto L_0037CCB8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[4], 0u + 8u);  if (t) { goto L_0037CC50; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 7u);  if (t) { goto L_0037CC48; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037CBD0; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_0037CB38; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037CA00; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_0037C818; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037C5B8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037C428; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037C3D0; } }
    set32(c.r[3], 0u + 127u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037C3A0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037C378; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037C378:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037C3A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C3A8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009F(c, 225u, depth + 1u); else { c.pc = 0x0037DC40u; return; } if (c.pc != 0x0037C3A8u) [[unlikely]] return; }
L_0037C3A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037DC28; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037DC28; } }
L_0037C3D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037DC28; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[1].w[0] + 5009u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C408u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 558u, depth + 1u); else { c.pc = 0x00363A20u; return; } if (c.pc != 0x0037C408u) [[unlikely]] return; }
L_0037C408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C410u);  if (depth < kMaxDepth) unit_0099(c, 37u, depth + 1u); else { c.pc = 0x003646C0u; return; } if (c.pc != 0x0037C410u) [[unlikely]] return; }
L_0037C410:
    set32(c.r[4], 0u + 11u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C41Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x0037C41Cu) [[unlikely]] return; }
L_0037C41C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037C428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C430u); set32(c.r[4], 0u + 107u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037C430u) [[unlikely]] return; }
L_0037C430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C438u); set32(c.r[4], 0u + 11u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0037C438u) [[unlikely]] return; }
L_0037C438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C440u);  if (depth < kMaxDepth) unit_0098(c, 521u, depth + 1u); else { c.pc = 0x00363640u; return; } if (c.pc != 0x0037C440u) [[unlikely]] return; }
L_0037C440:
    c.r[3].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037C490; } }
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037C478; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C464u);  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x0037C464u) [[unlikely]] return; }
L_0037C464:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037C4D8; } }
    c.budget -= 1;
L_0037C478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C480u);  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x0037C480u) [[unlikely]] return; }
L_0037C480:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0037C4D8; } }
    c.budget -= 1;
L_0037C490:
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037C4D8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037C4C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C4B0u);  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x0037C4B0u) [[unlikely]] return; }
L_0037C4B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0037C4D8; } }
    c.budget -= 1;
L_0037C4C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C4C8u);  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x0037C4C8u) [[unlikely]] return; }
L_0037C4C8:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0037C4D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C4E0u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x0037C4E0u) [[unlikely]] return; }
L_0037C4E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (t) { goto L_0037C570; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C4F0u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037C4F0u) [[unlikely]] return; }
L_0037C4F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C4F8u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037C4F8u) [[unlikely]] return; }
L_0037C4F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C500u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037C500u) [[unlikely]] return; }
L_0037C500:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 20u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = c.r[2].d[0] | 28672ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4973u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C544u); st8((c.r[1].w[0] + 5081u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 83u, depth + 1u); else { c.pc = 0x0033D350u; return; } if (c.pc != 0x0037C544u) [[unlikely]] return; }
L_0037C544:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[6].d[0] = 0ull + 0ull;
    st16((c.r[1].w[0] + 5082u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C564u); c.r[5].d[0] = c.r[2].d[0] | 12288ull;  if (depth < kMaxDepth) unit_008F(c, 18u, depth + 1u); else { c.pc = 0x0033C490u; return; } if (c.pc != 0x0037C564u) [[unlikely]] return; }
L_0037C564:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037C570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C578u);  if (depth < kMaxDepth) unit_0098(c, 531u, depth + 1u); else { c.pc = 0x00363760u; return; } if (c.pc != 0x0037C578u) [[unlikely]] return; }
L_0037C578:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (t) { goto L_0037DC28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C588u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037C588u) [[unlikely]] return; }
L_0037C588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C590u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037C590u) [[unlikely]] return; }
L_0037C590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C598u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0037C598u) [[unlikely]] return; }
L_0037C598:
    set32(c.r[3], 0u + 50u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037C5B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C5C0u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037C5C0u) [[unlikely]] return; }
L_0037C5C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037C5F0; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037C5F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C5F8u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x0037C5F8u) [[unlikely]] return; }
L_0037C5F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C600u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x0037C600u) [[unlikely]] return; }
L_0037C600:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], 0u - 251u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037C7E0; } }
    set32(c.r[3], 0u - 256u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 252u);  if (t) { goto L_0037C7A8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037C770; } }
    set32(c.r[3], 0u - 254u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 255u);  if (t) { goto L_0037C730; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037C6F8; } }
    set32(c.r[3], 0u - 253u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037C6A8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037C658; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037C658:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 20u);
    st8((c.r[1].w[0] + 5009u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[5], 0u + 2u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C698u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x0037C698u) [[unlikely]] return; }
L_0037C698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C6A0u);  if (depth < kMaxDepth) unit_008E(c, 349u, depth + 1u); else { c.pc = 0x0033BA80u; return; } if (c.pc != 0x0037C6A0u) [[unlikely]] return; }
L_0037C6A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
L_0037C6A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5009u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[5], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C6E8u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x0037C6E8u) [[unlikely]] return; }
L_0037C6E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C6F0u);  if (depth < kMaxDepth) unit_008E(c, 349u, depth + 1u); else { c.pc = 0x0033BA80u; return; } if (c.pc != 0x0037C6F0u) [[unlikely]] return; }
L_0037C6F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
L_0037C6F8:
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 2u);
    set32(c.r[2], 0u + 30u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C728u); st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x0037C728u) [[unlikely]] return; }
L_0037C728:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
L_0037C730:
    set32(c.r[2], 0u + 40u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 2u);
    set32(c.r[2], 0u + 30u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C760u); st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x0037C760u) [[unlikely]] return; }
L_0037C760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C768u);  if (depth < kMaxDepth) unit_008E(c, 349u, depth + 1u); else { c.pc = 0x0033BA80u; return; } if (c.pc != 0x0037C768u) [[unlikely]] return; }
L_0037C768:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
L_0037C770:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 2u);
    set32(c.r[2], 0u + 30u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C7A0u); st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x0037C7A0u) [[unlikely]] return; }
L_0037C7A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
L_0037C7A8:
    set32(c.r[2], 0u + 60u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 2u);
    set32(c.r[2], 0u + 30u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C7D8u); st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x0037C7D8u) [[unlikely]] return; }
L_0037C7D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
L_0037C7E0:
    set32(c.r[2], 0u + 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 2u);
    set32(c.r[2], 0u + 30u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C810u); st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x0037C810u) [[unlikely]] return; }
L_0037C810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
L_0037C818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C820u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x0037C820u) [[unlikely]] return; }
L_0037C820:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C82Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));  if (depth < kMaxDepth) unit_008F(c, 79u, depth + 1u); else { c.pc = 0x0033D2F0u; return; } if (c.pc != 0x0037C82Cu) [[unlikely]] return; }
L_0037C82C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0037C878; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 70u);
    st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 30u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C85Cu); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037C85Cu) [[unlikely]] return; }
L_0037C85C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C864u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037C864u) [[unlikely]] return; }
L_0037C864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C86Cu); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0037C86Cu) [[unlikely]] return; }
L_0037C86C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037C878:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5009u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 111u);  if (t) { goto L_0037C8A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C894u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037C894u) [[unlikely]] return; }
L_0037C894:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037C8A8; } }
    c.budget -= 1;
L_0037C8A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C8A8u); set32(c.r[4], 0u + 108u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037C8A8u) [[unlikely]] return; }
L_0037C8A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C8B0u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0037C8B0u) [[unlikely]] return; }
L_0037C8B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037C8E0; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037C8E0:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_0037DC28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C8F0u);  if (depth < kMaxDepth) unit_0098(c, 534u, depth + 1u); else { c.pc = 0x003637C0u; return; } if (c.pc != 0x0037C8F0u) [[unlikely]] return; }
L_0037C8F0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037C9A8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037C910; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037C910:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C940u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037C940u) [[unlikely]] return; }
L_0037C940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C948u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037C948u) [[unlikely]] return; }
L_0037C948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C950u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037C950u) [[unlikely]] return; }
L_0037C950:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] | 12288ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C964u); set32(c.r[6], 0u + 7148u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0037C964u) [[unlikely]] return; }
L_0037C964:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F70000u);
    c.r[4].d[0] = c.r[3].d[0] | 12288ull;
    c.r[5].d[0] = c.r[2].d[0] | 57344ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C97Cu); set32(c.r[6], 0u + 7148u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0037C97Cu) [[unlikely]] return; }
L_0037C97C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C988u); c.r[4].d[0] = c.r[2].d[0] | 12288ull;  if (depth < kMaxDepth) unit_0090(c, 416u, depth + 1u); else { c.pc = 0x00343870u; return; } if (c.pc != 0x0037C988u) [[unlikely]] return; }
L_0037C988:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 4973u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C99Cu); c.r[5].d[0] = c.r[2].d[0] | 12288ull;  if (depth < kMaxDepth) unit_008F(c, 28u, depth + 1u); else { c.pc = 0x0033C7E0u; return; } if (c.pc != 0x0037C99Cu) [[unlikely]] return; }
L_0037C99C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037C9A8:
    set32(c.r[2], 0u + 9u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C9C8u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037C9C8u) [[unlikely]] return; }
L_0037C9C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C9D0u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037C9D0u) [[unlikely]] return; }
L_0037C9D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C9D8u);  if (depth < kMaxDepth) unit_0098(c, 529u, depth + 1u); else { c.pc = 0x00363720u; return; } if (c.pc != 0x0037C9D8u) [[unlikely]] return; }
L_0037C9D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (t) { goto L_0037C9F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C9E8u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037C9E8u) [[unlikely]] return; }
L_0037C9E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
L_0037C9F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C9F8u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0037C9F8u) [[unlikely]] return; }
L_0037C9F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
L_0037CA00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CA08u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037CA08u) [[unlikely]] return; }
L_0037CA08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037CA38; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037CA38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CA40u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x0037CA40u) [[unlikely]] return; }
L_0037CA40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CA48u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x0037CA48u) [[unlikely]] return; }
L_0037CA48:
    set32(c.r[3], 0u - 251u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 256u);  if (t) { goto L_0037CAF8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037CAF8; } }
    set32(c.r[3], 0u - 255u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 254u);  if (t) { goto L_0037CAF8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037CAB0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037CA80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
L_0037CA80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 300u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037CAB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 40u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 30u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CAE4u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x0037CAE4u) [[unlikely]] return; }
L_0037CAE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CAECu);  if (depth < kMaxDepth) unit_008E(c, 349u, depth + 1u); else { c.pc = 0x0033BA80u; return; } if (c.pc != 0x0037CAECu) [[unlikely]] return; }
L_0037CAEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037CAF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], 0u + 30u);
    st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[5], 0u + 2u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CB2Cu); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x0037CB2Cu) [[unlikely]] return; }
L_0037CB2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037CB38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CB40u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037CB40u) [[unlikely]] return; }
L_0037CB40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] <= 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037CBA8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.r[1].d[0] = c.r[2].sd[0] < 271ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0037DC28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CB7Cu);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x0037CB7Cu) [[unlikely]] return; }
L_0037CB7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037DC28; } }
    set32(c.r[2], 0u + 300u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037CBA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[2], 0u + 300u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037CBD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CBD8u); c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037CBD8u) [[unlikely]] return; }
L_0037CBD8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] <= 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037CC30; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.r[1].d[0] = c.r[2].sd[0] < 211ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0037DC28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CC14u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x0037CC14u) [[unlikely]] return; }
L_0037CC14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037DC28; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0037DC28; } }
L_0037CC30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0037DC28; } }
L_0037CC48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0037DC28; } }
L_0037CC50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 111u);  if (t) { goto L_0037CC70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CC68u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037CC68u) [[unlikely]] return; }
L_0037CC68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CC78; } }
L_0037CC70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CC78u); set32(c.r[4], 0u + 108u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037CC78u) [[unlikely]] return; }
L_0037CC78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037DC28; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037CCB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CCC0u); set32(c.r[4], 0u + 109u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037CCC0u) [[unlikely]] return; }
L_0037CCC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CCC8u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0037CCC8u) [[unlikely]] return; }
L_0037CCC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037CCF8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037CCF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CD00u);  if (depth < kMaxDepth) unit_0098(c, 534u, depth + 1u); else { c.pc = 0x003637C0u; return; } if (c.pc != 0x0037CD00u) [[unlikely]] return; }
L_0037CD00:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037CD58; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037CD20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037CD20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CD3Cu); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037CD3Cu) [[unlikely]] return; }
L_0037CD3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CD44u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037CD44u) [[unlikely]] return; }
L_0037CD44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CD4Cu); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037CD4Cu) [[unlikely]] return; }
L_0037CD4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037CD58:
    set32(c.r[2], 0u + 12u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CD78u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037CD78u) [[unlikely]] return; }
L_0037CD78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CD80u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037CD80u) [[unlikely]] return; }
L_0037CD80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CD88u);  if (depth < kMaxDepth) unit_0098(c, 529u, depth + 1u); else { c.pc = 0x00363720u; return; } if (c.pc != 0x0037CD88u) [[unlikely]] return; }
L_0037CD88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (t) { goto L_0037CDA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CD98u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037CD98u) [[unlikely]] return; }
L_0037CD98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
L_0037CDA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CDA8u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0037CDA8u) [[unlikely]] return; }
L_0037CDA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
L_0037CDB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_0037DC28; } }
L_0037CDB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CDC0u); set32(c.r[4], 0u + 109u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037CDC0u) [[unlikely]] return; }
L_0037CDC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037DC28; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037CE00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CE08u); set32(c.r[4], 0u + 110u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037CE08u) [[unlikely]] return; }
L_0037CE08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CE10u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0037CE10u) [[unlikely]] return; }
L_0037CE10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037CE40; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037CE40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CE48u);  if (depth < kMaxDepth) unit_0098(c, 534u, depth + 1u); else { c.pc = 0x003637C0u; return; } if (c.pc != 0x0037CE48u) [[unlikely]] return; }
L_0037CE48:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037CEA0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037CE68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037CE68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CE84u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037CE84u) [[unlikely]] return; }
L_0037CE84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CE8Cu); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037CE8Cu) [[unlikely]] return; }
L_0037CE8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CE94u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037CE94u) [[unlikely]] return; }
L_0037CE94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037CEA0:
    set32(c.r[2], 0u + 22u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CEC0u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037CEC0u) [[unlikely]] return; }
L_0037CEC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CEC8u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037CEC8u) [[unlikely]] return; }
L_0037CEC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CED0u);  if (depth < kMaxDepth) unit_0098(c, 529u, depth + 1u); else { c.pc = 0x00363720u; return; } if (c.pc != 0x0037CED0u) [[unlikely]] return; }
L_0037CED0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (t) { goto L_0037CEE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CEE0u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037CEE0u) [[unlikely]] return; }
L_0037CEE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
L_0037CEE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CEF0u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0037CEF0u) [[unlikely]] return; }
L_0037CEF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
L_0037CEF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_0037DC28; } }
L_0037CF00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CF08u); set32(c.r[4], 0u + 110u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037CF08u) [[unlikely]] return; }
L_0037CF08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037DC28; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037CF48:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5009u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 112u);  if (t) { goto L_0037CF68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CF60u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037CF60u) [[unlikely]] return; }
L_0037CF60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037CF70; } }
L_0037CF68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CF70u); set32(c.r[4], 0u + 148u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037CF70u) [[unlikely]] return; }
L_0037CF70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CF78u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0037CF78u) [[unlikely]] return; }
L_0037CF78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037CFA8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037CFA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CFB0u);  if (depth < kMaxDepth) unit_0098(c, 534u, depth + 1u); else { c.pc = 0x003637C0u; return; } if (c.pc != 0x0037CFB0u) [[unlikely]] return; }
L_0037CFB0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037D008; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037CFD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037CFD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CFECu); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037CFECu) [[unlikely]] return; }
L_0037CFEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CFF4u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037CFF4u) [[unlikely]] return; }
L_0037CFF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CFFCu); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037CFFCu) [[unlikely]] return; }
L_0037CFFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037D008:
    set32(c.r[2], 0u + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D028u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037D028u) [[unlikely]] return; }
L_0037D028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D030u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037D030u) [[unlikely]] return; }
L_0037D030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D038u);  if (depth < kMaxDepth) unit_0098(c, 529u, depth + 1u); else { c.pc = 0x00363720u; return; } if (c.pc != 0x0037D038u) [[unlikely]] return; }
L_0037D038:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (t) { goto L_0037D050; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D048u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037D048u) [[unlikely]] return; }
L_0037D048:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
L_0037D050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D058u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0037D058u) [[unlikely]] return; }
L_0037D058:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
L_0037D060:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_0037DC28; } }
L_0037D068:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5009u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 112u);  if (t) { goto L_0037D088; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D080u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037D080u) [[unlikely]] return; }
L_0037D080:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037D090; } }
L_0037D088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D090u); set32(c.r[4], 0u + 148u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037D090u) [[unlikely]] return; }
L_0037D090:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037DC28; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037D0D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D0D8u); set32(c.r[4], 0u + 113u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037D0D8u) [[unlikely]] return; }
L_0037D0D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D0E0u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0037D0E0u) [[unlikely]] return; }
L_0037D0E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037D110; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037D110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D118u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x0037D118u) [[unlikely]] return; }
L_0037D118:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D124u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));  if (depth < kMaxDepth) unit_008F(c, 79u, depth + 1u); else { c.pc = 0x0033D2F0u; return; } if (c.pc != 0x0037D124u) [[unlikely]] return; }
L_0037D124:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037D168; } }
    set32(c.r[2], 0u + 70u);
    st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 30u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D150u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037D150u) [[unlikely]] return; }
L_0037D150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D158u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037D158u) [[unlikely]] return; }
L_0037D158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D160u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0037D160u) [[unlikely]] return; }
L_0037D160:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
L_0037D168:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0037DC28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D178u);  if (depth < kMaxDepth) unit_0098(c, 534u, depth + 1u); else { c.pc = 0x003637C0u; return; } if (c.pc != 0x0037D178u) [[unlikely]] return; }
L_0037D178:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037D1E8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037D198; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037D198:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[2], 0u + 20u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D1C0u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037D1C0u) [[unlikely]] return; }
L_0037D1C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D1C8u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037D1C8u) [[unlikely]] return; }
L_0037D1C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D1D0u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037D1D0u) [[unlikely]] return; }
L_0037D1D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D1DCu); c.r[4].d[0] = ld8((c.r[1].w[0] + 4973u));  if (depth < kMaxDepth) unit_008F(c, 51u, depth + 1u); else { c.pc = 0x0033CCA0u; return; } if (c.pc != 0x0037D1DCu) [[unlikely]] return; }
L_0037D1DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037D1E8:
    set32(c.r[2], 0u + 49u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D208u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037D208u) [[unlikely]] return; }
L_0037D208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D210u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037D210u) [[unlikely]] return; }
L_0037D210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D218u);  if (depth < kMaxDepth) unit_0098(c, 529u, depth + 1u); else { c.pc = 0x00363720u; return; } if (c.pc != 0x0037D218u) [[unlikely]] return; }
L_0037D218:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (t) { goto L_0037D230; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D228u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037D228u) [[unlikely]] return; }
L_0037D228:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
L_0037D230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D238u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0037D238u) [[unlikely]] return; }
L_0037D238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
L_0037D240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D248u); set32(c.r[4], 0u + 114u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037D248u) [[unlikely]] return; }
L_0037D248:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037D268; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037DC28; } }
L_0037D268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D270u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x0037D270u) [[unlikely]] return; }
L_0037D270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D278u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x0037D278u) [[unlikely]] return; }
L_0037D278:
    set32(c.r[3], 0u - 256u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037D2C8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037D298; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037D298:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[2], 0u + 300u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D2BCu); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008E(c, 349u, depth + 1u); else { c.pc = 0x0033BA80u; return; } if (c.pc != 0x0037D2BCu) [[unlikely]] return; }
L_0037D2BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037D2C8:
    set32(c.r[2], 0u + 45u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037D2E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D2F0u); set32(c.r[4], 0u + 143u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037D2F0u) [[unlikely]] return; }
L_0037D2F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D2F8u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x0037D2F8u) [[unlikely]] return; }
L_0037D2F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D304u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));  if (depth < kMaxDepth) unit_008F(c, 79u, depth + 1u); else { c.pc = 0x0033D2F0u; return; } if (c.pc != 0x0037D304u) [[unlikely]] return; }
L_0037D304:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037D330; } }
    set32(c.r[2], 0u + 70u);
    st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 30u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037D330:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037D3C8; } }
    set32(c.r[2], 0u + 5u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[6], 0u + 7148u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D384u); c.r[4].d[0] = c.r[2].d[0] | 12288ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0037D384u) [[unlikely]] return; }
L_0037D384:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F70000u);
    c.r[4].d[0] = c.r[3].d[0] | 12288ull;
    c.r[5].d[0] = c.r[2].d[0] | 57344ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D39Cu); set32(c.r[6], 0u + 7148u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0037D39Cu) [[unlikely]] return; }
L_0037D39C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D3A8u); c.r[4].d[0] = c.r[2].d[0] | 12288ull;  if (depth < kMaxDepth) unit_0090(c, 416u, depth + 1u); else { c.pc = 0x00343870u; return; } if (c.pc != 0x0037D3A8u) [[unlikely]] return; }
L_0037D3A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 4973u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D3BCu); c.r[5].d[0] = c.r[2].d[0] | 12288ull;  if (depth < kMaxDepth) unit_008F(c, 28u, depth + 1u); else { c.pc = 0x0033C7E0u; return; } if (c.pc != 0x0037D3BCu) [[unlikely]] return; }
L_0037D3BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037D3C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.r[1].d[0] = c.r[3].sd[0] < 270ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0037DC28; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0037DC28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D3ECu);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x0037D3ECu) [[unlikely]] return; }
L_0037D3EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037DC28; } }
    set32(c.r[2], 0u + 5u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[6], 0u + 7148u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D424u); c.r[4].d[0] = c.r[2].d[0] | 12288ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0037D424u) [[unlikely]] return; }
L_0037D424:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F70000u);
    c.r[4].d[0] = c.r[3].d[0] | 12288ull;
    c.r[5].d[0] = c.r[2].d[0] | 57344ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D43Cu); set32(c.r[6], 0u + 7148u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0037D43Cu) [[unlikely]] return; }
L_0037D43C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D448u); c.r[4].d[0] = c.r[2].d[0] | 12288ull;  if (depth < kMaxDepth) unit_0090(c, 416u, depth + 1u); else { c.pc = 0x00343870u; return; } if (c.pc != 0x0037D448u) [[unlikely]] return; }
L_0037D448:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 4973u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D45Cu); c.r[5].d[0] = c.r[2].d[0] | 12288ull;  if (depth < kMaxDepth) unit_008F(c, 28u, depth + 1u); else { c.pc = 0x0033C7E0u; return; } if (c.pc != 0x0037D45Cu) [[unlikely]] return; }
L_0037D45C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037D468:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037D498; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037D498:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[2], 0u + 30u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D4C4u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x0037D4C4u) [[unlikely]] return; }
L_0037D4C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037D4D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D4D8u); set32(c.r[4], 0u + 147u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037D4D8u) [[unlikely]] return; }
L_0037D4D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D4E0u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0037D4E0u) [[unlikely]] return; }
L_0037D4E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037D510; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037D510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D518u);  if (depth < kMaxDepth) unit_0098(c, 534u, depth + 1u); else { c.pc = 0x003637C0u; return; } if (c.pc != 0x0037D518u) [[unlikely]] return; }
L_0037D518:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037D570; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037D538; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037D538:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D554u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037D554u) [[unlikely]] return; }
L_0037D554:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D55Cu); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037D55Cu) [[unlikely]] return; }
L_0037D55C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D564u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037D564u) [[unlikely]] return; }
L_0037D564:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037D570:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D590u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037D590u) [[unlikely]] return; }
L_0037D590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D598u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037D598u) [[unlikely]] return; }
L_0037D598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D5A0u);  if (depth < kMaxDepth) unit_0098(c, 529u, depth + 1u); else { c.pc = 0x00363720u; return; } if (c.pc != 0x0037D5A0u) [[unlikely]] return; }
L_0037D5A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (t) { goto L_0037D5B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D5B0u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037D5B0u) [[unlikely]] return; }
L_0037D5B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
L_0037D5B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D5C0u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0037D5C0u) [[unlikely]] return; }
L_0037D5C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
L_0037D5C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_0037DC28; } }
L_0037D5D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D5D8u); set32(c.r[4], 0u + 113u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037D5D8u) [[unlikely]] return; }
L_0037D5D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037DC28; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037D620:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0037DC28; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 1u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D674u); st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x0037D674u) [[unlikely]] return; }
L_0037D674:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037D680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D688u); set32(c.r[4], 0u + 127u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037D688u) [[unlikely]] return; }
L_0037D688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D690u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0037D690u) [[unlikely]] return; }
L_0037D690:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037D6C0; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037D6C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D6C8u);  if (depth < kMaxDepth) unit_0098(c, 534u, depth + 1u); else { c.pc = 0x003637C0u; return; } if (c.pc != 0x0037D6C8u) [[unlikely]] return; }
L_0037D6C8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037D728; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037D6E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037D6E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[2], 0u + 20u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D710u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037D710u) [[unlikely]] return; }
L_0037D710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D718u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037D718u) [[unlikely]] return; }
L_0037D718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D720u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037D720u) [[unlikely]] return; }
L_0037D720:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
L_0037D728:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D748u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037D748u) [[unlikely]] return; }
L_0037D748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D750u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037D750u) [[unlikely]] return; }
L_0037D750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D758u);  if (depth < kMaxDepth) unit_0098(c, 529u, depth + 1u); else { c.pc = 0x00363720u; return; } if (c.pc != 0x0037D758u) [[unlikely]] return; }
L_0037D758:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (t) { goto L_0037D770; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D768u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037D768u) [[unlikely]] return; }
L_0037D768:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
L_0037D770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D778u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0037D778u) [[unlikely]] return; }
L_0037D778:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
L_0037D780:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0037DC28; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0037D7B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_0037DC28; } }
L_0037D7B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D7C0u); set32(c.r[4], 0u + 124u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037D7C0u) [[unlikely]] return; }
L_0037D7C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D7C8u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0037D7C8u) [[unlikely]] return; }
L_0037D7C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037D7F8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037D7F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D800u);  if (depth < kMaxDepth) unit_0098(c, 534u, depth + 1u); else { c.pc = 0x003637C0u; return; } if (c.pc != 0x0037D800u) [[unlikely]] return; }
L_0037D800:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037D858; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037D820; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037D820:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D83Cu); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037D83Cu) [[unlikely]] return; }
L_0037D83C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D844u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037D844u) [[unlikely]] return; }
L_0037D844:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D84Cu); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037D84Cu) [[unlikely]] return; }
L_0037D84C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037D858:
    set32(c.r[2], 0u + 62u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D878u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037D878u) [[unlikely]] return; }
L_0037D878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D880u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037D880u) [[unlikely]] return; }
L_0037D880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D888u);  if (depth < kMaxDepth) unit_0098(c, 529u, depth + 1u); else { c.pc = 0x00363720u; return; } if (c.pc != 0x0037D888u) [[unlikely]] return; }
L_0037D888:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (t) { goto L_0037D8A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D898u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037D898u) [[unlikely]] return; }
L_0037D898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
L_0037D8A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D8A8u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0037D8A8u) [[unlikely]] return; }
L_0037D8A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
L_0037D8B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_0037DC28; } }
L_0037D8B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D8C0u); set32(c.r[4], 0u + 124u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037D8C0u) [[unlikely]] return; }
L_0037D8C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037DC28; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037D900:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0037DC28; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 1u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D954u); st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x0037D954u) [[unlikely]] return; }
L_0037D954:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037D960:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5009u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 142u);  if (t) { goto L_0037D980; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D978u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037D978u) [[unlikely]] return; }
L_0037D978:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037D988; } }
L_0037D980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D988u); set32(c.r[4], 0u + 149u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037D988u) [[unlikely]] return; }
L_0037D988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D990u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0037D990u) [[unlikely]] return; }
L_0037D990:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037D9C0; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037D9C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D9C8u);  if (depth < kMaxDepth) unit_0098(c, 534u, depth + 1u); else { c.pc = 0x003637C0u; return; } if (c.pc != 0x0037D9C8u) [[unlikely]] return; }
L_0037D9C8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037DA20; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037D9E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037D9E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DA04u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037DA04u) [[unlikely]] return; }
L_0037DA04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DA0Cu); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037DA0Cu) [[unlikely]] return; }
L_0037DA0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DA14u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037DA14u) [[unlikely]] return; }
L_0037DA14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037DA20:
    set32(c.r[2], 0u + 73u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DA40u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037DA40u) [[unlikely]] return; }
L_0037DA40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DA48u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037DA48u) [[unlikely]] return; }
L_0037DA48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DA50u);  if (depth < kMaxDepth) unit_0098(c, 529u, depth + 1u); else { c.pc = 0x00363720u; return; } if (c.pc != 0x0037DA50u) [[unlikely]] return; }
L_0037DA50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (t) { goto L_0037DA68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DA60u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037DA60u) [[unlikely]] return; }
L_0037DA60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
L_0037DA68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DA70u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0037DA70u) [[unlikely]] return; }
L_0037DA70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
L_0037DA78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_0037DC28; } }
L_0037DA80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5009u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 142u);  if (t) { goto L_0037DAA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DA98u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037DA98u) [[unlikely]] return; }
L_0037DA98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DAA8; } }
L_0037DAA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DAA8u); set32(c.r[4], 0u + 149u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037DAA8u) [[unlikely]] return; }
L_0037DAA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037DC28; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037DAE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DAF0u); set32(c.r[4], 0u + 155u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037DAF0u) [[unlikely]] return; }
L_0037DAF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DAF8u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0037DAF8u) [[unlikely]] return; }
L_0037DAF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037DB28; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037DB28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DB30u);  if (depth < kMaxDepth) unit_0098(c, 534u, depth + 1u); else { c.pc = 0x003637C0u; return; } if (c.pc != 0x0037DB30u) [[unlikely]] return; }
L_0037DB30:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037DB88; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037DB50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037DB50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DB6Cu); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037DB6Cu) [[unlikely]] return; }
L_0037DB6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DB74u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037DB74u) [[unlikely]] return; }
L_0037DB74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DB7Cu); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037DB7Cu) [[unlikely]] return; }
L_0037DB7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
    c.budget -= 1;
L_0037DB88:
    set32(c.r[2], 0u + 82u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DBA8u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037DBA8u) [[unlikely]] return; }
L_0037DBA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DBB0u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037DBB0u) [[unlikely]] return; }
L_0037DBB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DBB8u);  if (depth < kMaxDepth) unit_0098(c, 529u, depth + 1u); else { c.pc = 0x00363720u; return; } if (c.pc != 0x0037DBB8u) [[unlikely]] return; }
L_0037DBB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (t) { goto L_0037DBD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DBC8u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037DBC8u) [[unlikely]] return; }
L_0037DBC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
L_0037DBD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DBD8u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0037DBD8u) [[unlikely]] return; }
L_0037DBD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DC28; } }
L_0037DBE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_0037DC28; } }
L_0037DBE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DBF0u); set32(c.r[4], 0u + 155u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037DBF0u) [[unlikely]] return; }
L_0037DBF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037DC28; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
L_0037DC28:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037DC40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 2u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4963u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0037DCE0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037DCC0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037DC80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DCE8; } }
    c.budget -= 1;
L_0037DC80:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0037DCA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    set32(c.r[4], 0u + 1390u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DCA0u); c.r[5].d[0] = c.r[2].d[0] | 28672ull;  if (depth < kMaxDepth) unit_0045(c, 59u, depth + 1u); else { c.pc = 0x002147C0u; return; } if (c.pc != 0x0037DCA0u) [[unlikely]] return; }
L_0037DCA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DCE8; } }
L_0037DCA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F50000u);
    set32(c.r[4], 0u + 1389u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DCB8u); c.r[5].d[0] = c.r[2].d[0] | 59392ull;  if (depth < kMaxDepth) unit_0045(c, 59u, depth + 1u); else { c.pc = 0x002147C0u; return; } if (c.pc != 0x0037DCB8u) [[unlikely]] return; }
L_0037DCB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DCE8; } }
L_0037DCC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DCC8u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x0037DCC8u) [[unlikely]] return; }
L_0037DCC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037DCE8; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4963u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0037DCE0:
    set32(c.r[16], 0u + 1u);
    c.budget -= 2;
L_0037DCE8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037DD00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], 0u + 51u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0037E658; } }
    set32(c.r[2], 0u + 50u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 41u);  if (t) { goto L_0037E5C8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037E5C0; } }
    set32(c.r[2], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 35u);  if (t) { goto L_0037E530; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037E420; } }
    set32(c.r[2], 0u + 30u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 25u);  if (t) { goto L_0037E320; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037E2A8; } }
    set32(c.r[2], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 20u);  if (t) { goto L_0037E2A0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037E180; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_0037E178; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037E100; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0037E010; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037DE68; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037DE00; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037DDB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037E660; } }
L_0037DDB8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DDD0u); st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0098(c, 558u, depth + 1u); else { c.pc = 0x00363A20u; return; } if (c.pc != 0x0037DDD0u) [[unlikely]] return; }
L_0037DDD0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23712u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4973u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4973u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DDF0u); st8((c.r[1].w[0] + 5081u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008E(c, 349u, depth + 1u); else { c.pc = 0x0033BA80u; return; } if (c.pc != 0x0037DDF0u) [[unlikely]] return; }
L_0037DDF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DDF8u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x0037DDF8u) [[unlikely]] return; }
L_0037DDF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037E660; } }
L_0037DE00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DE08u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009F(c, 225u, depth + 1u); else { c.pc = 0x0037DC40u; return; } if (c.pc != 0x0037DE08u) [[unlikely]] return; }
L_0037DE08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037E660; } }
    set32(c.r[2], 0u + 20u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = c.r[2].d[0] | 28672ull;
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DE40u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 83u, depth + 1u); else { c.pc = 0x0033D350u; return; } if (c.pc != 0x0037DE40u) [[unlikely]] return; }
L_0037DE40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[6].d[0] = 0ull + 0ull;
    st16((c.r[1].w[0] + 5082u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 4973u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DE60u); c.r[5].d[0] = c.r[2].d[0] | 12288ull;  if (depth < kMaxDepth) unit_008F(c, 18u, depth + 1u); else { c.pc = 0x0033C490u; return; } if (c.pc != 0x0037DE60u) [[unlikely]] return; }
L_0037DE60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037E660; } }
L_0037DE68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DE70u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037DE70u) [[unlikely]] return; }
L_0037DE70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037DE90; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037E660; } }
L_0037DE90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DE98u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x0037DE98u) [[unlikely]] return; }
L_0037DE98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DEA0u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x0037DEA0u) [[unlikely]] return; }
L_0037DEA0:
    set32(c.r[3], 0u - 251u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 256u);  if (t) { goto L_0037DFB8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037DF90; } }
    set32(c.r[3], 0u - 255u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_0037DF60; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037E660; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037DED8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037DFE0; } }
L_0037DED8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[7].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[2], 0u + 20u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 7148u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4973u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = c.r[2].d[0] | 12288ull;
    set32(c.r[2], c.r[7].w[0] + 1u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DF1Cu); st8((c.r[1].w[0] + 5081u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0037DF1Cu) [[unlikely]] return; }
L_0037DF1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F70000u);
    c.r[4].d[0] = c.r[3].d[0] | 12288ull;
    c.r[5].d[0] = c.r[2].d[0] | 57344ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DF34u); set32(c.r[6], 0u + 7148u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0037DF34u) [[unlikely]] return; }
L_0037DF34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DF40u); c.r[4].d[0] = c.r[2].d[0] | 12288ull;  if (depth < kMaxDepth) unit_0090(c, 416u, depth + 1u); else { c.pc = 0x00343870u; return; } if (c.pc != 0x0037DF40u) [[unlikely]] return; }
L_0037DF40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 4973u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DF54u); c.r[5].d[0] = c.r[2].d[0] | 12288ull;  if (depth < kMaxDepth) unit_008F(c, 28u, depth + 1u); else { c.pc = 0x0033C7E0u; return; } if (c.pc != 0x0037DF54u) [[unlikely]] return; }
L_0037DF54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037E660; } }
    c.budget -= 1;
L_0037DF60:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1860u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 30u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DF88u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008E(c, 349u, depth + 1u); else { c.pc = 0x0033BA80u; return; } if (c.pc != 0x0037DF88u) [[unlikely]] return; }
L_0037DF88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037E660; } }
L_0037DF90:
    set32(c.r[2], 0u + 40u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 300u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1860u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037E660; } }
L_0037DFB8:
    set32(c.r[2], 0u + 50u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 300u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1860u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037E660; } }
L_0037DFE0:
    set32(c.r[3], 0u + 30u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 1860u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E004u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_008E(c, 349u, depth + 1u); else { c.pc = 0x0033BA80u; return; } if (c.pc != 0x0037E004u) [[unlikely]] return; }
L_0037E004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037E660; } }
    c.budget -= 1;
L_0037E010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E018u); set32(c.r[4], 0u + 9u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037E018u) [[unlikely]] return; }
L_0037E018:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037E038; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037E660; } }
L_0037E038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E040u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x0037E040u) [[unlikely]] return; }
L_0037E040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E048u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x0037E048u) [[unlikely]] return; }
L_0037E048:
    set32(c.r[3], 0u - 251u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 256u);  if (t) { goto L_0037E0D8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037E0D8; } }
    set32(c.r[3], 0u - 255u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_0037E0A8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037E660; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037E080; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037E660; } }
L_0037E080:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[2], 0u + 300u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0037E660; } }
    c.budget -= 1;
L_0037E0A8:
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1860u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 30u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E0D0u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008E(c, 349u, depth + 1u); else { c.pc = 0x0033BA80u; return; } if (c.pc != 0x0037E0D0u) [[unlikely]] return; }
L_0037E0D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037E660; } }
L_0037E0D8:
    set32(c.r[2], 0u + 40u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 300u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1860u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037E660; } }
L_0037E100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E108u); set32(c.r[4], 0u + 10u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037E108u) [[unlikely]] return; }
L_0037E108:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] <= 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037E160; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.r[1].d[0] = c.r[2].sd[0] < 271ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0037E660; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E144u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x0037E144u) [[unlikely]] return; }
L_0037E144:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037E660; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0037E660; } }
L_0037E160:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0037E660; } }
L_0037E178:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0037E660; } }
L_0037E180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E188u); set32(c.r[4], 0u + 13u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037E188u) [[unlikely]] return; }
L_0037E188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E190u); set32(c.r[4], 0u + 14u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037E190u) [[unlikely]] return; }
L_0037E190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E198u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 256u, depth + 1u); else { c.pc = 0x00382500u; return; } if (c.pc != 0x0037E198u) [[unlikely]] return; }
L_0037E198:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0037E278; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E1B0u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x0037E1B0u) [[unlikely]] return; }
L_0037E1B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E1BCu); c.r[4].d[0] = ld8((c.r[1].w[0] + 4973u));  if (depth < kMaxDepth) unit_008F(c, 79u, depth + 1u); else { c.pc = 0x0033D2F0u; return; } if (c.pc != 0x0037E1BCu) [[unlikely]] return; }
L_0037E1BC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0037E210; } }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_0037E660; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E1E0u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x0037E1E0u) [[unlikely]] return; }
L_0037E1E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037E220; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E1FCu); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008E(c, 345u, depth + 1u); else { c.pc = 0x0033BA20u; return; } if (c.pc != 0x0037E1FCu) [[unlikely]] return; }
L_0037E1FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E204u); set32(c.r[4], 0u + 1024u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037E204u) [[unlikely]] return; }
L_0037E204:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037E660; } }
    c.budget -= 1;
L_0037E210:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0037E220:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0037E250; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037E250; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037E250; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0037E660; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037E660; } }
L_0037E250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E258u);  if (depth < kMaxDepth) unit_008E(c, 345u, depth + 1u); else { c.pc = 0x0033BA20u; return; } if (c.pc != 0x0037E258u) [[unlikely]] return; }
L_0037E258:
    set32(c.r[3], 0u + 25u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037E660; } }
    c.budget -= 1;
L_0037E278:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E290u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008E(c, 345u, depth + 1u); else { c.pc = 0x0033BA20u; return; } if (c.pc != 0x0037E290u) [[unlikely]] return; }
L_0037E290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E298u); set32(c.r[4], 0u + 1024u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037E298u) [[unlikely]] return; }
L_0037E298:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037E660; } }
L_0037E2A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_0037E660; } }
L_0037E2A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0037E2E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E2D4u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x0037E2D4u) [[unlikely]] return; }
L_0037E2D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037E660; } }
    c.budget -= 1;
L_0037E2E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], 0u + 20u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 4973u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E318u); c.r[5].d[0] = c.r[2].d[0] | 12288ull;  if (depth < kMaxDepth) unit_008F(c, 18u, depth + 1u); else { c.pc = 0x0033C490u; return; } if (c.pc != 0x0037E318u) [[unlikely]] return; }
L_0037E318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037E660; } }
L_0037E320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E328u); set32(c.r[4], 0u + 15u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037E328u) [[unlikely]] return; }
L_0037E328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E330u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037E330u) [[unlikely]] return; }
L_0037E330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E338u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 256u, depth + 1u); else { c.pc = 0x00382500u; return; } if (c.pc != 0x0037E338u) [[unlikely]] return; }
L_0037E338:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0037E400; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E350u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x0037E350u) [[unlikely]] return; }
L_0037E350:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E35Cu); c.r[4].d[0] = ld8((c.r[1].w[0] + 4973u));  if (depth < kMaxDepth) unit_008F(c, 79u, depth + 1u); else { c.pc = 0x0033D2F0u; return; } if (c.pc != 0x0037E35Cu) [[unlikely]] return; }
L_0037E35C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0037E3A8; } }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_0037E660; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E380u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x0037E380u) [[unlikely]] return; }
L_0037E380:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037E3B8; } }
    set32(c.r[2], 0u + 21u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E398u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008E(c, 345u, depth + 1u); else { c.pc = 0x0033BA20u; return; } if (c.pc != 0x0037E398u) [[unlikely]] return; }
L_0037E398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E3A0u); set32(c.r[4], 0u + 1024u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037E3A0u) [[unlikely]] return; }
L_0037E3A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037E660; } }
L_0037E3A8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0037E3B8:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037E660; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037E660; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037E660; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0037E3E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037E660; } }
L_0037E3E8:
    set32(c.r[2], 0u + 35u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E3F8u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008E(c, 349u, depth + 1u); else { c.pc = 0x0033BA80u; return; } if (c.pc != 0x0037E3F8u) [[unlikely]] return; }
L_0037E3F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037E660; } }
L_0037E400:
    set32(c.r[2], 0u + 21u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E410u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008E(c, 345u, depth + 1u); else { c.pc = 0x0033BA20u; return; } if (c.pc != 0x0037E410u) [[unlikely]] return; }
L_0037E410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E418u); set32(c.r[4], 0u + 1024u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037E418u) [[unlikely]] return; }
L_0037E418:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037E660; } }
L_0037E420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E428u); set32(c.r[4], 0u + 15u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037E428u) [[unlikely]] return; }
L_0037E428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E430u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037E430u) [[unlikely]] return; }
L_0037E430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E438u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 256u, depth + 1u); else { c.pc = 0x00382500u; return; } if (c.pc != 0x0037E438u) [[unlikely]] return; }
L_0037E438:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0037E510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E450u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x0037E450u) [[unlikely]] return; }
L_0037E450:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E45Cu); c.r[4].d[0] = ld8((c.r[1].w[0] + 4973u));  if (depth < kMaxDepth) unit_008F(c, 79u, depth + 1u); else { c.pc = 0x0033D2F0u; return; } if (c.pc != 0x0037E45Cu) [[unlikely]] return; }
L_0037E45C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0037E4A8; } }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_0037E660; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E480u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x0037E480u) [[unlikely]] return; }
L_0037E480:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037E4B8; } }
    set32(c.r[2], 0u + 21u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E498u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008E(c, 345u, depth + 1u); else { c.pc = 0x0033BA20u; return; } if (c.pc != 0x0037E498u) [[unlikely]] return; }
L_0037E498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E4A0u); set32(c.r[4], 0u + 1024u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037E4A0u) [[unlikely]] return; }
L_0037E4A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037E660; } }
L_0037E4A8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0037E4B8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0037E660; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037E4E8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037E4E8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037E4E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037E660; } }
    c.budget -= 1;
L_0037E4E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E4F0u);  if (depth < kMaxDepth) unit_008E(c, 345u, depth + 1u); else { c.pc = 0x0033BA20u; return; } if (c.pc != 0x0037E4F0u) [[unlikely]] return; }
L_0037E4F0:
    set32(c.r[3], 0u + 25u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037E660; } }
    c.budget -= 1;
L_0037E510:
    set32(c.r[2], 0u + 21u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E520u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008E(c, 345u, depth + 1u); else { c.pc = 0x0033BA20u; return; } if (c.pc != 0x0037E520u) [[unlikely]] return; }
L_0037E520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E528u); set32(c.r[4], 0u + 1024u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037E528u) [[unlikely]] return; }
L_0037E528:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037E660; } }
L_0037E530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E538u); set32(c.r[4], 0u + 11u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037E538u) [[unlikely]] return; }
L_0037E538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E540u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037E540u) [[unlikely]] return; }
L_0037E540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E548u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 256u, depth + 1u); else { c.pc = 0x00382500u; return; } if (c.pc != 0x0037E548u) [[unlikely]] return; }
L_0037E548:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037E5A0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0037E590; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E56Cu);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x0037E56Cu) [[unlikely]] return; }
L_0037E56C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037E660; } }
    set32(c.r[2], 0u + 41u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], 0u + 1024u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E588u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037E588u) [[unlikely]] return; }
L_0037E588:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037E660; } }
L_0037E590:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037E660; } }
L_0037E5A0:
    set32(c.r[2], 0u + 41u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], 0u + 1024u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E5B4u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037E5B4u) [[unlikely]] return; }
L_0037E5B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037E660; } }
    c.budget -= 1;
L_0037E5C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_0037E660; } }
L_0037E5C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E5D0u); set32(c.r[4], 0u + 153u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037E5D0u) [[unlikely]] return; }
L_0037E5D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E5D8u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037E5D8u) [[unlikely]] return; }
L_0037E5D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E5E0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 256u, depth + 1u); else { c.pc = 0x00382500u; return; } if (c.pc != 0x0037E5E0u) [[unlikely]] return; }
L_0037E5E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037E638; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0037E628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E604u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x0037E604u) [[unlikely]] return; }
L_0037E604:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037E660; } }
    set32(c.r[2], 0u + 51u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], 0u + 1024u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E620u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037E620u) [[unlikely]] return; }
L_0037E620:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037E660; } }
L_0037E628:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037E660; } }
L_0037E638:
    set32(c.r[2], 0u + 51u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[4], 0u + 1024u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E64Cu); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037E64Cu) [[unlikely]] return; }
L_0037E64C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037E660; } }
    c.budget -= 1;
L_0037E658:
    set32(c.r[16], 0u - 1u);
    c.budget -= 2;
L_0037E660:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037E680:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], 0u + 182u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0037FF98; } }
    set32(c.r[3], 0u + 181u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 180u);  if (t) { goto L_0037FE98; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037FE38; } }
    set32(c.r[3], 0u + 172u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 171u);  if (t) { goto L_0037FE30; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037FD30; } }
    set32(c.r[3], 0u + 170u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 162u);  if (t) { goto L_0037FCC8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037FCC0; } }
    set32(c.r[3], 0u + 161u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 160u);  if (t) { goto L_0037FBC0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037FB60; } }
    set32(c.r[3], 0u + 152u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 151u);  if (t) { goto L_0037FB58; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037FA58; } }
    set32(c.r[3], 0u + 150u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 142u);  if (t) { goto L_0037F9F8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037F9F0; } }
    set32(c.r[3], 0u + 141u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 140u);  if (t) { goto L_0037F8F0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037F890; } }
    set32(c.r[3], 0u + 131u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 130u);  if (t) { goto L_0037F718; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037F6B0; } }
    set32(c.r[3], 0u + 125u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 124u);  if (t) { goto L_0037F590; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037F588; } }
    set32(c.r[3], 0u + 123u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 122u);  if (t) { goto L_0037F478; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037F3A0; } }
    set32(c.r[3], 0u + 121u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 120u);  if (t) { goto L_0037F238; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037F198; } }
    set32(c.r[3], 0u + 112u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 111u);  if (t) { goto L_0037F190; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037F090; } }
    set32(c.r[3], 0u + 110u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 103u);  if (t) { goto L_0037F030; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037EFD8; } }
    set32(c.r[3], 0u + 102u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 101u);  if (t) { goto L_0037EFD0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037EED0; } }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 7u);  if (t) { goto L_0037EE70; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037EE68; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_0037EDF0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037ED18; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_0037EB98; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037EA50; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_0037E8B0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0037E860; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037E818; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037E818:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E830u); st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0098(c, 558u, depth + 1u); else { c.pc = 0x00363A20u; return; } if (c.pc != 0x0037E830u) [[unlikely]] return; }
L_0037E830:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E83Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008E(c, 337u, depth + 1u); else { c.pc = 0x0033B920u; return; } if (c.pc != 0x0037E83Cu) [[unlikely]] return; }
L_0037E83C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] | 12288ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E854u); c.r[6].d[0] = c.r[2].d[0] | 47104ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0037E854u) [[unlikely]] return; }
L_0037E854:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
    c.budget -= 1;
L_0037E860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E868u);  if (depth < kMaxDepth) unit_009F(c, 225u, depth + 1u); else { c.pc = 0x0037DC40u; return; } if (c.pc != 0x0037E868u) [[unlikely]] return; }
L_0037E868:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037FFA0; } }
    set32(c.r[2], 0u + 20u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 11u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[5], 0u + 1u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E8A8u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x0037E8A8u) [[unlikely]] return; }
L_0037E8A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037E8B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E8B8u); set32(c.r[4], 0u + 116u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037E8B8u) [[unlikely]] return; }
L_0037E8B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E8C0u); set32(c.r[4], 0u + 11u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0037E8C0u) [[unlikely]] return; }
L_0037E8C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037EA40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E8D8u);  if (depth < kMaxDepth) unit_0098(c, 521u, depth + 1u); else { c.pc = 0x00363640u; return; } if (c.pc != 0x0037E8D8u) [[unlikely]] return; }
L_0037E8D8:
    c.r[3].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037E920; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037E908; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E8F8u);  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x0037E8F8u) [[unlikely]] return; }
L_0037E8F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0037E968; } }
    c.budget -= 1;
L_0037E908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E910u);  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x0037E910u) [[unlikely]] return; }
L_0037E910:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037E968; } }
L_0037E920:
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037E968; } }
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037E958; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E944u);  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x0037E944u) [[unlikely]] return; }
L_0037E944:
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037E968; } }
    c.budget -= 1;
L_0037E958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E960u);  if (depth < kMaxDepth) unit_0098(c, 518u, depth + 1u); else { c.pc = 0x00363610u; return; } if (c.pc != 0x0037E960u) [[unlikely]] return; }
L_0037E960:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4970u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_0037E968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E970u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x0037E970u) [[unlikely]] return; }
L_0037E970:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (t) { goto L_0037E9F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E980u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037E980u) [[unlikely]] return; }
L_0037E980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E988u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037E988u) [[unlikely]] return; }
L_0037E988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E990u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037E990u) [[unlikely]] return; }
L_0037E990:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 20u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F50000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].d[0] = c.r[2].d[0] | 59392ull;
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E9BCu); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008F(c, 83u, depth + 1u); else { c.pc = 0x0033D350u; return; } if (c.pc != 0x0037E9BCu) [[unlikely]] return; }
L_0037E9BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 5082u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[5].d[0] = c.r[2].d[0] | 12288ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4970u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5081u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E9ECu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_008F(c, 18u, depth + 1u); else { c.pc = 0x0033C490u; return; } if (c.pc != 0x0037E9ECu) [[unlikely]] return; }
L_0037E9EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
    c.budget -= 1;
L_0037E9F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EA00u);  if (depth < kMaxDepth) unit_0098(c, 531u, depth + 1u); else { c.pc = 0x00363760u; return; } if (c.pc != 0x0037EA00u) [[unlikely]] return; }
L_0037EA00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (t) { goto L_0037FFA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EA10u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037EA10u) [[unlikely]] return; }
L_0037EA10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EA18u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037EA18u) [[unlikely]] return; }
L_0037EA18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EA20u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0037EA20u) [[unlikely]] return; }
L_0037EA20:
    set32(c.r[3], 0u + 100u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037FFA0; } }
    c.budget -= 1;
L_0037EA40:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037FFA0; } }
L_0037EA50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EA58u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037EA58u) [[unlikely]] return; }
L_0037EA58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037EB88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EA70u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x0037EA70u) [[unlikely]] return; }
L_0037EA70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EA78u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x0037EA78u) [[unlikely]] return; }
L_0037EA78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u - 251u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037EB78; } }
    set32(c.r[2], 0u - 256u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 252u);  if (t) { goto L_0037EB68; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037EB58; } }
    set32(c.r[2], 0u - 253u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 254u);  if (t) { goto L_0037EB48; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037EB30; } }
    set32(c.r[2], 0u - 255u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037EB20; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037EAD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037EAD8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[6].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[3], 0u + 20u);
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EB10u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x0037EB10u) [[unlikely]] return; }
L_0037EB10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EB18u);  if (depth < kMaxDepth) unit_008E(c, 349u, depth + 1u); else { c.pc = 0x0033BA80u; return; } if (c.pc != 0x0037EB18u) [[unlikely]] return; }
L_0037EB18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037EB20:
    set32(c.r[2], 0u + 110u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0037FFA0; } }
L_0037EB30:
    set32(c.r[2], 0u + 120u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EB40u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008E(c, 349u, depth + 1u); else { c.pc = 0x0033BA80u; return; } if (c.pc != 0x0037EB40u) [[unlikely]] return; }
L_0037EB40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037EB48:
    set32(c.r[2], 0u + 130u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0037FFA0; } }
L_0037EB58:
    set32(c.r[2], 0u + 140u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0037FFA0; } }
L_0037EB68:
    set32(c.r[2], 0u + 150u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0037FFA0; } }
L_0037EB78:
    set32(c.r[2], 0u + 180u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0037FFA0; } }
L_0037EB88:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037FFA0; } }
L_0037EB98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EBA0u); set32(c.r[4], 0u + 157u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037EBA0u) [[unlikely]] return; }
L_0037EBA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EBA8u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0037EBA8u) [[unlikely]] return; }
L_0037EBA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EBB0u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x0037EBB0u) [[unlikely]] return; }
L_0037EBB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EBBCu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));  if (depth < kMaxDepth) unit_008F(c, 79u, depth + 1u); else { c.pc = 0x0033D2F0u; return; } if (c.pc != 0x0037EBBCu) [[unlikely]] return; }
L_0037EBBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037EC00; } }
    set32(c.r[2], 0u + 170u);
    st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EBE8u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037EBE8u) [[unlikely]] return; }
L_0037EBE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EBF0u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037EBF0u) [[unlikely]] return; }
L_0037EBF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EBF8u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0037EBF8u) [[unlikely]] return; }
L_0037EBF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037EC00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037ED08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EC18u);  if (depth < kMaxDepth) unit_0098(c, 534u, depth + 1u); else { c.pc = 0x003637C0u; return; } if (c.pc != 0x0037EC18u) [[unlikely]] return; }
L_0037EC18:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037ECA8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037EC38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
    c.budget -= 1;
L_0037EC38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EC68u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037EC68u) [[unlikely]] return; }
L_0037EC68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EC70u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037EC70u) [[unlikely]] return; }
L_0037EC70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EC78u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037EC78u) [[unlikely]] return; }
L_0037EC78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EC80u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0090(c, 378u, depth + 1u); else { c.pc = 0x00343210u; return; } if (c.pc != 0x0037EC80u) [[unlikely]] return; }
L_0037EC80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EC88u);  if (depth < kMaxDepth) unit_0090(c, 347u, depth + 1u); else { c.pc = 0x00342D60u; return; } if (c.pc != 0x0037EC88u) [[unlikely]] return; }
L_0037EC88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EC9Cu); c.r[5].d[0] = c.r[2].d[0] | 12288ull;  if (depth < kMaxDepth) unit_008F(c, 28u, depth + 1u); else { c.pc = 0x0033C7E0u; return; } if (c.pc != 0x0037EC9Cu) [[unlikely]] return; }
L_0037EC9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
    c.budget -= 1;
L_0037ECA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 103u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 20u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ECD0u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037ECD0u) [[unlikely]] return; }
L_0037ECD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ECD8u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037ECD8u) [[unlikely]] return; }
L_0037ECD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ECE0u);  if (depth < kMaxDepth) unit_0098(c, 529u, depth + 1u); else { c.pc = 0x00363720u; return; } if (c.pc != 0x0037ECE0u) [[unlikely]] return; }
L_0037ECE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (t) { goto L_0037ECF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ECF0u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037ECF0u) [[unlikely]] return; }
L_0037ECF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037ECF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ED00u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0037ED00u) [[unlikely]] return; }
L_0037ED00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037ED08:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037FFA0; } }
L_0037ED18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ED20u); set32(c.r[4], 0u + 97u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037ED20u) [[unlikely]] return; }
L_0037ED20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037EDE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ED38u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x0037ED38u) [[unlikely]] return; }
L_0037ED38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ED40u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x0037ED40u) [[unlikely]] return; }
L_0037ED40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u - 251u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037EDD0; } }
    set32(c.r[2], 0u - 256u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 255u);  if (t) { goto L_0037EDD0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037EDD0; } }
    set32(c.r[2], 0u - 254u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037EDB8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037ED90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
    c.budget -= 1;
L_0037ED90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[2], 0u + 300u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0037FFA0; } }
    c.budget -= 1;
L_0037EDB8:
    set32(c.r[2], 0u + 120u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EDC8u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008E(c, 349u, depth + 1u); else { c.pc = 0x0033BA80u; return; } if (c.pc != 0x0037EDC8u) [[unlikely]] return; }
L_0037EDC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037EDD0:
    set32(c.r[2], 0u + 160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0037FFA0; } }
L_0037EDE0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037FFA0; } }
L_0037EDF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EDF8u); set32(c.r[4], 0u + 98u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037EDF8u) [[unlikely]] return; }
L_0037EDF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037EE20; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0037FFA0; } }
    c.budget -= 1;
L_0037EE20:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 270ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0037FFA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EE48u);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x0037EE48u) [[unlikely]] return; }
L_0037EE48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037FFA0; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0037FFA0; } }
    c.budget -= 1;
L_0037EE68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0037FFA0; } }
L_0037EE70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0037FFA0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 1u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EEC4u); st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x0037EEC4u) [[unlikely]] return; }
L_0037EEC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
    c.budget -= 1;
L_0037EED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EED8u); set32(c.r[4], 0u + 117u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037EED8u) [[unlikely]] return; }
L_0037EED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EEE0u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0037EEE0u) [[unlikely]] return; }
L_0037EEE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037EFC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EEF8u);  if (depth < kMaxDepth) unit_0098(c, 534u, depth + 1u); else { c.pc = 0x003637C0u; return; } if (c.pc != 0x0037EEF8u) [[unlikely]] return; }
L_0037EEF8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037EF60; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037EF18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
    c.budget -= 1;
L_0037EF18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EF48u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037EF48u) [[unlikely]] return; }
L_0037EF48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EF50u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037EF50u) [[unlikely]] return; }
L_0037EF50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EF58u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037EF58u) [[unlikely]] return; }
L_0037EF58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037EF60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 103u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 20u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EF88u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037EF88u) [[unlikely]] return; }
L_0037EF88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EF90u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037EF90u) [[unlikely]] return; }
L_0037EF90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EF98u);  if (depth < kMaxDepth) unit_0098(c, 529u, depth + 1u); else { c.pc = 0x00363720u; return; } if (c.pc != 0x0037EF98u) [[unlikely]] return; }
L_0037EF98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (t) { goto L_0037EFB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EFA8u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037EFA8u) [[unlikely]] return; }
L_0037EFA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037EFB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EFB8u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0037EFB8u) [[unlikely]] return; }
L_0037EFB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037EFC0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037FFA0; } }
L_0037EFD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_0037FFA0; } }
L_0037EFD8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037FFA0; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 11u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[5], 0u + 1u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F024u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x0037F024u) [[unlikely]] return; }
L_0037F024:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
    c.budget -= 1;
L_0037F030:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0037FFA0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 1u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F084u); st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x0037F084u) [[unlikely]] return; }
L_0037F084:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
    c.budget -= 1;
L_0037F090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F098u); set32(c.r[4], 0u + 118u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037F098u) [[unlikely]] return; }
L_0037F098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F0A0u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0037F0A0u) [[unlikely]] return; }
L_0037F0A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037F180; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F0B8u);  if (depth < kMaxDepth) unit_0098(c, 534u, depth + 1u); else { c.pc = 0x003637C0u; return; } if (c.pc != 0x0037F0B8u) [[unlikely]] return; }
L_0037F0B8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037F120; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037F0D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
    c.budget -= 1;
L_0037F0D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F108u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037F108u) [[unlikely]] return; }
L_0037F108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F110u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037F110u) [[unlikely]] return; }
L_0037F110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F118u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037F118u) [[unlikely]] return; }
L_0037F118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037F120:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 103u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 20u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F148u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037F148u) [[unlikely]] return; }
L_0037F148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F150u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037F150u) [[unlikely]] return; }
L_0037F150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F158u);  if (depth < kMaxDepth) unit_0098(c, 529u, depth + 1u); else { c.pc = 0x00363720u; return; } if (c.pc != 0x0037F158u) [[unlikely]] return; }
L_0037F158:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (t) { goto L_0037F170; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F168u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037F168u) [[unlikely]] return; }
L_0037F168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037F170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F178u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0037F178u) [[unlikely]] return; }
L_0037F178:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037F180:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037FFA0; } }
L_0037F190:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_0037FFA0; } }
L_0037F198:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0037F1F8; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 1u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F1ECu); st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x0037F1ECu) [[unlikely]] return; }
L_0037F1EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
    c.budget -= 1;
L_0037F1F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F200u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x0037F200u) [[unlikely]] return; }
L_0037F200:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F20Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));  if (depth < kMaxDepth) unit_008F(c, 79u, depth + 1u); else { c.pc = 0x0033D2F0u; return; } if (c.pc != 0x0037F20Cu) [[unlikely]] return; }
L_0037F20C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037FFA0; } }
    set32(c.r[2], 0u + 170u);
    st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037FFA0; } }
    c.budget -= 1;
L_0037F238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F240u); set32(c.r[4], 0u + 113u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037F240u) [[unlikely]] return; }
L_0037F240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F248u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0037F248u) [[unlikely]] return; }
L_0037F248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F250u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x0037F250u) [[unlikely]] return; }
L_0037F250:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 1;
L_0037F254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F25Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));  if (depth < kMaxDepth) unit_008F(c, 79u, depth + 1u); else { c.pc = 0x0033D2F0u; return; } if (c.pc != 0x0037F25Cu) [[unlikely]] return; }
L_0037F25C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037F2A0; } }
    set32(c.r[2], 0u + 170u);
    st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F288u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037F288u) [[unlikely]] return; }
L_0037F288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F290u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037F290u) [[unlikely]] return; }
L_0037F290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F298u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0037F298u) [[unlikely]] return; }
L_0037F298:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037F2A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037F390; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F2B8u);  if (depth < kMaxDepth) unit_0098(c, 534u, depth + 1u); else { c.pc = 0x003637C0u; return; } if (c.pc != 0x0037F2B8u) [[unlikely]] return; }
L_0037F2B8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037F330; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037F2D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
    c.budget -= 1;
L_0037F2D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F308u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037F308u) [[unlikely]] return; }
L_0037F308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F310u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037F310u) [[unlikely]] return; }
L_0037F310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F318u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037F318u) [[unlikely]] return; }
L_0037F318:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F324u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));  if (depth < kMaxDepth) unit_008F(c, 51u, depth + 1u); else { c.pc = 0x0033CCA0u; return; } if (c.pc != 0x0037F324u) [[unlikely]] return; }
L_0037F324:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
    c.budget -= 1;
L_0037F330:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 103u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 20u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F358u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037F358u) [[unlikely]] return; }
L_0037F358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F360u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037F360u) [[unlikely]] return; }
L_0037F360:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F368u);  if (depth < kMaxDepth) unit_0098(c, 529u, depth + 1u); else { c.pc = 0x00363720u; return; } if (c.pc != 0x0037F368u) [[unlikely]] return; }
L_0037F368:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (t) { goto L_0037F380; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F378u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037F378u) [[unlikely]] return; }
L_0037F378:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037F380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F388u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0037F388u) [[unlikely]] return; }
L_0037F388:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037F390:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037FFA0; } }
L_0037F3A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F3A8u); set32(c.r[4], 0u + 114u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037F3A8u) [[unlikely]] return; }
L_0037F3A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037F468; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F3C0u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x0037F3C0u) [[unlikely]] return; }
L_0037F3C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F3C8u);  if (depth < kMaxDepth) unit_008F(c, 78u, depth + 1u); else { c.pc = 0x0033D2E0u; return; } if (c.pc != 0x0037F3C8u) [[unlikely]] return; }
L_0037F3C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u - 256u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4966u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037F428; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037F3F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
    c.budget -= 1;
L_0037F3F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 125u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 300u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F41Cu); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008E(c, 349u, depth + 1u); else { c.pc = 0x0033BA80u; return; } if (c.pc != 0x0037F41Cu) [[unlikely]] return; }
L_0037F41C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
    c.budget -= 1;
L_0037F428:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[6].d[0] = ld8((c.r[1].w[0] + 4962u));
    set32(c.r[3], 0u + 20u);
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F460u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x0037F460u) [[unlikely]] return; }
L_0037F460:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037F468:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037FFA0; } }
L_0037F478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F480u); set32(c.r[4], 0u + 119u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037F480u) [[unlikely]] return; }
L_0037F480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F488u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0037F488u) [[unlikely]] return; }
L_0037F488:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037F578; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F4A0u);  if (depth < kMaxDepth) unit_0098(c, 534u, depth + 1u); else { c.pc = 0x003637C0u; return; } if (c.pc != 0x0037F4A0u) [[unlikely]] return; }
L_0037F4A0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037F518; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037F4C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
    c.budget -= 1;
L_0037F4C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F4F0u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037F4F0u) [[unlikely]] return; }
L_0037F4F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F4F8u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037F4F8u) [[unlikely]] return; }
L_0037F4F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F500u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037F500u) [[unlikely]] return; }
L_0037F500:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F50Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));  if (depth < kMaxDepth) unit_008F(c, 51u, depth + 1u); else { c.pc = 0x0033CCA0u; return; } if (c.pc != 0x0037F50Cu) [[unlikely]] return; }
L_0037F50C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
    c.budget -= 1;
L_0037F518:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 103u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 20u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F540u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037F540u) [[unlikely]] return; }
L_0037F540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F548u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037F548u) [[unlikely]] return; }
L_0037F548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F550u);  if (depth < kMaxDepth) unit_0098(c, 529u, depth + 1u); else { c.pc = 0x00363720u; return; } if (c.pc != 0x0037F550u) [[unlikely]] return; }
L_0037F550:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (t) { goto L_0037F568; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F560u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037F560u) [[unlikely]] return; }
L_0037F560:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037F568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F570u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0037F570u) [[unlikely]] return; }
L_0037F570:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037F578:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037FFA0; } }
L_0037F588:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_0037FFA0; } }
L_0037F590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F598u); set32(c.r[4], 0u + 143u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037F598u) [[unlikely]] return; }
L_0037F598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F5A0u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x0037F5A0u) [[unlikely]] return; }
L_0037F5A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F5ACu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));  if (depth < kMaxDepth) unit_008F(c, 79u, depth + 1u); else { c.pc = 0x0033D2F0u; return; } if (c.pc != 0x0037F5ACu) [[unlikely]] return; }
L_0037F5AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037F5F0; } }
    set32(c.r[2], 0u + 170u);
    st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F5D8u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037F5D8u) [[unlikely]] return; }
L_0037F5D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F5E0u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037F5E0u) [[unlikely]] return; }
L_0037F5E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F5E8u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0037F5E8u) [[unlikely]] return; }
L_0037F5E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037F5F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] >= 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037F650; } }
    set32(c.r[2], 0u + 5u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F634u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0090(c, 347u, depth + 1u); else { c.pc = 0x00342D60u; return; } if (c.pc != 0x0037F634u) [[unlikely]] return; }
L_0037F634:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F648u); c.r[5].d[0] = c.r[2].d[0] | 12288ull;  if (depth < kMaxDepth) unit_008F(c, 28u, depth + 1u); else { c.pc = 0x0033C7E0u; return; } if (c.pc != 0x0037F648u) [[unlikely]] return; }
L_0037F648:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037F650:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.r[1].d[0] = c.r[2].sd[0] < 270ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0037FFA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F66Cu);  if (depth < kMaxDepth) unit_0098(c, 526u, depth + 1u); else { c.pc = 0x003636C0u; return; } if (c.pc != 0x0037F66Cu) [[unlikely]] return; }
L_0037F66C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037FFA0; } }
    set32(c.r[2], 0u + 5u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F694u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0090(c, 347u, depth + 1u); else { c.pc = 0x00342D60u; return; } if (c.pc != 0x0037F694u) [[unlikely]] return; }
L_0037F694:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F6A8u); c.r[5].d[0] = c.r[2].d[0] | 12288ull;  if (depth < kMaxDepth) unit_008F(c, 28u, depth + 1u); else { c.pc = 0x0033C7E0u; return; } if (c.pc != 0x0037F6A8u) [[unlikely]] return; }
L_0037F6A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037F6B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0037FFA0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 1u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F704u); st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x0037F704u) [[unlikely]] return; }
L_0037F704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F70Cu);  if (depth < kMaxDepth) unit_008E(c, 349u, depth + 1u); else { c.pc = 0x0033BA80u; return; } if (c.pc != 0x0037F70Cu) [[unlikely]] return; }
L_0037F70C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
    c.budget -= 1;
L_0037F718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F720u); set32(c.r[4], 0u + 120u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037F720u) [[unlikely]] return; }
L_0037F720:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F728u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0037F728u) [[unlikely]] return; }
L_0037F728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F730u);  if (depth < kMaxDepth) unit_008E(c, 341u, depth + 1u); else { c.pc = 0x0033B9D0u; return; } if (c.pc != 0x0037F730u) [[unlikely]] return; }
L_0037F730:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F73Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));  if (depth < kMaxDepth) unit_008F(c, 79u, depth + 1u); else { c.pc = 0x0033D2F0u; return; } if (c.pc != 0x0037F73Cu) [[unlikely]] return; }
L_0037F73C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);  if (t) { goto L_0037F780; } }
    set32(c.r[2], 0u + 170u);
    st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F768u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037F768u) [[unlikely]] return; }
L_0037F768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F770u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037F770u) [[unlikely]] return; }
L_0037F770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F778u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0037F778u) [[unlikely]] return; }
L_0037F778:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037F780:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037F880; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F798u);  if (depth < kMaxDepth) unit_0098(c, 534u, depth + 1u); else { c.pc = 0x003637C0u; return; } if (c.pc != 0x0037F798u) [[unlikely]] return; }
L_0037F798:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037F820; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037F7B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
    c.budget -= 1;
L_0037F7B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 5u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 20u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F7E0u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037F7E0u) [[unlikely]] return; }
L_0037F7E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F7E8u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037F7E8u) [[unlikely]] return; }
L_0037F7E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F7F0u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037F7F0u) [[unlikely]] return; }
L_0037F7F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F7F8u);  if (depth < kMaxDepth) unit_008E(c, 345u, depth + 1u); else { c.pc = 0x0033BA20u; return; } if (c.pc != 0x0037F7F8u) [[unlikely]] return; }
L_0037F7F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F800u);  if (depth < kMaxDepth) unit_0090(c, 336u, depth + 1u); else { c.pc = 0x00342C80u; return; } if (c.pc != 0x0037F800u) [[unlikely]] return; }
L_0037F800:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F40000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F814u); c.r[5].d[0] = c.r[2].d[0] | 12288ull;  if (depth < kMaxDepth) unit_008F(c, 28u, depth + 1u); else { c.pc = 0x0033C7E0u; return; } if (c.pc != 0x0037F814u) [[unlikely]] return; }
L_0037F814:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
    c.budget -= 1;
L_0037F820:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 103u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 20u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F848u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037F848u) [[unlikely]] return; }
L_0037F848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F850u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037F850u) [[unlikely]] return; }
L_0037F850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F858u);  if (depth < kMaxDepth) unit_0098(c, 529u, depth + 1u); else { c.pc = 0x00363720u; return; } if (c.pc != 0x0037F858u) [[unlikely]] return; }
L_0037F858:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (t) { goto L_0037F870; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F868u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037F868u) [[unlikely]] return; }
L_0037F868:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037F870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F878u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0037F878u) [[unlikely]] return; }
L_0037F878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037F880:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037FFA0; } }
L_0037F890:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0037FFA0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 1u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F8E4u); st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x0037F8E4u) [[unlikely]] return; }
L_0037F8E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
    c.budget -= 1;
L_0037F8F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F8F8u); set32(c.r[4], 0u + 121u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037F8F8u) [[unlikely]] return; }
L_0037F8F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F900u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0037F900u) [[unlikely]] return; }
L_0037F900:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037F9E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F918u);  if (depth < kMaxDepth) unit_0098(c, 534u, depth + 1u); else { c.pc = 0x003637C0u; return; } if (c.pc != 0x0037F918u) [[unlikely]] return; }
L_0037F918:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037F980; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037F938; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
    c.budget -= 1;
L_0037F938:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F968u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037F968u) [[unlikely]] return; }
L_0037F968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F970u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037F970u) [[unlikely]] return; }
L_0037F970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F978u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037F978u) [[unlikely]] return; }
L_0037F978:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037F980:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 103u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 20u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F9A8u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037F9A8u) [[unlikely]] return; }
L_0037F9A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F9B0u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037F9B0u) [[unlikely]] return; }
L_0037F9B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F9B8u);  if (depth < kMaxDepth) unit_0098(c, 529u, depth + 1u); else { c.pc = 0x00363720u; return; } if (c.pc != 0x0037F9B8u) [[unlikely]] return; }
L_0037F9B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (t) { goto L_0037F9D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F9C8u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037F9C8u) [[unlikely]] return; }
L_0037F9C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037F9D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F9D8u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0037F9D8u) [[unlikely]] return; }
L_0037F9D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037F9E0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037FFA0; } }
L_0037F9F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_0037FFA0; } }
L_0037F9F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0037FFA0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 1u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FA4Cu); st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x0037FA4Cu) [[unlikely]] return; }
L_0037FA4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
    c.budget -= 1;
L_0037FA58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FA60u); set32(c.r[4], 0u + 125u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037FA60u) [[unlikely]] return; }
L_0037FA60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FA68u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0037FA68u) [[unlikely]] return; }
L_0037FA68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037FB48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FA80u);  if (depth < kMaxDepth) unit_0098(c, 534u, depth + 1u); else { c.pc = 0x003637C0u; return; } if (c.pc != 0x0037FA80u) [[unlikely]] return; }
L_0037FA80:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037FAE8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037FAA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
    c.budget -= 1;
L_0037FAA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FAD0u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037FAD0u) [[unlikely]] return; }
L_0037FAD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FAD8u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037FAD8u) [[unlikely]] return; }
L_0037FAD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FAE0u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037FAE0u) [[unlikely]] return; }
L_0037FAE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037FAE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 103u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 20u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FB10u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037FB10u) [[unlikely]] return; }
L_0037FB10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FB18u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037FB18u) [[unlikely]] return; }
L_0037FB18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FB20u);  if (depth < kMaxDepth) unit_0098(c, 529u, depth + 1u); else { c.pc = 0x00363720u; return; } if (c.pc != 0x0037FB20u) [[unlikely]] return; }
L_0037FB20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (t) { goto L_0037FB38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FB30u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037FB30u) [[unlikely]] return; }
L_0037FB30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037FB38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FB40u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0037FB40u) [[unlikely]] return; }
L_0037FB40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037FB48:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037FFA0; } }
L_0037FB58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_0037FFA0; } }
L_0037FB60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0037FFA0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 1u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FBB4u); st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x0037FBB4u) [[unlikely]] return; }
L_0037FBB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
    c.budget -= 1;
L_0037FBC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FBC8u); set32(c.r[4], 0u + 122u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037FBC8u) [[unlikely]] return; }
L_0037FBC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FBD0u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0037FBD0u) [[unlikely]] return; }
L_0037FBD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037FCB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FBE8u);  if (depth < kMaxDepth) unit_0098(c, 534u, depth + 1u); else { c.pc = 0x003637C0u; return; } if (c.pc != 0x0037FBE8u) [[unlikely]] return; }
L_0037FBE8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037FC50; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037FC08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
    c.budget -= 1;
L_0037FC08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FC38u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037FC38u) [[unlikely]] return; }
L_0037FC38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FC40u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037FC40u) [[unlikely]] return; }
L_0037FC40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FC48u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037FC48u) [[unlikely]] return; }
L_0037FC48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037FC50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 103u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 20u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FC78u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037FC78u) [[unlikely]] return; }
L_0037FC78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FC80u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037FC80u) [[unlikely]] return; }
L_0037FC80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FC88u);  if (depth < kMaxDepth) unit_0098(c, 529u, depth + 1u); else { c.pc = 0x00363720u; return; } if (c.pc != 0x0037FC88u) [[unlikely]] return; }
L_0037FC88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (t) { goto L_0037FCA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FC98u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037FC98u) [[unlikely]] return; }
L_0037FC98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037FCA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FCA8u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0037FCA8u) [[unlikely]] return; }
L_0037FCA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037FCB0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037FFA0; } }
L_0037FCC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_0037FFA0; } }
L_0037FCC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0037FFA0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 1u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FD1Cu); st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x0037FD1Cu) [[unlikely]] return; }
L_0037FD1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FD24u);  if (depth < kMaxDepth) unit_008E(c, 345u, depth + 1u); else { c.pc = 0x0033BA20u; return; } if (c.pc != 0x0037FD24u) [[unlikely]] return; }
L_0037FD24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
    c.budget -= 1;
L_0037FD30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FD38u); set32(c.r[4], 0u + 145u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037FD38u) [[unlikely]] return; }
L_0037FD38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FD40u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0037FD40u) [[unlikely]] return; }
L_0037FD40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037FD70; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0037FFA0; } }
    c.budget -= 1;
L_0037FD70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FD78u);  if (depth < kMaxDepth) unit_0098(c, 534u, depth + 1u); else { c.pc = 0x003637C0u; return; } if (c.pc != 0x0037FD78u) [[unlikely]] return; }
L_0037FD78:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037FDD0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037FD98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
    c.budget -= 1;
L_0037FD98:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FDB4u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037FDB4u) [[unlikely]] return; }
L_0037FDB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FDBCu); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037FDBCu) [[unlikely]] return; }
L_0037FDBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FDC4u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037FDC4u) [[unlikely]] return; }
L_0037FDC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
    c.budget -= 1;
L_0037FDD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 103u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 20u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FDF8u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037FDF8u) [[unlikely]] return; }
L_0037FDF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FE00u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037FE00u) [[unlikely]] return; }
L_0037FE00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FE08u);  if (depth < kMaxDepth) unit_0098(c, 529u, depth + 1u); else { c.pc = 0x00363720u; return; } if (c.pc != 0x0037FE08u) [[unlikely]] return; }
L_0037FE08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (t) { goto L_0037FE20; } }
    goto L_0037FE10;
L_0037FE0C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 1;
L_0037FE10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FE18u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037FE18u) [[unlikely]] return; }
L_0037FE18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037FE20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FE28u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0037FE28u) [[unlikely]] return; }
L_0037FE28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037FE30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_0037FFA0; } }
L_0037FE38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0037FFA0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 1u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 8;
L_0037FE7C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FE8Cu); st8((c.r[1].w[0] + 5001u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 2u, depth + 1u); else { c.pc = 0x00364020u; return; } if (c.pc != 0x0037FE8Cu) [[unlikely]] return; }
L_0037FE8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
    c.budget -= 1;
L_0037FE98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FEA0u); set32(c.r[4], 0u + 156u);  if (depth < kMaxDepth) unit_0099(c, 15u, depth + 1u); else { c.pc = 0x003642B0u; return; } if (c.pc != 0x0037FEA0u) [[unlikely]] return; }
L_0037FEA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FEA8u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 19u, depth + 1u); else { c.pc = 0x00364380u; return; } if (c.pc != 0x0037FEA8u) [[unlikely]] return; }
L_0037FEA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4964u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037FF88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FEC0u);  if (depth < kMaxDepth) unit_0098(c, 534u, depth + 1u); else { c.pc = 0x003637C0u; return; } if (c.pc != 0x0037FEC0u) [[unlikely]] return; }
L_0037FEC0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037FF28; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037FEE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
    c.budget -= 1;
L_0037FEE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 4962u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FF10u); st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037FF10u) [[unlikely]] return; }
L_0037FF10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FF18u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037FF18u) [[unlikely]] return; }
L_0037FF18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FF20u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037FF20u) [[unlikely]] return; }
L_0037FF20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037FF28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 4963u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 103u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[2], 0u + 20u);
    st8((c.r[1].w[0] + 4962u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FF50u); st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037FF50u) [[unlikely]] return; }
L_0037FF50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FF58u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037FF58u) [[unlikely]] return; }
L_0037FF58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FF60u);  if (depth < kMaxDepth) unit_0098(c, 529u, depth + 1u); else { c.pc = 0x00363720u; return; } if (c.pc != 0x0037FF60u) [[unlikely]] return; }
L_0037FF60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (t) { goto L_0037FF78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FF70u);  if (depth < kMaxDepth) unit_0098(c, 603u, depth + 1u); else { c.pc = 0x00363DA0u; return; } if (c.pc != 0x0037FF70u) [[unlikely]] return; }
L_0037FF70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037FF78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FF80u); c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (depth < kMaxDepth) unit_0098(c, 606u, depth + 1u); else { c.pc = 0x00363E50u; return; } if (c.pc != 0x0037FF80u) [[unlikely]] return; }
L_0037FF80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037FFA0; } }
L_0037FF88:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_0037FF8C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0037FFA0; } }
    goto L_0037FF98;
L_0037FF94:
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0037FF98:
    set32(c.r[16], 0u - 1u);
    c.budget -= 1;
L_0037FF9C:
    c.budget -= 1;
L_0037FFA0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037FFC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    set32(c.r[3], 0u + 200u);
    st8((c.r[1].w[0] + 5085u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5086u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[1].w[0] + 5084u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 15u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st16((c.r[1].w[0] + 4964u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1860u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    c.budget -= 12;
L_0037FFF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[1].w[0] + 4966u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
}

}
