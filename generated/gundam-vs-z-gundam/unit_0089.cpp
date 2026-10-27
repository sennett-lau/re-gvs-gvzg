#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0089[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0,
    0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0,
    0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0,
    0, 0, 35, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0,
    0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0,
    44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0,
    48, 0, 0, 0, 0, 0, 49, 0, 50, 0, 51, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0,
    0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0,
    68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0,
    0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77,
    0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0,
    0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 111, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0,
    120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124,
    125, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0,
    0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0,
    0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0,
    0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144,
    0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0,
    0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0,
    0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0,
    0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0,
    0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0,
    0, 192, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0,
    0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0,
    0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0,
    0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 227, 0,
    0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0,
    230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 233, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 237, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0,
    0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0,
    256, 0, 257, 0, 0, 0, 258, 0, 259, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    262, 0, 0, 263, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0,
    280, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 284, 0, 285, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0,
    288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 294, 0, 295, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0,
    0, 0, 303, 0, 0, 0, 304, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 307, 0, 308, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 0, 317,
    0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    323, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 330,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0,
    333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0,
    0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0,
    0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 366, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0089(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00324000;
    case 2u: goto L_00324018;
    case 3u: goto L_00324020;
    case 4u: goto L_00324030;
    case 5u: goto L_00324054;
    case 6u: goto L_00324060;
    case 7u: goto L_00324090;
    case 8u: goto L_003240A0;
    case 9u: goto L_003240D0;
    case 10u: goto L_00324150;
    case 11u: goto L_0032416C;
    case 12u: goto L_00324174;
    case 13u: goto L_00324188;
    case 14u: goto L_003241A8;
    case 15u: goto L_003241B0;
    case 16u: goto L_003241C0;
    case 17u: goto L_00324208;
    case 18u: goto L_00324258;
    case 19u: goto L_00324290;
    case 20u: goto L_003242A8;
    case 21u: goto L_003242E0;
    case 22u: goto L_003242F8;
    case 23u: goto L_00324308;
    case 24u: goto L_00324310;
    case 25u: goto L_00324328;
    case 26u: goto L_00324338;
    case 27u: goto L_00324340;
    case 28u: goto L_00324360;
    case 29u: goto L_003243A4;
    case 30u: goto L_003243C0;
    case 31u: goto L_003243D0;
    case 32u: goto L_003243D8;
    case 33u: goto L_00324458;
    case 34u: goto L_00324478;
    case 35u: goto L_00324488;
    case 36u: goto L_00324498;
    case 37u: goto L_003244A0;
    case 38u: goto L_003244E4;
    case 39u: goto L_003244F8;
    case 40u: goto L_00324508;
    case 41u: goto L_00324520;
    case 42u: goto L_00324560;
    case 43u: goto L_00324570;
    case 44u: goto L_00324580;
    case 45u: goto L_00324598;
    case 46u: goto L_003245DC;
    case 47u: goto L_003245F0;
    case 48u: goto L_00324600;
    case 49u: goto L_00324618;
    case 50u: goto L_00324620;
    case 51u: goto L_00324628;
    case 52u: goto L_00324630;
    case 53u: goto L_00324638;
    case 54u: goto L_00324674;
    case 55u: goto L_00324688;
    case 56u: goto L_00324698;
    case 57u: goto L_003246B0;
    case 58u: goto L_003246B8;
    case 59u: goto L_003246C0;
    case 60u: goto L_00324728;
    case 61u: goto L_00324738;
    case 62u: goto L_00324748;
    case 63u: goto L_00324760;
    case 64u: goto L_003247C0;
    case 65u: goto L_003247D0;
    case 66u: goto L_003247E0;
    case 67u: goto L_003247F8;
    case 68u: goto L_00324800;
    case 69u: goto L_00324808;
    case 70u: goto L_0032484C;
    case 71u: goto L_00324860;
    case 72u: goto L_00324870;
    case 73u: goto L_00324888;
    case 74u: goto L_003248B0;
    case 75u: goto L_003248D4;
    case 76u: goto L_003248E0;
    case 77u: goto L_0032497C;
    case 78u: goto L_00324990;
    case 79u: goto L_003249C0;
    case 80u: goto L_003249E0;
    case 81u: goto L_003249F0;
    case 82u: goto L_00324A30;
    case 83u: goto L_00324A50;
    case 84u: goto L_00324A70;
    case 85u: goto L_00324A88;
    case 86u: goto L_00324AA0;
    case 87u: goto L_00324AB8;
    case 88u: goto L_00324AD0;
    case 89u: goto L_00324B68;
    case 90u: goto L_00324B78;
    case 91u: goto L_00324C10;
    case 92u: goto L_00324C20;
    case 93u: goto L_00324CB8;
    case 94u: goto L_00324D00;
    case 95u: goto L_00324D20;
    case 96u: goto L_00324D48;
    case 97u: goto L_00324DB8;
    case 98u: goto L_00324DC0;
    case 99u: goto L_00324E00;
    case 100u: goto L_00324E20;
    case 101u: goto L_00324E40;
    case 102u: goto L_00324ED8;
    case 103u: goto L_003250A0;
    case 104u: goto L_003250E0;
    case 105u: goto L_00325110;
    case 106u: goto L_00325170;
    case 107u: goto L_00325298;
    case 108u: goto L_003252F8;
    case 109u: goto L_00325358;
    case 110u: goto L_00325370;
    case 111u: goto L_00325408;
    case 112u: goto L_00325410;
    case 113u: goto L_00325420;
    case 114u: goto L_00325438;
    case 115u: goto L_00325440;
    case 116u: goto L_003254C8;
    case 117u: goto L_00325508;
    case 118u: goto L_00325520;
    case 119u: goto L_0032556C;
    case 120u: goto L_00325580;
    case 121u: goto L_00325598;
    case 122u: goto L_00325650;
    case 123u: goto L_003256EC;
    case 124u: goto L_003256FC;
    case 125u: goto L_00325700;
    case 126u: goto L_00325708;
    case 127u: goto L_00325714;
    case 128u: goto L_00325748;
    case 129u: goto L_00325758;
    case 130u: goto L_00325770;
    case 131u: goto L_0032578C;
    case 132u: goto L_003257A0;
    case 133u: goto L_003257B8;
    case 134u: goto L_003257CC;
    case 135u: goto L_003257E0;
    case 136u: goto L_003257F4;
    case 137u: goto L_00325818;
    case 138u: goto L_0032582C;
    case 139u: goto L_00325850;
    case 140u: goto L_00325868;
    case 141u: goto L_00325878;
    case 142u: goto L_00325888;
    case 143u: goto L_003258A0;
    case 144u: goto L_003258FC;
    case 145u: goto L_00325920;
    case 146u: goto L_00325930;
    case 147u: goto L_00325990;
    case 148u: goto L_003259C0;
    case 149u: goto L_003259D0;
    case 150u: goto L_00325A00;
    case 151u: goto L_00325A10;
    case 152u: goto L_00325A40;
    case 153u: goto L_00325A6C;
    case 154u: goto L_00325A90;
    case 155u: goto L_00325AA0;
    case 156u: goto L_00325AC0;
    case 157u: goto L_00325AD0;
    case 158u: goto L_00325B14;
    case 159u: goto L_00325B30;
    case 160u: goto L_00325B80;
    case 161u: goto L_00325B90;
    case 162u: goto L_00325BF4;
    case 163u: goto L_00325C10;
    case 164u: goto L_00325C40;
    case 165u: goto L_00325C60;
    case 166u: goto L_00325C78;
    case 167u: goto L_00325C8C;
    case 168u: goto L_00325CB0;
    case 169u: goto L_00325CE0;
    case 170u: goto L_00325D10;
    case 171u: goto L_00325D40;
    case 172u: goto L_00325D70;
    case 173u: goto L_00325DA0;
    case 174u: goto L_00325DC8;
    case 175u: goto L_00325DF8;
    case 176u: goto L_00325E0C;
    case 177u: goto L_00325E20;
    case 178u: goto L_00325E80;
    case 179u: goto L_00325E9C;
    case 180u: goto L_00325EB0;
    case 181u: goto L_00325ED0;
    case 182u: goto L_00325EE0;
    case 183u: goto L_00325EF0;
    case 184u: goto L_00325F30;
    case 185u: goto L_00325F40;
    case 186u: goto L_00325F50;
    case 187u: goto L_00325F90;
    case 188u: goto L_00325FA0;
    case 189u: goto L_00325FC4;
    case 190u: goto L_00325FD0;
    case 191u: goto L_00325FE0;
    case 192u: goto L_00326004;
    case 193u: goto L_00326010;
    case 194u: goto L_00326020;
    case 195u: goto L_00326044;
    case 196u: goto L_00326050;
    case 197u: goto L_00326060;
    case 198u: goto L_00326094;
    case 199u: goto L_003260A0;
    case 200u: goto L_003260B0;
    case 201u: goto L_003260D4;
    case 202u: goto L_003260E0;
    case 203u: goto L_003260F0;
    case 204u: goto L_00326118;
    case 205u: goto L_00326130;
    case 206u: goto L_00326144;
    case 207u: goto L_00326150;
    case 208u: goto L_003261A0;
    case 209u: goto L_003261B4;
    case 210u: goto L_003261C0;
    case 211u: goto L_003261F0;
    case 212u: goto L_00326204;
    case 213u: goto L_00326218;
    case 214u: goto L_00326250;
    case 215u: goto L_0032626C;
    case 216u: goto L_00326278;
    case 217u: goto L_0032628C;
    case 218u: goto L_003262C0;
    case 219u: goto L_003262D8;
    case 220u: goto L_003262F0;
    case 221u: goto L_00326348;
    case 222u: goto L_00326360;
    case 223u: goto L_00326378;
    case 224u: goto L_00326390;
    case 225u: goto L_003263D0;
    case 226u: goto L_003263F0;
    case 227u: goto L_003263F8;
    case 228u: goto L_0032640C;
    case 229u: goto L_00326470;
    case 230u: goto L_00326480;
    case 231u: goto L_003264A8;
    case 232u: goto L_003264BC;
    case 233u: goto L_003264C4;
    case 234u: goto L_003264CC;
    case 235u: goto L_003264E4;
    case 236u: goto L_003264F0;
    case 237u: goto L_00326518;
    case 238u: goto L_00326520;
    case 239u: goto L_00326528;
    case 240u: goto L_00326550;
    case 241u: goto L_00326560;
    case 242u: goto L_003265D8;
    case 243u: goto L_003265FC;
    case 244u: goto L_00326640;
    case 245u: goto L_0032669C;
    case 246u: goto L_003266B0;
    case 247u: goto L_003266CC;
    case 248u: goto L_003266F0;
    case 249u: goto L_00326710;
    case 250u: goto L_00326730;
    case 251u: goto L_00326740;
    case 252u: goto L_00326780;
    case 253u: goto L_003267B0;
    case 254u: goto L_003267E8;
    case 255u: goto L_003267F8;
    case 256u: goto L_00326800;
    case 257u: goto L_00326808;
    case 258u: goto L_00326818;
    case 259u: goto L_00326820;
    case 260u: goto L_00326830;
    case 261u: goto L_00326840;
    case 262u: goto L_00326880;
    case 263u: goto L_0032688C;
    case 264u: goto L_00326898;
    case 265u: goto L_003268D0;
    case 266u: goto L_003268D8;
    case 267u: goto L_00326900;
    case 268u: goto L_00326940;
    case 269u: goto L_0032694C;
    case 270u: goto L_00326958;
    case 271u: goto L_00326960;
    case 272u: goto L_00326980;
    case 273u: goto L_00326990;
    case 274u: goto L_003269A0;
    case 275u: goto L_00326AB0;
    case 276u: goto L_00326AC0;
    case 277u: goto L_00326AD0;
    case 278u: goto L_00326AE0;
    case 279u: goto L_00326AF0;
    case 280u: goto L_00326B00;
    case 281u: goto L_00326B10;
    case 282u: goto L_00326B20;
    case 283u: goto L_00326B30;
    case 284u: goto L_00326B40;
    case 285u: goto L_00326B48;
    case 286u: goto L_00326B58;
    case 287u: goto L_00326B68;
    case 288u: goto L_00326B80;
    case 289u: goto L_00326BB0;
    case 290u: goto L_00326C04;
    case 291u: goto L_00326C60;
    case 292u: goto L_00326C90;
    case 293u: goto L_00326CC0;
    case 294u: goto L_00326D08;
    case 295u: goto L_00326D10;
    case 296u: goto L_00326D1C;
    case 297u: goto L_00326D28;
    case 298u: goto L_00326D3C;
    case 299u: goto L_00326D8C;
    case 300u: goto L_00326DAC;
    case 301u: goto L_00326DBC;
    case 302u: goto L_00326DF4;
    case 303u: goto L_00326E08;
    case 304u: goto L_00326E18;
    case 305u: goto L_00326E20;
    case 306u: goto L_00326E30;
    case 307u: goto L_00326E8C;
    case 308u: goto L_00326E94;
    case 309u: goto L_00326EA0;
    case 310u: goto L_00326EAC;
    case 311u: goto L_00326EF0;
    case 312u: goto L_00326F24;
    case 313u: goto L_00326F64;
    case 314u: goto L_00326F98;
    case 315u: goto L_00326FE0;
    case 316u: goto L_00326FE8;
    case 317u: goto L_00326FFC;
    case 318u: goto L_00327004;
    case 319u: goto L_00327030;
    case 320u: goto L_00327070;
    case 321u: goto L_003270A0;
    case 322u: goto L_003270C4;
    case 323u: goto L_00327100;
    case 324u: goto L_00327108;
    case 325u: goto L_0032711C;
    case 326u: goto L_00327140;
    case 327u: goto L_00327154;
    case 328u: goto L_00327170;
    case 329u: goto L_003271E0;
    case 330u: goto L_003271FC;
    case 331u: goto L_00327260;
    case 332u: goto L_00327270;
    case 333u: goto L_00327280;
    case 334u: goto L_003272D0;
    case 335u: goto L_00327310;
    case 336u: goto L_0032733C;
    case 337u: goto L_00327380;
    case 338u: goto L_00327410;
    case 339u: goto L_00327420;
    case 340u: goto L_00327430;
    case 341u: goto L_0032748C;
    case 342u: goto L_003274C0;
    case 343u: goto L_00327520;
    case 344u: goto L_00327590;
    case 345u: goto L_00327650;
    case 346u: goto L_003276A0;
    case 347u: goto L_00327760;
    case 348u: goto L_003277C0;
    case 349u: goto L_003278A0;
    case 350u: goto L_003278E0;
    case 351u: goto L_00327A70;
    case 352u: goto L_00327AF0;
    case 353u: goto L_00327BB0;
    case 354u: goto L_00327BE8;
    case 355u: goto L_00327CA0;
    case 356u: goto L_00327D1C;
    case 357u: goto L_00327D48;
    case 358u: goto L_00327D6C;
    case 359u: goto L_00327D90;
    case 360u: goto L_00327DD0;
    case 361u: goto L_00327DE0;
    case 362u: goto L_00327E04;
    case 363u: goto L_00327E28;
    case 364u: goto L_00327E50;
    case 365u: goto L_00327E60;
    case 366u: goto L_00327E68;
    case 367u: goto L_00327EA8;
    case 368u: goto L_00327EC0;
    case 369u: goto L_00327EDC;
    case 370u: goto L_00327EF4;
    case 371u: goto L_00327F7C;
    case 372u: goto L_00327FB8;
    default: bad_entry(c, 0x00324000u); return;
    }
