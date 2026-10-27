#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B1[4096] = {
    1, 0, 0, 2, 3, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0,
    0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 16,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0,
    20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0,
    0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 33, 0, 0,
    0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0,
    36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 41,
    0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51,
    0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 56, 0, 57, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 60, 0, 61,
    0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65,
    0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0,
    0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78,
    0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 85, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92,
    0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 112,
    0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0,
    0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0,
    135, 0, 0, 136, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0,
    0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 0, 0,
    0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0,
    158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 166, 0, 167, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170,
    0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 176, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182,
    0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 188, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0,
    0, 0, 197, 0, 198, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 0, 0, 213, 0, 214, 0, 215, 0, 0,
    0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 0, 0, 220, 0, 221, 0, 222, 0, 0,
    0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0,
    0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 234, 0, 235, 0, 0, 236,
    0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 246, 0, 0, 0, 0, 247, 0, 0, 248,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0,
    0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0,
    261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0,
    0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 295, 0, 296, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0,
    299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 307, 0, 308, 0, 309, 0, 310,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0,
    0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0,
    0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321,
    0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 326, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 333, 0, 334, 0, 335, 0, 336, 0, 337, 0, 0, 338, 0,
    0, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 342, 0, 343, 0, 344, 0, 345, 0, 346, 0, 0, 347, 0, 0, 0,
    0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 351, 0, 352, 0, 353, 0, 354, 0, 355, 0, 0, 356, 0,
    0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 361, 0, 362, 0, 0,
    363, 0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 367, 0, 368, 0,
    0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 372, 0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 378, 0, 379, 0, 380, 0,
    0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 385, 0, 386, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0,
    393, 0, 394, 0, 395, 0, 396, 0, 397, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 405, 0, 0, 406, 0, 0, 407, 0, 0, 0,
    0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0,
    0, 0, 412, 0, 413, 0, 0, 0, 414, 0, 0, 0, 415, 0, 416, 0, 417, 0, 0, 0, 418, 0, 0, 0, 0, 419, 0, 0, 420, 0, 0, 0,
    421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 427, 0, 428, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    432, 0, 433, 0, 434, 0, 435, 0, 436, 0, 437, 0, 438, 0, 439, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444,
    0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 447, 0, 448, 0, 449, 0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0,
};

void unit_00B1(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003C4000;
    case 2u: goto L_003C400C;
    case 3u: goto L_003C4010;
    case 4u: goto L_003C4028;
    case 5u: goto L_003C4034;
    case 6u: goto L_003C4040;
    case 7u: goto L_003C4048;
    case 8u: goto L_003C4074;
    case 9u: goto L_003C4084;
    case 10u: goto L_003C4094;
    case 11u: goto L_003C414C;
    case 12u: goto L_003C4190;
    case 13u: goto L_003C41C0;
    case 14u: goto L_003C41E8;
    case 15u: goto L_003C41F4;
    case 16u: goto L_003C41FC;
    case 17u: goto L_003C424C;
    case 18u: goto L_003C42D8;
    case 19u: goto L_003C42EC;
    case 20u: goto L_003C4300;
    case 21u: goto L_003C433C;
    case 22u: goto L_003C4360;
    case 23u: goto L_003C438C;
    case 24u: goto L_003C43A0;
    case 25u: goto L_003C43AC;
    case 26u: goto L_003C43CC;
    case 27u: goto L_003C43DC;
    case 28u: goto L_003C43F0;
    case 29u: goto L_003C4404;
    case 30u: goto L_003C4424;
    case 31u: goto L_003C4458;
    case 32u: goto L_003C4468;
    case 33u: goto L_003C4474;
    case 34u: goto L_003C4490;
    case 35u: goto L_003C44E4;
    case 36u: goto L_003C4500;
    case 37u: goto L_003C452C;
    case 38u: goto L_003C454C;
    case 39u: goto L_003C455C;
    case 40u: goto L_003C4570;
    case 41u: goto L_003C457C;
    case 42u: goto L_003C458C;
    case 43u: goto L_003C459C;
    case 44u: goto L_003C45C4;
    case 45u: goto L_003C45D0;
    case 46u: goto L_003C4600;
    case 47u: goto L_003C4660;
    case 48u: goto L_003C46A0;
    case 49u: goto L_003C46B0;
    case 50u: goto L_003C46F4;
    case 51u: goto L_003C46FC;
    case 52u: goto L_003C4704;
    case 53u: goto L_003C470C;
    case 54u: goto L_003C472C;
    case 55u: goto L_003C4734;
    case 56u: goto L_003C473C;
    case 57u: goto L_003C4744;
    case 58u: goto L_003C4758;
    case 59u: goto L_003C4760;
    case 60u: goto L_003C4774;
    case 61u: goto L_003C477C;
    case 62u: goto L_003C4794;
    case 63u: goto L_003C479C;
    case 64u: goto L_003C47C0;
    case 65u: goto L_003C47FC;
    case 66u: goto L_003C4818;
    case 67u: goto L_003C4820;
    case 68u: goto L_003C4840;
    case 69u: goto L_003C4850;
    case 70u: goto L_003C48A0;
    case 71u: goto L_003C48BC;
    case 72u: goto L_003C48D4;
    case 73u: goto L_003C48E4;
    case 74u: goto L_003C48F8;
    case 75u: goto L_003C4908;
    case 76u: goto L_003C491C;
    case 77u: goto L_003C4950;
    case 78u: goto L_003C497C;
    case 79u: goto L_003C499C;
    case 80u: goto L_003C49D0;
    case 81u: goto L_003C49F0;
    case 82u: goto L_003C4A70;
    case 83u: goto L_003C4A98;
    case 84u: goto L_003C4AA0;
    case 85u: goto L_003C4AA8;
    case 86u: goto L_003C4AB8;
    case 87u: goto L_003C4AC4;
    case 88u: goto L_003C4B10;
    case 89u: goto L_003C4B1C;
    case 90u: goto L_003C4B40;
    case 91u: goto L_003C4B6C;
    case 92u: goto L_003C4B7C;
    case 93u: goto L_003C4B88;
    case 94u: goto L_003C4BA0;
    case 95u: goto L_003C4BAC;
    case 96u: goto L_003C4BC8;
    case 97u: goto L_003C4BDC;
    case 98u: goto L_003C4C1C;
    case 99u: goto L_003C4C2C;
    case 100u: goto L_003C4C60;
    case 101u: goto L_003C4C8C;
    case 102u: goto L_003C4CDC;
    case 103u: goto L_003C4CE8;
    case 104u: goto L_003C4D10;
    case 105u: goto L_003C4D4C;
    case 106u: goto L_003C4D80;
    case 107u: goto L_003C4DA0;
    case 108u: goto L_003C4E34;
    case 109u: goto L_003C4E40;
    case 110u: goto L_003C4E68;
    case 111u: goto L_003C4E70;
    case 112u: goto L_003C4E7C;
    case 113u: goto L_003C4E88;
    case 114u: goto L_003C4E98;
    case 115u: goto L_003C4EB0;
    case 116u: goto L_003C4F20;
    case 117u: goto L_003C4F30;
    case 118u: goto L_003C4F3C;
    case 119u: goto L_003C4F60;
    case 120u: goto L_003C4F8C;
    case 121u: goto L_003C4FB4;
    case 122u: goto L_003C4FC0;
    case 123u: goto L_003C4FF0;
    case 124u: goto L_003C5014;
    case 125u: goto L_003C5024;
    case 126u: goto L_003C5038;
    case 127u: goto L_003C5040;
    case 128u: goto L_003C5060;
    case 129u: goto L_003C5080;
    case 130u: goto L_003C50A8;
    case 131u: goto L_003C50BC;
    case 132u: goto L_003C50D0;
    case 133u: goto L_003C50DC;
    case 134u: goto L_003C50EC;
    case 135u: goto L_003C5100;
    case 136u: goto L_003C510C;
    case 137u: goto L_003C5118;
    case 138u: goto L_003C5128;
    case 139u: goto L_003C513C;
    case 140u: goto L_003C5160;
    case 141u: goto L_003C51A4;
    case 142u: goto L_003C51BC;
    case 143u: goto L_003C51CC;
    case 144u: goto L_003C51DC;
    case 145u: goto L_003C51F4;
    case 146u: goto L_003C5204;
    case 147u: goto L_003C522C;
    case 148u: goto L_003C5240;
    case 149u: goto L_003C5258;
    case 150u: goto L_003C5260;
    case 151u: goto L_003C5284;
    case 152u: goto L_003C529C;
    case 153u: goto L_003C52B0;
    case 154u: goto L_003C52C4;
    case 155u: goto L_003C52D0;
    case 156u: goto L_003C52DC;
    case 157u: goto L_003C52EC;
    case 158u: goto L_003C5300;
    case 159u: goto L_003C5320;
    case 160u: goto L_003C5394;
    case 161u: goto L_003C53AC;
    case 162u: goto L_003C53BC;
    case 163u: goto L_003C540C;
    case 164u: goto L_003C5418;
    case 165u: goto L_003C542C;
    case 166u: goto L_003C5438;
    case 167u: goto L_003C5440;
    case 168u: goto L_003C5454;
    case 169u: goto L_003C5460;
    case 170u: goto L_003C547C;
    case 171u: goto L_003C5488;
    case 172u: goto L_003C5520;
    case 173u: goto L_003C5554;
    case 174u: goto L_003C5560;
    case 175u: goto L_003C5580;
    case 176u: goto L_003C558C;
    case 177u: goto L_003C5598;
    case 178u: goto L_003C55A8;
    case 179u: goto L_003C55BC;
    case 180u: goto L_003C55D4;
    case 181u: goto L_003C55E8;
    case 182u: goto L_003C55FC;
    case 183u: goto L_003C5608;
    case 184u: goto L_003C5618;
    case 185u: goto L_003C5630;
    case 186u: goto L_003C5638;
    case 187u: goto L_003C5658;
    case 188u: goto L_003C5688;
    case 189u: goto L_003C5694;
    case 190u: goto L_003C56A4;
    case 191u: goto L_003C56B4;
    case 192u: goto L_003C56C8;
    case 193u: goto L_003C56F0;
    case 194u: goto L_003C5744;
    case 195u: goto L_003C5760;
    case 196u: goto L_003C5770;
    case 197u: goto L_003C5788;
    case 198u: goto L_003C5790;
    case 199u: goto L_003C5798;
    case 200u: goto L_003C57A4;
    case 201u: goto L_003C57C0;
    case 202u: goto L_003C57FC;
    case 203u: goto L_003C5848;
    case 204u: goto L_003C5864;
    case 205u: goto L_003C58A0;
    case 206u: goto L_003C58E8;
    case 207u: goto L_003C5950;
    case 208u: goto L_003C59B0;
    case 209u: goto L_003C5A10;
    case 210u: goto L_003C5A30;
    case 211u: goto L_003C5A4C;
    case 212u: goto L_003C5A54;
    case 213u: goto L_003C5A64;
    case 214u: goto L_003C5A6C;
    case 215u: goto L_003C5A74;
    case 216u: goto L_003C5A90;
    case 217u: goto L_003C5AB0;
    case 218u: goto L_003C5ACC;
    case 219u: goto L_003C5AD4;
    case 220u: goto L_003C5AE4;
    case 221u: goto L_003C5AEC;
    case 222u: goto L_003C5AF4;
    case 223u: goto L_003C5B10;
    case 224u: goto L_003C5B2C;
    case 225u: goto L_003C5B58;
    case 226u: goto L_003C5B90;
    case 227u: goto L_003C5BC0;
    case 228u: goto L_003C5BF8;
    case 229u: goto L_003C5C10;
    case 230u: goto L_003C5C20;
    case 231u: goto L_003C5C3C;
    case 232u: goto L_003C5C48;
    case 233u: goto L_003C5C58;
    case 234u: goto L_003C5C68;
    case 235u: goto L_003C5C70;
    case 236u: goto L_003C5C7C;
    case 237u: goto L_003C5C88;
    case 238u: goto L_003C5CA0;
    case 239u: goto L_003C5CAC;
    case 240u: goto L_003C5CB8;
    case 241u: goto L_003C5D20;
    case 242u: goto L_003C5DB0;
    case 243u: goto L_003C5E28;
    case 244u: goto L_003C5E48;
    case 245u: goto L_003C5E54;
    case 246u: goto L_003C5E5C;
    case 247u: goto L_003C5E70;
    case 248u: goto L_003C5E7C;
    case 249u: goto L_003C5F20;
    case 250u: goto L_003C5FD0;
    case 251u: goto L_003C5FF0;
    case 252u: goto L_003C6020;
    case 253u: goto L_003C603C;
    case 254u: goto L_003C6068;
    case 255u: goto L_003C6094;
    case 256u: goto L_003C60B0;
    case 257u: goto L_003C60D8;
    case 258u: goto L_003C60F0;
    case 259u: goto L_003C6110;
    case 260u: goto L_003C6160;
    case 261u: goto L_003C6180;
    case 262u: goto L_003C6264;
    case 263u: goto L_003C6290;
    case 264u: goto L_003C62A8;
    case 265u: goto L_003C6320;
    case 266u: goto L_003C6350;
    case 267u: goto L_003C6380;
    case 268u: goto L_003C63D0;
    case 269u: goto L_003C6400;
    case 270u: goto L_003C6428;
    case 271u: goto L_003C6434;
    case 272u: goto L_003C6474;
    case 273u: goto L_003C6490;
    case 274u: goto L_003C64D0;
    case 275u: goto L_003C64DC;
    case 276u: goto L_003C6520;
    case 277u: goto L_003C6580;
    case 278u: goto L_003C65B8;
    case 279u: goto L_003C65D8;
    case 280u: goto L_003C6600;
    case 281u: goto L_003C6700;
    case 282u: goto L_003C6720;
    case 283u: goto L_003C6750;
    case 284u: goto L_003C6780;
    case 285u: goto L_003C6798;
    case 286u: goto L_003C67A8;
    case 287u: goto L_003C67B0;
    case 288u: goto L_003C67D4;
    case 289u: goto L_003C67DC;
    case 290u: goto L_003C67E8;
    case 291u: goto L_003C6810;
    case 292u: goto L_003C6820;
    case 293u: goto L_003C6830;
    case 294u: goto L_003C6844;
    case 295u: goto L_003C684C;
    case 296u: goto L_003C6854;
    case 297u: goto L_003C6860;
    case 298u: goto L_003C686C;
    case 299u: goto L_003C6880;
    case 300u: goto L_003C68A0;
    case 301u: goto L_003C68D0;
    case 302u: goto L_003C6914;
    case 303u: goto L_003C691C;
    case 304u: goto L_003C695C;
    case 305u: goto L_003C69A0;
    case 306u: goto L_003C6A5C;
    case 307u: goto L_003C6A64;
    case 308u: goto L_003C6A6C;
    case 309u: goto L_003C6A74;
    case 310u: goto L_003C6A7C;
    case 311u: goto L_003C6AF0;
    case 312u: goto L_003C6AF8;
    case 313u: goto L_003C6B10;
    case 314u: goto L_003C6B38;
    case 315u: goto L_003C6B78;
    case 316u: goto L_003C6B88;
    case 317u: goto L_003C6BA8;
    case 318u: goto L_003C6BB4;
    case 319u: goto L_003C6BCC;
    case 320u: goto L_003C6BE0;
    case 321u: goto L_003C6BFC;
    case 322u: goto L_003C6C08;
    case 323u: goto L_003C6C1C;
    case 324u: goto L_003C6C2C;
    case 325u: goto L_003C6C44;
    case 326u: goto L_003C6C4C;
    case 327u: goto L_003C6C58;
    case 328u: goto L_003C6C68;
    case 329u: goto L_003C6C90;
    case 330u: goto L_003C6C9C;
    case 331u: goto L_003C6CAC;
    case 332u: goto L_003C6CC4;
    case 333u: goto L_003C6CCC;
    case 334u: goto L_003C6CD4;
    case 335u: goto L_003C6CDC;
    case 336u: goto L_003C6CE4;
    case 337u: goto L_003C6CEC;
    case 338u: goto L_003C6CF8;
    case 339u: goto L_003C6D14;
    case 340u: goto L_003C6D24;
    case 341u: goto L_003C6D3C;
    case 342u: goto L_003C6D44;
    case 343u: goto L_003C6D4C;
    case 344u: goto L_003C6D54;
    case 345u: goto L_003C6D5C;
    case 346u: goto L_003C6D64;
    case 347u: goto L_003C6D70;
    case 348u: goto L_003C6D84;
    case 349u: goto L_003C6D9C;
    case 350u: goto L_003C6DC4;
    case 351u: goto L_003C6DCC;
    case 352u: goto L_003C6DD4;
    case 353u: goto L_003C6DDC;
    case 354u: goto L_003C6DE4;
    case 355u: goto L_003C6DEC;
    case 356u: goto L_003C6DF8;
    case 357u: goto L_003C6E1C;
    case 358u: goto L_003C6E2C;
    case 359u: goto L_003C6E54;
    case 360u: goto L_003C6E64;
    case 361u: goto L_003C6E6C;
    case 362u: goto L_003C6E74;
    case 363u: goto L_003C6E80;
    case 364u: goto L_003C6E94;
    case 365u: goto L_003C6EA8;
    case 366u: goto L_003C6EE8;
    case 367u: goto L_003C6EF0;
    case 368u: goto L_003C6EF8;
    case 369u: goto L_003C6F08;
    case 370u: goto L_003C6F38;
    case 371u: goto L_003C6FB0;
    case 372u: goto L_003C6FB8;
    case 373u: goto L_003C6FC0;
    case 374u: goto L_003C6FE0;
    case 375u: goto L_003C7020;
    case 376u: goto L_003C7030;
    case 377u: goto L_003C7048;
    case 378u: goto L_003C7068;
    case 379u: goto L_003C7070;
    case 380u: goto L_003C7078;
    case 381u: goto L_003C7090;
    case 382u: goto L_003C70B0;
    case 383u: goto L_003C70C4;
    case 384u: goto L_003C70D4;
    case 385u: goto L_003C70DC;
    case 386u: goto L_003C70E4;
    case 387u: goto L_003C7120;
    case 388u: goto L_003C7134;
    case 389u: goto L_003C7150;
    case 390u: goto L_003C7160;
    case 391u: goto L_003C71C0;
    case 392u: goto L_003C71E8;
    case 393u: goto L_003C7200;
    case 394u: goto L_003C7208;
    case 395u: goto L_003C7210;
    case 396u: goto L_003C7218;
    case 397u: goto L_003C7220;
    case 398u: goto L_003C7228;
    case 399u: goto L_003C7240;
    case 400u: goto L_003C7260;
    case 401u: goto L_003C7270;
    case 402u: goto L_003C72A4;
    case 403u: goto L_003C72B8;
    case 404u: goto L_003C72D0;
    case 405u: goto L_003C72D8;
    case 406u: goto L_003C72E4;
    case 407u: goto L_003C72F0;
    case 408u: goto L_003C7308;
    case 409u: goto L_003C7348;
    case 410u: goto L_003C7350;
    case 411u: goto L_003C7370;
    case 412u: goto L_003C7388;
    case 413u: goto L_003C7390;
    case 414u: goto L_003C73A0;
    case 415u: goto L_003C73B0;
    case 416u: goto L_003C73B8;
    case 417u: goto L_003C73C0;
    case 418u: goto L_003C73D0;
    case 419u: goto L_003C73E4;
    case 420u: goto L_003C73F0;
    case 421u: goto L_003C7400;
    case 422u: goto L_003C749C;
    case 423u: goto L_003C74B0;
    case 424u: goto L_003C7558;
    case 425u: goto L_003C75E0;
    case 426u: goto L_003C7710;
    case 427u: goto L_003C7810;
    case 428u: goto L_003C7818;
    case 429u: goto L_003C7820;
    case 430u: goto L_003C7848;
    case 431u: goto L_003C78EC;
    case 432u: goto L_003C7B00;
    case 433u: goto L_003C7B08;
    case 434u: goto L_003C7B10;
    case 435u: goto L_003C7B18;
    case 436u: goto L_003C7B20;
    case 437u: goto L_003C7B28;
    case 438u: goto L_003C7B30;
    case 439u: goto L_003C7B38;
    case 440u: goto L_003C7B40;
    case 441u: goto L_003C7B70;
    case 442u: goto L_003C7BD0;
    case 443u: goto L_003C7C30;
    case 444u: goto L_003C7C7C;
    case 445u: goto L_003C7C90;
    case 446u: goto L_003C7CB0;
    case 447u: goto L_003C7D10;
    case 448u: goto L_003C7D18;
    case 449u: goto L_003C7D20;
    case 450u: goto L_003C7D28;
    case 451u: goto L_003C7D40;
    case 452u: goto L_003C7ED0;
    case 453u: goto L_003C7FF8;
    default: bad_entry(c, 0x003C4000u); return;
    }
