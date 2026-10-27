#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_002B[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 5, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0,
    0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0,
    16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0,
    20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 25, 0, 0, 26, 0, 0,
    27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    31, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 55, 0, 56, 0, 0, 0, 0,
    57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0,
    65, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0,
    0, 0, 70, 0, 71, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0,
    0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 0,
    89, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0,
    0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0,
    106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0,
    119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0,
    133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0,
    145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0,
    150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0,
    157, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 164,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 176, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0,
    189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 204, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0,
    0, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0,
    0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0,
    0, 221, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0,
    227, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0,
    0, 234, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0,
    0, 241, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0,
    0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0,
    0, 253, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0,
    259, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0,
    0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0,
    278, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0,
    285, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0,
    290, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0,
    296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0,
    0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0,
    0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 311, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 0,
    0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    325, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0,
    0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0,
    0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 338, 0, 0, 339, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 342, 0, 0, 0, 0, 0,
    0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0,
    0, 0, 0, 0, 0, 0, 355, 0, 356, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 359,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0,
    362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 366, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0,
    370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 374, 0, 0, 375, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0,
    382, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 386, 0, 0, 387,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 390, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0,
    394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0,
    0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0,
    402, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0,
    0, 0, 0, 0, 0, 0, 414, 0, 415, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 418,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 421, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0,
    0, 0, 425, 0, 426, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0,
    0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 436, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440,
    0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 445, 0, 446, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0,
};

void unit_002B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001AC000;
    case 2u: goto L_001AC010;
    case 3u: goto L_001AC020;
    case 4u: goto L_001AC04C;
    case 5u: goto L_001AC084;
    case 6u: goto L_001AC08C;
    case 7u: goto L_001AC0A0;
    case 8u: goto L_001AC0D0;
    case 9u: goto L_001AC0DC;
    case 10u: goto L_001AC0F4;
    case 11u: goto L_001AC110;
    case 12u: goto L_001AC124;
    case 13u: goto L_001AC130;
    case 14u: goto L_001AC160;
    case 15u: goto L_001AC174;
    case 16u: goto L_001AC180;
    case 17u: goto L_001AC1A4;
    case 18u: goto L_001AC1E0;
    case 19u: goto L_001AC1F4;
    case 20u: goto L_001AC200;
    case 21u: goto L_001AC208;
    case 22u: goto L_001AC234;
    case 23u: goto L_001AC250;
    case 24u: goto L_001AC25C;
    case 25u: goto L_001AC268;
    case 26u: goto L_001AC274;
    case 27u: goto L_001AC280;
    case 28u: goto L_001AC28C;
    case 29u: goto L_001AC2A8;
    case 30u: goto L_001AC2C0;
    case 31u: goto L_001AC300;
    case 32u: goto L_001AC30C;
    case 33u: goto L_001AC320;
    case 34u: goto L_001AC34C;
    case 35u: goto L_001AC354;
    case 36u: goto L_001AC3A8;
    case 37u: goto L_001AC3B8;
    case 38u: goto L_001AC3C8;
    case 39u: goto L_001AC430;
    case 40u: goto L_001AC43C;
    case 41u: goto L_001AC4D0;
    case 42u: goto L_001AC4F0;
    case 43u: goto L_001AC524;
    case 44u: goto L_001AC540;
    case 45u: goto L_001AC584;
    case 46u: goto L_001AC594;
    case 47u: goto L_001AC5C4;
    case 48u: goto L_001AC5E0;
    case 49u: goto L_001AC614;
    case 50u: goto L_001AC644;
    case 51u: goto L_001AC66C;
    case 52u: goto L_001AC67C;
    case 53u: goto L_001AC6CC;
    case 54u: goto L_001AC6D8;
    case 55u: goto L_001AC6E4;
    case 56u: goto L_001AC6EC;
    case 57u: goto L_001AC700;
    case 58u: goto L_001AC71C;
    case 59u: goto L_001AC72C;
    case 60u: goto L_001AC738;
    case 61u: goto L_001AC758;
    case 62u: goto L_001AC7CC;
    case 63u: goto L_001AC7DC;
    case 64u: goto L_001AC7EC;
    case 65u: goto L_001AC800;
    case 66u: goto L_001AC818;
    case 67u: goto L_001AC820;
    case 68u: goto L_001AC860;
    case 69u: goto L_001AC870;
    case 70u: goto L_001AC888;
    case 71u: goto L_001AC890;
    case 72u: goto L_001AC8A0;
    case 73u: goto L_001AC8B0;
    case 74u: goto L_001AC8D0;
    case 75u: goto L_001AC8F0;
    case 76u: goto L_001AC910;
    case 77u: goto L_001AC924;
    case 78u: goto L_001AC948;
    case 79u: goto L_001AC980;
    case 80u: goto L_001AC994;
    case 81u: goto L_001AC9B8;
    case 82u: goto L_001AC9F0;
    case 83u: goto L_001ACA08;
    case 84u: goto L_001ACA10;
    case 85u: goto L_001ACA40;
    case 86u: goto L_001ACA5C;
    case 87u: goto L_001ACA68;
    case 88u: goto L_001ACA74;
    case 89u: goto L_001ACA80;
    case 90u: goto L_001ACA8C;
    case 91u: goto L_001ACA98;
    case 92u: goto L_001ACAC8;
    case 93u: goto L_001ACAF4;
    case 94u: goto L_001ACB10;
    case 95u: goto L_001ACB24;
    case 96u: goto L_001ACB48;
    case 97u: goto L_001ACB60;
    case 98u: goto L_001ACB8C;
    case 99u: goto L_001ACBBC;
    case 100u: goto L_001ACBC8;
    case 101u: goto L_001ACBE0;
    case 102u: goto L_001ACC40;
    case 103u: goto L_001ACC6C;
    case 104u: goto L_001ACCC0;
    case 105u: goto L_001ACCDC;
    case 106u: goto L_001ACD00;
    case 107u: goto L_001ACD30;
    case 108u: goto L_001ACD50;
    case 109u: goto L_001ACD58;
    case 110u: goto L_001ACD88;
    case 111u: goto L_001ACDA4;
    case 112u: goto L_001ACDB0;
    case 113u: goto L_001ACDBC;
    case 114u: goto L_001ACDC8;
    case 115u: goto L_001ACDD4;
    case 116u: goto L_001ACDE0;
    case 117u: goto L_001ACE30;
    case 118u: goto L_001ACE5C;
    case 119u: goto L_001ACE80;
    case 120u: goto L_001ACE94;
    case 121u: goto L_001ACEC4;
    case 122u: goto L_001ACEE0;
    case 123u: goto L_001ACF0C;
    case 124u: goto L_001ACF44;
    case 125u: goto L_001ACF60;
    case 126u: goto L_001ACFA0;
    case 127u: goto L_001ACFC4;
    case 128u: goto L_001ACFCC;
    case 129u: goto L_001ACFE4;
    case 130u: goto L_001AD030;
    case 131u: goto L_001AD054;
    case 132u: goto L_001AD05C;
    case 133u: goto L_001AD080;
    case 134u: goto L_001AD0B0;
    case 135u: goto L_001AD0D4;
    case 136u: goto L_001AD0DC;
    case 137u: goto L_001AD0E4;
    case 138u: goto L_001AD110;
    case 139u: goto L_001AD12C;
    case 140u: goto L_001AD138;
    case 141u: goto L_001AD144;
    case 142u: goto L_001AD150;
    case 143u: goto L_001AD15C;
    case 144u: goto L_001AD168;
    case 145u: goto L_001AD180;
    case 146u: goto L_001AD190;
    case 147u: goto L_001AD1D0;
    case 148u: goto L_001AD1DC;
    case 149u: goto L_001AD1F0;
    case 150u: goto L_001AD200;
    case 151u: goto L_001AD2B0;
    case 152u: goto L_001AD2C0;
    case 153u: goto L_001AD2E8;
    case 154u: goto L_001AD2F4;
    case 155u: goto L_001AD340;
    case 156u: goto L_001AD370;
    case 157u: goto L_001AD380;
    case 158u: goto L_001AD38C;
    case 159u: goto L_001AD39C;
    case 160u: goto L_001AD3B8;
    case 161u: goto L_001AD3C0;
    case 162u: goto L_001AD3E4;
    case 163u: goto L_001AD3EC;
    case 164u: goto L_001AD3FC;
    case 165u: goto L_001AD444;
    case 166u: goto L_001AD44C;
    case 167u: goto L_001AD45C;
    case 168u: goto L_001AD550;
    case 169u: goto L_001AD5A0;
    case 170u: goto L_001AD5B0;
    case 171u: goto L_001AD5C4;
    case 172u: goto L_001AD5D0;
    case 173u: goto L_001AD680;
    case 174u: goto L_001AD6D8;
    case 175u: goto L_001AD6E8;
    case 176u: goto L_001AD6F4;
    case 177u: goto L_001AD790;
    case 178u: goto L_001AD810;
    case 179u: goto L_001AD828;
    case 180u: goto L_001AD840;
    case 181u: goto L_001AD860;
    case 182u: goto L_001AD890;
    case 183u: goto L_001AD988;
    case 184u: goto L_001AD998;
    case 185u: goto L_001AD9B0;
    case 186u: goto L_001AD9E0;
    case 187u: goto L_001ADADC;
    case 188u: goto L_001ADAF0;
    case 189u: goto L_001ADB00;
    case 190u: goto L_001ADB30;
    case 191u: goto L_001ADC2C;
    case 192u: goto L_001ADC40;
    case 193u: goto L_001ADC50;
    case 194u: goto L_001ADCD0;
    case 195u: goto L_001ADCE0;
    case 196u: goto L_001ADD50;
    case 197u: goto L_001ADE1C;
    case 198u: goto L_001ADEB4;
    case 199u: goto L_001ADF20;
    case 200u: goto L_001AE010;
    case 201u: goto L_001AE024;
    case 202u: goto L_001AE044;
    case 203u: goto L_001AE04C;
    case 204u: goto L_001AE054;
    case 205u: goto L_001AE05C;
    case 206u: goto L_001AE070;
    case 207u: goto L_001AE084;
    case 208u: goto L_001AE094;
    case 209u: goto L_001AE0A4;
    case 210u: goto L_001AE0B4;
    case 211u: goto L_001AE0C4;
    case 212u: goto L_001AE0D4;
    case 213u: goto L_001AE0E4;
    case 214u: goto L_001AE0F4;
    case 215u: goto L_001AE110;
    case 216u: goto L_001AE124;
    case 217u: goto L_001AE134;
    case 218u: goto L_001AE144;
    case 219u: goto L_001AE154;
    case 220u: goto L_001AE170;
    case 221u: goto L_001AE184;
    case 222u: goto L_001AE194;
    case 223u: goto L_001AE1A4;
    case 224u: goto L_001AE1C0;
    case 225u: goto L_001AE1D4;
    case 226u: goto L_001AE1E4;
    case 227u: goto L_001AE200;
    case 228u: goto L_001AE214;
    case 229u: goto L_001AE224;
    case 230u: goto L_001AE234;
    case 231u: goto L_001AE244;
    case 232u: goto L_001AE254;
    case 233u: goto L_001AE270;
    case 234u: goto L_001AE284;
    case 235u: goto L_001AE294;
    case 236u: goto L_001AE2A4;
    case 237u: goto L_001AE2B4;
    case 238u: goto L_001AE2D0;
    case 239u: goto L_001AE2E4;
    case 240u: goto L_001AE2F4;
    case 241u: goto L_001AE304;
    case 242u: goto L_001AE314;
    case 243u: goto L_001AE324;
    case 244u: goto L_001AE344;
    case 245u: goto L_001AE360;
    case 246u: goto L_001AE374;
    case 247u: goto L_001AE384;
    case 248u: goto L_001AE3A0;
    case 249u: goto L_001AE3B4;
    case 250u: goto L_001AE3C4;
    case 251u: goto L_001AE3D4;
    case 252u: goto L_001AE3F0;
    case 253u: goto L_001AE404;
    case 254u: goto L_001AE414;
    case 255u: goto L_001AE424;
    case 256u: goto L_001AE440;
    case 257u: goto L_001AE454;
    case 258u: goto L_001AE464;
    case 259u: goto L_001AE480;
    case 260u: goto L_001AE494;
    case 261u: goto L_001AE4A4;
    case 262u: goto L_001AE4C0;
    case 263u: goto L_001AE4D0;
    case 264u: goto L_001AE4E0;
    case 265u: goto L_001AE4F4;
    case 266u: goto L_001AE510;
    case 267u: goto L_001AE520;
    case 268u: goto L_001AE530;
    case 269u: goto L_001AE544;
    case 270u: goto L_001AE554;
    case 271u: goto L_001AE564;
    case 272u: goto L_001AE580;
    case 273u: goto L_001AE594;
    case 274u: goto L_001AE5A4;
    case 275u: goto L_001AE5C0;
    case 276u: goto L_001AE5D4;
    case 277u: goto L_001AE5E4;
    case 278u: goto L_001AE600;
    case 279u: goto L_001AE614;
    case 280u: goto L_001AE624;
    case 281u: goto L_001AE634;
    case 282u: goto L_001AE644;
    case 283u: goto L_001AE660;
    case 284u: goto L_001AE670;
    case 285u: goto L_001AE680;
    case 286u: goto L_001AE690;
    case 287u: goto L_001AE6A0;
    case 288u: goto L_001AE6D0;
    case 289u: goto L_001AE768;
    case 290u: goto L_001AE780;
    case 291u: goto L_001AE7A4;
    case 292u: goto L_001AE7F0;
    case 293u: goto L_001AE840;
    case 294u: goto L_001AE890;
    case 295u: goto L_001AE8E8;
    case 296u: goto L_001AE900;
    case 297u: goto L_001AE910;
    case 298u: goto L_001AE9C8;
    case 299u: goto L_001AE9EC;
    case 300u: goto L_001AEA08;
    case 301u: goto L_001AEA18;
    case 302u: goto L_001AEA4C;
    case 303u: goto L_001AEA60;
    case 304u: goto L_001AEACC;
    case 305u: goto L_001AEB1C;
    case 306u: goto L_001AEB30;
    case 307u: goto L_001AEB74;
    case 308u: goto L_001AEB88;
    case 309u: goto L_001AEBB0;
    case 310u: goto L_001AEBDC;
    case 311u: goto L_001AEBE8;
    case 312u: goto L_001AEC1C;
    case 313u: goto L_001AEC30;
    case 314u: goto L_001AECC0;
    case 315u: goto L_001AED18;
    case 316u: goto L_001AED3C;
    case 317u: goto L_001AED60;
    case 318u: goto L_001AED68;
    case 319u: goto L_001AED8C;
    case 320u: goto L_001AED98;
    case 321u: goto L_001AEDB8;
    case 322u: goto L_001AEDD8;
    case 323u: goto L_001AEE10;
    case 324u: goto L_001AEE24;
    case 325u: goto L_001AEE80;
    case 326u: goto L_001AEEA4;
    case 327u: goto L_001AEEC8;
    case 328u: goto L_001AEED0;
    case 329u: goto L_001AEEF8;
    case 330u: goto L_001AEF18;
    case 331u: goto L_001AEF38;
    case 332u: goto L_001AEF70;
    case 333u: goto L_001AEF84;
    case 334u: goto L_001AEFB0;
    case 335u: goto L_001AF044;
    case 336u: goto L_001AF120;
    case 337u: goto L_001AF150;
    case 338u: goto L_001AF184;
    case 339u: goto L_001AF190;
    case 340u: goto L_001AF19C;
    case 341u: goto L_001AF1DC;
    case 342u: goto L_001AF1E8;
    case 343u: goto L_001AF20C;
    case 344u: goto L_001AF234;
    case 345u: goto L_001AF23C;
    case 346u: goto L_001AF244;
    case 347u: goto L_001AF260;
    case 348u: goto L_001AF2B8;
    case 349u: goto L_001AF2E8;
    case 350u: goto L_001AF2F8;
    case 351u: goto L_001AF320;
    case 352u: goto L_001AF330;
    case 353u: goto L_001AF340;
    case 354u: goto L_001AF374;
    case 355u: goto L_001AF398;
    case 356u: goto L_001AF3A0;
    case 357u: goto L_001AF3AC;
    case 358u: goto L_001AF3E8;
    case 359u: goto L_001AF3FC;
    case 360u: goto L_001AF458;
    case 361u: goto L_001AF474;
    case 362u: goto L_001AF480;
    case 363u: goto L_001AF4B4;
    case 364u: goto L_001AF4D0;
    case 365u: goto L_001AF4E0;
    case 366u: goto L_001AF51C;
    case 367u: goto L_001AF524;
    case 368u: goto L_001AF554;
    case 369u: goto L_001AF570;
    case 370u: goto L_001AF580;
    case 371u: goto L_001AF5B4;
    case 372u: goto L_001AF5C8;
    case 373u: goto L_001AF5D8;
    case 374u: goto L_001AF5E0;
    case 375u: goto L_001AF5EC;
    case 376u: goto L_001AF628;
    case 377u: goto L_001AF63C;
    case 378u: goto L_001AF694;
    case 379u: goto L_001AF6B0;
    case 380u: goto L_001AF6B8;
    case 381u: goto L_001AF6EC;
    case 382u: goto L_001AF700;
    case 383u: goto L_001AF710;
    case 384u: goto L_001AF744;
    case 385u: goto L_001AF768;
    case 386u: goto L_001AF770;
    case 387u: goto L_001AF77C;
    case 388u: goto L_001AF7B8;
    case 389u: goto L_001AF7CC;
    case 390u: goto L_001AF81C;
    case 391u: goto L_001AF824;
    case 392u: goto L_001AF854;
    case 393u: goto L_001AF870;
    case 394u: goto L_001AF880;
    case 395u: goto L_001AF8BC;
    case 396u: goto L_001AF8C4;
    case 397u: goto L_001AF8F4;
    case 398u: goto L_001AF910;
    case 399u: goto L_001AF920;
    case 400u: goto L_001AF954;
    case 401u: goto L_001AF978;
    case 402u: goto L_001AF980;
    case 403u: goto L_001AF98C;
    case 404u: goto L_001AF9C4;
    case 405u: goto L_001AF9C8;
    case 406u: goto L_001AF9DC;
    case 407u: goto L_001AFA38;
    case 408u: goto L_001AFA54;
    case 409u: goto L_001AFA60;
    case 410u: goto L_001AFA94;
    case 411u: goto L_001AFAB0;
    case 412u: goto L_001AFAC0;
    case 413u: goto L_001AFAF4;
    case 414u: goto L_001AFB18;
    case 415u: goto L_001AFB20;
    case 416u: goto L_001AFB2C;
    case 417u: goto L_001AFB68;
    case 418u: goto L_001AFB7C;
    case 419u: goto L_001AFBCC;
    case 420u: goto L_001AFBD4;
    case 421u: goto L_001AFC04;
    case 422u: goto L_001AFC20;
    case 423u: goto L_001AFC30;
    case 424u: goto L_001AFC64;
    case 425u: goto L_001AFC88;
    case 426u: goto L_001AFC90;
    case 427u: goto L_001AFC9C;
    case 428u: goto L_001AFCD8;
    case 429u: goto L_001AFCEC;
    case 430u: goto L_001AFD3C;
    case 431u: goto L_001AFD44;
    case 432u: goto L_001AFD74;
    case 433u: goto L_001AFD90;
    case 434u: goto L_001AFDA0;
    case 435u: goto L_001AFDDC;
    case 436u: goto L_001AFDE4;
    case 437u: goto L_001AFE14;
    case 438u: goto L_001AFE30;
    case 439u: goto L_001AFE40;
    case 440u: goto L_001AFE7C;
    case 441u: goto L_001AFE84;
    case 442u: goto L_001AFEB4;
    case 443u: goto L_001AFED0;
    case 444u: goto L_001AFEE0;
    case 445u: goto L_001AFF1C;
    case 446u: goto L_001AFF24;
    case 447u: goto L_001AFF28;
    case 448u: goto L_001AFF54;
    case 449u: goto L_001AFF70;
    case 450u: goto L_001AFFA0;
    case 451u: goto L_001AFFB0;
    case 452u: goto L_001AFFE8;
    default: bad_entry(c, 0x001AC000u); return;
    }