L_00324000:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 2582u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0] + 2582u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324018u); st16((c.r[2].w[0] + 2586u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x00324018u) [[unlikely]] return; }
L_00324018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324020u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00324020u) [[unlikely]] return; }
L_00324020:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324030u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_008D(c, 98u, depth + 1u); else { c.pc = 0x003351D0u; return; } if (c.pc != 0x00324030u) [[unlikely]] return; }
L_00324030:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B00000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.f[13] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324054u); set32(c.r[4], c.r[4].w[0] - 16272u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00324054u) [[unlikely]] return; }
L_00324054:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00324090; } }
    c.budget -= 1;
L_00324060:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2586u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[5].w[0] + 2586u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2586u)));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00324090; } }
    st8((c.r[4].w[0] + 2578u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st16((c.r[3].w[0] + 2580u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 9836u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_00324090:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003240A0:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003240C8; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2590u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);  if (t) { goto L_003240C8; } }
    c.r[3].d[0] = ld8((c.r[1].w[0] + 15544u));
    st8((c.r[5].w[0] + 2603u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003240C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003240D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 1856u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[16].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 11;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00324108; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00324350; } }
    c.budget -= 1;
L_00324108:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 9836u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_00324320; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003242F0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003242A0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00324250; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00324148; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00324350; } }
    c.budget -= 1;
L_00324148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324150u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00324150u) [[unlikely]] return; }
L_00324150:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00324180; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032416Cu); st8((c.r[2].w[0] + 9836u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x0032416Cu) [[unlikely]] return; }
L_0032416C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324174u); set32(c.r[2], 0u + 1u);  if (depth < kMaxDepth) unit_0089(c, 8u, depth + 1u); else { c.pc = 0x003240A0u; return; } if (c.pc != 0x00324174u) [[unlikely]] return; }
L_00324174:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00324350; } }
    c.budget -= 1;
L_00324180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324188u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00324188u) [[unlikely]] return; }
L_00324188:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003241B8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003241A8u); st8((c.r[2].w[0] + 9836u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x003241A8u) [[unlikely]] return; }
L_003241A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003241B0u); set32(c.r[2], 0u + 1u);  if (depth < kMaxDepth) unit_0089(c, 8u, depth + 1u); else { c.pc = 0x003240A0u; return; } if (c.pc != 0x003241B0u) [[unlikely]] return; }
L_003241B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00324350; } }
L_003241B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003241C0u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x003241C0u) [[unlikely]] return; }
L_003241C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00324200; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], 0u + 4u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2589u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003241F8; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2590u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_003241F8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 9836u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00324350; } }
    c.budget -= 1;
L_003241F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00324350; } }
L_00324200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324208u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00324208u) [[unlikely]] return; }
L_00324208:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00324248; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 4u);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2589u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00324240; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2590u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00324240; } }
    st8((c.r[4].w[0] + 9836u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00324350; } }
    c.budget -= 1;
L_00324240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00324350; } }
L_00324248:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00324350; } }
L_00324250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324258u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x00324258u) [[unlikely]] return; }
L_00324258:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00324298; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2590u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00324288; } }
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 3;
L_00324288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324290u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0088(c, 433u, depth + 1u); else { c.pc = 0x00323A70u; return; } if (c.pc != 0x00324290u) [[unlikely]] return; }
L_00324290:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 9836u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00324298:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00324350; } }
L_003242A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003242A8u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x003242A8u) [[unlikely]] return; }
L_003242A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003242E8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2590u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003242D8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003242D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003242E0u); c.r[4].d[0] = c.r[3].d[0] & 255ull;  if (depth < kMaxDepth) unit_0088(c, 433u, depth + 1u); else { c.pc = 0x00323A70u; return; } if (c.pc != 0x003242E0u) [[unlikely]] return; }
L_003242E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 9836u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003242E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00324350; } }
L_003242F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003242F8u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x003242F8u) [[unlikely]] return; }
L_003242F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00324318; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324308u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x00324308u) [[unlikely]] return; }
L_00324308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324310u);  if (depth < kMaxDepth) unit_0088(c, 430u, depth + 1u); else { c.pc = 0x003239E0u; return; } if (c.pc != 0x00324310u) [[unlikely]] return; }
L_00324310:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 9836u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00324318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00324350; } }
L_00324320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324328u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x00324328u) [[unlikely]] return; }
L_00324328:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00324348; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324338u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 66u, depth + 1u); else { c.pc = 0x00334EA0u; return; } if (c.pc != 0x00324338u) [[unlikely]] return; }
L_00324338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324340u);  if (depth < kMaxDepth) unit_0088(c, 429u, depth + 1u); else { c.pc = 0x003239B0u; return; } if (c.pc != 0x00324340u) [[unlikely]] return; }
L_00324340:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 9836u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00324348:
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00324350:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00324360:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22624u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003243E8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2528u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003243E8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2578u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003243E8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2580u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003243E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003243A4u);  if (depth < kMaxDepth) unit_0089(c, 9u, depth + 1u); else { c.pc = 0x003240D0u; return; } if (c.pc != 0x003243A4u) [[unlikely]] return; }
L_003243A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003243B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003248A0; } }
    c.budget -= 1;
L_003243B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003243C0u); c.r[4].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x003243C0u) [[unlikely]] return; }
L_003243C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003243E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003243D0u);  if (depth < kMaxDepth) unit_0089(c, 8u, depth + 1u); else { c.pc = 0x003240A0u; return; } if (c.pc != 0x003243D0u) [[unlikely]] return; }
L_003243D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003243D8u);  if (depth < kMaxDepth) unit_009D(c, 337u, depth + 1u); else { c.pc = 0x00377E80u; return; } if (c.pc != 0x003243D8u) [[unlikely]] return; }
L_003243D8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2582u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2583u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_003243E8:
    set32(c.r[6], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2578u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[3], c.r[6].w[0] + 2578u);  if (t) { goto L_00324428; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00324418; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00324418; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003248A0; } }
L_00324418:
    st8((c.r[6].w[0] + 2582u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2583u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003248A0; } }
L_00324428:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2580u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(15ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[6].w[0] + 2580u);  if (t) { goto L_00324888; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 4944u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00324000u < 16384u) { entry = entries_0089[(t - 0x00324000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00324458:
    c.r[2].d[0] = ld8((c.r[6].w[0] + 2583u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] + 2583u);  if (t) { goto L_00324480; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324478u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x00324478u) [[unlikely]] return; }
L_00324478:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00324498; } }
L_00324480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324488u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x00324488u) [[unlikely]] return; }
L_00324488:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00324498; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324498u);  if (depth < kMaxDepth) unit_0088(c, 451u, depth + 1u); else { c.pc = 0x00323B40u; return; } if (c.pc != 0x00324498u) [[unlikely]] return; }
L_00324498:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003248A0; } }
L_003244A0:
    c.r[5].d[0] = ld8((c.r[6].w[0] + 2583u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[7], c.r[6].w[0] + 2583u);  if (t) { goto L_003244F0; } }
    c.r[4].d[0] = ld8((c.r[6].w[0] + 2590u));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_003244D0; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 2580u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00324518; } }
    c.budget -= 1;
L_003244D0:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003244E4u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x003244E4u) [[unlikely]] return; }
L_003244E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00324518; } }
    c.budget -= 1;
L_003244F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003244F8u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x003244F8u) [[unlikely]] return; }
L_003244F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00324518; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324508u);  if (depth < kMaxDepth) unit_0088(c, 420u, depth + 1u); else { c.pc = 0x00323880u; return; } if (c.pc != 0x00324508u) [[unlikely]] return; }
L_00324508:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st16((c.r[2].w[0] + 2580u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2578u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00324518:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003248A0; } }
L_00324520:
    c.r[5].d[0] = ld8((c.r[6].w[0] + 2583u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[7], c.r[6].w[0] + 2583u);  if (t) { goto L_00324568; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 2590u));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00324550; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 2580u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00324590; } }
    c.budget -= 1;
L_00324550:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324560u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x00324560u) [[unlikely]] return; }
L_00324560:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00324590; } }
L_00324568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324570u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x00324570u) [[unlikely]] return; }
L_00324570:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00324590; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324580u);  if (depth < kMaxDepth) unit_0088(c, 421u, depth + 1u); else { c.pc = 0x003238B0u; return; } if (c.pc != 0x00324580u) [[unlikely]] return; }
L_00324580:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st16((c.r[2].w[0] + 2580u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2578u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00324590:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003248A0; } }
L_00324598:
    c.r[5].d[0] = ld8((c.r[6].w[0] + 2583u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[7], c.r[6].w[0] + 2583u);  if (t) { goto L_003245E8; } }
    c.r[4].d[0] = ld8((c.r[6].w[0] + 2590u));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_003245C8; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 2580u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00324610; } }
    c.budget -= 1;
L_003245C8:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003245DCu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x003245DCu) [[unlikely]] return; }
L_003245DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00324610; } }
    c.budget -= 1;
L_003245E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003245F0u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x003245F0u) [[unlikely]] return; }
L_003245F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00324610; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324600u);  if (depth < kMaxDepth) unit_0088(c, 431u, depth + 1u); else { c.pc = 0x00323A10u; return; } if (c.pc != 0x00324600u) [[unlikely]] return; }
L_00324600:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st16((c.r[2].w[0] + 2580u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2578u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00324610:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003248A0; } }
L_00324618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324620u);  if (depth < kMaxDepth) unit_0088(c, 459u, depth + 1u); else { c.pc = 0x00323CD0u; return; } if (c.pc != 0x00324620u) [[unlikely]] return; }
L_00324620:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003248A0; } }
L_00324628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324630u);  if (depth < kMaxDepth) unit_0088(c, 469u, depth + 1u); else { c.pc = 0x00323ED0u; return; } if (c.pc != 0x00324630u) [[unlikely]] return; }
L_00324630:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003248A0; } }
L_00324638:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 2583u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[7], c.r[6].w[0] + 2583u);  if (t) { goto L_00324680; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 2590u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_00324660; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 2580u), static_cast<std::uint16_t>(0u));  if (t) { goto L_003246A8; } }
L_00324660:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324674u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x00324674u) [[unlikely]] return; }
L_00324674:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003246A8; } }
    c.budget -= 1;
L_00324680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324688u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x00324688u) [[unlikely]] return; }
L_00324688:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003246A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324698u);  if (depth < kMaxDepth) unit_0088(c, 428u, depth + 1u); else { c.pc = 0x00323980u; return; } if (c.pc != 0x00324698u) [[unlikely]] return; }
L_00324698:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st16((c.r[2].w[0] + 2580u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2578u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_003246A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003248A0; } }
L_003246B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003246B8u);  if (depth < kMaxDepth) unit_0088(c, 452u, depth + 1u); else { c.pc = 0x00323B80u; return; } if (c.pc != 0x003246B8u) [[unlikely]] return; }
L_003246B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003248A0; } }
L_003246C0:
    c.r[2].d[0] = ld8((c.r[6].w[0] + 2583u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[6].w[0] + 2583u);  if (t) { goto L_00324730; } }
    c.r[4].d[0] = ld8((c.r[6].w[0] + 2590u));
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_003246E8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00324710; } }
    c.budget -= 1;
L_003246E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 15544u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00324710; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 2580u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00324758; } }
    c.budget -= 1;
L_00324710:
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 16u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324728u); st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x00324728u) [[unlikely]] return; }
L_00324728:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00324758; } }
L_00324730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324738u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x00324738u) [[unlikely]] return; }
L_00324738:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00324758; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324748u);  if (depth < kMaxDepth) unit_0088(c, 429u, depth + 1u); else { c.pc = 0x003239B0u; return; } if (c.pc != 0x00324748u) [[unlikely]] return; }
L_00324748:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st16((c.r[2].w[0] + 2580u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2578u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00324758:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003248A0; } }
L_00324760:
    c.r[2].d[0] = ld8((c.r[6].w[0] + 2583u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[6].w[0] + 2583u);  if (t) { goto L_003247C8; } }
    c.r[4].d[0] = ld8((c.r[6].w[0] + 2590u));
    set32(c.r[2], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_00324788; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_003247A8; } }
    c.budget -= 1;
L_00324788:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 15544u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003247A8; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 2580u), static_cast<std::uint16_t>(0u));  if (t) { goto L_003247F0; } }
L_003247A8:
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 16u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003247C0u); st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x003247C0u) [[unlikely]] return; }
L_003247C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003247F0; } }
L_003247C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003247D0u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x003247D0u) [[unlikely]] return; }
L_003247D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003247F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003247E0u);  if (depth < kMaxDepth) unit_0088(c, 430u, depth + 1u); else { c.pc = 0x003239E0u; return; } if (c.pc != 0x003247E0u) [[unlikely]] return; }
L_003247E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st16((c.r[2].w[0] + 2580u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2578u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_003247F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003248A0; } }
L_003247F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324800u);  if (depth < kMaxDepth) unit_0088(c, 470u, depth + 1u); else { c.pc = 0x00323EE0u; return; } if (c.pc != 0x00324800u) [[unlikely]] return; }
L_00324800:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003248A0; } }
L_00324808:
    c.r[5].d[0] = ld8((c.r[6].w[0] + 2583u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[7], c.r[6].w[0] + 2583u);  if (t) { goto L_00324858; } }
    c.r[4].d[0] = ld8((c.r[6].w[0] + 2590u));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00324838; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 2580u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00324880; } }
    c.budget -= 1;
L_00324838:
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032484Cu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x0032484Cu) [[unlikely]] return; }
L_0032484C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00324880; } }
    c.budget -= 1;
L_00324858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324860u);  if (depth < kMaxDepth) unit_008D(c, 88u, depth + 1u); else { c.pc = 0x00335050u; return; } if (c.pc != 0x00324860u) [[unlikely]] return; }
L_00324860:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00324880; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324870u);  if (depth < kMaxDepth) unit_0088(c, 432u, depth + 1u); else { c.pc = 0x00323A40u; return; } if (c.pc != 0x00324870u) [[unlikely]] return; }
L_00324870:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st16((c.r[2].w[0] + 2580u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2578u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00324880:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003248A0; } }
L_00324888:
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[2], 0u + 1u);
    st8((c.r[3].w[0] + 2578u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 9836u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_003248A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003248B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 30u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[16], c.r[16].w[0] + 14112u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003248D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003248D4u) [[unlikely]] return; }
L_003248D4:
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 62u);
    c.budget -= 3;