L_003C4000:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C400Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 68u, depth + 1u); else { c.pc = 0x003C4840u; return; } if (c.pc != 0x003C400Cu) [[unlikely]] return; }
L_003C400C:
    c.budget -= 1;
L_003C4010:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4028u); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_00B1(c, 69u, depth + 1u); else { c.pc = 0x003C4850u; return; } if (c.pc != 0x003C4028u) [[unlikely]] return; }
L_003C4028:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4034u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 77u, depth + 1u); else { c.pc = 0x003C4950u; return; } if (c.pc != 0x003C4034u) [[unlikely]] return; }
L_003C4034:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4040u); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x003C4040u) [[unlikely]] return; }
L_003C4040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4048u); set32(c.r[4], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x003C4048u) [[unlikely]] return; }
L_003C4048:
    c.f[1] = ld32((c.r[17].w[0] + 80u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 80u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003C40C0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4074u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00B1(c, 90u, depth + 1u); else { c.pc = 0x003C4B40u; return; } if (c.pc != 0x003C4074u) [[unlikely]] return; }
L_003C4074:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 32u);  if (t) { goto L_003C4088; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4084u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003C4084u) [[unlikely]] return; }
L_003C4084:
    c.r[16].d[0] = c.r[16].d[0] | 1ull;
    c.budget -= 1;
L_003C4088:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4094u); set32(c.r[19], c.r[29].w[0] + 84u);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x003C4094u) [[unlikely]] return; }
L_003C4094:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003C40C0; } }
    st32((c.r[18].w[0] + 36u), c.f[1]);
    c.r[16].d[0] = c.r[16].d[0] | 1ull;
    c.budget -= 2;
L_003C40C0:
    c.r[5].d[0] = ld16((c.r[18].w[0] + 560u));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 498u)));
    c.f[1] = ld32((c.r[17].w[0] + 80u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 0ull;
    c.r[16].d[0] = c.r[16].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[16].d[0] | c.r[4].d[0];  if (t) { goto L_003C40F8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C40F8:
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[16].d[0] = c.r[16].d[0] | c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003C4168; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.r[3].d[0] = c.r[16].d[0] & 1ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003C4158; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[18].w[0] + 48u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 255u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    st8((c.r[18].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDA30000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C414Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x003C414Cu) [[unlikely]] return; }
L_003C414C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C4168; } }
    c.budget -= 1;
L_003C4158:
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    st32((c.r[17].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 4;
L_003C4168:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003C4190:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C41C8; } }
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C41C0u); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x003C41C0u) [[unlikely]] return; }
L_003C41C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C4228; } }
L_003C41C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.f[0] = ld32((c.r[18].w[0] + 104u));
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C41E8u); st32((c.r[18].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_00B1(c, 77u, depth + 1u); else { c.pc = 0x003C4950u; return; } if (c.pc != 0x003C41E8u) [[unlikely]] return; }
L_003C41E8:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C41F4u); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x003C41F4u) [[unlikely]] return; }
L_003C41F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C41FCu); set32(c.r[4], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x003C41FCu) [[unlikely]] return; }
L_003C41FC:
    c.f[2] = ld32((c.r[17].w[0] + 80u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 80u), c.f[0]);  if (t) { goto L_003C4228; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003C4228:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C4290; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003C4260; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C424Cu); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 196u, depth + 1u); else { c.pc = 0x00146480u; return; } if (c.pc != 0x003C424Cu) [[unlikely]] return; }
L_003C424C:
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003C4260; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_003C4260:
    c.r[4].d[0] = ld16((c.r[18].w[0] + 560u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 498u)));
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[16].d[0] = c.r[16].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[16].d[0] = c.r[16].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003C4290; } }
    st32((c.r[18].w[0] + 108u), 0u);
    st32((c.r[18].w[0] + 104u), 0u);
    c.budget -= 3;
L_003C4290:
    c.f[2] = ld32((c.r[17].w[0] + 88u));
    c.f[1] = ld32((c.r[17].w[0] + 84u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 84u), c.f[1]);  if (t) { goto L_003C4340; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40F00000u);
    set32(c.r[2], 0u + 255u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[18].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 108u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C42D8u); st8((c.r[18].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x003C42D8u) [[unlikely]] return; }
L_003C42D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C42ECu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 64u, depth + 1u); else { c.pc = 0x003C47C0u; return; } if (c.pc != 0x003C42ECu) [[unlikely]] return; }
L_003C42EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    set32(c.r[4], c.r[18].w[0] + 32u);
    st32((c.r[17].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4300u); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x003C4300u) [[unlikely]] return; }
L_003C4300:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003C4340; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C433Cu); st32((c.r[17].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 64u, depth + 1u); else { c.pc = 0x003C47C0u; return; } if (c.pc != 0x003C433Cu) [[unlikely]] return; }
L_003C433C:
    c.budget -= 1;
L_003C4340:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C4360:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C438Cu); set32(c.r[4], c.r[18].w[0] + 128u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003C438Cu) [[unlikely]] return; }
L_003C438C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C43A0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 64u, depth + 1u); else { c.pc = 0x003C47C0u; return; } if (c.pc != 0x003C43A0u) [[unlikely]] return; }
L_003C43A0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C43ACu); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003C43ACu) [[unlikely]] return; }
L_003C43AC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 5u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C43CCu); set32(c.r[5], c.r[2].w[0] + 2000u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003C43CCu) [[unlikely]] return; }
L_003C43CC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C43DCu); set32(c.r[6], 0u + 288u);  if (depth < kMaxDepth) unit_002E(c, 328u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x003C43DCu) [[unlikely]] return; }
L_003C43DC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C43F0u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 179u, depth + 1u); else { c.pc = 0x001BA240u; return; } if (c.pc != 0x003C43F0u) [[unlikely]] return; }
L_003C43F0:
    c.f[1] = ld32((c.r[18].w[0] + 108u));
    c.f[0] = ld32((c.r[18].w[0] + 104u));
    c.f[12] = fp::add(c.f[0], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4404u); st32((c.r[18].w[0] + 104u), c.f[12]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x003C4404u) [[unlikely]] return; }
L_003C4404:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003C4448; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4424u); c.f[12] = ld32((c.r[18].w[0] + 104u));  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x003C4424u) [[unlikely]] return; }
L_003C4424:
    c.f[2] = ld32((c.r[18].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[2], c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 104u), c.f[0]);
    st32((c.r[18].w[0] + 108u), 0u);
    c.budget -= 9;
L_003C4448:
    set32(c.r[4], c.r[18].w[0] + 48u);
    set32(c.r[5], c.r[17].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4458u); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003C4458u) [[unlikely]] return; }
L_003C4458:
    c.f[12] = ld32((c.r[18].w[0] + 104u));
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4468u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x003C4468u) [[unlikely]] return; }
L_003C4468:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4474u); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x003C4474u) [[unlikely]] return; }
L_003C4474:
    c.f[1] = ld32((c.r[17].w[0] + 88u));
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.f[0] = ld32((c.r[17].w[0] + 92u));
    set32(c.r[5], c.r[17].w[0] + 64u);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4490u); st32((c.r[17].w[0] + 92u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x003C4490u) [[unlikely]] return; }
L_003C4490:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003C44C0; } }
    c.f[1] = ld32((c.r[17].w[0] + 92u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003C44E8; } }
L_003C44C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C44E4u); st32((c.r[17].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 64u, depth + 1u); else { c.pc = 0x003C47C0u; return; } if (c.pc != 0x003C44E4u) [[unlikely]] return; }
L_003C44E4:
    c.budget -= 1;
L_003C44E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003C4500:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C452Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003C452Cu) [[unlikely]] return; }
L_003C452C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 5u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C454Cu); set32(c.r[5], c.r[2].w[0] + 2000u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003C454Cu) [[unlikely]] return; }
L_003C454C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C455Cu); set32(c.r[6], 0u + 288u);  if (depth < kMaxDepth) unit_002E(c, 328u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x003C455Cu) [[unlikely]] return; }
L_003C455C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4570u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 179u, depth + 1u); else { c.pc = 0x001BA240u; return; } if (c.pc != 0x003C4570u) [[unlikely]] return; }
L_003C4570:
    set32(c.r[4], c.r[18].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C457Cu); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003C457Cu) [[unlikely]] return; }