L_001AC000:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 1;
    c.pc = 0x001AC004u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_001AC010:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AC020:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 11312u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC04Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AC04Cu) [[unlikely]] return; }
L_001AC04C:
    c.f[1] = ld32((c.r[16].w[0] + 304u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[3].d[0] = c.r[2].d[0] | 26214ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], 0u + 2u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0] + 304u), c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC084u); st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0039(c, 127u, depth + 1u); else { c.pc = 0x001E5A90u; return; } if (c.pc != 0x001AC084u) [[unlikely]] return; }
L_001AC084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC08Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001AC08Cu) [[unlikely]] return; }
L_001AC08C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AC0A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 705u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 280u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC0D0u); st8((c.r[4].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_003B(c, 6u, depth + 1u); else { c.pc = 0x001EC130u; return; } if (c.pc != 0x001AC0D0u) [[unlikely]] return; }
L_001AC0D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC0DCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003A(c, 118u, depth + 1u); else { c.pc = 0x001EAA20u; return; } if (c.pc != 0x001AC0DCu) [[unlikely]] return; }
L_001AC0DC:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC0F4u); set32(c.r[7], 0u + 11u);  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001AC0F4u) [[unlikely]] return; }
L_001AC0F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AC110:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC124u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 6u, depth + 1u); else { c.pc = 0x001EC130u; return; } if (c.pc != 0x001AC124u) [[unlikely]] return; }
L_001AC124:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC130u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003A(c, 118u, depth + 1u); else { c.pc = 0x001EAA20u; return; } if (c.pc != 0x001AC130u) [[unlikely]] return; }
L_001AC130:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AC150; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    set32(c.r[3], 0u + 16u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001AC150:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AC160:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC174u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 6u, depth + 1u); else { c.pc = 0x001EC130u; return; } if (c.pc != 0x001AC174u) [[unlikely]] return; }
L_001AC174:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC180u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003A(c, 118u, depth + 1u); else { c.pc = 0x001EAA20u; return; } if (c.pc != 0x001AC180u) [[unlikely]] return; }
L_001AC180:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AC1B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC1A4u);  if (depth < kMaxDepth) unit_002B(c, 155u, depth + 1u); else { c.pc = 0x001AD340u; return; } if (c.pc != 0x001AC1A4u) [[unlikely]] return; }
L_001AC1A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AC1C8; } }
    c.budget -= 1;
L_001AC1B0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    set32(c.r[3], 0u + 16u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001AC1C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AC1E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC1F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 6u, depth + 1u); else { c.pc = 0x001EC130u; return; } if (c.pc != 0x001AC1F4u) [[unlikely]] return; }
L_001AC1F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC200u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003A(c, 118u, depth + 1u); else { c.pc = 0x001EAA20u; return; } if (c.pc != 0x001AC200u) [[unlikely]] return; }
L_001AC200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC208u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 155u, depth + 1u); else { c.pc = 0x001AD340u; return; } if (c.pc != 0x001AC208u) [[unlikely]] return; }
L_001AC208:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001AC2A8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC234u); st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x001AC234u) [[unlikely]] return; }
L_001AC234:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AC298; } }
    set32(c.r[2], 0u + 50u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC250u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x001AC250u) [[unlikely]] return; }
L_001AC250:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC25Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x001AC25Cu) [[unlikely]] return; }
L_001AC25C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC268u); set32(c.r[5], 0u + 106u);  if (depth < kMaxDepth) unit_001A(c, 156u, depth + 1u); else { c.pc = 0x0016A7C0u; return; } if (c.pc != 0x001AC268u) [[unlikely]] return; }
L_001AC268:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC274u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 157u, depth + 1u); else { c.pc = 0x0023A290u; return; } if (c.pc != 0x001AC274u) [[unlikely]] return; }
L_001AC274:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8656u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC280u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C640u; return; } if (c.pc != 0x001AC280u) [[unlikely]] return; }
L_001AC280:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC28Cu); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x001AC28Cu) [[unlikely]] return; }
L_001AC28C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC2A8; } }
    c.budget -= 1;
L_001AC298:
    set32(c.r[2], 0u + 10u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC2A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 162u, depth + 1u); else { c.pc = 0x0023A310u; return; } if (c.pc != 0x001AC2A8u) [[unlikely]] return; }
L_001AC2A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AC2C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001AC310; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    set32(c.r[2], 0u - 4u);
    set32(c.r[5], 0u + 21u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC300u); st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002E(c, 66u, depth + 1u); else { c.pc = 0x001B8E60u; return; } if (c.pc != 0x001AC300u) [[unlikely]] return; }
L_001AC300:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC30Cu); set32(c.r[5], 0u + 21u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001AC30Cu) [[unlikely]] return; }
L_001AC30C:
    c.budget -= 1;
L_001AC310:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AC320:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], 0u + 2u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 21444u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC34Cu); st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0039(c, 127u, depth + 1u); else { c.pc = 0x001E5A90u; return; } if (c.pc != 0x001AC34Cu) [[unlikely]] return; }
L_001AC34C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC354u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001AC354u) [[unlikely]] return; }
L_001AC354:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 709u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[2].w[0] + 1u);  if (t) { goto L_001AC380; } }
    st8((c.r[17].w[0] + 709u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 32u);
    st32((c.r[17].w[0] + 108u), 0u);
    st32((c.r[17].w[0] + 104u), 0u);
    st32((c.r[17].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 280u), 0u);
    st8((c.r[17].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_001AC380:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[0] = ld32((c.r[17].w[0] + 3248u));
    set32(c.r[5], c.r[17].w[0] + 1296u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 3252u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 3256u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC3A8u); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001AC3A8u) [[unlikely]] return; }
L_001AC3A8:
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[4], c.r[17].w[0] + 3200u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC3B8u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 126u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x001AC3B8u) [[unlikely]] return; }
L_001AC3B8:
    set32(c.r[18], c.r[29].w[0] + 72u);
    c.f[13] = ld32((c.r[18].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC3C8u); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001AC3C8u) [[unlikely]] return; }
L_001AC3C8:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AC3F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001AC408; } }
    c.budget -= 1;
L_001AC3F0:
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AC408; } }
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 2;
L_001AC408:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.f[1] = ld32((c.r[18].w[0]));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC430u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 160u, depth + 1u); else { c.pc = 0x00126100u; return; } if (c.pc != 0x001AC430u) [[unlikely]] return; }
L_001AC430:
    c.f[12] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC43Cu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001AC43Cu) [[unlikely]] return; }
L_001AC43C:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = c.r[4].sd[0] < 9217ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001AC458; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 9216u);  if (t) { goto L_001AC468; } }
L_001AC458:
    c.r[1].d[0] = c.r[4].sd[0] < -6144ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AC468; } }
    set32(c.r[4], 0u - 6144u);
    c.budget -= 1;
L_001AC468:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1244u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[1].d[0] = c.r[4].sd[0] < 257ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001AC490; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 256u);  if (t) { goto L_001AC4A0; } }
    c.budget -= 1;
L_001AC490:
    c.r[1].d[0] = c.r[4].sd[0] < -256ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AC4A0; } }
    set32(c.r[4], 0u - 256u);
    c.budget -= 1;
L_001AC4A0:
    set32(c.r[3], ld32((c.r[17].w[0] + 1244u)));
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[17].w[0] + 1244u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001AC4D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 11280u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001AC000u < 16384u) { entry = entries_002B[(t - 0x001AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001AC4F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[1] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 1392u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC524u); st32((c.r[4].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_005A(c, 202u, depth + 1u); else { c.pc = 0x0026A010u; return; } if (c.pc != 0x001AC524u) [[unlikely]] return; }
L_001AC524:
    st16((c.r[16].w[0] + 560u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 4096u);
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 280u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC540u); st8((c.r[16].w[0] + 286u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001AC540u) [[unlikely]] return; }
L_001AC540:
    set32(c.r[2], ld32((c.r[16].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_001AC5A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC584u); st32((c.r[16].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001AC584u) [[unlikely]] return; }
L_001AC584:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC594u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x001AC594u) [[unlikely]] return; }
L_001AC594:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC5D0; } }
    c.budget -= 1;
L_001AC5A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC5C4u); st32((c.r[16].w[0] + 712u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004E(c, 149u, depth + 1u); else { c.pc = 0x0023A0D0u; return; } if (c.pc != 0x001AC5C4u) [[unlikely]] return; }
L_001AC5C4:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001AC5D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AC5E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 1u);
    st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 8292u));
    c.f[0] = ld32((c.r[4].w[0] + 712u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC614u); st32((c.r[4].w[0] + 712u), c.f[0]);  if (depth < kMaxDepth) unit_005A(c, 266u, depth + 1u); else { c.pc = 0x0026AD70u; return; } if (c.pc != 0x001AC614u) [[unlikely]] return; }
L_001AC614:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AC638; } }
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AC6D8; } }
    c.budget -= 1;
L_001AC638:
    set32(c.r[4], c.r[16].w[0] + 1392u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC644u); set32(c.r[5], c.r[16].w[0] + 8624u);  if (depth < kMaxDepth) unit_0000(c, 247u, depth + 1u); else { c.pc = 0x00102830u; return; } if (c.pc != 0x001AC644u) [[unlikely]] return; }
L_001AC644:
    set32(c.r[2], ld32((c.r[16].w[0] + 1488u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_001AC688; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC66Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001AC66Cu) [[unlikely]] return; }
L_001AC66C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC67Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x001AC67Cu) [[unlikely]] return; }
L_001AC67C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC6D8; } }
    c.budget -= 1;