L_003248E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 22720u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003249A0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 22720u)));
    set32(c.r[3], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[8].sd[0] < 25ll ? 1ull : 0ull;
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[28].w[0] - 22720u), c.r[3].w[0]);  if (t) { goto L_00324968; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22720u)));
    set32(c.r[7], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    c.r[3].d[0] = c.r[4].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00324938; } }
    c.r[1].d[0] = c.r[4].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00324938; } }
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_00324938:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; c.r[3].d[0] = c.r[4].sd[0] < 224ll ? 1ull : 0ull;  if (t) { goto L_00324960; } }
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00324950; } }
    c.r[3].d[0] = c.r[4].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 1;
L_00324950:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00324960; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00324960:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003248E0u | kUnwind; return; } goto L_003248E0; } }
L_00324968:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[4], c.r[4].w[0] + 14112u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032497Cu); set32(c.r[6], 0u + 30u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0032497Cu) [[unlikely]] return; }
L_0032497C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 14112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324990u); set32(c.r[5], c.r[5].w[0] - 4880u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00324990u) [[unlikely]] return; }
L_00324990:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22728u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003249B0; } }
    c.budget -= 1;
L_003249A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 22720u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[28].w[0] - 22720u), c.r[3].w[0]);
    c.budget -= 4;
L_003249B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003249C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] - 1840u);
    c.budget -= 8;
L_003249E0:
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003249F0u); set32(c.r[4], c.r[4].w[0] + 14112u);  if (depth < kMaxDepth) unit_0007(c, 149u, depth + 1u); else { c.pc = 0x0011E4D0u; return; } if (c.pc != 0x003249F0u) [[unlikely]] return; }
L_003249F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00324A08; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003249E0u | kUnwind; return; } goto L_003249E0; } }
L_00324A08:
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00324D00; } }
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 4784u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00324000u < 16384u) { entry = entries_0089[(t - 0x00324000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00324A30:
    set32(c.r[5], ld32((c.r[28].w[0] - 22684u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[4].d[0] = c.r[4].d[0] | 1ull;
    st32((c.r[5].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22724u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00324D00; } }
    c.budget -= 1;
L_00324A50:
    set32(c.r[5], ld32((c.r[28].w[0] - 22684u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    st32((c.r[5].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22724u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00324D00; } }
    c.budget -= 1;
L_00324A70:
    set32(c.r[4], ld32((c.r[28].w[0] - 22684u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00324D00; } }
    c.budget -= 1;
L_00324A88:
    set32(c.r[4], ld32((c.r[28].w[0] - 22684u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00324D00; } }
    c.budget -= 1;
L_00324AA0:
    set32(c.r[4], ld32((c.r[28].w[0] - 22684u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00324D00; } }
    c.budget -= 1;
L_00324AB8:
    set32(c.r[4], ld32((c.r[28].w[0] - 22684u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00324D00; } }
    c.budget -= 1;
L_00324AD0:
    set32(c.r[4], ld32((c.r[28].w[0] - 22684u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 14117u)));
    c.r[3].d[0] = c.r[4].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 58ll ? 1ull : 0ull;  if (t) { goto L_00324B10; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00324B10; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22684u)));
    set32(c.r[4], c.r[4].w[0] - 48u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00324B48; } }
    c.budget -= 1;
L_00324B10:
    c.r[3].d[0] = c.r[4].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 103ll ? 1ull : 0ull;  if (t) { goto L_00324B38; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00324B38; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22684u)));
    set32(c.r[4], c.r[4].w[0] - 87u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00324B48; } }
    c.budget -= 1;
L_00324B38:
    set32(c.r[3], ld32((c.r[28].w[0] - 22684u)));
    set32(c.r[4], c.r[4].w[0] - 55u);
    st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_00324B48:
    set32(c.r[3], ld32((c.r[28].w[0] - 22684u)));
    set32(c.r[4], c.r[3].w[0] + 9u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_00324D00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00324D00; } }
L_00324B68:
    set32(c.r[4], c.r[29].w[0] + 56u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324B78u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00324B78u) [[unlikely]] return; }
L_00324B78:
    set32(c.r[4], ld32((c.r[28].w[0] - 22684u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 14118u)));
    c.r[3].d[0] = c.r[4].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 58ll ? 1ull : 0ull;  if (t) { goto L_00324BB8; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00324BB8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22684u)));
    set32(c.r[4], c.r[4].w[0] - 48u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00324BF0; } }
    c.budget -= 1;
L_00324BB8:
    c.r[3].d[0] = c.r[4].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 103ll ? 1ull : 0ull;  if (t) { goto L_00324BE0; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00324BE0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22684u)));
    set32(c.r[4], c.r[4].w[0] - 87u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00324BF0; } }
    c.budget -= 1;
L_00324BE0:
    set32(c.r[3], ld32((c.r[28].w[0] - 22684u)));
    set32(c.r[4], c.r[4].w[0] - 55u);
    st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_00324BF0:
    set32(c.r[3], ld32((c.r[28].w[0] - 22684u)));
    set32(c.r[4], c.r[3].w[0] + 8u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 8u));
    c.r[1].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 7u);  if (t) { goto L_00324D00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00324D00; } }
L_00324C10:
    set32(c.r[4], c.r[29].w[0] + 56u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324C20u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00324C20u) [[unlikely]] return; }
L_00324C20:
    set32(c.r[4], ld32((c.r[28].w[0] - 22684u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 14114u)));
    c.r[3].d[0] = c.r[4].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 58ll ? 1ull : 0ull;  if (t) { goto L_00324C60; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00324C60; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22684u)));
    set32(c.r[4], c.r[4].w[0] - 48u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00324C98; } }
    c.budget -= 1;
L_00324C60:
    c.r[3].d[0] = c.r[4].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[4].sd[0] < 103ll ? 1ull : 0ull;  if (t) { goto L_00324C88; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00324C88; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22684u)));
    set32(c.r[4], c.r[4].w[0] - 87u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00324C98; } }
    c.budget -= 1;
L_00324C88:
    set32(c.r[3], ld32((c.r[28].w[0] - 22684u)));
    set32(c.r[4], c.r[4].w[0] - 55u);
    st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_00324C98:
    set32(c.r[3], ld32((c.r[28].w[0] - 22684u)));
    set32(c.r[4], c.r[3].w[0] + 8u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 8u));
    c.r[1].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 7u);  if (t) { goto L_00324D00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00324D00; } }
L_00324CB8:
    set32(c.r[4], ld32((c.r[28].w[0] - 22684u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 14115u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 22684u)));
    set32(c.r[4], c.r[4].w[0] - 48u);
    st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 22684u)));
    set32(c.r[4], c.r[3].w[0] + 10u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 10u));
    c.r[1].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 9u);  if (t) { goto L_00324CF8; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00324CF8:
    set32(c.r[3], 0u + 2u);
    st8((c.r[28].w[0] - 22724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00324D00:
    st8((c.r[28].w[0] - 22732u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00324D20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 92u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22720u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 60u);  if (t) { goto L_00324DE8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00324DE8; } }
    c.budget -= 1;
L_00324D48:
    set32(c.r[3], ld32((c.r[28].w[0] - 22720u)));
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    c.r[3].d[0] = c.r[4].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00324D70; } }
    c.r[1].d[0] = c.r[4].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00324D70; } }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_00324D70:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; c.r[3].d[0] = c.r[4].sd[0] < 224ll ? 1ull : 0ull;  if (t) { goto L_00324D98; } }
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00324D88; } }
    c.r[3].d[0] = c.r[4].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 1;
L_00324D88:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00324D98; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00324D98:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[3], 0u + 60u);  if (t) { goto L_00324DE8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00324DE8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22720u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324DB8u); st32((c.r[28].w[0] - 22720u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0089(c, 74u, depth + 1u); else { c.pc = 0x003248B0u; return; } if (c.pc != 0x00324DB8u) [[unlikely]] return; }
L_00324DB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324DC0u);  if (depth < kMaxDepth) unit_0089(c, 79u, depth + 1u); else { c.pc = 0x003249C0u; return; } if (c.pc != 0x00324DC0u) [[unlikely]] return; }
L_00324DC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 22684u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 392ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00324D48u | kUnwind; return; } goto L_00324D48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00324DE8; } }
    c.budget -= 1;
L_00324DE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00324E00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 14912u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 600u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324E20u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00324E20u) [[unlikely]] return; }
L_00324E20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st16((c.r[28].w[0] - 22736u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 14912u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[28].w[0] - 22684u), c.r[3].w[0]);
    st32((c.r[28].w[0] - 22688u), c.r[3].w[0]);
    st8((c.r[28].w[0] - 22732u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_00324E40:
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].sd[0] < 31ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00324E58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22728u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00325090; } }
L_00324E58:
    set32(c.r[3], ld32((c.r[28].w[0] - 22720u)));
    set32(c.r[7], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[4].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00324E88; } }
    c.r[1].d[0] = c.r[4].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00324E88; } }
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 2;
L_00324E88:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; c.r[3].d[0] = c.r[4].sd[0] < 224ll ? 1ull : 0ull;  if (t) { goto L_00324EB0; } }
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00324EA0; } }
    c.r[3].d[0] = c.r[4].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 1;
L_00324EA0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00324EB0; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00324EB0:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull; c.r[3].d[0] = c.r[5].d[0] << 56;  if (t) { goto L_00325018; } }
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00324ED0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 22728u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00325090; } }
L_00324ED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324ED8u); st8((c.r[28].w[0] - 22732u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0089(c, 95u, depth + 1u); else { c.pc = 0x00324D20u; return; } if (c.pc != 0x00324ED8u) [[unlikely]] return; }
L_00324ED8:
    c.r[5].d[0] = ld8((c.r[28].w[0] - 22732u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00324F68; } }
    c.r[4].d[0] = ld16((c.r[28].w[0] - 22736u));
    set32(c.r[3], 0u + 92u);
    set32(c.r[5], ld32((c.r[28].w[0] - 22720u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st16((c.r[28].w[0] - 22736u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_00324F48; } }
    st32((c.r[28].w[0] - 22720u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 22684u)));
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22720u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 22684u)));
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22684u)));
    st8((c.r[3].w[0] + 11u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 22684u)));
    st32((c.r[28].w[0] - 22688u), c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 12u);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 22684u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00324E40u | kUnwind; return; } goto L_00324E40; } }
    c.budget -= 1;
L_00324F48:
    set32(c.r[4], ld32((c.r[28].w[0] - 22688u)));
    set32(c.r[3], c.r[5].w[0] + 1u);
    st32((c.r[28].w[0] - 22720u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 11u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 11u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00324E40u | kUnwind; return; } goto L_00324E40; } }
    c.budget -= 1;
L_00324F68:
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_00324F88; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00324F88; } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00324FB0; } }
L_00324F88:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 22728u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 8u);  if (t) { goto L_00324FA8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00324FA8; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[28].w[0] - 22728u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00324FA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00325090; } }
L_00324FB0:
    set32(c.r[5], ld32((c.r[28].w[0] - 22720u)));
    set32(c.r[3], 0u + 92u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_00324FE8; } }
    set32(c.r[4], 0u + 1u);
    st32((c.r[28].w[0] - 22720u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22684u)));
    st8((c.r[3].w[0] + 11u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld16((c.r[28].w[0] - 22736u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 22736u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00324FF0; } }
    c.budget -= 1;
L_00324FE8:
    set32(c.r[3], ld32((c.r[28].w[0] - 22684u)));
    st8((c.r[3].w[0] + 11u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00324FF0:
    set32(c.r[5], ld32((c.r[28].w[0] - 22720u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 22684u)));
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22684u)));
    st32((c.r[28].w[0] - 22688u), c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 12u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 22684u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00324E40u | kUnwind; return; } goto L_00324E40; } }
L_00325018:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 22724u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00325060; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 22684u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[28].w[0] - 22724u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22720u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 22684u)));
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22684u)));
    st8((c.r[3].w[0] + 11u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 22684u)));
    st32((c.r[28].w[0] - 22688u), c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 12u);
    st32((c.r[28].w[0] - 22684u), c.r[3].w[0]);
    c.budget -= 14;
L_00325060:
    set32(c.r[3], ld32((c.r[28].w[0] - 22720u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 22688u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[28].w[0] - 22720u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 11u));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st8((c.r[4].w[0] + 11u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[28].w[0] - 22736u));
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 22736u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00324E40u | kUnwind; return; } goto L_00324E40; } }
    c.budget -= 1;
L_00325090:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003250A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[4].d[0] = ld8((c.r[28].w[0] - 22728u));
    c.f[21] = c.f[12];
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.f[20] = c.f[13];  if (t) { goto L_00325630; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 14912u);
    st32((c.r[28].w[0] - 22684u), c.r[3].w[0]);
    c.budget -= 5;
L_003250E0:
    set32(c.r[4], ld32((c.r[28].w[0] - 22684u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 11u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00325100; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00325630; } }
    c.budget -= 1;
L_00325100:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[28].w[0] - 22744u), c.r[3].w[0]);
    c.budget -= 4;
L_00325110:
    set32(c.r[5], ld32((c.r[28].w[0] - 22684u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00325130; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 9u));
    st32((c.r[28].w[0] - 22716u), c.r[3].w[0]);
    c.budget -= 3;
L_00325130:
    set32(c.r[4], ld32((c.r[28].w[0] - 22744u)));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 1u);  if (t) { goto L_003254B0; } }
    set32(c.r[4], c.r[4].w[0] >> 1);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[28].w[0] - 22744u), c.r[4].w[0]);  if (t) { goto L_003254C8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 4736u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00324000u < 16384u) { entry = entries_0089[(t - 0x00324000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00325170:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 22740u));
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 6u);  if (t) { goto L_00325208; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003251F8; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003251A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003254C8; } }
    c.budget -= 1;
L_003251A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.f[3] = c.r[3].w[0];
    c.r[6].d[0] = ld16((c.r[28].w[0] - 22736u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], ld32((c.r[28].w[0] - 22716u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43460000u);
    set32(c.r[4], c.r[4].w[0] - 1776u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[28].w[0] - 22704u));
    set32(c.r[3], c.r[6].w[0] >> 1);
    c.f[2] = c.r[3].w[0];
    c.f[4] = fp::cvt_s_w(c.f[2]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[3] = fp::mul(c.f[3], c.f[4]);
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 22692u), c.f[0]);  if (t) { goto L_003254C8; } }
L_003251F8:
    c.f[0] = ld32((c.r[28].w[0] - 22704u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 22692u), c.f[0]);  if (t) { goto L_003254C8; } }
    c.budget -= 1;
L_00325208:
    set32(c.r[5], ld32((c.r[28].w[0] - 22716u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[4], c.r[4].w[0] - 1776u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld16((c.r[28].w[0] - 22736u));
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.budget -= 17;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00325258; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00325274; } }
L_00325258:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_00325274:
    c.f[2] = fp::mul(c.f[0], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43C60000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[28].w[0] - 22704u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 22692u), c.f[0]);  if (t) { goto L_003254C8; } }
    c.budget -= 1;