L_003C457C:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C458Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 64u, depth + 1u); else { c.pc = 0x003C47C0u; return; } if (c.pc != 0x003C458Cu) [[unlikely]] return; }
L_003C458C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[17].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C459Cu); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003C459Cu) [[unlikely]] return; }
L_003C459C:
    c.f[0] = ld32((c.r[17].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C45C4u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x003C45C4u) [[unlikely]] return; }
L_003C45C4:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C45D0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x003C45D0u) [[unlikely]] return; }
L_003C45D0:
    c.f[2] = ld32((c.r[17].w[0] + 88u));
    c.f[1] = ld32((c.r[17].w[0] + 84u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 84u), c.f[1]);  if (t) { goto L_003C4640; } }
    set32(c.r[5], c.r[17].w[0] + 64u);
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4600u); st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003C4600u) [[unlikely]] return; }
L_003C4600:
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 336u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C4630; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] | 1536ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1236u), c.r[3].w[0]);  if (t) { goto L_003C4640; } }
    c.budget -= 1;
L_003C4630:
    set32(c.r[3], ld32((c.r[16].w[0] + 1236u)));
    c.r[3].d[0] = c.r[3].d[0] | 96ull;
    st32((c.r[16].w[0] + 1236u), c.r[3].w[0]);
    c.budget -= 4;
L_003C4640:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003C4660:
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 750u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C4680; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003C4698; } }
L_003C4680:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003C4698; } }
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003C4698:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C46A0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_003C46B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 6u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C46F4u); set32(c.r[5], c.r[2].w[0] + 4032u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x003C46F4u) [[unlikely]] return; }
L_003C46F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C46FCu); set32(c.r[4], c.r[17].w[0] + 304u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003C46FCu) [[unlikely]] return; }
L_003C46FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4704u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x003C4704u) [[unlikely]] return; }
L_003C4704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C470Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x003C470Cu) [[unlikely]] return; }
L_003C470C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[7], 0u + 7u);
    set32(c.r[5], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[2], 0u + 6u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C472Cu); if (c.r[3].d[0] == 0) c.r[7].d[0] = c.r[2].d[0];  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x003C472Cu) [[unlikely]] return; }
L_003C472C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4734u); set32(c.r[4], ld32((c.r[17].w[0] + 188u)));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x003C4734u) [[unlikely]] return; }
L_003C4734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C473Cu); set32(c.r[4], c.r[17].w[0] + 304u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003C473Cu) [[unlikely]] return; }
L_003C473C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4744u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x003C4744u) [[unlikely]] return; }
L_003C4744:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 12288u);  if (t) { goto L_003C4768; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4758u); set32(c.r[18], 0u + 4u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x003C4758u) [[unlikely]] return; }
L_003C4758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4760u); set32(c.r[4], 0u - 8192u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x003C4760u) [[unlikely]] return; }
L_003C4760:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C4780; } }
L_003C4768:
    set32(c.r[4], 0u - 12288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4774u); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x003C4774u) [[unlikely]] return; }
L_003C4774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C477Cu); set32(c.r[4], 0u + 8192u);  if (depth < kMaxDepth) unit_0009(c, 192u, depth + 1u); else { c.pc = 0x00126E40u; return; } if (c.pc != 0x003C477Cu) [[unlikely]] return; }
L_003C477C:
    c.budget -= 1;
L_003C4780:
    set32(c.r[5], ld32((c.r[16].w[0] + 8664u)));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4794u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x003C4794u) [[unlikely]] return; }
L_003C4794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C479Cu); set32(c.r[4], ld32((c.r[17].w[0] + 188u)));  if (depth < kMaxDepth) unit_0068(c, 78u, depth + 1u); else { c.pc = 0x002A22C0u; return; } if (c.pc != 0x003C479Cu) [[unlikely]] return; }
L_003C479C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C47C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 5u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C47FCu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003C47FCu) [[unlikely]] return; }
L_003C47FC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 6u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4818u); set32(c.r[4], c.r[2].w[0] + 4032u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x003C4818u) [[unlikely]] return; }
L_003C4818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4820u); set32(c.r[4], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x003C4820u) [[unlikely]] return; }
L_003C4820:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C4840:
    set32(c.r[2], ld32((c.r[4].w[0] + 504u)));
    c.budget -= 3;
    { set32(c.r[6], c.r[2].w[0] + 64u);  goto L_003C4A70; }
L_003C4850:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[5].w[0] + 96u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; c.f[21] = c.f[12];  if (t) { goto L_003C4930; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_003C48A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C48A0u);  if (depth < kMaxDepth) unit_003E(c, 244u, depth + 1u); else { c.pc = 0x001FA4C0u; return; } if (c.pc != 0x003C48A0u) [[unlikely]] return; }
L_003C48A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0];  if (t) { goto L_003C48B0; } }
L_003C48A8:
    c.f[0] = c.r[2].w[0];
    c.f[20] = c.f[0];
    c.budget -= 2;
L_003C48B0:
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C48BCu); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x003C48BCu) [[unlikely]] return; }
L_003C48BC:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_003C4928; } }
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C48D4u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x003C48D4u) [[unlikely]] return; }
L_003C48D4:
    set32(c.r[6], c.r[18].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C48E4u); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003C48E4u) [[unlikely]] return; }
L_003C48E4:
    c.r[6].d[0] = c.r[16].d[0] << 48;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C48F8u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_002E(c, 328u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x003C48F8u) [[unlikely]] return; }
L_003C48F8:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[12] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4908u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x003C4908u) [[unlikely]] return; }
L_003C4908:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C491Cu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_002E(c, 179u, depth + 1u); else { c.pc = 0x001BA240u; return; } if (c.pc != 0x003C491Cu) [[unlikely]] return; }
L_003C491C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C4930; } }
    c.budget -= 1;
L_003C4928:
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_003C4930:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003C4950:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.f[12] = fp::add(c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C497Cu); st32((c.r[4].w[0] + 104u), c.f[12]);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x003C497Cu) [[unlikely]] return; }
L_003C497C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003C49C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C499Cu); c.f[12] = ld32((c.r[17].w[0] + 104u));  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x003C499Cu) [[unlikely]] return; }
L_003C499C:
    c.f[2] = ld32((c.r[17].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[2], c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    st32((c.r[17].w[0] + 108u), 0u);
    c.budget -= 9;
L_003C49C0:
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C49D0u); set32(c.r[4], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x003C49D0u) [[unlikely]] return; }
L_003C49D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C49F0:
    set32(c.r[2], ld32((c.r[4].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C4A08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C4A68; } }
    c.budget -= 1;
L_003C4A08:
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C4A20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C4A68; } }
    c.budget -= 1;
L_003C4A20:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C4A38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C4A68; } }
    c.budget -= 1;
L_003C4A38:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003C4A60; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C4A60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C4A68; } }
L_003C4A60:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_003C4A68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C4A70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4A98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003C4A98u) [[unlikely]] return; }
L_003C4A98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4AA0u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x003C4AA0u) [[unlikely]] return; }
L_003C4AA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4AA8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 175u, depth + 1u); else { c.pc = 0x001265A0u; return; } if (c.pc != 0x003C4AA8u) [[unlikely]] return; }
L_003C4AA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4AB8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x001023F8u; return; } if (c.pc != 0x003C4AB8u) [[unlikely]] return; }
L_003C4AB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4AC4u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003C4AC4u) [[unlikely]] return; }
L_003C4AC4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C4AF0; } }
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 64u), c.f[0]);  if (t) { goto L_003C4B08; } }
    c.budget -= 1;
L_003C4AF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0A00000u);
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.budget -= 6;
L_003C4B08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4B10u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 174u, depth + 1u); else { c.pc = 0x001264F0u; return; } if (c.pc != 0x003C4B10u) [[unlikely]] return; }
L_003C4B10:
    set32(c.r[5], c.r[17].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4B1Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 168u, depth + 1u); else { c.pc = 0x001262C0u; return; } if (c.pc != 0x003C4B1Cu) [[unlikely]] return; }
L_003C4B1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C4B40:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4B6Cu); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003C4B6Cu) [[unlikely]] return; }
L_003C4B6C:
    c.f[12] = ld32((c.r[28].w[0] - 26404u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4B7Cu); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x003C4B7Cu) [[unlikely]] return; }
L_003C4B7C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4B88u); set32(c.r[5], c.r[18].w[0] + 128u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x003C4B88u) [[unlikely]] return; }
L_003C4B88:
    c.f[0] = ld32((c.r[28].w[0] - 26400u));
    set32(c.r[5], c.r[16].w[0] + 16u);
    set32(c.r[16], c.r[29].w[0] + 112u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4BA0u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x003C4BA0u) [[unlikely]] return; }
L_003C4BA0:
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4BACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x003C4BACu) [[unlikely]] return; }
L_003C4BAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4BC8u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0012(c, 159u, depth + 1u); else { c.pc = 0x00149A80u; return; } if (c.pc != 0x003C4BC8u) [[unlikely]] return; }
L_003C4BC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003C4C38; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4BDCu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003C4BDCu) [[unlikely]] return; }
L_003C4BDC:
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    c.f[2] = ld32((c.r[29].w[0] + 64u));
    c.f[3] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003C4C38; } }
    c.f[12] = ld32((c.r[28].w[0] - 26400u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4C1Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x003C4C1Cu) [[unlikely]] return; }
L_003C4C1C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4C2Cu); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 208u, depth + 1u); else { c.pc = 0x00127470u; return; } if (c.pc != 0x003C4C2Cu) [[unlikely]] return; }
L_003C4C2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003C4C40; } }
    c.budget -= 1;
L_003C4C38:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003C4C40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003C4C60:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4C8Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 302u, depth + 1u); else { c.pc = 0x002ABE00u; return; } if (c.pc != 0x003C4C8Cu) [[unlikely]] return; }
L_003C4C8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003C4CE8; } }
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], 0u + 17u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], 0u + 36u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[3], c.r[3].w[0] + 19728u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[2], c.r[2].w[0] + 22384u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 176u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4CDCu); set32(c.r[7], 0u + 5u);  if (depth < kMaxDepth) unit_0043(c, 379u, depth + 1u); else { c.pc = 0x0020F5B0u; return; } if (c.pc != 0x003C4CDCu) [[unlikely]] return; }
L_003C4CDC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4CE8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 31u, depth + 1u); else { c.pc = 0x002AC5D0u; return; } if (c.pc != 0x003C4CE8u) [[unlikely]] return; }
L_003C4CE8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C4D10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003C4D60; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003C4D60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4D4Cu); st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 143u, depth + 1u); else { c.pc = 0x002AA1E0u; return; } if (c.pc != 0x003C4D4Cu) [[unlikely]] return; }
L_003C4D4C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003C4D60; } }
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_003C4D60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] - 19120u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4D80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C4D80u) [[unlikely]] return; }
L_003C4D80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C4DA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 16896u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 562u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 566u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 84u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[18].w[0] + 304u);  if (t) { goto L_003C4DF8; } }
    set32(c.r[2], 0u - 512u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_003C4E00; } }
    c.budget -= 1;
L_003C4DF8:
    set32(c.r[2], 0u + 512u);
    st32((c.r[18].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 2;
L_003C4E00:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[18].w[0] + 32u);
    st8((c.r[17].w[0] + 81u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 348u)));
    set32(c.r[3], c.r[3].w[0] << (c.r[7].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4E34u); st32((c.r[16].w[0] + 348u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 209u, depth + 1u); else { c.pc = 0x003C5A10u; return; } if (c.pc != 0x003C4E34u) [[unlikely]] return; }
L_003C4E34:
    set32(c.r[4], ld32((c.r[16].w[0] + 620u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 130u);  if (t) { goto L_003C4E60; } }
L_003C4E40:
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1u));
    c.r[3].d[0] = c.r[3].d[0] & 130ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C4E60; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C4E40u | kUnwind; return; } goto L_003C4E40; } }
L_003C4E60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4E68u); st32((c.r[17].w[0] + 88u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_0009(c, 171u, depth + 1u); else { c.pc = 0x00126350u; return; } if (c.pc != 0x003C4E68u) [[unlikely]] return; }
L_003C4E68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4E70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 177u, depth + 1u); else { c.pc = 0x00126740u; return; } if (c.pc != 0x003C4E70u) [[unlikely]] return; }
L_003C4E70:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4E7Cu); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_0000(c, 251u, depth + 1u); else { c.pc = 0x00102880u; return; } if (c.pc != 0x003C4E7Cu) [[unlikely]] return; }
L_003C4E7C:
    set32(c.r[4], c.r[18].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4E88u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003C4E88u) [[unlikely]] return; }
L_003C4E88:
    set32(c.r[5], 0u + 3u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4E98u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x003C4E98u) [[unlikely]] return; }
L_003C4E98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C4EB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 386u));
    st16((c.r[4].w[0] + 388u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[5].w[0] + 338u));
    st16((c.r[4].w[0] + 386u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 386u));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 388u));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[17].w[0] + 304u);  if (t) { goto L_003C4EF8; } }
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_003C4EF8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C4F68; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4F20u); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0045(c, 208u, depth + 1u); else { c.pc = 0x00216100u; return; } if (c.pc != 0x003C4F20u) [[unlikely]] return; }
L_003C4F20:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] - 19184u);
    c.budget -= 4;
L_003C4F30:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4F3Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 171u, depth + 1u); else { c.pc = 0x0017D5E0u; return; } if (c.pc != 0x003C4F3Cu) [[unlikely]] return; }
L_003C4F3C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C4F30u | kUnwind; return; } goto L_003C4F30; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 32u);  if (t) { goto L_003C4F60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4F60u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_004E(c, 110u, depth + 1u); else { c.pc = 0x00239510u; return; } if (c.pc != 0x003C4F60u) [[unlikely]] return; }
L_003C4F60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C4FD8; } }
L_003C4F68:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 19104u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4F8Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C4F8Cu) [[unlikely]] return; }
L_003C4F8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 192u);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4FB4u); st32((c.r[17].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 251u, depth + 1u); else { c.pc = 0x00102880u; return; } if (c.pc != 0x003C4FB4u) [[unlikely]] return; }
L_003C4FB4:
    set32(c.r[4], c.r[17].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C4FC0u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003C4FC0u) [[unlikely]] return; }
L_003C4FC0:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 769u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003C4FD8; } }
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003C4FD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C4FF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5014u); set32(c.r[6], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_00B1(c, 209u, depth + 1u); else { c.pc = 0x003C5A10u; return; } if (c.pc != 0x003C5014u) [[unlikely]] return; }
L_003C5014:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5024u); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003C5024u) [[unlikely]] return; }
L_003C5024:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D000000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5038u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x003C5038u) [[unlikely]] return; }
L_003C5038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5040u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x003C5040u) [[unlikely]] return; }
L_003C5040:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[12] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_003C5060; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5060u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x003C5060u) [[unlikely]] return; }
L_003C5060:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_003C50B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5080u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003C5080u) [[unlikely]] return; }
L_003C5080:
    c.r[3].d[0] = c.r[2].d[0] & 31ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - 19248u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C50A8u); st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00B1(c, 201u, depth + 1u); else { c.pc = 0x003C57C0u; return; } if (c.pc != 0x003C50A8u) [[unlikely]] return; }