L_001AC688:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.f[12] = 0u;
    set32(c.r[6], 0u + 8u);
    set32(c.r[7], 0u + 5u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[16].w[0] + 712u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC6CCu); st8((c.r[16].w[0] + 787u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001AC6CCu) [[unlikely]] return; }
L_001AC6CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC6D8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x001AC6D8u) [[unlikely]] return; }
L_001AC6D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC6E4u); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 202u, depth + 1u); else { c.pc = 0x0026A010u; return; } if (c.pc != 0x001AC6E4u) [[unlikely]] return; }
L_001AC6E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC6ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001AC6ECu) [[unlikely]] return; }
L_001AC6EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AC700:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC71Cu); st8((c.r[4].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001AC71Cu) [[unlikely]] return; }
L_001AC71C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC72Cu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_005A(c, 266u, depth + 1u); else { c.pc = 0x0026AD70u; return; } if (c.pc != 0x001AC72Cu) [[unlikely]] return; }
L_001AC72C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC738u); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 202u, depth + 1u); else { c.pc = 0x0026A010u; return; } if (c.pc != 0x001AC738u) [[unlikely]] return; }
L_001AC738:
    c.f[1] = ld32((c.r[16].w[0] + 8292u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[0] = ld32((c.r[16].w[0] + 712u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC758u); st32((c.r[16].w[0] + 712u), c.f[0]);  if (depth < kMaxDepth) unit_005A(c, 288u, depth + 1u); else { c.pc = 0x0026B130u; return; } if (c.pc != 0x001AC758u) [[unlikely]] return; }
L_001AC758:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001AC780; } }
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AC7F0; } }
    c.budget -= 1;
L_001AC780:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[8].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 712u), c.r[3].w[0]);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC7CCu); st32((c.r[16].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001AC7CCu) [[unlikely]] return; }
L_001AC7CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC7DCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_006A(c, 146u, depth + 1u); else { c.pc = 0x002AA260u; return; } if (c.pc != 0x001AC7DCu) [[unlikely]] return; }
L_001AC7DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC7ECu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_004E(c, 153u, depth + 1u); else { c.pc = 0x0023A1C0u; return; } if (c.pc != 0x001AC7ECu) [[unlikely]] return; }
L_001AC7EC:
    c.budget -= 1;
L_001AC7F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AC800:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC818u); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 202u, depth + 1u); else { c.pc = 0x0026A010u; return; } if (c.pc != 0x001AC818u) [[unlikely]] return; }
L_001AC818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC820u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001AC820u) [[unlikely]] return; }
L_001AC820:
    c.f[1] = ld32((c.r[16].w[0] + 8308u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001AC860; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 40u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC860u); st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002C(c, 88u, depth + 1u); else { c.pc = 0x001B0B00u; return; } if (c.pc != 0x001AC860u) [[unlikely]] return; }
L_001AC860:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AC870:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC888u); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 202u, depth + 1u); else { c.pc = 0x0026A010u; return; } if (c.pc != 0x001AC888u) [[unlikely]] return; }
L_001AC888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC890u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001AC890u) [[unlikely]] return; }
L_001AC890:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AC8A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC8A0u); set32(c.r[5], 0u + 15u);  if (depth < kMaxDepth) unit_0056(c, 315u, depth + 1u); else { c.pc = 0x0025BC70u; return; } if (c.pc != 0x001AC8A0u) [[unlikely]] return; }
L_001AC8A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AC8B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 704u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 11256u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001AC000u < 16384u) { entry = entries_002B[(t - 0x001AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001AC8D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 11248u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001AC000u < 16384u) { entry = entries_002B[(t - 0x001AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001AC8F0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    set32(c.r[3], 0u + 16u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 705u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 312u), 0u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 308u), 0u);  c.pc = t; return; }
L_001AC910:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC924u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 168u, depth + 1u); else { c.pc = 0x001AD550u; return; } if (c.pc != 0x001AC924u) [[unlikely]] return; }
L_001AC924:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AC950; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC948u);  if (depth < kMaxDepth) unit_002B(c, 173u, depth + 1u); else { c.pc = 0x001AD680u; return; } if (c.pc != 0x001AC948u) [[unlikely]] return; }
L_001AC948:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AC968; } }
L_001AC950:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    set32(c.r[3], 0u + 16u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001AC968:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AC980:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC994u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 173u, depth + 1u); else { c.pc = 0x001AD680u; return; } if (c.pc != 0x001AC994u) [[unlikely]] return; }
L_001AC994:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AC9C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC9B8u);  if (depth < kMaxDepth) unit_002B(c, 168u, depth + 1u); else { c.pc = 0x001AD550u; return; } if (c.pc != 0x001AC9B8u) [[unlikely]] return; }
L_001AC9B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AC9D8; } }
L_001AC9C0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    set32(c.r[3], 0u + 16u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001AC9D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AC9F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACA08u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002B(c, 173u, depth + 1u); else { c.pc = 0x001AD680u; return; } if (c.pc != 0x001ACA08u) [[unlikely]] return; }
L_001ACA08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACA10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 168u, depth + 1u); else { c.pc = 0x001AD550u; return; } if (c.pc != 0x001ACA10u) [[unlikely]] return; }
L_001ACA10:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001ACAF8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 705u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[16], c.r[17].w[0] + 304u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACA40u); st8((c.r[17].w[0] + 705u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x001ACA40u) [[unlikely]] return; }
L_001ACA40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ACAB8; } }
    set32(c.r[2], 0u + 70u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACA5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x001ACA5Cu) [[unlikely]] return; }
L_001ACA5C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACA68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x001ACA68u) [[unlikely]] return; }
L_001ACA68:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACA74u); set32(c.r[5], 0u + 106u);  if (depth < kMaxDepth) unit_001A(c, 156u, depth + 1u); else { c.pc = 0x0016A7C0u; return; } if (c.pc != 0x001ACA74u) [[unlikely]] return; }
L_001ACA74:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACA80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 157u, depth + 1u); else { c.pc = 0x0023A290u; return; } if (c.pc != 0x001ACA80u) [[unlikely]] return; }
L_001ACA80:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 8656u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACA8Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C640u; return; } if (c.pc != 0x001ACA8Cu) [[unlikely]] return; }
L_001ACA8C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACA98u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x001ACA98u) [[unlikely]] return; }
L_001ACA98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBC230000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001ACAC8; } }
    c.budget -= 1;
L_001ACAB8:
    set32(c.r[2], 0u + 10u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACAC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 162u, depth + 1u); else { c.pc = 0x0023A310u; return; } if (c.pc != 0x001ACAC8u) [[unlikely]] return; }
L_001ACAC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = ld32((c.r[17].w[0] + 3296u));
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 3300u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 3304u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACAF4u); st32((c.r[16].w[0] + 24u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001ACAF4u) [[unlikely]] return; }
L_001ACAF4:
    c.budget -= 1;
L_001ACAF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001ACB10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACB24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 152u, depth + 1u); else { c.pc = 0x001AD2C0u; return; } if (c.pc != 0x001ACB24u) [[unlikely]] return; }
L_001ACB24:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001ACB48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACB48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 322u, depth + 1u); else { c.pc = 0x0025BDC0u; return; } if (c.pc != 0x001ACB48u) [[unlikely]] return; }
L_001ACB48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001ACB60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 11216u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACB8Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ACB8Cu) [[unlikely]] return; }
L_001ACB8C:
    c.f[1] = ld32((c.r[16].w[0] + 304u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACBBCu); st32((c.r[16].w[0] + 304u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001ACBBCu) [[unlikely]] return; }
L_001ACBBC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACBC8u); set32(c.r[5], c.r[16].w[0] + 1392u);  if (depth < kMaxDepth) unit_005A(c, 202u, depth + 1u); else { c.pc = 0x0026A010u; return; } if (c.pc != 0x001ACBC8u) [[unlikely]] return; }
L_001ACBC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001ACBE0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], 0u + 32u);
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 11u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 705u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[4].w[0] + 276u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 280u), 0u);
    st8((c.r[4].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[4].w[0] + 108u), c.f[0]);
    st32((c.r[4].w[0] + 312u), 0u);
    st32((c.r[4].w[0] + 308u), 0u);
    c.budget -= 22;
    { st32((c.r[4].w[0] + 712u), c.r[2].w[0]);  [[clang::musttail]] return unit_002C(c, 88u, depth); }
L_001ACC40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 8292u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[4].w[0] + 712u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACC6Cu); st32((c.r[4].w[0] + 712u), c.f[0]);  if (depth < kMaxDepth) unit_005A(c, 266u, depth + 1u); else { c.pc = 0x0026AD70u; return; } if (c.pc != 0x001ACC6Cu) [[unlikely]] return; }
L_001ACC6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ACC90; } }
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001ACCA8; } }
    c.budget -= 1;
L_001ACC90:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    set32(c.r[3], 0u + 16u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001ACCA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001ACCC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACCDCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 266u, depth + 1u); else { c.pc = 0x0026AD70u; return; } if (c.pc != 0x001ACCDCu) [[unlikely]] return; }
L_001ACCDC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001ACD08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACD00u);  if (depth < kMaxDepth) unit_002B(c, 168u, depth + 1u); else { c.pc = 0x001AD550u; return; } if (c.pc != 0x001ACD00u) [[unlikely]] return; }
L_001ACD00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ACD20; } }
L_001ACD08:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    set32(c.r[3], 0u + 16u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001ACD20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001ACD30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACD50u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005A(c, 266u, depth + 1u); else { c.pc = 0x0026AD70u; return; } if (c.pc != 0x001ACD50u) [[unlikely]] return; }
L_001ACD50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACD58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 168u, depth + 1u); else { c.pc = 0x001AD550u; return; } if (c.pc != 0x001ACD58u) [[unlikely]] return; }
L_001ACD58:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001ACE60; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 705u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[16], c.r[17].w[0] + 304u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACD88u); st8((c.r[17].w[0] + 705u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x001ACD88u) [[unlikely]] return; }
L_001ACD88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ACE00; } }
    set32(c.r[2], 0u + 70u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACDA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x001ACDA4u) [[unlikely]] return; }
L_001ACDA4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACDB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x001ACDB0u) [[unlikely]] return; }
L_001ACDB0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACDBCu); set32(c.r[5], 0u + 106u);  if (depth < kMaxDepth) unit_001A(c, 156u, depth + 1u); else { c.pc = 0x0016A7C0u; return; } if (c.pc != 0x001ACDBCu) [[unlikely]] return; }
L_001ACDBC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACDC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 157u, depth + 1u); else { c.pc = 0x0023A290u; return; } if (c.pc != 0x001ACDC8u) [[unlikely]] return; }
L_001ACDC8:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 8656u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACDD4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C640u; return; } if (c.pc != 0x001ACDD4u) [[unlikely]] return; }
L_001ACDD4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACDE0u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x001ACDE0u) [[unlikely]] return; }
L_001ACDE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBC230000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001ACE30; } }
    c.budget -= 1;
L_001ACE00:
    set32(c.r[2], 0u + 10u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACE30u); st32((c.r[17].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_004E(c, 162u, depth + 1u); else { c.pc = 0x0023A310u; return; } if (c.pc != 0x001ACE30u) [[unlikely]] return; }
L_001ACE30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = ld32((c.r[17].w[0] + 3296u));
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 3300u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 3304u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACE5Cu); st32((c.r[16].w[0] + 24u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 213u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x001ACE5Cu) [[unlikely]] return; }
L_001ACE5C:
    c.budget -= 1;
L_001ACE60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001ACE80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACE94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 152u, depth + 1u); else { c.pc = 0x001AD2C0u; return; } if (c.pc != 0x001ACE94u) [[unlikely]] return; }
L_001ACE94:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001ACEC8; } }
    st32((c.r[16].w[0] + 108u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACEC4u); st32((c.r[16].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_0056(c, 315u, depth + 1u); else { c.pc = 0x0025BC70u; return; } if (c.pc != 0x001ACEC4u) [[unlikely]] return; }
L_001ACEC4:
    c.budget -= 1;
L_001ACEC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001ACEE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 11184u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACF0Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ACF0Cu) [[unlikely]] return; }
L_001ACF0C:
    c.f[1] = ld32((c.r[16].w[0] + 304u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[3].d[0] = c.r[2].d[0] | 26214ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], 0u + 2u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0] + 304u), c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACF44u); st8((c.r[16].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002C(c, 91u, depth + 1u); else { c.pc = 0x001B0CE0u; return; } if (c.pc != 0x001ACF44u) [[unlikely]] return; }
L_001ACF44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001ACF60:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 705u)));
    set32(c.r[3], 0u + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.f[12] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 11u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 705u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[4].w[0] + 276u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 280u), 0u);
    st8((c.r[4].w[0] + 286u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
    { st32((c.r[4].w[0] + 712u), c.r[2].w[0]);  [[clang::musttail]] return unit_002C(c, 88u, depth); }
L_001ACFA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[12] = c.r[2].w[0];
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACFC4u); set32(c.r[5], c.r[16].w[0] + 1296u);  if (depth < kMaxDepth) unit_005A(c, 172u, depth + 1u); else { c.pc = 0x00269BC0u; return; } if (c.pc != 0x001ACFC4u) [[unlikely]] return; }
L_001ACFC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACFCCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 168u, depth + 1u); else { c.pc = 0x001AD550u; return; } if (c.pc != 0x001ACFCCu) [[unlikely]] return; }
L_001ACFCC:
    c.f[1] = ld32((c.r[16].w[0] + 8292u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACFE4u); st32((c.r[16].w[0] + 712u), c.f[0]);  if (depth < kMaxDepth) unit_002B(c, 173u, depth + 1u); else { c.pc = 0x001AD680u; return; } if (c.pc != 0x001ACFE4u) [[unlikely]] return; }
L_001ACFE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AD008; } }
    c.f[1] = ld32((c.r[16].w[0] + 712u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AD020; } }
    c.budget -= 1;