L_00325298:
    c.f[1] = ld32((c.r[28].w[0] - 22704u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[28].w[0] - 22692u), c.f[1]);  if (t) { goto L_003252E8; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 22716u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[2] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] - 1776u);
    c.f[0] = ld32((c.r[28].w[0] - 22696u));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 22696u), c.f[0]);  if (t) { goto L_003254C8; } }
    c.budget -= 1;
L_003252E8:
    c.f[0] = ld32((c.r[28].w[0] - 22696u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 22696u), c.f[0]);  if (t) { goto L_003254C8; } }
L_003252F8:
    set32(c.r[3], 0u + 5u);
    st8((c.r[28].w[0] - 22740u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.r[6].d[0] = ld16((c.r[28].w[0] - 22736u));
    c.f[3] = c.r[3].w[0];
    set32(c.r[5], ld32((c.r[28].w[0] - 22716u)));
    set32(c.r[4], c.r[4].w[0] - 1776u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43460000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[28].w[0] - 22704u));
    set32(c.r[3], c.r[6].w[0] >> 1);
    c.f[2] = c.r[3].w[0];
    c.f[4] = fp::cvt_s_w(c.f[2]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[3] = fp::mul(c.f[3], c.f[4]);
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 22692u), c.f[0]);  if (t) { goto L_003254C8; } }
L_00325358:
    set32(c.r[3], 0u + 6u);
    c.f[0] = ld32((c.r[28].w[0] - 22704u));
    st8((c.r[28].w[0] - 22740u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 22692u), c.f[0]);  if (t) { goto L_003254C8; } }
    c.budget -= 1;
L_00325370:
    set32(c.r[5], ld32((c.r[28].w[0] - 22716u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], 0u + 7u);
    st8((c.r[28].w[0] - 22740u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1776u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[5], c.r[5].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = c.r[3].w[0];
    c.r[3].d[0] = ld16((c.r[28].w[0] - 22736u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.budget -= 19;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_003253C8; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003253E4; } }
L_003253C8:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_003253E4:
    c.f[2] = fp::mul(c.f[0], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43C60000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[28].w[0] - 22704u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 22692u), c.f[0]);  if (t) { goto L_003254C8; } }
    c.budget -= 1;
L_00325408:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00325630; } }
L_00325410:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 9u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 22716u), c.r[3].w[0]);  if (t) { goto L_003254C8; } }
    c.budget -= 1;
L_00325420:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 1792u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325438u); c.r[4].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00325438u) [[unlikely]] return; }
L_00325438:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003254C8; } }
L_00325440:
    c.f[0] = ld32((c.r[28].w[0] - 22704u));
    st32((c.r[28].w[0] - 22692u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 10u));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[4], c.r[3].w[0] >> 1);  if (t) { goto L_00325460; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00325478; } }
L_00325460:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::add(c.f[3], c.f[3]);
    c.budget -= 6;
L_00325478:
    set32(c.r[5], ld32((c.r[28].w[0] - 22716u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[2] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] - 1776u);
    c.f[0] = ld32((c.r[28].w[0] - 22696u));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 22696u), c.f[0]);  if (t) { goto L_003254C8; } }
L_003254B0:
    set32(c.r[3], c.r[4].w[0] >> 1);
    st32((c.r[28].w[0] - 22744u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 22744u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003254D8; } }
    c.budget -= 1;
L_003254C8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00325110u | kUnwind; return; } goto L_00325110; } }
L_003254D8:
    set32(c.r[4], ld32((c.r[28].w[0] - 22684u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 11u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00325618; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00325618; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 14144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325508u); set32(c.r[6], 0u + 768u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00325508u) [[unlikely]] return; }
L_00325508:
    set32(c.r[2], ld32((c.r[28].w[0] - 22684u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[6].d[0] = ld8((c.r[2].w[0] + 11u));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325520u); set32(c.r[4], c.r[4].w[0] + 14144u);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x00325520u) [[unlikely]] return; }
L_00325520:
    set32(c.r[3], ld32((c.r[28].w[0] - 22684u)));
    c.f[0] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[2], c.r[2].w[0] + 14144u);
    fpu_compare(c, fp::key(c.f[21]) == fp::key(c.f[0]));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 11u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00325578; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 22716u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], c.r[3].w[0] - 1776u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032556Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x0032556Cu) [[unlikely]] return; }
L_0032556C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00325580; } }
    c.budget -= 1;
L_00325578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325580u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_008D(c, 99u, depth + 1u); else { c.pc = 0x003351E0u; return; } if (c.pc != 0x00325580u) [[unlikely]] return; }
L_00325580:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.f[12] = ld32((c.r[28].w[0] - 22692u));
    c.f[13] = ld32((c.r[28].w[0] - 22696u));
    c.f[14] = ld32((c.r[28].w[0] - 22700u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325598u); set32(c.r[4], c.r[4].w[0] + 14144u);  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00325598u) [[unlikely]] return; }
L_00325598:
    set32(c.r[6], ld32((c.r[28].w[0] - 22716u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[4].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    set32(c.r[5], c.r[5].w[0] - 1776u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[3], ld32((c.r[28].w[0] - 22684u)));
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 11u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.budget -= 18;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_003255EC; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00325608; } }
L_003255EC:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_00325608:
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[28].w[0] - 22692u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[28].w[0] - 22692u), c.f[0]);
    c.budget -= 4;
L_00325618:
    set32(c.r[4], ld32((c.r[28].w[0] - 22684u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 30ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 12u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 22684u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003250E0u | kUnwind; return; } goto L_003250E0; } }
L_00325630:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00325650:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[7], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[5].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00325680; } }
    c.r[1].d[0] = c.r[5].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00325680; } }
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 2;
L_00325680:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; c.r[3].d[0] = c.r[5].sd[0] < 224ll ? 1ull : 0ull;  if (t) { goto L_003256A8; } }
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00325698; } }
    c.r[3].d[0] = c.r[5].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 1;
L_00325698:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003256A8; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003256A8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_00325758; } }
    set32(c.r[2], 0u + 5u);
    st32((c.r[28].w[0] - 22720u), c.r[4].w[0]);
    st32((c.r[28].w[0] - 22716u), c.r[2].w[0]);
    st32((c.r[28].w[0] - 22700u), c.f[14]);
    set32(c.r[2], 0u + 6u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[28].w[0] - 22740u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[28].w[0] - 22692u), c.f[12]);
    st32((c.r[28].w[0] - 22704u), c.f[12]);
    st32((c.r[28].w[0] - 22712u), 0u);
    st32((c.r[28].w[0] - 22696u), c.f[13]);
    st8((c.r[28].w[0] - 22724u), static_cast<std::uint8_t>(0u));
    st32((c.r[28].w[0] - 22708u), c.f[13]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003256ECu); st8((c.r[28].w[0] - 22728u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x003256ECu) [[unlikely]] return; }
L_003256EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003256FCu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_008D(c, 98u, depth + 1u); else { c.pc = 0x003351D0u; return; } if (c.pc != 0x003256FCu) [[unlikely]] return; }
L_003256FC:
    st32((c.r[28].w[0] - 22748u), 0u);
    c.budget -= 1;
L_00325700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325708u);  if (depth < kMaxDepth) unit_0089(c, 99u, depth + 1u); else { c.pc = 0x00324E00u; return; } if (c.pc != 0x00325708u) [[unlikely]] return; }
L_00325708:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325714u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0089(c, 103u, depth + 1u); else { c.pc = 0x003250A0u; return; } if (c.pc != 0x00325714u) [[unlikely]] return; }
L_00325714:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 22728u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00325740; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22748u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[28].w[0] - 22748u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 22748u)));
    c.r[2].d[0] = c.r[2].sd[0] < 26ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00325700u | kUnwind; return; } goto L_00325700; } }
    c.budget -= 1;
L_00325740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325748u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00325748u) [[unlikely]] return; }
L_00325748:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325758u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_008D(c, 98u, depth + 1u); else { c.pc = 0x003351D0u; return; } if (c.pc != 0x00325758u) [[unlikely]] return; }
L_00325758:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00325770:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 4288u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032578Cu); set32(c.r[6], 0u + 464u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0032578Cu) [[unlikely]] return; }
L_0032578C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 3824u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003257A0u); set32(c.r[6], 0u + 464u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003257A0u) [[unlikely]] return; }
L_003257A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 4368u);
    set32(c.r[6], 0u + 8192u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003257B8u); st8((c.r[28].w[0] - 23004u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003257B8u) [[unlikely]] return; }
L_003257B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 20685u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003257CCu); set32(c.r[5], c.r[5].w[0] - 4688u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x003257CCu) [[unlikely]] return; }
L_003257CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 19440u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003257E0u); set32(c.r[6], 0u + 2400u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003257E0u) [[unlikely]] return; }
L_003257E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 19459u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003257F4u); set32(c.r[6], 0u + 1232u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003257F4u) [[unlikely]] return; }
L_003257F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    st8((c.r[1].w[0] + 19457u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 20845u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 462u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325818u); st8((c.r[1].w[0] + 19458u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00325818u) [[unlikely]] return; }
L_00325818:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 20691u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032582Cu); set32(c.r[6], 0u + 154u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x0032582Cu) [[unlikely]] return; }
L_0032582C:
    set32(c.r[3], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st8((c.r[28].w[0] - 23016u), static_cast<std::uint8_t>(0u));
    st32((c.r[1].w[0] + 10160u), c.r[3].w[0]);
    st8((c.r[28].w[0] - 23080u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00325850:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325868u); st8((c.r[28].w[0] - 23076u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00325868u) [[unlikely]] return; }
L_00325868:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00325880; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325878u);  if (depth < kMaxDepth) unit_008D(c, 130u, depth + 1u); else { c.pc = 0x003355C0u; return; } if (c.pc != 0x00325878u) [[unlikely]] return; }
L_00325878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00325888; } }
L_00325880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325888u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_008D(c, 130u, depth + 1u); else { c.pc = 0x003355C0u; return; } if (c.pc != 0x00325888u) [[unlikely]] return; }
L_00325888:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003258A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2589u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2591u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2592u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2594u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2595u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2596u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st32((c.r[2].w[0] + 2568u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003258FCu); set32(c.r[4], c.r[2].w[0] + 10372u);  if (depth < kMaxDepth) unit_008D(c, 153u, depth + 1u); else { c.pc = 0x00335760u; return; } if (c.pc != 0x003258FCu) [[unlikely]] return; }
L_003258FC:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 7200u);
    st32((c.r[2].w[0] + 10368u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2534u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 2605u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325920u); st8((c.r[28].w[0] - 22996u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0093(c, 185u, depth + 1u); else { c.pc = 0x0034D300u; return; } if (c.pc != 0x00325920u) [[unlikely]] return; }
L_00325920:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00325930:
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00325978; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00325968; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00325958; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00325980; } }
L_00325958:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[1].w[0] + 16008u));  if (t) { goto L_00325980; } }
    c.budget -= 1;
L_00325968:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[1].w[0] + 16012u));  if (t) { goto L_00325980; } }
    c.budget -= 1;
L_00325978:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 16016u));
    c.budget -= 2;
L_00325980:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00325990:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003259C0; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[5].w[0] + 2534u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003259C0u); set32(c.r[4], c.r[2].w[0] + 8291u);  if (depth < kMaxDepth) unit_0091(c, 142u, depth + 1u); else { c.pc = 0x00345780u; return; } if (c.pc != 0x003259C0u) [[unlikely]] return; }
L_003259C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003259D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00325A00; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[5].w[0] + 2534u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325A00u); set32(c.r[4], c.r[2].w[0] + 8291u);  if (depth < kMaxDepth) unit_0091(c, 142u, depth + 1u); else { c.pc = 0x00345780u; return; } if (c.pc != 0x00325A00u) [[unlikely]] return; }
L_00325A00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00325A10:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 7u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_00325A38; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00325A38; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[5].w[0] + 2533u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00325A38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00325A40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_00325A78; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00325A78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325A6Cu); set32(c.r[4], c.r[5].w[0] + 8291u);  if (depth < kMaxDepth) unit_0091(c, 142u, depth + 1u); else { c.pc = 0x00345780u; return; } if (c.pc != 0x00325A6Cu) [[unlikely]] return; }
L_00325A6C:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 2533u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
L_00325A78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00325A90:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325AA0u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0094(c, 178u, depth + 1u); else { c.pc = 0x003512B0u; return; } if (c.pc != 0x00325AA0u) [[unlikely]] return; }
L_00325AA0:
    c.r[7].d[0] = ld8((c.r[29].w[0] + 313u));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[8].d[0] = ld8((c.r[29].w[0] + 314u));
    set32(c.r[5], c.r[29].w[0] + 40u);
    c.r[9].d[0] = ld8((c.r[29].w[0] + 315u));
    c.r[10].d[0] = ld8((c.r[29].w[0] + 316u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325AC0u); set32(c.r[6], c.r[29].w[0] + 57u);  if (depth < kMaxDepth) unit_00A2(c, 354u, depth + 1u); else { c.pc = 0x0038B3A0u; return; } if (c.pc != 0x00325AC0u) [[unlikely]] return; }
L_00325AC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_00325AD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00325B18; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00325B18; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2529u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[5].w[0] + 2529u);  if (t) { goto L_00325B18; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325B14u); set32(c.r[4], c.r[2].w[0] + 8291u);  if (depth < kMaxDepth) unit_0091(c, 142u, depth + 1u); else { c.pc = 0x00345780u; return; } if (c.pc != 0x00325B14u) [[unlikely]] return; }
L_00325B14:
    c.budget -= 1;
L_00325B18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00325B30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_00325B80; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00325B60; } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00325B80; } }
L_00325B60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2530u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[5].w[0] + 2530u);  if (t) { goto L_00325B80; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325B80u); set32(c.r[4], c.r[2].w[0] + 8291u);  if (depth < kMaxDepth) unit_0091(c, 142u, depth + 1u); else { c.pc = 0x00345780u; return; } if (c.pc != 0x00325B80u) [[unlikely]] return; }
L_00325B80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00325B90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[4].w[0] - 3u);  if (t) { goto L_00325BF8; } }
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00325BC8; } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00325BF8; } }
    c.budget -= 1;
L_00325BC8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2532u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00325BF8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2531u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[5].w[0] + 2531u);  if (t) { goto L_00325BF8; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325BF4u); set32(c.r[4], c.r[2].w[0] + 8291u);  if (depth < kMaxDepth) unit_0091(c, 142u, depth + 1u); else { c.pc = 0x00345780u; return; } if (c.pc != 0x00325BF4u) [[unlikely]] return; }
L_00325BF4:
    c.budget -= 1;
L_00325BF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00325C10:
    set32(c.r[5], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], 0u + 4u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2589u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_00325C30; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00325C38; } }
    c.budget -= 1;