L_003C50A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C50C0; } }
L_003C50B0:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C50BCu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x003C50BCu) [[unlikely]] return; }
L_003C50BC:
    c.budget -= 1;
L_003C50C0:
    set32(c.r[18], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C50D0u); set32(c.r[5], c.r[18].w[0] + 1296u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003C50D0u) [[unlikely]] return; }
L_003C50D0:
    set32(c.r[4], c.r[17].w[0] + 656u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C50DCu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003C50DCu) [[unlikely]] return; }
L_003C50DC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C50ECu); set32(c.r[6], c.r[18].w[0] + 1296u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003C50ECu) [[unlikely]] return; }
L_003C50EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5100u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x003C5100u) [[unlikely]] return; }
L_003C5100:
    set32(c.r[5], c.r[18].w[0] + 1296u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C510Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x003C510Cu) [[unlikely]] return; }
L_003C510C:
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5118u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x00127450u; return; } if (c.pc != 0x003C5118u) [[unlikely]] return; }
L_003C5118:
    set32(c.r[4], c.r[16].w[0] + 16u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5128u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_002E(c, 328u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x003C5128u) [[unlikely]] return; }
L_003C5128:
    set32(c.r[4], c.r[16].w[0] + 16u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C513Cu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_002E(c, 179u, depth + 1u); else { c.pc = 0x001BA240u; return; } if (c.pc != 0x003C513Cu) [[unlikely]] return; }
L_003C513C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C5160:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 504u)));
    st32((c.r[4].w[0] + 504u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 508u)));
    st32((c.r[4].w[0] + 508u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 504u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C51B0; } }
    set32(c.r[5], c.r[2].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C51A4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003C51A4u) [[unlikely]] return; }
L_003C51A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C51C0; } }
    c.budget -= 1;
L_003C51B0:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C51BCu); set32(c.r[5], c.r[18].w[0] + 1296u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003C51BCu) [[unlikely]] return; }
L_003C51BC:
    c.budget -= 1;
L_003C51C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C51CCu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00B1(c, 227u, depth + 1u); else { c.pc = 0x003C5BC0u; return; } if (c.pc != 0x003C51CCu) [[unlikely]] return; }
L_003C51CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003C51F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C51DCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 223u, depth + 1u); else { c.pc = 0x003C5B10u; return; } if (c.pc != 0x003C51DCu) [[unlikely]] return; }
L_003C51DC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003C51F8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C51F4u); set32(c.r[7], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00B1(c, 216u, depth + 1u); else { c.pc = 0x003C5A90u; return; } if (c.pc != 0x003C51F4u) [[unlikely]] return; }
L_003C51F4:
    c.budget -= 1;
L_003C51F8:
    set32(c.r[4], c.r[17].w[0] + 656u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5204u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003C5204u) [[unlikely]] return; }
L_003C5204:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 80u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 352u)));
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003C5230; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C522Cu); set32(c.r[6], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_00B1(c, 209u, depth + 1u); else { c.pc = 0x003C5A10u; return; } if (c.pc != 0x003C522Cu) [[unlikely]] return; }
L_003C522C:
    c.budget -= 1;
L_003C5230:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5240u); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003C5240u) [[unlikely]] return; }
L_003C5240:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5258u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x003C5258u) [[unlikely]] return; }
L_003C5258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5260u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x003C5260u) [[unlikely]] return; }
L_003C5260:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[17].w[0] + 32u);  if (t) { goto L_003C5290; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5284u); set32(c.r[5], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003C5284u) [[unlikely]] return; }
L_003C5284:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C52A0; } }
    c.budget -= 1;
L_003C5290:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C529Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x003C529Cu) [[unlikely]] return; }
L_003C529C:
    c.budget -= 1;
L_003C52A0:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C52B0u); set32(c.r[6], c.r[17].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003C52B0u) [[unlikely]] return; }
L_003C52B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C52C4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x003C52C4u) [[unlikely]] return; }
L_003C52C4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C52D0u); set32(c.r[5], c.r[17].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x003C52D0u) [[unlikely]] return; }
L_003C52D0:
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C52DCu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x00127450u; return; } if (c.pc != 0x003C52DCu) [[unlikely]] return; }
L_003C52DC:
    set32(c.r[4], c.r[16].w[0] + 16u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C52ECu); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_002E(c, 328u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x003C52ECu) [[unlikely]] return; }
L_003C52EC:
    set32(c.r[4], c.r[16].w[0] + 16u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5300u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_002E(c, 179u, depth + 1u); else { c.pc = 0x001BA240u; return; } if (c.pc != 0x003C5300u) [[unlikely]] return; }
L_003C5300:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C5320:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[3].w[0] + 304u);  if (t) { goto L_003C5370; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 52u), 0u);
    c.budget -= 6;
L_003C5370:
    set32(c.r[2], ld32((c.r[3].w[0] + 504u)));
    st32((c.r[18].w[0] + 504u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 508u)));
    st32((c.r[18].w[0] + 508u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 504u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[2].w[0] + 64u);  if (t) { goto L_003C53A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5394u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003C5394u) [[unlikely]] return; }
L_003C5394:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C53B0; } }
    c.budget -= 1;
L_003C53A0:
    set32(c.r[5], c.r[3].w[0] + 1296u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C53ACu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003C53ACu) [[unlikely]] return; }
L_003C53AC:
    c.budget -= 1;
L_003C53B0:
    set32(c.r[4], c.r[18].w[0] + 656u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C53BCu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003C53BCu) [[unlikely]] return; }
L_003C53BC:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C53D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003C56C8; } }
L_003C53D0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003C5400; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C5400; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C5420; } }
L_003C5400:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C540Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 241u, depth + 1u); else { c.pc = 0x003C5D20u; return; } if (c.pc != 0x003C540Cu) [[unlikely]] return; }
L_003C540C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5418u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 123u, depth + 1u); else { c.pc = 0x003C4FF0u; return; } if (c.pc != 0x003C5418u) [[unlikely]] return; }
L_003C5418:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C56C8; } }
L_003C5420:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C542Cu); set32(c.r[5], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003C542Cu) [[unlikely]] return; }
L_003C542C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5438u); set32(c.r[5], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x00127450u; return; } if (c.pc != 0x003C5438u) [[unlikely]] return; }
L_003C5438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5440u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003C5440u) [[unlikely]] return; }
L_003C5440:
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[16].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5454u); set32(c.r[6], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003C5454u) [[unlikely]] return; }
L_003C5454:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5460u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x003C5460u) [[unlikely]] return; }
L_003C5460:
    c.f[7] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[7]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003C5490; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C547Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 241u, depth + 1u); else { c.pc = 0x003C5D20u; return; } if (c.pc != 0x003C547Cu) [[unlikely]] return; }
L_003C547C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5488u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 123u, depth + 1u); else { c.pc = 0x003C4FF0u; return; } if (c.pc != 0x003C5488u) [[unlikely]] return; }
L_003C5488:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C56C8; } }
L_003C5490:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = ld32((c.r[29].w[0] + 116u));
    c.f[9] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    c.f[4] = c.r[3].w[0];
    c.f[8] = ld32((c.r[29].w[0] + 96u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x441C0000u);
    c.f[3] = fp::mul(c.f[2], c.f[2]);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[6] = fp::mul(c.f[9], c.f[9]);
    c.facc = fp::add(c.f[6], c.f[3]);
    c.f[5] = fp::mul(c.f[2], c.f[0]);
    c.f[11] = ld32((c.r[29].w[0] + 120u));
    c.f[1] = c.r[3].w[0];
    c.f[10] = ld32((c.r[29].w[0] + 104u));
    c.f[6] = fp::mul(c.f[9], c.f[8]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[2] = fp::mul(c.f[0], c.f[0]);
    c.f[20] = fp::add(c.facc, fp::mul(c.f[11], c.f[11]));
    c.facc = fp::add(c.f[6], c.f[5]);
    c.f[0] = c.r[3].w[0];
    c.f[5] = fp::add(c.facc, fp::mul(c.f[11], c.f[10]));
    c.f[3] = fp::mul(c.f[8], c.f[8]);
    c.facc = fp::add(c.f[3], c.f[2]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[10], c.f[10]));
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[21] = fp::mul(c.f[4], c.f[5]);
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[21], c.f[21]);
    c.f[12] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[7]));
    c.budget -= 34;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003C56C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5520u);  if (depth < kMaxDepth) unit_0009(c, 160u, depth + 1u); else { c.pc = 0x00126100u; return; } if (c.pc != 0x003C5520u) [[unlikely]] return; }
L_003C5520:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.f[22] = c.f[21] ^ fp::kSign;
    c.f[21] = c.f[0];
    c.f[20] = fp::mul(c.f[1], c.f[20]);
    c.f[0] = fp::add(c.f[22], c.f[0]);
    fpu_div(c, 12u, c.f[0], c.f[20]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5554u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x003C5554u) [[unlikely]] return; }
L_003C5554:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5560u); set32(c.r[5], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x003C5560u) [[unlikely]] return; }
L_003C5560:
    c.f[0] = fp::sub(c.f[22], c.f[21]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    fpu_div(c, 12u, c.f[0], c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5580u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x003C5580u) [[unlikely]] return; }
L_003C5580:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C558Cu); set32(c.r[5], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x003C558Cu) [[unlikely]] return; }
L_003C558C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5598u); set32(c.r[5], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x003C5598u) [[unlikely]] return; }
L_003C5598:
    c.f[20] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C55A8u); set32(c.r[5], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x003C55A8u) [[unlikely]] return; }
L_003C55A8:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_003C55C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C55BCu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003C55BCu) [[unlikely]] return; }
L_003C55BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C55D8; } }
    c.budget -= 1;
L_003C55C8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C55D4u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003C55D4u) [[unlikely]] return; }
L_003C55D4:
    c.budget -= 1;
L_003C55D8:
    set32(c.r[5], c.r[16].w[0] + 64u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C55E8u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003C55E8u) [[unlikely]] return; }
L_003C55E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C55FCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x003C55FCu) [[unlikely]] return; }
L_003C55FC:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5608u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x003C5608u) [[unlikely]] return; }
L_003C5608:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5618u); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003C5618u) [[unlikely]] return; }
L_003C5618:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5630u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x003C5630u) [[unlikely]] return; }
L_003C5630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5638u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x003C5638u) [[unlikely]] return; }
L_003C5638:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[12] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_003C5660; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5658u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x003C5658u) [[unlikely]] return; }
L_003C5658:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C5688; } }
L_003C5660:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_003C5688; } }
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5688u); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003C5688u) [[unlikely]] return; }
L_003C5688:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5694u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x003C5694u) [[unlikely]] return; }
L_003C5694:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[18].w[0] + 656u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C56A4u); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003C56A4u) [[unlikely]] return; }
L_003C56A4:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C56B4u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_002E(c, 328u, depth + 1u); else { c.pc = 0x001BB3A0u; return; } if (c.pc != 0x003C56B4u) [[unlikely]] return; }
L_003C56B4:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C56C8u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_002E(c, 179u, depth + 1u); else { c.pc = 0x001BA240u; return; } if (c.pc != 0x003C56C8u) [[unlikely]] return; }
L_003C56C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003C56F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 750u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C5718; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003C5748; } }
L_003C5718:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003C5748; } }
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 192u);
    st8((c.r[4].w[0] + 516u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5744u); set32(c.r[4], c.r[4].w[0] + 304u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003C5744u) [[unlikely]] return; }
L_003C5744:
    c.budget -= 1;
L_003C5748:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C5760:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AC040u | kUnwind; return; } [[clang::musttail]] return unit_006B(c, 5u, depth); }
L_003C5770:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5788u); set32(c.r[4], c.r[16].w[0] + 304u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003C5788u) [[unlikely]] return; }
L_003C5788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5790u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0009(c, 189u, depth + 1u); else { c.pc = 0x00126D40u; return; } if (c.pc != 0x003C5790u) [[unlikely]] return; }
L_003C5790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5798u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 199u, depth + 1u); else { c.pc = 0x001271D0u; return; } if (c.pc != 0x003C5798u) [[unlikely]] return; }
L_003C5798:
    set32(c.r[5], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C57A4u); set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  if (depth < kMaxDepth) unit_0068(c, 89u, depth + 1u); else { c.pc = 0x002A25C0u; return; } if (c.pc != 0x003C57A4u) [[unlikely]] return; }
L_003C57A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C57C0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 80u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C57FCu); set32(c.r[19], c.r[2].w[0] + 304u);  if (depth < kMaxDepth) unit_00B1(c, 249u, depth + 1u); else { c.pc = 0x003C5F20u; return; } if (c.pc != 0x003C57FCu) [[unlikely]] return; }
L_003C57FC:
    set32(c.r[4], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[4].d[0] = ~(c.r[4].d[0] | 0ull);
    c.r[18].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_003C5840; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);  if (t) { goto L_003C5830; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[3].d[0] | 38253ull;  if (t) { goto L_003C5838; } }
L_003C5830:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00070000u);
    c.r[18].d[0] = c.r[3].d[0] | 65535ull;
    c.budget -= 2;
L_003C5838:
    c.r[18].d[0] = c.r[18].d[0] & c.r[4].d[0];
    c.r[22].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_003C5840:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003C5848:
    set32(c.r[3], 0u + 1u);
    set32(c.r[17], c.r[3].w[0] << (c.r[16].w[0] & 31u));
    c.r[3].d[0] = c.r[18].d[0] & c.r[17].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_003C5880; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5864u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 249u, depth + 1u); else { c.pc = 0x003C5F20u; return; } if (c.pc != 0x003C5864u) [[unlikely]] return; }
L_003C5864:
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C5880; } }
    c.r[18].d[0] = c.r[18].d[0] ^ c.r[17].d[0];
    c.budget -= 2;