L_001AD008:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    set32(c.r[3], 0u + 16u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001AD020:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AD030:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[12] = c.r[2].w[0];
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD054u); set32(c.r[5], c.r[16].w[0] + 1296u);  if (depth < kMaxDepth) unit_005A(c, 172u, depth + 1u); else { c.pc = 0x00269BC0u; return; } if (c.pc != 0x001AD054u) [[unlikely]] return; }
L_001AD054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD05Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 173u, depth + 1u); else { c.pc = 0x001AD680u; return; } if (c.pc != 0x001AD05Cu) [[unlikely]] return; }
L_001AD05C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AD088; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD080u);  if (depth < kMaxDepth) unit_002B(c, 168u, depth + 1u); else { c.pc = 0x001AD550u; return; } if (c.pc != 0x001AD080u) [[unlikely]] return; }
L_001AD080:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AD0A0; } }
L_001AD088:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    set32(c.r[3], 0u + 16u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001AD0A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AD0B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[12] = c.r[2].w[0];
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD0D4u); set32(c.r[5], c.r[16].w[0] + 1296u);  if (depth < kMaxDepth) unit_005A(c, 172u, depth + 1u); else { c.pc = 0x00269BC0u; return; } if (c.pc != 0x001AD0D4u) [[unlikely]] return; }
L_001AD0D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD0DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 173u, depth + 1u); else { c.pc = 0x001AD680u; return; } if (c.pc != 0x001AD0DCu) [[unlikely]] return; }
L_001AD0DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD0E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 168u, depth + 1u); else { c.pc = 0x001AD550u; return; } if (c.pc != 0x001AD0E4u) [[unlikely]] return; }
L_001AD0E4:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001AD180; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 705u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD110u); st8((c.r[16].w[0] + 705u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00B1(c, 280u, depth + 1u); else { c.pc = 0x003C6600u; return; } if (c.pc != 0x001AD110u) [[unlikely]] return; }
L_001AD110:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AD170; } }
    set32(c.r[2], 0u + 50u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD12Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x001AD12Cu) [[unlikely]] return; }
L_001AD12C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD138u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 122u, depth + 1u); else { c.pc = 0x001F95B0u; return; } if (c.pc != 0x001AD138u) [[unlikely]] return; }
L_001AD138:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD144u); set32(c.r[5], 0u + 106u);  if (depth < kMaxDepth) unit_001A(c, 156u, depth + 1u); else { c.pc = 0x0016A7C0u; return; } if (c.pc != 0x001AD144u) [[unlikely]] return; }
L_001AD144:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD150u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 157u, depth + 1u); else { c.pc = 0x0023A290u; return; } if (c.pc != 0x001AD150u) [[unlikely]] return; }
L_001AD150:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8656u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD15Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C640u; return; } if (c.pc != 0x001AD15Cu) [[unlikely]] return; }
L_001AD15C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD168u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x001AD168u) [[unlikely]] return; }
L_001AD168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AD180; } }
L_001AD170:
    set32(c.r[2], 0u + 10u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD180u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 162u, depth + 1u); else { c.pc = 0x0023A310u; return; } if (c.pc != 0x001AD180u) [[unlikely]] return; }
L_001AD180:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AD190:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001AD1E0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    set32(c.r[2], 0u - 4u);
    set32(c.r[5], 0u + 16u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD1D0u); st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002E(c, 66u, depth + 1u); else { c.pc = 0x001B8E60u; return; } if (c.pc != 0x001AD1D0u) [[unlikely]] return; }
L_001AD1D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD1DCu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001AD1DCu) [[unlikely]] return; }
L_001AD1DC:
    c.budget -= 1;
L_001AD1E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AD1F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AD200:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[4].w[0] + 304u);  if (t) { goto L_001AD240; } }
    c.f[1] = ld32((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[3].d[0] = c.r[3].d[0] | 26214ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 12;
L_001AD240:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AD260; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 568u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001AD2A8; } }
L_001AD260:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.f[0] = ld32((c.r[4].w[0] + 8328u));
    c.r[3].d[0] = c.r[3].d[0] | 26214ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[4].w[0] + 8328u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8332u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[4].w[0] + 8332u), c.r[3].w[0]);
    c.budget -= 18;
L_001AD2A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AD2B0:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { set32(c.r[6], 0u + 3u);  [[clang::musttail]] return unit_004E(c, 153u, depth); }
L_001AD2C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[12] = ld32((c.r[17].w[0] + 308u));
    set32(c.r[16], c.r[17].w[0] + 304u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD2E8u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 212u, depth + 1u); else { c.pc = 0x00127520u; return; } if (c.pc != 0x001AD2E8u) [[unlikely]] return; }
L_001AD2E8:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD2F4u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00127430u; return; } if (c.pc != 0x001AD2F4u) [[unlikely]] return; }
L_001AD2F4:
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = 0u;
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 4u), c.f[1]);  if (t) { goto L_001AD320; } }
    st32((c.r[16].w[0] + 8u), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.budget -= 3;
L_001AD320:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001AD340:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD370u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_003E(c, 346u, depth + 1u); else { c.pc = 0x001FB2F0u; return; } if (c.pc != 0x001AD370u) [[unlikely]] return; }
L_001AD370:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    set32(c.r[4], c.r[18].w[0] + 2048u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD380u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001AD380u) [[unlikely]] return; }
L_001AD380:
    set32(c.r[2], ld32((c.r[18].w[0] + 1244u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD38Cu); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 186u, depth + 1u); else { c.pc = 0x00126C40u; return; } if (c.pc != 0x001AD38Cu) [[unlikely]] return; }
L_001AD38C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD39Cu); set32(c.r[4], c.r[4].w[0] - 11840u);  if (depth < kMaxDepth) unit_0009(c, 214u, depth + 1u); else { c.pc = 0x001275A0u; return; } if (c.pc != 0x001AD39Cu) [[unlikely]] return; }
L_001AD39C:
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    st32((c.r[29].w[0] + 132u), 0u);
    st32((c.r[29].w[0] + 128u), c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD3B8u); st32((c.r[29].w[0] + 136u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001AD3B8u) [[unlikely]] return; }
L_001AD3B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD3C0u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x001273A0u; return; } if (c.pc != 0x001AD3C0u) [[unlikely]] return; }
L_001AD3C0:
    set32(c.r[20], c.r[29].w[0] + 116u);
    c.f[20] = ld32((c.r[20].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_001AD438; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD3E4u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 217u, depth + 1u); else { c.pc = 0x00127620u; return; } if (c.pc != 0x001AD3E4u) [[unlikely]] return; }
L_001AD3E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD3ECu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x001AD3ECu) [[unlikely]] return; }
L_001AD3EC:
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD3FCu); c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x001AD3FCu) [[unlikely]] return; }
L_001AD3FC:
    c.f[1] = ld32((c.r[20].w[0]));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    mmi::mult(c, 0, c.r[19].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (t) { goto L_001AD488; } }
L_001AD438:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD444u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 217u, depth + 1u); else { c.pc = 0x00127620u; return; } if (c.pc != 0x001AD444u) [[unlikely]] return; }
L_001AD444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD44Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00125FA0u; return; } if (c.pc != 0x001AD44Cu) [[unlikely]] return; }
L_001AD44C:
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD45Cu); c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);  if (depth < kMaxDepth) unit_0009(c, 157u, depth + 1u); else { c.pc = 0x00126090u; return; } if (c.pc != 0x001AD45Cu) [[unlikely]] return; }
L_001AD45C:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    mmi::mult(c, 0, c.r[19].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 11;
L_001AD488:
    c.r[3].d[0] = c.r[16].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < -512ll ? 1ull : 0ull;  if (t) { goto L_001AD4B0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AD4C8; } }
    set32(c.r[16], 0u - 512u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_001AD4C8; } }
L_001AD4B0:
    c.r[1].d[0] = c.r[3].sd[0] < 513ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001AD4C8; } }
    set32(c.r[16], 0u + 512u);
    set32(c.r[17], 0u + 1u);
    c.budget -= 3;
L_001AD4C8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1244u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[16].sd[0] >= 0; c.r[1].d[0] = c.r[16].sd[0] < -6144ll ? 1ull : 0ull;  if (t) { goto L_001AD4F8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AD510; } }
    set32(c.r[16], 0u - 6144u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001AD510; } }
    c.budget -= 1;
L_001AD4F8:
    c.r[1].d[0] = c.r[16].sd[0] < 9217ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001AD510; } }
    set32(c.r[16], 0u + 9216u);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_001AD510:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[18].w[0] + 1244u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001AD550:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 1488u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001AD578; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001AD668; } }
L_001AD578:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[0] = ld32((c.r[17].w[0] + 3312u));
    set32(c.r[5], c.r[17].w[0] + 1296u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 3316u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 3320u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD5A0u); st32((c.r[29].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001AD5A0u) [[unlikely]] return; }
L_001AD5A0:
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[4], c.r[17].w[0] + 3264u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD5B0u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 126u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x001AD5B0u) [[unlikely]] return; }
L_001AD5B0:
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.f[1] = ld32((c.r[29].w[0] + 56u));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD5C4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));  if (depth < kMaxDepth) unit_0009(c, 160u, depth + 1u); else { c.pc = 0x00126100u; return; } if (c.pc != 0x001AD5C4u) [[unlikely]] return; }
L_001AD5C4:
    c.f[12] = ld32((c.r[29].w[0] + 52u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD5D0u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001AD5D0u) [[unlikely]] return; }
L_001AD5D0:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 513ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001AD5F8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1244u)));
    set32(c.r[2], c.r[2].w[0] + 512u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1244u), c.r[2].w[0]);  if (t) { goto L_001AD628; } }
    c.budget -= 1;
L_001AD5F8:
    c.r[1].d[0] = c.r[3].sd[0] < -512ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AD618; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1244u)));
    set32(c.r[2], c.r[2].w[0] - 512u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1244u), c.r[2].w[0]);  if (t) { goto L_001AD628; } }
    c.budget -= 1;
L_001AD618:
    set32(c.r[2], ld32((c.r[17].w[0] + 1244u)));
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 1244u), c.r[2].w[0]);
    c.budget -= 4;
L_001AD628:
    set32(c.r[3], ld32((c.r[17].w[0] + 1244u)));
    c.r[2].d[0] = c.r[3].sd[0] < 9216ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 9216u);  if (t) { goto L_001AD648; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1244u), c.r[2].w[0]);  if (t) { goto L_001AD660; } }
    c.budget -= 1;
L_001AD648:
    c.r[1].d[0] = c.r[3].sd[0] < -6143ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u - 6144u);  if (t) { goto L_001AD660; } }
    set32(c.r[16], 0u + 1u);
    st32((c.r[17].w[0] + 1244u), c.r[2].w[0]);
    c.budget -= 3;
L_001AD660:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_001AD668:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001AD680:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 1488u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[18].w[0] + 304u);  if (t) { goto L_001AD6B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001AD778; } }
L_001AD6B0:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[0] = ld32((c.r[18].w[0] + 3248u));
    set32(c.r[5], c.r[18].w[0] + 1296u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 3252u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 3256u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD6D8u); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 209u, depth + 1u); else { c.pc = 0x00127490u; return; } if (c.pc != 0x001AD6D8u) [[unlikely]] return; }
L_001AD6D8:
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[4], c.r[18].w[0] + 3200u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD6E8u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 126u, depth + 1u); else { c.pc = 0x001B9B80u; return; } if (c.pc != 0x001AD6E8u) [[unlikely]] return; }
L_001AD6E8:
    c.f[13] = ld32((c.r[29].w[0] + 72u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD6F4u); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_0009(c, 155u, depth + 1u); else { c.pc = 0x00126050u; return; } if (c.pc != 0x001AD6F4u) [[unlikely]] return; }
L_001AD6F4:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 1025ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001AD710; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1024u);  if (t) { goto L_001AD730; } }
L_001AD710:
    c.r[1].d[0] = c.r[3].sd[0] < -1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AD728; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1024u);  if (t) { goto L_001AD730; } }
    c.budget -= 1;
L_001AD728:
    set32(c.r[17], 0u + 1u);
    c.budget -= 2;
L_001AD730:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < 8192ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 8192u);  if (t) { goto L_001AD758; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_001AD770; } }
L_001AD758:
    c.r[1].d[0] = c.r[3].sd[0] < -8191ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u - 8192u);  if (t) { goto L_001AD770; } }
    set32(c.r[17], 0u + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_001AD770:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001AD778:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001AD790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 792u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001AD7B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AD848; } }
L_001AD7B0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AD7C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AD848; } }
L_001AD7C8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 797u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AD7E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AD848; } }
    c.budget -= 1;
L_001AD7E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 696u)));
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AD808; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 775u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AD808; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AD848; } }
    c.budget -= 1;
L_001AD808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD810u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 189u, depth + 1u); else { c.pc = 0x001ADB00u; return; } if (c.pc != 0x001AD810u) [[unlikely]] return; }
L_001AD810:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AD820; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001AD848; } }
L_001AD820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD828u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 185u, depth + 1u); else { c.pc = 0x001AD9B0u; return; } if (c.pc != 0x001AD828u) [[unlikely]] return; }
L_001AD828:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AD838; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001AD848; } }
L_001AD838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD840u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 181u, depth + 1u); else { c.pc = 0x001AD860u; return; } if (c.pc != 0x001AD840u) [[unlikely]] return; }
L_001AD840:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001AD848:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AD860:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 777u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001AD888; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AD998; } }
    c.budget -= 1;
L_001AD888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD890u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 96u, depth + 1u); else { c.pc = 0x001F0BA0u; return; } if (c.pc != 0x001AD890u) [[unlikely]] return; }
L_001AD890:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001AD8A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AD998; } }
    c.budget -= 1;
L_001AD8A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 800u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AD920; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8677u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001AD908; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 696u)));
    c.r[3].d[0] = c.r[2].d[0] & 9ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AD8E0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 775u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AD8E8; } }
L_001AD8E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AD998; } }
L_001AD8E8:
    st8((c.r[16].w[0] + 775u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 696u)));
    set32(c.r[3], 0u - 64u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 696u), c.r[3].w[0]);  if (t) { goto L_001AD998; } }
    c.budget -= 1;
L_001AD908:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 775u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AD920; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AD998; } }
    c.budget -= 1;
L_001AD920:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 775u));
    c.r[2].d[0] = c.r[3].d[0] & 9ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AD940; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 696u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 696u), c.r[2].w[0]);  if (t) { goto L_001AD958; } }
L_001AD940:
    set32(c.r[2], ld32((c.r[16].w[0] + 696u)));
    c.r[2].d[0] = c.r[2].d[0] & 9ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AD958; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AD998; } }
L_001AD958:
    st8((c.r[16].w[0] + 775u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 753u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] - 11408u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8677u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[3].w[0])));  if (t) { goto L_001AD990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD988u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 193u, depth + 1u); else { c.pc = 0x001ADC50u; return; } if (c.pc != 0x001AD988u) [[unlikely]] return; }
L_001AD988:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AD998; } }
L_001AD990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD998u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 196u, depth + 1u); else { c.pc = 0x001ADD50u; return; } if (c.pc != 0x001AD998u) [[unlikely]] return; }
L_001AD998:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AD9B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 777u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001AD9D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001ADAF0; } }
    c.budget -= 1;
L_001AD9D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD9E0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003C(c, 96u, depth + 1u); else { c.pc = 0x001F0BA0u; return; } if (c.pc != 0x001AD9E0u) [[unlikely]] return; }
L_001AD9E0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001AD9F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001ADAF0; } }
    c.budget -= 1;