L_00325C30:
    set32(c.r[3], 0u + 1u);
    st8((c.r[5].w[0] + 2532u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00325C38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00325C40:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], 0u + 153u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325C60u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00325C60u) [[unlikely]] return; }
L_00325C60:
    set32(c.r[16], c.r[29].w[0] + 89u);
    set32(c.r[17], c.r[29].w[0] + 72u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325C78u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0093(c, 509u, depth + 1u); else { c.pc = 0x0034F5A0u; return; } if (c.pc != 0x00325C78u) [[unlikely]] return; }
L_00325C78:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C20000u);
    set32(c.r[5], 0u + 30u);
    set32(c.r[4], c.r[4].w[0] + 15600u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325C8Cu); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_008D(c, 108u, depth + 1u); else { c.pc = 0x00335380u; return; } if (c.pc != 0x00325C8Cu) [[unlikely]] return; }
L_00325C8C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00325E68; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[6], 0u + 77u);
    set32(c.r[4], c.r[2].w[0] + 4505u);
    set32(c.r[8], c.r[2].w[0] + 4351u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
L_00325CB0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[8], c.r[8].w[0] + 2u);
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[7], c.r[7].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00325CB0u | kUnwind; return; } goto L_00325CB0; } }
    set32(c.r[3], c.r[2].w[0] + 3427u);
    set32(c.r[8], c.r[4].w[0] - 154u);
    set32(c.r[9], c.r[3].w[0] + 770u);
    set32(c.r[7], 0u + 77u);
    c.budget -= 4;
L_00325CE0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 1u)));
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[9], c.r[9].w[0] + 2u);
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 8;
    { const bool t = c.r[7].sd[0] > 0; set32(c.r[8], c.r[8].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00325CE0u | kUnwind; return; } goto L_00325CE0; } }
    set32(c.r[9], c.r[3].w[0] + 616u);
    set32(c.r[8], c.r[4].w[0] - 308u);
    set32(c.r[7], 0u + 77u);
    c.budget -= 4;
L_00325D10:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 1u)));
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[9], c.r[9].w[0] + 2u);
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 8;
    { const bool t = c.r[7].sd[0] > 0; set32(c.r[8], c.r[8].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00325D10u | kUnwind; return; } goto L_00325D10; } }
    set32(c.r[9], c.r[3].w[0] + 462u);
    set32(c.r[8], c.r[4].w[0] - 462u);
    set32(c.r[7], 0u + 77u);
    c.budget -= 4;
L_00325D40:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 1u)));
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[9], c.r[9].w[0] + 2u);
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 8;
    { const bool t = c.r[7].sd[0] > 0; set32(c.r[8], c.r[8].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00325D40u | kUnwind; return; } goto L_00325D40; } }
    set32(c.r[9], c.r[3].w[0] + 308u);
    set32(c.r[8], c.r[4].w[0] - 616u);
    set32(c.r[7], 0u + 77u);
    c.budget -= 4;
L_00325D70:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 1u)));
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[9], c.r[9].w[0] + 2u);
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 8;
    { const bool t = c.r[7].sd[0] > 0; set32(c.r[8], c.r[8].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00325D70u | kUnwind; return; } goto L_00325D70; } }
    set32(c.r[9], c.r[3].w[0] + 154u);
    set32(c.r[8], c.r[4].w[0] - 770u);
    set32(c.r[7], 0u + 77u);
    c.budget -= 4;
L_00325DA0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 1u)));
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[9], c.r[9].w[0] + 2u);
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 8;
    { const bool t = c.r[7].sd[0] > 0; set32(c.r[8], c.r[8].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00325DA0u | kUnwind; return; } goto L_00325DA0; } }
    set32(c.r[7], c.r[4].w[0] - 924u);
    set32(c.r[6], 0u + 77u);
    c.budget -= 2;
L_00325DC8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[7], c.r[7].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00325DC8u | kUnwind; return; } goto L_00325DC8; } }
    set32(c.r[4], c.r[2].w[0] + 3428u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325DF8u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x00325DF8u) [[unlikely]] return; }
L_00325DF8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325E0Cu); set32(c.r[4], c.r[2].w[0] + 3436u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x00325E0Cu) [[unlikely]] return; }
L_00325E0C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325E20u); set32(c.r[4], c.r[2].w[0] + 3453u);  if (depth < kMaxDepth) unit_0007(c, 143u, depth + 1u); else { c.pc = 0x0011E2C0u; return; } if (c.pc != 0x00325E20u) [[unlikely]] return; }
L_00325E20:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 3427u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3425u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 3425u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3426u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 3426u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[3].w[0] + 3425u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 3425u));
    c.r[1].d[0] = c.r[3].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_00325E68; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00325E68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_00325E80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 796u);
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325E9Cu); set32(c.r[4], c.r[2].w[0] + 2620u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00325E9Cu) [[unlikely]] return; }
L_00325E9C:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[2].w[0] + 2621u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325EB0u); set32(c.r[6], c.r[2].w[0] + 2638u);  if (depth < kMaxDepth) unit_0093(c, 509u, depth + 1u); else { c.pc = 0x0034F5A0u; return; } if (c.pc != 0x00325EB0u) [[unlikely]] return; }
L_00325EB0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 2620u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00325ED0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325EE0u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0092(c, 173u, depth + 1u); else { c.pc = 0x00349570u; return; } if (c.pc != 0x00325EE0u) [[unlikely]] return; }
L_00325EE0:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325EF0u); set32(c.r[6], c.r[29].w[0] + 24u);  if (depth < kMaxDepth) unit_0091(c, 308u, depth + 1u); else { c.pc = 0x00346B00u; return; } if (c.pc != 0x00325EF0u) [[unlikely]] return; }
L_00325EF0:
    c.r[7].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[6], 0u + 346u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[5].d[0] = ld16((c.r[29].w[0] + 24u));
    set32(c.r[4], c.r[4].w[0] + 14968u);
    set32(c.r[3], c.r[3].w[0] + 14972u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[4].d[0] = ld16((c.r[29].w[0] + 26u));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00325F30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325F40u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0092(c, 173u, depth + 1u); else { c.pc = 0x00349570u; return; } if (c.pc != 0x00325F40u) [[unlikely]] return; }
L_00325F40:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325F50u); set32(c.r[6], c.r[29].w[0] + 24u);  if (depth < kMaxDepth) unit_0091(c, 360u, depth + 1u); else { c.pc = 0x003473F0u; return; } if (c.pc != 0x00325F50u) [[unlikely]] return; }
L_00325F50:
    c.r[7].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[6], 0u + 346u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[5].d[0] = ld16((c.r[29].w[0] + 24u));
    set32(c.r[4], c.r[4].w[0] + 4584u);
    set32(c.r[3], c.r[3].w[0] + 4588u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[4].d[0] = ld16((c.r[29].w[0] + 26u));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00325F90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325FA0u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0092(c, 173u, depth + 1u); else { c.pc = 0x00349570u; return; } if (c.pc != 0x00325FA0u) [[unlikely]] return; }
L_00325FA0:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 30u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[3], 0u + 346u);
    set32(c.r[2], c.r[2].w[0] - 5456u);
    set32(c.r[5], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325FC4u); set32(c.r[5], c.r[2].w[0] + 24u);  if (depth < kMaxDepth) unit_0091(c, 420u, depth + 1u); else { c.pc = 0x00347EB0u; return; } if (c.pc != 0x00325FC4u) [[unlikely]] return; }
L_00325FC4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00325FD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325FE0u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0092(c, 173u, depth + 1u); else { c.pc = 0x00349570u; return; } if (c.pc != 0x00325FE0u) [[unlikely]] return; }
L_00325FE0:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 30u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[3], 0u + 346u);
    set32(c.r[2], c.r[2].w[0] - 5456u);
    set32(c.r[5], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326004u); set32(c.r[5], c.r[2].w[0] + 20u);  if (depth < kMaxDepth) unit_0091(c, 413u, depth + 1u); else { c.pc = 0x00347D50u; return; } if (c.pc != 0x00326004u) [[unlikely]] return; }
L_00326004:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00326010:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326020u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0092(c, 173u, depth + 1u); else { c.pc = 0x00349570u; return; } if (c.pc != 0x00326020u) [[unlikely]] return; }
L_00326020:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 30u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[3], 0u + 346u);
    set32(c.r[2], c.r[2].w[0] - 5456u);
    set32(c.r[5], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326044u); set32(c.r[5], c.r[2].w[0] + 2u);  if (depth < kMaxDepth) unit_0091(c, 406u, depth + 1u); else { c.pc = 0x00347BD0u; return; } if (c.pc != 0x00326044u) [[unlikely]] return; }
L_00326044:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00326050:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326060u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0092(c, 173u, depth + 1u); else { c.pc = 0x00349570u; return; } if (c.pc != 0x00326060u) [[unlikely]] return; }
L_00326060:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 30u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[3], 0u + 346u);
    set32(c.r[2], c.r[2].w[0] - 5456u);
    set32(c.r[5], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[2].w[0] + 4u);
    set32(c.r[6], c.r[2].w[0] + 8u);
    set32(c.r[7], c.r[2].w[0] + 12u);
    set32(c.r[8], c.r[2].w[0] + 10u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326094u); set32(c.r[9], c.r[2].w[0] + 14u);  if (depth < kMaxDepth) unit_0092(c, 11u, depth + 1u); else { c.pc = 0x003481A0u; return; } if (c.pc != 0x00326094u) [[unlikely]] return; }
L_00326094:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003260A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003260B0u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0092(c, 173u, depth + 1u); else { c.pc = 0x00349570u; return; } if (c.pc != 0x003260B0u) [[unlikely]] return; }
L_003260B0:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 30u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[3], 0u + 346u);
    set32(c.r[2], c.r[2].w[0] - 5456u);
    set32(c.r[5], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003260D4u); set32(c.r[5], c.r[2].w[0] + 21u);  if (depth < kMaxDepth) unit_0092(c, 97u, depth + 1u); else { c.pc = 0x00348BE0u; return; } if (c.pc != 0x003260D4u) [[unlikely]] return; }
L_003260D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003260E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003260F0u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0092(c, 173u, depth + 1u); else { c.pc = 0x00349570u; return; } if (c.pc != 0x003260F0u) [[unlikely]] return; }
L_003260F0:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 30u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[3], 0u + 346u);
    set32(c.r[2], c.r[2].w[0] - 5456u);
    set32(c.r[5], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[2].w[0] + 16u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326118u); set32(c.r[6], c.r[2].w[0] + 18u);  if (depth < kMaxDepth) unit_0093(c, 146u, depth + 1u); else { c.pc = 0x0034CE10u; return; } if (c.pc != 0x00326118u) [[unlikely]] return; }
L_00326118:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00326130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326144u); set32(c.r[5], c.r[29].w[0] + 28u);  if (depth < kMaxDepth) unit_0093(c, 79u, depth + 1u); else { c.pc = 0x0034C770u; return; } if (c.pc != 0x00326144u) [[unlikely]] return; }
L_00326144:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326150u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0089(c, 146u, depth + 1u); else { c.pc = 0x00325930u; return; } if (c.pc != 0x00326150u) [[unlikely]] return; }
L_00326150:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 346u);  if (t) { goto L_00326188; } }
    c.r[5].d[0] = ld16((c.r[29].w[0] + 30u));
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    set32(c.r[4], c.r[4].w[0] + 4598u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] + 4600u);
    c.r[4].d[0] = ld16((c.r[29].w[0] + 28u));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 12;
L_00326188:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003261A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003261B4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0092(c, 47u, depth + 1u); else { c.pc = 0x00348660u; return; } if (c.pc != 0x003261B4u) [[unlikely]] return; }
L_003261B4:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
L_003261C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1720u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00326228; } }
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[16], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003261F0u); set32(c.r[4], c.r[2].w[0] + 1720u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x003261F0u) [[unlikely]] return; }
L_003261F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[29].w[0] + 56u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326204u); set32(c.r[4], c.r[2].w[0] + 1728u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00326204u) [[unlikely]] return; }
L_00326204:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[29].w[0] + 73u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326218u); set32(c.r[4], c.r[2].w[0] + 1745u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00326218u) [[unlikely]] return; }
L_00326218:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 1826u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00326238; } }
L_00326228:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 232u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003261C0u | kUnwind; return; } goto L_003261C0; } }
L_00326238:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00326250:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032626Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0092(c, 47u, depth + 1u); else { c.pc = 0x00348660u; return; } if (c.pc != 0x0032626Cu) [[unlikely]] return; }
L_0032626C:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00326278:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032628Cu); set32(c.r[4], c.r[2].w[0] + 1720u);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x0032628Cu) [[unlikely]] return; }
L_0032628C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00326300; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], c.r[18].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], 0u + 8u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[16], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003262C0u); set32(c.r[4], c.r[2].w[0] + 1720u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003262C0u) [[unlikely]] return; }
L_003262C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 16u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003262D8u); set32(c.r[4], c.r[2].w[0] + 1728u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003262D8u) [[unlikely]] return; }
L_003262D8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 64u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003262F0u); set32(c.r[4], c.r[2].w[0] + 1745u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003262F0u) [[unlikely]] return; }
L_003262F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 1826u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00326310; } }
L_00326300:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 232u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00326278u | kUnwind; return; } goto L_00326278; } }
L_00326310:
    c.r[1].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + 1u);  if (t) { goto L_003263B8; } }
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[18].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[17], c.r[3].w[0] << 3);
    set32(c.r[16], c.r[2].w[0] << 3);
    c.budget -= 11;
L_00326348:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[3].w[0] + 1720u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326360u); set32(c.r[5], c.r[2].w[0] + 1720u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00326360u) [[unlikely]] return; }
L_00326360:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[3].w[0] + 1728u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326378u); set32(c.r[5], c.r[2].w[0] + 1728u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00326378u) [[unlikely]] return; }
L_00326378:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[3].w[0] + 1745u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326390u); set32(c.r[5], c.r[2].w[0] + 1745u);  if (depth < kMaxDepth) unit_0007(c, 122u, depth + 1u); else { c.pc = 0x0011DC88u; return; } if (c.pc != 0x00326390u) [[unlikely]] return; }
L_00326390:
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[5], c.r[4].w[0] + c.r[17].w[0]);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 1826u));
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[16], c.r[16].w[0] + 232u);
    set32(c.r[17], c.r[17].w[0] + 232u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[4].w[0] + 1826u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00326348u | kUnwind; return; } goto L_00326348; } }
L_003263B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003263D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 63u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], c.r[29].w[0] + 56u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003263F0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0092(c, 112u, depth + 1u); else { c.pc = 0x00348E50u; return; } if (c.pc != 0x003263F0u) [[unlikely]] return; }
L_003263F0:
    c.r[16].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003263F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032640Cu); set32(c.r[4], c.r[2].w[0] + 1720u);  if (depth < kMaxDepth) unit_0007(c, 117u, depth + 1u); else { c.pc = 0x0011DB40u; return; } if (c.pc != 0x0032640Cu) [[unlikely]] return; }