L_003C5880:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C5848u | kUnwind; return; } goto L_003C5848; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 128u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
L_003C58A0:
    set32(c.r[3], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[18].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C58C0; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 4;
L_003C58C0:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C58A0u | kUnwind; return; } goto L_003C58A0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] + c.r[29].w[0]);  if (t) { goto L_003C5980; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[3].w[0] + 128u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
L_003C58E8:
    set32(c.r[3], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[22].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C5908; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 4;
L_003C5908:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C58E8u | kUnwind; return; } goto L_003C58E8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);  if (t) { goto L_003C5980; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 24u)));
    c.r[22].d[0] = c.r[3].d[0] | 38253ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00070000u);
    c.r[4].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[3], c.r[16].w[0] + c.r[29].w[0]);
    set32(c.r[7], c.r[3].w[0] + 128u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    if (c.r[3].d[0] == 0) c.r[22].d[0] = c.r[4].d[0];
    set32(c.r[4], 0u + 1u);
    c.budget -= 12;
L_003C5950:
    set32(c.r[3], c.r[4].w[0] << (c.r[6].w[0] & 31u));
    c.r[3].d[0] = c.r[22].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C5970; } }
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 4;
L_003C5970:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C5950u | kUnwind; return; } goto L_003C5950; } }
L_003C5980:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003C59E0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 80u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].d[0] = ~(c.r[3].d[0] | 0ull);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[19].w[0] + 44u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 80u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C59B0u); st8((c.r[20].w[0] + 81u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003C59B0u) [[unlikely]] return; }
L_003C59B0:
    mmi::divu(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 128u));
    st8((c.r[20].w[0] + 80u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[19].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 12;
L_003C59E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003C5A10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 80u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5A30u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 249u, depth + 1u); else { c.pc = 0x003C5F20u; return; } if (c.pc != 0x003C5A30u) [[unlikely]] return; }
L_003C5A30:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5A4Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003C5A4Cu) [[unlikely]] return; }
L_003C5A4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5A54u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x003C5A54u) [[unlikely]] return; }
L_003C5A54:
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5A64u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x003C5A64u) [[unlikely]] return; }
L_003C5A64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5A6Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x003C5A6Cu) [[unlikely]] return; }
L_003C5A6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5A74u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x003C5A74u) [[unlikely]] return; }
L_003C5A74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C5A90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5AB0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 249u, depth + 1u); else { c.pc = 0x003C5F20u; return; } if (c.pc != 0x003C5AB0u) [[unlikely]] return; }
L_003C5AB0:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5ACCu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003C5ACCu) [[unlikely]] return; }
L_003C5ACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5AD4u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x003C5AD4u) [[unlikely]] return; }
L_003C5AD4:
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5AE4u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x003C5AE4u) [[unlikely]] return; }
L_003C5AE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5AECu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 196u, depth + 1u); else { c.pc = 0x00126FA0u; return; } if (c.pc != 0x003C5AECu) [[unlikely]] return; }
L_003C5AEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5AF4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x003C5AF4u) [[unlikely]] return; }
L_003C5AF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C5B10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 80u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5B2Cu); set32(c.r[16], c.r[2].w[0] + 304u);  if (depth < kMaxDepth) unit_00B1(c, 249u, depth + 1u); else { c.pc = 0x003C5F20u; return; } if (c.pc != 0x003C5B2Cu) [[unlikely]] return; }
L_003C5B2C:
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[6].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_003C5B48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003C5BA8; } }
L_003C5B48:
    c.r[16].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
L_003C5B58:
    set32(c.r[2], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C5B78; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 4;
L_003C5B78:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C5B58u | kUnwind; return; } goto L_003C5B58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5B90u);  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x003C5B90u) [[unlikely]] return; }
L_003C5B90:
    mmi::divu(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 32u));
    c.budget -= 6;
L_003C5BA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C5BC0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C5C18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5BF8u); set32(c.r[4], c.r[3].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003C5BF8u) [[unlikely]] return; }
L_003C5BF8:
    c.f[20] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.f[13] = c.r[2].w[0];
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5C10u); c.f[14] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003C5C10u) [[unlikely]] return; }
L_003C5C10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C5C40; } }
L_003C5C18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5C20u); set32(c.r[4], c.r[3].w[0] + 2048u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x003C5C20u) [[unlikely]] return; }
L_003C5C20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1010000u);
    c.f[20] = 0u;
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[13] = c.r[2].w[0];
    c.f[12] = c.f[20];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5C3Cu); c.f[14] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 195u, depth + 1u); else { c.pc = 0x00126F40u; return; } if (c.pc != 0x003C5C3Cu) [[unlikely]] return; }
L_003C5C3C:
    c.budget -= 1;
L_003C5C40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5C48u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x003C5C48u) [[unlikely]] return; }
L_003C5C48:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5C58u); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003C5C58u) [[unlikely]] return; }
L_003C5C58:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5C68u); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003C5C68u) [[unlikely]] return; }
L_003C5C68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5C70u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 211u, depth + 1u); else { c.pc = 0x001274F0u; return; } if (c.pc != 0x003C5C70u) [[unlikely]] return; }
L_003C5C70:
    c.f[21] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5C7Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003C5C7Cu) [[unlikely]] return; }
L_003C5C7C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5C88u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x003C5C88u) [[unlikely]] return; }
L_003C5C88:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_003C5CC0; } }
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5CA0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x003C5CA0u) [[unlikely]] return; }
L_003C5CA0:
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5CACu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x003C5CACu) [[unlikely]] return; }
L_003C5CAC:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5CB8u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 210u, depth + 1u); else { c.pc = 0x001274B0u; return; } if (c.pc != 0x003C5CB8u) [[unlikely]] return; }
L_003C5CB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[21] = c.f[0];  if (t) { goto L_003C5CD8; } }
L_003C5CC0:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C5CD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C5D00; } }
    c.budget -= 1;
L_003C5CD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_003C5CF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C5D00; } }
L_003C5CF8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003C5D00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003C5D20:
    set32(c.r[29], c.r[29].w[0] - 192u);
    set32(c.r[2], c.r[28].w[0] - 23804u);
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
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23836u)));
    c.r[4].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[19].w[0]));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C5D78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C5EF0; } }
L_003C5D78:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[23], c.r[3].w[0] + 304u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    st32((c.r[2].w[0] + 52u), 0u);
    c.r[2].d[0] = ld16((c.r[19].w[0]));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_003C5ED8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00830000u);
    set32(c.r[3], c.r[4].w[0] << 10);
    set32(c.r[2], c.r[2].w[0] + 26976u);
    set32(c.r[30], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_003C5DB0:
    set32(c.r[21], ld32((c.r[30].w[0])));
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_003C5EC0; } }
    c.r[2].d[0] = ld8((c.r[21].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C5EC0; } }
    c.r[3].d[0] = ld8((c.r[21].w[0] + 1u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003C5EC0; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C5EC0; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C5EC0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[2], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003C5EC0; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 562u));
    c.r[2].d[0] = c.r[3].d[0] & 17408ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C5EC0; } }
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    set32(c.r[2], 0u + 512u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003C5EC0; } }
    c.r[18].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 2;
L_003C5E28:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_003C5E90; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[21].d[0]; set32(c.r[4], c.r[29].w[0] + 176u);  if (t) { goto L_003C5EA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5E48u); set32(c.r[5], c.r[21].w[0] + 80u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x003C5E48u) [[unlikely]] return; }
L_003C5E48:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5E54u); set32(c.r[5], c.r[21].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 207u, depth + 1u); else { c.pc = 0x00127450u; return; } if (c.pc != 0x003C5E54u) [[unlikely]] return; }
L_003C5E54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5E5Cu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x003C5E5Cu) [[unlikely]] return; }
L_003C5E5C:
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[21].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5E70u); set32(c.r[6], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x003C5E70u) [[unlikely]] return; }
L_003C5E70:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5E7Cu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 215u, depth + 1u); else { c.pc = 0x001275D0u; return; } if (c.pc != 0x003C5E7Cu) [[unlikely]] return; }
L_003C5E7C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003C5EA0; } }
L_003C5E90:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C5E28u | kUnwind; return; } goto L_003C5E28; } }
L_003C5EA0:
    c.r[2].d[0] = c.r[20].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C5EC0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 52u), c.r[21].w[0]);  if (t) { goto L_003C5ED8; } }
L_003C5EC0:
    c.r[2].d[0] = ld16((c.r[19].w[0]));
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[2].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[30], c.r[30].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C5DB0u | kUnwind; return; } goto L_003C5DB0; } }
    c.budget -= 1;
L_003C5ED8:
    c.r[2].d[0] = ld16((c.r[19].w[0]));
    c.r[2].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C5EEC; } }
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C5EEC:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_003C5EF0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003C5F20:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[4].w[0] + 24u)));  if (t) { goto L_003C5F80; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C5F60; } }
    set32(c.r[3], c.r[5].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - 20208u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_003C5FC8; } }
    c.budget -= 1;
L_003C5F60:
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 21168u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_003C5FC8; } }
    c.budget -= 1;
L_003C5F80:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C5FB0; } }
    set32(c.r[3], c.r[5].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - 22128u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_003C5FC8; } }
    c.budget -= 1;
L_003C5FB0:
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 23088u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_003C5FC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C5FD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 340u)));
    set32(c.r[16], c.r[4].w[0] + 340u);
    set32(c.r[2], c.r[2].w[0] + 7u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C5FF0u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_004E(c, 146u, depth + 1u); else { c.pc = 0x0023A0A0u; return; } if (c.pc != 0x003C5FF0u) [[unlikely]] return; }
L_003C5FF0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C6010; } }
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_003C6010:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C6020:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C603Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00B1(c, 263u, depth + 1u); else { c.pc = 0x003C6290u; return; } if (c.pc != 0x003C603Cu) [[unlikely]] return; }
L_003C603C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[18].w[0] + 8676u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    st8((c.r[18].w[0] + 8677u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    st8((c.r[18].w[0] + 8678u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6068u); st8((c.r[18].w[0] + 8679u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00B1(c, 265u, depth + 1u); else { c.pc = 0x003C6320u; return; } if (c.pc != 0x003C6068u) [[unlikely]] return; }
L_003C6068:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[17].w[0] + 4u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C60A0; } }
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[4], c.r[18].w[0] + 1568u);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6094u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_00B1(c, 259u, depth + 1u); else { c.pc = 0x003C6110u; return; } if (c.pc != 0x003C6094u) [[unlikely]] return; }
L_003C6094:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C60B0; } }
    c.budget -= 1;
L_003C60A0:
    set32(c.r[4], c.r[18].w[0] + 1568u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C60B0u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003C60B0u) [[unlikely]] return; }
L_003C60B0:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 18u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 1u);  if (t) { goto L_003C60E0; } }
    set32(c.r[4], c.r[18].w[0] + 1584u);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C60D8u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_00B1(c, 259u, depth + 1u); else { c.pc = 0x003C6110u; return; } if (c.pc != 0x003C60D8u) [[unlikely]] return; }
L_003C60D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C60F0; } }
L_003C60E0:
    set32(c.r[4], c.r[18].w[0] + 1584u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C60F0u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003C60F0u) [[unlikely]] return; }
L_003C60F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C6110:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 10u));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 6u));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 2u));
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 4u));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 12u)));
    st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 14u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 8u));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 9u));
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003C6160:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[18].w[0] + 1568u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 8;
L_003C6180:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003C6268; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003C61E8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C61B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C6258; } }
    c.budget -= 1;
L_003C61B0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C6258; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C6258; } }
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6u)));
    st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003C6258; } }
    c.budget -= 1;
L_003C61E8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C6258; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C6248; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003C6258; } }
    st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003C6258; } }
L_003C6248:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6u)));
    st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_003C6258:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6264u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 276u, depth + 1u); else { c.pc = 0x003C6520u; return; } if (c.pc != 0x003C6264u) [[unlikely]] return; }
L_003C6264:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_003C6268:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C6180u | kUnwind; return; } goto L_003C6180; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C6290:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C62A8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8656u)));  if (depth < kMaxDepth) unit_003A(c, 56u, depth + 1u); else { c.pc = 0x001E9320u; return; } if (c.pc != 0x003C62A8u) [[unlikely]] return; }
L_003C62A8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    c.r[5].d[0] = c.r[2].d[0] << 56;
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (t) { goto L_003C62E8; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[2], c.r[2].w[0] + 13136u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_003C630C; } }
L_003C62E8:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] - 11024u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
L_003C630C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C6320:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C633C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8684u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 2;
L_003C633C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C6350:
    c.r[2].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 4);  if (t) { goto L_003C6364; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003C636C; } }
L_003C6364:
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1569u)));
    c.budget -= 2;
L_003C636C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C6380:
    c.r[2].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C6398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C63C0; } }
    c.budget -= 1;
L_003C6398:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + 1568u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1568u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] > 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C63B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C63BC; } }
L_003C63B8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_003C63BC:
    c.budget -= 1;
L_003C63C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C63D0:
    c.r[2].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 4);  if (t) { goto L_003C63E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C63EC; } }
L_003C63E4:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 1574u)));
    c.budget -= 2;
L_003C63EC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C6400:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003C6478; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6428u);  if (depth < kMaxDepth) unit_00B1(c, 263u, depth + 1u); else { c.pc = 0x003C6290u; return; } if (c.pc != 0x003C6428u) [[unlikely]] return; }
L_003C6428:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6434u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 265u, depth + 1u); else { c.pc = 0x003C6320u; return; } if (c.pc != 0x003C6434u) [[unlikely]] return; }
L_003C6434:
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld16((c.r[6].w[0] + 4u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] << 4);  if (t) { goto L_003C6478; } }
    set32(c.r[3], 0u + 4u);
    set32(c.r[5], c.r[4].w[0] + c.r[17].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1569u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003C6478; } }
    set32(c.r[4], c.r[5].w[0] + 1568u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6474u); set32(c.r[5], c.r[6].w[0] + 4u);  if (depth < kMaxDepth) unit_00B1(c, 259u, depth + 1u); else { c.pc = 0x003C6110u; return; } if (c.pc != 0x003C6474u) [[unlikely]] return; }
L_003C6474:
    c.budget -= 1;
L_003C6478:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C6490:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C64C8; } }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0; c.r[1].d[0] = c.r[6].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_003C64C0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003C64F8; } }
L_003C64C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C6508; } }
L_003C64C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C64D0u);  if (depth < kMaxDepth) unit_00B1(c, 263u, depth + 1u); else { c.pc = 0x003C6290u; return; } if (c.pc != 0x003C64D0u) [[unlikely]] return; }
L_003C64D0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C64DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 265u, depth + 1u); else { c.pc = 0x003C6320u; return; } if (c.pc != 0x003C64DCu) [[unlikely]] return; }
L_003C64DC:
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = ld16((c.r[3].w[0] + 14u));
    c.budget -= 7;
L_003C64F8:
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st8((c.r[3].w[0] + 1569u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 4;
L_003C6508:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C6520:
    c.r[2].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C6538; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C6578; } }
    c.budget -= 1;
L_003C6538:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] + 1568u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1568u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_003C6558; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C6578; } }
L_003C6558:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003C6574; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003C6574; } }
L_003C6574:
    c.budget -= 1;