L_001AD9F8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 800u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ADA70; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8678u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001ADA58; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 696u)));
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ADA30; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 775u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ADA38; } }
L_001ADA30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001ADAF0; } }
L_001ADA38:
    c.r[2].d[0] = c.r[3].d[0] & 18ull;
    st8((c.r[16].w[0] + 775u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u - 64u);
    set32(c.r[4], ld32((c.r[16].w[0] + 696u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 696u), c.r[3].w[0]);  if (t) { goto L_001ADAF0; } }
L_001ADA58:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 775u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001ADA70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ADAF0; } }
    c.budget -= 1;
L_001ADA70:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 775u));
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ADA90; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 696u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 696u), c.r[2].w[0]);  if (t) { goto L_001ADAA8; } }
L_001ADA90:
    set32(c.r[2], ld32((c.r[16].w[0] + 696u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001ADAA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ADAF0; } }
L_001ADAA8:
    st8((c.r[16].w[0] + 775u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st8((c.r[16].w[0] + 753u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] - 11344u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8678u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[3].w[0])));  if (t) { goto L_001ADAE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADADCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 193u, depth + 1u); else { c.pc = 0x001ADC50u; return; } if (c.pc != 0x001ADADCu) [[unlikely]] return; }
L_001ADADC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ADAF0; } }
    c.budget -= 1;
L_001ADAE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADAF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 196u, depth + 1u); else { c.pc = 0x001ADD50u; return; } if (c.pc != 0x001ADAF0u) [[unlikely]] return; }
L_001ADAF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001ADB00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 777u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001ADB28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001ADC40; } }
    c.budget -= 1;
L_001ADB28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADB30u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_003C(c, 96u, depth + 1u); else { c.pc = 0x001F0BA0u; return; } if (c.pc != 0x001ADB30u) [[unlikely]] return; }
L_001ADB30:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001ADB48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001ADC40; } }
    c.budget -= 1;
L_001ADB48:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 800u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ADBC0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8679u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001ADBA8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 696u)));
    c.r[3].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001ADB80; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 775u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ADB88; } }
L_001ADB80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001ADC40; } }
L_001ADB88:
    st8((c.r[16].w[0] + 775u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 696u)));
    set32(c.r[3], 0u - 64u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 696u), c.r[3].w[0]);  if (t) { goto L_001ADC40; } }
    c.budget -= 1;
L_001ADBA8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 775u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001ADBC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ADC40; } }
    c.budget -= 1;
L_001ADBC0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 775u));
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ADBE0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 696u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 696u), c.r[2].w[0]);  if (t) { goto L_001ADBF8; } }
L_001ADBE0:
    set32(c.r[2], ld32((c.r[16].w[0] + 696u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001ADBF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ADC40; } }
L_001ADBF8:
    st8((c.r[16].w[0] + 775u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st8((c.r[16].w[0] + 753u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] - 11280u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8679u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[3].w[0])));  if (t) { goto L_001ADC38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADC2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 193u, depth + 1u); else { c.pc = 0x001ADC50u; return; } if (c.pc != 0x001ADC2Cu) [[unlikely]] return; }
L_001ADC2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ADC40; } }
    c.budget -= 1;
L_001ADC38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADC40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 196u, depth + 1u); else { c.pc = 0x001ADD50u; return; } if (c.pc != 0x001ADC40u) [[unlikely]] return; }
L_001ADC40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001ADC50:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 65u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001ADC98; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001ADC98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ADD30; } }
L_001ADC98:
    set32(c.r[20], ld32((c.r[17].w[0] + 1260u)));
    set32(c.r[19], ld32((c.r[17].w[0] + 1264u)));
    c.r[2].d[0] = 0ull & 255ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[17].w[0] + 755u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 756u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 1256u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 1264u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADCD0u); st32((c.r[17].w[0] + 1260u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0032(c, 34u, depth + 1u); else { c.pc = 0x001C8990u; return; } if (c.pc != 0x001ADCD0u) [[unlikely]] return; }
L_001ADCD0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADCE0u); st8((c.r[17].w[0] + 755u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002B(c, 199u, depth + 1u); else { c.pc = 0x001ADF20u; return; } if (c.pc != 0x001ADCE0u) [[unlikely]] return; }
L_001ADCE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ADD00; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001ADD10; } }
    c.budget -= 1;
L_001ADD00:
    st32((c.r[17].w[0] + 1260u), c.r[20].w[0]);
    st32((c.r[17].w[0] + 1264u), c.r[19].w[0]);
    st32((c.r[17].w[0] + 96u), c.r[18].w[0]);
    c.budget -= 4;
L_001ADD10:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001ADD28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ADD30; } }
L_001ADD28:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001ADD30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001ADD50:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].d[0] = 0ull & 255ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[2].d[0] << 56;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[4].w[0] + 1260u)));
    set32(c.r[17], ld32((c.r[4].w[0] + 1264u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 96u)));
    st8((c.r[4].w[0] + 755u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 756u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 1256u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 1264u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 1260u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8682u)));
    c.budget -= 24;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001ADDC0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001ADE08; } }
    c.budget -= 1;
L_001ADDC0:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 753u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001ADE08; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001ADDE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001ADE10; } }
L_001ADDE8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 744u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ADE00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001ADE10; } }
    c.budget -= 1;
L_001ADE00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001ADE10; } }
L_001ADE08:
    st8((c.r[20].w[0] + 755u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001ADE10:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADE1Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_003B(c, 22u, depth + 1u); else { c.pc = 0x001EC600u; return; } if (c.pc != 0x001ADE1Cu) [[unlikely]] return; }
L_001ADE1C:
    set32(c.r[3], 0u - 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 2u);  if (t) { goto L_001ADE90; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001ADE90; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_001ADE90; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_001ADE70; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001ADE58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ADEA8; } }
    c.budget -= 1;
L_001ADE58:
    set32(c.r[2], 0u + 16384u);
    st32((c.r[20].w[0] + 1264u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 1260u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 756u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001ADEA8; } }
    c.budget -= 1;
L_001ADE70:
    set32(c.r[2], 0u - 16384u);
    st32((c.r[20].w[0] + 1260u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull | 49152ull;
    st32((c.r[20].w[0] + 1264u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 756u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001ADEA8; } }
    c.budget -= 1;
L_001ADE90:
    c.r[3].d[0] = 0ull | 32768ull;
    st32((c.r[20].w[0] + 1264u), c.r[3].w[0]);
    set32(c.r[2], 0u + 3u);
    st32((c.r[20].w[0] + 1260u), c.r[3].w[0]);
    st8((c.r[20].w[0] + 756u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_001ADEA8:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADEB4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 199u, depth + 1u); else { c.pc = 0x001ADF20u; return; } if (c.pc != 0x001ADEB4u) [[unlikely]] return; }
L_001ADEB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ADED0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 822u)));
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001ADEE0; } }
L_001ADED0:
    st32((c.r[20].w[0] + 1260u), c.r[18].w[0]);
    st32((c.r[20].w[0] + 1264u), c.r[17].w[0]);
    st32((c.r[20].w[0] + 96u), c.r[16].w[0]);
    c.budget -= 4;
L_001ADEE0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001ADEF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ADF00; } }
L_001ADEF8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001ADF00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001ADF20:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 755u));
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 756u)));
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 2u));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001ADF68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AE000; } }
L_001ADF68:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[4].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 820u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_001ADFB0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001ADFB0; } }
    st8((c.r[4].w[0] + 820u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 704u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    st8((c.r[4].w[0] + 704u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 6u)));
    st8((c.r[4].w[0] + 754u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 792u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
L_001ADFB0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ADFF0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001ADFE0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 814u)));
    st16((c.r[4].w[0] + 816u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    st16((c.r[4].w[0] + 814u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001ADFE0:
    set32(c.r[2], 0u - 2u);
    st8((c.r[4].w[0] + 821u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 708u), 0u);  if (t) { goto L_001ADFF8; } }
L_001ADFF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001AE000; } }
L_001ADFF8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_001AE000:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AE010:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE024u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 290u, depth + 1u); else { c.pc = 0x001AE780u; return; } if (c.pc != 0x001AE024u) [[unlikely]] return; }
L_001AE024:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 814u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 10960u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE044u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AE044u) [[unlikely]] return; }
L_001AE044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE04Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 287u, depth + 1u); else { c.pc = 0x001AE6A0u; return; } if (c.pc != 0x001AE04Cu) [[unlikely]] return; }
L_001AE04C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE054u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 292u, depth + 1u); else { c.pc = 0x001AE7F0u; return; } if (c.pc != 0x001AE054u) [[unlikely]] return; }
L_001AE054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE05Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 334u, depth + 1u); else { c.pc = 0x001AEFB0u; return; } if (c.pc != 0x001AE05Cu) [[unlikely]] return; }
L_001AE05C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AE070:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE084u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 8u, depth + 1u); else { c.pc = 0x001B81C0u; return; } if (c.pc != 0x001AE084u) [[unlikely]] return; }
L_001AE084:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE0F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE094u);  if (depth < kMaxDepth) unit_002E(c, 60u, depth + 1u); else { c.pc = 0x001B8D40u; return; } if (c.pc != 0x001AE094u) [[unlikely]] return; }
L_001AE094:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE0F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE0A4u);  if (depth < kMaxDepth) unit_002B(c, 177u, depth + 1u); else { c.pc = 0x001AD790u; return; } if (c.pc != 0x001AE0A4u) [[unlikely]] return; }
L_001AE0A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE0F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE0B4u);  if (depth < kMaxDepth) unit_002E(c, 32u, depth + 1u); else { c.pc = 0x001B8780u; return; } if (c.pc != 0x001AE0B4u) [[unlikely]] return; }
L_001AE0B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE0F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE0C4u);  if (depth < kMaxDepth) unit_002E(c, 57u, depth + 1u); else { c.pc = 0x001B8C10u; return; } if (c.pc != 0x001AE0C4u) [[unlikely]] return; }
L_001AE0C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE0F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE0D4u);  if (depth < kMaxDepth) unit_002E(c, 27u, depth + 1u); else { c.pc = 0x001B86A0u; return; } if (c.pc != 0x001AE0D4u) [[unlikely]] return; }
L_001AE0D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE0F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE0E4u);  if (depth < kMaxDepth) unit_002E(c, 16u, depth + 1u); else { c.pc = 0x001B83B0u; return; } if (c.pc != 0x001AE0E4u) [[unlikely]] return; }
L_001AE0E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE0F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE0F4u);  if (depth < kMaxDepth) unit_002E(c, 11u, depth + 1u); else { c.pc = 0x001B82D0u; return; } if (c.pc != 0x001AE0F4u) [[unlikely]] return; }
L_001AE0F4:
    c.budget -= 1;
L_001AE0F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AE110:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE124u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 8u, depth + 1u); else { c.pc = 0x001B81C0u; return; } if (c.pc != 0x001AE124u) [[unlikely]] return; }
L_001AE124:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE158; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE134u);  if (depth < kMaxDepth) unit_002B(c, 177u, depth + 1u); else { c.pc = 0x001AD790u; return; } if (c.pc != 0x001AE134u) [[unlikely]] return; }
L_001AE134:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE158; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE144u);  if (depth < kMaxDepth) unit_002E(c, 16u, depth + 1u); else { c.pc = 0x001B83B0u; return; } if (c.pc != 0x001AE144u) [[unlikely]] return; }
L_001AE144:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE158; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE154u);  if (depth < kMaxDepth) unit_002E(c, 14u, depth + 1u); else { c.pc = 0x001B8350u; return; } if (c.pc != 0x001AE154u) [[unlikely]] return; }
L_001AE154:
    c.budget -= 1;
L_001AE158:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AE170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE184u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 20u, depth + 1u); else { c.pc = 0x001B84D0u; return; } if (c.pc != 0x001AE184u) [[unlikely]] return; }
L_001AE184:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE1A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE194u);  if (depth < kMaxDepth) unit_002B(c, 177u, depth + 1u); else { c.pc = 0x001AD790u; return; } if (c.pc != 0x001AE194u) [[unlikely]] return; }
L_001AE194:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE1A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE1A4u);  if (depth < kMaxDepth) unit_002E(c, 22u, depth + 1u); else { c.pc = 0x001B8590u; return; } if (c.pc != 0x001AE1A4u) [[unlikely]] return; }
L_001AE1A4:
    c.budget -= 1;
L_001AE1A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AE1C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE1D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 177u, depth + 1u); else { c.pc = 0x001AD790u; return; } if (c.pc != 0x001AE1D4u) [[unlikely]] return; }
L_001AE1D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE1E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE1E4u);  if (depth < kMaxDepth) unit_002E(c, 18u, depth + 1u); else { c.pc = 0x001B8420u; return; } if (c.pc != 0x001AE1E4u) [[unlikely]] return; }
L_001AE1E4:
    c.budget -= 1;
L_001AE1E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AE200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE214u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 8u, depth + 1u); else { c.pc = 0x001B81C0u; return; } if (c.pc != 0x001AE214u) [[unlikely]] return; }
L_001AE214:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE258; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE224u);  if (depth < kMaxDepth) unit_002B(c, 177u, depth + 1u); else { c.pc = 0x001AD790u; return; } if (c.pc != 0x001AE224u) [[unlikely]] return; }
L_001AE224:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE258; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE234u);  if (depth < kMaxDepth) unit_002E(c, 32u, depth + 1u); else { c.pc = 0x001B8780u; return; } if (c.pc != 0x001AE234u) [[unlikely]] return; }
L_001AE234:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE258; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE244u);  if (depth < kMaxDepth) unit_002E(c, 57u, depth + 1u); else { c.pc = 0x001B8C10u; return; } if (c.pc != 0x001AE244u) [[unlikely]] return; }
L_001AE244:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE258; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE254u);  if (depth < kMaxDepth) unit_002E(c, 30u, depth + 1u); else { c.pc = 0x001B8730u; return; } if (c.pc != 0x001AE254u) [[unlikely]] return; }
L_001AE254:
    c.budget -= 1;
L_001AE258:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AE270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE284u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 8u, depth + 1u); else { c.pc = 0x001B81C0u; return; } if (c.pc != 0x001AE284u) [[unlikely]] return; }
L_001AE284:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE2B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE294u);  if (depth < kMaxDepth) unit_002B(c, 177u, depth + 1u); else { c.pc = 0x001AD790u; return; } if (c.pc != 0x001AE294u) [[unlikely]] return; }
L_001AE294:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE2B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE2A4u);  if (depth < kMaxDepth) unit_002E(c, 32u, depth + 1u); else { c.pc = 0x001B8780u; return; } if (c.pc != 0x001AE2A4u) [[unlikely]] return; }
L_001AE2A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE2B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE2B4u);  if (depth < kMaxDepth) unit_002E(c, 30u, depth + 1u); else { c.pc = 0x001B8730u; return; } if (c.pc != 0x001AE2B4u) [[unlikely]] return; }
L_001AE2B4:
    c.budget -= 1;