L_0032640C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00326440; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 89u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 1826u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00326450; } }
L_00326440:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 232u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003263F8u | kUnwind; return; } goto L_003263F8; } }
L_00326450:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00326470:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[4].w[0] - 5454u);  [[clang::musttail]] return unit_0093(c, 109u, depth); }
L_00326480:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 16032u);
    set32(c.r[4], c.r[4].w[0] + 4752u);
    st32((c.r[28].w[0] - 23068u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003264A8u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003264A8u) [[unlikely]] return; }
L_003264A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 2352u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003264BCu); set32(c.r[6], 0u + 26u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003264BCu) [[unlikely]] return; }
L_003264BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003264C4u);  if (depth < kMaxDepth) unit_0091(c, 119u, depth + 1u); else { c.pc = 0x003454D0u; return; } if (c.pc != 0x003264C4u) [[unlikely]] return; }
L_003264C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003264CCu);  if (depth < kMaxDepth) unit_008D(c, 100u, depth + 1u); else { c.pc = 0x00335270u; return; } if (c.pc != 0x003264CCu) [[unlikely]] return; }
L_003264CC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00CD0000u);
    st8((c.r[28].w[0] - 22632u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5081u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003264E4u); st8((c.r[28].w[0] - 23072u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 51u, depth + 1u); else { c.pc = 0x00334CB0u; return; } if (c.pc != 0x003264E4u) [[unlikely]] return; }
L_003264E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003264F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C50000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 16032u);
    set32(c.r[4], c.r[4].w[0] + 4752u);
    st32((c.r[28].w[0] - 23068u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326518u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00326518u) [[unlikely]] return; }
L_00326518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326520u);  if (depth < kMaxDepth) unit_0091(c, 119u, depth + 1u); else { c.pc = 0x003454D0u; return; } if (c.pc != 0x00326520u) [[unlikely]] return; }
L_00326520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326528u);  if (depth < kMaxDepth) unit_008D(c, 100u, depth + 1u); else { c.pc = 0x00335270u; return; } if (c.pc != 0x00326528u) [[unlikely]] return; }
L_00326528:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    set32(c.r[4], 0u - 1u);
    st8((c.r[28].w[0] - 22632u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 9847u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00326550:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326560u);  if (depth < kMaxDepth) unit_0089(c, 328u, depth + 1u); else { c.pc = 0x00327170u; return; } if (c.pc != 0x00326560u) [[unlikely]] return; }
L_00326560:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], 0u + 4u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 2352u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_003266B8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00326660; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00326608; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003265D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003265A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003266D8; } }
    c.budget -= 1;
L_003265A8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[28].w[0] - 22624u), static_cast<std::uint8_t>(0u));
    st8((c.r[1].w[0] - 2352u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[2].w[0] + 3416u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 23068u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 10363u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003266D8; } }
    c.budget -= 1;
L_003265D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003265D8u);  if (depth < kMaxDepth) unit_00A4(c, 232u, depth + 1u); else { c.pc = 0x00392DA0u; return; } if (c.pc != 0x003265D8u) [[unlikely]] return; }
L_003265D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 2351u));
    set32(c.r[2], c.r[2].w[0] - 1712u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003265FCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003265FCu) [[unlikely]] return; }
L_003265FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003266D8; } }
    c.budget -= 1;
L_00326608:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] - 2351u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00326648; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00326630; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003266D8; } }
    c.budget -= 1;
L_00326630:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326640u); st8((c.r[1].w[0] - 2351u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00326640u) [[unlikely]] return; }
L_00326640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003266D8; } }
L_00326648:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] - 2352u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 2348u), 0u);  if (t) { goto L_003266E0; } }
    c.budget -= 1;
L_00326660:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 2351u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003266A8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00326688; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003266D8; } }
    c.budget -= 1;
L_00326688:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[28].w[0] - 22624u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032669Cu); st8((c.r[1].w[0] - 2351u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x0032669Cu) [[unlikely]] return; }
L_0032669C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003266D8; } }
    c.budget -= 1;
L_003266A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003266B0u);  if (depth < kMaxDepth) unit_009A(c, 304u, depth + 1u); else { c.pc = 0x0036AF60u; return; } if (c.pc != 0x003266B0u) [[unlikely]] return; }
L_003266B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003266E0; } }
L_003266B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] - 2352u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003266CCu); st32((c.r[1].w[0] - 2348u), 0u);  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x003266CCu) [[unlikely]] return; }
L_003266CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003266E0; } }
    c.budget -= 1;
L_003266D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003266E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003266F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], 0u + 3u);
    st8((c.r[1].w[0] - 2351u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[1].w[0] - 2352u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00326710:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], 0u + 4u);
    st8((c.r[1].w[0] - 2351u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[1].w[0] - 2352u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00326730:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326740u);  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00326740u) [[unlikely]] return; }
L_00326740:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[1].w[0] - 2350u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] - 2351u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] - 2349u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] - 2348u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] - 2347u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00326780:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 2350u));
    set32(c.r[2], c.r[2].w[0] - 1704u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00324000u < 16384u) { entry = entries_0089[(t - 0x00324000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003267B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = ld8((c.r[1].w[0] - 2349u));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);  if (t) { goto L_00326980; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 4672u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00324000u < 16384u) { entry = entries_0089[(t - 0x00324000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003267E8:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003267F8u); st8((c.r[1].w[0] - 2349u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0085(c, 277u, depth + 1u); else { c.pc = 0x00316690u; return; } if (c.pc != 0x003267F8u) [[unlikely]] return; }
L_003267F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326800u);  if (depth < kMaxDepth) unit_0089(c, 143u, depth + 1u); else { c.pc = 0x003258A0u; return; } if (c.pc != 0x00326800u) [[unlikely]] return; }
L_00326800:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326980; } }
L_00326808:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326818u); st8((c.r[1].w[0] - 2349u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00326818u) [[unlikely]] return; }
L_00326818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326980; } }
L_00326820:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326830u); st8((c.r[1].w[0] - 2349u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 87u, depth + 1u); else { c.pc = 0x00335040u; return; } if (c.pc != 0x00326830u) [[unlikely]] return; }
L_00326830:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] - 2344u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00326980; } }
L_00326840:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 2344u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st16((c.r[1].w[0] - 2344u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_00326980; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] - 2349u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], 0u + 6u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326880u); st16((c.r[1].w[0] - 2344u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 130u, depth + 1u); else { c.pc = 0x003355C0u; return; } if (c.pc != 0x00326880u) [[unlikely]] return; }
L_00326880:
    set32(c.r[4], 0u + 30u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032688Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 59u, depth + 1u); else { c.pc = 0x00334D80u; return; } if (c.pc != 0x0032688Cu) [[unlikely]] return; }
L_0032688C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326980; } }
    c.budget -= 1;
L_00326898:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 2344u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st16((c.r[1].w[0] - 2344u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_00326980; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[28].w[0] - 22632u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 2349u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00326980; } }
    c.budget -= 1;
L_003268D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003268D8u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_008D(c, 144u, depth + 1u); else { c.pc = 0x00335690u; return; } if (c.pc != 0x003268D8u) [[unlikely]] return; }
L_003268D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_00326980; } }
    st8((c.r[1].w[0] - 2349u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 2350u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 2350u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00326980; } }
    c.budget -= 1;
L_00326900:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 2344u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st16((c.r[1].w[0] - 2344u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_00326980; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] - 2349u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326940u); st16((c.r[1].w[0] - 2344u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 130u, depth + 1u); else { c.pc = 0x003355C0u; return; } if (c.pc != 0x00326940u) [[unlikely]] return; }
L_00326940:
    set32(c.r[4], 0u + 30u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032694Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008D(c, 59u, depth + 1u); else { c.pc = 0x00334D80u; return; } if (c.pc != 0x0032694Cu) [[unlikely]] return; }
L_0032694C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326980; } }
    c.budget -= 1;
L_00326958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326960u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_008D(c, 144u, depth + 1u); else { c.pc = 0x00335690u; return; } if (c.pc != 0x00326960u) [[unlikely]] return; }
L_00326960:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_00326980; } }
    st8((c.r[1].w[0] - 2349u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 2350u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] - 2350u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_00326980:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00326990:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003269A0u);  if (depth < kMaxDepth) unit_0085(c, 282u, depth + 1u); else { c.pc = 0x00316710u; return; } if (c.pc != 0x003269A0u) [[unlikely]] return; }
L_003269A0:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 23020u));
    c.r[5].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], c.r[4].w[0] - 2u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (t) { goto L_003269C8; } }
    set32(c.r[3], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003269E0; } }
    c.budget -= 1;
L_003269C8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 4760u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C60000u);
    st32((c.r[1].w[0] + 4760u), c.r[3].w[0]);
    c.budget -= 6;
L_003269E0:
    c.r[4].d[0] = c.r[5].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], 0u - 17u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 50u);  if (t) { goto L_00326B60; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00326B60; } }
    set32(c.r[3], 0u - 11u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 9u);  if (t) { goto L_00326B50; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00326B38; } }
    set32(c.r[3], 0u - 86u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 80u);  if (t) { goto L_00326B28; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00326B68; } }
    set32(c.r[3], 0u - 85u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 84u);  if (t) { goto L_00326B18; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00326B08; } }
    set32(c.r[3], 0u - 83u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 82u);  if (t) { goto L_00326AF8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00326AE8; } }
    set32(c.r[3], 0u - 81u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 5u);  if (t) { goto L_00326AD8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00326AC8; } }
    set32(c.r[3], 0u - 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 2u);  if (t) { goto L_00326AB8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00326AA8; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00326B68; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00326B68; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00326B68; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00326B68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326B68; } }
    c.budget -= 1;
L_00326AA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326AB0u); set32(c.r[4], 0u - 107u);  if (depth < kMaxDepth) unit_0089(c, 319u, depth + 1u); else { c.pc = 0x00327030u; return; } if (c.pc != 0x00326AB0u) [[unlikely]] return; }
L_00326AB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326B68; } }
L_00326AB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326AC0u); set32(c.r[4], 0u - 106u);  if (depth < kMaxDepth) unit_0089(c, 319u, depth + 1u); else { c.pc = 0x00327030u; return; } if (c.pc != 0x00326AC0u) [[unlikely]] return; }
L_00326AC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326B68; } }
L_00326AC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326AD0u); set32(c.r[4], 0u - 105u);  if (depth < kMaxDepth) unit_0089(c, 319u, depth + 1u); else { c.pc = 0x00327030u; return; } if (c.pc != 0x00326AD0u) [[unlikely]] return; }
L_00326AD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326B68; } }
L_00326AD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326AE0u); set32(c.r[4], 0u - 109u);  if (depth < kMaxDepth) unit_0089(c, 319u, depth + 1u); else { c.pc = 0x00327030u; return; } if (c.pc != 0x00326AE0u) [[unlikely]] return; }
L_00326AE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326B68; } }
L_00326AE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326AF0u); set32(c.r[4], 0u - 108u);  if (depth < kMaxDepth) unit_0089(c, 319u, depth + 1u); else { c.pc = 0x00327030u; return; } if (c.pc != 0x00326AF0u) [[unlikely]] return; }
L_00326AF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326B68; } }
L_00326AF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326B00u); set32(c.r[4], 0u - 104u);  if (depth < kMaxDepth) unit_0089(c, 319u, depth + 1u); else { c.pc = 0x00327030u; return; } if (c.pc != 0x00326B00u) [[unlikely]] return; }
L_00326B00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326B68; } }
L_00326B08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326B10u); set32(c.r[4], 0u - 103u);  if (depth < kMaxDepth) unit_0089(c, 319u, depth + 1u); else { c.pc = 0x00327030u; return; } if (c.pc != 0x00326B10u) [[unlikely]] return; }
L_00326B10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326B68; } }
L_00326B18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326B20u); set32(c.r[4], 0u - 102u);  if (depth < kMaxDepth) unit_0089(c, 319u, depth + 1u); else { c.pc = 0x00327030u; return; } if (c.pc != 0x00326B20u) [[unlikely]] return; }
L_00326B20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326B68; } }
L_00326B28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326B30u); set32(c.r[4], 0u + 54u);  if (depth < kMaxDepth) unit_0089(c, 319u, depth + 1u); else { c.pc = 0x00327030u; return; } if (c.pc != 0x00326B30u) [[unlikely]] return; }
L_00326B30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326B68; } }
L_00326B38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326B40u);  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00326B40u) [[unlikely]] return; }
L_00326B40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326B48u);  if (depth < kMaxDepth) unit_0089(c, 248u, depth + 1u); else { c.pc = 0x003266F0u; return; } if (c.pc != 0x00326B48u) [[unlikely]] return; }
L_00326B48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326B68; } }
L_00326B50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326B58u);  if (depth < kMaxDepth) unit_0089(c, 249u, depth + 1u); else { c.pc = 0x00326710u; return; } if (c.pc != 0x00326B58u) [[unlikely]] return; }
L_00326B58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326B68; } }
L_00326B60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326B68u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0089(c, 320u, depth + 1u); else { c.pc = 0x00327070u; return; } if (c.pc != 0x00326B68u) [[unlikely]] return; }
L_00326B68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00326B80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 2349u));
    set32(c.r[2], c.r[2].w[0] - 1680u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00324000u < 16384u) { entry = entries_0089[(t - 0x00324000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00326BB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = ld8((c.r[1].w[0] - 2348u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00326C98; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00326C10; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00326BE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326CB0; } }
    c.budget -= 1;
L_00326BE8:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] - 2348u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 900u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326C04u); st16((c.r[1].w[0] - 2344u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 87u, depth + 1u); else { c.pc = 0x00335040u; return; } if (c.pc != 0x00326C04u) [[unlikely]] return; }
L_00326C04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326CB0; } }
    c.budget -= 1;
L_00326C10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 2344u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st16((c.r[1].w[0] - 2344u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 541ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_00326CB0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 2344u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st16((c.r[1].w[0] - 2344u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[4], 0u + 32u);  if (t) { goto L_00326C68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326C60u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00326C60u) [[unlikely]] return; }
L_00326C60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00326CB0; } }
L_00326C68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 2348u));
    set32(c.r[5], 0u + 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[1].w[0] - 2344u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326C90u); st8((c.r[1].w[0] - 2348u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 85u, depth + 1u); else { c.pc = 0x00335000u; return; } if (c.pc != 0x00326C90u) [[unlikely]] return; }