L_003C6578:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C6580:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003C65B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C65E0; } }
L_003C65B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C65B8u);  if (depth < kMaxDepth) unit_00B1(c, 276u, depth + 1u); else { c.pc = 0x003C6520u; return; } if (c.pc != 0x003C65B8u) [[unlikely]] return; }
L_003C65B8:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] > 0; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003C65D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C65E0; } }
L_003C65D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C65D8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 267u, depth + 1u); else { c.pc = 0x003C6380u; return; } if (c.pc != 0x003C65D8u) [[unlikely]] return; }
L_003C65D8:
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 2;
L_003C65E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C6600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003C6620; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C6708; } }
    c.budget -= 1;
L_003C6620:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + 1568u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1568u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] > 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C6640; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C6708; } }
L_003C6640:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003C6658; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C6708; } }
L_003C6658:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003C6670; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C6708; } }
L_003C6670:
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[6].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003C6698; } }
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_003C6698:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C66D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C66B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C66F0; } }
L_003C66B8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C66F8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003C66F8; } }
L_003C66D0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 14u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003C66F8; } }
L_003C66F0:
    st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_003C66F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6700u);  if (depth < kMaxDepth) unit_00B1(c, 276u, depth + 1u); else { c.pc = 0x003C6520u; return; } if (c.pc != 0x003C6700u) [[unlikely]] return; }
L_003C6700:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_003C6708:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C6720:
    c.r[1].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] << 4);  if (t) { goto L_003C6748; } }
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], 0u + 3u);
    st8((c.r[4].w[0] + 1568u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 1569u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 1576u), static_cast<std::uint16_t>(0u));
    c.budget -= 7;
L_003C6748:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C6750:
    set32(c.r[4], c.r[4].w[0] + 2132u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[2], c.r[2].w[0] + 22328u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003C4000u < 16384u) { entry = entries_00B1[(t - 0x003C4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003C6780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6798u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_00BE(c, 114u, depth + 1u); else { c.pc = 0x003F9DE0u; return; } if (c.pc != 0x003C6798u) [[unlikely]] return; }
L_003C6798:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C67B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C67A8u);  if (depth < kMaxDepth) unit_00B1(c, 414u, depth + 1u); else { c.pc = 0x003C73A0u; return; } if (c.pc != 0x003C67A8u) [[unlikely]] return; }
L_003C67A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C67B0u);  if (depth < kMaxDepth) unit_00B1(c, 418u, depth + 1u); else { c.pc = 0x003C73D0u; return; } if (c.pc != 0x003C67B0u) [[unlikely]] return; }
L_003C67B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C67F8; } }
L_003C67B8:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C67D4u); st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00B1(c, 414u, depth + 1u); else { c.pc = 0x003C73A0u; return; } if (c.pc != 0x003C67D4u) [[unlikely]] return; }
L_003C67D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C67DCu);  if (depth < kMaxDepth) unit_00B1(c, 418u, depth + 1u); else { c.pc = 0x003C73D0u; return; } if (c.pc != 0x003C67DCu) [[unlikely]] return; }
L_003C67DC:
    set32(c.r[4], 0u + 11u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C67E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 172u, depth + 1u); else { c.pc = 0x00409CF0u; return; } if (c.pc != 0x003C67E8u) [[unlikely]] return; }
L_003C67E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st32((c.r[1].w[0] + 8120u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_003C67F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C6810:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6820u);  if (depth < kMaxDepth) unit_00B1(c, 299u, depth + 1u); else { c.pc = 0x003C6880u; return; } if (c.pc != 0x003C6820u) [[unlikely]] return; }
L_003C6820:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C6830:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6844u); set32(c.r[4], ld32((c.r[1].w[0] + 8120u)));  if (depth < kMaxDepth) unit_00BE(c, 305u, depth + 1u); else { c.pc = 0x003FB5D0u; return; } if (c.pc != 0x003C6844u) [[unlikely]] return; }
L_003C6844:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C684Cu);  if (depth < kMaxDepth) unit_00B1(c, 414u, depth + 1u); else { c.pc = 0x003C73A0u; return; } if (c.pc != 0x003C684Cu) [[unlikely]] return; }
L_003C684C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6854u);  if (depth < kMaxDepth) unit_00B1(c, 418u, depth + 1u); else { c.pc = 0x003C73D0u; return; } if (c.pc != 0x003C6854u) [[unlikely]] return; }
L_003C6854:
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6860u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 154u, depth + 1u); else { c.pc = 0x003FA260u; return; } if (c.pc != 0x003C6860u) [[unlikely]] return; }
L_003C6860:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C686Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 154u, depth + 1u); else { c.pc = 0x003FA260u; return; } if (c.pc != 0x003C686Cu) [[unlikely]] return; }
L_003C686C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C6880:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] + 22352u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003C4000u < 16384u) { entry = entries_00B1[(t - 0x003C4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003C68A0:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 17u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 16u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 26u)));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 27u)));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5u)));
    c.r[11].d[0] = ld8((c.r[2].w[0] + 7u));
    c.budget -= 11;
    { set32(c.r[4], ld32((c.r[1].w[0] + 8120u)));  [[clang::musttail]] return unit_00C3(c, 13u, depth); }
L_003C68D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003C6A80; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C6900; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C6AE8; } }
    c.budget -= 1;
L_003C6900:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6914u); st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00AB(c, 295u, depth + 1u); else { c.pc = 0x003AF550u; return; } if (c.pc != 0x003C6914u) [[unlikely]] return; }
L_003C6914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C691Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 27u, depth + 1u); else { c.pc = 0x003C8690u; return; } if (c.pc != 0x003C691Cu) [[unlikely]] return; }
L_003C691C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 22u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003C6930; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003C6938; } }
L_003C6930:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003C6938:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 29u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C695Cu); st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00B1(c, 442u, depth + 1u); else { c.pc = 0x003C7BD0u; return; } if (c.pc != 0x003C695Cu) [[unlikely]] return; }
L_003C695C:
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[16].w[0] + 21u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 11472u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[6].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[6].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C69A0u); st8((c.r[16].w[0] + 26u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00B2(c, 36u, depth + 1u); else { c.pc = 0x003C9040u; return; } if (c.pc != 0x003C69A0u) [[unlikely]] return; }
L_003C69A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 26u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], c.r[2].w[0] + 14492u);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C6A00; } }
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 26u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C6A38; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 27u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003C6A38; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C6A38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003C6A38; } }
    c.budget -= 1;
L_003C6A00:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 26u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C6A38; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 27u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003C6A38; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C6A38; } }
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003C6A38:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[28].w[0] - 25708u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6A5Cu); st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00B1(c, 441u, depth + 1u); else { c.pc = 0x003C7B70u; return; } if (c.pc != 0x003C6A5Cu) [[unlikely]] return; }
L_003C6A5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6A64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 446u, depth + 1u); else { c.pc = 0x003C7CB0u; return; } if (c.pc != 0x003C6A64u) [[unlikely]] return; }
L_003C6A64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6A6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 421u, depth + 1u); else { c.pc = 0x003C7400u; return; } if (c.pc != 0x003C6A6Cu) [[unlikely]] return; }
L_003C6A6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6A74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 300u, depth + 1u); else { c.pc = 0x003C68A0u; return; } if (c.pc != 0x003C6A74u) [[unlikely]] return; }
L_003C6A74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6A7Cu);  if (depth < kMaxDepth) unit_00AB(c, 297u, depth + 1u); else { c.pc = 0x003AF580u; return; } if (c.pc != 0x003C6A7Cu) [[unlikely]] return; }
L_003C6A7C:
    c.budget -= 1;
L_003C6A80:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003C6AC0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[1].w[0] + 8120u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_003C6AE8; } }
    c.budget -= 1;
L_003C6AC0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], ld32((c.r[1].w[0] + 8120u)));
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 104u), c.f[0]);
    c.budget -= 10;
L_003C6AE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6AF0u);  if (depth < kMaxDepth) unit_00B1(c, 414u, depth + 1u); else { c.pc = 0x003C73A0u; return; } if (c.pc != 0x003C6AF0u) [[unlikely]] return; }
L_003C6AF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6AF8u);  if (depth < kMaxDepth) unit_00B1(c, 418u, depth + 1u); else { c.pc = 0x003C73D0u; return; } if (c.pc != 0x003C6AF8u) [[unlikely]] return; }
L_003C6AF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C6B10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[16], c.r[16].w[0] + 8120u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6B38u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00C3(c, 14u, depth + 1u); else { c.pc = 0x0040C190u; return; } if (c.pc != 0x003C6B38u) [[unlikely]] return; }
L_003C6B38:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 2u));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 11u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C6F58; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003C6F30; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C6F00; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C6B70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C6FB0; } }
L_003C6B70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6B78u);  if (depth < kMaxDepth) unit_00BE(c, 240u, depth + 1u); else { c.pc = 0x003FB040u; return; } if (c.pc != 0x003C6B78u) [[unlikely]] return; }
L_003C6B78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003C6BD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6B88u);  if (depth < kMaxDepth) unit_00B1(c, 445u, depth + 1u); else { c.pc = 0x003C7C90u; return; } if (c.pc != 0x003C6B88u) [[unlikely]] return; }
L_003C6B88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C6BC0; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 2u));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 165u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6BA8u); st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003C6BA8u) [[unlikely]] return; }
L_003C6BA8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6BB4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x003C6BB4u) [[unlikely]] return; }
L_003C6BB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C6FB0; } }
    c.budget -= 1;
L_003C6BC0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6BCCu); set32(c.r[5], 0u + 171u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003C6BCCu) [[unlikely]] return; }
L_003C6BCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C6FB0; } }
    c.budget -= 1;
L_003C6BD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6BE0u);  if (depth < kMaxDepth) unit_00BE(c, 241u, depth + 1u); else { c.pc = 0x003FB050u; return; } if (c.pc != 0x003C6BE0u) [[unlikely]] return; }
L_003C6BE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C6C10; } }
    set32(c.r[2], 0u + 10u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6BFCu); set32(c.r[5], 0u + 167u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003C6BFCu) [[unlikely]] return; }
L_003C6BFC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6C08u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x003C6C08u) [[unlikely]] return; }
L_003C6C08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C6FB0; } }
L_003C6C10:
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6C1Cu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003C6C1Cu) [[unlikely]] return; }
L_003C6C1C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6C2Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0049(c, 388u, depth + 1u); else { c.pc = 0x002278D0u; return; } if (c.pc != 0x003C6C2Cu) [[unlikely]] return; }
L_003C6C2C:
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003C6C60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6C44u); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003C6C44u) [[unlikely]] return; }
L_003C6C44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6C4Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 421u, depth + 1u); else { c.pc = 0x003C7400u; return; } if (c.pc != 0x003C6C4Cu) [[unlikely]] return; }
L_003C6C4C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6C58u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 55u, depth + 1u); else { c.pc = 0x003B0740u; return; } if (c.pc != 0x003C6C58u) [[unlikely]] return; }
L_003C6C58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C6FB0; } }
L_003C6C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6C68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 62u, depth + 1u); else { c.pc = 0x003B0A00u; return; } if (c.pc != 0x003C6C68u) [[unlikely]] return; }
L_003C6C68:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x006C0000u);  if (t) { goto L_003C6FB0; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 13520u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003C4000u < 16384u) { entry = entries_00B1[(t - 0x003C4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003C6C90:
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6C9Cu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003C6C9Cu) [[unlikely]] return; }
L_003C6C9C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6CACu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 385u, depth + 1u); else { c.pc = 0x00227830u; return; } if (c.pc != 0x003C6CACu) [[unlikely]] return; }
L_003C6CAC:
    st8((c.r[18].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003C6FB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6CC4u); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003C6CC4u) [[unlikely]] return; }
L_003C6CC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6CCCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 442u, depth + 1u); else { c.pc = 0x003C7BD0u; return; } if (c.pc != 0x003C6CCCu) [[unlikely]] return; }
L_003C6CCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6CD4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 441u, depth + 1u); else { c.pc = 0x003C7B70u; return; } if (c.pc != 0x003C6CD4u) [[unlikely]] return; }
L_003C6CD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6CDCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 443u, depth + 1u); else { c.pc = 0x003C7C30u; return; } if (c.pc != 0x003C6CDCu) [[unlikely]] return; }
L_003C6CDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6CE4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 446u, depth + 1u); else { c.pc = 0x003C7CB0u; return; } if (c.pc != 0x003C6CE4u) [[unlikely]] return; }
L_003C6CE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6CECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 300u, depth + 1u); else { c.pc = 0x003C68A0u; return; } if (c.pc != 0x003C6CECu) [[unlikely]] return; }
L_003C6CEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C6FB0; } }
    c.budget -= 1;
L_003C6CF8:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 19u)));
    c.r[1].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003C6FB0; } }
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 18u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6D14u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003C6D14u) [[unlikely]] return; }
L_003C6D14:
    set32(c.r[6], c.r[17].w[0] - 1u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6D24u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 385u, depth + 1u); else { c.pc = 0x00227830u; return; } if (c.pc != 0x003C6D24u) [[unlikely]] return; }
L_003C6D24:
    st8((c.r[18].w[0] + 18u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 18u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003C6FB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6D3Cu); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003C6D3Cu) [[unlikely]] return; }
L_003C6D3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6D44u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 442u, depth + 1u); else { c.pc = 0x003C7BD0u; return; } if (c.pc != 0x003C6D44u) [[unlikely]] return; }
L_003C6D44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6D4Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 441u, depth + 1u); else { c.pc = 0x003C7B70u; return; } if (c.pc != 0x003C6D4Cu) [[unlikely]] return; }
L_003C6D4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6D54u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 443u, depth + 1u); else { c.pc = 0x003C7C30u; return; } if (c.pc != 0x003C6D54u) [[unlikely]] return; }
L_003C6D54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6D5Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 446u, depth + 1u); else { c.pc = 0x003C7CB0u; return; } if (c.pc != 0x003C6D5Cu) [[unlikely]] return; }
L_003C6D5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6D64u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 300u, depth + 1u); else { c.pc = 0x003C68A0u; return; } if (c.pc != 0x003C6D64u) [[unlikely]] return; }
L_003C6D64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C6FB0; } }
    c.budget -= 1;
L_003C6D70:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[2], c.r[17].w[0] + c.r[18].w[0]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6D84u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003C6D84u) [[unlikely]] return; }
L_003C6D84:
    set32(c.r[3], c.r[17].w[0] + c.r[18].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 14u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6D9Cu); set32(c.r[6], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_0049(c, 385u, depth + 1u); else { c.pc = 0x00227830u; return; } if (c.pc != 0x003C6D9Cu) [[unlikely]] return; }