L_001AE2B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AE2D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE2E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 8u, depth + 1u); else { c.pc = 0x001B81C0u; return; } if (c.pc != 0x001AE2E4u) [[unlikely]] return; }
L_001AE2E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE348; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE2F4u);  if (depth < kMaxDepth) unit_002E(c, 60u, depth + 1u); else { c.pc = 0x001B8D40u; return; } if (c.pc != 0x001AE2F4u) [[unlikely]] return; }
L_001AE2F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE348; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE304u);  if (depth < kMaxDepth) unit_002B(c, 177u, depth + 1u); else { c.pc = 0x001AD790u; return; } if (c.pc != 0x001AE304u) [[unlikely]] return; }
L_001AE304:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE348; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE314u);  if (depth < kMaxDepth) unit_002E(c, 32u, depth + 1u); else { c.pc = 0x001B8780u; return; } if (c.pc != 0x001AE314u) [[unlikely]] return; }
L_001AE314:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE348; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE324u);  if (depth < kMaxDepth) unit_002E(c, 57u, depth + 1u); else { c.pc = 0x001B8C10u; return; } if (c.pc != 0x001AE324u) [[unlikely]] return; }
L_001AE324:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AE348; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], 0u + 70u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE348; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE344u);  if (depth < kMaxDepth) unit_002E(c, 27u, depth + 1u); else { c.pc = 0x001B86A0u; return; } if (c.pc != 0x001AE344u) [[unlikely]] return; }
L_001AE344:
    c.budget -= 1;
L_001AE348:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AE360:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE374u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 8u, depth + 1u); else { c.pc = 0x001B81C0u; return; } if (c.pc != 0x001AE374u) [[unlikely]] return; }
L_001AE374:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE388; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE384u);  if (depth < kMaxDepth) unit_002B(c, 177u, depth + 1u); else { c.pc = 0x001AD790u; return; } if (c.pc != 0x001AE384u) [[unlikely]] return; }
L_001AE384:
    c.budget -= 1;
L_001AE388:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AE3A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE3B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 177u, depth + 1u); else { c.pc = 0x001AD790u; return; } if (c.pc != 0x001AE3B4u) [[unlikely]] return; }
L_001AE3B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE3D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE3C4u);  if (depth < kMaxDepth) unit_002E(c, 52u, depth + 1u); else { c.pc = 0x001B8AF0u; return; } if (c.pc != 0x001AE3C4u) [[unlikely]] return; }
L_001AE3C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE3D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE3D4u);  if (depth < kMaxDepth) unit_002E(c, 34u, depth + 1u); else { c.pc = 0x001B8810u; return; } if (c.pc != 0x001AE3D4u) [[unlikely]] return; }
L_001AE3D4:
    c.budget -= 1;
L_001AE3D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AE3F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE404u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 177u, depth + 1u); else { c.pc = 0x001AD790u; return; } if (c.pc != 0x001AE404u) [[unlikely]] return; }
L_001AE404:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE428; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE414u);  if (depth < kMaxDepth) unit_002E(c, 52u, depth + 1u); else { c.pc = 0x001B8AF0u; return; } if (c.pc != 0x001AE414u) [[unlikely]] return; }
L_001AE414:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE428; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE424u);  if (depth < kMaxDepth) unit_002E(c, 39u, depth + 1u); else { c.pc = 0x001B8900u; return; } if (c.pc != 0x001AE424u) [[unlikely]] return; }
L_001AE424:
    c.budget -= 1;
L_001AE428:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AE440:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE454u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 177u, depth + 1u); else { c.pc = 0x001AD790u; return; } if (c.pc != 0x001AE454u) [[unlikely]] return; }
L_001AE454:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE468; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE464u);  if (depth < kMaxDepth) unit_002E(c, 8u, depth + 1u); else { c.pc = 0x001B81C0u; return; } if (c.pc != 0x001AE464u) [[unlikely]] return; }
L_001AE464:
    c.budget -= 1;
L_001AE468:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AE480:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE494u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 177u, depth + 1u); else { c.pc = 0x001AD790u; return; } if (c.pc != 0x001AE494u) [[unlikely]] return; }
L_001AE494:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE4A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE4A4u);  if (depth < kMaxDepth) unit_002E(c, 24u, depth + 1u); else { c.pc = 0x001B8630u; return; } if (c.pc != 0x001AE4A4u) [[unlikely]] return; }
L_001AE4A4:
    c.budget -= 1;
L_001AE4A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AE4C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE4D0u);  if (depth < kMaxDepth) unit_002B(c, 177u, depth + 1u); else { c.pc = 0x001AD790u; return; } if (c.pc != 0x001AE4D0u) [[unlikely]] return; }
L_001AE4D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001AE4E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE4F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 177u, depth + 1u); else { c.pc = 0x001AD790u; return; } if (c.pc != 0x001AE4F4u) [[unlikely]] return; }
L_001AE4F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AE520; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 786u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE518; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE510u);  if (depth < kMaxDepth) unit_002E(c, 37u, depth + 1u); else { c.pc = 0x001B8890u; return; } if (c.pc != 0x001AE510u) [[unlikely]] return; }
L_001AE510:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AE520; } }
L_001AE518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE520u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 55u, depth + 1u); else { c.pc = 0x001B8BA0u; return; } if (c.pc != 0x001AE520u) [[unlikely]] return; }
L_001AE520:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AE530:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE544u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 177u, depth + 1u); else { c.pc = 0x001AD790u; return; } if (c.pc != 0x001AE544u) [[unlikely]] return; }
L_001AE544:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE568; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE554u);  if (depth < kMaxDepth) unit_002E(c, 37u, depth + 1u); else { c.pc = 0x001B8890u; return; } if (c.pc != 0x001AE554u) [[unlikely]] return; }
L_001AE554:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE568; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE564u);  if (depth < kMaxDepth) unit_002E(c, 52u, depth + 1u); else { c.pc = 0x001B8AF0u; return; } if (c.pc != 0x001AE564u) [[unlikely]] return; }
L_001AE564:
    c.budget -= 1;
L_001AE568:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AE580:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE594u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 8u, depth + 1u); else { c.pc = 0x001B81C0u; return; } if (c.pc != 0x001AE594u) [[unlikely]] return; }
L_001AE594:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE5A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE5A4u);  if (depth < kMaxDepth) unit_002B(c, 177u, depth + 1u); else { c.pc = 0x001AD790u; return; } if (c.pc != 0x001AE5A4u) [[unlikely]] return; }
L_001AE5A4:
    c.budget -= 1;
L_001AE5A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AE5C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE5D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 8u, depth + 1u); else { c.pc = 0x001B81C0u; return; } if (c.pc != 0x001AE5D4u) [[unlikely]] return; }
L_001AE5D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE5E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE5E4u);  if (depth < kMaxDepth) unit_002E(c, 62u, depth + 1u); else { c.pc = 0x001B8DD0u; return; } if (c.pc != 0x001AE5E4u) [[unlikely]] return; }
L_001AE5E4:
    c.budget -= 1;
L_001AE5E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AE600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE614u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 8u, depth + 1u); else { c.pc = 0x001B81C0u; return; } if (c.pc != 0x001AE614u) [[unlikely]] return; }
L_001AE614:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE648; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE624u);  if (depth < kMaxDepth) unit_002B(c, 177u, depth + 1u); else { c.pc = 0x001AD790u; return; } if (c.pc != 0x001AE624u) [[unlikely]] return; }
L_001AE624:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE648; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE634u);  if (depth < kMaxDepth) unit_002E(c, 62u, depth + 1u); else { c.pc = 0x001B8DD0u; return; } if (c.pc != 0x001AE634u) [[unlikely]] return; }
L_001AE634:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE648; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE644u);  if (depth < kMaxDepth) unit_0034(c, 77u, depth + 1u); else { c.pc = 0x001D0E60u; return; } if (c.pc != 0x001AE644u) [[unlikely]] return; }
L_001AE644:
    c.budget -= 1;
L_001AE648:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AE660:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE670u);  if (depth < kMaxDepth) unit_002E(c, 8u, depth + 1u); else { c.pc = 0x001B81C0u; return; } if (c.pc != 0x001AE670u) [[unlikely]] return; }
L_001AE670:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001AE680:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AE690:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AE6A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001AE770; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE6D0u); c.f[13] = ld32((c.r[16].w[0] + 8252u));  if (depth < kMaxDepth) unit_0009(c, 164u, depth + 1u); else { c.pc = 0x00126190u; return; } if (c.pc != 0x001AE6D0u) [[unlikely]] return; }
L_001AE6D0:
    c.f[1] = ld32((c.r[16].w[0] + 8424u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    st32((c.r[16].w[0] + 8424u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8428u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    st32((c.r[16].w[0] + 8428u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AE750; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 1240u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 1244u)));
    c.f[1] = c.r[4].w[0];
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[16].w[0] + 1244u), c.r[3].w[0]);
    c.budget -= 14;
L_001AE750:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 814u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 818u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AE768; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE768u);  if (depth < kMaxDepth) unit_002E(c, 66u, depth + 1u); else { c.pc = 0x001B8E60u; return; } if (c.pc != 0x001AE768u) [[unlikely]] return; }
L_001AE768:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 814u)));
    st16((c.r[16].w[0] + 818u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001AE770:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AE780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 1025u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE7A4u); st16((c.r[4].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0039(c, 190u, depth + 1u); else { c.pc = 0x001E7410u; return; } if (c.pc != 0x001AE7A4u) [[unlikely]] return; }
L_001AE7A4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 778u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AE7C8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 778u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001AE7D8; } }
L_001AE7C8:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    set32(c.r[3], 0u - 2049u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001AE7D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AE7F0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[2], c.r[29].w[0] + 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE840u); st32((c.r[2].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_0039(c, 116u, depth + 1u); else { c.pc = 0x001E5650u; return; } if (c.pc != 0x001AE840u) [[unlikely]] return; }
L_001AE840:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F590000u);  if (t) { goto L_001AE868; } }
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 4;
L_001AE868:
    set32(c.r[19], c.r[29].w[0] + 132u);
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_001AE908; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE890u);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x001AE890u) [[unlikely]] return; }
L_001AE890:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AE8F8; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    set32(c.r[3], 0u - 513u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 8080u);
    set32(c.r[5], 0u + 1u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 988u), c.f[0]);
    st32((c.r[16].w[0] + 8292u), c.f[0]);
    st32((c.r[16].w[0] + 8252u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 984u));
    c.f[0] = ld32((c.r[16].w[0] + 988u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE8E8u); st32((c.r[16].w[0] + 1016u), c.f[0]);  if (depth < kMaxDepth) unit_003A(c, 61u, depth + 1u); else { c.pc = 0x001E9AC0u; return; } if (c.pc != 0x001AE8E8u) [[unlikely]] return; }
L_001AE8E8:
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1008u), c.f[0]);  if (t) { goto L_001AEF88; } }
    c.budget -= 1;
L_001AE8F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE900u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 109u, depth + 1u); else { c.pc = 0x00180EE0u; return; } if (c.pc != 0x001AE900u) [[unlikely]] return; }
L_001AE900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AEF88; } }
L_001AE908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE910u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x001AE910u) [[unlikely]] return; }
L_001AE910:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AE9A0; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[4].w[0] - 8076u);
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = c.r[5].d[0] | 512ull;
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[16].w[0] + 988u), c.f[0]);
    st32((c.r[16].w[0] + 8292u), c.f[0]);
    st32((c.r[16].w[0] + 8252u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 984u));
    c.f[0] = ld32((c.r[16].w[0] + 988u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 1016u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 20;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001AE970; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001AE998; } }
L_001AE970:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.budget -= 10;
L_001AE998:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 790u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001AE9A0:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], c.r[4].w[0] - 72u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 76u);  if (t) { goto L_001AE9C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001AEB90; } }
    c.budget -= 1;
L_001AE9C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE9C8u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x001AE9C8u) [[unlikely]] return; }
L_001AE9C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001AE9D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 789u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001AEA88; } }
L_001AE9D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 791u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AEA68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE9ECu); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x001AE9ECu) [[unlikely]] return; }
L_001AE9EC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 73u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[20] = c.f[0] ^ fp::kSign;  if (t) { goto L_001AEA10; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEA08u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0020(c, 215u, depth + 1u); else { c.pc = 0x00183210u; return; } if (c.pc != 0x001AEA08u) [[unlikely]] return; }
L_001AEA08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AEA60; } }
L_001AEA10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEA18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 116u, depth + 1u); else { c.pc = 0x001E5650u; return; } if (c.pc != 0x001AEA18u) [[unlikely]] return; }
L_001AEA18:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001AEA58; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001AEA40; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001AEA58; } }
    c.budget -= 1;
L_001AEA40:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEA4Cu); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0020(c, 215u, depth + 1u); else { c.pc = 0x00183210u; return; } if (c.pc != 0x001AEA4Cu) [[unlikely]] return; }
L_001AEA4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AEA60; } }
    c.budget -= 1;
L_001AEA58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEA60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 161u, depth + 1u); else { c.pc = 0x001872E0u; return; } if (c.pc != 0x001AEA60u) [[unlikely]] return; }
L_001AEA60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    st8((c.r[16].w[0] + 962u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001AEA68:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 791u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 962u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001AEA88; } }
    st8((c.r[16].w[0] + 791u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001AEA88:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[3], 0u + 73u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001AEF88; } }
    c.f[1] = ld32((c.r[16].w[0] + 2096u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 128u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 2100u));
    st32((c.r[19].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 2104u));
    st32((c.r[29].w[0] + 136u), c.f[1]);
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEACCu); st32((c.r[19].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x001AEACCu) [[unlikely]] return; }
L_001AEACC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AEB38; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 789u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AEF88; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001AEB08; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 814u)));
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001AEF88; } }
    c.budget -= 1;
L_001AEB08:
    st8((c.r[16].w[0] + 789u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEB1Cu); st32((c.r[19].w[0]), 0u);  if (depth < kMaxDepth) unit_0020(c, 313u, depth + 1u); else { c.pc = 0x00183C00u; return; } if (c.pc != 0x001AEB1Cu) [[unlikely]] return; }
L_001AEB1C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AEF88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEB30u); set32(c.r[5], 0u + 186u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001AEB30u) [[unlikely]] return; }
L_001AEB30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AEF88; } }
L_001AEB38:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 790u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AEF88; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001AEB60; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001AEF88; } }
    c.budget -= 1;
L_001AEB60:
    st8((c.r[16].w[0] + 790u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEB74u); st32((c.r[19].w[0]), 0u);  if (depth < kMaxDepth) unit_0020(c, 149u, depth + 1u); else { c.pc = 0x00181D40u; return; } if (c.pc != 0x001AEB74u) [[unlikely]] return; }
L_001AEB74:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AEF88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEB88u); set32(c.r[5], 0u + 186u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001AEB88u) [[unlikely]] return; }
L_001AEB88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AEF88; } }
L_001AEB90:
    set32(c.r[3], 0u + 70u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 71u);  if (t) { goto L_001AEBA8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001AEF88; } }
    c.budget -= 1;