L_00326C90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326CB0; } }
L_00326C98:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 2344u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st16((c.r[1].w[0] - 2344u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_00326CB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00326CC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = ld8((c.r[1].w[0] - 2348u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00326E00; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00326D30; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00326CF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326E20; } }
    c.budget -= 1;
L_00326CF8:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326D08u); st8((c.r[1].w[0] - 2348u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 15u, depth + 1u); else { c.pc = 0x00334150u; return; } if (c.pc != 0x00326D08u) [[unlikely]] return; }
L_00326D08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326D10u);  if (depth < kMaxDepth) unit_006A(c, 292u, depth + 1u); else { c.pc = 0x002ABC40u; return; } if (c.pc != 0x00326D10u) [[unlikely]] return; }
L_00326D10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326D1Cu); st16((c.r[1].w[0] - 2344u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0098(c, 607u, depth + 1u); else { c.pc = 0x00363E70u; return; } if (c.pc != 0x00326D1Cu) [[unlikely]] return; }
L_00326D1C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326D28u); c.r[4].d[0] = ld8((c.r[1].w[0] - 2328u));  if (depth < kMaxDepth) unit_0089(c, 321u, depth + 1u); else { c.pc = 0x003270A0u; return; } if (c.pc != 0x00326D28u) [[unlikely]] return; }
L_00326D28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326E20; } }
L_00326D30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326D3Cu); c.r[4].d[0] = ld8((c.r[1].w[0] - 2328u));  if (depth < kMaxDepth) unit_0089(c, 321u, depth + 1u); else { c.pc = 0x003270A0u; return; } if (c.pc != 0x00326D3Cu) [[unlikely]] return; }
L_00326D3C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 2344u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st16((c.r[1].w[0] - 2344u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 2344u)));
    c.r[3].d[0] = c.r[4].sd[0] < 600ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_00326D98; } }
    set32(c.r[5], 0u + 16u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 2348u));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[1].w[0] - 2344u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326D8Cu); st8((c.r[1].w[0] - 2348u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x00326D8Cu) [[unlikely]] return; }
L_00326D8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326E20; } }
    c.budget -= 1;
L_00326D98:
    c.r[3].d[0] = c.r[4].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00326E20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326DACu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00326DACu) [[unlikely]] return; }
L_00326DAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_00326DC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326DBCu);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00326DBCu) [[unlikely]] return; }
L_00326DBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00326E20; } }
    c.budget -= 1;
L_00326DC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 2348u));
    set32(c.r[5], 0u + 16u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[1].w[0] - 2344u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326DF4u); st8((c.r[1].w[0] - 2348u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 545u, depth + 1u); else { c.pc = 0x003638B0u; return; } if (c.pc != 0x00326DF4u) [[unlikely]] return; }
L_00326DF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326E20; } }
    c.budget -= 1;
L_00326E00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326E08u);  if (depth < kMaxDepth) unit_0098(c, 542u, depth + 1u); else { c.pc = 0x00363870u; return; } if (c.pc != 0x00326E08u) [[unlikely]] return; }
L_00326E08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00326E20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326E18u);  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00326E18u) [[unlikely]] return; }
L_00326E18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326E20u);  if (depth < kMaxDepth) unit_0089(c, 248u, depth + 1u); else { c.pc = 0x003266F0u; return; } if (c.pc != 0x00326E20u) [[unlikely]] return; }
L_00326E20:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00326E30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = ld8((c.r[1].w[0] - 2348u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00326FA0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00326F30; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00326EB8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00326E70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00327018; } }
L_00326E70:
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] - 2348u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 900u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326E8Cu); st16((c.r[1].w[0] - 2344u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00326E8Cu) [[unlikely]] return; }
L_00326E8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326E94u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_008D(c, 19u, depth + 1u); else { c.pc = 0x003341C0u; return; } if (c.pc != 0x00326E94u) [[unlikely]] return; }
L_00326E94:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326EA0u); c.r[4].d[0] = ld8((c.r[1].w[0] - 2328u));  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x003788A0u; return; } if (c.pc != 0x00326EA0u) [[unlikely]] return; }
L_00326EA0:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326EACu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_008D(c, 83u, depth + 1u); else { c.pc = 0x00334FC0u; return; } if (c.pc != 0x00326EACu) [[unlikely]] return; }
L_00326EAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00327018; } }
    c.budget -= 1;
L_00326EB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 2344u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st16((c.r[1].w[0] - 2344u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 2344u)));
    c.r[1].d[0] = c.r[3].sd[0] < 721ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00327018; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[4], 0u + 32u);  if (t) { goto L_00326EF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326EF0u);  if (depth < kMaxDepth) unit_008D(c, 49u, depth + 1u); else { c.pc = 0x00334AA0u; return; } if (c.pc != 0x00326EF0u) [[unlikely]] return; }
L_00326EF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00327018; } }
L_00326EF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 2348u));
    set32(c.r[2], 0u + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] - 2328u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st16((c.r[1].w[0] - 2344u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326F24u); st8((c.r[1].w[0] - 2348u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 57u, depth + 1u); else { c.pc = 0x00379020u; return; } if (c.pc != 0x00326F24u) [[unlikely]] return; }
L_00326F24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00327018; } }
    c.budget -= 1;
L_00326F30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 2344u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st16((c.r[1].w[0] - 2344u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00327018; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326F64u); st8((c.r[1].w[0] - 2348u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 149u, depth + 1u); else { c.pc = 0x00335720u; return; } if (c.pc != 0x00326F64u) [[unlikely]] return; }
L_00326F64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00326F80; } }
    set32(c.r[2], 0u + 180u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] - 2344u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00326F90; } }
    c.budget -= 1;
L_00326F80:
    set32(c.r[2], 0u + 60u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st16((c.r[1].w[0] - 2344u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00326F90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326F98u); set32(c.r[4], 0u + 145u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x003788A0u; return; } if (c.pc != 0x00326F98u) [[unlikely]] return; }
L_00326F98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00327018; } }
L_00326FA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 2344u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st16((c.r[1].w[0] - 2344u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_00327018; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[1].w[0] - 2349u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] - 2350u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326FE0u); st8((c.r[1].w[0] - 2348u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0085(c, 2u, depth + 1u); else { c.pc = 0x00314010u; return; } if (c.pc != 0x00326FE0u) [[unlikely]] return; }
L_00326FE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326FE8u);  if (depth < kMaxDepth) unit_008D(c, 149u, depth + 1u); else { c.pc = 0x00335720u; return; } if (c.pc != 0x00326FE8u) [[unlikely]] return; }
L_00326FE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00327010; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326FFCu); st8((c.r[28].w[0] - 23720u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_008D(c, 12u, depth + 1u); else { c.pc = 0x00334100u; return; } if (c.pc != 0x00326FFCu) [[unlikely]] return; }
L_00326FFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327004u);  if (depth < kMaxDepth) unit_0086(c, 83u, depth + 1u); else { c.pc = 0x003188D0u; return; } if (c.pc != 0x00327004u) [[unlikely]] return; }
L_00327004:
    set32(c.r[3], ld32((c.r[28].w[0] - 23068u)));
    st8((c.r[3].w[0] + 2535u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_00327010:
    st8((c.r[28].w[0] - 23056u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00327018:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00327030:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 23080u)));
    st8((c.r[1].w[0] - 2328u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], 0u + 1u);
    st8((c.r[1].w[0] - 2348u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] - 2350u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; st8((c.r[1].w[0] - 2349u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00327068; } }
    st8((c.r[28].w[0] - 23080u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 2;
L_00327068:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00327070:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[1].w[0] - 2328u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] - 2348u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] - 2350u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[1].w[0] - 2349u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003270A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003270C4u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_008D(c, 98u, depth + 1u); else { c.pc = 0x003351D0u; return; } if (c.pc != 0x003270C4u) [[unlikely]] return; }
L_003270C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 3872u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], 0u + 24u);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; set32(c.r[16], ld32((c.r[4].w[0])));  if (t) { goto L_00327158; } }
    set32(c.r[3], 0u + 81u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_00327158; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 16u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00327138; } }
L_00327100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327108u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00327108u) [[unlikely]] return; }
L_00327108:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.f[13] = ld32((c.r[16].w[0] + 8u));
    c.f[14] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032711Cu); c.f[12] = ld32((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x0032711Cu) [[unlikely]] return; }
L_0032711C:
    set32(c.r[16], c.r[16].w[0] + 20u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 16u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00327100u | kUnwind; return; } goto L_00327100; } }
    c.budget -= 1;
L_00327138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327140u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));  if (depth < kMaxDepth) unit_008D(c, 97u, depth + 1u); else { c.pc = 0x003351C0u; return; } if (c.pc != 0x00327140u) [[unlikely]] return; }
L_00327140:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.f[13] = ld32((c.r[16].w[0] + 8u));
    c.f[14] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327154u); c.f[12] = ld32((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_008D(c, 90u, depth + 1u); else { c.pc = 0x003350B0u; return; } if (c.pc != 0x00327154u) [[unlikely]] return; }
L_00327154:
    c.budget -= 1;
L_00327158:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00327170:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].d[0] = ld16((c.r[1].w[0] + 9600u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 9602u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] - 2384u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] - 2380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 2380u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[4].d[0] = ~(c.r[4].d[0] | 0ull);
    set32(c.r[3], ld32((c.r[1].w[0] - 2384u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] - 2376u), c.r[3].w[0]);  c.pc = t; return; }
L_003271E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 11344u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003271FCu); set32(c.r[6], 0u + 768u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x003271FCu) [[unlikely]] return; }
L_003271FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01250000u);
    st32((c.r[1].w[0] - 10580u), 0u);
    set32(c.r[2], 0u + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] + 16384u);
    st32((c.r[1].w[0] - 11344u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01250000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], c.r[2].w[0] + 16368u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[1].w[0] - 11340u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], c.r[2].w[0] - 10588u);
    st32((c.r[1].w[0] - 11336u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] - 10588u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01260000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], c.r[2].w[0] + 16384u);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327260u); st32((c.r[1].w[0] - 10584u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00327260u) [[unlikely]] return; }
L_00327260:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00327270:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - 11344u);
    c.budget -= 4;
L_00327280:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003272A8; } }
    set32(c.r[3], c.r[4].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 11344u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_003272C0; } }
L_003272A8:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00327280u | kUnwind; return; } goto L_00327280; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003272C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003272D0:
    mmi::mult(c, 0, c.r[5].w[0], c.r[6].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003272F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003273A0; } }
    c.budget -= 1;
L_003272F0:
    set32(c.r[3], 0u + 16u);
    c.r[2].d[0] = c.r[8].d[0] & 15ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] - 11344u);
    set32(c.r[8], c.r[8].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], c.r[2].w[0] - 10588u);
    c.budget -= 8;
L_00327310:
    set32(c.r[6], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[7].w[0])));
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00327388; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032733Cu);  if (depth < kMaxDepth) unit_0089(c, 332u, depth + 1u); else { c.pc = 0x00327270u; return; } if (c.pc != 0x0032733Cu) [[unlikely]] return; }
L_0032733C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00327350; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003273A0; } }
L_00327350:
    st32((c.r[16].w[0]), c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 8u)));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[7].w[0] + 8u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327380u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00327380u) [[unlikely]] return; }
L_00327380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_003273A0; } }
L_00327388:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_00327398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003273A0; } }
L_00327398:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00327310u | kUnwind; return; } goto L_00327310; } }
L_003273A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00327410:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[4].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003272D0u | kUnwind; return; } goto L_003272D0; }
L_00327420:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x003271E0u | kUnwind; return; } goto L_003271E0; }
L_00327430:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[7].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00327460; } }
    set32(c.r[3], 0u - 3u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003274A0; } }
L_00327460:
    c.r[1].d[0] = c.r[7].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00327470; } }
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_00327470:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032748Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0011A998u; return; } if (c.pc != 0x0032748Cu) [[unlikely]] return; }
L_0032748C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 5;
L_003274A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003274C0:
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[3], 0u - 3u);  if (t) { goto L_003274D8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00327510; } }
L_003274D8:
    c.r[1].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003274E8; } }
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_003274E8:
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 168u)));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 10;
L_00327510:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00327520:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_00327AB8; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_00327790; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_00327680; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_00327560; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00327C90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00327C88; } }
L_00327560:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 11u));
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 7u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.r[1].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[7].w[0]);  if (t) { goto L_00327C90; } }
    set32(c.r[8], c.r[6].w[0] - c.r[7].w[0]);
    c.r[1].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] - 8u);  if (t) { goto L_00327640; } }
    c.budget -= 1;
L_00327590:
    c.r[10].d[0] = ld8((c.r[4].w[0]));
    c.r[9].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.r[8].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[10].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[5], c.r[5].w[0] + 2u);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.r[9].d[0] = ld8((c.r[5].w[0]));
    c.r[10].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[10].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[5], c.r[5].w[0] + 2u);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.r[9].d[0] = ld8((c.r[5].w[0]));
    c.r[10].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[10].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[5], c.r[5].w[0] + 2u);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.r[9].d[0] = ld8((c.r[5].w[0]));
    c.r[10].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[10].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[5], c.r[5].w[0] + 2u);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.budget -= 43;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00327590u | kUnwind; return; } goto L_00327590; } }
    c.budget -= 1;
L_00327640:
    c.r[1].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00327C90; } }
    c.budget -= 1;
L_00327650:
    c.r[8].d[0] = ld8((c.r[5].w[0]));
    c.r[9].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00327650u | kUnwind; return; } goto L_00327650; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00327C90; } }
    c.budget -= 1;
L_00327680:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00327C90; } }
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] - 8u);  if (t) { goto L_00327750; } }
    c.budget -= 1;
L_003276A0:
    c.r[10].d[0] = ld8((c.r[5].w[0]));
    c.r[9].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.r[8].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[6].w[0] + 1u));
    c.r[10].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[6], c.r[6].w[0] + 2u);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.r[9].d[0] = ld8((c.r[6].w[0]));
    c.r[10].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[6].w[0] + 1u));
    c.r[10].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[6], c.r[6].w[0] + 2u);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.r[9].d[0] = ld8((c.r[6].w[0]));
    c.r[10].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[6].w[0] + 1u));
    c.r[10].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[6], c.r[6].w[0] + 2u);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.r[9].d[0] = ld8((c.r[6].w[0]));
    c.r[10].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[6].w[0] + 1u));
    c.r[10].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[6], c.r[6].w[0] + 2u);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.budget -= 43;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003276A0u | kUnwind; return; } goto L_003276A0; } }
    c.budget -= 1;
L_00327750:
    c.r[1].d[0] = c.r[7].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00327C90; } }
    c.budget -= 1;
L_00327760:
    c.r[8].d[0] = ld8((c.r[6].w[0]));
    c.r[9].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00327760u | kUnwind; return; } goto L_00327760; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00327C90; } }
    c.budget -= 1;