L_003C6D9C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st8((c.r[3].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003C6FB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6DC4u); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003C6DC4u) [[unlikely]] return; }
L_003C6DC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6DCCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 442u, depth + 1u); else { c.pc = 0x003C7BD0u; return; } if (c.pc != 0x003C6DCCu) [[unlikely]] return; }
L_003C6DCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6DD4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 441u, depth + 1u); else { c.pc = 0x003C7B70u; return; } if (c.pc != 0x003C6DD4u) [[unlikely]] return; }
L_003C6DD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6DDCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 443u, depth + 1u); else { c.pc = 0x003C7C30u; return; } if (c.pc != 0x003C6DDCu) [[unlikely]] return; }
L_003C6DDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6DE4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 446u, depth + 1u); else { c.pc = 0x003C7CB0u; return; } if (c.pc != 0x003C6DE4u) [[unlikely]] return; }
L_003C6DE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6DECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 300u, depth + 1u); else { c.pc = 0x003C68A0u; return; } if (c.pc != 0x003C6DECu) [[unlikely]] return; }
L_003C6DEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C6FB0; } }
    c.budget -= 1;
L_003C6DF8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 22u)));
    c.r[1].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003C6FB0; } }
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6E1Cu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003C6E1Cu) [[unlikely]] return; }
L_003C6E1C:
    set32(c.r[6], c.r[17].w[0] - 1u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6E2Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 385u, depth + 1u); else { c.pc = 0x00227830u; return; } if (c.pc != 0x003C6E2Cu) [[unlikely]] return; }
L_003C6E2C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st8((c.r[3].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003C6FB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6E54u); set32(c.r[5], 0u + 166u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003C6E54u) [[unlikely]] return; }
L_003C6E54:
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6E64u); st8((c.r[18].w[0] + 29u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00B1(c, 443u, depth + 1u); else { c.pc = 0x003C7C30u; return; } if (c.pc != 0x003C6E64u) [[unlikely]] return; }
L_003C6E64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6E6Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 446u, depth + 1u); else { c.pc = 0x003C7CB0u; return; } if (c.pc != 0x003C6E6Cu) [[unlikely]] return; }
L_003C6E6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6E74u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 300u, depth + 1u); else { c.pc = 0x003C68A0u; return; } if (c.pc != 0x003C6E74u) [[unlikely]] return; }
L_003C6E74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C6FB0; } }
    c.budget -= 1;
L_003C6E80:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 24u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6E94u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0049(c, 390u, depth + 1u); else { c.pc = 0x002278F0u; return; } if (c.pc != 0x003C6E94u) [[unlikely]] return; }
L_003C6E94:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 28u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6EA8u); set32(c.r[6], c.r[3].w[0] - 1u);  if (depth < kMaxDepth) unit_0049(c, 385u, depth + 1u); else { c.pc = 0x00227830u; return; } if (c.pc != 0x003C6EA8u) [[unlikely]] return; }
L_003C6EA8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st8((c.r[3].w[0] + 24u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 24u)));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_003C6FB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 11392u);
    set32(c.r[5], 0u + 166u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6EE8u); st8((c.r[18].w[0] + 27u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x003C6EE8u) [[unlikely]] return; }
L_003C6EE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6EF0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 446u, depth + 1u); else { c.pc = 0x003C7CB0u; return; } if (c.pc != 0x003C6EF0u) [[unlikely]] return; }
L_003C6EF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6EF8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 300u, depth + 1u); else { c.pc = 0x003C68A0u; return; } if (c.pc != 0x003C6EF8u) [[unlikely]] return; }
L_003C6EF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C6FB0; } }
L_003C6F00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6F08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 64u, depth + 1u); else { c.pc = 0x003B0A80u; return; } if (c.pc != 0x003C6F08u) [[unlikely]] return; }
L_003C6F08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003C6FB0; } }
    set32(c.r[2], c.r[28].w[0] - 25708u);
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003C6FB0; } }
L_003C6F30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6F38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B0B20u; return; } if (c.pc != 0x003C6F38u) [[unlikely]] return; }
L_003C6F38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C6FB0; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 2u));
    set32(c.r[2], 0u + 16u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003C6FB0; } }
L_003C6F58:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[2], 0u + 4u);  if (t) { goto L_003C6F88; } }
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 104u), 0u);  if (t) { goto L_003C6FB0; } }
    c.budget -= 1;
L_003C6F88:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 104u), c.f[0]);
    c.budget -= 10;
L_003C6FB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6FB8u);  if (depth < kMaxDepth) unit_00B1(c, 414u, depth + 1u); else { c.pc = 0x003C73A0u; return; } if (c.pc != 0x003C6FB8u) [[unlikely]] return; }
L_003C6FB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C6FC0u);  if (depth < kMaxDepth) unit_00B1(c, 418u, depth + 1u); else { c.pc = 0x003C73D0u; return; } if (c.pc != 0x003C6FC0u) [[unlikely]] return; }
L_003C6FC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C6FE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_003C7040; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C7010; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C7068; } }
L_003C7010:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7020u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x003C7020u) [[unlikely]] return; }
L_003C7020:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7030u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 68u, depth + 1u); else { c.pc = 0x00238AA0u; return; } if (c.pc != 0x003C7030u) [[unlikely]] return; }
L_003C7030:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 8118u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003C7068; } }
    c.budget -= 1;
L_003C7040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7048u);  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x003C7048u) [[unlikely]] return; }
L_003C7048:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C7068; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7068u); st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00B1(c, 423u, depth + 1u); else { c.pc = 0x003C74B0u; return; } if (c.pc != 0x003C7068u) [[unlikely]] return; }
L_003C7068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7070u);  if (depth < kMaxDepth) unit_00B1(c, 414u, depth + 1u); else { c.pc = 0x003C73A0u; return; } if (c.pc != 0x003C7070u) [[unlikely]] return; }
L_003C7070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7078u);  if (depth < kMaxDepth) unit_00B1(c, 418u, depth + 1u); else { c.pc = 0x003C73D0u; return; } if (c.pc != 0x003C7078u) [[unlikely]] return; }
L_003C7078:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C7090:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[2], c.r[2].w[0] + 22376u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003C4000u < 16384u) { entry = entries_00B1[(t - 0x003C4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003C70B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C70C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x003C70C4u) [[unlikely]] return; }
L_003C70C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_003C7108; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C70D4u);  if (depth < kMaxDepth) unit_0009(c, 25u, depth + 1u); else { c.pc = 0x001246A0u; return; } if (c.pc != 0x003C70D4u) [[unlikely]] return; }
L_003C70D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C70DCu);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x003C70DCu) [[unlikely]] return; }
L_003C70DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C70E4u);  if (depth < kMaxDepth) unit_004E(c, 5u, depth + 1u); else { c.pc = 0x00238040u; return; } if (c.pc != 0x003C70E4u) [[unlikely]] return; }
L_003C70E4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
L_003C7108:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C7120:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7134u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 214u, depth + 1u); else { c.pc = 0x0021B730u; return; } if (c.pc != 0x003C7134u) [[unlikely]] return; }
L_003C7134:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C7150; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7150u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004E(c, 43u, depth + 1u); else { c.pc = 0x00238470u; return; } if (c.pc != 0x003C7150u) [[unlikely]] return; }
L_003C7150:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C7160:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[4].w[0] + 3u));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003C7300; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_003C7268; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003C7238; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003C71E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C71B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C7328; } }
L_003C71B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C71C0u);  if (depth < kMaxDepth) unit_0045(c, 81u, depth + 1u); else { c.pc = 0x00214AA0u; return; } if (c.pc != 0x003C71C0u) [[unlikely]] return; }
L_003C71C0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003C7338; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003C7338; } }
    c.budget -= 1;
L_003C71E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C71E8u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x003C71E8u) [[unlikely]] return; }
L_003C71E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C7338; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7200u); st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x003C7200u) [[unlikely]] return; }
L_003C7200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7208u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0043(c, 384u, depth + 1u); else { c.pc = 0x0020F700u; return; } if (c.pc != 0x003C7208u) [[unlikely]] return; }
L_003C7208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7210u);  if (depth < kMaxDepth) unit_000A(c, 245u, depth + 1u); else { c.pc = 0x0012B850u; return; } if (c.pc != 0x003C7210u) [[unlikely]] return; }
L_003C7210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7218u);  if (depth < kMaxDepth) unit_000B(c, 24u, depth + 1u); else { c.pc = 0x0012C850u; return; } if (c.pc != 0x003C7218u) [[unlikely]] return; }
L_003C7218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7220u);  if (depth < kMaxDepth) unit_00C0(c, 297u, depth + 1u); else { c.pc = 0x00403180u; return; } if (c.pc != 0x003C7220u) [[unlikely]] return; }
L_003C7220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7228u);  if (depth < kMaxDepth) unit_00BE(c, 115u, depth + 1u); else { c.pc = 0x003F9E10u; return; } if (c.pc != 0x003C7228u) [[unlikely]] return; }
L_003C7228:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 54u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003C7338; } }
L_003C7238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7240u);  if (depth < kMaxDepth) unit_0045(c, 24u, depth + 1u); else { c.pc = 0x00214260u; return; } if (c.pc != 0x003C7240u) [[unlikely]] return; }
L_003C7240:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C7338; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 3u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7260u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8068u)));  if (depth < kMaxDepth) unit_00BE(c, 135u, depth + 1u); else { c.pc = 0x003F9FF0u; return; } if (c.pc != 0x003C7260u) [[unlikely]] return; }
L_003C7260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C7338; } }
L_003C7268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7270u); set32(c.r[4], 0u + 7u);  if (depth < kMaxDepth) unit_00BE(c, 114u, depth + 1u); else { c.pc = 0x003F9DE0u; return; } if (c.pc != 0x003C7270u) [[unlikely]] return; }
L_003C7270:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C7338; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0] + 54u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], ld32((c.r[1].w[0] + 8880u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C72A4u); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_004B(c, 96u, depth + 1u); else { c.pc = 0x0022D4F0u; return; } if (c.pc != 0x003C72A4u) [[unlikely]] return; }
L_003C72A4:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], 0u + 11u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C72B8u); set32(c.r[18], c.r[18].w[0] + 8120u);  if (depth < kMaxDepth) unit_00C2(c, 172u, depth + 1u); else { c.pc = 0x00409CF0u; return; } if (c.pc != 0x003C72B8u) [[unlikely]] return; }
L_003C72B8:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C72D0u); st32((c.r[2].w[0] + 104u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 421u, depth + 1u); else { c.pc = 0x003C7400u; return; } if (c.pc != 0x003C72D0u) [[unlikely]] return; }
L_003C72D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C72D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 300u, depth + 1u); else { c.pc = 0x003C68A0u; return; } if (c.pc != 0x003C72D8u) [[unlikely]] return; }
L_003C72D8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C72E4u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0046(c, 195u, depth + 1u); else { c.pc = 0x0021B2D0u; return; } if (c.pc != 0x003C72E4u) [[unlikely]] return; }
L_003C72E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C72F0u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 8069u)));  if (depth < kMaxDepth) unit_004E(c, 35u, depth + 1u); else { c.pc = 0x002382B0u; return; } if (c.pc != 0x003C72F0u) [[unlikely]] return; }
L_003C72F0:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 8118u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003C7338; } }
L_003C7300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7308u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 197u, depth + 1u); else { c.pc = 0x0021B380u; return; } if (c.pc != 0x003C7308u) [[unlikely]] return; }
L_003C7308:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C7320; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003C7320:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_003C7338; } }
L_003C7328:
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_003C7338:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003C7350; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7348u);  if (depth < kMaxDepth) unit_00B1(c, 414u, depth + 1u); else { c.pc = 0x003C73A0u; return; } if (c.pc != 0x003C7348u) [[unlikely]] return; }
L_003C7348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7350u);  if (depth < kMaxDepth) unit_00B1(c, 418u, depth + 1u); else { c.pc = 0x003C73D0u; return; } if (c.pc != 0x003C7350u) [[unlikely]] return; }
L_003C7350:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C7370:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7388u); st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00B1(c, 414u, depth + 1u); else { c.pc = 0x003C73A0u; return; } if (c.pc != 0x003C7388u) [[unlikely]] return; }
L_003C7388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7390u);  if (depth < kMaxDepth) unit_00B1(c, 418u, depth + 1u); else { c.pc = 0x003C73D0u; return; } if (c.pc != 0x003C7390u) [[unlikely]] return; }
L_003C7390:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C73A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C73B0u);  if (depth < kMaxDepth) unit_006B(c, 17u, depth + 1u); else { c.pc = 0x002AC350u; return; } if (c.pc != 0x003C73B0u) [[unlikely]] return; }
L_003C73B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C73B8u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 9u, depth + 1u); else { c.pc = 0x002AC1A0u; return; } if (c.pc != 0x003C73B8u) [[unlikely]] return; }
L_003C73B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C73C0u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_006B(c, 18u, depth + 1u); else { c.pc = 0x002AC380u; return; } if (c.pc != 0x003C73C0u) [[unlikely]] return; }
L_003C73C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C73D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C73E4u); set32(c.r[4], c.r[4].w[0] - 15136u);  if (depth < kMaxDepth) unit_0043(c, 414u, depth + 1u); else { c.pc = 0x0020FEB0u; return; } if (c.pc != 0x003C73E4u) [[unlikely]] return; }
L_003C73E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C73F0u); set32(c.r[4], c.r[4].w[0] - 15024u);  if (depth < kMaxDepth) unit_0043(c, 416u, depth + 1u); else { c.pc = 0x0020FEF0u; return; } if (c.pc != 0x003C73F0u) [[unlikely]] return; }
L_003C73F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C7400:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 20u);
    st8((c.r[29].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 19u)));
    st8((c.r[29].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 14u)));
    st8((c.r[29].w[0] + 18u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 22u)));
    st8((c.r[29].w[0] + 19u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 28u)));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 22u)));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C7448; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003C7448:
    set32(c.r[2], 0u + 4u);
    st8((c.r[29].w[0] + 21u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 25u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 19u)));
    st8((c.r[29].w[0] + 22u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 15u)));
    st8((c.r[29].w[0] + 23u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 23u)));
    st8((c.r[29].w[0] + 24u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 28u)));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 23u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C7488; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003C7488:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 8120u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C749Cu); set32(c.r[6], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_00C3(c, 12u, depth + 1u); else { c.pc = 0x0040C100u; return; } if (c.pc != 0x003C749Cu) [[unlikely]] return; }
L_003C749C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C74B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 52u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 26u)));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 27u)));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003C74F0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_003C74F0; } }
    set32(c.r[17], 0u + 54u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003C74F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 16u)));
    set32(c.r[2], 0u + 29u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003C7578; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 30u));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_003C7528; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 336u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003C7600; } }