L_001AEBA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEBB0u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x001AEBB0u) [[unlikely]] return; }
L_001AEBB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AEBC8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 789u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001AEC58; } }
    c.budget -= 1;
L_001AEBC8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 791u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AEC38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEBDCu); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x001AEBDCu) [[unlikely]] return; }
L_001AEBDC:
    c.f[20] = c.f[0] ^ fp::kSign;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEBE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 116u, depth + 1u); else { c.pc = 0x001E5650u; return; } if (c.pc != 0x001AEBE8u) [[unlikely]] return; }
L_001AEBE8:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001AEC28; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_001AEC10; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001AEC28; } }
L_001AEC10:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEC1Cu); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0020(c, 215u, depth + 1u); else { c.pc = 0x00183210u; return; } if (c.pc != 0x001AEC1Cu) [[unlikely]] return; }
L_001AEC1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AEC30; } }
    c.budget -= 1;
L_001AEC28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEC30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 161u, depth + 1u); else { c.pc = 0x001872E0u; return; } if (c.pc != 0x001AEC30u) [[unlikely]] return; }
L_001AEC30:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    st8((c.r[16].w[0] + 962u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001AEC38:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 791u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 962u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AEC58; } }
    st8((c.r[16].w[0] + 791u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001AEC58:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 70u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001AEC88; } }
    c.f[0] = ld32((c.r[16].w[0] + 2288u));
    set32(c.r[18], c.r[29].w[0] + 136u);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2292u));
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2296u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.f[0]);  if (t) { goto L_001AECB8; } }
L_001AEC88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[18], c.r[29].w[0] + 136u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 128u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    st32((c.r[18].w[0]), c.f[0]);
    c.budget -= 12;
L_001AECB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AECC0u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x001AECC0u) [[unlikely]] return; }
L_001AECC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AEE30; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 789u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AEF88; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001AECF0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001AEF88; } }
    c.budget -= 1;
L_001AECF0:
    st8((c.r[16].w[0] + 789u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 70u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001AED48; } }
    c.f[20] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AED18u); st32((c.r[19].w[0]), 0u);  if (depth < kMaxDepth) unit_0020(c, 313u, depth + 1u); else { c.pc = 0x00183C00u; return; } if (c.pc != 0x001AED18u) [[unlikely]] return; }
L_001AED18:
    c.f[0] = ld32((c.r[16].w[0] + 2480u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2484u));
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2488u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AED3Cu); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0020(c, 313u, depth + 1u); else { c.pc = 0x00183C00u; return; } if (c.pc != 0x001AED3Cu) [[unlikely]] return; }
L_001AED3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AEDF0; } }
    c.budget -= 1;
L_001AED48:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.f[20] = 0u;
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[29].w[0] + 140u);
    set32(c.r[21], c.r[2].w[0] + 8192u);
    c.budget -= 6;
L_001AED60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AED68u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001AED68u) [[unlikely]] return; }
L_001AED68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AED8Cu); st32((c.r[29].w[0] + 128u), c.f[0]);  if (depth < kMaxDepth) unit_0011(c, 203u, depth + 1u); else { c.pc = 0x001465C0u; return; } if (c.pc != 0x001AED8Cu) [[unlikely]] return; }
L_001AED8C:
    st32((c.r[19].w[0]), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AED98u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001AED98u) [[unlikely]] return; }
L_001AED98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEDB8u); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x001AEDB8u) [[unlikely]] return; }
L_001AEDB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AEDE0; } }
    st32((c.r[19].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEDD8u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0020(c, 313u, depth + 1u); else { c.pc = 0x00183C00u; return; } if (c.pc != 0x001AEDD8u) [[unlikely]] return; }
L_001AEDD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_001AEDE0:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 16384u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AED60u | kUnwind; return; } goto L_001AED60; } }
L_001AEDF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[5], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    st32((c.r[19].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEE10u); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0020(c, 313u, depth + 1u); else { c.pc = 0x00183C00u; return; } if (c.pc != 0x001AEE10u) [[unlikely]] return; }
L_001AEE10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AEF88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEE24u); set32(c.r[5], 0u + 186u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001AEE24u) [[unlikely]] return; }
L_001AEE24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AEF88; } }
    c.budget -= 1;
L_001AEE30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 790u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AEF88; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 744u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_001AEE58; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001AEF88; } }
    c.budget -= 1;
L_001AEE58:
    st8((c.r[16].w[0] + 790u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], 0u + 70u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001AEEB0; } }
    c.f[20] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEE80u); st32((c.r[19].w[0]), 0u);  if (depth < kMaxDepth) unit_0020(c, 149u, depth + 1u); else { c.pc = 0x00181D40u; return; } if (c.pc != 0x001AEE80u) [[unlikely]] return; }
L_001AEE80:
    c.f[0] = ld32((c.r[16].w[0] + 2480u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2484u));
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2488u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEEA4u); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0020(c, 149u, depth + 1u); else { c.pc = 0x00181D40u; return; } if (c.pc != 0x001AEEA4u) [[unlikely]] return; }
L_001AEEA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AEF50; } }
    c.budget -= 1;
L_001AEEB0:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.f[20] = 0u;
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[29].w[0] + 140u);
    set32(c.r[21], c.r[2].w[0] + 8192u);
    c.budget -= 6;
L_001AEEC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEED0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 144u, depth + 1u); else { c.pc = 0x00125E60u; return; } if (c.pc != 0x001AEED0u) [[unlikely]] return; }
L_001AEED0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEEF8u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 146u, depth + 1u); else { c.pc = 0x00125EB0u; return; } if (c.pc != 0x001AEEF8u) [[unlikely]] return; }
L_001AEEF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEF18u); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0039(c, 189u, depth + 1u); else { c.pc = 0x001E7260u; return; } if (c.pc != 0x001AEF18u) [[unlikely]] return; }
L_001AEF18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AEF40; } }
    st32((c.r[19].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEF38u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0020(c, 149u, depth + 1u); else { c.pc = 0x00181D40u; return; } if (c.pc != 0x001AEF38u) [[unlikely]] return; }
L_001AEF38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_001AEF40:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 16384u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AEEC8u | kUnwind; return; } goto L_001AEEC8; } }
L_001AEF50:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[5], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    st32((c.r[19].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEF70u); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0020(c, 149u, depth + 1u); else { c.pc = 0x00181D40u; return; } if (c.pc != 0x001AEF70u) [[unlikely]] return; }
L_001AEF70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 769u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AEF88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEF84u); set32(c.r[5], 0u + 186u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001AEF84u) [[unlikely]] return; }
L_001AEF84:
    c.budget -= 1;
L_001AEF88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001AEFB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 7296u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.f[1] = ld32((c.r[4].w[0] + 996u));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001AF008; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[2].d[0] & 194ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001AF000; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 813u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001AF030; } }
    c.budget -= 1;
L_001AF000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 813u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001AF030; } }
L_001AF008:
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 992u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AF028; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 813u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001AF030; } }
L_001AF028:
    st8((c.r[16].w[0] + 813u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001AF030:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF044u); st32((c.r[16].w[0] + 992u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0075(c, 25u, depth + 1u); else { c.pc = 0x002D46E0u; return; } if (c.pc != 0x001AF044u) [[unlikely]] return; }
L_001AF044:
    c.f[1] = ld32((c.r[16].w[0] + 988u));
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 8292u), c.f[1]);
    st32((c.r[16].w[0] + 8252u), c.f[1]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 570u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AF0B0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 570u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AF088; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CF50000u);
    c.r[3].d[0] = c.r[3].d[0] | 49807ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 984u), c.r[3].w[0]);  if (t) { goto L_001AF090; } }
    c.budget -= 1;
L_001AF088:
    st32((c.r[16].w[0] + 984u), c.f[0]);
    c.budget -= 2;
L_001AF090:
    c.f[1] = ld32((c.r[16].w[0] + 984u));
    c.f[0] = ld32((c.r[16].w[0] + 988u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 1016u), c.f[0]);
    st32((c.r[16].w[0] + 8292u), c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8252u), c.f[0]);  if (t) { goto L_001AF108; } }
    c.budget -= 1;
L_001AF0B0:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 813u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001AF0F0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001AF0D8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001AF0D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF0F8; } }
L_001AF0D8:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 1164u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 984u), c.f[0]);  if (t) { goto L_001AF0F8; } }
L_001AF0F0:
    st32((c.r[16].w[0] + 984u), c.f[0]);
    c.budget -= 2;
L_001AF0F8:
    c.f[1] = ld32((c.r[16].w[0] + 984u));
    c.f[0] = ld32((c.r[16].w[0] + 988u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 1016u), c.f[0]);
    c.budget -= 4;
L_001AF108:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AF120:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001AF140; } }
    st32((c.r[16].w[0] + 276u), 0u);
    c.budget -= 1;
L_001AF140:
    st8((c.r[16].w[0] + 797u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 515u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF150u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0074(c, 336u, depth + 1u); else { c.pc = 0x002D37E0u; return; } if (c.pc != 0x001AF150u) [[unlikely]] return; }
L_001AF150:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AF168; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43370000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 712u), c.r[2].w[0]);  if (t) { goto L_001AF178; } }
    c.budget -= 1;
L_001AF168:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D50000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st32((c.r[16].w[0] + 712u), c.r[2].w[0]);
    c.budget -= 4;
L_001AF178:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF184u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0075(c, 31u, depth + 1u); else { c.pc = 0x002D4A30u; return; } if (c.pc != 0x001AF184u) [[unlikely]] return; }
L_001AF184:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF190u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0075(c, 31u, depth + 1u); else { c.pc = 0x002D4A30u; return; } if (c.pc != 0x001AF190u) [[unlikely]] return; }
L_001AF190:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF19Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0075(c, 31u, depth + 1u); else { c.pc = 0x002D4A30u; return; } if (c.pc != 0x001AF19Cu) [[unlikely]] return; }
L_001AF19C:
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 516u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 33u);
    st32((c.r[16].w[0] + 1488u), 0u);
    st32((c.r[16].w[0] + 504u), 0u);
    st32((c.r[16].w[0] + 508u), 0u);
    st32((c.r[16].w[0] + 1492u), 0u);
    st32((c.r[16].w[0] + 1508u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 736u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF1DCu); st32((c.r[16].w[0] + 740u), 0u);  if (depth < kMaxDepth) unit_002E(c, 67u, depth + 1u); else { c.pc = 0x001B8F60u; return; } if (c.pc != 0x001AF1DCu) [[unlikely]] return; }
L_001AF1DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF1E8u); set32(c.r[5], 0u + 33u);  if (depth < kMaxDepth) unit_002E(c, 66u, depth + 1u); else { c.pc = 0x001B8E60u; return; } if (c.pc != 0x001AF1E8u) [[unlikely]] return; }
L_001AF1E8:
    st8((c.r[16].w[0] + 571u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8658u));
    set32(c.r[2], c.r[2].w[0] - 10704u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF20Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AF20Cu) [[unlikely]] return; }
L_001AF20C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    set32(c.r[2], 0u - 24576u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 12u);
    c.r[3].d[0] = c.r[3].d[0] & 3584ull;
    st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 822u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF234u); st16((c.r[16].w[0] + 822u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004E(c, 183u, depth + 1u); else { c.pc = 0x0023AAD0u; return; } if (c.pc != 0x001AF234u) [[unlikely]] return; }
L_001AF234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF23Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 232u, depth + 1u); else { c.pc = 0x0023BE60u; return; } if (c.pc != 0x001AF23Cu) [[unlikely]] return; }
L_001AF23C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF244u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 432u, depth + 1u); else { c.pc = 0x002B36A0u; return; } if (c.pc != 0x001AF244u) [[unlikely]] return; }
L_001AF244:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AF260:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 12u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 571u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AF2C0; } }
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
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001AF2C0; } }
    set32(c.r[2], 0u - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 712u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF2B8u); st8((c.r[4].w[0] + 517u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002B(c, 451u, depth + 1u); else { c.pc = 0x001AFFB0u; return; } if (c.pc != 0x001AF2B8u) [[unlikely]] return; }
L_001AF2B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF320; } }
L_001AF2C0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 571u));
    set32(c.r[2], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 12u);  if (t) { goto L_001AF2F0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AF2E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF300; } }
L_001AF2E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF2E8u);  if (depth < kMaxDepth) unit_002B(c, 449u, depth + 1u); else { c.pc = 0x001AFF70u; return; } if (c.pc != 0x001AF2E8u) [[unlikely]] return; }
L_001AF2E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF320; } }
L_001AF2F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF2F8u);  if (depth < kMaxDepth) unit_002C(c, 1u, depth + 1u); else { c.pc = 0x001B0000u; return; } if (c.pc != 0x001AF2F8u) [[unlikely]] return; }
L_001AF2F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF320; } }
L_001AF300:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8658u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 10640u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AF320u) [[unlikely]] return; }
L_001AF320:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001AF330:
    set32(c.r[3], 0u + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001AF340:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001AF400; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF374u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001AF374u) [[unlikely]] return; }
L_001AF374:
    c.r[3].d[0] = c.r[2].d[0] & 31ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 10656u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF398u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001AF398u) [[unlikely]] return; }
L_001AF398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF3A0u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x001AF3A0u) [[unlikely]] return; }
L_001AF3A0:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF3ACu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0045(c, 210u, depth + 1u); else { c.pc = 0x00216220u; return; } if (c.pc != 0x001AF3ACu) [[unlikely]] return; }
L_001AF3AC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AF400; } }
    set32(c.r[2], 0u + 2u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AF3F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF3E8u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x001AF3E8u) [[unlikely]] return; }
L_001AF3E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF400; } }
L_001AF3F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF3FCu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001AF3FCu) [[unlikely]] return; }
L_001AF3FC:
    c.budget -= 1;
L_001AF400:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[16].w[0] + 712u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 712u), c.f[1]);  if (t) { goto L_001AF4B8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1236u)));
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 1236u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001AF460; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 10824u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF458u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_002C(c, 13u, depth + 1u); else { c.pc = 0x001B0060u; return; } if (c.pc != 0x001AF458u) [[unlikely]] return; }
L_001AF458:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF478; } }
L_001AF460:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 10824u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF474u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002C(c, 13u, depth + 1u); else { c.pc = 0x001B0060u; return; } if (c.pc != 0x001AF474u) [[unlikely]] return; }
L_001AF474:
    c.budget -= 1;
L_001AF478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF480u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 451u, depth + 1u); else { c.pc = 0x001AFFB0u; return; } if (c.pc != 0x001AF480u) [[unlikely]] return; }
L_001AF480:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AF4A8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AF4B8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_001AF4B8; } }
    c.budget -= 1;
L_001AF4A8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF4B4u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x001AF4B4u) [[unlikely]] return; }
L_001AF4B4:
    c.budget -= 1;