L_00327790:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 11u));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[7].w[0] + 7u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 3));
    c.r[1].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[3].w[0] - c.r[4].w[0]);  if (t) { goto L_003278C8; } }
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] - 8u);  if (t) { goto L_00327890; } }
L_003277C0:
    c.r[12].d[0] = ld8((c.r[6].w[0]));
    c.r[11].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[9], c.r[9].w[0] + 8u);
    c.r[10].d[0] = c.r[9].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[12], c.r[12].w[0] >> 1);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[12].d[0] = ld8((c.r[6].w[0] + 1u));
    c.r[11].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[12], c.r[12].w[0] >> 1);
    set32(c.r[6], c.r[6].w[0] + 2u);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.r[12].d[0] = ld8((c.r[6].w[0]));
    c.r[11].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[12], c.r[12].w[0] >> 1);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[12].d[0] = ld8((c.r[6].w[0] + 1u));
    c.r[11].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[12], c.r[12].w[0] >> 1);
    set32(c.r[6], c.r[6].w[0] + 2u);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.r[12].d[0] = ld8((c.r[6].w[0]));
    c.r[11].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[12], c.r[12].w[0] >> 1);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[12].d[0] = ld8((c.r[6].w[0] + 1u));
    c.r[11].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[12], c.r[12].w[0] >> 1);
    set32(c.r[6], c.r[6].w[0] + 2u);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.r[12].d[0] = ld8((c.r[6].w[0]));
    c.r[11].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[12], c.r[12].w[0] >> 1);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[12].d[0] = ld8((c.r[6].w[0] + 1u));
    c.r[11].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[12], c.r[12].w[0] >> 1);
    set32(c.r[6], c.r[6].w[0] + 2u);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.budget -= 51;
    { const bool t = c.r[10].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003277C0u | kUnwind; return; } goto L_003277C0; } }
    c.budget -= 1;
L_00327890:
    c.r[1].d[0] = c.r[9].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003278C8; } }
    c.budget -= 1;
L_003278A0:
    c.r[11].d[0] = ld8((c.r[6].w[0]));
    c.r[10].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[9].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    set32(c.r[11], c.r[11].w[0] >> 1);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003278A0u | kUnwind; return; } goto L_003278A0; } }
L_003278C8:
    c.r[1].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00327C90; } }
    c.r[1].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[7].w[0] - 8u);  if (t) { goto L_00327A60; } }
L_003278E0:
    c.r[10].d[0] = ld8((c.r[6].w[0]));
    c.r[9].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    c.budget -= 5;
    { const bool t = c.r[9].sd[0] >= 0; set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 1));  if (t) { goto L_003278FC; } }
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 1));
    c.budget -= 2;
L_003278FC:
    c.r[9].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[10].d[0] = ld8((c.r[6].w[0] + 1u));
    c.r[9].d[0] = ld8((c.r[8].w[0] + 1u));
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    c.budget -= 8;
    { const bool t = c.r[9].sd[0] >= 0; set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 1));  if (t) { goto L_00327924; } }
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 1));
    c.budget -= 2;
L_00327924:
    c.r[9].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[8], c.r[8].w[0] + 2u);
    set32(c.r[6], c.r[6].w[0] + 2u);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[10].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.r[9].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    c.budget -= 11;
    { const bool t = c.r[9].sd[0] >= 0; set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 1));  if (t) { goto L_00327958; } }
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 1));
    c.budget -= 2;
L_00327958:
    c.r[9].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[10].d[0] = ld8((c.r[6].w[0] + 1u));
    c.r[9].d[0] = ld8((c.r[8].w[0] + 1u));
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    c.budget -= 8;
    { const bool t = c.r[9].sd[0] >= 0; set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 1));  if (t) { goto L_00327980; } }
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 1));
    c.budget -= 2;
L_00327980:
    c.r[9].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[8], c.r[8].w[0] + 2u);
    set32(c.r[6], c.r[6].w[0] + 2u);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[10].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.r[9].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    c.budget -= 11;
    { const bool t = c.r[9].sd[0] >= 0; set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 1));  if (t) { goto L_003279B4; } }
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 1));
    c.budget -= 2;
L_003279B4:
    c.r[9].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[10].d[0] = ld8((c.r[6].w[0] + 1u));
    c.r[9].d[0] = ld8((c.r[8].w[0] + 1u));
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    c.budget -= 8;
    { const bool t = c.r[9].sd[0] >= 0; set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 1));  if (t) { goto L_003279DC; } }
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 1));
    c.budget -= 2;
L_003279DC:
    c.r[9].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[8], c.r[8].w[0] + 2u);
    set32(c.r[6], c.r[6].w[0] + 2u);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[10].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.r[9].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    c.budget -= 11;
    { const bool t = c.r[9].sd[0] >= 0; set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 1));  if (t) { goto L_00327A10; } }
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 1));
    c.budget -= 2;
L_00327A10:
    c.r[9].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[10].d[0] = ld8((c.r[6].w[0] + 1u));
    c.r[9].d[0] = ld8((c.r[8].w[0] + 1u));
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    c.budget -= 8;
    { const bool t = c.r[9].sd[0] >= 0; set32(c.r[11], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 1));  if (t) { goto L_00327A38; } }
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[11], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 1));
    c.budget -= 2;
L_00327A38:
    c.r[10].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.r[9].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    set32(c.r[8], c.r[8].w[0] + 2u);
    set32(c.r[6], c.r[6].w[0] + 2u);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.budget -= 9;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003278E0u | kUnwind; return; } goto L_003278E0; } }
    c.budget -= 1;
L_00327A60:
    c.r[1].d[0] = c.r[3].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00327C90; } }
    c.budget -= 1;
L_00327A70:
    c.r[9].d[0] = ld8((c.r[6].w[0]));
    c.r[4].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[4], c.r[9].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));  if (t) { goto L_00327A8C; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));
    c.budget -= 2;
L_00327A8C:
    c.r[9].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[4].d[0] = c.r[3].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00327A70u | kUnwind; return; } goto L_00327A70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00327C90; } }
L_00327AB8:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 11u));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[7].w[0] + 7u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 3));
    c.r[1].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] - c.r[7].w[0]);  if (t) { goto L_00327BD8; } }
    c.r[1].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] - 8u);  if (t) { goto L_00327BA0; } }
    c.budget -= 1;
L_00327AF0:
    c.r[13].d[0] = ld8((c.r[5].w[0]));
    c.r[12].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[10], c.r[10].w[0] + 8u);
    c.r[11].d[0] = c.r[10].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[12], c.r[13].w[0] + c.r[12].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld8((c.r[6].w[0] + 1u));
    c.r[13].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[6], c.r[6].w[0] + 2u);
    set32(c.r[12], c.r[13].w[0] + c.r[12].w[0]);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.r[12].d[0] = ld8((c.r[6].w[0]));
    c.r[13].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[12], c.r[13].w[0] + c.r[12].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld8((c.r[6].w[0] + 1u));
    c.r[13].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[6], c.r[6].w[0] + 2u);
    set32(c.r[12], c.r[13].w[0] + c.r[12].w[0]);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.r[12].d[0] = ld8((c.r[6].w[0]));
    c.r[13].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[12], c.r[13].w[0] + c.r[12].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld8((c.r[6].w[0] + 1u));
    c.r[13].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[6], c.r[6].w[0] + 2u);
    set32(c.r[12], c.r[13].w[0] + c.r[12].w[0]);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.r[12].d[0] = ld8((c.r[6].w[0]));
    c.r[13].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[12], c.r[13].w[0] + c.r[12].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld8((c.r[6].w[0] + 1u));
    c.r[13].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[6], c.r[6].w[0] + 2u);
    set32(c.r[12], c.r[13].w[0] + c.r[12].w[0]);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.budget -= 43;
    { const bool t = c.r[11].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00327AF0u | kUnwind; return; } goto L_00327AF0; } }
    c.budget -= 1;
L_00327BA0:
    c.r[1].d[0] = c.r[10].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00327BD8; } }
    c.budget -= 1;
L_00327BB0:
    c.r[11].d[0] = ld8((c.r[6].w[0]));
    c.r[12].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[3].d[0] = c.r[10].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[11], c.r[12].w[0] + c.r[11].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00327BB0u | kUnwind; return; } goto L_00327BB0; } }
    c.budget -= 1;
L_00327BD8:
    c.r[1].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_00327C90; } }
    c.budget -= 1;
L_00327BE8:
    c.r[14].d[0] = ld8((c.r[6].w[0]));
    c.r[13].d[0] = ld8((c.r[8].w[0]));
    c.r[15].d[0] = ld8((c.r[9].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[14].w[0] - c.r[13].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[12], c.r[15].w[0] - c.r[13].w[0]);  if (t) { goto L_00327C14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[11], 0u - c.r[3].w[0]);  if (t) { goto L_00327C18; } }
L_00327C14:
    c.r[11].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_00327C18:
    c.budget -= 2;
    { const bool t = c.r[12].sd[0] >= 0; c.r[7].d[0] = c.r[12].d[0] + 0ull;  if (t) { goto L_00327C2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u - c.r[12].w[0]);  if (t) { goto L_00327C2C; } }
    c.r[7].d[0] = c.r[12].d[0] + 0ull;
    c.budget -= 1;
L_00327C2C:
    set32(c.r[3], c.r[3].w[0] + c.r[12].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00327C3C; } }
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_00327C3C:
    c.r[1].d[0] = c.r[7].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;  if (t) { goto L_00327C58; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00327C60; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00327C58:
    if (c.r[1].d[0] != 0) c.r[14].d[0] = c.r[13].d[0];
    c.r[15].d[0] = c.r[14].d[0] + 0ull;
    c.budget -= 2;
L_00327C60:
    c.r[7].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[3].d[0] = c.r[10].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] + c.r[15].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00327BE8u | kUnwind; return; } goto L_00327BE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00327C90; } }
    c.budget -= 1;
L_00327C88:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00327C90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00327CA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], 0u - 8u);
    st32((c.r[1].w[0] - 10276u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[6], ld32((c.r[1].w[0] - 10300u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 10304u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 10288u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] - 10290u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] - 10200u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] - 10196u), c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[1].w[0] - 10192u), c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] + 7u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    set32(c.r[3], c.r[3].w[0] + 7u);
    set32(c.r[3], c.r[3].w[0] >> 3);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327D1Cu); set32(c.r[4], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0089(c, 338u, depth + 1u); else { c.pc = 0x00327410u; return; } if (c.pc != 0x00327D1Cu) [[unlikely]] return; }
L_00327D1C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] - 10188u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 10188u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[2], ld32((c.r[1].w[0] - 10288u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[2].w[0] + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327D48u); st32((c.r[1].w[0] - 10184u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0089(c, 338u, depth + 1u); else { c.pc = 0x00327410u; return; } if (c.pc != 0x00327D48u) [[unlikely]] return; }
L_00327D48:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[1].w[0] - 10180u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 10288u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 10180u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327D6Cu); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0006(c, 201u, depth + 1u); else { c.pc = 0x0011AB50u; return; } if (c.pc != 0x00327D6Cu) [[unlikely]] return; }
L_00327D6C:
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st8((c.r[1].w[0] - 10148u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00327D90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[1].w[0] - 10156u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], ld32((c.r[1].w[0] - 10200u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] - 10156u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 10156u)));
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_00327DD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327DD0u); set32(c.r[4], c.r[4].w[0] - 10280u);  call(c, 0x011AE0F0u, depth + 1u); if (c.pc != 0x00327DD0u) [[unlikely]] return; }
L_00327DD0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00327DE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 10148u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00327E08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327E04u);  if (depth < kMaxDepth) unit_0089(c, 355u, depth + 1u); else { c.pc = 0x00327CA0u; return; } if (c.pc != 0x00327E04u) [[unlikely]] return; }
L_00327E04:
    c.budget -= 1;
L_00327E08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 10184u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 10192u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] - 10264u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] - 10260u), c.r[2].w[0]);
    c.budget -= 8;
L_00327E28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 10276u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_00327FA8; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 10172u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00327F28; } }
    c.budget -= 1;
L_00327E50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - 10320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327E60u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0089(c, 342u, depth + 1u); else { c.pc = 0x003274C0u; return; } if (c.pc != 0x00327E60u) [[unlikely]] return; }
L_00327E60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327E68u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0089(c, 342u, depth + 1u); else { c.pc = 0x003274C0u; return; } if (c.pc != 0x00327E68u) [[unlikely]] return; }
L_00327E68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], ld32((c.r[1].w[0] - 10312u)));
    c.r[7].d[0] = ld8((c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[6].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 2u));
    set32(c.r[7], c.r[7].w[0] << 24);
    set32(c.r[6], c.r[6].w[0] << 16);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 3u));
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327EA8u); st32((c.r[1].w[0] - 10172u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0089(c, 342u, depth + 1u); else { c.pc = 0x003274C0u; return; } if (c.pc != 0x00327EA8u) [[unlikely]] return; }
L_00327EA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 10312u)));
    set32(c.r[5], c.r[5].w[0] - 4600u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327EC0u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0006(c, 189u, depth + 1u); else { c.pc = 0x0011A900u; return; } if (c.pc != 0x00327EC0u) [[unlikely]] return; }
L_00327EC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_00327F00; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 10312u)));
    set32(c.r[5], c.r[5].w[0] - 4592u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327EDCu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0006(c, 189u, depth + 1u); else { c.pc = 0x0011A900u; return; } if (c.pc != 0x00327EDCu) [[unlikely]] return; }
L_00327EDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_00327FE8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 10172u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327EF4u); set32(c.r[4], c.r[4].w[0] - 10320u);  if (depth < kMaxDepth) unit_0089(c, 342u, depth + 1u); else { c.pc = 0x003274C0u; return; } if (c.pc != 0x00327EF4u) [[unlikely]] return; }
L_00327EF4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] - 10172u), 0u);
    c.budget -= 3;
L_00327F00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 10308u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_00327FE8; } }
    set32(c.r[2], ld32((c.r[1].w[0] - 10172u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00327E50u | kUnwind; return; } goto L_00327E50; } }
    c.budget -= 1;
L_00327F28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 10204u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 10208u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 10172u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] - 10276u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] - 10280u), c.r[2].w[0]);
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_00327F60; } }
    st32((c.r[1].w[0] - 10276u), c.r[4].w[0]);
    c.budget -= 1;
L_00327F60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[6], ld32((c.r[1].w[0] - 10276u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 10208u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327F7Cu); set32(c.r[4], c.r[4].w[0] - 10320u);  if (depth < kMaxDepth) unit_0089(c, 340u, depth + 1u); else { c.pc = 0x00327430u; return; } if (c.pc != 0x00327F7Cu) [[unlikely]] return; }
L_00327F7C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 10308u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_00327FE8; } }
    set32(c.r[3], ld32((c.r[1].w[0] - 10172u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 10276u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    st32((c.r[1].w[0] - 10172u), c.r[2].w[0]);
    c.budget -= 7;
L_00327FA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[4], c.r[4].w[0] - 10280u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327FB8u); set32(c.r[5], 0u + 1u);  call(c, 0x011AE380u, depth + 1u); if (c.pc != 0x00327FB8u) [[unlikely]] return; }
L_00327FB8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00327FE8; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);  if (t) { goto L_00327FD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 10308u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_008A(c, 5u, depth); } }
    c.budget -= 1;
L_00327FD8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 10260u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00327E28u | kUnwind; return; } goto L_00327E28; } }
L_00327FE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[6].d[0] = ld8((c.r[1].w[0] - 10295u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 10196u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00C90000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] - 10291u));
    c.budget -= 6;
    [[clang::musttail]] return unit_008A(c, 1u, depth);
}

}