L_003C7528:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003C7550; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 336u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003C7600; } }
    c.budget -= 1;
L_003C7550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7558u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x003C7558u) [[unlikely]] return; }
L_003C7558:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 336u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003C7600; } }
L_003C7578:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003C7600; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 31u));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_003C75B0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 336u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003C7600; } }
    c.budget -= 1;
L_003C75B0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003C75D8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 336u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003C7600; } }
    c.budget -= 1;
L_003C75D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C75E0u);  if (depth < kMaxDepth) unit_0043(c, 374u, depth + 1u); else { c.pc = 0x0020F4B0u; return; } if (c.pc != 0x003C75E0u) [[unlikely]] return; }
L_003C75E0:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 82u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] + 336u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
L_003C7600:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], c.r[5].w[0] + 14504u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 150u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[4].w[0] + 151u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[4].w[0] + 144u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[4].w[0] + 146u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[4].w[0] + 145u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[4].w[0] + 147u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[4].w[0] + 100u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[4].w[0] + 116u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[4].w[0] + 159u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[4].w[0] + 276u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[4].w[0] + 280u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[4].w[0] + 291u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[4].w[0] + 59u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[4].w[0] + 120u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[4].w[0] + 65u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[4].w[0] + 128u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 120u)));
    set32(c.r[4], c.r[4].w[0] << 7);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[6].w[0] + 136u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[4].w[0] + 60u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[4].w[0] + 121u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[4].w[0] + 66u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[4].w[0] + 129u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 121u)));
    set32(c.r[4], c.r[4].w[0] << 7);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[6].w[0] + 137u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[6], c.r[6].w[0] + 14384u);
    c.budget -= 68;
L_003C7710:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[5].d[0] = c.r[5].d[0] ^ 0ull;
    c.r[5].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[4].w[0] + 100u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    c.r[5].d[0] = c.r[5].d[0] ^ 0ull;
    c.r[5].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[4].w[0] + 116u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[4].w[0] + 276u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[4].w[0] + 280u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[4].w[0] + 291u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    c.r[4].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    st8((c.r[5].w[0] + 59u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    st8((c.r[5].w[0] + 120u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 65u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    st8((c.r[5].w[0] + 128u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[7], c.r[5].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 120u)));
    set32(c.r[5], c.r[5].w[0] << 7);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 120u)));
    st8((c.r[7].w[0] + 136u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 60u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    st8((c.r[5].w[0] + 121u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[5].w[0] + 66u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    st8((c.r[5].w[0] + 129u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[7], c.r[5].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 121u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    set32(c.r[5], c.r[5].w[0] << 7);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 120u)));
    c.budget -= 62;
    { const bool t = c.r[4].d[0] != 0ull; st8((c.r[7].w[0] + 137u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C7710u | kUnwind; return; } goto L_003C7710; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7810u);  if (depth < kMaxDepth) unit_0032(c, 47u, depth + 1u); else { c.pc = 0x001C8B00u; return; } if (c.pc != 0x003C7810u) [[unlikely]] return; }
L_003C7810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7818u);  if (depth < kMaxDepth) unit_005B(c, 76u, depth + 1u); else { c.pc = 0x0026CAB0u; return; } if (c.pc != 0x003C7818u) [[unlikely]] return; }
L_003C7818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7820u);  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x003C7820u) [[unlikely]] return; }
L_003C7820:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 150u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 151u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7848u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (depth < kMaxDepth) unit_004F(c, 68u, depth + 1u); else { c.pc = 0x0023D1E0u; return; } if (c.pc != 0x003C7848u) [[unlikely]] return; }
L_003C7848:
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003C78B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003C7898; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C7878; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C78D8; } }
    c.budget -= 1;
L_003C7878:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003C78D8; } }
    c.budget -= 1;
L_003C7898:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003C78D8; } }
    c.budget -= 1;
L_003C78B8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_003C78D8:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[2], 0u + 1u);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 56u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C78ECu); st8((c.r[3].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006D(c, 301u, depth + 1u); else { c.pc = 0x002B6F00u; return; } if (c.pc != 0x003C78ECu) [[unlikely]] return; }
L_003C78EC:
    set32(c.r[2], ld32((c.r[28].w[0] - 23780u)));
    st8((c.r[2].w[0] + 56u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 291u)));
    st8((c.r[2].w[0] + 68u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 292u)));
    st8((c.r[2].w[0] + 69u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 293u)));
    st8((c.r[2].w[0] + 70u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23784u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 294u)));
    st8((c.r[2].w[0] + 71u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 23788u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 17u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] + 72u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 159u)));
    c.budget -= 27;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C7A40; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[2], 0u + 60u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 72u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 59u);  if (t) { goto L_003C7A20; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C7A10; } }
    set32(c.r[2], 0u + 58u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 57u);  if (t) { goto L_003C7A00; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C79F0; } }
    set32(c.r[2], 0u + 55u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 54u);  if (t) { goto L_003C79E0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C79D0; } }
    set32(c.r[2], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 47u);  if (t) { goto L_003C79C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C79B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C7A30; } }
L_003C79B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 23u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003C7AF8; } }
L_003C79C0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 23u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003C7AF8; } }
    c.budget -= 1;
L_003C79D0:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 23u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003C7AF8; } }
    c.budget -= 1;
L_003C79E0:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 23u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003C7AF8; } }
    c.budget -= 1;
L_003C79F0:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 23u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003C7AF8; } }
    c.budget -= 1;
L_003C7A00:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 23u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003C7AF8; } }
    c.budget -= 1;
L_003C7A10:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 23u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003C7AF8; } }
    c.budget -= 1;
L_003C7A20:
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 23u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003C7AF8; } }
    c.budget -= 1;
L_003C7A30:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 23u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003C7AF8; } }
    c.budget -= 1;
L_003C7A40:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    set32(c.r[2], 0u + 63u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 73u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 62u);  if (t) { goto L_003C7AE0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C7AD0; } }
    set32(c.r[2], 0u + 53u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 56u);  if (t) { goto L_003C7AC0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C7AB0; } }
    set32(c.r[2], 0u + 51u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 50u);  if (t) { goto L_003C7AA0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C7A90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C7AF0; } }
    c.budget -= 1;
L_003C7A90:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 23u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003C7AF8; } }
    c.budget -= 1;
L_003C7AA0:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 23u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003C7AF8; } }
    c.budget -= 1;
L_003C7AB0:
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 23u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003C7AF8; } }
    c.budget -= 1;
L_003C7AC0:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 23u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003C7AF8; } }
    c.budget -= 1;
L_003C7AD0:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 23u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003C7AF8; } }
    c.budget -= 1;
L_003C7AE0:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 23u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003C7AF8; } }
    c.budget -= 1;
L_003C7AF0:
    set32(c.r[2], 0u + 5u);
    st8((c.r[4].w[0] + 23u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003C7AF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7B00u);  if (depth < kMaxDepth) unit_0078(c, 221u, depth + 1u); else { c.pc = 0x002E22C0u; return; } if (c.pc != 0x003C7B00u) [[unlikely]] return; }
L_003C7B00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7B08u);  if (depth < kMaxDepth) unit_005B(c, 73u, depth + 1u); else { c.pc = 0x0026CA70u; return; } if (c.pc != 0x003C7B08u) [[unlikely]] return; }
L_003C7B08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7B10u);  if (depth < kMaxDepth) unit_0048(c, 158u, depth + 1u); else { c.pc = 0x00222440u; return; } if (c.pc != 0x003C7B10u) [[unlikely]] return; }
L_003C7B10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7B18u);  if (depth < kMaxDepth) unit_0048(c, 83u, depth + 1u); else { c.pc = 0x00220F40u; return; } if (c.pc != 0x003C7B18u) [[unlikely]] return; }
L_003C7B18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7B20u);  if (depth < kMaxDepth) unit_0048(c, 148u, depth + 1u); else { c.pc = 0x00222230u; return; } if (c.pc != 0x003C7B20u) [[unlikely]] return; }
L_003C7B20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7B28u);  if (depth < kMaxDepth) unit_0048(c, 136u, depth + 1u); else { c.pc = 0x00221FB0u; return; } if (c.pc != 0x003C7B28u) [[unlikely]] return; }
L_003C7B28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7B30u);  if (depth < kMaxDepth) unit_0048(c, 175u, depth + 1u); else { c.pc = 0x002228A0u; return; } if (c.pc != 0x003C7B30u) [[unlikely]] return; }
L_003C7B30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7B38u);  if (depth < kMaxDepth) unit_004F(c, 62u, depth + 1u); else { c.pc = 0x0023D100u; return; } if (c.pc != 0x003C7B38u) [[unlikely]] return; }
L_003C7B38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7B40u);  if (depth < kMaxDepth) unit_0048(c, 144u, depth + 1u); else { c.pc = 0x00222190u; return; } if (c.pc != 0x003C7B40u) [[unlikely]] return; }
L_003C7B40:
    set32(c.r[3], ld32((c.r[28].w[0] - 23780u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 54u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C7B70:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], c.r[3].w[0] + 11408u);
    set32(c.r[6], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003C7BA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003C7BC8; } }
    c.budget -= 1;
L_003C7BA8:
    set32(c.r[3], 0u + 47u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003C7BC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003C7BC8; } }
    c.budget -= 1;
L_003C7BC0:
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 2;
L_003C7BC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C7BD0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 18u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[5], c.r[5].w[0] + 8064u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00660000u);
    set32(c.r[3], c.r[3].w[0] + 22257u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2052u)));
    st8((c.r[4].w[0] + 17u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 17u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 18;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_003C7C20; } }
    st8((c.r[4].w[0] + 29u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003C7C20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C7C30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[5], c.r[6].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 22u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003C7C80; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 20u)));
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00CE0000u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + 11472u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7C7Cu); st8((c.r[4].w[0] + 26u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00B2(c, 36u, depth + 1u); else { c.pc = 0x003C9040u; return; } if (c.pc != 0x003C7C7Cu) [[unlikely]] return; }
L_003C7C7C:
    c.budget -= 1;
L_003C7C80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C7C90:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 7u));
    c.r[2].d[0] = c.r[2].d[0] & 30ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 30ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_003C7CB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 7u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1ull;
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_003C7D20; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003C7D18; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003C7D08; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003C7D08; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C7D08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C7D28; } }
L_003C7D08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7D10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 451u, depth + 1u); else { c.pc = 0x003C7D40u; return; } if (c.pc != 0x003C7D10u) [[unlikely]] return; }
L_003C7D10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7D18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 452u, depth + 1u); else { c.pc = 0x003C7ED0u; return; } if (c.pc != 0x003C7D18u) [[unlikely]] return; }
L_003C7D18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7D20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 7u, depth + 1u); else { c.pc = 0x003C8060u; return; } if (c.pc != 0x003C7D20u) [[unlikely]] return; }
L_003C7D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C7D28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 8u, depth + 1u); else { c.pc = 0x003C8130u; return; } if (c.pc != 0x003C7D28u) [[unlikely]] return; }
L_003C7D28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C7D40:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 7u));
    set32(c.r[5], 0u + 3u);
    c.r[3].d[0] = c.r[3].d[0] & 253ull;
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_003C7D90; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 17u)));
    set32(c.r[5], 0u + 54u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[5], c.r[6].w[0] - 47u);  if (t) { goto L_003C7D88; } }
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003C7D88; } }
    set32(c.r[5], 0u + 56u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_003C7D90; } }
    c.budget -= 1;
L_003C7D88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C7EC0; } }
L_003C7D90:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003C7E88; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 19u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003C7EC0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 17u)));
    set32(c.r[5], 0u + 47u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 49u);  if (t) { goto L_003C7DD0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_003C7DD0; } }
    set32(c.r[5], 0u + 54u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_003C7DF8; } }
    c.budget -= 1;
L_003C7DD0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_003C7DE0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_003C7DF0; } }
L_003C7DE0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 7u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003C7DF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C7EC0; } }
L_003C7DF8:
    set32(c.r[5], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 1u);  if (t) { goto L_003C7E30; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_003C7E18; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_003C7E28; } }
L_003C7E18:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 7u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003C7E28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C7EC0; } }
L_003C7E30:
    set32(c.r[5], 0u + 57u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[5], 0u + 59u);  if (t) { goto L_003C7E50; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_003C7E50; } }
    set32(c.r[5], 0u + 58u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_003C7E60; } }
L_003C7E50:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 7u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003C7EC0; } }
L_003C7E60:
    set32(c.r[5], 0u + 60u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 3u);  if (t) { goto L_003C7EC0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_003C7E80; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 7u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003C7E80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C7EC0; } }
L_003C7E88:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 19u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_003C7EC0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_003C7EB0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 17u)));
    set32(c.r[3], 0u + 63u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003C7EC0; } }
    c.budget -= 1;
L_003C7EB0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 7u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003C7EC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C7ED0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 7u));
    c.r[3].d[0] = c.r[3].d[0] & 251ull;
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 19u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00B2(c, 6u, depth); } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 17u)));
    c.r[1].d[0] = c.r[5].sd[0] < 57ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003C7FC0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 16u)));
    c.r[1].d[0] = c.r[6].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003C7FB0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_003C7F20; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 7u));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_00B2(c, 6u, depth); } }
L_003C7F20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C7F40; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 7u));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_00B2(c, 6u, depth); } }
    c.budget -= 1;
L_003C7F40:
    set32(c.r[3], 0u + 51u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003C7F60; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 7u));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_00B2(c, 6u, depth); } }
    c.budget -= 1;
L_003C7F60:
    set32(c.r[3], 0u + 52u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 11u);  if (t) { goto L_003C7F78; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_00B2(c, 6u, depth); } }
    c.budget -= 1;
L_003C7F78:
    set32(c.r[3], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 31u);  if (t) { goto L_003C7F98; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003C7F98; } }
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_003C7FA0; } }
L_003C7F98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00B2(c, 6u, depth); } }
L_003C7FA0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 7u));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_00B2(c, 6u, depth); } }
L_003C7FB0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 7u));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_00B2(c, 6u, depth); } }
L_003C7FC0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 16u)));
    c.r[3].d[0] = c.r[6].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 59u);  if (t) { [[clang::musttail]] return unit_00B2(c, 6u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003C7FE8; } }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_00B2(c, 6u, depth); } }
    c.budget -= 1;
L_003C7FE8:
    set32(c.r[3], 0u + 62u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_00B2(c, 5u, depth); } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8u)));
    c.budget -= 1;
L_003C7FF8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_00B2(c, 4u, depth); } }
    [[clang::musttail]] return unit_00B2(c, 2u, depth);
}

}