L_001AF4B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AF4D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AF4E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u - 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] - 10816u);
    set32(c.r[3], ld32((c.r[4].w[0] + 1236u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 1236u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF51Cu); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002C(c, 13u, depth + 1u); else { c.pc = 0x001B0060u; return; } if (c.pc != 0x001AF51Cu) [[unlikely]] return; }
L_001AF51C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF524u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 451u, depth + 1u); else { c.pc = 0x001AFFB0u; return; } if (c.pc != 0x001AF524u) [[unlikely]] return; }
L_001AF524:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AF548; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AF558; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_001AF558; } }
L_001AF548:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF554u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x001AF554u) [[unlikely]] return; }
L_001AF554:
    c.budget -= 1;
L_001AF558:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AF570:
    set32(c.r[3], 0u + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001AF580:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001AF640; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF5B4u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001AF5B4u) [[unlikely]] return; }
L_001AF5B4:
    c.r[3].d[0] = c.r[2].d[0] & 31ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 10624u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 5;
L_001AF5C8:
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF5D8u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001AF5D8u) [[unlikely]] return; }
L_001AF5D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF5E0u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x001AF5E0u) [[unlikely]] return; }
L_001AF5E0:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF5ECu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0045(c, 210u, depth + 1u); else { c.pc = 0x00216220u; return; } if (c.pc != 0x001AF5ECu) [[unlikely]] return; }
L_001AF5EC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AF640; } }
    set32(c.r[2], 0u + 2u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AF630; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF628u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x001AF628u) [[unlikely]] return; }
L_001AF628:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF640; } }
L_001AF630:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF63Cu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001AF63Cu) [[unlikely]] return; }
L_001AF63C:
    c.budget -= 1;
L_001AF640:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[16].w[0] + 712u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 712u), c.f[1]);  if (t) { goto L_001AF6F0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1236u)));
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 1236u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AF6A0; } }
    set32(c.r[5], c.r[28].w[0] - 32572u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF694u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_002C(c, 13u, depth + 1u); else { c.pc = 0x001B0060u; return; } if (c.pc != 0x001AF694u) [[unlikely]] return; }
L_001AF694:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF6B0; } }
    c.budget -= 1;
L_001AF6A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[28].w[0] - 32572u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF6B0u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002C(c, 13u, depth + 1u); else { c.pc = 0x001B0060u; return; } if (c.pc != 0x001AF6B0u) [[unlikely]] return; }
L_001AF6B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF6B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 451u, depth + 1u); else { c.pc = 0x001AFFB0u; return; } if (c.pc != 0x001AF6B8u) [[unlikely]] return; }
L_001AF6B8:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AF6E0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AF6F0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_001AF6F0; } }
    c.budget -= 1;
L_001AF6E0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF6ECu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x001AF6ECu) [[unlikely]] return; }
L_001AF6EC:
    c.budget -= 1;
L_001AF6F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AF700:
    set32(c.r[3], 0u + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001AF710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001AF7D0; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF744u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001AF744u) [[unlikely]] return; }
L_001AF744:
    c.r[3].d[0] = c.r[2].d[0] & 31ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 10592u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF768u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001AF768u) [[unlikely]] return; }
L_001AF768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF770u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x001AF770u) [[unlikely]] return; }
L_001AF770:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF77Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0045(c, 210u, depth + 1u); else { c.pc = 0x00216220u; return; } if (c.pc != 0x001AF77Cu) [[unlikely]] return; }
L_001AF77C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AF7D0; } }
    set32(c.r[2], 0u + 2u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AF7C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF7B8u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x001AF7B8u) [[unlikely]] return; }
L_001AF7B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF7D0; } }
L_001AF7C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF7CCu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001AF7CCu) [[unlikely]] return; }
L_001AF7CC:
    c.budget -= 1;
L_001AF7D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[16].w[0] + 712u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 712u), c.f[1]);  if (t) { goto L_001AF858; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1236u)));
    set32(c.r[2], 0u - 3u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 10800u);
    set32(c.r[6], 0u + 2u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF81Cu); st32((c.r[16].w[0] + 1236u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 13u, depth + 1u); else { c.pc = 0x001B0060u; return; } if (c.pc != 0x001AF81Cu) [[unlikely]] return; }
L_001AF81C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF824u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 451u, depth + 1u); else { c.pc = 0x001AFFB0u; return; } if (c.pc != 0x001AF824u) [[unlikely]] return; }
L_001AF824:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AF848; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AF858; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_001AF858; } }
L_001AF848:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF854u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x001AF854u) [[unlikely]] return; }
L_001AF854:
    c.budget -= 1;
L_001AF858:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AF870:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AF880:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u - 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] - 10784u);
    set32(c.r[3], ld32((c.r[4].w[0] + 1236u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 1236u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF8BCu); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002C(c, 13u, depth + 1u); else { c.pc = 0x001B0060u; return; } if (c.pc != 0x001AF8BCu) [[unlikely]] return; }
L_001AF8BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF8C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 451u, depth + 1u); else { c.pc = 0x001AFFB0u; return; } if (c.pc != 0x001AF8C4u) [[unlikely]] return; }
L_001AF8C4:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AF8E8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AF8F8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_001AF8F8; } }
L_001AF8E8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF8F4u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x001AF8F4u) [[unlikely]] return; }
L_001AF8F4:
    c.budget -= 1;
L_001AF8F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AF910:
    set32(c.r[3], 0u + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001AF920:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001AF9E0; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF954u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001AF954u) [[unlikely]] return; }
L_001AF954:
    c.r[3].d[0] = c.r[2].d[0] & 31ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 10560u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF978u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001AF978u) [[unlikely]] return; }
L_001AF978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF980u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x001AF980u) [[unlikely]] return; }
L_001AF980:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF98Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0045(c, 210u, depth + 1u); else { c.pc = 0x00216220u; return; } if (c.pc != 0x001AF98Cu) [[unlikely]] return; }
L_001AF98C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AF9E0; } }
    set32(c.r[2], 0u + 2u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AF9D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF9C8u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x001AF9C8u) [[unlikely]] return; }
    goto L_001AF9C8;
L_001AF9C4:
    set32(c.r[5], 0u + 9u);
    c.budget -= 1;
L_001AF9C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF9E0; } }
L_001AF9D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF9DCu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001AF9DCu) [[unlikely]] return; }
L_001AF9DC:
    c.budget -= 1;
L_001AF9E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[16].w[0] + 712u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 712u), c.f[1]);  if (t) { goto L_001AFA98; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1236u)));
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 1236u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);  if (t) { goto L_001AFA40; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 10768u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFA38u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_002C(c, 13u, depth + 1u); else { c.pc = 0x001B0060u; return; } if (c.pc != 0x001AFA38u) [[unlikely]] return; }
L_001AFA38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AFA58; } }
L_001AFA40:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 10768u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFA54u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_002C(c, 13u, depth + 1u); else { c.pc = 0x001B0060u; return; } if (c.pc != 0x001AFA54u) [[unlikely]] return; }
L_001AFA54:
    c.budget -= 1;
L_001AFA58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFA60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 451u, depth + 1u); else { c.pc = 0x001AFFB0u; return; } if (c.pc != 0x001AFA60u) [[unlikely]] return; }
L_001AFA60:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AFA88; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AFA98; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_001AFA98; } }
    c.budget -= 1;
L_001AFA88:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFA94u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x001AFA94u) [[unlikely]] return; }
L_001AFA94:
    c.budget -= 1;
L_001AFA98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AFAB0:
    set32(c.r[3], 0u + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001AFAC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001AFB80; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFAF4u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001AFAF4u) [[unlikely]] return; }
L_001AFAF4:
    c.r[3].d[0] = c.r[2].d[0] & 31ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 10528u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFB18u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001AFB18u) [[unlikely]] return; }
L_001AFB18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFB20u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x001AFB20u) [[unlikely]] return; }
L_001AFB20:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFB2Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0045(c, 210u, depth + 1u); else { c.pc = 0x00216220u; return; } if (c.pc != 0x001AFB2Cu) [[unlikely]] return; }
L_001AFB2C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AFB80; } }
    set32(c.r[2], 0u + 2u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AFB70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFB68u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x001AFB68u) [[unlikely]] return; }
L_001AFB68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AFB80; } }
L_001AFB70:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFB7Cu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001AFB7Cu) [[unlikely]] return; }
L_001AFB7C:
    c.budget -= 1;
L_001AFB80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[16].w[0] + 712u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 712u), c.f[1]);  if (t) { goto L_001AFC08; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1236u)));
    set32(c.r[2], 0u - 5u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 10752u);
    set32(c.r[6], 0u + 2u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFBCCu); st32((c.r[16].w[0] + 1236u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 13u, depth + 1u); else { c.pc = 0x001B0060u; return; } if (c.pc != 0x001AFBCCu) [[unlikely]] return; }
L_001AFBCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFBD4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 451u, depth + 1u); else { c.pc = 0x001AFFB0u; return; } if (c.pc != 0x001AFBD4u) [[unlikely]] return; }
L_001AFBD4:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AFBF8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AFC08; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_001AFC08; } }
L_001AFBF8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFC04u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x001AFC04u) [[unlikely]] return; }
L_001AFC04:
    c.budget -= 1;
L_001AFC08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AFC20:
    set32(c.r[3], 0u + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001AFC30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001AFCF0; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFC64u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0043(c, 375u, depth + 1u); else { c.pc = 0x0020F4F0u; return; } if (c.pc != 0x001AFC64u) [[unlikely]] return; }
L_001AFC64:
    c.r[3].d[0] = c.r[2].d[0] & 31ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00460000u);
    set32(c.r[2], c.r[2].w[0] - 10496u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFC88u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_0009(c, 180u, depth + 1u); else { c.pc = 0x00126850u; return; } if (c.pc != 0x001AFC88u) [[unlikely]] return; }
L_001AFC88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFC90u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0009(c, 198u, depth + 1u); else { c.pc = 0x001271B0u; return; } if (c.pc != 0x001AFC90u) [[unlikely]] return; }
L_001AFC90:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFC9Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0045(c, 210u, depth + 1u); else { c.pc = 0x00216220u; return; } if (c.pc != 0x001AFC9Cu) [[unlikely]] return; }
L_001AFC9C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AFCF0; } }
    set32(c.r[2], 0u + 2u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23788u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001AFCE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFCD8u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_004E(c, 106u, depth + 1u); else { c.pc = 0x002393D0u; return; } if (c.pc != 0x001AFCD8u) [[unlikely]] return; }
L_001AFCD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AFCF0; } }
L_001AFCE0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFCECu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_004E(c, 84u, depth + 1u); else { c.pc = 0x00238E10u; return; } if (c.pc != 0x001AFCECu) [[unlikely]] return; }
L_001AFCEC:
    c.budget -= 1;
L_001AFCF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[16].w[0] + 712u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 712u), c.f[1]);  if (t) { goto L_001AFD78; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1236u)));
    set32(c.r[2], 0u - 3u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 10720u);
    set32(c.r[6], 0u + 2u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFD3Cu); st32((c.r[16].w[0] + 1236u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 13u, depth + 1u); else { c.pc = 0x001B0060u; return; } if (c.pc != 0x001AFD3Cu) [[unlikely]] return; }
L_001AFD3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFD44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 451u, depth + 1u); else { c.pc = 0x001AFFB0u; return; } if (c.pc != 0x001AFD44u) [[unlikely]] return; }
L_001AFD44:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AFD68; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AFD78; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_001AFD78; } }
L_001AFD68:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFD74u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x001AFD74u) [[unlikely]] return; }
L_001AFD74:
    c.budget -= 1;
L_001AFD78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AFD90:
    set32(c.r[3], 0u + 255u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001AFDA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u - 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] - 10696u);
    set32(c.r[3], ld32((c.r[4].w[0] + 1236u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 1236u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFDDCu); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002C(c, 13u, depth + 1u); else { c.pc = 0x001B0060u; return; } if (c.pc != 0x001AFDDCu) [[unlikely]] return; }
L_001AFDDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFDE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 451u, depth + 1u); else { c.pc = 0x001AFFB0u; return; } if (c.pc != 0x001AFDE4u) [[unlikely]] return; }
L_001AFDE4:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AFE08; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AFE18; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_001AFE18; } }
L_001AFE08:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFE14u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x001AFE14u) [[unlikely]] return; }
L_001AFE14:
    c.budget -= 1;
L_001AFE18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AFE30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AFE40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u - 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] - 10688u);
    set32(c.r[3], ld32((c.r[4].w[0] + 1236u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 1236u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFE7Cu); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002C(c, 13u, depth + 1u); else { c.pc = 0x001B0060u; return; } if (c.pc != 0x001AFE7Cu) [[unlikely]] return; }
L_001AFE7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFE84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 451u, depth + 1u); else { c.pc = 0x001AFFB0u; return; } if (c.pc != 0x001AFE84u) [[unlikely]] return; }
L_001AFE84:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AFEA8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AFEB8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_001AFEB8; } }
L_001AFEA8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFEB4u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x001AFEB4u) [[unlikely]] return; }
L_001AFEB4:
    c.budget -= 1;
L_001AFEB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AFED0:
    set32(c.r[3], 0u + 255u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 516u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001AFEE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u - 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] - 10672u);
    set32(c.r[3], ld32((c.r[4].w[0] + 1236u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 1236u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23784u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFF1Cu); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002C(c, 13u, depth + 1u); else { c.pc = 0x001B0060u; return; } if (c.pc != 0x001AFF1Cu) [[unlikely]] return; }
L_001AFF1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFF24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 451u, depth + 1u); else { c.pc = 0x001AFFB0u; return; } if (c.pc != 0x001AFF24u) [[unlikely]] return; }
L_001AFF24:
    set32(c.r[4], ld32((c.r[28].w[0] - 23788u)));
    c.budget -= 1;
L_001AFF28:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AFF48; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AFF58; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_001AFF58; } }
L_001AFF48:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFF54u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0049(c, 393u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x001AFF54u) [[unlikely]] return; }
L_001AFF54:
    c.budget -= 1;
L_001AFF58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AFF70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 709u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AFF88; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 709u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001AFFA8; } }
L_001AFF88:
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    set32(c.r[3], 0u + 3u);
    st8((c.r[4].w[0] + 8287u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 8327u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001AFFA0:
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 1236u), 0u);
    c.budget -= 2;
L_001AFFA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AFFB0:
    st32((c.r[4].w[0] + 108u), 0u);
    set32(c.r[5], 0u + 11u);
    st32((c.r[4].w[0] + 104u), 0u);
    set32(c.r[3], 0u + 30u);
    st8((c.r[4].w[0] + 8287u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 8327u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 571u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 1236u), 0u);
    set32(c.r[5], ld32((c.r[28].w[0] - 23788u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 20u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AFFF8; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 1;
L_001AFFE8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001AFFF8; } }
    st8((c.r[5].w[0] + 22u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001AFFF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
}

}
